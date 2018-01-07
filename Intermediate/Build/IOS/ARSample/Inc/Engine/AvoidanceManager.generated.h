// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMovementComponent;
struct FVector;
#ifdef ENGINE_AvoidanceManager_generated_h
#error "AvoidanceManager.generated.h already included, missing '#pragma once' in AvoidanceManager.h"
#endif
#define ENGINE_AvoidanceManager_generated_h

#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_AvoidanceManager_h_26_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FNavAvoidanceData(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_AvoidanceManager_h_89_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAvoidanceVelocityForComponent) \
	{ \
		P_GET_OBJECT(UMovementComponent,Z_Param_MovementComp); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetAvoidanceVelocityForComponent(Z_Param_MovementComp); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRegisterMovementComponent) \
	{ \
		P_GET_OBJECT(UMovementComponent,Z_Param_MovementComp); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_AvoidanceWeight); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->RegisterMovementComponent(Z_Param_MovementComp,Z_Param_AvoidanceWeight); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNewAvoidanceUID) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetNewAvoidanceUID(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetObjectCount) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetObjectCount(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_AvoidanceManager_h_89_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAvoidanceVelocityForComponent) \
	{ \
		P_GET_OBJECT(UMovementComponent,Z_Param_MovementComp); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetAvoidanceVelocityForComponent(Z_Param_MovementComp); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRegisterMovementComponent) \
	{ \
		P_GET_OBJECT(UMovementComponent,Z_Param_MovementComp); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_AvoidanceWeight); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->RegisterMovementComponent(Z_Param_MovementComp,Z_Param_AvoidanceWeight); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNewAvoidanceUID) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetNewAvoidanceUID(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetObjectCount) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetObjectCount(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_AvoidanceManager_h_89_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvoidanceManager(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UAvoidanceManager(); \
public: \
	DECLARE_CLASS(UAvoidanceManager, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAvoidanceManager) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_AvoidanceManager_h_89_INCLASS \
private: \
	static void StaticRegisterNativesUAvoidanceManager(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UAvoidanceManager(); \
public: \
	DECLARE_CLASS(UAvoidanceManager, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAvoidanceManager) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_AvoidanceManager_h_89_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAvoidanceManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAvoidanceManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAvoidanceManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvoidanceManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAvoidanceManager(UAvoidanceManager&&); \
	NO_API UAvoidanceManager(const UAvoidanceManager&); \
public:


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_AvoidanceManager_h_89_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAvoidanceManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAvoidanceManager(UAvoidanceManager&&); \
	NO_API UAvoidanceManager(const UAvoidanceManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAvoidanceManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvoidanceManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAvoidanceManager)


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_AvoidanceManager_h_89_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_AvoidanceManager_h_86_PROLOG
#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_AvoidanceManager_h_89_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_AvoidanceManager_h_89_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_AvoidanceManager_h_89_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_AvoidanceManager_h_89_INCLASS \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_AvoidanceManager_h_89_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_AvoidanceManager_h_89_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_AvoidanceManager_h_89_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_AvoidanceManager_h_89_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_AvoidanceManager_h_89_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_AvoidanceManager_h_89_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AvoidanceManager."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_AI_Navigation_AvoidanceManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
