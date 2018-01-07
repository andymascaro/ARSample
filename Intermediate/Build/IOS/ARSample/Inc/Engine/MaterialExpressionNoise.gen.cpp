// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Materials/MaterialExpressionNoise.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionNoise() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ENoiseFunction();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionNoise_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionNoise();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
// End Cross Module References
	static UEnum* ENoiseFunction_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ENoiseFunction, Z_Construct_UPackage__Script_Engine(), TEXT("ENoiseFunction"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENoiseFunction(ENoiseFunction_StaticEnum, TEXT("/Script/Engine"), TEXT("ENoiseFunction"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ENoiseFunction_CRC() { return 4063374500U; }
	UEnum* Z_Construct_UEnum_Engine_ENoiseFunction()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENoiseFunction"), 0, Get_Z_Construct_UEnum_Engine_ENoiseFunction_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "NOISEFUNCTION_SimplexTex", (int64)NOISEFUNCTION_SimplexTex },
				{ "NOISEFUNCTION_GradientTex", (int64)NOISEFUNCTION_GradientTex },
				{ "NOISEFUNCTION_GradientTex3D", (int64)NOISEFUNCTION_GradientTex3D },
				{ "NOISEFUNCTION_GradientALU", (int64)NOISEFUNCTION_GradientALU },
				{ "NOISEFUNCTION_ValueALU", (int64)NOISEFUNCTION_ValueALU },
				{ "NOISEFUNCTION_VoronoiALU", (int64)NOISEFUNCTION_VoronoiALU },
				{ "NOISEFUNCTION_MAX", (int64)NOISEFUNCTION_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionNoise.h" },
				{ "NOISEFUNCTION_GradientALU.DisplayName", "Gradient - Computational" },
				{ "NOISEFUNCTION_GradientALU.ToolTip", "High quality for direct use and bumps\nNon-tiled: ~80 instructions per level, no textures\nTiling: ~143 instructions per level, no textures" },
				{ "NOISEFUNCTION_GradientTex.DisplayName", "Gradient - Texture Based" },
				{ "NOISEFUNCTION_GradientTex.ToolTip", "High quality for direct use and bumps\nNon-tiled: ~61 instructions per level, 8 texture lookups\nTiling: ~74 instructions per level, 8 texture lookups\nEven \"non-tiled\" mode has a repeat of 128. Useful Repeat Size range <= 128\nFormerly labeled as Perlin noise" },
				{ "NOISEFUNCTION_GradientTex3D.DisplayName", "Fast Gradient - 3D Texture" },
				{ "NOISEFUNCTION_GradientTex3D.ToolTip", "High quality for direct use, BAD for bumps; doesn't work on Mobile\n~16 instructions per level, 1 texture lookup\nAlways tiles with a repeat of 16, \"Tiling\" mode is not an option for Fast Gradient noise" },
				{ "NOISEFUNCTION_SimplexTex.DisplayName", "Simplex - Texture Based" },
				{ "NOISEFUNCTION_SimplexTex.ToolTip", "High quality for direct use and bumps\n~77 instructions per level, 4 texture lookups\nCannot tile" },
				{ "NOISEFUNCTION_ValueALU.DisplayName", "Value - Computational" },
				{ "NOISEFUNCTION_ValueALU.ToolTip", "Low quality, but pure computation\nNon-tiled: ~53 instructions per level, no textures\nTiling: ~118 instructions per level, no textures\nFormerly mis-labeled as Gradient noise" },
				{ "NOISEFUNCTION_VoronoiALU.DisplayName", "Voronoi" },
				{ "NOISEFUNCTION_VoronoiALU.ToolTip", "Also known as Worley or Cellular noise\nQuality=1 searches 8 cells, Quality=2 searches 16 cells\nQuality=3 searches 27 cells, Quality=4 searches 32 cells\nAll are about 20 instructions per cell searched" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ENoiseFunction",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"ENoiseFunction",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UMaterialExpressionNoise::StaticRegisterNativesUMaterialExpressionNoise()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionNoise_NoRegister()
	{
		return UMaterialExpressionNoise::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialExpressionNoise()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Object" },
				{ "IncludePath", "Materials/MaterialExpressionNoise.h" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionNoise.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RepeatSize_MetaData[] = {
				{ "Category", "MaterialExpressionNoise" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionNoise.h" },
				{ "ToolTip", "How many units in each tile (if Tiling is on)" },
				{ "UIMin", "4" },
			};
#endif
			static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_RepeatSize = { UE4CodeGen_Private::EPropertyClass::UInt32, "RepeatSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionNoise, RepeatSize), METADATA_PARAMS(NewProp_RepeatSize_MetaData, ARRAY_COUNT(NewProp_RepeatSize_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTiling_MetaData[] = {
				{ "Category", "MaterialExpressionNoise" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionNoise.h" },
				{ "ToolTip", "Whether to use tiling noise pattern, useful for baking to seam-free repeating textures" },
			};
#endif
			auto NewProp_bTiling_SetBit = [](void* Obj){ ((UMaterialExpressionNoise*)Obj)->bTiling = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTiling = { UE4CodeGen_Private::EPropertyClass::Bool, "bTiling", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMaterialExpressionNoise), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bTiling_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bTiling_MetaData, ARRAY_COUNT(NewProp_bTiling_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelScale_MetaData[] = {
				{ "Category", "MaterialExpressionNoise" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionNoise.h" },
				{ "ToolTip", "usually 2 but higher values allow efficient use of few levels" },
				{ "UIMax", "8" },
				{ "UIMin", "2" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LevelScale = { UE4CodeGen_Private::EPropertyClass::Float, "LevelScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionNoise, LevelScale), METADATA_PARAMS(NewProp_LevelScale_MetaData, ARRAY_COUNT(NewProp_LevelScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputMax_MetaData[] = {
				{ "Category", "MaterialExpressionNoise" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionNoise.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutputMax = { UE4CodeGen_Private::EPropertyClass::Float, "OutputMax", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionNoise, OutputMax), METADATA_PARAMS(NewProp_OutputMax_MetaData, ARRAY_COUNT(NewProp_OutputMax_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputMin_MetaData[] = {
				{ "Category", "MaterialExpressionNoise" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionNoise.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutputMin = { UE4CodeGen_Private::EPropertyClass::Float, "OutputMin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionNoise, OutputMin), METADATA_PARAMS(NewProp_OutputMin_MetaData, ARRAY_COUNT(NewProp_OutputMin_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Levels_MetaData[] = {
				{ "Category", "MaterialExpressionNoise" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionNoise.h" },
				{ "ToolTip", "1 = fast but little detail, .. larger numbers cost more performance" },
				{ "UIMax", "10" },
				{ "UIMin", "1" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Levels = { UE4CodeGen_Private::EPropertyClass::Int, "Levels", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionNoise, Levels), METADATA_PARAMS(NewProp_Levels_MetaData, ARRAY_COUNT(NewProp_Levels_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTurbulence_MetaData[] = {
				{ "Category", "MaterialExpressionNoise" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionNoise.h" },
				{ "ToolTip", "How multiple frequencies are getting combined" },
			};
#endif
			auto NewProp_bTurbulence_SetBit = [](void* Obj){ ((UMaterialExpressionNoise*)Obj)->bTurbulence = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTurbulence = { UE4CodeGen_Private::EPropertyClass::Bool, "bTurbulence", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMaterialExpressionNoise), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bTurbulence_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bTurbulence_MetaData, ARRAY_COUNT(NewProp_bTurbulence_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NoiseFunction_MetaData[] = {
				{ "Category", "MaterialExpressionNoise" },
				{ "DisplayName", "Function" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionNoise.h" },
				{ "ToolTip", "Noise function, affects performance and look" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_NoiseFunction = { UE4CodeGen_Private::EPropertyClass::Byte, "NoiseFunction", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionNoise, NoiseFunction), Z_Construct_UEnum_Engine_ENoiseFunction, METADATA_PARAMS(NewProp_NoiseFunction_MetaData, ARRAY_COUNT(NewProp_NoiseFunction_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Quality_MetaData[] = {
				{ "Category", "MaterialExpressionNoise" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionNoise.h" },
				{ "ToolTip", "Lower numbers are faster and lower quality, higher numbers are slower and higher quality" },
				{ "UIMax", "4" },
				{ "UIMin", "1" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Quality = { UE4CodeGen_Private::EPropertyClass::Int, "Quality", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionNoise, Quality), METADATA_PARAMS(NewProp_Quality_MetaData, ARRAY_COUNT(NewProp_Quality_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
				{ "Category", "MaterialExpressionNoise" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionNoise.h" },
				{ "ToolTip", "can also be done with a multiply on the Position" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scale = { UE4CodeGen_Private::EPropertyClass::Float, "Scale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionNoise, Scale), METADATA_PARAMS(NewProp_Scale_MetaData, ARRAY_COUNT(NewProp_Scale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilterWidth_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionNoise.h" },
				{ "ToolTip", "scalar, to clamp the Levels at pixel level, can be computed like this: max(length(ddx(Position)), length(ddy(Position))" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_FilterWidth = { UE4CodeGen_Private::EPropertyClass::Struct, "FilterWidth", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionNoise, FilterWidth), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_FilterWidth_MetaData, ARRAY_COUNT(NewProp_FilterWidth_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionNoise.h" },
				{ "ToolTip", "2 to 3 dimensional vector" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position = { UE4CodeGen_Private::EPropertyClass::Struct, "Position", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionNoise, Position), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_Position_MetaData, ARRAY_COUNT(NewProp_Position_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RepeatSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bTiling,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LevelScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutputMax,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutputMin,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Levels,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bTurbulence,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NoiseFunction,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Quality,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Scale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FilterWidth,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Position,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialExpressionNoise>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialExpressionNoise::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00080080u,
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
	IMPLEMENT_CLASS(UMaterialExpressionNoise, 166063243);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionNoise(Z_Construct_UClass_UMaterialExpressionNoise, &UMaterialExpressionNoise::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionNoise"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionNoise);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
