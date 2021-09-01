// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MULTITHREADING_MultiThreadingCharacter_generated_h
#error "MultiThreadingCharacter.generated.h already included, missing '#pragma once' in MultiThreadingCharacter.h"
#endif
#define MULTITHREADING_MultiThreadingCharacter_generated_h

#define MultiThreading_Source_MultiThreading_MultiThreadingCharacter_h_15_SPARSE_DATA
#define MultiThreading_Source_MultiThreading_MultiThreadingCharacter_h_15_RPC_WRAPPERS
#define MultiThreading_Source_MultiThreading_MultiThreadingCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define MultiThreading_Source_MultiThreading_MultiThreadingCharacter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMultiThreadingCharacter(); \
	friend struct Z_Construct_UClass_AMultiThreadingCharacter_Statics; \
public: \
	DECLARE_CLASS(AMultiThreadingCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MultiThreading"), NO_API) \
	DECLARE_SERIALIZER(AMultiThreadingCharacter)


#define MultiThreading_Source_MultiThreading_MultiThreadingCharacter_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMultiThreadingCharacter(); \
	friend struct Z_Construct_UClass_AMultiThreadingCharacter_Statics; \
public: \
	DECLARE_CLASS(AMultiThreadingCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MultiThreading"), NO_API) \
	DECLARE_SERIALIZER(AMultiThreadingCharacter)


#define MultiThreading_Source_MultiThreading_MultiThreadingCharacter_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMultiThreadingCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMultiThreadingCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMultiThreadingCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMultiThreadingCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMultiThreadingCharacter(AMultiThreadingCharacter&&); \
	NO_API AMultiThreadingCharacter(const AMultiThreadingCharacter&); \
public:


#define MultiThreading_Source_MultiThreading_MultiThreadingCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMultiThreadingCharacter(AMultiThreadingCharacter&&); \
	NO_API AMultiThreadingCharacter(const AMultiThreadingCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMultiThreadingCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMultiThreadingCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMultiThreadingCharacter)


#define MultiThreading_Source_MultiThreading_MultiThreadingCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AMultiThreadingCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AMultiThreadingCharacter, FollowCamera); }


#define MultiThreading_Source_MultiThreading_MultiThreadingCharacter_h_12_PROLOG
#define MultiThreading_Source_MultiThreading_MultiThreadingCharacter_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MultiThreading_Source_MultiThreading_MultiThreadingCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	MultiThreading_Source_MultiThreading_MultiThreadingCharacter_h_15_SPARSE_DATA \
	MultiThreading_Source_MultiThreading_MultiThreadingCharacter_h_15_RPC_WRAPPERS \
	MultiThreading_Source_MultiThreading_MultiThreadingCharacter_h_15_INCLASS \
	MultiThreading_Source_MultiThreading_MultiThreadingCharacter_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MultiThreading_Source_MultiThreading_MultiThreadingCharacter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MultiThreading_Source_MultiThreading_MultiThreadingCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	MultiThreading_Source_MultiThreading_MultiThreadingCharacter_h_15_SPARSE_DATA \
	MultiThreading_Source_MultiThreading_MultiThreadingCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	MultiThreading_Source_MultiThreading_MultiThreadingCharacter_h_15_INCLASS_NO_PURE_DECLS \
	MultiThreading_Source_MultiThreading_MultiThreadingCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MULTITHREADING_API UClass* StaticClass<class AMultiThreadingCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MultiThreading_Source_MultiThreading_MultiThreadingCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
