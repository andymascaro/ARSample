// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWidget;
#ifdef UMG_WidgetBinding_generated_h
#error "WidgetBinding.generated.h already included, missing '#pragma once' in WidgetBinding.h"
#endif
#define UMG_WidgetBinding_generated_h

#define Engine_Source_Runtime_UMG_Public_Binding_WidgetBinding_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UWidget**)Z_Param__Result=this->GetValue(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Binding_WidgetBinding_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UWidget**)Z_Param__Result=this->GetValue(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Binding_WidgetBinding_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWidgetBinding(); \
	friend UMG_API class UClass* Z_Construct_UClass_UWidgetBinding(); \
public: \
	DECLARE_CLASS(UWidgetBinding, UPropertyBinding, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UWidgetBinding) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_UMG_Public_Binding_WidgetBinding_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUWidgetBinding(); \
	friend UMG_API class UClass* Z_Construct_UClass_UWidgetBinding(); \
public: \
	DECLARE_CLASS(UWidgetBinding, UPropertyBinding, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UWidgetBinding) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_UMG_Public_Binding_WidgetBinding_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWidgetBinding(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWidgetBinding) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWidgetBinding); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidgetBinding); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWidgetBinding(UWidgetBinding&&); \
	NO_API UWidgetBinding(const UWidgetBinding&); \
public:


#define Engine_Source_Runtime_UMG_Public_Binding_WidgetBinding_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWidgetBinding(UWidgetBinding&&); \
	NO_API UWidgetBinding(const UWidgetBinding&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWidgetBinding); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidgetBinding); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWidgetBinding)


#define Engine_Source_Runtime_UMG_Public_Binding_WidgetBinding_h_16_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_UMG_Public_Binding_WidgetBinding_h_13_PROLOG
#define Engine_Source_Runtime_UMG_Public_Binding_WidgetBinding_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Binding_WidgetBinding_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Binding_WidgetBinding_h_16_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Binding_WidgetBinding_h_16_INCLASS \
	Engine_Source_Runtime_UMG_Public_Binding_WidgetBinding_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Binding_WidgetBinding_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Binding_WidgetBinding_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Binding_WidgetBinding_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Binding_WidgetBinding_h_16_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Binding_WidgetBinding_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Binding_WidgetBinding_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
