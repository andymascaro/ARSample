// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Materials/MaterialExpressionLandscapeLayerCoords.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionLandscapeLayerCoords() {}
// Cross Module References
	LANDSCAPE_API UEnum* Z_Construct_UEnum_Landscape_ELandscapeCustomizedCoordType();
	UPackage* Z_Construct_UPackage__Script_Landscape();
	LANDSCAPE_API UEnum* Z_Construct_UEnum_Landscape_ETerrainCoordMappingType();
	LANDSCAPE_API UClass* Z_Construct_UClass_UMaterialExpressionLandscapeLayerCoords_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_UMaterialExpressionLandscapeLayerCoords();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
// End Cross Module References
	static UEnum* ELandscapeCustomizedCoordType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Landscape_ELandscapeCustomizedCoordType, Z_Construct_UPackage__Script_Landscape(), TEXT("ELandscapeCustomizedCoordType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELandscapeCustomizedCoordType(ELandscapeCustomizedCoordType_StaticEnum, TEXT("/Script/Landscape"), TEXT("ELandscapeCustomizedCoordType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Landscape_ELandscapeCustomizedCoordType_CRC() { return 1097308278U; }
	UEnum* Z_Construct_UEnum_Landscape_ELandscapeCustomizedCoordType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Landscape();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELandscapeCustomizedCoordType"), 0, Get_Z_Construct_UEnum_Landscape_ELandscapeCustomizedCoordType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "LCCT_None", (int64)LCCT_None },
				{ "LCCT_CustomUV0", (int64)LCCT_CustomUV0 },
				{ "LCCT_CustomUV1", (int64)LCCT_CustomUV1 },
				{ "LCCT_CustomUV2", (int64)LCCT_CustomUV2 },
				{ "LCCT_WeightMapUV", (int64)LCCT_WeightMapUV },
				{ "LCCT_MAX", (int64)LCCT_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "LCCT_None.ToolTip", "Don't use customized UV, just use original UV." },
				{ "LCCT_WeightMapUV.ToolTip", "Use original WeightMapUV, which could not be customized." },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeLayerCoords.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Landscape,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ELandscapeCustomizedCoordType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"ELandscapeCustomizedCoordType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ETerrainCoordMappingType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Landscape_ETerrainCoordMappingType, Z_Construct_UPackage__Script_Landscape(), TEXT("ETerrainCoordMappingType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETerrainCoordMappingType(ETerrainCoordMappingType_StaticEnum, TEXT("/Script/Landscape"), TEXT("ETerrainCoordMappingType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Landscape_ETerrainCoordMappingType_CRC() { return 4079330928U; }
	UEnum* Z_Construct_UEnum_Landscape_ETerrainCoordMappingType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Landscape();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETerrainCoordMappingType"), 0, Get_Z_Construct_UEnum_Landscape_ETerrainCoordMappingType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "TCMT_Auto", (int64)TCMT_Auto },
				{ "TCMT_XY", (int64)TCMT_XY },
				{ "TCMT_XZ", (int64)TCMT_XZ },
				{ "TCMT_YZ", (int64)TCMT_YZ },
				{ "TCMT_MAX", (int64)TCMT_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeLayerCoords.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Landscape,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ETerrainCoordMappingType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"ETerrainCoordMappingType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UMaterialExpressionLandscapeLayerCoords::StaticRegisterNativesUMaterialExpressionLandscapeLayerCoords()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionLandscapeLayerCoords_NoRegister()
	{
		return UMaterialExpressionLandscapeLayerCoords::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialExpressionLandscapeLayerCoords()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
				(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Object Object" },
				{ "IncludePath", "Materials/MaterialExpressionLandscapeLayerCoords.h" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeLayerCoords.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MappingPanV_MetaData[] = {
				{ "Category", "MaterialExpressionLandscapeLayerCoords" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeLayerCoords.h" },
				{ "ToolTip", "Offset to apply to the mapping along V." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MappingPanV = { UE4CodeGen_Private::EPropertyClass::Float, "MappingPanV", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionLandscapeLayerCoords, MappingPanV), METADATA_PARAMS(NewProp_MappingPanV_MetaData, ARRAY_COUNT(NewProp_MappingPanV_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MappingPanU_MetaData[] = {
				{ "Category", "MaterialExpressionLandscapeLayerCoords" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeLayerCoords.h" },
				{ "ToolTip", "Offset to apply to the mapping along U." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MappingPanU = { UE4CodeGen_Private::EPropertyClass::Float, "MappingPanU", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionLandscapeLayerCoords, MappingPanU), METADATA_PARAMS(NewProp_MappingPanU_MetaData, ARRAY_COUNT(NewProp_MappingPanU_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MappingRotation_MetaData[] = {
				{ "Category", "MaterialExpressionLandscapeLayerCoords" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeLayerCoords.h" },
				{ "ToolTip", "Rotation to apply to the mapping." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MappingRotation = { UE4CodeGen_Private::EPropertyClass::Float, "MappingRotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionLandscapeLayerCoords, MappingRotation), METADATA_PARAMS(NewProp_MappingRotation_MetaData, ARRAY_COUNT(NewProp_MappingRotation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MappingScale_MetaData[] = {
				{ "Category", "MaterialExpressionLandscapeLayerCoords" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeLayerCoords.h" },
				{ "ToolTip", "Uniform scale to apply to the mapping." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MappingScale = { UE4CodeGen_Private::EPropertyClass::Float, "MappingScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionLandscapeLayerCoords, MappingScale), METADATA_PARAMS(NewProp_MappingScale_MetaData, ARRAY_COUNT(NewProp_MappingScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomUVType_MetaData[] = {
				{ "Category", "MaterialExpressionLandscapeLayerCoords" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeLayerCoords.h" },
				{ "ToolTip", "Determines the mapping place to use on the terrain." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_CustomUVType = { UE4CodeGen_Private::EPropertyClass::Byte, "CustomUVType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionLandscapeLayerCoords, CustomUVType), Z_Construct_UEnum_Landscape_ELandscapeCustomizedCoordType, METADATA_PARAMS(NewProp_CustomUVType_MetaData, ARRAY_COUNT(NewProp_CustomUVType_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MappingType_MetaData[] = {
				{ "Category", "MaterialExpressionLandscapeLayerCoords" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeLayerCoords.h" },
				{ "ToolTip", "Determines the mapping place to use on the terrain." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_MappingType = { UE4CodeGen_Private::EPropertyClass::Byte, "MappingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionLandscapeLayerCoords, MappingType), Z_Construct_UEnum_Landscape_ETerrainCoordMappingType, METADATA_PARAMS(NewProp_MappingType_MetaData, ARRAY_COUNT(NewProp_MappingType_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MappingPanV,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MappingPanU,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MappingRotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MappingScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CustomUVType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MappingType,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialExpressionLandscapeLayerCoords>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialExpressionLandscapeLayerCoords::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00102080u,
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
	IMPLEMENT_CLASS(UMaterialExpressionLandscapeLayerCoords, 2578653681);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionLandscapeLayerCoords(Z_Construct_UClass_UMaterialExpressionLandscapeLayerCoords, &UMaterialExpressionLandscapeLayerCoords::StaticClass, TEXT("/Script/Landscape"), TEXT("UMaterialExpressionLandscapeLayerCoords"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionLandscapeLayerCoords);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
