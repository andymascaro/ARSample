// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FAIStimulus;
class UAISense;
struct FActorPerceptionBlueprintInfo;
class UAISenseConfig_Sight;
#ifdef AIMODULE_AIPerceptionComponent_generated_h
#error "AIPerceptionComponent.generated.h already included, missing '#pragma once' in AIPerceptionComponent.h"
#endif
#define AIMODULE_AIPerceptionComponent_generated_h

#define Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionComponent_h_144_GENERATED_BODY \
	friend AIMODULE_API class UScriptStruct* Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo(); \
	AIMODULE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionComponent_h_22_DELEGATE \
struct _Script_AIModule_eventActorPerceptionUpdatedDelegate_Parms \
{ \
	AActor* Actor; \
	FAIStimulus Stimulus; \
}; \
static inline void FActorPerceptionUpdatedDelegate_DelegateWrapper(const FMulticastScriptDelegate& ActorPerceptionUpdatedDelegate, AActor* Actor, FAIStimulus Stimulus) \
{ \
	_Script_AIModule_eventActorPerceptionUpdatedDelegate_Parms Parms; \
	Parms.Actor=Actor; \
	Parms.Stimulus=Stimulus; \
	ActorPerceptionUpdatedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionComponent_h_21_DELEGATE \
struct _Script_AIModule_eventPerceptionUpdatedDelegate_Parms \
{ \
	TArray<AActor*> UpdatedActors; \
}; \
static inline void FPerceptionUpdatedDelegate_DelegateWrapper(const FMulticastScriptDelegate& PerceptionUpdatedDelegate, const TArray<AActor*>& UpdatedActors) \
{ \
	_Script_AIModule_eventPerceptionUpdatedDelegate_Parms Parms; \
	Parms.UpdatedActors=UpdatedActors; \
	PerceptionUpdatedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionComponent_h_167_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetSenseEnabled) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_SenseClass); \
		P_GET_UBOOL(Z_Param_bEnable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSenseEnabled(Z_Param_SenseClass,Z_Param_bEnable); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActorsPerception) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_STRUCT_REF(FActorPerceptionBlueprintInfo,Z_Param_Out_Info); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetActorsPerception(Z_Param_Actor,Z_Param_Out_Info); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPerceivedActors) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_SenseToUse); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_OutActors); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetPerceivedActors(Z_Param_SenseToUse,Z_Param_Out_OutActors); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetKnownPerceivedActors) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_SenseToUse); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_OutActors); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetKnownPerceivedActors(Z_Param_SenseToUse,Z_Param_Out_OutActors); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentlyPerceivedActors) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_SenseToUse); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_OutActors); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetCurrentlyPerceivedActors(Z_Param_SenseToUse,Z_Param_Out_OutActors); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPerceivedHostileActors) \
	{ \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_OutActors); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetPerceivedHostileActors(Z_Param_Out_OutActors); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestStimuliListenerUpdate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->RequestStimuliListenerUpdate(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSightConfig) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAISenseConfig_Sight**)Z_Param__Result=this->GetSightConfig(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOwnerEndPlay) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_PROPERTY(UByteProperty,Z_Param_EndPlayReason); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnOwnerEndPlay(Z_Param_Actor,EEndPlayReason::Type(Z_Param_EndPlayReason)); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionComponent_h_167_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetSenseEnabled) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_SenseClass); \
		P_GET_UBOOL(Z_Param_bEnable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSenseEnabled(Z_Param_SenseClass,Z_Param_bEnable); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActorsPerception) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_STRUCT_REF(FActorPerceptionBlueprintInfo,Z_Param_Out_Info); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetActorsPerception(Z_Param_Actor,Z_Param_Out_Info); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPerceivedActors) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_SenseToUse); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_OutActors); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetPerceivedActors(Z_Param_SenseToUse,Z_Param_Out_OutActors); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetKnownPerceivedActors) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_SenseToUse); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_OutActors); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetKnownPerceivedActors(Z_Param_SenseToUse,Z_Param_Out_OutActors); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentlyPerceivedActors) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_SenseToUse); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_OutActors); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetCurrentlyPerceivedActors(Z_Param_SenseToUse,Z_Param_Out_OutActors); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPerceivedHostileActors) \
	{ \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_OutActors); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetPerceivedHostileActors(Z_Param_Out_OutActors); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestStimuliListenerUpdate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->RequestStimuliListenerUpdate(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSightConfig) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAISenseConfig_Sight**)Z_Param__Result=this->GetSightConfig(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOwnerEndPlay) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_PROPERTY(UByteProperty,Z_Param_EndPlayReason); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnOwnerEndPlay(Z_Param_Actor,EEndPlayReason::Type(Z_Param_EndPlayReason)); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionComponent_h_167_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAIPerceptionComponent(); \
	friend AIMODULE_API class UClass* Z_Construct_UClass_UAIPerceptionComponent(); \
public: \
	DECLARE_CLASS(UAIPerceptionComponent, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UAIPerceptionComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionComponent_h_167_INCLASS \
private: \
	static void StaticRegisterNativesUAIPerceptionComponent(); \
	friend AIMODULE_API class UClass* Z_Construct_UClass_UAIPerceptionComponent(); \
public: \
	DECLARE_CLASS(UAIPerceptionComponent, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UAIPerceptionComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionComponent_h_167_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAIPerceptionComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAIPerceptionComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAIPerceptionComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAIPerceptionComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAIPerceptionComponent(UAIPerceptionComponent&&); \
	NO_API UAIPerceptionComponent(const UAIPerceptionComponent&); \
public:


#define Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionComponent_h_167_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAIPerceptionComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAIPerceptionComponent(UAIPerceptionComponent&&); \
	NO_API UAIPerceptionComponent(const UAIPerceptionComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAIPerceptionComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAIPerceptionComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAIPerceptionComponent)


#define Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionComponent_h_167_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SensesConfig() { return STRUCT_OFFSET(UAIPerceptionComponent, SensesConfig); } \
	FORCEINLINE static uint32 __PPO__DominantSense() { return STRUCT_OFFSET(UAIPerceptionComponent, DominantSense); } \
	FORCEINLINE static uint32 __PPO__AIOwner() { return STRUCT_OFFSET(UAIPerceptionComponent, AIOwner); }


#define Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionComponent_h_164_PROLOG
#define Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionComponent_h_167_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionComponent_h_167_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionComponent_h_167_RPC_WRAPPERS \
	Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionComponent_h_167_INCLASS \
	Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionComponent_h_167_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionComponent_h_167_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionComponent_h_167_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionComponent_h_167_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionComponent_h_167_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionComponent_h_167_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AIPerceptionComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
