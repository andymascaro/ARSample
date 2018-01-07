// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Distributions/DistributionVectorConstant.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDistributionVectorConstant() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDistributionVectorConstant_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDistributionVectorConstant();
	ENGINE_API UClass* Z_Construct_UClass_UDistributionVector();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDistributionVectorLockFlags();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void UDistributionVectorConstant::StaticRegisterNativesUDistributionVectorConstant()
	{
	}
	UClass* Z_Construct_UClass_UDistributionVectorConstant_NoRegister()
	{
		return UDistributionVectorConstant::StaticClass();
	}
	UClass* Z_Construct_UClass_UDistributionVectorConstant()
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
				{ "IncludePath", "Distributions/DistributionVectorConstant.h" },
				{ "ModuleRelativePath", "Classes/Distributions/DistributionVectorConstant.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LockedAxes_MetaData[] = {
				{ "Category", "DistributionVectorConstant" },
				{ "ModuleRelativePath", "Classes/Distributions/DistributionVectorConstant.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_LockedAxes = { UE4CodeGen_Private::EPropertyClass::Byte, "LockedAxes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UDistributionVectorConstant, LockedAxes), Z_Construct_UEnum_Engine_EDistributionVectorLockFlags, METADATA_PARAMS(NewProp_LockedAxes_MetaData, ARRAY_COUNT(NewProp_LockedAxes_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLockAxes_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Distributions/DistributionVectorConstant.h" },
				{ "ToolTip", "If true, X == Y == Z ie. only one degree of freedom. If false, each axis is picked independently." },
			};
#endif
			auto NewProp_bLockAxes_SetBit = [](void* Obj){ ((UDistributionVectorConstant*)Obj)->bLockAxes = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLockAxes = { UE4CodeGen_Private::EPropertyClass::Bool, "bLockAxes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UDistributionVectorConstant), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bLockAxes_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bLockAxes_MetaData, ARRAY_COUNT(NewProp_bLockAxes_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Constant_MetaData[] = {
				{ "Category", "DistributionVectorConstant" },
				{ "ModuleRelativePath", "Classes/Distributions/DistributionVectorConstant.h" },
				{ "ToolTip", "This FVector will be returned for all input times." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Constant = { UE4CodeGen_Private::EPropertyClass::Struct, "Constant", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UDistributionVectorConstant, Constant), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_Constant_MetaData, ARRAY_COUNT(NewProp_Constant_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LockedAxes,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bLockAxes,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Constant,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UDistributionVectorConstant>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UDistributionVectorConstant::StaticClass,
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
	IMPLEMENT_CLASS(UDistributionVectorConstant, 1743991260);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDistributionVectorConstant(Z_Construct_UClass_UDistributionVectorConstant, &UDistributionVectorConstant::StaticClass, TEXT("/Script/Engine"), TEXT("UDistributionVectorConstant"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDistributionVectorConstant);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
