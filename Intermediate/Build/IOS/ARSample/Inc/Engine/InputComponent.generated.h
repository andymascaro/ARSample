// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FKey;
#ifdef ENGINE_InputComponent_generated_h
#error "InputComponent.generated.h already included, missing '#pragma once' in InputComponent.h"
#endif
#define ENGINE_InputComponent_generated_h

#define Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_481_DELEGATE \
struct _Script_Engine_eventInputGestureHandlerDynamicSignature_Parms \
{ \
	float Value; \
}; \
static inline void FInputGestureHandlerDynamicSignature_DelegateWrapper(const FScriptDelegate& InputGestureHandlerDynamicSignature, float Value) \
{ \
	_Script_Engine_eventInputGestureHandlerDynamicSignature_Parms Parms; \
	Parms.Value=Value; \
	InputGestureHandlerDynamicSignature.ProcessDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_424_DELEGATE \
struct _Script_Engine_eventInputVectorAxisHandlerDynamicSignature_Parms \
{ \
	FVector AxisValue; \
}; \
static inline void FInputVectorAxisHandlerDynamicSignature_DelegateWrapper(const FScriptDelegate& InputVectorAxisHandlerDynamicSignature, FVector AxisValue) \
{ \
	_Script_Engine_eventInputVectorAxisHandlerDynamicSignature_Parms Parms; \
	Parms.AxisValue=AxisValue; \
	InputVectorAxisHandlerDynamicSignature.ProcessDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_332_DELEGATE \
struct _Script_Engine_eventInputAxisHandlerDynamicSignature_Parms \
{ \
	float AxisValue; \
}; \
static inline void FInputAxisHandlerDynamicSignature_DelegateWrapper(const FScriptDelegate& InputAxisHandlerDynamicSignature, float AxisValue) \
{ \
	_Script_Engine_eventInputAxisHandlerDynamicSignature_Parms Parms; \
	Parms.AxisValue=AxisValue; \
	InputAxisHandlerDynamicSignature.ProcessDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_285_DELEGATE \
struct _Script_Engine_eventInputTouchHandlerDynamicSignature_Parms \
{ \
	TEnumAsByte<ETouchIndex::Type> FingerIndex; \
	FVector Location; \
}; \
static inline void FInputTouchHandlerDynamicSignature_DelegateWrapper(const FScriptDelegate& InputTouchHandlerDynamicSignature, ETouchIndex::Type FingerIndex, FVector Location) \
{ \
	_Script_Engine_eventInputTouchHandlerDynamicSignature_Parms Parms; \
	Parms.FingerIndex=FingerIndex; \
	Parms.Location=Location; \
	InputTouchHandlerDynamicSignature.ProcessDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_108_DELEGATE \
struct _Script_Engine_eventInputActionHandlerDynamicSignature_Parms \
{ \
	FKey Key; \
}; \
static inline void FInputActionHandlerDynamicSignature_DelegateWrapper(const FScriptDelegate& InputActionHandlerDynamicSignature, FKey Key) \
{ \
	_Script_Engine_eventInputActionHandlerDynamicSignature_Parms Parms; \
	Parms.Key=Key; \
	InputActionHandlerDynamicSignature.ProcessDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_552_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetControllerAnalogStickState) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_WhichStick); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_StickX); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_StickY); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetControllerAnalogStickState(EControllerAnalogStick::Type(Z_Param_WhichStick),Z_Param_Out_StickX,Z_Param_Out_StickY); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetControllerMouseDelta) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_DeltaX); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_DeltaY); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetControllerMouseDelta(Z_Param_Out_DeltaX,Z_Param_Out_DeltaY); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetControllerKeyTimeDown) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetControllerKeyTimeDown(Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTouchState) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_FingerIndex); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_LocationX); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_LocationY); \
		P_GET_UBOOL_REF(Z_Param_Out_bIsCurrentlyPressed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetTouchState(Z_Param_FingerIndex,Z_Param_Out_LocationX,Z_Param_Out_LocationY,Z_Param_Out_bIsCurrentlyPressed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetControllerVectorKeyState) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetControllerVectorKeyState(Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetControllerAnalogKeyState) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetControllerAnalogKeyState(Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWasControllerKeyJustReleased) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->WasControllerKeyJustReleased(Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWasControllerKeyJustPressed) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->WasControllerKeyJustPressed(Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsControllerKeyDown) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsControllerKeyDown(Z_Param_Key); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_552_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetControllerAnalogStickState) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_WhichStick); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_StickX); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_StickY); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetControllerAnalogStickState(EControllerAnalogStick::Type(Z_Param_WhichStick),Z_Param_Out_StickX,Z_Param_Out_StickY); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetControllerMouseDelta) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_DeltaX); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_DeltaY); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetControllerMouseDelta(Z_Param_Out_DeltaX,Z_Param_Out_DeltaY); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetControllerKeyTimeDown) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetControllerKeyTimeDown(Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTouchState) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_FingerIndex); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_LocationX); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_LocationY); \
		P_GET_UBOOL_REF(Z_Param_Out_bIsCurrentlyPressed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetTouchState(Z_Param_FingerIndex,Z_Param_Out_LocationX,Z_Param_Out_LocationY,Z_Param_Out_bIsCurrentlyPressed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetControllerVectorKeyState) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetControllerVectorKeyState(Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetControllerAnalogKeyState) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetControllerAnalogKeyState(Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWasControllerKeyJustReleased) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->WasControllerKeyJustReleased(Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWasControllerKeyJustPressed) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->WasControllerKeyJustPressed(Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsControllerKeyDown) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsControllerKeyDown(Z_Param_Key); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_552_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputComponent(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UInputComponent(); \
public: \
	DECLARE_CLASS(UInputComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UInputComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Input");} \



#define Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_552_INCLASS \
private: \
	static void StaticRegisterNativesUInputComponent(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UInputComponent(); \
public: \
	DECLARE_CLASS(UInputComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UInputComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Input");} \



#define Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_552_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInputComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInputComponent(UInputComponent&&); \
	NO_API UInputComponent(const UInputComponent&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_552_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInputComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInputComponent(UInputComponent&&); \
	NO_API UInputComponent(const UInputComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputComponent)


#define Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_552_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_548_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_552_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_552_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_552_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_552_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_552_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_552_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_552_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_552_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_552_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_552_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class InputComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h


#define FOREACH_ENUM_ECONTROLLERANALOGSTICK(op) \
	op(EControllerAnalogStick::CAS_LeftStick) \
	op(EControllerAnalogStick::CAS_RightStick) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
