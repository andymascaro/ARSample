// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Curves/CurveEdPresetCurve.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCurveEdPresetCurve() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDEPRECATED_CurveEdPresetCurve_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDEPRECATED_CurveEdPresetCurve();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UDEPRECATED_CurveEdPresetCurve::StaticRegisterNativesUDEPRECATED_CurveEdPresetCurve()
	{
	}
	UClass* Z_Construct_UClass_UDEPRECATED_CurveEdPresetCurve_NoRegister()
	{
		return UDEPRECATED_CurveEdPresetCurve::StaticClass();
	}
	UClass* Z_Construct_UClass_UDEPRECATED_CurveEdPresetCurve()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Curves/CurveEdPresetCurve.h" },
				{ "ModuleRelativePath", "Classes/Curves/CurveEdPresetCurve.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UDEPRECATED_CurveEdPresetCurve>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UDEPRECATED_CurveEdPresetCurve::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x02000280u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDEPRECATED_CurveEdPresetCurve, 1145034309);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDEPRECATED_CurveEdPresetCurve(Z_Construct_UClass_UDEPRECATED_CurveEdPresetCurve, &UDEPRECATED_CurveEdPresetCurve::StaticClass, TEXT("/Script/Engine"), TEXT("UDEPRECATED_CurveEdPresetCurve"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDEPRECATED_CurveEdPresetCurve);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
