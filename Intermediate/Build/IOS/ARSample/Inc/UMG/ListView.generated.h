// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UMG_ListView_generated_h
#error "ListView.generated.h already included, missing '#pragma once' in ListView.h"
#endif
#define UMG_ListView_generated_h

#define Engine_Source_Runtime_UMG_Public_Components_ListView_h_19_RPC_WRAPPERS
#define Engine_Source_Runtime_UMG_Public_Components_ListView_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_UMG_Public_Components_ListView_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUListView(); \
	friend UMG_API class UClass* Z_Construct_UClass_UListView(); \
public: \
	DECLARE_CLASS(UListView, UTableViewBase, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UListView) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_UMG_Public_Components_ListView_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUListView(); \
	friend UMG_API class UClass* Z_Construct_UClass_UListView(); \
public: \
	DECLARE_CLASS(UListView, UTableViewBase, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UListView) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_UMG_Public_Components_ListView_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UListView(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UListView) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UListView); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UListView); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UListView(UListView&&); \
	NO_API UListView(const UListView&); \
public:


#define Engine_Source_Runtime_UMG_Public_Components_ListView_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UListView(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UListView(UListView&&); \
	NO_API UListView(const UListView&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UListView); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UListView); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UListView)


#define Engine_Source_Runtime_UMG_Public_Components_ListView_h_19_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_UMG_Public_Components_ListView_h_16_PROLOG
#define Engine_Source_Runtime_UMG_Public_Components_ListView_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_ListView_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_ListView_h_19_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Components_ListView_h_19_INCLASS \
	Engine_Source_Runtime_UMG_Public_Components_ListView_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Components_ListView_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_ListView_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_ListView_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_ListView_h_19_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_ListView_h_19_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ListView."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Components_ListView_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
