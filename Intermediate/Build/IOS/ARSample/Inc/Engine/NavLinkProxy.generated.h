// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FVector;
#ifdef ENGINE_NavLinkProxy_generated_h
#error "NavLinkProxy.generated.h already included, missing '#pragma once' in NavLinkProxy.h"
#endif
#define ENGINE_NavLinkProxy_generated_h

#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkProxy_h_21_DELEGATE \
struct _Script_Engine_eventSmartLinkReachedSignature_Parms \
{ \
	AActor* MovingActor; \
	FVector DestinationPoint; \
}; \
static inline void FSmartLinkReachedSignature_DelegateWrapper(const FMulticastScriptDelegate& SmartLinkReachedSignature, AActor* MovingActor, FVector const& DestinationPoint) \
{ \
	_Script_Engine_eventSmartLinkReachedSignature_Parms Parms; \
	Parms.MovingActor=MovingActor; \
	Parms.DestinationPoint=DestinationPoint; \
	SmartLinkReachedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkProxy_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHasMovingAgents) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->HasMovingAgents(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSmartLinkEnabled) \
	{ \
		P_GET_UBOOL(Z_Param_bEnabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSmartLinkEnabled(Z_Param_bEnabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsSmartLinkEnabled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsSmartLinkEnabled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResumePathFollowing) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Agent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ResumePathFollowing(Z_Param_Agent); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkProxy_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHasMovingAgents) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->HasMovingAgents(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSmartLinkEnabled) \
	{ \
		P_GET_UBOOL(Z_Param_bEnabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSmartLinkEnabled(Z_Param_bEnabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsSmartLinkEnabled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsSmartLinkEnabled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResumePathFollowing) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Agent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ResumePathFollowing(Z_Param_Agent); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkProxy_h_26_EVENT_PARMS \
	struct NavLinkProxy_eventReceiveSmartLinkReached_Parms \
	{ \
		AActor* Agent; \
		FVector Destination; \
	};


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkProxy_h_26_CALLBACK_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkProxy_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANavLinkProxy(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_ANavLinkProxy(); \
public: \
	DECLARE_CLASS(ANavLinkProxy, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(ANavLinkProxy) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<ANavLinkProxy*>(this); }


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkProxy_h_26_INCLASS \
private: \
	static void StaticRegisterNativesANavLinkProxy(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_ANavLinkProxy(); \
public: \
	DECLARE_CLASS(ANavLinkProxy, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(ANavLinkProxy) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<ANavLinkProxy*>(this); }


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkProxy_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANavLinkProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANavLinkProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANavLinkProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANavLinkProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANavLinkProxy(ANavLinkProxy&&); \
	NO_API ANavLinkProxy(const ANavLinkProxy&); \
public:


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkProxy_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANavLinkProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANavLinkProxy(ANavLinkProxy&&); \
	NO_API ANavLinkProxy(const ANavLinkProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANavLinkProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANavLinkProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANavLinkProxy)


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkProxy_h_26_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SmartLinkComp() { return STRUCT_OFFSET(ANavLinkProxy, SmartLinkComp); } \
	FORCEINLINE static uint32 __PPO__OnSmartLinkReached() { return STRUCT_OFFSET(ANavLinkProxy, OnSmartLinkReached); }


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkProxy_h_23_PROLOG \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkProxy_h_26_EVENT_PARMS


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkProxy_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkProxy_h_26_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkProxy_h_26_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkProxy_h_26_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkProxy_h_26_INCLASS \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkProxy_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkProxy_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkProxy_h_26_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkProxy_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkProxy_h_26_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkProxy_h_26_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkProxy_h_26_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class NavLinkProxy."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
