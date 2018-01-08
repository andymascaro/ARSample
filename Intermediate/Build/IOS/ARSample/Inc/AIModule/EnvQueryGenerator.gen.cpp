// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/EnvironmentQuery/EnvQueryGenerator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryGenerator() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryNode();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryItemType_NoRegister();
// End Cross Module References
	void UEnvQueryGenerator::StaticRegisterNativesUEnvQueryGenerator()
	{
	}
	UClass* Z_Construct_UClass_UEnvQueryGenerator_NoRegister()
	{
		return UEnvQueryGenerator::StaticClass();
	}
	UClass* Z_Construct_UClass_UEnvQueryGenerator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UEnvQueryNode,
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "Category", "Generators" },
				{ "IncludePath", "EnvironmentQuery/EnvQueryGenerator.h" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryGenerator.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoSortTests_MetaData[] = {
				{ "Category", "Option" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryGenerator.h" },
				{ "ToolTip", "if set, tests will be automatically sorted for best performance before running query" },
			};
#endif
			auto NewProp_bAutoSortTests_SetBit = [](void* Obj){ ((UEnvQueryGenerator*)Obj)->bAutoSortTests = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoSortTests = { UE4CodeGen_Private::EPropertyClass::Bool, "bAutoSortTests", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000010001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UEnvQueryGenerator), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAutoSortTests_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAutoSortTests_MetaData, ARRAY_COUNT(NewProp_bAutoSortTests_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemType_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryGenerator.h" },
				{ "ToolTip", "type of generated items" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_ItemType = { UE4CodeGen_Private::EPropertyClass::Class, "ItemType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000000, 1, nullptr, STRUCT_OFFSET(UEnvQueryGenerator, ItemType), Z_Construct_UClass_UEnvQueryItemType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_ItemType_MetaData, ARRAY_COUNT(NewProp_ItemType_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OptionName_MetaData[] = {
				{ "Category", "Option" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryGenerator.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_OptionName = { UE4CodeGen_Private::EPropertyClass::Str, "OptionName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010001, 1, nullptr, STRUCT_OFFSET(UEnvQueryGenerator, OptionName), METADATA_PARAMS(NewProp_OptionName_MetaData, ARRAY_COUNT(NewProp_OptionName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAutoSortTests,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ItemType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OptionName,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UEnvQueryGenerator>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UEnvQueryGenerator::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00101081u,
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
	IMPLEMENT_CLASS(UEnvQueryGenerator, 3511600769);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnvQueryGenerator(Z_Construct_UClass_UEnvQueryGenerator, &UEnvQueryGenerator::StaticClass, TEXT("/Script/AIModule"), TEXT("UEnvQueryGenerator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryGenerator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
