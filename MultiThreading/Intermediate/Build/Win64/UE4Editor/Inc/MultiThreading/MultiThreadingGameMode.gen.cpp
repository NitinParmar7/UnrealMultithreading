// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MultiThreading/MultiThreadingGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiThreadingGameMode() {}
// Cross Module References
	MULTITHREADING_API UClass* Z_Construct_UClass_AMultiThreadingGameMode_NoRegister();
	MULTITHREADING_API UClass* Z_Construct_UClass_AMultiThreadingGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_MultiThreading();
// End Cross Module References
	void AMultiThreadingGameMode::StaticRegisterNativesAMultiThreadingGameMode()
	{
	}
	UClass* Z_Construct_UClass_AMultiThreadingGameMode_NoRegister()
	{
		return AMultiThreadingGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AMultiThreadingGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMultiThreadingGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MultiThreading,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiThreadingGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MultiThreadingGameMode.h" },
		{ "ModuleRelativePath", "MultiThreadingGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMultiThreadingGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMultiThreadingGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMultiThreadingGameMode_Statics::ClassParams = {
		&AMultiThreadingGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMultiThreadingGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMultiThreadingGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMultiThreadingGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMultiThreadingGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMultiThreadingGameMode, 3890832037);
	template<> MULTITHREADING_API UClass* StaticClass<AMultiThreadingGameMode>()
	{
		return AMultiThreadingGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMultiThreadingGameMode(Z_Construct_UClass_AMultiThreadingGameMode, &AMultiThreadingGameMode::StaticClass, TEXT("/Script/MultiThreading"), TEXT("AMultiThreadingGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMultiThreadingGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
