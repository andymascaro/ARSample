// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UMG_UniformGridSlot_generated_h
#error "UniformGridSlot.generated.h already included, missing '#pragma once' in UniformGridSlot.h"
#endif
#define UMG_UniformGridSlot_generated_h

#define Engine_Source_Runtime_UMG_Public_Components_UniformGridSlot_h_20_RPC_WRAPPERS \
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
	DECLARE_FUNCTION(execSetColumn) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InColumn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetColumn(Z_Param_InColumn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRow) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InRow); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetRow(Z_Param_InRow); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Components_UniformGridSlot_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
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
	DECLARE_FUNCTION(execSetColumn) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InColumn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetColumn(Z_Param_InColumn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRow) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InRow); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetRow(Z_Param_InRow); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Components_UniformGridSlot_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUniformGridSlot(); \
	friend UMG_API class UClass* Z_Construct_UClass_UUniformGridSlot(); \
public: \
	DECLARE_CLASS(UUniformGridSlot, UPanelSlot, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UUniformGridSlot) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_UMG_Public_Components_UniformGridSlot_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUUniformGridSlot(); \
	friend UMG_API class UClass* Z_Construct_UClass_UUniformGridSlot(); \
public: \
	DECLARE_CLASS(UUniformGridSlot, UPanelSlot, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UUniformGridSlot) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_UMG_Public_Components_UniformGridSlot_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUniformGridSlot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUniformGridSlot) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUniformGridSlot); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUniformGridSlot); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUniformGridSlot(UUniformGridSlot&&); \
	NO_API UUniformGridSlot(const UUniformGridSlot&); \
public:


#define Engine_Source_Runtime_UMG_Public_Components_UniformGridSlot_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUniformGridSlot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUniformGridSlot(UUniformGridSlot&&); \
	NO_API UUniformGridSlot(const UUniformGridSlot&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUniformGridSlot); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUniformGridSlot); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUniformGridSlot)


#define Engine_Source_Runtime_UMG_Public_Components_UniformGridSlot_h_20_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_UMG_Public_Components_UniformGridSlot_h_17_PROLOG
#define Engine_Source_Runtime_UMG_Public_Components_UniformGridSlot_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_UniformGridSlot_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_UniformGridSlot_h_20_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Components_UniformGridSlot_h_20_INCLASS \
	Engine_Source_Runtime_UMG_Public_Components_UniformGridSlot_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Components_UniformGridSlot_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_UniformGridSlot_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_UniformGridSlot_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_UniformGridSlot_h_20_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_UniformGridSlot_h_20_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class UniformGridSlot."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Components_UniformGridSlot_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
