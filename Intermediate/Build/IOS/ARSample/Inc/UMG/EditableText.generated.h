// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UMG_EditableText_generated_h
#error "EditableText.generated.h already included, missing '#pragma once' in EditableText.h"
#endif
#define UMG_EditableText_generated_h

#define Engine_Source_Runtime_UMG_Public_Components_EditableText_h_30_DELEGATE \
struct EditableText_eventOnEditableTextCommittedEvent_Parms \
{ \
	FText Text; \
	TEnumAsByte<ETextCommit::Type> CommitMethod; \
}; \
static inline void FOnEditableTextCommittedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnEditableTextCommittedEvent, FText const& Text, ETextCommit::Type CommitMethod) \
{ \
	EditableText_eventOnEditableTextCommittedEvent_Parms Parms; \
	Parms.Text=Text; \
	Parms.CommitMethod=CommitMethod; \
	OnEditableTextCommittedEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_UMG_Public_Components_EditableText_h_29_DELEGATE \
struct EditableText_eventOnEditableTextChangedEvent_Parms \
{ \
	FText Text; \
}; \
static inline void FOnEditableTextChangedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnEditableTextChangedEvent, FText const& Text) \
{ \
	EditableText_eventOnEditableTextChangedEvent_Parms Parms; \
	Parms.Text=Text; \
	OnEditableTextChangedEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_UMG_Public_Components_EditableText_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetIsReadOnly) \
	{ \
		P_GET_UBOOL(Z_Param_InbIsReadyOnly); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetIsReadOnly(Z_Param_InbIsReadyOnly); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetHintText) \
	{ \
		P_GET_PROPERTY(UTextProperty,Z_Param_InHintText); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetHintText(Z_Param_InHintText); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIsPassword) \
	{ \
		P_GET_UBOOL(Z_Param_InbIsPassword); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetIsPassword(Z_Param_InbIsPassword); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetText) \
	{ \
		P_GET_PROPERTY(UTextProperty,Z_Param_InText); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetText(Z_Param_InText); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetText) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=this->GetText(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Components_EditableText_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetIsReadOnly) \
	{ \
		P_GET_UBOOL(Z_Param_InbIsReadyOnly); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetIsReadOnly(Z_Param_InbIsReadyOnly); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetHintText) \
	{ \
		P_GET_PROPERTY(UTextProperty,Z_Param_InHintText); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetHintText(Z_Param_InHintText); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIsPassword) \
	{ \
		P_GET_UBOOL(Z_Param_InbIsPassword); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetIsPassword(Z_Param_InbIsPassword); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetText) \
	{ \
		P_GET_PROPERTY(UTextProperty,Z_Param_InText); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetText(Z_Param_InText); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetText) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=this->GetText(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Components_EditableText_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditableText(); \
	friend UMG_API class UClass* Z_Construct_UClass_UEditableText(); \
public: \
	DECLARE_CLASS(UEditableText, UWidget, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UEditableText) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_UMG_Public_Components_EditableText_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUEditableText(); \
	friend UMG_API class UClass* Z_Construct_UClass_UEditableText(); \
public: \
	DECLARE_CLASS(UEditableText, UWidget, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UEditableText) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_UMG_Public_Components_EditableText_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditableText(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditableText) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditableText); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditableText); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditableText(UEditableText&&); \
	NO_API UEditableText(const UEditableText&); \
public:


#define Engine_Source_Runtime_UMG_Public_Components_EditableText_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditableText(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditableText(UEditableText&&); \
	NO_API UEditableText(const UEditableText&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditableText); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditableText); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditableText)


#define Engine_Source_Runtime_UMG_Public_Components_EditableText_h_25_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_UMG_Public_Components_EditableText_h_22_PROLOG
#define Engine_Source_Runtime_UMG_Public_Components_EditableText_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_EditableText_h_25_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_EditableText_h_25_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Components_EditableText_h_25_INCLASS \
	Engine_Source_Runtime_UMG_Public_Components_EditableText_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Components_EditableText_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_EditableText_h_25_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_EditableText_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_EditableText_h_25_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_EditableText_h_25_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class EditableText."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Components_EditableText_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
