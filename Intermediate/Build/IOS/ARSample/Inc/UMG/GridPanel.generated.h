// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWidget;
class UGridSlot;
#ifdef UMG_GridPanel_generated_h
#error "GridPanel.generated.h already included, missing '#pragma once' in GridPanel.h"
#endif
#define UMG_GridPanel_generated_h

#define Engine_Source_Runtime_UMG_Public_Components_GridPanel_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddChildToGrid) \
	{ \
		P_GET_OBJECT(UWidget,Z_Param_Content); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGridSlot**)Z_Param__Result=this->AddChildToGrid(Z_Param_Content); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Components_GridPanel_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddChildToGrid) \
	{ \
		P_GET_OBJECT(UWidget,Z_Param_Content); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGridSlot**)Z_Param__Result=this->AddChildToGrid(Z_Param_Content); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Components_GridPanel_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGridPanel(); \
	friend UMG_API class UClass* Z_Construct_UClass_UGridPanel(); \
public: \
	DECLARE_CLASS(UGridPanel, UPanelWidget, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UGridPanel) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_UMG_Public_Components_GridPanel_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUGridPanel(); \
	friend UMG_API class UClass* Z_Construct_UClass_UGridPanel(); \
public: \
	DECLARE_CLASS(UGridPanel, UPanelWidget, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UGridPanel) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_UMG_Public_Components_GridPanel_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGridPanel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGridPanel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGridPanel); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGridPanel); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGridPanel(UGridPanel&&); \
	NO_API UGridPanel(const UGridPanel&); \
public:


#define Engine_Source_Runtime_UMG_Public_Components_GridPanel_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGridPanel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGridPanel(UGridPanel&&); \
	NO_API UGridPanel(const UGridPanel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGridPanel); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGridPanel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGridPanel)


#define Engine_Source_Runtime_UMG_Public_Components_GridPanel_h_22_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_UMG_Public_Components_GridPanel_h_19_PROLOG
#define Engine_Source_Runtime_UMG_Public_Components_GridPanel_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_GridPanel_h_22_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_GridPanel_h_22_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Components_GridPanel_h_22_INCLASS \
	Engine_Source_Runtime_UMG_Public_Components_GridPanel_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Components_GridPanel_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_GridPanel_h_22_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_GridPanel_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_GridPanel_h_22_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_GridPanel_h_22_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class GridPanel."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Components_GridPanel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
