// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FKey;
#ifdef ENGINE_PlayerInput_generated_h
#error "PlayerInput.generated.h already included, missing '#pragma once' in PlayerInput.h"
#endif
#define ENGINE_PlayerInput_generated_h

#define Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_204_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FInputAxisKeyMapping(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_136_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FInputActionKeyMapping(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_117_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FInputAxisConfigEntry(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_86_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FInputAxisProperties(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_32_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FKeyBind(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_263_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execClearSmoothing) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClearSmoothing(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInvertAxis) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_AxisName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->InvertAxis(Z_Param_AxisName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInvertAxisKey) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_AxisKey); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->InvertAxisKey(Z_Param_AxisKey); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBind) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BindName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Command); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetBind(Z_Param_BindName,Z_Param_Command); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMouseSensitivity) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Sensitivity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetMouseSensitivity(Z_Param_Sensitivity); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_263_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClearSmoothing) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClearSmoothing(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInvertAxis) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_AxisName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->InvertAxis(Z_Param_AxisName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInvertAxisKey) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_AxisKey); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->InvertAxisKey(Z_Param_AxisKey); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBind) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BindName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Command); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetBind(Z_Param_BindName,Z_Param_Command); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMouseSensitivity) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Sensitivity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetMouseSensitivity(Z_Param_Sensitivity); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_263_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerInput(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UPlayerInput(); \
public: \
	DECLARE_CLASS(UPlayerInput, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UPlayerInput) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	DECLARE_WITHIN(APlayerController) \
	static const TCHAR* StaticConfigName() {return TEXT("Input");} \



#define Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_263_INCLASS \
private: \
	static void StaticRegisterNativesUPlayerInput(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UPlayerInput(); \
public: \
	DECLARE_CLASS(UPlayerInput, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UPlayerInput) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	DECLARE_WITHIN(APlayerController) \
	static const TCHAR* StaticConfigName() {return TEXT("Input");} \



#define Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_263_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerInput(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerInput) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerInput); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerInput); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerInput(UPlayerInput&&); \
	NO_API UPlayerInput(const UPlayerInput&); \
public:


#define Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_263_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerInput(UPlayerInput&&); \
	NO_API UPlayerInput(const UPlayerInput&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerInput); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerInput); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPlayerInput)


#define Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_263_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_260_PROLOG
#define Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_263_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_263_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_263_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_263_INCLASS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_263_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_263_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_263_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_263_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_263_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_263_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
