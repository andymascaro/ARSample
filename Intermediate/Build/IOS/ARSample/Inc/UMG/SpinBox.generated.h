// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSlateColor;
#ifdef UMG_SpinBox_generated_h
#error "SpinBox.generated.h already included, missing '#pragma once' in SpinBox.h"
#endif
#define UMG_SpinBox_generated_h

#define Engine_Source_Runtime_UMG_Public_Components_SpinBox_h_26_DELEGATE \
static inline void FOnSpinBoxBeginSliderMovement_DelegateWrapper(const FMulticastScriptDelegate& OnSpinBoxBeginSliderMovement) \
{ \
	OnSpinBoxBeginSliderMovement.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Engine_Source_Runtime_UMG_Public_Components_SpinBox_h_25_DELEGATE \
struct SpinBox_eventOnSpinBoxValueCommittedEvent_Parms \
{ \
	float InValue; \
	TEnumAsByte<ETextCommit::Type> CommitMethod; \
}; \
static inline void FOnSpinBoxValueCommittedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnSpinBoxValueCommittedEvent, float InValue, ETextCommit::Type CommitMethod) \
{ \
	SpinBox_eventOnSpinBoxValueCommittedEvent_Parms Parms; \
	Parms.InValue=InValue; \
	Parms.CommitMethod=CommitMethod; \
	OnSpinBoxValueCommittedEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_UMG_Public_Components_SpinBox_h_24_DELEGATE \
struct SpinBox_eventOnSpinBoxValueChangedEvent_Parms \
{ \
	float InValue; \
}; \
static inline void FOnSpinBoxValueChangedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnSpinBoxValueChangedEvent, float InValue) \
{ \
	SpinBox_eventOnSpinBoxValueChangedEvent_Parms Parms; \
	Parms.InValue=InValue; \
	OnSpinBoxValueChangedEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_UMG_Public_Components_SpinBox_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetForegroundColor) \
	{ \
		P_GET_STRUCT(FSlateColor,Z_Param_InForegroundColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetForegroundColor(Z_Param_InForegroundColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearMaxSliderValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClearMaxSliderValue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMaxSliderValue) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetMaxSliderValue(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxSliderValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetMaxSliderValue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearMinSliderValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClearMinSliderValue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMinSliderValue) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetMinSliderValue(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMinSliderValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetMinSliderValue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearMaxValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClearMaxValue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMaxValue) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetMaxValue(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetMaxValue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearMinValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClearMinValue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMinValue) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetMinValue(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMinValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetMinValue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetValue) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetValue(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetValue(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Components_SpinBox_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetForegroundColor) \
	{ \
		P_GET_STRUCT(FSlateColor,Z_Param_InForegroundColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetForegroundColor(Z_Param_InForegroundColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearMaxSliderValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClearMaxSliderValue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMaxSliderValue) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetMaxSliderValue(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxSliderValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetMaxSliderValue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearMinSliderValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClearMinSliderValue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMinSliderValue) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetMinSliderValue(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMinSliderValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetMinSliderValue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearMaxValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClearMaxValue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMaxValue) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetMaxValue(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetMaxValue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearMinValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClearMinValue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMinValue) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetMinValue(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMinValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetMinValue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetValue) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetValue(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetValue(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Components_SpinBox_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSpinBox(); \
	friend UMG_API class UClass* Z_Construct_UClass_USpinBox(); \
public: \
	DECLARE_CLASS(USpinBox, UWidget, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(USpinBox) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_UMG_Public_Components_SpinBox_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUSpinBox(); \
	friend UMG_API class UClass* Z_Construct_UClass_USpinBox(); \
public: \
	DECLARE_CLASS(USpinBox, UWidget, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(USpinBox) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_UMG_Public_Components_SpinBox_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USpinBox(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USpinBox) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpinBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpinBox); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USpinBox(USpinBox&&); \
	NO_API USpinBox(const USpinBox&); \
public:


#define Engine_Source_Runtime_UMG_Public_Components_SpinBox_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USpinBox(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USpinBox(USpinBox&&); \
	NO_API USpinBox(const USpinBox&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpinBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpinBox); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USpinBox)


#define Engine_Source_Runtime_UMG_Public_Components_SpinBox_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MinValue() { return STRUCT_OFFSET(USpinBox, MinValue); } \
	FORCEINLINE static uint32 __PPO__MaxValue() { return STRUCT_OFFSET(USpinBox, MaxValue); } \
	FORCEINLINE static uint32 __PPO__MinSliderValue() { return STRUCT_OFFSET(USpinBox, MinSliderValue); } \
	FORCEINLINE static uint32 __PPO__MaxSliderValue() { return STRUCT_OFFSET(USpinBox, MaxSliderValue); }


#define Engine_Source_Runtime_UMG_Public_Components_SpinBox_h_18_PROLOG
#define Engine_Source_Runtime_UMG_Public_Components_SpinBox_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_SpinBox_h_21_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_SpinBox_h_21_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Components_SpinBox_h_21_INCLASS \
	Engine_Source_Runtime_UMG_Public_Components_SpinBox_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Components_SpinBox_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_SpinBox_h_21_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_SpinBox_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_SpinBox_h_21_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_SpinBox_h_21_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SpinBox."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Components_SpinBox_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
