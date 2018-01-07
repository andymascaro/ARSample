// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Distributions/DistributionVectorUniform.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDistributionVectorUniform() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDistributionVectorUniform_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDistributionVectorUniform();
	ENGINE_API UClass* Z_Construct_UClass_UDistributionVector();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDistributionVectorMirrorFlags();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDistributionVectorLockFlags();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void UDistributionVectorUniform::StaticRegisterNativesUDistributionVectorUniform()
	{
	}
	UClass* Z_Construct_UClass_UDistributionVectorUniform_NoRegister()
	{
		return UDistributionVectorUniform::StaticClass();
	}
	UClass* Z_Construct_UClass_UDistributionVectorUniform()
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
				{ "IncludePath", "Distributions/DistributionVectorUniform.h" },
				{ "ModuleRelativePath", "Classes/Distributions/DistributionVectorUniform.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseExtremes_MetaData[] = {
				{ "Category", "DistributionVectorUniform" },
				{ "ModuleRelativePath", "Classes/Distributions/DistributionVectorUniform.h" },
			};
#endif
			auto NewProp_bUseExtremes_SetBit = [](void* Obj){ ((UDistributionVectorUniform*)Obj)->bUseExtremes = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseExtremes = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseExtremes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UDistributionVectorUniform), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseExtremes_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseExtremes_MetaData, ARRAY_COUNT(NewProp_bUseExtremes_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MirrorFlags_MetaData[] = {
				{ "Category", "DistributionVectorUniform" },
				{ "ModuleRelativePath", "Classes/Distributions/DistributionVectorUniform.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_MirrorFlags = { UE4CodeGen_Private::EPropertyClass::Byte, "MirrorFlags", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, CPP_ARRAY_DIM(MirrorFlags, UDistributionVectorUniform), nullptr, STRUCT_OFFSET(UDistributionVectorUniform, MirrorFlags), Z_Construct_UEnum_Engine_EDistributionVectorMirrorFlags, METADATA_PARAMS(NewProp_MirrorFlags_MetaData, ARRAY_COUNT(NewProp_MirrorFlags_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LockedAxes_MetaData[] = {
				{ "Category", "DistributionVectorUniform" },
				{ "ModuleRelativePath", "Classes/Distributions/DistributionVectorUniform.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_LockedAxes = { UE4CodeGen_Private::EPropertyClass::Byte, "LockedAxes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UDistributionVectorUniform, LockedAxes), Z_Construct_UEnum_Engine_EDistributionVectorLockFlags, METADATA_PARAMS(NewProp_LockedAxes_MetaData, ARRAY_COUNT(NewProp_LockedAxes_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLockAxes_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Distributions/DistributionVectorUniform.h" },
				{ "ToolTip", "If true, X == Y == Z ie. only one degree of freedom. If false, each axis is picked independently." },
			};
#endif
			auto NewProp_bLockAxes_SetBit = [](void* Obj){ ((UDistributionVectorUniform*)Obj)->bLockAxes = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLockAxes = { UE4CodeGen_Private::EPropertyClass::Bool, "bLockAxes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UDistributionVectorUniform), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bLockAxes_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bLockAxes_MetaData, ARRAY_COUNT(NewProp_bLockAxes_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[] = {
				{ "Category", "DistributionVectorUniform" },
				{ "ModuleRelativePath", "Classes/Distributions/DistributionVectorUniform.h" },
				{ "ToolTip", "Lower end of FVector magnitude range." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Min = { UE4CodeGen_Private::EPropertyClass::Struct, "Min", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UDistributionVectorUniform, Min), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_Min_MetaData, ARRAY_COUNT(NewProp_Min_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[] = {
				{ "Category", "DistributionVectorUniform" },
				{ "ModuleRelativePath", "Classes/Distributions/DistributionVectorUniform.h" },
				{ "ToolTip", "Upper end of FVector magnitude range." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Max = { UE4CodeGen_Private::EPropertyClass::Struct, "Max", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UDistributionVectorUniform, Max), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_Max_MetaData, ARRAY_COUNT(NewProp_Max_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseExtremes,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MirrorFlags,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LockedAxes,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bLockAxes,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Min,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Max,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UDistributionVectorUniform>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UDistributionVectorUniform::StaticClass,
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
	IMPLEMENT_CLASS(UDistributionVectorUniform, 1478536441);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDistributionVectorUniform(Z_Construct_UClass_UDistributionVectorUniform, &UDistributionVectorUniform::StaticClass, TEXT("/Script/Engine"), TEXT("UDistributionVectorUniform"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDistributionVectorUniform);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
