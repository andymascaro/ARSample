// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MatineeActor_generated_h
#error "MatineeActor.generated.h already included, missing '#pragma once' in MatineeActor.h"
#endif
#define ENGINE_MatineeActor_generated_h

#define Engine_Source_Runtime_Engine_Classes_Matinee_MatineeActor_h_48_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FInterpGroupActorInfo(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Matinee_MatineeActor_h_25_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FCameraCutInfo(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Matinee_MatineeActor_h_18_DELEGATE \
static inline void FOnMatineeEvent_DelegateWrapper(const FMulticastScriptDelegate& OnMatineeEvent) \
{ \
	OnMatineeEvent.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Engine_Source_Runtime_Engine_Classes_Matinee_MatineeActor_h_61_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEnableGroupByName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_GroupName); \
		P_GET_UBOOL(Z_Param_bEnable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->EnableGroupByName(Z_Param_GroupName,Z_Param_bEnable); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLoopingState) \
	{ \
		P_GET_UBOOL(Z_Param_bNewLooping); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetLoopingState(Z_Param_bNewLooping); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChangePlaybackDirection) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ChangePlaybackDirection(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPosition) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewPosition); \
		P_GET_UBOOL(Z_Param_bJump); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetPosition(Z_Param_NewPosition,Z_Param_bJump); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPause) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Pause(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReverse) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Reverse(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStop) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Stop(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlay) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Play(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Matinee_MatineeActor_h_61_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEnableGroupByName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_GroupName); \
		P_GET_UBOOL(Z_Param_bEnable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->EnableGroupByName(Z_Param_GroupName,Z_Param_bEnable); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLoopingState) \
	{ \
		P_GET_UBOOL(Z_Param_bNewLooping); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetLoopingState(Z_Param_bNewLooping); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChangePlaybackDirection) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ChangePlaybackDirection(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPosition) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewPosition); \
		P_GET_UBOOL(Z_Param_bJump); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetPosition(Z_Param_NewPosition,Z_Param_bJump); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPause) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Pause(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReverse) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Reverse(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStop) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Stop(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlay) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Play(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Matinee_MatineeActor_h_61_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMatineeActor(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_AMatineeActor(); \
public: \
	DECLARE_CLASS(AMatineeActor, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(AMatineeActor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Engine_Classes_Matinee_MatineeActor_h_61_INCLASS \
private: \
	static void StaticRegisterNativesAMatineeActor(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_AMatineeActor(); \
public: \
	DECLARE_CLASS(AMatineeActor, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(AMatineeActor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Engine_Classes_Matinee_MatineeActor_h_61_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMatineeActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMatineeActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMatineeActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMatineeActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMatineeActor(AMatineeActor&&); \
	NO_API AMatineeActor(const AMatineeActor&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Matinee_MatineeActor_h_61_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMatineeActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMatineeActor(AMatineeActor&&); \
	NO_API AMatineeActor(const AMatineeActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMatineeActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMatineeActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMatineeActor)


#define Engine_Source_Runtime_Engine_Classes_Matinee_MatineeActor_h_61_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ReplicationForceIsPlaying() { return STRUCT_OFFSET(AMatineeActor, ReplicationForceIsPlaying); }


#define Engine_Source_Runtime_Engine_Classes_Matinee_MatineeActor_h_58_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Matinee_MatineeActor_h_61_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Matinee_MatineeActor_h_61_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Matinee_MatineeActor_h_61_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Matinee_MatineeActor_h_61_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Matinee_MatineeActor_h_61_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Matinee_MatineeActor_h_61_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Matinee_MatineeActor_h_61_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Matinee_MatineeActor_h_61_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Matinee_MatineeActor_h_61_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Matinee_MatineeActor_h_61_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MatineeActor."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Matinee_MatineeActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
