// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UMG_MultiLineEditableText_generated_h
#error "MultiLineEditableText.generated.h already included, missing '#pragma once' in MultiLineEditableText.h"
#endif
#define UMG_MultiLineEditableText_generated_h

#define Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableText_h_26_DELEGATE \
struct MultiLineEditableText_eventOnMultiLineEditableTextCommittedEvent_Parms \
{ \
	FText Text; \
	TEnumAsByte<ETextCommit::Type> CommitMethod; \
}; \
static inline void FOnMultiLineEditableTextCommittedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnMultiLineEditableTextCommittedEvent, FText const& Text, ETextCommit::Type CommitMethod) \
{ \
	MultiLineEditableText_eventOnMultiLineEditableTextCommittedEvent_Parms Parms; \
	Parms.Text=Text; \
	Parms.CommitMethod=CommitMethod; \
	OnMultiLineEditableTextCommittedEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableText_h_25_DELEGATE \
struct MultiLineEditableText_eventOnMultiLineEditableTextChangedEvent_Parms \
{ \
	FText Text; \
}; \
static inline void FOnMultiLineEditableTextChangedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnMultiLineEditableTextChangedEvent, FText const& Text) \
{ \
	MultiLineEditableText_eventOnMultiLineEditableTextChangedEvent_Parms Parms; \
	Parms.Text=Text; \
	OnMultiLineEditableTextChangedEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableText_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetIsReadOnly) \
	{ \
		P_GET_UBOOL(Z_Param_bReadOnly); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetIsReadOnly(Z_Param_bReadOnly); \
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


#define Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableText_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetIsReadOnly) \
	{ \
		P_GET_UBOOL(Z_Param_bReadOnly); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetIsReadOnly(Z_Param_bReadOnly); \
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


#define Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableText_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMultiLineEditableText(); \
	friend UMG_API class UClass* Z_Construct_UClass_UMultiLineEditableText(); \
public: \
	DECLARE_CLASS(UMultiLineEditableText, UTextLayoutWidget, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UMultiLineEditableText) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableText_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUMultiLineEditableText(); \
	friend UMG_API class UClass* Z_Construct_UClass_UMultiLineEditableText(); \
public: \
	DECLARE_CLASS(UMultiLineEditableText, UTextLayoutWidget, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UMultiLineEditableText) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableText_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMultiLineEditableText(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMultiLineEditableText) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMultiLineEditableText); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMultiLineEditableText); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMultiLineEditableText(UMultiLineEditableText&&); \
	NO_API UMultiLineEditableText(const UMultiLineEditableText&); \
public:


#define Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableText_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMultiLineEditableText(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMultiLineEditableText(UMultiLineEditableText&&); \
	NO_API UMultiLineEditableText(const UMultiLineEditableText&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMultiLineEditableText); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMultiLineEditableText); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMultiLineEditableText)


#define Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableText_h_21_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableText_h_18_PROLOG
#define Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableText_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableText_h_21_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableText_h_21_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableText_h_21_INCLASS \
	Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableText_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableText_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableText_h_21_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableText_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableText_h_21_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableText_h_21_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MultiLineEditableText."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableText_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
