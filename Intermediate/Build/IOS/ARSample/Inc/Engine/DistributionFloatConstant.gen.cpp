// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Distributions/DistributionFloatConstant.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDistributionFloatConstant() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDistributionFloatConstant_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDistributionFloatConstant();
	ENGINE_API UClass* Z_Construct_UClass_UDistributionFloat();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UDistributionFloatConstant::StaticRegisterNativesUDistributionFloatConstant()
	{
	}
	UClass* Z_Construct_UClass_UDistributionFloatConstant_NoRegister()
	{
		return UDistributionFloatConstant::StaticClass();
	}
	UClass* Z_Construct_UClass_UDistributionFloatConstant()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UDistributionFloat,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Object Object" },
				{ "IncludePath", "Distributions/DistributionFloatConstant.h" },
				{ "ModuleRelativePath", "Classes/Distributions/DistributionFloatConstant.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Constant_MetaData[] = {
				{ "Category", "DistributionFloatConstant" },
				{ "ModuleRelativePath", "Classes/Distributions/DistributionFloatConstant.h" },
				{ "ToolTip", "This float will be returned for all values of time." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Constant = { UE4CodeGen_Private::EPropertyClass::Float, "Constant", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UDistributionFloatConstant, Constant), METADATA_PARAMS(NewProp_Constant_MetaData, ARRAY_COUNT(NewProp_Constant_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Constant,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UDistributionFloatConstant>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UDistributionFloatConstant::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00303080u,
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
	IMPLEMENT_CLASS(UDistributionFloatConstant, 1564049696);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDistributionFloatConstant(Z_Construct_UClass_UDistributionFloatConstant, &UDistributionFloatConstant::StaticClass, TEXT("/Script/Engine"), TEXT("UDistributionFloatConstant"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDistributionFloatConstant);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
