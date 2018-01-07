// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Distributions/DistributionVectorUniformCurve.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDistributionVectorUniformCurve() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDistributionVectorUniformCurve_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDistributionVectorUniformCurve();
	ENGINE_API UClass* Z_Construct_UClass_UDistributionVector();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDistributionVectorMirrorFlags();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDistributionVectorLockFlags();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInterpCurveTwoVectors();
// End Cross Module References
	void UDistributionVectorUniformCurve::StaticRegisterNativesUDistributionVectorUniformCurve()
	{
	}
	UClass* Z_Construct_UClass_UDistributionVectorUniformCurve_NoRegister()
	{
		return UDistributionVectorUniformCurve::StaticClass();
	}
	UClass* Z_Construct_UClass_UDistributionVectorUniformCurve()
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
				{ "IncludePath", "Distributions/DistributionVectorUniformCurve.h" },
				{ "ModuleRelativePath", "Classes/Distributions/DistributionVectorUniformCurve.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseExtremes_MetaData[] = {
				{ "Category", "DistributionVectorUniformCurve" },
				{ "ModuleRelativePath", "Classes/Distributions/DistributionVectorUniformCurve.h" },
			};
#endif
			auto NewProp_bUseExtremes_SetBit = [](void* Obj){ ((UDistributionVectorUniformCurve*)Obj)->bUseExtremes = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseExtremes = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseExtremes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UDistributionVectorUniformCurve), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseExtremes_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseExtremes_MetaData, ARRAY_COUNT(NewProp_bUseExtremes_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MirrorFlags_MetaData[] = {
				{ "Category", "DistributionVectorUniformCurve" },
				{ "ModuleRelativePath", "Classes/Distributions/DistributionVectorUniformCurve.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_MirrorFlags = { UE4CodeGen_Private::EPropertyClass::Byte, "MirrorFlags", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, CPP_ARRAY_DIM(MirrorFlags, UDistributionVectorUniformCurve), nullptr, STRUCT_OFFSET(UDistributionVectorUniformCurve, MirrorFlags), Z_Construct_UEnum_Engine_EDistributionVectorMirrorFlags, METADATA_PARAMS(NewProp_MirrorFlags_MetaData, ARRAY_COUNT(NewProp_MirrorFlags_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LockedAxes_MetaData[] = {
				{ "Category", "DistributionVectorUniformCurve" },
				{ "ModuleRelativePath", "Classes/Distributions/DistributionVectorUniformCurve.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_LockedAxes = { UE4CodeGen_Private::EPropertyClass::Byte, "LockedAxes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, CPP_ARRAY_DIM(LockedAxes, UDistributionVectorUniformCurve), nullptr, STRUCT_OFFSET(UDistributionVectorUniformCurve, LockedAxes), Z_Construct_UEnum_Engine_EDistributionVectorLockFlags, METADATA_PARAMS(NewProp_LockedAxes_MetaData, ARRAY_COUNT(NewProp_LockedAxes_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLockAxes2_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Distributions/DistributionVectorUniformCurve.h" },
			};
#endif
			auto NewProp_bLockAxes2_SetBit = [](void* Obj){ ((UDistributionVectorUniformCurve*)Obj)->bLockAxes2 = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLockAxes2 = { UE4CodeGen_Private::EPropertyClass::Bool, "bLockAxes2", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UDistributionVectorUniformCurve), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bLockAxes2_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bLockAxes2_MetaData, ARRAY_COUNT(NewProp_bLockAxes2_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLockAxes1_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Distributions/DistributionVectorUniformCurve.h" },
				{ "ToolTip", "If true, X == Y == Z ie. only one degree of freedom. If false, each axis is picked independently." },
			};
#endif
			auto NewProp_bLockAxes1_SetBit = [](void* Obj){ ((UDistributionVectorUniformCurve*)Obj)->bLockAxes1 = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLockAxes1 = { UE4CodeGen_Private::EPropertyClass::Bool, "bLockAxes1", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UDistributionVectorUniformCurve), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bLockAxes1_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bLockAxes1_MetaData, ARRAY_COUNT(NewProp_bLockAxes1_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstantCurve_MetaData[] = {
				{ "Category", "DistributionVectorUniformCurve" },
				{ "ModuleRelativePath", "Classes/Distributions/DistributionVectorUniformCurve.h" },
				{ "ToolTip", "Keyframe data for how output constant varies over time." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConstantCurve = { UE4CodeGen_Private::EPropertyClass::Struct, "ConstantCurve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UDistributionVectorUniformCurve, ConstantCurve), Z_Construct_UScriptStruct_FInterpCurveTwoVectors, METADATA_PARAMS(NewProp_ConstantCurve_MetaData, ARRAY_COUNT(NewProp_ConstantCurve_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseExtremes,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MirrorFlags,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LockedAxes,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bLockAxes2,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bLockAxes1,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConstantCurve,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UDistributionVectorUniformCurve>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UDistributionVectorUniformCurve::StaticClass,
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
	IMPLEMENT_CLASS(UDistributionVectorUniformCurve, 2679693089);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDistributionVectorUniformCurve(Z_Construct_UClass_UDistributionVectorUniformCurve, &UDistributionVectorUniformCurve::StaticClass, TEXT("/Script/Engine"), TEXT("UDistributionVectorUniformCurve"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDistributionVectorUniformCurve);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
