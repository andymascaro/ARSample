// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMargin;
#ifdef UMG_WrapBoxSlot_generated_h
#error "WrapBoxSlot.generated.h already included, missing '#pragma once' in WrapBoxSlot.h"
#endif
#define UMG_WrapBoxSlot_generated_h

#define Engine_Source_Runtime_UMG_Public_Components_WrapBoxSlot_h_18_RPC_WRAPPERS \
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
	DECLARE_FUNCTION(execSetFillSpanWhenLessThan) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InFillSpanWhenLessThan); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetFillSpanWhenLessThan(Z_Param_InFillSpanWhenLessThan); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFillEmptySpace) \
	{ \
		P_GET_UBOOL(Z_Param_InbFillEmptySpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetFillEmptySpace(Z_Param_InbFillEmptySpace); \
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


#define Engine_Source_Runtime_UMG_Public_Components_WrapBoxSlot_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
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
	DECLARE_FUNCTION(execSetFillSpanWhenLessThan) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InFillSpanWhenLessThan); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetFillSpanWhenLessThan(Z_Param_InFillSpanWhenLessThan); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFillEmptySpace) \
	{ \
		P_GET_UBOOL(Z_Param_InbFillEmptySpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetFillEmptySpace(Z_Param_InbFillEmptySpace); \
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


#define Engine_Source_Runtime_UMG_Public_Components_WrapBoxSlot_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWrapBoxSlot(); \
	friend UMG_API class UClass* Z_Construct_UClass_UWrapBoxSlot(); \
public: \
	DECLARE_CLASS(UWrapBoxSlot, UPanelSlot, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UWrapBoxSlot) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_UMG_Public_Components_WrapBoxSlot_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUWrapBoxSlot(); \
	friend UMG_API class UClass* Z_Construct_UClass_UWrapBoxSlot(); \
public: \
	DECLARE_CLASS(UWrapBoxSlot, UPanelSlot, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UWrapBoxSlot) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_UMG_Public_Components_WrapBoxSlot_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWrapBoxSlot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWrapBoxSlot) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWrapBoxSlot); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWrapBoxSlot); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWrapBoxSlot(UWrapBoxSlot&&); \
	NO_API UWrapBoxSlot(const UWrapBoxSlot&); \
public:


#define Engine_Source_Runtime_UMG_Public_Components_WrapBoxSlot_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWrapBoxSlot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWrapBoxSlot(UWrapBoxSlot&&); \
	NO_API UWrapBoxSlot(const UWrapBoxSlot&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWrapBoxSlot); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWrapBoxSlot); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWrapBoxSlot)


#define Engine_Source_Runtime_UMG_Public_Components_WrapBoxSlot_h_18_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_UMG_Public_Components_WrapBoxSlot_h_15_PROLOG
#define Engine_Source_Runtime_UMG_Public_Components_WrapBoxSlot_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_WrapBoxSlot_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_WrapBoxSlot_h_18_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Components_WrapBoxSlot_h_18_INCLASS \
	Engine_Source_Runtime_UMG_Public_Components_WrapBoxSlot_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Components_WrapBoxSlot_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_WrapBoxSlot_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_WrapBoxSlot_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_WrapBoxSlot_h_18_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_WrapBoxSlot_h_18_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class WrapBoxSlot."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Components_WrapBoxSlot_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
