// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector2D;
struct FAnchors;
struct FMargin;
struct FAnchorData;
#ifdef UMG_CanvasPanelSlot_generated_h
#error "CanvasPanelSlot.generated.h already included, missing '#pragma once' in CanvasPanelSlot.h"
#endif
#define UMG_CanvasPanelSlot_generated_h

#define Engine_Source_Runtime_UMG_Public_Components_CanvasPanelSlot_h_20_GENERATED_BODY \
	friend UMG_API class UScriptStruct* Z_Construct_UScriptStruct_FAnchorData(); \
	UMG_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_UMG_Public_Components_CanvasPanelSlot_h_44_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetMaximum) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_InMaximumAnchors); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetMaximum(Z_Param_InMaximumAnchors); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMinimum) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_InMinimumAnchors); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetMinimum(Z_Param_InMinimumAnchors); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetZOrder) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetZOrder(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetZOrder) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InZOrder); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetZOrder(Z_Param_InZOrder); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAutoSize) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetAutoSize(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAutoSize) \
	{ \
		P_GET_UBOOL(Z_Param_InbAutoSize); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetAutoSize(Z_Param_InbAutoSize); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAlignment) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=this->GetAlignment(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAlignment) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_InAlignment); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetAlignment(Z_Param_InAlignment); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAnchors) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FAnchors*)Z_Param__Result=this->GetAnchors(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAnchors) \
	{ \
		P_GET_STRUCT(FAnchors,Z_Param_InAnchors); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetAnchors(Z_Param_InAnchors); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOffsets) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FMargin*)Z_Param__Result=this->GetOffsets(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOffsets) \
	{ \
		P_GET_STRUCT(FMargin,Z_Param_InOffset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetOffsets(Z_Param_InOffset); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSize) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=this->GetSize(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSize) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_InSize); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSize(Z_Param_InSize); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPosition) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=this->GetPosition(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPosition) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_InPosition); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetPosition(Z_Param_InPosition); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLayout) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FAnchorData*)Z_Param__Result=this->GetLayout(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLayout) \
	{ \
		P_GET_STRUCT_REF(FAnchorData,Z_Param_Out_InLayoutData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetLayout(Z_Param_Out_InLayoutData); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Components_CanvasPanelSlot_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetMaximum) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_InMaximumAnchors); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetMaximum(Z_Param_InMaximumAnchors); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMinimum) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_InMinimumAnchors); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetMinimum(Z_Param_InMinimumAnchors); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetZOrder) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetZOrder(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetZOrder) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InZOrder); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetZOrder(Z_Param_InZOrder); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAutoSize) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetAutoSize(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAutoSize) \
	{ \
		P_GET_UBOOL(Z_Param_InbAutoSize); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetAutoSize(Z_Param_InbAutoSize); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAlignment) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=this->GetAlignment(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAlignment) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_InAlignment); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetAlignment(Z_Param_InAlignment); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAnchors) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FAnchors*)Z_Param__Result=this->GetAnchors(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAnchors) \
	{ \
		P_GET_STRUCT(FAnchors,Z_Param_InAnchors); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetAnchors(Z_Param_InAnchors); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOffsets) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FMargin*)Z_Param__Result=this->GetOffsets(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOffsets) \
	{ \
		P_GET_STRUCT(FMargin,Z_Param_InOffset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetOffsets(Z_Param_InOffset); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSize) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=this->GetSize(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSize) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_InSize); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSize(Z_Param_InSize); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPosition) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=this->GetPosition(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPosition) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_InPosition); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetPosition(Z_Param_InPosition); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLayout) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FAnchorData*)Z_Param__Result=this->GetLayout(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLayout) \
	{ \
		P_GET_STRUCT_REF(FAnchorData,Z_Param_Out_InLayoutData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetLayout(Z_Param_Out_InLayoutData); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Components_CanvasPanelSlot_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCanvasPanelSlot(); \
	friend UMG_API class UClass* Z_Construct_UClass_UCanvasPanelSlot(); \
public: \
	DECLARE_CLASS(UCanvasPanelSlot, UPanelSlot, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UCanvasPanelSlot) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_UMG_Public_Components_CanvasPanelSlot_h_44_INCLASS \
private: \
	static void StaticRegisterNativesUCanvasPanelSlot(); \
	friend UMG_API class UClass* Z_Construct_UClass_UCanvasPanelSlot(); \
public: \
	DECLARE_CLASS(UCanvasPanelSlot, UPanelSlot, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UCanvasPanelSlot) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_UMG_Public_Components_CanvasPanelSlot_h_44_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCanvasPanelSlot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCanvasPanelSlot) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCanvasPanelSlot); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCanvasPanelSlot); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCanvasPanelSlot(UCanvasPanelSlot&&); \
	NO_API UCanvasPanelSlot(const UCanvasPanelSlot&); \
public:


#define Engine_Source_Runtime_UMG_Public_Components_CanvasPanelSlot_h_44_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCanvasPanelSlot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCanvasPanelSlot(UCanvasPanelSlot&&); \
	NO_API UCanvasPanelSlot(const UCanvasPanelSlot&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCanvasPanelSlot); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCanvasPanelSlot); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCanvasPanelSlot)


#define Engine_Source_Runtime_UMG_Public_Components_CanvasPanelSlot_h_44_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_UMG_Public_Components_CanvasPanelSlot_h_41_PROLOG
#define Engine_Source_Runtime_UMG_Public_Components_CanvasPanelSlot_h_44_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_CanvasPanelSlot_h_44_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_CanvasPanelSlot_h_44_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Components_CanvasPanelSlot_h_44_INCLASS \
	Engine_Source_Runtime_UMG_Public_Components_CanvasPanelSlot_h_44_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Components_CanvasPanelSlot_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_CanvasPanelSlot_h_44_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_CanvasPanelSlot_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_CanvasPanelSlot_h_44_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_CanvasPanelSlot_h_44_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class CanvasPanelSlot."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Components_CanvasPanelSlot_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
