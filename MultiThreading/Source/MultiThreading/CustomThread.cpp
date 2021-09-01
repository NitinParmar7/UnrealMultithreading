#include "CustomThread.h"
#include "MultiThreadingCharacter.h"

FCustomThread::FCustomThread()
{
}

FCustomThread::FCustomThread(AMultiThreadingCharacter* character)
{
	this->character = character;
	this->Thread = FRunnableThread::Create(this, TEXT("CustomThread"), 0U, EThreadPriority::TPri_Normal);
}

FCustomThread::~FCustomThread()
{
	delete this->Thread;
	this->Thread = nullptr;
}

bool FCustomThread::Init()
{
	if(this->character)
	{
		return true;
	}
	return  false;
}

uint32 FCustomThread::Run()
{
	FPlatformProcess::Sleep(0.2f);
	while (StopTaskCounter.GetValue() == 0 && this->character->IsValidLowLevel())
	{
		Section.Lock();
		this->character->number++;
		FPlatformProcess::Sleep(this->character->lastDeltaTime);
		Section.Unlock();
	}
	return  0;
}

void FCustomThread::Stop()
{
	StopTaskCounter.Increment();
}

void FCustomThread::Shutdown()
{
	Stop();
	Thread->WaitForCompletion();
}
