// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Materials/MaterialExpressionTextureSample.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionTextureSample() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureMipValueMode();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTextureSample_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTextureSample();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTextureBase();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESamplerSourceMode();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
// End Cross Module References
	static UEnum* ETextureMipValueMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETextureMipValueMode, Z_Construct_UPackage__Script_Engine(), TEXT("ETextureMipValueMode"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETextureMipValueMode(ETextureMipValueMode_StaticEnum, TEXT("/Script/Engine"), TEXT("ETextureMipValueMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ETextureMipValueMode_CRC() { return 1181289086U; }
	UEnum* Z_Construct_UEnum_Engine_ETextureMipValueMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETextureMipValueMode"), 0, Get_Z_Construct_UEnum_Engine_ETextureMipValueMode_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "TMVM_None", (int64)TMVM_None },
				{ "TMVM_MipLevel", (int64)TMVM_MipLevel },
				{ "TMVM_MipBias", (int64)TMVM_MipBias },
				{ "TMVM_Derivative", (int64)TMVM_Derivative },
				{ "TMVM_MAX", (int64)TMVM_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureSample.h" },
				{ "TMVM_Derivative.DisplayName", "Derivative (explicit derivative to compute mip level)" },
				{ "TMVM_Derivative.ToolTip", "Explicitly compute the sample's DDX and DDY for anisotropic filtering." },
				{ "TMVM_MipBias.DisplayName", "MipBias (relative to the computed mip level)" },
				{ "TMVM_MipBias.ToolTip", "Bias the hardware computed sample's mip level. Disables anisotropic filtering." },
				{ "TMVM_MipLevel.DisplayName", "MipLevel (absolute, 0 is full resolution)" },
				{ "TMVM_MipLevel.ToolTip", "Explicitly compute the sample's mip level. Disables anisotropic filtering." },
				{ "TMVM_None.DisplayName", "None (use computed mip level)" },
				{ "TMVM_None.ToolTip", "Use hardware computed sample's mip level with automatic anisotropic filtering support." },
				{ "ToolTip", "defines how MipValue is used" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ETextureMipValueMode",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"ETextureMipValueMode",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UMaterialExpressionTextureSample::StaticRegisterNativesUMaterialExpressionTextureSample()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionTextureSample_NoRegister()
	{
		return UMaterialExpressionTextureSample::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialExpressionTextureSample()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UMaterialExpressionTextureBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Object Object Object" },
				{ "IncludePath", "Materials/MaterialExpressionTextureSample.h" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureSample.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstMipValue_MetaData[] = {
				{ "Category", "MaterialExpressionTextureSample" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureSample.h" },
				{ "ToolTip", "only used if MipValue is not hooked up" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ConstMipValue = { UE4CodeGen_Private::EPropertyClass::Int, "ConstMipValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionTextureSample, ConstMipValue), METADATA_PARAMS(NewProp_ConstMipValue_MetaData, ARRAY_COUNT(NewProp_ConstMipValue_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstCoordinate_MetaData[] = {
				{ "Category", "MaterialExpressionTextureSample" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureSample.h" },
				{ "ToolTip", "only used if Coordinates is not hooked up" },
			};
#endif
			static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ConstCoordinate = { UE4CodeGen_Private::EPropertyClass::UInt32, "ConstCoordinate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionTextureSample, ConstCoordinate), METADATA_PARAMS(NewProp_ConstCoordinate_MetaData, ARRAY_COUNT(NewProp_ConstCoordinate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SamplerSource_MetaData[] = {
				{ "Category", "MaterialExpressionTextureSample" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureSample.h" },
				{ "ToolTip", "Controls where the sampler for this texture lookup will come from.\nChoose 'from texture asset' to make use of the UTexture addressing settings,\nOtherwise use one of the global samplers, which will not consume a sampler slot.\nThis allows materials to use more than 16 unique textures on SM5 platforms." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_SamplerSource = { UE4CodeGen_Private::EPropertyClass::Byte, "SamplerSource", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionTextureSample, SamplerSource), Z_Construct_UEnum_Engine_ESamplerSourceMode, METADATA_PARAMS(NewProp_SamplerSource_MetaData, ARRAY_COUNT(NewProp_SamplerSource_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MipValueMode_MetaData[] = {
				{ "Category", "MaterialExpressionTextureSample" },
				{ "DisplayName", "MipValueMode" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureSample.h" },
				{ "ToolTip", "Defines how the MipValue property is applied to the texture lookup" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_MipValueMode = { UE4CodeGen_Private::EPropertyClass::Byte, "MipValueMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionTextureSample, MipValueMode), Z_Construct_UEnum_Engine_ETextureMipValueMode, METADATA_PARAMS(NewProp_MipValueMode_MetaData, ARRAY_COUNT(NewProp_MipValueMode_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoordinatesDY_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureSample.h" },
				{ "RequiredInput", "true" },
				{ "ToolTip", "Coordinates derivative over the Y axis" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CoordinatesDY = { UE4CodeGen_Private::EPropertyClass::Struct, "CoordinatesDY", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionTextureSample, CoordinatesDY), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_CoordinatesDY_MetaData, ARRAY_COUNT(NewProp_CoordinatesDY_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoordinatesDX_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureSample.h" },
				{ "RequiredInput", "true" },
				{ "ToolTip", "Coordinates derivative over the X axis" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CoordinatesDX = { UE4CodeGen_Private::EPropertyClass::Struct, "CoordinatesDX", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionTextureSample, CoordinatesDX), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_CoordinatesDX_MetaData, ARRAY_COUNT(NewProp_CoordinatesDX_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MipValue_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureSample.h" },
				{ "RequiredInput", "false" },
				{ "ToolTip", "Defaults to 'ConstMipValue' if not specified" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_MipValue = { UE4CodeGen_Private::EPropertyClass::Struct, "MipValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionTextureSample, MipValue), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_MipValue_MetaData, ARRAY_COUNT(NewProp_MipValue_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureObject_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureSample.h" },
				{ "RequiredInput", "false" },
				{ "ToolTip", "Defaults to 'Texture' if not specified" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextureObject = { UE4CodeGen_Private::EPropertyClass::Struct, "TextureObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionTextureSample, TextureObject), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_TextureObject_MetaData, ARRAY_COUNT(NewProp_TextureObject_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Coordinates_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureSample.h" },
				{ "RequiredInput", "false" },
				{ "ToolTip", "Defaults to 'ConstCoordinate' if not specified" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Coordinates = { UE4CodeGen_Private::EPropertyClass::Struct, "Coordinates", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionTextureSample, Coordinates), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_Coordinates_MetaData, ARRAY_COUNT(NewProp_Coordinates_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConstMipValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConstCoordinate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SamplerSource,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MipValueMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CoordinatesDY,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CoordinatesDX,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MipValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TextureObject,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Coordinates,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialExpressionTextureSample>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialExpressionTextureSample::StaticClass,
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
	IMPLEMENT_CLASS(UMaterialExpressionTextureSample, 2543236436);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionTextureSample(Z_Construct_UClass_UMaterialExpressionTextureSample, &UMaterialExpressionTextureSample::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionTextureSample"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionTextureSample);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
