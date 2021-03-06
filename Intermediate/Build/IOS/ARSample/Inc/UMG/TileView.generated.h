// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UMG_TileView_generated_h
#error "TileView.generated.h already included, missing '#pragma once' in TileView.h"
#endif
#define UMG_TileView_generated_h

#define Engine_Source_Runtime_UMG_Public_Components_TileView_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRequestListRefresh) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->RequestListRefresh(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetItemHeight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Height); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetItemHeight(Z_Param_Height); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetItemWidth) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Width); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetItemWidth(Z_Param_Width); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Components_TileView_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRequestListRefresh) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->RequestListRefresh(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetItemHeight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Height); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetItemHeight(Z_Param_Height); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetItemWidth) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Width); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetItemWidth(Z_Param_Width); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Components_TileView_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTileView(); \
	friend UMG_API class UClass* Z_Construct_UClass_UTileView(); \
public: \
	DECLARE_CLASS(UTileView, UTableViewBase, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UTileView) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_UMG_Public_Components_TileView_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUTileView(); \
	friend UMG_API class UClass* Z_Construct_UClass_UTileView(); \
public: \
	DECLARE_CLASS(UTileView, UTableViewBase, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UTileView) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_UMG_Public_Components_TileView_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTileView(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTileView) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTileView); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTileView); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTileView(UTileView&&); \
	NO_API UTileView(const UTileView&); \
public:


#define Engine_Source_Runtime_UMG_Public_Components_TileView_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTileView(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTileView(UTileView&&); \
	NO_API UTileView(const UTileView&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTileView); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTileView); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTileView)


#define Engine_Source_Runtime_UMG_Public_Components_TileView_h_20_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_UMG_Public_Components_TileView_h_17_PROLOG
#define Engine_Source_Runtime_UMG_Public_Components_TileView_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_TileView_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_TileView_h_20_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Components_TileView_h_20_INCLASS \
	Engine_Source_Runtime_UMG_Public_Components_TileView_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Components_TileView_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_TileView_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_TileView_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_TileView_h_20_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_TileView_h_20_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TileView."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Components_TileView_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
