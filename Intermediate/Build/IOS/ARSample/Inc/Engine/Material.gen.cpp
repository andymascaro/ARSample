// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Materials/Material.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterial() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMaterialDecalResponse();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDecalBlendMode();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FParameterGroupData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialParameterCollection_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialFunctionInfo();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialFunction_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector2MaterialInput();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialInput();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVectorMaterialInput();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FScalarMaterialInput();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FColorMaterialInput();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERefractionMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBlendableLocation();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionComment_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMaterialTessellationMode();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETranslucencyLightingMode();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialAttributesInput();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMaterialShadingModel();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBlendMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMaterialDomain();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
// End Cross Module References
	static UEnum* EMaterialDecalResponse_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMaterialDecalResponse, Z_Construct_UPackage__Script_Engine(), TEXT("EMaterialDecalResponse"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMaterialDecalResponse(EMaterialDecalResponse_StaticEnum, TEXT("/Script/Engine"), TEXT("EMaterialDecalResponse"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EMaterialDecalResponse_CRC() { return 1627020792U; }
	UEnum* Z_Construct_UEnum_Engine_EMaterialDecalResponse()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMaterialDecalResponse"), 0, Get_Z_Construct_UEnum_Engine_EMaterialDecalResponse_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "MDR_None", (int64)MDR_None },
				{ "MDR_ColorNormalRoughness", (int64)MDR_ColorNormalRoughness },
				{ "MDR_Color", (int64)MDR_Color },
				{ "MDR_ColorNormal", (int64)MDR_ColorNormal },
				{ "MDR_ColorRoughness", (int64)MDR_ColorRoughness },
				{ "MDR_Normal", (int64)MDR_Normal },
				{ "MDR_NormalRoughness", (int64)MDR_NormalRoughness },
				{ "MDR_Roughness", (int64)MDR_Roughness },
				{ "MDR_MAX", (int64)MDR_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "MDR_Color.DisplayName", "Color" },
				{ "MDR_Color.ToolTip", "Receive Decals, applies color DBuffer channels, assumes the decal is non metal and mask the subsurface scattering." },
				{ "MDR_ColorNormal.DisplayName", "Color Normal" },
				{ "MDR_ColorNormal.ToolTip", "Receive Decals, applies all DBuffer channels, assumes the decal is non metal and mask the subsurface scattering." },
				{ "MDR_ColorNormalRoughness.DisplayName", "Color Normal Roughness" },
				{ "MDR_ColorNormalRoughness.ToolTip", "Receive Decals, applies all DBuffer channels, assumes the decal is non metal and mask the subsurface scattering." },
				{ "MDR_ColorRoughness.DisplayName", "Color Roughness" },
				{ "MDR_ColorRoughness.ToolTip", "Receive Decals, applies all DBuffer channels, assumes the decal is non metal and mask the subsurface scattering." },
				{ "MDR_None.DisplayName", "None" },
				{ "MDR_None.ToolTip", "Do not receive decals (Later we still can read the DBuffer channels to customize the effect, this frees up some interpolators)." },
				{ "MDR_Normal.DisplayName", "Normal" },
				{ "MDR_Normal.ToolTip", "Receive Decals, applies all DBuffer channels, assumes the decal is non metal and mask the subsurface scattering." },
				{ "MDR_NormalRoughness.DisplayName", "Normal Roughness" },
				{ "MDR_NormalRoughness.ToolTip", "Receive Decals, applies all DBuffer channels, assumes the decal is non metal and mask the subsurface scattering." },
				{ "MDR_Roughness.DisplayName", "Roughness" },
				{ "MDR_Roughness.ToolTip", "Receive Decals, applies all DBuffer channels, assumes the decal is non metal and mask the subsurface scattering." },
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
				{ "ToolTip", "Defines how the material reacts on DBuffer decals, later we can expose more variants between None and Default." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EMaterialDecalResponse",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EMaterialDecalResponse",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EDecalBlendMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EDecalBlendMode, Z_Construct_UPackage__Script_Engine(), TEXT("EDecalBlendMode"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDecalBlendMode(EDecalBlendMode_StaticEnum, TEXT("/Script/Engine"), TEXT("EDecalBlendMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EDecalBlendMode_CRC() { return 1815080416U; }
	UEnum* Z_Construct_UEnum_Engine_EDecalBlendMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDecalBlendMode"), 0, Get_Z_Construct_UEnum_Engine_EDecalBlendMode_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "DBM_Translucent", (int64)DBM_Translucent },
				{ "DBM_Stain", (int64)DBM_Stain },
				{ "DBM_Normal", (int64)DBM_Normal },
				{ "DBM_Emissive", (int64)DBM_Emissive },
				{ "DBM_DBuffer_ColorNormalRoughness", (int64)DBM_DBuffer_ColorNormalRoughness },
				{ "DBM_DBuffer_Color", (int64)DBM_DBuffer_Color },
				{ "DBM_DBuffer_ColorNormal", (int64)DBM_DBuffer_ColorNormal },
				{ "DBM_DBuffer_ColorRoughness", (int64)DBM_DBuffer_ColorRoughness },
				{ "DBM_DBuffer_Normal", (int64)DBM_DBuffer_Normal },
				{ "DBM_DBuffer_NormalRoughness", (int64)DBM_DBuffer_NormalRoughness },
				{ "DBM_DBuffer_Roughness", (int64)DBM_DBuffer_Roughness },
				{ "DBM_Volumetric_DistanceFunction", (int64)DBM_Volumetric_DistanceFunction },
				{ "DBM_MAX", (int64)DBM_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "DBM_DBuffer_Color.DisplayName", "DBuffer Translucent Color" },
				{ "DBM_DBuffer_Color.ToolTip", "Non metal, put into DBuffer to work for baked lighting as well." },
				{ "DBM_DBuffer_ColorNormal.DisplayName", "DBuffer Translucent Color,Normal" },
				{ "DBM_DBuffer_ColorNormal.ToolTip", "Non metal, put into DBuffer to work for baked lighting as well (becomes DBM_DBuffer_Color if normal is not hooked up)." },
				{ "DBM_DBuffer_ColorNormalRoughness.DisplayName", "DBuffer Translucent Color,Normal,Roughness" },
				{ "DBM_DBuffer_ColorNormalRoughness.ToolTip", "Non metal, put into DBuffer to work for baked lighting as well (becomes DBM_TranslucentNormal if normal is not hooked up)." },
				{ "DBM_DBuffer_ColorRoughness.DisplayName", "DBuffer Translucent Color,Roughness" },
				{ "DBM_DBuffer_ColorRoughness.ToolTip", "Non metal, put into DBuffer to work for baked lighting as well." },
				{ "DBM_DBuffer_Normal.DisplayName", "DBuffer Translucent Normal" },
				{ "DBM_DBuffer_Normal.ToolTip", "Non metal, put into DBuffer to work for baked lighting as well." },
				{ "DBM_DBuffer_NormalRoughness.DisplayName", "DBuffer Translucent Normal,Roughness" },
				{ "DBM_DBuffer_NormalRoughness.ToolTip", "Non metal, put into DBuffer to work for baked lighting as well (becomes DBM_DBuffer_Roughness if normal is not hooked up)." },
				{ "DBM_DBuffer_Roughness.DisplayName", "DBuffer Translucent Roughness" },
				{ "DBM_DBuffer_Roughness.ToolTip", "Non metal, put into DBuffer to work for baked lighting as well." },
				{ "DBM_Emissive.DisplayName", "Emissive" },
				{ "DBM_Emissive.ToolTip", "Additive emissive only." },
				{ "DBM_Normal.DisplayName", "Normal" },
				{ "DBM_Normal.ToolTip", "Only blend normal, updating the GBuffer, does not work for baked lighting." },
				{ "DBM_Stain.DisplayName", "Stain" },
				{ "DBM_Stain.ToolTip", "Modulate BaseColor, blend rest, updating the GBuffer, does not work for baked lighting." },
				{ "DBM_Translucent.DisplayName", "Translucent" },
				{ "DBM_Translucent.ToolTip", "Blend full material, updating the GBuffer, does not work for baked lighting." },
				{ "DBM_Volumetric_DistanceFunction.DisplayName", "Volumetric Distance Function (experimental)" },
				{ "DBM_Volumetric_DistanceFunction.ToolTip", "Output signed distance in Opacity depending on LightVector. Note: Can be costly, no shadow casting but receiving, no per pixel normal yet, no quality settings yet" },
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
				{ "ToolTip", "Defines how the GBuffer channels are getting manipulated by a decal material pass. Actual index is used to control shader parameters so don't change order." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EDecalBlendMode",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EDecalBlendMode",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FParameterGroupData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FParameterGroupData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FParameterGroupData, Z_Construct_UPackage__Script_Engine(), TEXT("ParameterGroupData"), sizeof(FParameterGroupData), Get_Z_Construct_UScriptStruct_FParameterGroupData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FParameterGroupData(FParameterGroupData::StaticStruct, TEXT("/Script/Engine"), TEXT("ParameterGroupData"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFParameterGroupData
{
	FScriptStruct_Engine_StaticRegisterNativesFParameterGroupData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ParameterGroupData")),new UScriptStruct::TCppStructOps<FParameterGroupData>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFParameterGroupData;
	UScriptStruct* Z_Construct_UScriptStruct_FParameterGroupData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FParameterGroupData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ParameterGroupData"), sizeof(FParameterGroupData), Get_Z_Construct_UScriptStruct_FParameterGroupData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FParameterGroupData>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupSortPriority_MetaData[] = {
				{ "Category", "Group Sorting" },
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_GroupSortPriority = { UE4CodeGen_Private::EPropertyClass::Int, "GroupSortPriority", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FParameterGroupData, GroupSortPriority), METADATA_PARAMS(NewProp_GroupSortPriority_MetaData, ARRAY_COUNT(NewProp_GroupSortPriority_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupName_MetaData[] = {
				{ "Category", "Group Sorting" },
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_GroupName = { UE4CodeGen_Private::EPropertyClass::Str, "GroupName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020001, 1, nullptr, STRUCT_OFFSET(FParameterGroupData, GroupName), METADATA_PARAMS(NewProp_GroupName_MetaData, ARRAY_COUNT(NewProp_GroupName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GroupSortPriority,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GroupName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"ParameterGroupData",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FParameterGroupData),
				alignof(FParameterGroupData),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FParameterGroupData_CRC() { return 3256667660U; }
class UScriptStruct* FMaterialParameterCollectionInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo, Z_Construct_UPackage__Script_Engine(), TEXT("MaterialParameterCollectionInfo"), sizeof(FMaterialParameterCollectionInfo), Get_Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMaterialParameterCollectionInfo(FMaterialParameterCollectionInfo::StaticStruct, TEXT("/Script/Engine"), TEXT("MaterialParameterCollectionInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFMaterialParameterCollectionInfo
{
	FScriptStruct_Engine_StaticRegisterNativesFMaterialParameterCollectionInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MaterialParameterCollectionInfo")),new UScriptStruct::TCppStructOps<FMaterialParameterCollectionInfo>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFMaterialParameterCollectionInfo;
	UScriptStruct* Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MaterialParameterCollectionInfo"), sizeof(FMaterialParameterCollectionInfo), Get_Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
				{ "ToolTip", "Stores information about a parameter collection that this material references, used to know when the material needs to be recompiled." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialParameterCollectionInfo>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterCollection_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
				{ "ToolTip", "The collection which this material has a dependency on." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParameterCollection = { UE4CodeGen_Private::EPropertyClass::Object, "ParameterCollection", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMaterialParameterCollectionInfo, ParameterCollection), Z_Construct_UClass_UMaterialParameterCollection_NoRegister, METADATA_PARAMS(NewProp_ParameterCollection_MetaData, ARRAY_COUNT(NewProp_ParameterCollection_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateId_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
				{ "ToolTip", "Id that the collection had when this material was last compiled." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_StateId = { UE4CodeGen_Private::EPropertyClass::Struct, "StateId", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMaterialParameterCollectionInfo, StateId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_StateId_MetaData, ARRAY_COUNT(NewProp_StateId_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParameterCollection,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StateId,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MaterialParameterCollectionInfo",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FMaterialParameterCollectionInfo),
				alignof(FMaterialParameterCollectionInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo_CRC() { return 2438852220U; }
class UScriptStruct* FMaterialFunctionInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FMaterialFunctionInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialFunctionInfo, Z_Construct_UPackage__Script_Engine(), TEXT("MaterialFunctionInfo"), sizeof(FMaterialFunctionInfo), Get_Z_Construct_UScriptStruct_FMaterialFunctionInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMaterialFunctionInfo(FMaterialFunctionInfo::StaticStruct, TEXT("/Script/Engine"), TEXT("MaterialFunctionInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFMaterialFunctionInfo
{
	FScriptStruct_Engine_StaticRegisterNativesFMaterialFunctionInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MaterialFunctionInfo")),new UScriptStruct::TCppStructOps<FMaterialFunctionInfo>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFMaterialFunctionInfo;
	UScriptStruct* Z_Construct_UScriptStruct_FMaterialFunctionInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMaterialFunctionInfo_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MaterialFunctionInfo"), sizeof(FMaterialFunctionInfo), Get_Z_Construct_UScriptStruct_FMaterialFunctionInfo_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
				{ "ToolTip", "Stores information about a function that this material references, used to know when the material needs to be recompiled." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialFunctionInfo>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Function_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
				{ "ToolTip", "The function which this material has a dependency on." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Function = { UE4CodeGen_Private::EPropertyClass::Object, "Function", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMaterialFunctionInfo, Function), Z_Construct_UClass_UMaterialFunction_NoRegister, METADATA_PARAMS(NewProp_Function_MetaData, ARRAY_COUNT(NewProp_Function_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateId_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
				{ "ToolTip", "Id that the function had when this material was last compiled." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_StateId = { UE4CodeGen_Private::EPropertyClass::Struct, "StateId", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMaterialFunctionInfo, StateId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_StateId_MetaData, ARRAY_COUNT(NewProp_StateId_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Function,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StateId,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MaterialFunctionInfo",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FMaterialFunctionInfo),
				alignof(FMaterialFunctionInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMaterialFunctionInfo_CRC() { return 632783763U; }
	UScriptStruct* Z_Construct_UScriptStruct_FVector2MaterialInput()
	{
		struct FMaterialInput
		{
#if WITH_EDITORONLY_DATA
			UMaterialExpression* Expression;
#endif // WITH_EDITORONLY_DATA
			int32 OutputIndex;
			FString InputName;
			int32 Mask;
			int32 MaskR;
			int32 MaskG;
			int32 MaskB;
			int32 MaskA;
			FName ExpressionName;
		};

		struct FVector2MaterialInput : public FMaterialInput
		{
			uint8 UseConstant:1;
			float ConstantX;
			float ConstantY;
		};

#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVector2MaterialInput_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Vector2MaterialInput"), sizeof(FVector2MaterialInput), Get_Z_Construct_UScriptStruct_FVector2MaterialInput_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstantY_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ConstantY = { UE4CodeGen_Private::EPropertyClass::Float, "ConstantY", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FVector2MaterialInput, ConstantY), METADATA_PARAMS(NewProp_ConstantY_MetaData, ARRAY_COUNT(NewProp_ConstantY_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstantX_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ConstantX = { UE4CodeGen_Private::EPropertyClass::Float, "ConstantX", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FVector2MaterialInput, ConstantX), METADATA_PARAMS(NewProp_ConstantX_MetaData, ARRAY_COUNT(NewProp_ConstantX_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseConstant_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
			};
#endif
			auto NewProp_UseConstant_SetBit = [](void* Obj){ ((FVector2MaterialInput*)Obj)->UseConstant = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseConstant = { UE4CodeGen_Private::EPropertyClass::Bool, "UseConstant", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FVector2MaterialInput), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_UseConstant_SetBit)>::SetBit, METADATA_PARAMS(NewProp_UseConstant_MetaData, ARRAY_COUNT(NewProp_UseConstant_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConstantY,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConstantX,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UseConstant,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				Z_Construct_UScriptStruct_FMaterialInput,
				nullptr,
				"Vector2MaterialInput",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000008),
				sizeof(FVector2MaterialInput),
				alignof(FVector2MaterialInput),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVector2MaterialInput_CRC() { return 2232617800U; }
	UScriptStruct* Z_Construct_UScriptStruct_FVectorMaterialInput()
	{
		struct FMaterialInput
		{
#if WITH_EDITORONLY_DATA
			UMaterialExpression* Expression;
#endif // WITH_EDITORONLY_DATA
			int32 OutputIndex;
			FString InputName;
			int32 Mask;
			int32 MaskR;
			int32 MaskG;
			int32 MaskB;
			int32 MaskA;
			FName ExpressionName;
		};

		struct FVectorMaterialInput : public FMaterialInput
		{
			uint8 UseConstant:1;
			FVector Constant;
		};

#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVectorMaterialInput_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VectorMaterialInput"), sizeof(FVectorMaterialInput), Get_Z_Construct_UScriptStruct_FVectorMaterialInput_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Constant_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Constant = { UE4CodeGen_Private::EPropertyClass::Struct, "Constant", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FVectorMaterialInput, Constant), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_Constant_MetaData, ARRAY_COUNT(NewProp_Constant_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseConstant_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
			};
#endif
			auto NewProp_UseConstant_SetBit = [](void* Obj){ ((FVectorMaterialInput*)Obj)->UseConstant = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseConstant = { UE4CodeGen_Private::EPropertyClass::Bool, "UseConstant", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FVectorMaterialInput), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_UseConstant_SetBit)>::SetBit, METADATA_PARAMS(NewProp_UseConstant_MetaData, ARRAY_COUNT(NewProp_UseConstant_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Constant,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UseConstant,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				Z_Construct_UScriptStruct_FMaterialInput,
				nullptr,
				"VectorMaterialInput",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000008),
				sizeof(FVectorMaterialInput),
				alignof(FVectorMaterialInput),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVectorMaterialInput_CRC() { return 2789598632U; }
	UScriptStruct* Z_Construct_UScriptStruct_FScalarMaterialInput()
	{
		struct FMaterialInput
		{
#if WITH_EDITORONLY_DATA
			UMaterialExpression* Expression;
#endif // WITH_EDITORONLY_DATA
			int32 OutputIndex;
			FString InputName;
			int32 Mask;
			int32 MaskR;
			int32 MaskG;
			int32 MaskB;
			int32 MaskA;
			FName ExpressionName;
		};

		struct FScalarMaterialInput : public FMaterialInput
		{
			uint8 UseConstant:1;
			float Constant;
		};

#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FScalarMaterialInput_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ScalarMaterialInput"), sizeof(FScalarMaterialInput), Get_Z_Construct_UScriptStruct_FScalarMaterialInput_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Constant_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Constant = { UE4CodeGen_Private::EPropertyClass::Float, "Constant", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FScalarMaterialInput, Constant), METADATA_PARAMS(NewProp_Constant_MetaData, ARRAY_COUNT(NewProp_Constant_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseConstant_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
			};
#endif
			auto NewProp_UseConstant_SetBit = [](void* Obj){ ((FScalarMaterialInput*)Obj)->UseConstant = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseConstant = { UE4CodeGen_Private::EPropertyClass::Bool, "UseConstant", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FScalarMaterialInput), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_UseConstant_SetBit)>::SetBit, METADATA_PARAMS(NewProp_UseConstant_MetaData, ARRAY_COUNT(NewProp_UseConstant_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Constant,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UseConstant,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				Z_Construct_UScriptStruct_FMaterialInput,
				nullptr,
				"ScalarMaterialInput",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000008),
				sizeof(FScalarMaterialInput),
				alignof(FScalarMaterialInput),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FScalarMaterialInput_CRC() { return 4234735523U; }
	UScriptStruct* Z_Construct_UScriptStruct_FColorMaterialInput()
	{
		struct FMaterialInput
		{
#if WITH_EDITORONLY_DATA
			UMaterialExpression* Expression;
#endif // WITH_EDITORONLY_DATA
			int32 OutputIndex;
			FString InputName;
			int32 Mask;
			int32 MaskR;
			int32 MaskG;
			int32 MaskB;
			int32 MaskA;
			FName ExpressionName;
		};

		struct FColorMaterialInput : public FMaterialInput
		{
			uint8 UseConstant:1;
			FColor Constant;
		};

#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FColorMaterialInput_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ColorMaterialInput"), sizeof(FColorMaterialInput), Get_Z_Construct_UScriptStruct_FColorMaterialInput_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Constant_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Constant = { UE4CodeGen_Private::EPropertyClass::Struct, "Constant", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FColorMaterialInput, Constant), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(NewProp_Constant_MetaData, ARRAY_COUNT(NewProp_Constant_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseConstant_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
			};
#endif
			auto NewProp_UseConstant_SetBit = [](void* Obj){ ((FColorMaterialInput*)Obj)->UseConstant = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseConstant = { UE4CodeGen_Private::EPropertyClass::Bool, "UseConstant", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FColorMaterialInput), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_UseConstant_SetBit)>::SetBit, METADATA_PARAMS(NewProp_UseConstant_MetaData, ARRAY_COUNT(NewProp_UseConstant_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Constant,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UseConstant,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				Z_Construct_UScriptStruct_FMaterialInput,
				nullptr,
				"ColorMaterialInput",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000008),
				sizeof(FColorMaterialInput),
				alignof(FColorMaterialInput),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FColorMaterialInput_CRC() { return 2677327031U; }
	UScriptStruct* Z_Construct_UScriptStruct_FMaterialInput()
	{
		struct FMaterialInput
		{
#if WITH_EDITORONLY_DATA
			UMaterialExpression* Expression;
#endif // WITH_EDITORONLY_DATA
			int32 OutputIndex;
			FString InputName;
			int32 Mask;
			int32 MaskR;
			int32 MaskG;
			int32 MaskB;
			int32 MaskA;
			FName ExpressionName;
		};

#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMaterialInput_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MaterialInput"), sizeof(FMaterialInput), Get_Z_Construct_UScriptStruct_FMaterialInput_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
				{ "ToolTip", "Material input structs.\n@warning: manually mirrored in MaterialShared.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpressionName_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
				{ "ToolTip", "Material expression name that this input is connected to, or None if not connected. Used only in cooked builds" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ExpressionName = { UE4CodeGen_Private::EPropertyClass::Name, "ExpressionName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMaterialInput, ExpressionName), METADATA_PARAMS(NewProp_ExpressionName_MetaData, ARRAY_COUNT(NewProp_ExpressionName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaskA_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaskA = { UE4CodeGen_Private::EPropertyClass::Int, "MaskA", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMaterialInput, MaskA), METADATA_PARAMS(NewProp_MaskA_MetaData, ARRAY_COUNT(NewProp_MaskA_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaskB_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaskB = { UE4CodeGen_Private::EPropertyClass::Int, "MaskB", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMaterialInput, MaskB), METADATA_PARAMS(NewProp_MaskB_MetaData, ARRAY_COUNT(NewProp_MaskB_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaskG_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaskG = { UE4CodeGen_Private::EPropertyClass::Int, "MaskG", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMaterialInput, MaskG), METADATA_PARAMS(NewProp_MaskG_MetaData, ARRAY_COUNT(NewProp_MaskG_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaskR_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaskR = { UE4CodeGen_Private::EPropertyClass::Int, "MaskR", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMaterialInput, MaskR), METADATA_PARAMS(NewProp_MaskR_MetaData, ARRAY_COUNT(NewProp_MaskR_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mask_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Mask = { UE4CodeGen_Private::EPropertyClass::Int, "Mask", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMaterialInput, Mask), METADATA_PARAMS(NewProp_Mask_MetaData, ARRAY_COUNT(NewProp_Mask_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputName_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
				{ "ToolTip", "Optional name of the input.\nNote that this is the only member which is not derived from the output currently connected." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_InputName = { UE4CodeGen_Private::EPropertyClass::Str, "InputName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMaterialInput, InputName), METADATA_PARAMS(NewProp_InputName_MetaData, ARRAY_COUNT(NewProp_InputName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputIndex_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
				{ "ToolTip", "Index into Expression's outputs array that this input is connected to." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_OutputIndex = { UE4CodeGen_Private::EPropertyClass::Int, "OutputIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMaterialInput, OutputIndex), METADATA_PARAMS(NewProp_OutputIndex_MetaData, ARRAY_COUNT(NewProp_OutputIndex_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Expression_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
				{ "ToolTip", "Material expression that this input is connected to, or NULL if not connected." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Expression = { UE4CodeGen_Private::EPropertyClass::Object, "Expression", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(FMaterialInput, Expression), Z_Construct_UClass_UMaterialExpression_NoRegister, METADATA_PARAMS(NewProp_Expression_MetaData, ARRAY_COUNT(NewProp_Expression_MetaData)) };
#endif // WITH_EDITORONLY_DATA
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ExpressionName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaskA,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaskB,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaskG,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaskR,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Mask,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InputName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutputIndex,
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Expression,
#endif // WITH_EDITORONLY_DATA
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				nullptr,
				"MaterialInput",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000008),
				sizeof(FMaterialInput),
				alignof(FMaterialInput),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMaterialInput_CRC() { return 364795842U; }
	void UMaterial::StaticRegisterNativesUMaterial()
	{
	}
	UClass* Z_Construct_UClass_UMaterial_NoRegister()
	{
		return UMaterial::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterial()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UMaterialInterface,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HideCategories", "Object" },
				{ "IncludePath", "Materials/Material.h" },
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
				{ "ToolTip", "A Material is an asset which can be applied to a mesh to control the visual look of the scene.\nWhen light from the scene hits the surface, the shading model of the material is used to calculate how that light interacts with the surface.\n\nWarning: Creating new materials directly increases shader compile times!  Consider creating a Material Instance off of an existing material instead." },
			};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReferencedTextureGuids_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReferencedTextureGuids = { UE4CodeGen_Private::EPropertyClass::Array, "ReferencedTextureGuids", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000800000000, 1, nullptr, STRUCT_OFFSET(UMaterial, ReferencedTextureGuids), METADATA_PARAMS(NewProp_ReferencedTextureGuids_MetaData, ARRAY_COUNT(NewProp_ReferencedTextureGuids_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReferencedTextureGuids_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ReferencedTextureGuids", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000800000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpressionTextureReferences_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
				{ "ToolTip", "Cached texture references from all expressions in the material (including nested functions).\nThis is used to link uniform texture expressions which were stored in the DDC with the UTextures that they reference." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExpressionTextureReferences = { UE4CodeGen_Private::EPropertyClass::Array, "ExpressionTextureReferences", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000002000, 1, nullptr, STRUCT_OFFSET(UMaterial, ExpressionTextureReferences), METADATA_PARAMS(NewProp_ExpressionTextureReferences_MetaData, ARRAY_COUNT(NewProp_ExpressionTextureReferences_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExpressionTextureReferences_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ExpressionTextureReferences", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateId_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
				{ "ToolTip", "Guid that uniquely identifies this material.\nAny changes to the state of the material that do not appear separately in the shadermap DDC keys must cause this guid to be regenerated!\nFor example, a modification to the Expressions array.\nCode changes that cause the guid to be regenerated on load should be avoided, as that requires a resave of the content to stop recompiling every load." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_StateId = { UE4CodeGen_Private::EPropertyClass::Struct, "StateId", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterial, StateId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_StateId_MetaData, ARRAY_COUNT(NewProp_StateId_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RefractionDepthBias_MetaData[] = {
				{ "Category", "Refraction" },
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
				{ "ToolTip", "This is the refraction depth bias, larger values offset distortion to prevent closer objects from rendering into the distorted surface at acute viewing angles but increases the disconnect between surface and where the refraction starts." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RefractionDepthBias = { UE4CodeGen_Private::EPropertyClass::Float, "RefractionDepthBias", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterial, RefractionDepthBias), METADATA_PARAMS(NewProp_RefractionDepthBias_MetaData, ARRAY_COUNT(NewProp_RefractionDepthBias_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RefractionMode_MetaData[] = {
				{ "Category", "Refraction" },
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
				{ "ToolTip", "Controls how the Refraction input is interpreted and how the refraction offset into scene color is computed for this material." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_RefractionMode = { UE4CodeGen_Private::EPropertyClass::Byte, "RefractionMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterial, RefractionMode), Z_Construct_UEnum_Engine_ERefractionMode, METADATA_PARAMS(NewProp_RefractionMode_MetaData, ARRAY_COUNT(NewProp_RefractionMode_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendableOutputAlpha_MetaData[] = {
				{ "Category", "PostProcessMaterial" },
				{ "DisplayName", "Output Alpha" },
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
				{ "ToolTip", "If this is enabled, the blendable will output alpha" },
			};
#endif
			auto NewProp_BlendableOutputAlpha_SetBit = [](void* Obj){ ((UMaterial*)Obj)->BlendableOutputAlpha = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_BlendableOutputAlpha = { UE4CodeGen_Private::EPropertyClass::Bool, "BlendableOutputAlpha", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMaterial), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_BlendableOutputAlpha_SetBit)>::SetBit, METADATA_PARAMS(NewProp_BlendableOutputAlpha_MetaData, ARRAY_COUNT(NewProp_BlendableOutputAlpha_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendablePriority_MetaData[] = {
				{ "Category", "PostProcessMaterial" },
				{ "DisplayName", "Blendable Priority" },
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
				{ "ToolTip", "If multiple nodes with the same  type are inserted at the same point, this defined order and if they get combined, only used if domain is PostProcess" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_BlendablePriority = { UE4CodeGen_Private::EPropertyClass::Int, "BlendablePriority", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMaterial, BlendablePriority), METADATA_PARAMS(NewProp_BlendablePriority_MetaData, ARRAY_COUNT(NewProp_BlendablePriority_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendableLocation_MetaData[] = {
				{ "Category", "PostProcessMaterial" },
				{ "DisplayName", "Blendable Location" },
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
				{ "ToolTip", "Where the node is inserted in the (post processing) graph, only used if domain is PostProcess" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_BlendableLocation = { UE4CodeGen_Private::EPropertyClass::Byte, "BlendableLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMaterial, BlendableLocation), Z_Construct_UEnum_Engine_EBlendableLocation, METADATA_PARAMS(NewProp_BlendableLocation_MetaData, ARRAY_COUNT(NewProp_BlendableLocation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UsageFlagWarnings_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
				{ "ToolTip", "true if we have printed a warning about material usage for a given usage flag." },
			};
#endif
			static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_UsageFlagWarnings = { UE4CodeGen_Private::EPropertyClass::UInt32, "UsageFlagWarnings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(UMaterial, UsageFlagWarnings), METADATA_PARAMS(NewProp_UsageFlagWarnings_MetaData, ARRAY_COUNT(NewProp_UsageFlagWarnings_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsMaterialEditorStatsMaterial_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
				{ "ToolTip", "true if this is a special material used for stats by the material editor." },
			};
#endif
			auto NewProp_bIsMaterialEditorStatsMaterial_SetBit = [](void* Obj){ ((UMaterial*)Obj)->bIsMaterialEditorStatsMaterial = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsMaterialEditorStatsMaterial = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsMaterialEditorStatsMaterial", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000202000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMaterial), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsMaterialEditorStatsMaterial_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsMaterialEditorStatsMaterial_MetaData, ARRAY_COUNT(NewProp_bIsMaterialEditorStatsMaterial_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowDevelopmentShaderCompile_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
				{ "ToolTip", "If true the compilation environment will be changed to remove the global COMPILE_SHADERS_FOR_DEVELOPMENT flag." },
			};
#endif
			auto NewProp_bAllowDevelopmentShaderCompile_SetBit = [](void* Obj){ ((UMaterial*)Obj)->bAllowDevelopmentShaderCompile = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowDevelopmentShaderCompile = { UE4CodeGen_Private::EPropertyClass::Bool, "bAllowDevelopmentShaderCompile", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000202000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMaterial), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAllowDevelopmentShaderCompile_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAllowDevelopmentShaderCompile_MetaData, ARRAY_COUNT(NewProp_bAllowDevelopmentShaderCompile_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bComputeFogPerPixel_MetaData[] = {
				{ "Category", "Translucency" },
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
				{ "ToolTip", "When true, translucent materials have fog computed for every pixel, which costs more but fixes artifacts due to low tessellation." },
			};
#endif
			auto NewProp_bComputeFogPerPixel_SetBit = [](void* Obj){ ((UMaterial*)Obj)->bComputeFogPerPixel = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bComputeFogPerPixel = { UE4CodeGen_Private::EPropertyClass::Bool, "bComputeFogPerPixel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMaterial), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bComputeFogPerPixel_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bComputeFogPerPixel_MetaData, ARRAY_COUNT(NewProp_bComputeFogPerPixel_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseTranslucencyVertexFog_MetaData[] = {
				{ "Category", "Translucency" },
				{ "DisplayName", "Apply Fogging" },
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
				{ "ToolTip", "When true, translucent materials are fogged. Defaults to true." },
			};
#endif
			auto NewProp_bUseTranslucencyVertexFog_SetBit = [](void* Obj){ ((UMaterial*)Obj)->bUseTranslucencyVertexFog = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseTranslucencyVertexFog = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseTranslucencyVertexFog", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMaterial), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseTranslucencyVertexFog_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseTranslucencyVertexFog_MetaData, ARRAY_COUNT(NewProp_bUseTranslucencyVertexFog_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseMaterialAttributes_MetaData[] = {
				{ "Category", "Material" },
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
				{ "ToolTip", "when true, the material attributes pin is used instead of the regular pins." },
			};
#endif
			auto NewProp_bUseMaterialAttributes_SetBit = [](void* Obj){ ((UMaterial*)Obj)->bUseMaterialAttributes = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseMaterialAttributes = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseMaterialAttributes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMaterial), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseMaterialAttributes_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseMaterialAttributes_MetaData, ARRAY_COUNT(NewProp_bUseMaterialAttributes_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsPreviewMaterial_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
				{ "ToolTip", "true if Material is the preview material used in the material editor." },
			};
#endif
			auto NewProp_bIsPreviewMaterial_SetBit = [](void* Obj){ ((UMaterial*)Obj)->bIsPreviewMaterial = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPreviewMaterial = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsPreviewMaterial", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000202000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMaterial), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsPreviewMaterial_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsPreviewMaterial_MetaData, ARRAY_COUNT(NewProp_bIsPreviewMaterial_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsMasked_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
				{ "ToolTip", "true if Material is masked and uses custom opacity" },
			};
#endif
			auto NewProp_bIsMasked_SetBit = [](void* Obj){ ((UMaterial*)Obj)->bIsMasked_DEPRECATED = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsMasked = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsMasked", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMaterial), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsMasked_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsMasked_MetaData, ARRAY_COUNT(NewProp_bIsMasked_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanMaskedBeAssumedOpaque_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
				{ "ToolTip", "true if this Material can be assumed Opaque when set to masked." },
			};
#endif
			auto NewProp_bCanMaskedBeAssumedOpaque_SetBit = [](void* Obj){ ((UMaterial*)Obj)->bCanMaskedBeAssumedOpaque = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanMaskedBeAssumedOpaque = { UE4CodeGen_Private::EPropertyClass::Bool, "bCanMaskedBeAssumedOpaque", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMaterial), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCanMaskedBeAssumedOpaque_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCanMaskedBeAssumedOpaque_MetaData, ARRAY_COUNT(NewProp_bCanMaskedBeAssumedOpaque_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialParameterCollectionInfos_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
				{ "ToolTip", "Array of all parameter collections this material depends on." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MaterialParameterCollectionInfos = { UE4CodeGen_Private::EPropertyClass::Array, "MaterialParameterCollectionInfos", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterial, MaterialParameterCollectionInfos), METADATA_PARAMS(NewProp_MaterialParameterCollectionInfos_MetaData, ARRAY_COUNT(NewProp_MaterialParameterCollectionInfos_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaterialParameterCollectionInfos_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "MaterialParameterCollectionInfos", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialFunctionInfos_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
				{ "ToolTip", "Array of all functions this material depends on." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MaterialFunctionInfos = { UE4CodeGen_Private::EPropertyClass::Array, "MaterialFunctionInfos", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterial, MaterialFunctionInfos), METADATA_PARAMS(NewProp_MaterialFunctionInfos_MetaData, ARRAY_COUNT(NewProp_MaterialFunctionInfos_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaterialFunctionInfos_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "MaterialFunctionInfos", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FMaterialFunctionInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterGroupData_MetaData[] = {
				{ "Category", "Group Sorting" },
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
				{ "ToolTip", "Controls where this parameter group is displayed in a material instance parameter list.  The lower the number the higher up in the parameter list." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ParameterGroupData = { UE4CodeGen_Private::EPropertyClass::Array, "ParameterGroupData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000041, 1, nullptr, STRUCT_OFFSET(UMaterial, ParameterGroupData), METADATA_PARAMS(NewProp_ParameterGroupData_MetaData, ARRAY_COUNT(NewProp_ParameterGroupData_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParameterGroupData_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ParameterGroupData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000800000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FParameterGroupData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditorComments_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
				{ "ToolTip", "Array of comments associated with this material; viewed in the material editor." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EditorComments = { UE4CodeGen_Private::EPropertyClass::Array, "EditorComments", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(UMaterial, EditorComments), METADATA_PARAMS(NewProp_EditorComments_MetaData, ARRAY_COUNT(NewProp_EditorComments_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EditorComments_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "EditorComments", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000800000000, 1, nullptr, 0, Z_Construct_UClass_UMaterialExpressionComment_NoRegister, METADATA_PARAMS(nullptr, 0) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Expressions_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
				{ "ToolTip", "Array of material expressions, excluding Comments.  Used by the material editor." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Expressions = { UE4CodeGen_Private::EPropertyClass::Array, "Expressions", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterial, Expressions), METADATA_PARAMS(NewProp_Expressions_MetaData, ARRAY_COUNT(NewProp_Expressions_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Expressions_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Expressions", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UMaterialExpression_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditorYaw_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_EditorYaw = { UE4CodeGen_Private::EPropertyClass::Int, "EditorYaw", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterial, EditorYaw), METADATA_PARAMS(NewProp_EditorYaw_MetaData, ARRAY_COUNT(NewProp_EditorYaw_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditorPitch_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_EditorPitch = { UE4CodeGen_Private::EPropertyClass::Int, "EditorPitch", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterial, EditorPitch), METADATA_PARAMS(NewProp_EditorPitch_MetaData, ARRAY_COUNT(NewProp_EditorPitch_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditorY_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_EditorY = { UE4CodeGen_Private::EPropertyClass::Int, "EditorY", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterial, EditorY), METADATA_PARAMS(NewProp_EditorY_MetaData, ARRAY_COUNT(NewProp_EditorY_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditorX_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_EditorX = { UE4CodeGen_Private::EPropertyClass::Int, "EditorX", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterial, EditorX), METADATA_PARAMS(NewProp_EditorX_MetaData, ARRAY_COUNT(NewProp_EditorX_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOutputVelocityOnBasePass_MetaData[] = {
				{ "Category", "Material" },
				{ "DisplayName", "Support accurate velocities from Vertex Deformation" },
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
				{ "ToolTip", "Skips outputting velocity during the base pass." },
			};
#endif
			auto NewProp_bOutputVelocityOnBasePass_SetBit = [](void* Obj){ ((UMaterial*)Obj)->bOutputVelocityOnBasePass = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOutputVelocityOnBasePass = { UE4CodeGen_Private::EPropertyClass::Bool, "bOutputVelocityOnBasePass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMaterial), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bOutputVelocityOnBasePass_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bOutputVelocityOnBasePass_MetaData, ARRAY_COUNT(NewProp_bOutputVelocityOnBasePass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Wireframe_MetaData[] = {
				{ "Category", "Material" },
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
				{ "ToolTip", "Enables a wireframe view of the mesh the material is applied to." },
			};
#endif
			auto NewProp_Wireframe_SetBit = [](void* Obj){ ((UMaterial*)Obj)->Wireframe = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Wireframe = { UE4CodeGen_Private::EPropertyClass::Bool, "Wireframe", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMaterial), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_Wireframe_SetBit)>::SetBit, METADATA_PARAMS(NewProp_Wireframe_MetaData, ARRAY_COUNT(NewProp_Wireframe_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDisplacement_MetaData[] = {
				{ "Category", "Tessellation" },
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDisplacement = { UE4CodeGen_Private::EPropertyClass::Float, "MaxDisplacement", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterial, MaxDisplacement), METADATA_PARAMS(NewProp_MaxDisplacement_MetaData, ARRAY_COUNT(NewProp_MaxDisplacement_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableAdaptiveTessellation_MetaData[] = {
				{ "Category", "Tessellation" },
				{ "DisplayName", "Adaptive Tessellation" },
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
				{ "ToolTip", "Enables adaptive tessellation, which tries to maintain a uniform number of pixels per triangle." },
			};
#endif
			auto NewProp_bEnableAdaptiveTessellation_SetBit = [](void* Obj){ ((UMaterial*)Obj)->bEnableAdaptiveTessellation = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableAdaptiveTessellation = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableAdaptiveTessellation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMaterial), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnableAdaptiveTessellation_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnableAdaptiveTessellation_MetaData, ARRAY_COUNT(NewProp_bEnableAdaptiveTessellation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableCrackFreeDisplacement_MetaData[] = {
				{ "Category", "Tessellation" },
				{ "DisplayName", "Crack Free Displacement" },
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
				{ "ToolTip", "Prevents cracks in the surface of the mesh when using tessellation." },
			};
#endif
			auto NewProp_bEnableCrackFreeDisplacement_SetBit = [](void* Obj){ ((UMaterial*)Obj)->bEnableCrackFreeDisplacement = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableCrackFreeDisplacement = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableCrackFreeDisplacement", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMaterial), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnableCrackFreeDisplacement_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnableCrackFreeDisplacement_MetaData, ARRAY_COUNT(NewProp_bEnableCrackFreeDisplacement_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_D3D11TessellationMode_MetaData[] = {
				{ "Category", "Tessellation" },
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
				{ "ToolTip", "The type of tessellation to apply to this object.  Note D3D11 required for anything except MTM_NoTessellation." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_D3D11TessellationMode = { UE4CodeGen_Private::EPropertyClass::Byte, "D3D11TessellationMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UMaterial, D3D11TessellationMode), Z_Construct_UEnum_Engine_EMaterialTessellationMode, METADATA_PARAMS(NewProp_D3D11TessellationMode_MetaData, ARRAY_COUNT(NewProp_D3D11TessellationMode_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNormalCurvatureToRoughness_MetaData[] = {
				{ "Category", "Material" },
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
				{ "ToolTip", "Reduce roughness based on screen space normal changes." },
			};
#endif
			auto NewProp_bNormalCurvatureToRoughness_SetBit = [](void* Obj){ ((UMaterial*)Obj)->bNormalCurvatureToRoughness = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNormalCurvatureToRoughness = { UE4CodeGen_Private::EPropertyClass::Bool, "bNormalCurvatureToRoughness", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMaterial), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bNormalCurvatureToRoughness_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bNormalCurvatureToRoughness_MetaData, ARRAY_COUNT(NewProp_bNormalCurvatureToRoughness_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsePlanarForwardReflections_MetaData[] = {
				{ "Category", "ForwardShading" },
				{ "DisplayName", "Planar Reflections" },
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
				{ "ToolTip", "Enables planar reflection when using the forward renderer or mobile. Enabling this setting reduces the number of samplers available to the material as one more sampler will be used for the planar reflection." },
			};
#endif
			auto NewProp_bUsePlanarForwardReflections_SetBit = [](void* Obj){ ((UMaterial*)Obj)->bUsePlanarForwardReflections = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsePlanarForwardReflections = { UE4CodeGen_Private::EPropertyClass::Bool, "bUsePlanarForwardReflections", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMaterial), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUsePlanarForwardReflections_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUsePlanarForwardReflections_MetaData, ARRAY_COUNT(NewProp_bUsePlanarForwardReflections_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseHQForwardReflections_MetaData[] = {
				{ "Category", "ForwardShading" },
				{ "DisplayName", "High Quality Reflections" },
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
				{ "ToolTip", "* Forward renderer: enables multiple parallax-corrected reflection captures that blend together.\n* Mobile renderer: blend between nearest 3 reflection captures, but reduces the number of samplers available to the material as two more samplers will be used for reflection cubemaps." },
			};
#endif
			auto NewProp_bUseHQForwardReflections_SetBit = [](void* Obj){ ((UMaterial*)Obj)->bUseHQForwardReflections = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseHQForwardReflections = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseHQForwardReflections", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMaterial), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseHQForwardReflections_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseHQForwardReflections_MetaData, ARRAY_COUNT(NewProp_bUseHQForwardReflections_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseLightmapDirectionality_MetaData[] = {
				{ "Category", "Mobile" },
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
				{ "ToolTip", "Use lightmap directionality and per pixel normals. If disabled, lighting from lightmaps will be flat but cheaper." },
			};
#endif
			auto NewProp_bUseLightmapDirectionality_SetBit = [](void* Obj){ ((UMaterial*)Obj)->bUseLightmapDirectionality = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseLightmapDirectionality = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseLightmapDirectionality", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMaterial), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseLightmapDirectionality_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseLightmapDirectionality_MetaData, ARRAY_COUNT(NewProp_bUseLightmapDirectionality_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseFullPrecision_MetaData[] = {
				{ "Category", "Mobile" },
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
				{ "ToolTip", "Forces this material to use full (highp) precision in the pixel shader.\nThis is slower than the default (mediump) but can be used to work around precision-related rendering errors.\nThis setting has no effect on older mobile devices that do not support high precision." },
			};
#endif
			auto NewProp_bUseFullPrecision_SetBit = [](void* Obj){ ((UMaterial*)Obj)->bUseFullPrecision = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseFullPrecision = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseFullPrecision", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMaterial), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseFullPrecision_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseFullPrecision_MetaData, ARRAY_COUNT(NewProp_bUseFullPrecision_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFullyRough_MetaData[] = {
				{ "Category", "Material" },
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
				{ "ToolTip", "Forces the material to be completely rough. Saves a number of instructions and one sampler." },
			};
#endif
			auto NewProp_bFullyRough_SetBit = [](void* Obj){ ((UMaterial*)Obj)->bFullyRough = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFullyRough = { UE4CodeGen_Private::EPropertyClass::Bool, "bFullyRough", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMaterial), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bFullyRough_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bFullyRough_MetaData, ARRAY_COUNT(NewProp_bFullyRough_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutomaticallySetUsageInEditor_MetaData[] = {
				{ "Category", "Usage" },
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
				{ "ToolTip", "Whether to automatically set usage flags based on what the material is applied to in the editor.\nIt can be useful to disable this on a base material with many instances, where adding another usage flag accidentally (eg bUsedWithSkeletalMeshes) can add a lot of shader permutations." },
			};
#endif
			auto NewProp_bAutomaticallySetUsageInEditor_SetBit = [](void* Obj){ ((UMaterial*)Obj)->bAutomaticallySetUsageInEditor = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutomaticallySetUsageInEditor = { UE4CodeGen_Private::EPropertyClass::Bool, "bAutomaticallySetUsageInEditor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMaterial), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAutomaticallySetUsageInEditor_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAutomaticallySetUsageInEditor_MetaData, ARRAY_COUNT(NewProp_bAutomaticallySetUsageInEditor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsedWithUI_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
				{ "ToolTip", "Indicates that the material and its instances can be use with Slate UI and UMG\nThis will result in the shaders required to support UI materials being compiled which will increase shader compile time and memory usage." },
			};
#endif
			auto NewProp_bUsedWithUI_SetBit = [](void* Obj){ ((UMaterial*)Obj)->bUsedWithUI_DEPRECATED = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsedWithUI = { UE4CodeGen_Private::EPropertyClass::Bool, "bUsedWithUI", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMaterial), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUsedWithUI_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUsedWithUI_MetaData, ARRAY_COUNT(NewProp_bUsedWithUI_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsedWithClothing_MetaData[] = {
				{ "Category", "Usage" },
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
				{ "ToolTip", "Indicates that the material and its instances can be use with clothing\nThis will result in the shaders required to support clothing being compiled which will increase shader compile time and memory usage." },
			};
#endif
			auto NewProp_bUsedWithClothing_SetBit = [](void* Obj){ ((UMaterial*)Obj)->bUsedWithClothing = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsedWithClothing = { UE4CodeGen_Private::EPropertyClass::Bool, "bUsedWithClothing", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMaterial), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUsedWithClothing_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUsedWithClothing_MetaData, ARRAY_COUNT(NewProp_bUsedWithClothing_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsesDistortion_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
				{ "ToolTip", "Indicates that the material and its instances can be use with distortion\nThis will result in the shaders required to support distortion being compiled which will increase shader compile time and memory usage." },
			};
#endif
			auto NewProp_bUsesDistortion_SetBit = [](void* Obj){ ((UMaterial*)Obj)->bUsesDistortion = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsesDistortion = { UE4CodeGen_Private::EPropertyClass::Bool, "bUsesDistortion", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMaterial), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUsesDistortion_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUsesDistortion_MetaData, ARRAY_COUNT(NewProp_bUsesDistortion_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsedWithInstancedStaticMeshes_MetaData[] = {
				{ "Category", "Usage" },
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
				{ "ToolTip", "Indicates that the material and its instances can be use with instanced static meshes\nThis will result in the shaders required to support instanced static meshes being compiled which will increase shader compile time and memory usage." },
			};
#endif
			auto NewProp_bUsedWithInstancedStaticMeshes_SetBit = [](void* Obj){ ((UMaterial*)Obj)->bUsedWithInstancedStaticMeshes = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsedWithInstancedStaticMeshes = { UE4CodeGen_Private::EPropertyClass::Bool, "bUsedWithInstancedStaticMeshes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMaterial), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUsedWithInstancedStaticMeshes_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUsedWithInstancedStaticMeshes_MetaData, ARRAY_COUNT(NewProp_bUsedWithInstancedStaticMeshes_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsedWithSplineMeshes_MetaData[] = {
				{ "Category", "Usage" },
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
				{ "ToolTip", "Indicates that the material and its instances can be use with spline meshes\nThis will result in the shaders required to support spline meshes being compiled which will increase shader compile time and memory usage." },
			};
#endif
			auto NewProp_bUsedWithSplineMeshes_SetBit = [](void* Obj){ ((UMaterial*)Obj)->bUsedWithSplineMeshes = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsedWithSplineMeshes = { UE4CodeGen_Private::EPropertyClass::Bool, "bUsedWithSplineMeshes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMaterial), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUsedWithSplineMeshes_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUsedWithSplineMeshes_MetaData, ARRAY_COUNT(NewProp_bUsedWithSplineMeshes_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsedWithMorphTargets_MetaData[] = {
				{ "Category", "Usage" },
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
				{ "ToolTip", "Indicates that the material and its instances can be use with morph targets\nThis will result in the shaders required to support morph targets being compiled which will increase shader compile time and memory usage." },
			};
#endif
			auto NewProp_bUsedWithMorphTargets_SetBit = [](void* Obj){ ((UMaterial*)Obj)->bUsedWithMorphTargets = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsedWithMorphTargets = { UE4CodeGen_Private::EPropertyClass::Bool, "bUsedWithMorphTargets", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMaterial), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUsedWithMorphTargets_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUsedWithMorphTargets_MetaData, ARRAY_COUNT(NewProp_bUsedWithMorphTargets_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsedWithStaticLighting_MetaData[] = {
				{ "Category", "Usage" },
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
				{ "ToolTip", "Indicates that the material and its instances can be use with static lighting\nThis will result in the shaders required to support static lighting being compiled which will increase shader compile time and memory usage." },
			};
#endif
			auto NewProp_bUsedWithStaticLighting_SetBit = [](void* Obj){ ((UMaterial*)Obj)->bUsedWithStaticLighting = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsedWithStaticLighting = { UE4CodeGen_Private::EPropertyClass::Bool, "bUsedWithStaticLighting", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMaterial), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUsedWithStaticLighting_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUsedWithStaticLighting_MetaData, ARRAY_COUNT(NewProp_bUsedWithStaticLighting_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsedWithNiagaraMeshParticles_MetaData[] = {
				{ "Category", "Usage" },
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
			};
#endif
			auto NewProp_bUsedWithNiagaraMeshParticles_SetBit = [](void* Obj){ ((UMaterial*)Obj)->bUsedWithNiagaraMeshParticles = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsedWithNiagaraMeshParticles = { UE4CodeGen_Private::EPropertyClass::Bool, "bUsedWithNiagaraMeshParticles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMaterial), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUsedWithNiagaraMeshParticles_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUsedWithNiagaraMeshParticles_MetaData, ARRAY_COUNT(NewProp_bUsedWithNiagaraMeshParticles_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsedWithNiagaraRibbons_MetaData[] = {
				{ "Category", "Usage" },
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
			};
#endif
			auto NewProp_bUsedWithNiagaraRibbons_SetBit = [](void* Obj){ ((UMaterial*)Obj)->bUsedWithNiagaraRibbons = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsedWithNiagaraRibbons = { UE4CodeGen_Private::EPropertyClass::Bool, "bUsedWithNiagaraRibbons", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMaterial), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUsedWithNiagaraRibbons_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUsedWithNiagaraRibbons_MetaData, ARRAY_COUNT(NewProp_bUsedWithNiagaraRibbons_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsedWithNiagaraSprites_MetaData[] = {
				{ "Category", "Usage" },
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
				{ "ToolTip", "Indicates that the material and its instances can be use with Niagara sprites (meshes and ribbons, respectively)\nThis will result in the shaders required to support Niagara sprites being compiled which will increase shader compile time and memory usage." },
			};
#endif
			auto NewProp_bUsedWithNiagaraSprites_SetBit = [](void* Obj){ ((UMaterial*)Obj)->bUsedWithNiagaraSprites = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsedWithNiagaraSprites = { UE4CodeGen_Private::EPropertyClass::Bool, "bUsedWithNiagaraSprites", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMaterial), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUsedWithNiagaraSprites_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUsedWithNiagaraSprites_MetaData, ARRAY_COUNT(NewProp_bUsedWithNiagaraSprites_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsedWithMeshParticles_MetaData[] = {
				{ "Category", "Usage" },
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
				{ "ToolTip", "Indicates that the material and its instances can be use with mesh particles\nThis will result in the shaders required to support mesh particles being compiled which will increase shader compile time and memory usage." },
			};
#endif
			auto NewProp_bUsedWithMeshParticles_SetBit = [](void* Obj){ ((UMaterial*)Obj)->bUsedWithMeshParticles = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsedWithMeshParticles = { UE4CodeGen_Private::EPropertyClass::Bool, "bUsedWithMeshParticles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMaterial), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUsedWithMeshParticles_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUsedWithMeshParticles_MetaData, ARRAY_COUNT(NewProp_bUsedWithMeshParticles_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsedWithBeamTrails_MetaData[] = {
				{ "Category", "Usage" },
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
				{ "ToolTip", "Indicates that the material and its instances can be use with beam trails\nThis will result in the shaders required to support beam trails being compiled which will increase shader compile time and memory usage." },
			};
#endif
			auto NewProp_bUsedWithBeamTrails_SetBit = [](void* Obj){ ((UMaterial*)Obj)->bUsedWithBeamTrails = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsedWithBeamTrails = { UE4CodeGen_Private::EPropertyClass::Bool, "bUsedWithBeamTrails", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMaterial), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUsedWithBeamTrails_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUsedWithBeamTrails_MetaData, ARRAY_COUNT(NewProp_bUsedWithBeamTrails_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsedWithParticleSprites_MetaData[] = {
				{ "Category", "Usage" },
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
				{ "ToolTip", "Indicates that the material and its instances can be use with particle sprites\nThis will result in the shaders required to support particle sprites being compiled which will increase shader compile time and memory usage." },
			};
#endif
			auto NewProp_bUsedWithParticleSprites_SetBit = [](void* Obj){ ((UMaterial*)Obj)->bUsedWithParticleSprites = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsedWithParticleSprites = { UE4CodeGen_Private::EPropertyClass::Bool, "bUsedWithParticleSprites", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMaterial), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUsedWithParticleSprites_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUsedWithParticleSprites_MetaData, ARRAY_COUNT(NewProp_bUsedWithParticleSprites_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsedWithEditorCompositing_MetaData[] = {
				{ "Category", "Usage" },
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
				{ "ToolTip", "Indicates that the material and its instances can be use with editor compositing\nThis will result in the shaders required to support editor compositing being compiled which will increase shader compile time and memory usage." },
			};
#endif
			auto NewProp_bUsedWithEditorCompositing_SetBit = [](void* Obj){ ((UMaterial*)Obj)->bUsedWithEditorCompositing = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsedWithEditorCompositing = { UE4CodeGen_Private::EPropertyClass::Bool, "bUsedWithEditorCompositing", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMaterial), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUsedWithEditorCompositing_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUsedWithEditorCompositing_MetaData, ARRAY_COUNT(NewProp_bUsedWithEditorCompositing_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsedWithSkeletalMesh_MetaData[] = {
				{ "Category", "Usage" },
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
				{ "ToolTip", "Indicates that the material and its instances can be use with skeletal meshes.\nThis will result in the shaders required to support skeletal meshes being compiled which will increase shader compile time and memory usage." },
			};
#endif
			auto NewProp_bUsedWithSkeletalMesh_SetBit = [](void* Obj){ ((UMaterial*)Obj)->bUsedWithSkeletalMesh = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsedWithSkeletalMesh = { UE4CodeGen_Private::EPropertyClass::Bool, "bUsedWithSkeletalMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMaterial), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUsedWithSkeletalMesh_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUsedWithSkeletalMesh_MetaData, ARRAY_COUNT(NewProp_bUsedWithSkeletalMesh_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsedAsSpecialEngineMaterial_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
				{ "ToolTip", "This is a special usage flag that allows a material to be assignable to any primitive type.\nThis is useful for materials used by code to implement certain viewmodes, for example the default material or lighting only material.\nThe cost is that nearly 20x more shaders will be compiled for the material than the average material, which will greatly increase shader compile time and memory usage.\nThis flag should only be enabled when absolutely necessary, and is purposefully not exposed to the UI to prevent abuse." },
			};
#endif
			auto NewProp_bUsedAsSpecialEngineMaterial_SetBit = [](void* Obj){ ((UMaterial*)Obj)->bUsedAsSpecialEngineMaterial = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsedAsSpecialEngineMaterial = { UE4CodeGen_Private::EPropertyClass::Bool, "bUsedAsSpecialEngineMaterial", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000200000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMaterial), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUsedAsSpecialEngineMaterial_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUsedAsSpecialEngineMaterial_MetaData, ARRAY_COUNT(NewProp_bUsedAsSpecialEngineMaterial_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBlockGI_MetaData[] = {
				{ "Category", "Material" },
				{ "DisplayName", "Block Global Illumination" },
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
				{ "ToolTip", "If enabled, the material's opacity defines how much GI is blocked when using the LightPropagationVolume feature" },
			};
#endif
			auto NewProp_bBlockGI_SetBit = [](void* Obj){ ((UMaterial*)Obj)->bBlockGI = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBlockGI = { UE4CodeGen_Private::EPropertyClass::Bool, "bBlockGI", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMaterial), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bBlockGI_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bBlockGI_MetaData, ARRAY_COUNT(NewProp_bBlockGI_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseEmissiveForDynamicAreaLighting_MetaData[] = {
				{ "Category", "Material" },
				{ "DisplayName", "Emissive (Dynamic Area Light)" },
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
				{ "ToolTip", "If enabled, the material's emissive colour is injected into the LightPropagationVolume" },
			};
#endif
			auto NewProp_bUseEmissiveForDynamicAreaLighting_SetBit = [](void* Obj){ ((UMaterial*)Obj)->bUseEmissiveForDynamicAreaLighting = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseEmissiveForDynamicAreaLighting = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseEmissiveForDynamicAreaLighting", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMaterial), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseEmissiveForDynamicAreaLighting_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseEmissiveForDynamicAreaLighting_MetaData, ARRAY_COUNT(NewProp_bUseEmissiveForDynamicAreaLighting_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTangentSpaceNormal_MetaData[] = {
				{ "Category", "Material" },
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
				{ "ToolTip", "Whether the material takes a tangent space normal or a world space normal as input.\n(TangentSpace requires extra instructions but is often more convenient)." },
			};
#endif
			auto NewProp_bTangentSpaceNormal_SetBit = [](void* Obj){ ((UMaterial*)Obj)->bTangentSpaceNormal = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTangentSpaceNormal = { UE4CodeGen_Private::EPropertyClass::Bool, "bTangentSpaceNormal", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMaterial), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bTangentSpaceNormal_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bTangentSpaceNormal_MetaData, ARRAY_COUNT(NewProp_bTangentSpaceNormal_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGenerateSphericalParticleNormals_MetaData[] = {
				{ "Category", "Material" },
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
				{ "ToolTip", "Whether to generate spherical normals for particles that use this material." },
			};
#endif
			auto NewProp_bGenerateSphericalParticleNormals_SetBit = [](void* Obj){ ((UMaterial*)Obj)->bGenerateSphericalParticleNormals = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGenerateSphericalParticleNormals = { UE4CodeGen_Private::EPropertyClass::Bool, "bGenerateSphericalParticleNormals", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMaterial), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bGenerateSphericalParticleNormals_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bGenerateSphericalParticleNormals_MetaData, ARRAY_COUNT(NewProp_bGenerateSphericalParticleNormals_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableDepthTest_MetaData[] = {
				{ "Category", "Translucency" },
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
				{ "ToolTip", "Whether to draw on top of opaque pixels even if behind them. This only has meaning for translucency." },
			};
#endif
			auto NewProp_bDisableDepthTest_SetBit = [](void* Obj){ ((UMaterial*)Obj)->bDisableDepthTest = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableDepthTest = { UE4CodeGen_Private::EPropertyClass::Bool, "bDisableDepthTest", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMaterial), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDisableDepthTest_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDisableDepthTest_MetaData, ARRAY_COUNT(NewProp_bDisableDepthTest_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TranslucentShadowStartOffset_MetaData[] = {
				{ "Category", "TranslucencySelfShadowing" },
				{ "DisplayName", "Start Offset" },
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
				{ "ToolTip", "Local space distance to bias the translucent shadow.  Positive values move the shadow away from the light." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TranslucentShadowStartOffset = { UE4CodeGen_Private::EPropertyClass::Float, "TranslucentShadowStartOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterial, TranslucentShadowStartOffset), METADATA_PARAMS(NewProp_TranslucentShadowStartOffset_MetaData, ARRAY_COUNT(NewProp_TranslucentShadowStartOffset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TranslucentMultipleScatteringExtinction_MetaData[] = {
				{ "Category", "TranslucencySelfShadowing" },
				{ "DisplayName", "Multiple Scattering Extinction" },
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
				{ "ToolTip", "Colored extinction factor used to approximate multiple scattering in dense volumes.\nThis is only used when the object is casting a volumetric translucent shadow." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TranslucentMultipleScatteringExtinction = { UE4CodeGen_Private::EPropertyClass::Struct, "TranslucentMultipleScatteringExtinction", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterial, TranslucentMultipleScatteringExtinction), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(NewProp_TranslucentMultipleScatteringExtinction_MetaData, ARRAY_COUNT(NewProp_TranslucentMultipleScatteringExtinction_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TranslucentBackscatteringExponent_MetaData[] = {
				{ "Category", "TranslucencySelfShadowing" },
				{ "DisplayName", "Backscattering Exponent" },
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
				{ "ToolTip", "Controls how diffuse the material's backscattering is when using the MSM_Subsurface shading model.\nLarger exponents give a less diffuse look (smaller, brighter backscattering highlight).\nThis is only used when the object is casting a volumetric translucent shadow from a directional light." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TranslucentBackscatteringExponent = { UE4CodeGen_Private::EPropertyClass::Float, "TranslucentBackscatteringExponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterial, TranslucentBackscatteringExponent), METADATA_PARAMS(NewProp_TranslucentBackscatteringExponent_MetaData, ARRAY_COUNT(NewProp_TranslucentBackscatteringExponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TranslucentSelfShadowSecondOpacity_MetaData[] = {
				{ "Category", "TranslucencySelfShadowing" },
				{ "DisplayName", "Second Opacity" },
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
				{ "ToolTip", "Controls the strength of the second self shadow gradient." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TranslucentSelfShadowSecondOpacity = { UE4CodeGen_Private::EPropertyClass::Float, "TranslucentSelfShadowSecondOpacity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterial, TranslucentSelfShadowSecondOpacity), METADATA_PARAMS(NewProp_TranslucentSelfShadowSecondOpacity_MetaData, ARRAY_COUNT(NewProp_TranslucentSelfShadowSecondOpacity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TranslucentSelfShadowSecondDensityScale_MetaData[] = {
				{ "Category", "TranslucencySelfShadowing" },
				{ "DisplayName", "Second Density Scale" },
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
				{ "ToolTip", "Used to make a second self shadow gradient, to add interesting shading in the shadow of the first." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TranslucentSelfShadowSecondDensityScale = { UE4CodeGen_Private::EPropertyClass::Float, "TranslucentSelfShadowSecondDensityScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterial, TranslucentSelfShadowSecondDensityScale), METADATA_PARAMS(NewProp_TranslucentSelfShadowSecondDensityScale_MetaData, ARRAY_COUNT(NewProp_TranslucentSelfShadowSecondDensityScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TranslucentSelfShadowDensityScale_MetaData[] = {
				{ "Category", "TranslucencySelfShadowing" },
				{ "DisplayName", "Self Shadow Density Scale" },
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
				{ "ToolTip", "Scale used to make translucent self-shadowing more or less opaque than the material's shadow on other objects.\nThis is only used when the object is casting a volumetric translucent shadow." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TranslucentSelfShadowDensityScale = { UE4CodeGen_Private::EPropertyClass::Float, "TranslucentSelfShadowDensityScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterial, TranslucentSelfShadowDensityScale), METADATA_PARAMS(NewProp_TranslucentSelfShadowDensityScale_MetaData, ARRAY_COUNT(NewProp_TranslucentSelfShadowDensityScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TranslucentShadowDensityScale_MetaData[] = {
				{ "Category", "TranslucencySelfShadowing" },
				{ "DisplayName", "Shadow Density Scale" },
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
				{ "ToolTip", "Scale used to make translucent shadows more or less opaque than the material's actual opacity." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TranslucentShadowDensityScale = { UE4CodeGen_Private::EPropertyClass::Float, "TranslucentShadowDensityScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterial, TranslucentShadowDensityScale), METADATA_PARAMS(NewProp_TranslucentShadowDensityScale_MetaData, ARRAY_COUNT(NewProp_TranslucentShadowDensityScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllowTranslucentCustomDepthWrites_MetaData[] = {
				{ "Category", "Translucency" },
				{ "DisplayName", "Allow Custom Depth Writes" },
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
				{ "ToolTip", "Allows a translucenct material to be used with custom depth writing by compiling additional shaders." },
			};
#endif
			auto NewProp_AllowTranslucentCustomDepthWrites_SetBit = [](void* Obj){ ((UMaterial*)Obj)->AllowTranslucentCustomDepthWrites = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AllowTranslucentCustomDepthWrites = { UE4CodeGen_Private::EPropertyClass::Bool, "AllowTranslucentCustomDepthWrites", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMaterial), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_AllowTranslucentCustomDepthWrites_SetBit)>::SetBit, METADATA_PARAMS(NewProp_AllowTranslucentCustomDepthWrites_MetaData, ARRAY_COUNT(NewProp_AllowTranslucentCustomDepthWrites_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TranslucencyDirectionalLightingIntensity_MetaData[] = {
				{ "Category", "Translucency" },
				{ "DisplayName", "Directional Lighting Intensity" },
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
				{ "ToolTip", "Useful for artificially increasing the influence of the normal on the lighting result for translucency.\nA value larger than 1 increases the influence of the normal, a value smaller than 1 makes the lighting more ambient." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TranslucencyDirectionalLightingIntensity = { UE4CodeGen_Private::EPropertyClass::Float, "TranslucencyDirectionalLightingIntensity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterial, TranslucencyDirectionalLightingIntensity), METADATA_PARAMS(NewProp_TranslucencyDirectionalLightingIntensity_MetaData, ARRAY_COUNT(NewProp_TranslucencyDirectionalLightingIntensity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TranslucencyLightingMode_MetaData[] = {
				{ "Category", "Translucency" },
				{ "DisplayName", "Lighting Mode" },
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
				{ "ToolTip", "Sets the lighting mode that will be used on this material if it is translucent." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_TranslucencyLightingMode = { UE4CodeGen_Private::EPropertyClass::Byte, "TranslucencyLightingMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterial, TranslucencyLightingMode), Z_Construct_UEnum_Engine_ETranslucencyLightingMode, METADATA_PARAMS(NewProp_TranslucencyLightingMode_MetaData, ARRAY_COUNT(NewProp_TranslucencyLightingMode_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumCustomizedUVs_MetaData[] = {
				{ "Category", "Material" },
				{ "ClampMin", "0" },
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
				{ "ToolTip", "Number of customized UV inputs to display.  Unconnected customized UV inputs will just pass through the vertex UVs." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumCustomizedUVs = { UE4CodeGen_Private::EPropertyClass::Int, "NumCustomizedUVs", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, STRUCT_OFFSET(UMaterial, NumCustomizedUVs), METADATA_PARAMS(NewProp_NumCustomizedUVs_MetaData, ARRAY_COUNT(NewProp_NumCustomizedUVs_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowNegativeEmissiveColor_MetaData[] = {
				{ "Category", "Material" },
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
				{ "ToolTip", "Whether the material should allow outputting negative emissive color values.  Only allowed on unlit materials." },
			};
#endif
			auto NewProp_bAllowNegativeEmissiveColor_SetBit = [](void* Obj){ ((UMaterial*)Obj)->bAllowNegativeEmissiveColor = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowNegativeEmissiveColor = { UE4CodeGen_Private::EPropertyClass::Bool, "bAllowNegativeEmissiveColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMaterial), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAllowNegativeEmissiveColor_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAllowNegativeEmissiveColor_MetaData, ARRAY_COUNT(NewProp_bAllowNegativeEmissiveColor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DitherOpacityMask_MetaData[] = {
				{ "Category", "Material" },
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
				{ "ToolTip", "Dither opacity mask. When combined with Temporal AA this can be used as a form of limited translucency which supports all lighting features." },
			};
#endif
			auto NewProp_DitherOpacityMask_SetBit = [](void* Obj){ ((UMaterial*)Obj)->DitherOpacityMask = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DitherOpacityMask = { UE4CodeGen_Private::EPropertyClass::Bool, "DitherOpacityMask", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMaterial), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_DitherOpacityMask_SetBit)>::SetBit, METADATA_PARAMS(NewProp_DitherOpacityMask_MetaData, ARRAY_COUNT(NewProp_DitherOpacityMask_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DitheredLODTransition_MetaData[] = {
				{ "Category", "Material" },
				{ "DisplayName", "Dithered LOD Transition" },
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
				{ "ToolTip", "Whether meshes rendered with the material should support dithered LOD transitions." },
			};
#endif
			auto NewProp_DitheredLODTransition_SetBit = [](void* Obj){ ((UMaterial*)Obj)->DitheredLODTransition = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DitheredLODTransition = { UE4CodeGen_Private::EPropertyClass::Bool, "DitheredLODTransition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMaterial), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_DitheredLODTransition_SetBit)>::SetBit, METADATA_PARAMS(NewProp_DitheredLODTransition_MetaData, ARRAY_COUNT(NewProp_DitheredLODTransition_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TwoSided_MetaData[] = {
				{ "Category", "Material" },
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
				{ "ToolTip", "Indicates that the material should be rendered without backface culling and the normal should be flipped for backfaces." },
			};
#endif
			auto NewProp_TwoSided_SetBit = [](void* Obj){ ((UMaterial*)Obj)->TwoSided = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_TwoSided = { UE4CodeGen_Private::EPropertyClass::Bool, "TwoSided", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMaterial), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_TwoSided_SetBit)>::SetBit, METADATA_PARAMS(NewProp_TwoSided_MetaData, ARRAY_COUNT(NewProp_TwoSided_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bScreenSpaceReflections_MetaData[] = {
				{ "Category", "Translucency" },
				{ "DisplayName", "Screen Space Reflections" },
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
				{ "ToolTip", "SSR on translucency" },
			};
#endif
			auto NewProp_bScreenSpaceReflections_SetBit = [](void* Obj){ ((UMaterial*)Obj)->bScreenSpaceReflections = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bScreenSpaceReflections = { UE4CodeGen_Private::EPropertyClass::Bool, "bScreenSpaceReflections", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMaterial), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bScreenSpaceReflections_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bScreenSpaceReflections_MetaData, ARRAY_COUNT(NewProp_bScreenSpaceReflections_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableResponsiveAA_MetaData[] = {
				{ "Category", "Translucency" },
				{ "DisplayName", "Responsive AA" },
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
				{ "ToolTip", "Indicates that the material should be rendered using responsive anti-aliasing. Improves sharpness of small moving particles such as sparks.\nOnly use for small moving features because it will cause aliasing of the background." },
			};
#endif
			auto NewProp_bEnableResponsiveAA_SetBit = [](void* Obj){ ((UMaterial*)Obj)->bEnableResponsiveAA = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableResponsiveAA = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableResponsiveAA", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMaterial), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnableResponsiveAA_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnableResponsiveAA_MetaData, ARRAY_COUNT(NewProp_bEnableResponsiveAA_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableMobileSeparateTranslucency_MetaData[] = {
				{ "Category", "Translucency" },
				{ "DisplayName", "Mobile Separate Translucency" },
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
				{ "ToolTip", "Indicates that the translucent material should not be affected by bloom or DOF. (Note: Depth testing is not available)" },
			};
#endif
			auto NewProp_bEnableMobileSeparateTranslucency_SetBit = [](void* Obj){ ((UMaterial*)Obj)->bEnableMobileSeparateTranslucency = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableMobileSeparateTranslucency = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableMobileSeparateTranslucency", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMaterial), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnableMobileSeparateTranslucency_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnableMobileSeparateTranslucency_MetaData, ARRAY_COUNT(NewProp_bEnableMobileSeparateTranslucency_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableSeparateTranslucency_MetaData[] = {
				{ "Category", "Translucency" },
				{ "DisplayName", "Render After DOF" },
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
				{ "ToolTip", "Indicates that the material should be rendered in the SeparateTranslucency Pass (not affected by DOF, requires bAllowSeparateTranslucency to be set in .ini)." },
			};
#endif
			auto NewProp_bEnableSeparateTranslucency_SetBit = [](void* Obj){ ((UMaterial*)Obj)->bEnableSeparateTranslucency = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableSeparateTranslucency = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableSeparateTranslucency", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMaterial), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnableSeparateTranslucency_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnableSeparateTranslucency_MetaData, ARRAY_COUNT(NewProp_bEnableSeparateTranslucency_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PixelDepthOffset_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PixelDepthOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "PixelDepthOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterial, PixelDepthOffset), Z_Construct_UScriptStruct_FScalarMaterialInput, METADATA_PARAMS(NewProp_PixelDepthOffset_MetaData, ARRAY_COUNT(NewProp_PixelDepthOffset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialAttributes_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaterialAttributes = { UE4CodeGen_Private::EPropertyClass::Struct, "MaterialAttributes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterial, MaterialAttributes), Z_Construct_UScriptStruct_FMaterialAttributesInput, METADATA_PARAMS(NewProp_MaterialAttributes_MetaData, ARRAY_COUNT(NewProp_MaterialAttributes_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomizedUVs_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
				{ "ToolTip", "These inputs are evaluated in the vertex shader and allow artists to do arbitrary vertex shader operations and access them in the pixel shader.\nWhen unconnected or hidden they default to passing through the vertex UVs." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomizedUVs = { UE4CodeGen_Private::EPropertyClass::Struct, "CustomizedUVs", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, CPP_ARRAY_DIM(CustomizedUVs, UMaterial), nullptr, STRUCT_OFFSET(UMaterial, CustomizedUVs), Z_Construct_UScriptStruct_FVector2MaterialInput, METADATA_PARAMS(NewProp_CustomizedUVs_MetaData, ARRAY_COUNT(NewProp_CustomizedUVs_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Refraction_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
				{ "ToolTip", "output refraction index for translucent rendering\nAir:1.0 Water:1.333 Ice:1.3 Glass:~1.6 Diamond:2.42" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Refraction = { UE4CodeGen_Private::EPropertyClass::Struct, "Refraction", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterial, Refraction), Z_Construct_UScriptStruct_FScalarMaterialInput, METADATA_PARAMS(NewProp_Refraction_MetaData, ARRAY_COUNT(NewProp_Refraction_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmbientOcclusion_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
				{ "ToolTip", "output ambient occlusion to the GBuffer" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AmbientOcclusion = { UE4CodeGen_Private::EPropertyClass::Struct, "AmbientOcclusion", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterial, AmbientOcclusion), Z_Construct_UScriptStruct_FScalarMaterialInput, METADATA_PARAMS(NewProp_AmbientOcclusion_MetaData, ARRAY_COUNT(NewProp_AmbientOcclusion_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClearCoatRoughness_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClearCoatRoughness = { UE4CodeGen_Private::EPropertyClass::Struct, "ClearCoatRoughness", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterial, ClearCoatRoughness), Z_Construct_UScriptStruct_FScalarMaterialInput, METADATA_PARAMS(NewProp_ClearCoatRoughness_MetaData, ARRAY_COUNT(NewProp_ClearCoatRoughness_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClearCoat_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClearCoat = { UE4CodeGen_Private::EPropertyClass::Struct, "ClearCoat", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterial, ClearCoat), Z_Construct_UScriptStruct_FScalarMaterialInput, METADATA_PARAMS(NewProp_ClearCoat_MetaData, ARRAY_COUNT(NewProp_ClearCoat_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubsurfaceColor_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
				{ "ToolTip", "Inner material color, only used for ShadingModel=Subsurface" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SubsurfaceColor = { UE4CodeGen_Private::EPropertyClass::Struct, "SubsurfaceColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterial, SubsurfaceColor), Z_Construct_UScriptStruct_FColorMaterialInput, METADATA_PARAMS(NewProp_SubsurfaceColor_MetaData, ARRAY_COUNT(NewProp_SubsurfaceColor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TessellationMultiplier_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
				{ "ToolTip", "Multiplies the tessellation factors applied when a tessellation mode is set." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TessellationMultiplier = { UE4CodeGen_Private::EPropertyClass::Struct, "TessellationMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterial, TessellationMultiplier), Z_Construct_UScriptStruct_FScalarMaterialInput, METADATA_PARAMS(NewProp_TessellationMultiplier_MetaData, ARRAY_COUNT(NewProp_TessellationMultiplier_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldDisplacement_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
				{ "ToolTip", "Offset in world space applied to tessellated vertices." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldDisplacement = { UE4CodeGen_Private::EPropertyClass::Struct, "WorldDisplacement", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterial, WorldDisplacement), Z_Construct_UScriptStruct_FVectorMaterialInput, METADATA_PARAMS(NewProp_WorldDisplacement_MetaData, ARRAY_COUNT(NewProp_WorldDisplacement_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldPositionOffset_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
				{ "ToolTip", "Adds to world position in the vertex shader." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldPositionOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "WorldPositionOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterial, WorldPositionOffset), Z_Construct_UScriptStruct_FVectorMaterialInput, METADATA_PARAMS(NewProp_WorldPositionOffset_MetaData, ARRAY_COUNT(NewProp_WorldPositionOffset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCastDynamicShadowAsMasked_MetaData[] = {
				{ "Category", "Material" },
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
				{ "ToolTip", "If true, translucent materials will cast dynamic shadows according to their opacity.\nOpacityMaskClipValue is used as the threshold value." },
			};
#endif
			auto NewProp_bCastDynamicShadowAsMasked_SetBit = [](void* Obj){ ((UMaterial*)Obj)->bCastDynamicShadowAsMasked = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCastDynamicShadowAsMasked = { UE4CodeGen_Private::EPropertyClass::Bool, "bCastDynamicShadowAsMasked", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMaterial), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCastDynamicShadowAsMasked_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCastDynamicShadowAsMasked_MetaData, ARRAY_COUNT(NewProp_bCastDynamicShadowAsMasked_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpacityMaskClipValue_MetaData[] = {
				{ "Category", "Material" },
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
				{ "ToolTip", "If BlendMode is BLEND_Masked, the surface is not rendered where OpacityMask < OpacityMaskClipValue." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OpacityMaskClipValue = { UE4CodeGen_Private::EPropertyClass::Float, "OpacityMaskClipValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, STRUCT_OFFSET(UMaterial, OpacityMaskClipValue), METADATA_PARAMS(NewProp_OpacityMaskClipValue_MetaData, ARRAY_COUNT(NewProp_OpacityMaskClipValue_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShadingModel_MetaData[] = {
				{ "Category", "Material" },
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
				{ "ToolTip", "Determines how inputs are combined to create the material's final color." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ShadingModel = { UE4CodeGen_Private::EPropertyClass::Byte, "ShadingModel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040010000000001, 1, nullptr, STRUCT_OFFSET(UMaterial, ShadingModel), Z_Construct_UEnum_Engine_EMaterialShadingModel, METADATA_PARAMS(NewProp_ShadingModel_MetaData, ARRAY_COUNT(NewProp_ShadingModel_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialDecalResponse_MetaData[] = {
				{ "Category", "Material" },
				{ "DisplayName", "Decal Response (DBuffer)" },
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
				{ "ToolTip", "Defines how the material reacts on DBuffer decals (Affects look, performance and texture/sample usage).\nNon DBuffer Decals can be disabled on the primitive (e.g. static mesh)" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_MaterialDecalResponse = { UE4CodeGen_Private::EPropertyClass::Byte, "MaterialDecalResponse", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010050000000015, 1, nullptr, STRUCT_OFFSET(UMaterial, MaterialDecalResponse), Z_Construct_UEnum_Engine_EMaterialDecalResponse, METADATA_PARAMS(NewProp_MaterialDecalResponse_MetaData, ARRAY_COUNT(NewProp_MaterialDecalResponse_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecalBlendMode_MetaData[] = {
				{ "Category", "Material" },
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
				{ "ToolTip", "Defines how the GBuffer chanels are getting manipulated by a decal material pass. (only with MaterialDomain == MD_DeferredDecal)" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_DecalBlendMode = { UE4CodeGen_Private::EPropertyClass::Byte, "DecalBlendMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterial, DecalBlendMode), Z_Construct_UEnum_Engine_EDecalBlendMode, METADATA_PARAMS(NewProp_DecalBlendMode_MetaData, ARRAY_COUNT(NewProp_DecalBlendMode_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendMode_MetaData[] = {
				{ "Category", "Material" },
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
				{ "ToolTip", "Determines how the material's color is blended with background colors." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_BlendMode = { UE4CodeGen_Private::EPropertyClass::Byte, "BlendMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010010000000015, 1, nullptr, STRUCT_OFFSET(UMaterial, BlendMode), Z_Construct_UEnum_Engine_EBlendMode, METADATA_PARAMS(NewProp_BlendMode_MetaData, ARRAY_COUNT(NewProp_BlendMode_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialDomain_MetaData[] = {
				{ "Category", "Material" },
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
				{ "ToolTip", "The domain that the material's attributes will be evaluated in.\nCertain pieces of material functionality are only valid in certain domains, for example vertex normal is only valid on a surface." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_MaterialDomain = { UE4CodeGen_Private::EPropertyClass::Byte, "MaterialDomain", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010010000000015, 1, nullptr, STRUCT_OFFSET(UMaterial, MaterialDomain), Z_Construct_UEnum_Engine_EMaterialDomain, METADATA_PARAMS(NewProp_MaterialDomain_MetaData, ARRAY_COUNT(NewProp_MaterialDomain_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpacityMask_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OpacityMask = { UE4CodeGen_Private::EPropertyClass::Struct, "OpacityMask", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterial, OpacityMask), Z_Construct_UScriptStruct_FScalarMaterialInput, METADATA_PARAMS(NewProp_OpacityMask_MetaData, ARRAY_COUNT(NewProp_OpacityMask_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Opacity_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
				{ "ToolTip", "Transmission." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Opacity = { UE4CodeGen_Private::EPropertyClass::Struct, "Opacity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterial, Opacity), Z_Construct_UScriptStruct_FScalarMaterialInput, METADATA_PARAMS(NewProp_Opacity_MetaData, ARRAY_COUNT(NewProp_Opacity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmissiveColor_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
				{ "ToolTip", "Emission." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_EmissiveColor = { UE4CodeGen_Private::EPropertyClass::Struct, "EmissiveColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterial, EmissiveColor), Z_Construct_UScriptStruct_FColorMaterialInput, METADATA_PARAMS(NewProp_EmissiveColor_MetaData, ARRAY_COUNT(NewProp_EmissiveColor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Normal = { UE4CodeGen_Private::EPropertyClass::Struct, "Normal", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterial, Normal), Z_Construct_UScriptStruct_FVectorMaterialInput, METADATA_PARAMS(NewProp_Normal_MetaData, ARRAY_COUNT(NewProp_Normal_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Roughness_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Roughness = { UE4CodeGen_Private::EPropertyClass::Struct, "Roughness", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterial, Roughness), Z_Construct_UScriptStruct_FScalarMaterialInput, METADATA_PARAMS(NewProp_Roughness_MetaData, ARRAY_COUNT(NewProp_Roughness_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Specular_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Specular = { UE4CodeGen_Private::EPropertyClass::Struct, "Specular", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterial, Specular), Z_Construct_UScriptStruct_FScalarMaterialInput, METADATA_PARAMS(NewProp_Specular_MetaData, ARRAY_COUNT(NewProp_Specular_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Metallic_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Metallic = { UE4CodeGen_Private::EPropertyClass::Struct, "Metallic", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterial, Metallic), Z_Construct_UScriptStruct_FScalarMaterialInput, METADATA_PARAMS(NewProp_Metallic_MetaData, ARRAY_COUNT(NewProp_Metallic_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseColor_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BaseColor = { UE4CodeGen_Private::EPropertyClass::Struct, "BaseColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterial, BaseColor), Z_Construct_UScriptStruct_FColorMaterialInput, METADATA_PARAMS(NewProp_BaseColor_MetaData, ARRAY_COUNT(NewProp_BaseColor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpecularColor_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpecularColor = { UE4CodeGen_Private::EPropertyClass::Struct, "SpecularColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(UMaterial, SpecularColor_DEPRECATED), Z_Construct_UScriptStruct_FColorMaterialInput, METADATA_PARAMS(NewProp_SpecularColor_MetaData, ARRAY_COUNT(NewProp_SpecularColor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DiffuseColor_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
				{ "ToolTip", "Reflection." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_DiffuseColor = { UE4CodeGen_Private::EPropertyClass::Struct, "DiffuseColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(UMaterial, DiffuseColor_DEPRECATED), Z_Construct_UScriptStruct_FColorMaterialInput, METADATA_PARAMS(NewProp_DiffuseColor_MetaData, ARRAY_COUNT(NewProp_DiffuseColor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysMaterial_MetaData[] = {
				{ "Category", "PhysicalMaterial" },
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
				{ "ToolTip", "Physical material to use for this graphics material. Used for sounds, effects etc." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PhysMaterial = { UE4CodeGen_Private::EPropertyClass::Object, "PhysMaterial", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterial, PhysMaterial), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(NewProp_PhysMaterial_MetaData, ARRAY_COUNT(NewProp_PhysMaterial_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReferencedTextureGuids,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReferencedTextureGuids_Inner,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ExpressionTextureReferences,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ExpressionTextureReferences_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StateId,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RefractionDepthBias,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RefractionMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlendableOutputAlpha,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlendablePriority,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlendableLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UsageFlagWarnings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsMaterialEditorStatsMaterial,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAllowDevelopmentShaderCompile,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bComputeFogPerPixel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseTranslucencyVertexFog,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseMaterialAttributes,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsPreviewMaterial,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsMasked,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCanMaskedBeAssumedOpaque,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaterialParameterCollectionInfos,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaterialParameterCollectionInfos_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaterialFunctionInfos,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaterialFunctionInfos_Inner,
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParameterGroupData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParameterGroupData_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EditorComments,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EditorComments_Inner,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Expressions,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Expressions_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EditorYaw,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EditorPitch,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EditorY,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EditorX,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bOutputVelocityOnBasePass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Wireframe,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxDisplacement,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnableAdaptiveTessellation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnableCrackFreeDisplacement,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_D3D11TessellationMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bNormalCurvatureToRoughness,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUsePlanarForwardReflections,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseHQForwardReflections,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseLightmapDirectionality,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseFullPrecision,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bFullyRough,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAutomaticallySetUsageInEditor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUsedWithUI,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUsedWithClothing,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUsesDistortion,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUsedWithInstancedStaticMeshes,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUsedWithSplineMeshes,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUsedWithMorphTargets,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUsedWithStaticLighting,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUsedWithNiagaraMeshParticles,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUsedWithNiagaraRibbons,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUsedWithNiagaraSprites,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUsedWithMeshParticles,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUsedWithBeamTrails,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUsedWithParticleSprites,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUsedWithEditorCompositing,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUsedWithSkeletalMesh,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUsedAsSpecialEngineMaterial,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bBlockGI,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseEmissiveForDynamicAreaLighting,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bTangentSpaceNormal,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bGenerateSphericalParticleNormals,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDisableDepthTest,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TranslucentShadowStartOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TranslucentMultipleScatteringExtinction,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TranslucentBackscatteringExponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TranslucentSelfShadowSecondOpacity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TranslucentSelfShadowSecondDensityScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TranslucentSelfShadowDensityScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TranslucentShadowDensityScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AllowTranslucentCustomDepthWrites,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TranslucencyDirectionalLightingIntensity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TranslucencyLightingMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NumCustomizedUVs,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAllowNegativeEmissiveColor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DitherOpacityMask,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DitheredLODTransition,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TwoSided,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bScreenSpaceReflections,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnableResponsiveAA,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnableMobileSeparateTranslucency,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnableSeparateTranslucency,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PixelDepthOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaterialAttributes,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CustomizedUVs,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Refraction,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AmbientOcclusion,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClearCoatRoughness,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClearCoat,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SubsurfaceColor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TessellationMultiplier,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldDisplacement,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldPositionOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCastDynamicShadowAsMasked,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OpacityMaskClipValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ShadingModel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaterialDecalResponse,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DecalBlendMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlendMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaterialDomain,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OpacityMask,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Opacity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EmissiveColor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Normal,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Roughness,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Specular,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Metallic,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BaseColor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpecularColor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DiffuseColor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PhysMaterial,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterial>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterial::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880080u,
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
	IMPLEMENT_CLASS(UMaterial, 2652796047);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterial(Z_Construct_UClass_UMaterial, &UMaterial::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterial"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterial);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
