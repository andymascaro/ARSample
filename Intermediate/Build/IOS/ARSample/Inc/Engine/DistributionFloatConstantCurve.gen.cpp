// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Distributions/DistributionFloatConstantCurve.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDistributionFloatConstantCurve() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDistributionFloatConstantCurve_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDistributionFloatConstantCurve();
	ENGINE_API UClass* Z_Construct_UClass_UDistributionFloat();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInterpCurveFloat();
// End Cross Module References
	void UDistributionFloatConstantCurve::StaticRegisterNativesUDistributionFloatConstantCurve()
	{
	}
	UClass* Z_Construct_UClass_UDistributionFloatConstantCurve_NoRegister()
	{
		return UDistributionFloatConstantCurve::StaticClass();
	}
	UClass* Z_Construct_UClass_UDistributionFloatConstantCurve()
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
				{ "IncludePath", "Distributions/DistributionFloatConstantCurve.h" },
				{ "ModuleRelativePath", "Classes/Distributions/DistributionFloatConstantCurve.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstantCurve_MetaData[] = {
				{ "Category", "DistributionFloatConstantCurve" },
				{ "ModuleRelativePath", "Classes/Distributions/DistributionFloatConstantCurve.h" },
				{ "ToolTip", "Keyframe data for how output constant varies over time." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConstantCurve = { UE4CodeGen_Private::EPropertyClass::Struct, "ConstantCurve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UDistributionFloatConstantCurve, ConstantCurve), Z_Construct_UScriptStruct_FInterpCurveFloat, METADATA_PARAMS(NewProp_ConstantCurve_MetaData, ARRAY_COUNT(NewProp_ConstantCurve_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConstantCurve,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UDistributionFloatConstantCurve>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UDistributionFloatConstantCurve::StaticClass,
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
	IMPLEMENT_CLASS(UDistributionFloatConstantCurve, 2067989009);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDistributionFloatConstantCurve(Z_Construct_UClass_UDistributionFloatConstantCurve, &UDistributionFloatConstantCurve::StaticClass, TEXT("/Script/Engine"), TEXT("UDistributionFloatConstantCurve"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDistributionFloatConstantCurve);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
