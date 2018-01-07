// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Materials/MaterialInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialInterface() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMaterialUsage();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialTextureInfo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UFunction* Z_Construct_UFunction_UMaterialInterface_GetBaseMaterial();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_UMaterialInterface_GetPhysicalMaterial();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_UMaterialInterface_SetForceMipLevelsToBeResident();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_UThumbnailInfo_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USubsurfaceProfile_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlendableInterface_NoRegister();
// End Cross Module References
	static UEnum* EMaterialUsage_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMaterialUsage, Z_Construct_UPackage__Script_Engine(), TEXT("EMaterialUsage"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMaterialUsage(EMaterialUsage_StaticEnum, TEXT("/Script/Engine"), TEXT("EMaterialUsage"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EMaterialUsage_CRC() { return 751227851U; }
	UEnum* Z_Construct_UEnum_Engine_EMaterialUsage()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMaterialUsage"), 0, Get_Z_Construct_UEnum_Engine_EMaterialUsage_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "MATUSAGE_SkeletalMesh", (int64)MATUSAGE_SkeletalMesh },
				{ "MATUSAGE_ParticleSprites", (int64)MATUSAGE_ParticleSprites },
				{ "MATUSAGE_BeamTrails", (int64)MATUSAGE_BeamTrails },
				{ "MATUSAGE_MeshParticles", (int64)MATUSAGE_MeshParticles },
				{ "MATUSAGE_StaticLighting", (int64)MATUSAGE_StaticLighting },
				{ "MATUSAGE_MorphTargets", (int64)MATUSAGE_MorphTargets },
				{ "MATUSAGE_SplineMesh", (int64)MATUSAGE_SplineMesh },
				{ "MATUSAGE_InstancedStaticMeshes", (int64)MATUSAGE_InstancedStaticMeshes },
				{ "MATUSAGE_Clothing", (int64)MATUSAGE_Clothing },
				{ "MATUSAGE_NiagaraSprites", (int64)MATUSAGE_NiagaraSprites },
				{ "MATUSAGE_NiagaraRibbons", (int64)MATUSAGE_NiagaraRibbons },
				{ "MATUSAGE_NiagaraMeshParticles", (int64)MATUSAGE_NiagaraMeshParticles },
				{ "MATUSAGE_MAX", (int64)MATUSAGE_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EMaterialUsage",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EMaterialUsage",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FMaterialTextureInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FMaterialTextureInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialTextureInfo, Z_Construct_UPackage__Script_Engine(), TEXT("MaterialTextureInfo"), sizeof(FMaterialTextureInfo), Get_Z_Construct_UScriptStruct_FMaterialTextureInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMaterialTextureInfo(FMaterialTextureInfo::StaticStruct, TEXT("/Script/Engine"), TEXT("MaterialTextureInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFMaterialTextureInfo
{
	FScriptStruct_Engine_StaticRegisterNativesFMaterialTextureInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MaterialTextureInfo")),new UScriptStruct::TCppStructOps<FMaterialTextureInfo>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFMaterialTextureInfo;
	UScriptStruct* Z_Construct_UScriptStruct_FMaterialTextureInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMaterialTextureInfo_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MaterialTextureInfo"), sizeof(FMaterialTextureInfo), Get_Z_Construct_UScriptStruct_FMaterialTextureInfo_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
				{ "ToolTip", "This struct holds data about how a texture is sampled within a material." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialTextureInfo>(); };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureIndex_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
				{ "ToolTip", "The texture index in the material resource the data was built from.\nThis must be transient as it depends on which shader map was used for the build." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_TextureIndex = { UE4CodeGen_Private::EPropertyClass::Int, "TextureIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800002000, 1, nullptr, STRUCT_OFFSET(FMaterialTextureInfo, TextureIndex), METADATA_PARAMS(NewProp_TextureIndex_MetaData, ARRAY_COUNT(NewProp_TextureIndex_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureReference_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
				{ "ToolTip", "The reference to the texture, used to keep the TextureName valid even if it gets renamed." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextureReference = { UE4CodeGen_Private::EPropertyClass::Struct, "TextureReference", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(FMaterialTextureInfo, TextureReference), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(NewProp_TextureReference_MetaData, ARRAY_COUNT(NewProp_TextureReference_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureName_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
				{ "ToolTip", "The texture name. Used for debugging and also to for quick matching of the entries." },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_TextureName = { UE4CodeGen_Private::EPropertyClass::Name, "TextureName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMaterialTextureInfo, TextureName), METADATA_PARAMS(NewProp_TextureName_MetaData, ARRAY_COUNT(NewProp_TextureName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UVChannelIndex_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
				{ "ToolTip", "The coordinate index used when sampling the texture" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_UVChannelIndex = { UE4CodeGen_Private::EPropertyClass::Int, "UVChannelIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMaterialTextureInfo, UVChannelIndex), METADATA_PARAMS(NewProp_UVChannelIndex_MetaData, ARRAY_COUNT(NewProp_UVChannelIndex_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SamplingScale_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
				{ "ToolTip", "The scale used when sampling the texture" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SamplingScale = { UE4CodeGen_Private::EPropertyClass::Float, "SamplingScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMaterialTextureInfo, SamplingScale), METADATA_PARAMS(NewProp_SamplingScale_MetaData, ARRAY_COUNT(NewProp_SamplingScale_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TextureIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TextureReference,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TextureName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UVChannelIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SamplingScale,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MaterialTextureInfo",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FMaterialTextureInfo),
				alignof(FMaterialTextureInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMaterialTextureInfo_CRC() { return 2626213832U; }
class UScriptStruct* FLightmassMaterialInterfaceSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings, Z_Construct_UPackage__Script_Engine(), TEXT("LightmassMaterialInterfaceSettings"), sizeof(FLightmassMaterialInterfaceSettings), Get_Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLightmassMaterialInterfaceSettings(FLightmassMaterialInterfaceSettings::StaticStruct, TEXT("/Script/Engine"), TEXT("LightmassMaterialInterfaceSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFLightmassMaterialInterfaceSettings
{
	FScriptStruct_Engine_StaticRegisterNativesFLightmassMaterialInterfaceSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LightmassMaterialInterfaceSettings")),new UScriptStruct::TCppStructOps<FLightmassMaterialInterfaceSettings>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFLightmassMaterialInterfaceSettings;
	UScriptStruct* Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LightmassMaterialInterfaceSettings"), sizeof(FLightmassMaterialInterfaceSettings), Get_Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
				{ "ToolTip", "UMaterial interface settings for Lightmass" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLightmassMaterialInterfaceSettings>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideExportResolutionScale_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
				{ "ToolTip", "If true, override the export resolution scale setting of the parent material." },
			};
#endif
			auto NewProp_bOverrideExportResolutionScale_SetBit = [](void* Obj){ ((FLightmassMaterialInterfaceSettings*)Obj)->bOverrideExportResolutionScale = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideExportResolutionScale = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverrideExportResolutionScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FLightmassMaterialInterfaceSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bOverrideExportResolutionScale_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bOverrideExportResolutionScale_MetaData, ARRAY_COUNT(NewProp_bOverrideExportResolutionScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideDiffuseBoost_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
				{ "ToolTip", "If true, override the diffuse boost setting of the parent material." },
			};
#endif
			auto NewProp_bOverrideDiffuseBoost_SetBit = [](void* Obj){ ((FLightmassMaterialInterfaceSettings*)Obj)->bOverrideDiffuseBoost = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideDiffuseBoost = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverrideDiffuseBoost", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FLightmassMaterialInterfaceSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bOverrideDiffuseBoost_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bOverrideDiffuseBoost_MetaData, ARRAY_COUNT(NewProp_bOverrideDiffuseBoost_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideEmissiveBoost_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
				{ "ToolTip", "If true, override the emissive boost setting of the parent material." },
			};
#endif
			auto NewProp_bOverrideEmissiveBoost_SetBit = [](void* Obj){ ((FLightmassMaterialInterfaceSettings*)Obj)->bOverrideEmissiveBoost = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideEmissiveBoost = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverrideEmissiveBoost", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FLightmassMaterialInterfaceSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bOverrideEmissiveBoost_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bOverrideEmissiveBoost_MetaData, ARRAY_COUNT(NewProp_bOverrideEmissiveBoost_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideCastShadowAsMasked_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
				{ "ToolTip", "If true, override the bCastShadowAsMasked setting of the parent material." },
			};
#endif
			auto NewProp_bOverrideCastShadowAsMasked_SetBit = [](void* Obj){ ((FLightmassMaterialInterfaceSettings*)Obj)->bOverrideCastShadowAsMasked = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideCastShadowAsMasked = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverrideCastShadowAsMasked", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FLightmassMaterialInterfaceSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bOverrideCastShadowAsMasked_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bOverrideCastShadowAsMasked_MetaData, ARRAY_COUNT(NewProp_bOverrideCastShadowAsMasked_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExportResolutionScale_MetaData[] = {
				{ "Category", "Material" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
				{ "ToolTip", "Scales the resolution that this material's attributes were exported at.\nThis is useful for increasing material resolution when details are needed." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ExportResolutionScale = { UE4CodeGen_Private::EPropertyClass::Float, "ExportResolutionScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FLightmassMaterialInterfaceSettings, ExportResolutionScale), METADATA_PARAMS(NewProp_ExportResolutionScale_MetaData, ARRAY_COUNT(NewProp_ExportResolutionScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DiffuseBoost_MetaData[] = {
				{ "Category", "Material" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
				{ "ToolTip", "Scales the diffuse contribution of this material to static lighting." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DiffuseBoost = { UE4CodeGen_Private::EPropertyClass::Float, "DiffuseBoost", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FLightmassMaterialInterfaceSettings, DiffuseBoost), METADATA_PARAMS(NewProp_DiffuseBoost_MetaData, ARRAY_COUNT(NewProp_DiffuseBoost_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmissiveBoost_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
				{ "ToolTip", "Scales the emissive contribution of this material to static lighting." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EmissiveBoost = { UE4CodeGen_Private::EPropertyClass::Float, "EmissiveBoost", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FLightmassMaterialInterfaceSettings, EmissiveBoost), METADATA_PARAMS(NewProp_EmissiveBoost_MetaData, ARRAY_COUNT(NewProp_EmissiveBoost_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCastShadowAsMasked_MetaData[] = {
				{ "Category", "Material" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
				{ "ToolTip", "If true, forces translucency to cast static shadows as if the material were masked." },
			};
#endif
			auto NewProp_bCastShadowAsMasked_SetBit = [](void* Obj){ ((FLightmassMaterialInterfaceSettings*)Obj)->bCastShadowAsMasked = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCastShadowAsMasked = { UE4CodeGen_Private::EPropertyClass::Bool, "bCastShadowAsMasked", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FLightmassMaterialInterfaceSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCastShadowAsMasked_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCastShadowAsMasked_MetaData, ARRAY_COUNT(NewProp_bCastShadowAsMasked_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bOverrideExportResolutionScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bOverrideDiffuseBoost,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bOverrideEmissiveBoost,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bOverrideCastShadowAsMasked,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ExportResolutionScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DiffuseBoost,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EmissiveBoost,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCastShadowAsMasked,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"LightmassMaterialInterfaceSettings",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FLightmassMaterialInterfaceSettings),
				alignof(FLightmassMaterialInterfaceSettings),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_CRC() { return 819472648U; }
	void UMaterialInterface::StaticRegisterNativesUMaterialInterface()
	{
		UClass* Class = UMaterialInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBaseMaterial", (Native)&UMaterialInterface::execGetBaseMaterial },
			{ "GetPhysicalMaterial", (Native)&UMaterialInterface::execGetPhysicalMaterial },
			{ "SetForceMipLevelsToBeResident", (Native)&UMaterialInterface::execSetForceMipLevelsToBeResident },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UMaterialInterface_GetBaseMaterial()
	{
		struct MaterialInterface_eventGetBaseMaterial_Parms
		{
			UMaterial* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MaterialInterface_eventGetBaseMaterial_Parms, ReturnValue), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Material" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
				{ "ToolTip", "Walks up parent chain and finds the base Material that this is an instance of. Just calls the virtual GetMaterial()" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialInterface, "GetBaseMaterial", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020403, sizeof(MaterialInterface_eventGetBaseMaterial_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMaterialInterface_GetPhysicalMaterial()
	{
		struct MaterialInterface_eventGetPhysicalMaterial_Parms
		{
			UPhysicalMaterial* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MaterialInterface_eventGetPhysicalMaterial_Parms, ReturnValue), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Physics|Material" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
				{ "ToolTip", "Return a pointer to the physical material used by this material instance.\n@return The physical material." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialInterface, "GetPhysicalMaterial", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020400, sizeof(MaterialInterface_eventGetPhysicalMaterial_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMaterialInterface_SetForceMipLevelsToBeResident()
	{
		struct MaterialInterface_eventSetForceMipLevelsToBeResident_Parms
		{
			bool OverrideForceMiplevelsToBeResident;
			bool bForceMiplevelsToBeResidentValue;
			float ForceDuration;
			int32 CinematicTextureGroups;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_CinematicTextureGroups = { UE4CodeGen_Private::EPropertyClass::Int, "CinematicTextureGroups", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MaterialInterface_eventSetForceMipLevelsToBeResident_Parms, CinematicTextureGroups), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ForceDuration = { UE4CodeGen_Private::EPropertyClass::Float, "ForceDuration", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MaterialInterface_eventSetForceMipLevelsToBeResident_Parms, ForceDuration), METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bForceMiplevelsToBeResidentValue_SetBit = [](void* Obj){ ((MaterialInterface_eventSetForceMipLevelsToBeResident_Parms*)Obj)->bForceMiplevelsToBeResidentValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceMiplevelsToBeResidentValue = { UE4CodeGen_Private::EPropertyClass::Bool, "bForceMiplevelsToBeResidentValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MaterialInterface_eventSetForceMipLevelsToBeResident_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bForceMiplevelsToBeResidentValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_OverrideForceMiplevelsToBeResident_SetBit = [](void* Obj){ ((MaterialInterface_eventSetForceMipLevelsToBeResident_Parms*)Obj)->OverrideForceMiplevelsToBeResident = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_OverrideForceMiplevelsToBeResident = { UE4CodeGen_Private::EPropertyClass::Bool, "OverrideForceMiplevelsToBeResident", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MaterialInterface_eventSetForceMipLevelsToBeResident_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_OverrideForceMiplevelsToBeResident_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CinematicTextureGroups,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ForceDuration,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bForceMiplevelsToBeResidentValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OverrideForceMiplevelsToBeResident,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Material" },
				{ "CPP_Default_CinematicTextureGroups", "0" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
				{ "ToolTip", "Force the streaming system to disregard the normal logic for the specified duration and\ninstead always load all mip-levels for all textures used by this material.\n\n@param OverrideForceMiplevelsToBeResident    - Whether to use (true) or ignore (false) the bForceMiplevelsToBeResidentValue parameter.\n@param bForceMiplevelsToBeResidentValue              - true forces all mips to stream in. false lets other factors decide what to do with the mips.\n@param ForceDuration                                                 - Number of seconds to keep all mip-levels in memory, disregarding the normal priority logic. Negative value turns it off.\n@param CinematicTextureGroups                                - Bitfield indicating texture groups that should use extra high-resolution mips" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialInterface, "SetForceMipLevelsToBeResident", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020402, sizeof(MaterialInterface_eventSetForceMipLevelsToBeResident_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMaterialInterface_NoRegister()
	{
		return UMaterialInterface::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UMaterialInterface_GetBaseMaterial, "GetBaseMaterial" }, // 2144355799
				{ &Z_Construct_UFunction_UMaterialInterface_GetPhysicalMaterial, "GetPhysicalMaterial" }, // 2431129161
				{ &Z_Construct_UFunction_UMaterialInterface_SetForceMipLevelsToBeResident, "SetForceMipLevelsToBeResident" }, // 603941607
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "Materials/MaterialInterface.h" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
			};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightingGuid_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
				{ "ToolTip", "Unique ID for this material, used for caching during distributed lighting" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LightingGuid = { UE4CodeGen_Private::EPropertyClass::Struct, "LightingGuid", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000800000000, 1, nullptr, STRUCT_OFFSET(UMaterialInterface, LightingGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_LightingGuid_MetaData, ARRAY_COUNT(NewProp_LightingGuid_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThumbnailInfo_MetaData[] = {
				{ "Category", "Thumbnail" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
				{ "ToolTip", "Information for thumbnail rendering" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ThumbnailInfo = { UE4CodeGen_Private::EPropertyClass::Object, "ThumbnailInfo", RF_Public|RF_Transient|RF_MarkAsNative, 0x00120008000a0009, 1, nullptr, STRUCT_OFFSET(UMaterialInterface, ThumbnailInfo), Z_Construct_UClass_UThumbnailInfo_NoRegister, METADATA_PARAMS(NewProp_ThumbnailInfo_MetaData, ARRAY_COUNT(NewProp_ThumbnailInfo_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewMesh_MetaData[] = {
				{ "AllowedClasses", "StaticMesh,SkeletalMesh" },
				{ "Category", "Previewing" },
				{ "ExactClass", "true" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
				{ "ToolTip", "The mesh used by the material editor to preview the material." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PreviewMesh = { UE4CodeGen_Private::EPropertyClass::Struct, "PreviewMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000001, 1, nullptr, STRUCT_OFFSET(UMaterialInterface, PreviewMesh), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(NewProp_PreviewMesh_MetaData, ARRAY_COUNT(NewProp_PreviewMesh_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureStreamingData_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
				{ "ToolTip", "Data used by the texture streaming to know how each texture is sampled by the material. Sorted by names for quick access." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TextureStreamingData = { UE4CodeGen_Private::EPropertyClass::Array, "TextureStreamingData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UMaterialInterface, TextureStreamingData), METADATA_PARAMS(NewProp_TextureStreamingData_MetaData, ARRAY_COUNT(NewProp_TextureStreamingData_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextureStreamingData_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "TextureStreamingData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FMaterialTextureInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureStreamingDataVersion_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_TextureStreamingDataVersion = { UE4CodeGen_Private::EPropertyClass::Int, "TextureStreamingDataVersion", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080800000000, 1, nullptr, STRUCT_OFFSET(UMaterialInterface, TextureStreamingDataVersion), METADATA_PARAMS(NewProp_TextureStreamingDataVersion_MetaData, ARRAY_COUNT(NewProp_TextureStreamingDataVersion_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTextureStreamingDataSorted_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
				{ "ToolTip", "Because of redirector, the texture names need to be resorted at each load in case they changed." },
			};
#endif
			auto NewProp_bTextureStreamingDataSorted_SetBit = [](void* Obj){ ((UMaterialInterface*)Obj)->bTextureStreamingDataSorted = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTextureStreamingDataSorted = { UE4CodeGen_Private::EPropertyClass::Bool, "bTextureStreamingDataSorted", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080800002000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMaterialInterface), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bTextureStreamingDataSorted_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bTextureStreamingDataSorted_MetaData, ARRAY_COUNT(NewProp_bTextureStreamingDataSorted_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightmassSettings_MetaData[] = {
				{ "Category", "Lightmass" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
				{ "ToolTip", "The Lightmass settings for this object." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LightmassSettings = { UE4CodeGen_Private::EPropertyClass::Struct, "LightmassSettings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UMaterialInterface, LightmassSettings), Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings, METADATA_PARAMS(NewProp_LightmassSettings_MetaData, ARRAY_COUNT(NewProp_LightmassSettings_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubsurfaceProfile_MetaData[] = {
				{ "Category", "Material" },
				{ "DisplayName", "Subsurface Profile" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
				{ "ToolTip", "SubsurfaceProfile, for Screen Space Subsurface Scattering" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SubsurfaceProfile = { UE4CodeGen_Private::EPropertyClass::Object, "SubsurfaceProfile", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UMaterialInterface, SubsurfaceProfile), Z_Construct_UClass_USubsurfaceProfile_NoRegister, METADATA_PARAMS(NewProp_SubsurfaceProfile_MetaData, ARRAY_COUNT(NewProp_SubsurfaceProfile_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LightingGuid,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ThumbnailInfo,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PreviewMesh,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TextureStreamingData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TextureStreamingData_Inner,
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TextureStreamingDataVersion,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bTextureStreamingDataSorted,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LightmassSettings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SubsurfaceProfile,
			};
			static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[] = {
				{ Z_Construct_UClass_UBlendableInterface_NoRegister, (int32)VTABLE_OFFSET(UMaterialInterface, IBlendableInterface), false },
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialInterface>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialInterface::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880081u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				InterfaceParams, ARRAY_COUNT(InterfaceParams),
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialInterface, 3055669621);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialInterface(Z_Construct_UClass_UMaterialInterface, &UMaterialInterface::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
