// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Distributions/DistributionFloatUniform.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDistributionFloatUniform() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDistributionFloatUniform_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDistributionFloatUniform();
	ENGINE_API UClass* Z_Construct_UClass_UDistributionFloat();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UDistributionFloatUniform::StaticRegisterNativesUDistributionFloatUniform()
	{
	}
	UClass* Z_Construct_UClass_UDistributionFloatUniform_NoRegister()
	{
		return UDistributionFloatUniform::StaticClass();
	}
	UClass* Z_Construct_UClass_UDistributionFloatUniform()
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
				{ "IncludePath", "Distributions/DistributionFloatUniform.h" },
				{ "ModuleRelativePath", "Classes/Distributions/DistributionFloatUniform.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[] = {
				{ "Category", "DistributionFloatUniform" },
				{ "ModuleRelativePath", "Classes/Distributions/DistributionFloatUniform.h" },
				{ "ToolTip", "High end of output float distribution." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Max = { UE4CodeGen_Private::EPropertyClass::Float, "Max", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UDistributionFloatUniform, Max), METADATA_PARAMS(NewProp_Max_MetaData, ARRAY_COUNT(NewProp_Max_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[] = {
				{ "Category", "DistributionFloatUniform" },
				{ "ModuleRelativePath", "Classes/Distributions/DistributionFloatUniform.h" },
				{ "ToolTip", "Low end of output float distribution." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Min = { UE4CodeGen_Private::EPropertyClass::Float, "Min", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UDistributionFloatUniform, Min), METADATA_PARAMS(NewProp_Min_MetaData, ARRAY_COUNT(NewProp_Min_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Max,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Min,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UDistributionFloatUniform>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UDistributionFloatUniform::StaticClass,
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
	IMPLEMENT_CLASS(UDistributionFloatUniform, 1267230207);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDistributionFloatUniform(Z_Construct_UClass_UDistributionFloatUniform, &UDistributionFloatUniform::StaticClass, TEXT("/Script/Engine"), TEXT("UDistributionFloatUniform"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDistributionFloatUniform);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
