// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/DataProviders/AIDataProvider_Random.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIDataProvider_Random() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UAIDataProvider_Random_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAIDataProvider_Random();
	AIMODULE_API UClass* Z_Construct_UClass_UAIDataProvider_QueryParams();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UAIDataProvider_Random::StaticRegisterNativesUAIDataProvider_Random()
	{
	}
	UClass* Z_Construct_UClass_UAIDataProvider_Random_NoRegister()
	{
		return UAIDataProvider_Random::StaticClass();
	}
	UClass* Z_Construct_UClass_UAIDataProvider_Random()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UAIDataProvider_QueryParams,
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "AutoExpandCategories", "Provider" },
				{ "DisplayName", "Random number" },
				{ "IncludePath", "DataProviders/AIDataProvider_Random.h" },
				{ "ModuleRelativePath", "Classes/DataProviders/AIDataProvider_Random.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInteger_MetaData[] = {
				{ "Category", "AI" },
				{ "ModuleRelativePath", "Classes/DataProviders/AIDataProvider_Random.h" },
			};
#endif
			auto NewProp_bInteger_SetBit = [](void* Obj){ ((UAIDataProvider_Random*)Obj)->bInteger = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInteger = { UE4CodeGen_Private::EPropertyClass::Bool, "bInteger", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UAIDataProvider_Random), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bInteger_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bInteger_MetaData, ARRAY_COUNT(NewProp_bInteger_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[] = {
				{ "Category", "AI" },
				{ "ModuleRelativePath", "Classes/DataProviders/AIDataProvider_Random.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Max = { UE4CodeGen_Private::EPropertyClass::Float, "Max", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UAIDataProvider_Random, Max), METADATA_PARAMS(NewProp_Max_MetaData, ARRAY_COUNT(NewProp_Max_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[] = {
				{ "Category", "AI" },
				{ "ModuleRelativePath", "Classes/DataProviders/AIDataProvider_Random.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Min = { UE4CodeGen_Private::EPropertyClass::Float, "Min", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UAIDataProvider_Random, Min), METADATA_PARAMS(NewProp_Min_MetaData, ARRAY_COUNT(NewProp_Min_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bInteger,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Max,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Min,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAIDataProvider_Random>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAIDataProvider_Random::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00003080u,
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
	IMPLEMENT_CLASS(UAIDataProvider_Random, 71254074);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAIDataProvider_Random(Z_Construct_UClass_UAIDataProvider_Random, &UAIDataProvider_Random::StaticClass, TEXT("/Script/AIModule"), TEXT("UAIDataProvider_Random"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAIDataProvider_Random);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
