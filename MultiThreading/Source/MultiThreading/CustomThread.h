#pragma once
#include "HAL/Runnable.h"
#include "HAL/RunnableThread.h"
#include "Runtime/Core/Public/HAL/CriticalSection.h"

class AMultiThreadingCharacter;
/**
* Note: Taken from FRunnable Class 
* 
* Interface for "runnable" objects.
*
* A runnable object is an object that is "run" on an arbitrary thread. The call usage pattern is
* Init(), Run(), Exit(). The thread that is going to "run" this object always uses those calling
* semantics. It does this on the thread that is created so that any thread specific uses (TLS, etc.)
* are available in the contexts of those calls. A "runnable" does all initialization in Init().
*
* If initialization fails, the thread stops execution and returns an error code. If it succeeds,
* Run() is called where the real threaded work is done. Upon completion, Exit() is called to allow
* correct clean up.
*
* Note: This thread will not run if MultiThreading is disable or System Doesn't support Multi threading
* I don't remember any cpu which doesn't support multi threading so I haven't used worked around for it
* 
*/

class FCustomThread : public FRunnable
{
public:
	/*
	 * Reference to custom thread we are going to create
	 **/
	FRunnableThread* Thread;
	
	// Thread Safe Counter
	FThreadSafeCounter StopTaskCounter;

	// Critical Section for this thread
	FCriticalSection Section;

	AMultiThreadingCharacter* character;

	FCustomThread();
	
	/**
	* Pass PentumFOWManager ref 
	*
	* @params		APentumFOWManager * manager
	* @returns		
	* 
	*/
	FCustomThread(AMultiThreadingCharacter* character);
	
	~FCustomThread();

	/**
	* Initialize the Thread
	* This needs to return true if Thread needs to start
	*
	* @returns		bool
	* 
	*/
	virtual bool Init();

	/**
	* Thread Run commands
	* Kind of like tick
	*
	* @returns		uint32
	* 
	*/
	virtual uint32 Run();

	/**
	* Stop the thread
	*
	* @returns		void
	* 
	*/
	virtual void Stop();

	/**
	* Tell thread to stop and wait for its completion.
	*
	* @returns		void
	* 
	*/
	void Shutdown();
	
};
