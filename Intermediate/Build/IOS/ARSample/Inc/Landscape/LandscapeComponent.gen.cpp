// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/LandscapeComponent.h"
#include "Classes/LandscapeProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeComponent() {}
// Cross Module References
	LANDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo();
	UPackage* Z_Construct_UPackage__Script_Landscape();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeLayerInfoObject_NoRegister();
	LANDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FLandscapeEditToolRenderData();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeComponent_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceConstant_NoRegister();
// End Cross Module References
class UScriptStruct* FWeightmapLayerAllocationInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LANDSCAPE_API uint32 Get_Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo, Z_Construct_UPackage__Script_Landscape(), TEXT("WeightmapLayerAllocationInfo"), sizeof(FWeightmapLayerAllocationInfo), Get_Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWeightmapLayerAllocationInfo(FWeightmapLayerAllocationInfo::StaticStruct, TEXT("/Script/Landscape"), TEXT("WeightmapLayerAllocationInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Landscape_StaticRegisterNativesFWeightmapLayerAllocationInfo
{
	FScriptStruct_Landscape_StaticRegisterNativesFWeightmapLayerAllocationInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("WeightmapLayerAllocationInfo")),new UScriptStruct::TCppStructOps<FWeightmapLayerAllocationInfo>);
	}
} ScriptStruct_Landscape_StaticRegisterNativesFWeightmapLayerAllocationInfo;
	UScriptStruct* Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Landscape();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WeightmapLayerAllocationInfo"), sizeof(FWeightmapLayerAllocationInfo), Get_Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
				{ "ToolTip", "Stores information about which weightmap texture and channel each layer is stored" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWeightmapLayerAllocationInfo>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeightmapTextureChannel_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_WeightmapTextureChannel = { UE4CodeGen_Private::EPropertyClass::Byte, "WeightmapTextureChannel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FWeightmapLayerAllocationInfo, WeightmapTextureChannel), nullptr, METADATA_PARAMS(NewProp_WeightmapTextureChannel_MetaData, ARRAY_COUNT(NewProp_WeightmapTextureChannel_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeightmapTextureIndex_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_WeightmapTextureIndex = { UE4CodeGen_Private::EPropertyClass::Byte, "WeightmapTextureIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FWeightmapLayerAllocationInfo, WeightmapTextureIndex), nullptr, METADATA_PARAMS(NewProp_WeightmapTextureIndex_MetaData, ARRAY_COUNT(NewProp_WeightmapTextureIndex_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LayerInfo_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LayerInfo = { UE4CodeGen_Private::EPropertyClass::Object, "LayerInfo", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FWeightmapLayerAllocationInfo, LayerInfo), Z_Construct_UClass_ULandscapeLayerInfoObject_NoRegister, METADATA_PARAMS(NewProp_LayerInfo_MetaData, ARRAY_COUNT(NewProp_LayerInfo_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WeightmapTextureChannel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WeightmapTextureIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LayerInfo,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"WeightmapLayerAllocationInfo",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FWeightmapLayerAllocationInfo),
				alignof(FWeightmapLayerAllocationInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo_CRC() { return 2582281166U; }
class UScriptStruct* FLandscapeEditToolRenderData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LANDSCAPE_API uint32 Get_Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLandscapeEditToolRenderData, Z_Construct_UPackage__Script_Landscape(), TEXT("LandscapeEditToolRenderData"), sizeof(FLandscapeEditToolRenderData), Get_Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLandscapeEditToolRenderData(FLandscapeEditToolRenderData::StaticStruct, TEXT("/Script/Landscape"), TEXT("LandscapeEditToolRenderData"), false, nullptr, nullptr);
static struct FScriptStruct_Landscape_StaticRegisterNativesFLandscapeEditToolRenderData
{
	FScriptStruct_Landscape_StaticRegisterNativesFLandscapeEditToolRenderData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LandscapeEditToolRenderData")),new UScriptStruct::TCppStructOps<FLandscapeEditToolRenderData>);
	}
} ScriptStruct_Landscape_StaticRegisterNativesFLandscapeEditToolRenderData;
	UScriptStruct* Z_Construct_UScriptStruct_FLandscapeEditToolRenderData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Landscape();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LandscapeEditToolRenderData"), sizeof(FLandscapeEditToolRenderData), Get_Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
				{ "ToolTip", "FLandscapeEditToolRenderData" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLandscapeEditToolRenderData>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataTexture_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DataTexture = { UE4CodeGen_Private::EPropertyClass::Object, "DataTexture", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000400000000, 1, nullptr, STRUCT_OFFSET(FLandscapeEditToolRenderData, DataTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(NewProp_DataTexture_MetaData, ARRAY_COUNT(NewProp_DataTexture_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugChannelB_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_DebugChannelB = { UE4CodeGen_Private::EPropertyClass::Int, "DebugChannelB", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000400000000, 1, nullptr, STRUCT_OFFSET(FLandscapeEditToolRenderData, DebugChannelB), METADATA_PARAMS(NewProp_DebugChannelB_MetaData, ARRAY_COUNT(NewProp_DebugChannelB_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugChannelG_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_DebugChannelG = { UE4CodeGen_Private::EPropertyClass::Int, "DebugChannelG", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000400000000, 1, nullptr, STRUCT_OFFSET(FLandscapeEditToolRenderData, DebugChannelG), METADATA_PARAMS(NewProp_DebugChannelG_MetaData, ARRAY_COUNT(NewProp_DebugChannelG_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugChannelR_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_DebugChannelR = { UE4CodeGen_Private::EPropertyClass::Int, "DebugChannelR", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000400000000, 1, nullptr, STRUCT_OFFSET(FLandscapeEditToolRenderData, DebugChannelR), METADATA_PARAMS(NewProp_DebugChannelR_MetaData, ARRAY_COUNT(NewProp_DebugChannelR_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedType_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
				{ "ToolTip", "Component is selected" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_SelectedType = { UE4CodeGen_Private::EPropertyClass::Int, "SelectedType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000400000000, 1, nullptr, STRUCT_OFFSET(FLandscapeEditToolRenderData, SelectedType), METADATA_PARAMS(NewProp_SelectedType_MetaData, ARRAY_COUNT(NewProp_SelectedType_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GizmoMaterial_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
				{ "ToolTip", "Material used to render the gizmo selection region..." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GizmoMaterial = { UE4CodeGen_Private::EPropertyClass::Object, "GizmoMaterial", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000400000000, 1, nullptr, STRUCT_OFFSET(FLandscapeEditToolRenderData, GizmoMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(NewProp_GizmoMaterial_MetaData, ARRAY_COUNT(NewProp_GizmoMaterial_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToolMaterial_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
				{ "ToolTip", "Material used to render the tool." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ToolMaterial = { UE4CodeGen_Private::EPropertyClass::Object, "ToolMaterial", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000400000000, 1, nullptr, STRUCT_OFFSET(FLandscapeEditToolRenderData, ToolMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(NewProp_ToolMaterial_MetaData, ARRAY_COUNT(NewProp_ToolMaterial_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DataTexture,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DebugChannelB,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DebugChannelG,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DebugChannelR,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SelectedType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GizmoMaterial,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ToolMaterial,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"LandscapeEditToolRenderData",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FLandscapeEditToolRenderData),
				alignof(FLandscapeEditToolRenderData),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_CRC() { return 3684745669U; }
	void ULandscapeComponent::StaticRegisterNativesULandscapeComponent()
	{
	}
	UClass* Z_Construct_UClass_ULandscapeComponent_NoRegister()
	{
		return ULandscapeComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_ULandscapeComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Display Attachment Physics Debug Collision Movement Rendering PrimitiveComponent Object Transform Mobility Trigger" },
				{ "IncludePath", "LandscapeComponent.h" },
				{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
				{ "ShowCategories", "Rendering|Material" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MobileWeightNormalmapTexture_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
				{ "ToolTip", "Generated weight/normal map texture used for ES2. Serialized only when cooking or loading cooked builds." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MobileWeightNormalmapTexture = { UE4CodeGen_Private::EPropertyClass::Object, "MobileWeightNormalmapTexture", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010800000000000, 1, nullptr, STRUCT_OFFSET(ULandscapeComponent, MobileWeightNormalmapTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(NewProp_MobileWeightNormalmapTexture_MetaData, ARRAY_COUNT(NewProp_MobileWeightNormalmapTexture_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MobileMaterialInterface_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
				{ "ToolTip", "Material interface used for ES2. Serialized only when cooking or loading cooked builds." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MobileMaterialInterface = { UE4CodeGen_Private::EPropertyClass::Object, "MobileMaterialInterface", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010800000000000, 1, nullptr, STRUCT_OFFSET(ULandscapeComponent, MobileMaterialInterface), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(NewProp_MobileMaterialInterface_MetaData, ARRAY_COUNT(NewProp_MobileMaterialInterface_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MobileBlendableLayerMask_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
				{ "ToolTip", "For ES2" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_MobileBlendableLayerMask = { UE4CodeGen_Private::EPropertyClass::Byte, "MobileBlendableLayerMask", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(ULandscapeComponent, MobileBlendableLayerMask), nullptr, METADATA_PARAMS(NewProp_MobileBlendableLayerMask_MetaData, ARRAY_COUNT(NewProp_MobileBlendableLayerMask_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MobileDataSourceHash_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
				{ "ToolTip", "Hash of source for ES2 generated data. Used for mobile preview and cook-in-editor\nto determine if we need to re-generate ES2 pixel data." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_MobileDataSourceHash = { UE4CodeGen_Private::EPropertyClass::Struct, "MobileDataSourceHash", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800202000, 1, nullptr, STRUCT_OFFSET(ULandscapeComponent, MobileDataSourceHash), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_MobileDataSourceHash_MetaData, ARRAY_COUNT(NewProp_MobileDataSourceHash_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditToolRenderData_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
				{ "ToolTip", "Pointer to data shared with the render thread, used by the editor tools" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_EditToolRenderData = { UE4CodeGen_Private::EPropertyClass::Struct, "EditToolRenderData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000c00202000, 1, nullptr, STRUCT_OFFSET(ULandscapeComponent, EditToolRenderData), Z_Construct_UScriptStruct_FLandscapeEditToolRenderData, METADATA_PARAMS(NewProp_EditToolRenderData_MetaData, ARRAY_COUNT(NewProp_EditToolRenderData_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LayerWhitelist_MetaData[] = {
				{ "Category", "LandscapeComponent" },
				{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
				{ "ToolTip", "List of layers allowed to be painted on this component" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LayerWhitelist = { UE4CodeGen_Private::EPropertyClass::Array, "LayerWhitelist", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000001, 1, nullptr, STRUCT_OFFSET(ULandscapeComponent, LayerWhitelist), METADATA_PARAMS(NewProp_LayerWhitelist_MetaData, ARRAY_COUNT(NewProp_LayerWhitelist_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LayerWhitelist_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "LayerWhitelist", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000800000000, 1, nullptr, 0, Z_Construct_UClass_ULandscapeLayerInfoObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightingLODBias_MetaData[] = {
				{ "Category", "LandscapeComponent" },
				{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
				{ "ToolTip", "LOD level Bias to use when lighting buidling via lightmass, -1 Means automatic LOD calculation based on ForcedLOD + LODBias" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_LightingLODBias = { UE4CodeGen_Private::EPropertyClass::Int, "LightingLODBias", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000001, 1, nullptr, STRUCT_OFFSET(ULandscapeComponent, LightingLODBias), METADATA_PARAMS(NewProp_LightingLODBias_MetaData, ARRAY_COUNT(NewProp_LightingLODBias_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GIBakedBaseColorTexture_MetaData[] = {
				{ "Category", "BakedTextures" },
				{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
				{ "ToolTip", "Pre-baked Base Color texture for use by distance field GI" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GIBakedBaseColorTexture = { UE4CodeGen_Private::EPropertyClass::Object, "GIBakedBaseColorTexture", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020015, 1, nullptr, STRUCT_OFFSET(ULandscapeComponent, GIBakedBaseColorTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(NewProp_GIBakedBaseColorTexture_MetaData, ARRAY_COUNT(NewProp_GIBakedBaseColorTexture_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BakedTextureMaterialGuid_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
				{ "ToolTip", "The Material Guid that used when baking, to detect material recompilations" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BakedTextureMaterialGuid = { UE4CodeGen_Private::EPropertyClass::Struct, "BakedTextureMaterialGuid", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(ULandscapeComponent, BakedTextureMaterialGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_BakedTextureMaterialGuid_MetaData, ARRAY_COUNT(NewProp_BakedTextureMaterialGuid_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateId_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_StateId = { UE4CodeGen_Private::EPropertyClass::Struct, "StateId", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(ULandscapeComponent, StateId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_StateId_MetaData, ARRAY_COUNT(NewProp_StateId_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODBias_MetaData[] = {
				{ "Category", "LandscapeComponent" },
				{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
				{ "ToolTip", "LOD level Bias to use when rendering" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODBias = { UE4CodeGen_Private::EPropertyClass::Int, "LODBias", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(ULandscapeComponent, LODBias), METADATA_PARAMS(NewProp_LODBias_MetaData, ARRAY_COUNT(NewProp_LODBias_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForcedLOD_MetaData[] = {
				{ "Category", "LandscapeComponent" },
				{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
				{ "ToolTip", "Forced LOD level to use when rendering" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ForcedLOD = { UE4CodeGen_Private::EPropertyClass::Int, "ForcedLOD", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(ULandscapeComponent, ForcedLOD), METADATA_PARAMS(NewProp_ForcedLOD_MetaData, ARRAY_COUNT(NewProp_ForcedLOD_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticLightingResolution_MetaData[] = {
				{ "Category", "LandscapeComponent" },
				{ "ClampMax", "4096" },
				{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
				{ "ToolTip", "StaticLightingResolution overriding per component, default value 0 means no overriding" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StaticLightingResolution = { UE4CodeGen_Private::EPropertyClass::Float, "StaticLightingResolution", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ULandscapeComponent, StaticLightingResolution), METADATA_PARAMS(NewProp_StaticLightingResolution_MetaData, ARRAY_COUNT(NewProp_StaticLightingResolution_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PositiveZBoundsExtension_MetaData[] = {
				{ "Category", "LandscapeComponent" },
				{ "EditCondition", "bOverrideBounds" },
				{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
				{ "ToolTip", "Allows overriding the landscape bounds. This is useful if you distort the landscape with world-position-offset, for example\nExtension value in the positive Z axis, positive value increases bound size" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PositiveZBoundsExtension = { UE4CodeGen_Private::EPropertyClass::Float, "PositiveZBoundsExtension", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ULandscapeComponent, PositiveZBoundsExtension), METADATA_PARAMS(NewProp_PositiveZBoundsExtension_MetaData, ARRAY_COUNT(NewProp_PositiveZBoundsExtension_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NegativeZBoundsExtension_MetaData[] = {
				{ "Category", "LandscapeComponent" },
				{ "EditCondition", "bOverrideBounds" },
				{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
				{ "ToolTip", "Allows overriding the landscape bounds. This is useful if you distort the landscape with world-position-offset, for example\nExtension value in the negative Z axis, positive value increases bound size" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NegativeZBoundsExtension = { UE4CodeGen_Private::EPropertyClass::Float, "NegativeZBoundsExtension", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ULandscapeComponent, NegativeZBoundsExtension), METADATA_PARAMS(NewProp_NegativeZBoundsExtension_MetaData, ARRAY_COUNT(NewProp_NegativeZBoundsExtension_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SimpleCollisionMipLevel_MetaData[] = {
				{ "Category", "LandscapeComponent" },
				{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
				{ "ToolTip", "Heightfield mipmap used to generate simple collision" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_SimpleCollisionMipLevel = { UE4CodeGen_Private::EPropertyClass::Int, "SimpleCollisionMipLevel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ULandscapeComponent, SimpleCollisionMipLevel), METADATA_PARAMS(NewProp_SimpleCollisionMipLevel_MetaData, ARRAY_COUNT(NewProp_SimpleCollisionMipLevel_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionMipLevel_MetaData[] = {
				{ "Category", "LandscapeComponent" },
				{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
				{ "ToolTip", "Heightfield mipmap used to generate collision" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_CollisionMipLevel = { UE4CodeGen_Private::EPropertyClass::Int, "CollisionMipLevel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ULandscapeComponent, CollisionMipLevel), METADATA_PARAMS(NewProp_CollisionMipLevel_MetaData, ARRAY_COUNT(NewProp_CollisionMipLevel_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IrrelevantLights_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
				{ "ToolTip", "Legacy irrelevant lights" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_IrrelevantLights = { UE4CodeGen_Private::EPropertyClass::Array, "IrrelevantLights", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(ULandscapeComponent, IrrelevantLights_DEPRECATED), METADATA_PARAMS(NewProp_IrrelevantLights_MetaData, ARRAY_COUNT(NewProp_IrrelevantLights_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_IrrelevantLights_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "IrrelevantLights", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000020000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapBuildDataId_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
				{ "ToolTip", "Uniquely identifies this component's built map data." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_MapBuildDataId = { UE4CodeGen_Private::EPropertyClass::Struct, "MapBuildDataId", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(ULandscapeComponent, MapBuildDataId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_MapBuildDataId_MetaData, ARRAY_COUNT(NewProp_MapBuildDataId_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightingGuid_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
				{ "ToolTip", "Unique ID for this component, used for caching during distributed lighting" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LightingGuid = { UE4CodeGen_Private::EPropertyClass::Struct, "LightingGuid", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000800000000, 1, nullptr, STRUCT_OFFSET(ULandscapeComponent, LightingGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_LightingGuid_MetaData, ARRAY_COUNT(NewProp_LightingGuid_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionComponent_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
				{ "ToolTip", "Reference to associated collision component" },
			};
#endif
			static const UE4CodeGen_Private::FLazyObjectPropertyParams NewProp_CollisionComponent = { UE4CodeGen_Private::EPropertyClass::LazyObject, "CollisionComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000080008, 1, nullptr, STRUCT_OFFSET(ULandscapeComponent, CollisionComponent), Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_NoRegister, METADATA_PARAMS(NewProp_CollisionComponent_MetaData, ARRAY_COUNT(NewProp_CollisionComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedLocalBox_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
				{ "ToolTip", "Cached local-space bounding box, created at heightmap update time" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CachedLocalBox = { UE4CodeGen_Private::EPropertyClass::Struct, "CachedLocalBox", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(ULandscapeComponent, CachedLocalBox), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(NewProp_CachedLocalBox_MetaData, ARRAY_COUNT(NewProp_CachedLocalBox_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeightmapTexture_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
				{ "ToolTip", "Heightmap texture reference" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HeightmapTexture = { UE4CodeGen_Private::EPropertyClass::Object, "HeightmapTexture", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010400000000000, 1, nullptr, STRUCT_OFFSET(ULandscapeComponent, HeightmapTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(NewProp_HeightmapTexture_MetaData, ARRAY_COUNT(NewProp_HeightmapTexture_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeightmapScaleBias_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
				{ "ToolTip", "UV offset to Heightmap data from component local coordinates" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_HeightmapScaleBias = { UE4CodeGen_Private::EPropertyClass::Struct, "HeightmapScaleBias", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(ULandscapeComponent, HeightmapScaleBias), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(NewProp_HeightmapScaleBias_MetaData, ARRAY_COUNT(NewProp_HeightmapScaleBias_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeightmapSubsectionOffset_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
				{ "ToolTip", "U or V offset into the weightmap for the first subsection, in texture UV space" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WeightmapSubsectionOffset = { UE4CodeGen_Private::EPropertyClass::Float, "WeightmapSubsectionOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(ULandscapeComponent, WeightmapSubsectionOffset), METADATA_PARAMS(NewProp_WeightmapSubsectionOffset_MetaData, ARRAY_COUNT(NewProp_WeightmapSubsectionOffset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeightmapScaleBias_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
				{ "ToolTip", "UV offset to component's weightmap data from component local coordinates" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_WeightmapScaleBias = { UE4CodeGen_Private::EPropertyClass::Struct, "WeightmapScaleBias", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(ULandscapeComponent, WeightmapScaleBias), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(NewProp_WeightmapScaleBias_MetaData, ARRAY_COUNT(NewProp_WeightmapScaleBias_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_XYOffsetmapTexture_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
				{ "ToolTip", "XYOffsetmap texture reference" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_XYOffsetmapTexture = { UE4CodeGen_Private::EPropertyClass::Object, "XYOffsetmapTexture", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010400000000000, 1, nullptr, STRUCT_OFFSET(ULandscapeComponent, XYOffsetmapTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(NewProp_XYOffsetmapTexture_MetaData, ARRAY_COUNT(NewProp_XYOffsetmapTexture_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeightmapTextures_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
				{ "ToolTip", "Weightmap texture reference" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WeightmapTextures = { UE4CodeGen_Private::EPropertyClass::Array, "WeightmapTextures", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010400000000000, 1, nullptr, STRUCT_OFFSET(ULandscapeComponent, WeightmapTextures), METADATA_PARAMS(NewProp_WeightmapTextures_MetaData, ARRAY_COUNT(NewProp_WeightmapTextures_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeightmapTextures_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "WeightmapTextures", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeightmapLayerAllocations_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
				{ "ToolTip", "List of layers, and the weightmap and channel they are stored" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WeightmapLayerAllocations = { UE4CodeGen_Private::EPropertyClass::Array, "WeightmapLayerAllocations", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(ULandscapeComponent, WeightmapLayerAllocations), METADATA_PARAMS(NewProp_WeightmapLayerAllocations_MetaData, ARRAY_COUNT(NewProp_WeightmapLayerAllocations_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_WeightmapLayerAllocations_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "WeightmapLayerAllocations", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialInstances_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MaterialInstances = { UE4CodeGen_Private::EPropertyClass::Array, "MaterialInstances", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010400000000000, 1, nullptr, STRUCT_OFFSET(ULandscapeComponent, MaterialInstances), METADATA_PARAMS(NewProp_MaterialInstances_MetaData, ARRAY_COUNT(NewProp_MaterialInstances_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaterialInstances_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "MaterialInstances", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialInstance_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaterialInstance = { UE4CodeGen_Private::EPropertyClass::Object, "MaterialInstance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000820000000, 1, nullptr, STRUCT_OFFSET(ULandscapeComponent, MaterialInstance_DEPRECATED), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(NewProp_MaterialInstance_MetaData, ARRAY_COUNT(NewProp_MaterialInstance_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideHoleMaterial_MetaData[] = {
				{ "Category", "LandscapeComponent" },
				{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverrideHoleMaterial = { UE4CodeGen_Private::EPropertyClass::Object, "OverrideHoleMaterial", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000005, 1, nullptr, STRUCT_OFFSET(ULandscapeComponent, OverrideHoleMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(NewProp_OverrideHoleMaterial_MetaData, ARRAY_COUNT(NewProp_OverrideHoleMaterial_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideMaterial_MetaData[] = {
				{ "Category", "LandscapeComponent" },
				{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverrideMaterial = { UE4CodeGen_Private::EPropertyClass::Object, "OverrideMaterial", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ULandscapeComponent, OverrideMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(NewProp_OverrideMaterial_MetaData, ARRAY_COUNT(NewProp_OverrideMaterial_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumSubsections_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
				{ "ToolTip", "Number of subsections in X or Y axis" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumSubsections = { UE4CodeGen_Private::EPropertyClass::Int, "NumSubsections", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(ULandscapeComponent, NumSubsections), METADATA_PARAMS(NewProp_NumSubsections_MetaData, ARRAY_COUNT(NewProp_NumSubsections_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubsectionSizeQuads_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
				{ "ToolTip", "Number of quads for a subsection of the component. SubsectionSizeQuads+1 must be a power of two." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_SubsectionSizeQuads = { UE4CodeGen_Private::EPropertyClass::Int, "SubsectionSizeQuads", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(ULandscapeComponent, SubsectionSizeQuads), METADATA_PARAMS(NewProp_SubsectionSizeQuads_MetaData, ARRAY_COUNT(NewProp_SubsectionSizeQuads_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentSizeQuads_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
				{ "ToolTip", "Total number of quads for this component, has to be >0" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ComponentSizeQuads = { UE4CodeGen_Private::EPropertyClass::Int, "ComponentSizeQuads", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(ULandscapeComponent, ComponentSizeQuads), METADATA_PARAMS(NewProp_ComponentSizeQuads_MetaData, ARRAY_COUNT(NewProp_ComponentSizeQuads_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SectionBaseY_MetaData[] = {
				{ "Category", "LandscapeComponent" },
				{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
				{ "ToolTip", "Y offset from global components grid origin (in quads)" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_SectionBaseY = { UE4CodeGen_Private::EPropertyClass::Int, "SectionBaseY", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020015, 1, nullptr, STRUCT_OFFSET(ULandscapeComponent, SectionBaseY), METADATA_PARAMS(NewProp_SectionBaseY_MetaData, ARRAY_COUNT(NewProp_SectionBaseY_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SectionBaseX_MetaData[] = {
				{ "Category", "LandscapeComponent" },
				{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
				{ "ToolTip", "X offset from global components grid origin (in quads)" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_SectionBaseX = { UE4CodeGen_Private::EPropertyClass::Int, "SectionBaseX", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020015, 1, nullptr, STRUCT_OFFSET(ULandscapeComponent, SectionBaseX), METADATA_PARAMS(NewProp_SectionBaseX_MetaData, ARRAY_COUNT(NewProp_SectionBaseX_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MobileWeightNormalmapTexture,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MobileMaterialInterface,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MobileBlendableLayerMask,
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MobileDataSourceHash,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EditToolRenderData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LayerWhitelist,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LayerWhitelist_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LightingLODBias,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GIBakedBaseColorTexture,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BakedTextureMaterialGuid,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StateId,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LODBias,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ForcedLOD,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StaticLightingResolution,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PositiveZBoundsExtension,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NegativeZBoundsExtension,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SimpleCollisionMipLevel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CollisionMipLevel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IrrelevantLights,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IrrelevantLights_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MapBuildDataId,
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LightingGuid,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CollisionComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CachedLocalBox,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HeightmapTexture,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HeightmapScaleBias,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WeightmapSubsectionOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WeightmapScaleBias,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_XYOffsetmapTexture,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WeightmapTextures,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WeightmapTextures_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WeightmapLayerAllocations,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WeightmapLayerAllocations_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaterialInstances,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaterialInstances_Inner,
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaterialInstance,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OverrideHoleMaterial,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OverrideMaterial,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NumSubsections,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SubsectionSizeQuads,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ComponentSizeQuads,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SectionBaseY,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SectionBaseX,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ULandscapeComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ULandscapeComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00A80080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULandscapeComponent, 3355274418);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULandscapeComponent(Z_Construct_UClass_ULandscapeComponent, &ULandscapeComponent::StaticClass, TEXT("/Script/Landscape"), TEXT("ULandscapeComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULandscapeComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
