// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Materials/MaterialInstanceBasePropertyOverrides.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialInstanceBasePropertyOverrides() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMaterialShadingModel();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBlendMode();
// End Cross Module References
class UScriptStruct* FMaterialInstanceBasePropertyOverrides::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides, Z_Construct_UPackage__Script_Engine(), TEXT("MaterialInstanceBasePropertyOverrides"), sizeof(FMaterialInstanceBasePropertyOverrides), Get_Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMaterialInstanceBasePropertyOverrides(FMaterialInstanceBasePropertyOverrides::StaticStruct, TEXT("/Script/Engine"), TEXT("MaterialInstanceBasePropertyOverrides"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFMaterialInstanceBasePropertyOverrides
{
	FScriptStruct_Engine_StaticRegisterNativesFMaterialInstanceBasePropertyOverrides()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MaterialInstanceBasePropertyOverrides")),new UScriptStruct::TCppStructOps<FMaterialInstanceBasePropertyOverrides>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFMaterialInstanceBasePropertyOverrides;
	UScriptStruct* Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MaterialInstanceBasePropertyOverrides"), sizeof(FMaterialInstanceBasePropertyOverrides), Get_Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceBasePropertyOverrides.h" },
				{ "ToolTip", "Properties from the base material that can be overridden in material instances." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialInstanceBasePropertyOverrides>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCastDynamicShadowAsMasked_MetaData[] = {
				{ "Category", "Material" },
				{ "editcondition", "bOverride_CastShadowAsMasked" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceBasePropertyOverrides.h" },
				{ "NoSpinbox", "TRUE" },
				{ "ToolTip", "Whether the material should cast shadows as masked even though it has a translucent blend mode." },
			};
#endif
			auto NewProp_bCastDynamicShadowAsMasked_SetBit = [](void* Obj){ ((FMaterialInstanceBasePropertyOverrides*)Obj)->bCastDynamicShadowAsMasked = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCastDynamicShadowAsMasked = { UE4CodeGen_Private::EPropertyClass::Bool, "bCastDynamicShadowAsMasked", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FMaterialInstanceBasePropertyOverrides), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCastDynamicShadowAsMasked_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCastDynamicShadowAsMasked_MetaData, ARRAY_COUNT(NewProp_bCastDynamicShadowAsMasked_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DitheredLODTransition_MetaData[] = {
				{ "Category", "Material" },
				{ "editcondition", "bOverride_DitheredLODTransition" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceBasePropertyOverrides.h" },
				{ "ToolTip", "Whether the material should support a dithered LOD transition when used with the foliage system." },
			};
#endif
			auto NewProp_DitheredLODTransition_SetBit = [](void* Obj){ ((FMaterialInstanceBasePropertyOverrides*)Obj)->DitheredLODTransition = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DitheredLODTransition = { UE4CodeGen_Private::EPropertyClass::Bool, "DitheredLODTransition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FMaterialInstanceBasePropertyOverrides), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_DitheredLODTransition_SetBit)>::SetBit, METADATA_PARAMS(NewProp_DitheredLODTransition_MetaData, ARRAY_COUNT(NewProp_DitheredLODTransition_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TwoSided_MetaData[] = {
				{ "Category", "Material" },
				{ "editcondition", "bOverride_TwoSided" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceBasePropertyOverrides.h" },
				{ "ToolTip", "Indicates that the material should be rendered without backface culling and the normal should be flipped for backfaces." },
			};
#endif
			auto NewProp_TwoSided_SetBit = [](void* Obj){ ((FMaterialInstanceBasePropertyOverrides*)Obj)->TwoSided = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_TwoSided = { UE4CodeGen_Private::EPropertyClass::Bool, "TwoSided", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FMaterialInstanceBasePropertyOverrides), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_TwoSided_SetBit)>::SetBit, METADATA_PARAMS(NewProp_TwoSided_MetaData, ARRAY_COUNT(NewProp_TwoSided_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShadingModel_MetaData[] = {
				{ "Category", "Material" },
				{ "editcondition", "bOverride_ShadingModel" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceBasePropertyOverrides.h" },
				{ "ToolTip", "The shading model" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ShadingModel = { UE4CodeGen_Private::EPropertyClass::Byte, "ShadingModel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FMaterialInstanceBasePropertyOverrides, ShadingModel), Z_Construct_UEnum_Engine_EMaterialShadingModel, METADATA_PARAMS(NewProp_ShadingModel_MetaData, ARRAY_COUNT(NewProp_ShadingModel_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendMode_MetaData[] = {
				{ "Category", "Material" },
				{ "editcondition", "bOverride_BlendMode" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceBasePropertyOverrides.h" },
				{ "ToolTip", "The blend mode" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_BlendMode = { UE4CodeGen_Private::EPropertyClass::Byte, "BlendMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FMaterialInstanceBasePropertyOverrides, BlendMode), Z_Construct_UEnum_Engine_EBlendMode, METADATA_PARAMS(NewProp_BlendMode_MetaData, ARRAY_COUNT(NewProp_BlendMode_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpacityMaskClipValue_MetaData[] = {
				{ "Category", "Material" },
				{ "editcondition", "bOverride_OpacityMaskClipValue" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceBasePropertyOverrides.h" },
				{ "NoSpinbox", "TRUE" },
				{ "ToolTip", "If BlendMode is BLEND_Masked, the surface is not rendered where OpacityMask < OpacityMaskClipValue." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OpacityMaskClipValue = { UE4CodeGen_Private::EPropertyClass::Float, "OpacityMaskClipValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FMaterialInstanceBasePropertyOverrides, OpacityMaskClipValue), METADATA_PARAMS(NewProp_OpacityMaskClipValue_MetaData, ARRAY_COUNT(NewProp_OpacityMaskClipValue_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_TwoSided_MetaData[] = {
				{ "Category", "Material" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceBasePropertyOverrides.h" },
				{ "ToolTip", "Enables override of the two sided property." },
			};
#endif
			auto NewProp_bOverride_TwoSided_SetBit = [](void* Obj){ ((FMaterialInstanceBasePropertyOverrides*)Obj)->bOverride_TwoSided = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_TwoSided = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_TwoSided", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FMaterialInstanceBasePropertyOverrides), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bOverride_TwoSided_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bOverride_TwoSided_MetaData, ARRAY_COUNT(NewProp_bOverride_TwoSided_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_CastDynamicShadowAsMasked_MetaData[] = {
				{ "Category", "Material" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceBasePropertyOverrides.h" },
				{ "ToolTip", "Enables override of whether to shadow using masked opacity on translucent materials." },
			};
#endif
			auto NewProp_bOverride_CastDynamicShadowAsMasked_SetBit = [](void* Obj){ ((FMaterialInstanceBasePropertyOverrides*)Obj)->bOverride_CastDynamicShadowAsMasked = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_CastDynamicShadowAsMasked = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_CastDynamicShadowAsMasked", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FMaterialInstanceBasePropertyOverrides), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bOverride_CastDynamicShadowAsMasked_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bOverride_CastDynamicShadowAsMasked_MetaData, ARRAY_COUNT(NewProp_bOverride_CastDynamicShadowAsMasked_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_DitheredLODTransition_MetaData[] = {
				{ "Category", "Material" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceBasePropertyOverrides.h" },
				{ "ToolTip", "Enables override of the dithered LOD transition property." },
			};
#endif
			auto NewProp_bOverride_DitheredLODTransition_SetBit = [](void* Obj){ ((FMaterialInstanceBasePropertyOverrides*)Obj)->bOverride_DitheredLODTransition = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_DitheredLODTransition = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_DitheredLODTransition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FMaterialInstanceBasePropertyOverrides), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bOverride_DitheredLODTransition_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bOverride_DitheredLODTransition_MetaData, ARRAY_COUNT(NewProp_bOverride_DitheredLODTransition_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_ShadingModel_MetaData[] = {
				{ "Category", "Material" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceBasePropertyOverrides.h" },
				{ "ToolTip", "Enables override of the shading model." },
			};
#endif
			auto NewProp_bOverride_ShadingModel_SetBit = [](void* Obj){ ((FMaterialInstanceBasePropertyOverrides*)Obj)->bOverride_ShadingModel = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_ShadingModel = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_ShadingModel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FMaterialInstanceBasePropertyOverrides), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bOverride_ShadingModel_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bOverride_ShadingModel_MetaData, ARRAY_COUNT(NewProp_bOverride_ShadingModel_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_BlendMode_MetaData[] = {
				{ "Category", "Material" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceBasePropertyOverrides.h" },
				{ "ToolTip", "Enables override of the blend mode." },
			};
#endif
			auto NewProp_bOverride_BlendMode_SetBit = [](void* Obj){ ((FMaterialInstanceBasePropertyOverrides*)Obj)->bOverride_BlendMode = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_BlendMode = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_BlendMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FMaterialInstanceBasePropertyOverrides), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bOverride_BlendMode_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bOverride_BlendMode_MetaData, ARRAY_COUNT(NewProp_bOverride_BlendMode_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_OpacityMaskClipValue_MetaData[] = {
				{ "Category", "Material" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceBasePropertyOverrides.h" },
				{ "ToolTip", "Enables override of the opacity mask clip value." },
			};
#endif
			auto NewProp_bOverride_OpacityMaskClipValue_SetBit = [](void* Obj){ ((FMaterialInstanceBasePropertyOverrides*)Obj)->bOverride_OpacityMaskClipValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_OpacityMaskClipValue = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_OpacityMaskClipValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FMaterialInstanceBasePropertyOverrides), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bOverride_OpacityMaskClipValue_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bOverride_OpacityMaskClipValue_MetaData, ARRAY_COUNT(NewProp_bOverride_OpacityMaskClipValue_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCastDynamicShadowAsMasked,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DitheredLODTransition,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TwoSided,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ShadingModel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlendMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OpacityMaskClipValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bOverride_TwoSided,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bOverride_CastDynamicShadowAsMasked,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bOverride_DitheredLODTransition,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bOverride_ShadingModel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bOverride_BlendMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bOverride_OpacityMaskClipValue,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MaterialInstanceBasePropertyOverrides",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FMaterialInstanceBasePropertyOverrides),
				alignof(FMaterialInstanceBasePropertyOverrides),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_CRC() { return 1767184101U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
