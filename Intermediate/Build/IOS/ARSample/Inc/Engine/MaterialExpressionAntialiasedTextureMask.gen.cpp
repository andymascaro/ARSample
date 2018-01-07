// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Materials/MaterialExpressionAntialiasedTextureMask.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionAntialiasedTextureMask() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureColorChannel();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionAntialiasedTextureMask_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionAntialiasedTextureMask();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTextureSampleParameter2D();
// End Cross Module References
	static UEnum* ETextureColorChannel_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETextureColorChannel, Z_Construct_UPackage__Script_Engine(), TEXT("ETextureColorChannel"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETextureColorChannel(ETextureColorChannel_StaticEnum, TEXT("/Script/Engine"), TEXT("ETextureColorChannel"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ETextureColorChannel_CRC() { return 1644760717U; }
	UEnum* Z_Construct_UEnum_Engine_ETextureColorChannel()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETextureColorChannel"), 0, Get_Z_Construct_UEnum_Engine_ETextureColorChannel_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "TCC_Red", (int64)TCC_Red },
				{ "TCC_Green", (int64)TCC_Green },
				{ "TCC_Blue", (int64)TCC_Blue },
				{ "TCC_Alpha", (int64)TCC_Alpha },
				{ "TCC_MAX", (int64)TCC_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionAntialiasedTextureMask.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ETextureColorChannel",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"ETextureColorChannel",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UMaterialExpressionAntialiasedTextureMask::StaticRegisterNativesUMaterialExpressionAntialiasedTextureMask()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionAntialiasedTextureMask_NoRegister()
	{
		return UMaterialExpressionAntialiasedTextureMask::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialExpressionAntialiasedTextureMask()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UMaterialExpressionTextureSampleParameter2D,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Object Object Object Object Object" },
				{ "IncludePath", "Materials/MaterialExpressionAntialiasedTextureMask.h" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionAntialiasedTextureMask.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Channel_MetaData[] = {
				{ "Category", "MaterialExpressionAntialiasedTextureMask" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionAntialiasedTextureMask.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Channel = { UE4CodeGen_Private::EPropertyClass::Byte, "Channel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionAntialiasedTextureMask, Channel), Z_Construct_UEnum_Engine_ETextureColorChannel, METADATA_PARAMS(NewProp_Channel_MetaData, ARRAY_COUNT(NewProp_Channel_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Threshold_MetaData[] = {
				{ "Category", "MaterialExpressionAntialiasedTextureMask" },
				{ "ClampMax", "1.0" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionAntialiasedTextureMask.h" },
				{ "UIMax", "1.0" },
				{ "UIMin", "0.0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Threshold = { UE4CodeGen_Private::EPropertyClass::Float, "Threshold", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionAntialiasedTextureMask, Threshold), METADATA_PARAMS(NewProp_Threshold_MetaData, ARRAY_COUNT(NewProp_Threshold_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Channel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Threshold,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialExpressionAntialiasedTextureMask>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialExpressionAntialiasedTextureMask::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00082080u,
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
	IMPLEMENT_CLASS(UMaterialExpressionAntialiasedTextureMask, 3034004534);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionAntialiasedTextureMask(Z_Construct_UClass_UMaterialExpressionAntialiasedTextureMask, &UMaterialExpressionAntialiasedTextureMask::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionAntialiasedTextureMask"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionAntialiasedTextureMask);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
