// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMargin;
#ifdef UMG_WidgetSwitcherSlot_generated_h
#error "WidgetSwitcherSlot.generated.h already included, missing '#pragma once' in WidgetSwitcherSlot.h"
#endif
#define UMG_WidgetSwitcherSlot_generated_h

#define Engine_Source_Runtime_UMG_Public_Components_WidgetSwitcherSlot_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetVerticalAlignment) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_InVerticalAlignment); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetVerticalAlignment(EVerticalAlignment(Z_Param_InVerticalAlignment)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetHorizontalAlignment) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_InHorizontalAlignment); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetHorizontalAlignment(EHorizontalAlignment(Z_Param_InHorizontalAlignment)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPadding) \
	{ \
		P_GET_STRUCT(FMargin,Z_Param_InPadding); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetPadding(Z_Param_InPadding); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Components_WidgetSwitcherSlot_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetVerticalAlignment) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_InVerticalAlignment); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetVerticalAlignment(EVerticalAlignment(Z_Param_InVerticalAlignment)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetHorizontalAlignment) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_InHorizontalAlignment); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetHorizontalAlignment(EHorizontalAlignment(Z_Param_InHorizontalAlignment)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPadding) \
	{ \
		P_GET_STRUCT(FMargin,Z_Param_InPadding); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetPadding(Z_Param_InPadding); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Components_WidgetSwitcherSlot_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWidgetSwitcherSlot(); \
	friend UMG_API class UClass* Z_Construct_UClass_UWidgetSwitcherSlot(); \
public: \
	DECLARE_CLASS(UWidgetSwitcherSlot, UPanelSlot, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UWidgetSwitcherSlot) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_UMG_Public_Components_WidgetSwitcherSlot_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUWidgetSwitcherSlot(); \
	friend UMG_API class UClass* Z_Construct_UClass_UWidgetSwitcherSlot(); \
public: \
	DECLARE_CLASS(UWidgetSwitcherSlot, UPanelSlot, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UWidgetSwitcherSlot) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_UMG_Public_Components_WidgetSwitcherSlot_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWidgetSwitcherSlot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWidgetSwitcherSlot) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWidgetSwitcherSlot); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidgetSwitcherSlot); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWidgetSwitcherSlot(UWidgetSwitcherSlot&&); \
	NO_API UWidgetSwitcherSlot(const UWidgetSwitcherSlot&); \
public:


#define Engine_Source_Runtime_UMG_Public_Components_WidgetSwitcherSlot_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWidgetSwitcherSlot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWidgetSwitcherSlot(UWidgetSwitcherSlot&&); \
	NO_API UWidgetSwitcherSlot(const UWidgetSwitcherSlot&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWidgetSwitcherSlot); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidgetSwitcherSlot); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWidgetSwitcherSlot)


#define Engine_Source_Runtime_UMG_Public_Components_WidgetSwitcherSlot_h_20_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_UMG_Public_Components_WidgetSwitcherSlot_h_17_PROLOG
#define Engine_Source_Runtime_UMG_Public_Components_WidgetSwitcherSlot_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_WidgetSwitcherSlot_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_WidgetSwitcherSlot_h_20_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Components_WidgetSwitcherSlot_h_20_INCLASS \
	Engine_Source_Runtime_UMG_Public_Components_WidgetSwitcherSlot_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Components_WidgetSwitcherSlot_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_WidgetSwitcherSlot_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_WidgetSwitcherSlot_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_WidgetSwitcherSlot_h_20_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_WidgetSwitcherSlot_h_20_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class WidgetSwitcherSlot."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Components_WidgetSwitcherSlot_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
