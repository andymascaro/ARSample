// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWidget;
#ifdef UMG_WidgetSwitcher_generated_h
#error "WidgetSwitcher.generated.h already included, missing '#pragma once' in WidgetSwitcher.h"
#endif
#define UMG_WidgetSwitcher_generated_h

#define Engine_Source_Runtime_UMG_Public_Components_WidgetSwitcher_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetActiveWidget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UWidget**)Z_Param__Result=this->GetActiveWidget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWidgetAtIndex) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UWidget**)Z_Param__Result=this->GetWidgetAtIndex(Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetActiveWidget) \
	{ \
		P_GET_OBJECT(UWidget,Z_Param_Widget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetActiveWidget(Z_Param_Widget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetActiveWidgetIndex) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetActiveWidgetIndex(Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActiveWidgetIndex) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetActiveWidgetIndex(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumWidgets) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetNumWidgets(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Components_WidgetSwitcher_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetActiveWidget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UWidget**)Z_Param__Result=this->GetActiveWidget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWidgetAtIndex) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UWidget**)Z_Param__Result=this->GetWidgetAtIndex(Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetActiveWidget) \
	{ \
		P_GET_OBJECT(UWidget,Z_Param_Widget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetActiveWidget(Z_Param_Widget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetActiveWidgetIndex) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetActiveWidgetIndex(Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActiveWidgetIndex) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetActiveWidgetIndex(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumWidgets) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetNumWidgets(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Components_WidgetSwitcher_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWidgetSwitcher(); \
	friend UMG_API class UClass* Z_Construct_UClass_UWidgetSwitcher(); \
public: \
	DECLARE_CLASS(UWidgetSwitcher, UPanelWidget, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UWidgetSwitcher) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_UMG_Public_Components_WidgetSwitcher_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUWidgetSwitcher(); \
	friend UMG_API class UClass* Z_Construct_UClass_UWidgetSwitcher(); \
public: \
	DECLARE_CLASS(UWidgetSwitcher, UPanelWidget, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UWidgetSwitcher) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_UMG_Public_Components_WidgetSwitcher_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWidgetSwitcher(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWidgetSwitcher) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWidgetSwitcher); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidgetSwitcher); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWidgetSwitcher(UWidgetSwitcher&&); \
	NO_API UWidgetSwitcher(const UWidgetSwitcher&); \
public:


#define Engine_Source_Runtime_UMG_Public_Components_WidgetSwitcher_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWidgetSwitcher(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWidgetSwitcher(UWidgetSwitcher&&); \
	NO_API UWidgetSwitcher(const UWidgetSwitcher&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWidgetSwitcher); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidgetSwitcher); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWidgetSwitcher)


#define Engine_Source_Runtime_UMG_Public_Components_WidgetSwitcher_h_18_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_UMG_Public_Components_WidgetSwitcher_h_15_PROLOG
#define Engine_Source_Runtime_UMG_Public_Components_WidgetSwitcher_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_WidgetSwitcher_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_WidgetSwitcher_h_18_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Components_WidgetSwitcher_h_18_INCLASS \
	Engine_Source_Runtime_UMG_Public_Components_WidgetSwitcher_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Components_WidgetSwitcher_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_WidgetSwitcher_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_WidgetSwitcher_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_WidgetSwitcher_h_18_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_WidgetSwitcher_h_18_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class WidgetSwitcher."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Components_WidgetSwitcher_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
