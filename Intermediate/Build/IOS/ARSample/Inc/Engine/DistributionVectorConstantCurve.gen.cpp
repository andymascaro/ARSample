// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Distributions/DistributionVectorConstantCurve.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDistributionVectorConstantCurve() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDistributionVectorConstantCurve_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDistributionVectorConstantCurve();
	ENGINE_API UClass* Z_Construct_UClass_UDistributionVector();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDistributionVectorLockFlags();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInterpCurveVector();
// End Cross Module References
	void UDistributionVectorConstantCurve::StaticRegisterNativesUDistributionVectorConstantCurve()
	{
	}
	UClass* Z_Construct_UClass_UDistributionVectorConstantCurve_NoRegister()
	{
		return UDistributionVectorConstantCurve::StaticClass();
	}
	UClass* Z_Construct_UClass_UDistributionVectorConstantCurve()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UDistributionVector,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Object Object" },
				{ "IncludePath", "Distributions/DistributionVectorConstantCurve.h" },
				{ "ModuleRelativePath", "Classes/Distributions/DistributionVectorConstantCurve.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LockedAxes_MetaData[] = {
				{ "Category", "DistributionVectorConstantCurve" },
				{ "ModuleRelativePath", "Classes/Distributions/DistributionVectorConstantCurve.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_LockedAxes = { UE4CodeGen_Private::EPropertyClass::Byte, "LockedAxes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UDistributionVectorConstantCurve, LockedAxes), Z_Construct_UEnum_Engine_EDistributionVectorLockFlags, METADATA_PARAMS(NewProp_LockedAxes_MetaData, ARRAY_COUNT(NewProp_LockedAxes_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLockAxes_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Distributions/DistributionVectorConstantCurve.h" },
				{ "ToolTip", "If true, X == Y == Z ie. only one degree of freedom. If false, each axis is picked independently." },
			};
#endif
			auto NewProp_bLockAxes_SetBit = [](void* Obj){ ((UDistributionVectorConstantCurve*)Obj)->bLockAxes = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLockAxes = { UE4CodeGen_Private::EPropertyClass::Bool, "bLockAxes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UDistributionVectorConstantCurve), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bLockAxes_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bLockAxes_MetaData, ARRAY_COUNT(NewProp_bLockAxes_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstantCurve_MetaData[] = {
				{ "Category", "DistributionVectorConstantCurve" },
				{ "ModuleRelativePath", "Classes/Distributions/DistributionVectorConstantCurve.h" },
				{ "ToolTip", "Keyframe data for each component (X,Y,Z) over time." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConstantCurve = { UE4CodeGen_Private::EPropertyClass::Struct, "ConstantCurve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UDistributionVectorConstantCurve, ConstantCurve), Z_Construct_UScriptStruct_FInterpCurveVector, METADATA_PARAMS(NewProp_ConstantCurve_MetaData, ARRAY_COUNT(NewProp_ConstantCurve_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LockedAxes,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bLockAxes,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConstantCurve,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UDistributionVectorConstantCurve>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UDistributionVectorConstantCurve::StaticClass,
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
	IMPLEMENT_CLASS(UDistributionVectorConstantCurve, 916957161);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDistributionVectorConstantCurve(Z_Construct_UClass_UDistributionVectorConstantCurve, &UDistributionVectorConstantCurve::StaticClass, TEXT("/Script/Engine"), TEXT("UDistributionVectorConstantCurve"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDistributionVectorConstantCurve);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
