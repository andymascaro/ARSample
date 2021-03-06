// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/LandscapeGizmoActiveActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeGizmoActiveActor() {}
// Cross Module References
	LANDSCAPE_API UEnum* Z_Construct_UEnum_Landscape_ELandscapeGizmoType();
	UPackage* Z_Construct_UPackage__Script_Landscape();
	LANDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FGizmoSelectData();
	LANDSCAPE_API UClass* Z_Construct_UClass_ALandscapeGizmoActiveActor_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_ALandscapeGizmoActiveActor();
	LANDSCAPE_API UClass* Z_Construct_UClass_ALandscapeGizmoActor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeLayerInfoObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	static UEnum* ELandscapeGizmoType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Landscape_ELandscapeGizmoType, Z_Construct_UPackage__Script_Landscape(), TEXT("ELandscapeGizmoType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELandscapeGizmoType(ELandscapeGizmoType_StaticEnum, TEXT("/Script/Landscape"), TEXT("ELandscapeGizmoType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Landscape_ELandscapeGizmoType_CRC() { return 577247295U; }
	UEnum* Z_Construct_UEnum_Landscape_ELandscapeGizmoType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Landscape();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELandscapeGizmoType"), 0, Get_Z_Construct_UEnum_Landscape_ELandscapeGizmoType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "LGT_None", (int64)LGT_None },
				{ "LGT_Height", (int64)LGT_Height },
				{ "LGT_Weight", (int64)LGT_Weight },
				{ "LGT_MAX", (int64)LGT_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/LandscapeGizmoActiveActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Landscape,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ELandscapeGizmoType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"ELandscapeGizmoType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FGizmoSelectData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LANDSCAPE_API uint32 Get_Z_Construct_UScriptStruct_FGizmoSelectData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGizmoSelectData, Z_Construct_UPackage__Script_Landscape(), TEXT("GizmoSelectData"), sizeof(FGizmoSelectData), Get_Z_Construct_UScriptStruct_FGizmoSelectData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGizmoSelectData(FGizmoSelectData::StaticStruct, TEXT("/Script/Landscape"), TEXT("GizmoSelectData"), false, nullptr, nullptr);
static struct FScriptStruct_Landscape_StaticRegisterNativesFGizmoSelectData
{
	FScriptStruct_Landscape_StaticRegisterNativesFGizmoSelectData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GizmoSelectData")),new UScriptStruct::TCppStructOps<FGizmoSelectData>);
	}
} ScriptStruct_Landscape_StaticRegisterNativesFGizmoSelectData;
	UScriptStruct* Z_Construct_UScriptStruct_FGizmoSelectData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGizmoSelectData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Landscape();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GizmoSelectData"), sizeof(FGizmoSelectData), Get_Z_Construct_UScriptStruct_FGizmoSelectData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/LandscapeGizmoActiveActor.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGizmoSelectData>(); };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeightData_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeGizmoActiveActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HeightData = { UE4CodeGen_Private::EPropertyClass::Float, "HeightData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(FGizmoSelectData, HeightData), METADATA_PARAMS(NewProp_HeightData_MetaData, ARRAY_COUNT(NewProp_HeightData_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ratio_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeGizmoActiveActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Ratio = { UE4CodeGen_Private::EPropertyClass::Float, "Ratio", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(FGizmoSelectData, Ratio), METADATA_PARAMS(NewProp_Ratio_MetaData, ARRAY_COUNT(NewProp_Ratio_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HeightData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Ratio,
			};
#endif // WITH_EDITORONLY_DATA
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"GizmoSelectData",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FGizmoSelectData),
				alignof(FGizmoSelectData),
				IF_WITH_EDITORONLY_DATA(PropPointers, nullptr), IF_WITH_EDITORONLY_DATA(ARRAY_COUNT(PropPointers), 0),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGizmoSelectData_CRC() { return 1914280720U; }
	void ALandscapeGizmoActiveActor::StaticRegisterNativesALandscapeGizmoActiveActor()
	{
	}
	UClass* Z_Construct_UClass_ALandscapeGizmoActiveActor_NoRegister()
	{
		return ALandscapeGizmoActiveActor::StaticClass();
	}
	UClass* Z_Construct_UClass_ALandscapeGizmoActiveActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ALandscapeGizmoActor,
				(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "LandscapeGizmoActiveActor.h" },
				{ "ModuleRelativePath", "Classes/LandscapeGizmoActiveActor.h" },
			};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnsnappedRotation_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeGizmoActiveActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_UnsnappedRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "UnsnappedRotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800002000, 1, nullptr, STRUCT_OFFSET(ALandscapeGizmoActiveActor, UnsnappedRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(NewProp_UnsnappedRotation_MetaData, ARRAY_COUNT(NewProp_UnsnappedRotation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSnapToLandscapeGrid_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeGizmoActiveActor.h" },
			};
#endif
			auto NewProp_bSnapToLandscapeGrid_SetBit = [](void* Obj){ ((ALandscapeGizmoActiveActor*)Obj)->bSnapToLandscapeGrid = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSnapToLandscapeGrid = { UE4CodeGen_Private::EPropertyClass::Bool, "bSnapToLandscapeGrid", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800002000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ALandscapeGizmoActiveActor), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSnapToLandscapeGrid_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSnapToLandscapeGrid_MetaData, ARRAY_COUNT(NewProp_bSnapToLandscapeGrid_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LayerInfos_MetaData[] = {
				{ "Category", "LandscapeGizmoActiveActor" },
				{ "ModuleRelativePath", "Classes/LandscapeGizmoActiveActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LayerInfos = { UE4CodeGen_Private::EPropertyClass::Array, "LayerInfos", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800020001, 1, nullptr, STRUCT_OFFSET(ALandscapeGizmoActiveActor, LayerInfos), METADATA_PARAMS(NewProp_LayerInfos_MetaData, ARRAY_COUNT(NewProp_LayerInfos_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LayerInfos_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "LayerInfos", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000800020000, 1, nullptr, 0, Z_Construct_UClass_ULandscapeLayerInfoObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GizmoMeshMaterial_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeGizmoActiveActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GizmoMeshMaterial = { UE4CodeGen_Private::EPropertyClass::Object, "GizmoMeshMaterial", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(ALandscapeGizmoActiveActor, GizmoMeshMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(NewProp_GizmoMeshMaterial_MetaData, ARRAY_COUNT(NewProp_GizmoMeshMaterial_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GizmoDataMaterial_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeGizmoActiveActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GizmoDataMaterial = { UE4CodeGen_Private::EPropertyClass::Object, "GizmoDataMaterial", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(ALandscapeGizmoActiveActor, GizmoDataMaterial), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(NewProp_GizmoDataMaterial_MetaData, ARRAY_COUNT(NewProp_GizmoDataMaterial_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GizmoMaterial_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeGizmoActiveActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GizmoMaterial = { UE4CodeGen_Private::EPropertyClass::Object, "GizmoMaterial", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(ALandscapeGizmoActiveActor, GizmoMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(NewProp_GizmoMaterial_MetaData, ARRAY_COUNT(NewProp_GizmoMaterial_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrustumVerts_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeGizmoActiveActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_FrustumVerts = { UE4CodeGen_Private::EPropertyClass::Struct, "FrustumVerts", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800002000, CPP_ARRAY_DIM(FrustumVerts, ALandscapeGizmoActiveActor), nullptr, STRUCT_OFFSET(ALandscapeGizmoActiveActor, FrustumVerts), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_FrustumVerts_MetaData, ARRAY_COUNT(NewProp_FrustumVerts_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedScaleXY_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeGizmoActiveActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CachedScaleXY = { UE4CodeGen_Private::EPropertyClass::Float, "CachedScaleXY", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(ALandscapeGizmoActiveActor, CachedScaleXY), METADATA_PARAMS(NewProp_CachedScaleXY_MetaData, ARRAY_COUNT(NewProp_CachedScaleXY_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedHeight_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeGizmoActiveActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CachedHeight = { UE4CodeGen_Private::EPropertyClass::Float, "CachedHeight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(ALandscapeGizmoActiveActor, CachedHeight), METADATA_PARAMS(NewProp_CachedHeight_MetaData, ARRAY_COUNT(NewProp_CachedHeight_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedWidth_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeGizmoActiveActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CachedWidth = { UE4CodeGen_Private::EPropertyClass::Float, "CachedWidth", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(ALandscapeGizmoActiveActor, CachedWidth), METADATA_PARAMS(NewProp_CachedWidth_MetaData, ARRAY_COUNT(NewProp_CachedWidth_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SampleSizeY_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeGizmoActiveActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_SampleSizeY = { UE4CodeGen_Private::EPropertyClass::Int, "SampleSizeY", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(ALandscapeGizmoActiveActor, SampleSizeY), METADATA_PARAMS(NewProp_SampleSizeY_MetaData, ARRAY_COUNT(NewProp_SampleSizeY_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SampleSizeX_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeGizmoActiveActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_SampleSizeX = { UE4CodeGen_Private::EPropertyClass::Int, "SampleSizeX", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(ALandscapeGizmoActiveActor, SampleSizeX), METADATA_PARAMS(NewProp_SampleSizeX_MetaData, ARRAY_COUNT(NewProp_SampleSizeX_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SampledNormal_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeGizmoActiveActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SampledNormal = { UE4CodeGen_Private::EPropertyClass::Array, "SampledNormal", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(ALandscapeGizmoActiveActor, SampledNormal), METADATA_PARAMS(NewProp_SampledNormal_MetaData, ARRAY_COUNT(NewProp_SampledNormal_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SampledNormal_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "SampledNormal", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000800000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SampledHeight_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeGizmoActiveActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SampledHeight = { UE4CodeGen_Private::EPropertyClass::Array, "SampledHeight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(ALandscapeGizmoActiveActor, SampledHeight), METADATA_PARAMS(NewProp_SampledHeight_MetaData, ARRAY_COUNT(NewProp_SampledHeight_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SampledHeight_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "SampledHeight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000800000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureScale_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeGizmoActiveActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextureScale = { UE4CodeGen_Private::EPropertyClass::Struct, "TextureScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(ALandscapeGizmoActiveActor, TextureScale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(NewProp_TextureScale_MetaData, ARRAY_COUNT(NewProp_TextureScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GizmoTexture_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeGizmoActiveActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GizmoTexture = { UE4CodeGen_Private::EPropertyClass::Object, "GizmoTexture", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800002000, 1, nullptr, STRUCT_OFFSET(ALandscapeGizmoActiveActor, GizmoTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(NewProp_GizmoTexture_MetaData, ARRAY_COUNT(NewProp_GizmoTexture_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataType_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeGizmoActiveActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_DataType = { UE4CodeGen_Private::EPropertyClass::Byte, "DataType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800002000, 1, nullptr, STRUCT_OFFSET(ALandscapeGizmoActiveActor, DataType), Z_Construct_UEnum_Landscape_ELandscapeGizmoType, METADATA_PARAMS(NewProp_DataType_MetaData, ARRAY_COUNT(NewProp_DataType_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UnsnappedRotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSnapToLandscapeGrid,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LayerInfos,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LayerInfos_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GizmoMeshMaterial,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GizmoDataMaterial,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GizmoMaterial,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FrustumVerts,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CachedScaleXY,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CachedHeight,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CachedWidth,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SampleSizeY,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SampleSizeX,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SampledNormal,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SampledNormal_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SampledHeight,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SampledHeight_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TextureScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GizmoTexture,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DataType,
			};
#endif // WITH_EDITORONLY_DATA
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ALandscapeGizmoActiveActor>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ALandscapeGizmoActiveActor::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880280u,
				nullptr, 0,
				IF_WITH_EDITORONLY_DATA(PropPointers, nullptr), IF_WITH_EDITORONLY_DATA(ARRAY_COUNT(PropPointers), 0),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALandscapeGizmoActiveActor, 976700012);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALandscapeGizmoActiveActor(Z_Construct_UClass_ALandscapeGizmoActiveActor, &ALandscapeGizmoActiveActor::StaticClass, TEXT("/Script/Landscape"), TEXT("ALandscapeGizmoActiveActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALandscapeGizmoActiveActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
