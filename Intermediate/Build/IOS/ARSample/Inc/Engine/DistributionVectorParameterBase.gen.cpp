// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Distributions/DistributionVectorParameterBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDistributionVectorParameterBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDistributionVectorParameterBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDistributionVectorParameterBase();
	ENGINE_API UClass* Z_Construct_UClass_UDistributionVectorConstant();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_DistributionParamMode();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void UDistributionVectorParameterBase::StaticRegisterNativesUDistributionVectorParameterBase()
	{
	}
	UClass* Z_Construct_UClass_UDistributionVectorParameterBase_NoRegister()
	{
		return UDistributionVectorParameterBase::StaticClass();
	}
	UClass* Z_Construct_UClass_UDistributionVectorParameterBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UDistributionVectorConstant,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Object Object Object" },
				{ "IncludePath", "Distributions/DistributionVectorParameterBase.h" },
				{ "ModuleRelativePath", "Classes/Distributions/DistributionVectorParameterBase.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParamModes_MetaData[] = {
				{ "Category", "DistributionVectorParameterBase" },
				{ "ModuleRelativePath", "Classes/Distributions/DistributionVectorParameterBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ParamModes = { UE4CodeGen_Private::EPropertyClass::Byte, "ParamModes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, CPP_ARRAY_DIM(ParamModes, UDistributionVectorParameterBase), nullptr, STRUCT_OFFSET(UDistributionVectorParameterBase, ParamModes), Z_Construct_UEnum_Engine_DistributionParamMode, METADATA_PARAMS(NewProp_ParamModes_MetaData, ARRAY_COUNT(NewProp_ParamModes_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxOutput_MetaData[] = {
				{ "Category", "DistributionVectorParameterBase" },
				{ "ModuleRelativePath", "Classes/Distributions/DistributionVectorParameterBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaxOutput = { UE4CodeGen_Private::EPropertyClass::Struct, "MaxOutput", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UDistributionVectorParameterBase, MaxOutput), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_MaxOutput_MetaData, ARRAY_COUNT(NewProp_MaxOutput_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinOutput_MetaData[] = {
				{ "Category", "DistributionVectorParameterBase" },
				{ "ModuleRelativePath", "Classes/Distributions/DistributionVectorParameterBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_MinOutput = { UE4CodeGen_Private::EPropertyClass::Struct, "MinOutput", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UDistributionVectorParameterBase, MinOutput), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_MinOutput_MetaData, ARRAY_COUNT(NewProp_MinOutput_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxInput_MetaData[] = {
				{ "Category", "DistributionVectorParameterBase" },
				{ "ModuleRelativePath", "Classes/Distributions/DistributionVectorParameterBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaxInput = { UE4CodeGen_Private::EPropertyClass::Struct, "MaxInput", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UDistributionVectorParameterBase, MaxInput), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_MaxInput_MetaData, ARRAY_COUNT(NewProp_MaxInput_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinInput_MetaData[] = {
				{ "Category", "DistributionVectorParameterBase" },
				{ "ModuleRelativePath", "Classes/Distributions/DistributionVectorParameterBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_MinInput = { UE4CodeGen_Private::EPropertyClass::Struct, "MinInput", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UDistributionVectorParameterBase, MinInput), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_MinInput_MetaData, ARRAY_COUNT(NewProp_MinInput_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[] = {
				{ "Category", "DistributionVectorParameterBase" },
				{ "ModuleRelativePath", "Classes/Distributions/DistributionVectorParameterBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName = { UE4CodeGen_Private::EPropertyClass::Name, "ParameterName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UDistributionVectorParameterBase, ParameterName), METADATA_PARAMS(NewProp_ParameterName_MetaData, ARRAY_COUNT(NewProp_ParameterName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParamModes,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxOutput,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MinOutput,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxInput,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MinInput,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParameterName,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UDistributionVectorParameterBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UDistributionVectorParameterBase::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00303081u,
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
	IMPLEMENT_CLASS(UDistributionVectorParameterBase, 692838335);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDistributionVectorParameterBase(Z_Construct_UClass_UDistributionVectorParameterBase, &UDistributionVectorParameterBase::StaticClass, TEXT("/Script/Engine"), TEXT("UDistributionVectorParameterBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDistributionVectorParameterBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
