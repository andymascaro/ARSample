// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_Composite.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryGenerator_Composite() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator_Composite_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator_Composite();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryItemType_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator_NoRegister();
// End Cross Module References
	void UEnvQueryGenerator_Composite::StaticRegisterNativesUEnvQueryGenerator_Composite()
	{
	}
	UClass* Z_Construct_UClass_UEnvQueryGenerator_Composite_NoRegister()
	{
		return UEnvQueryGenerator_Composite::StaticClass();
	}
	UClass* Z_Construct_UClass_UEnvQueryGenerator_Composite()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UEnvQueryGenerator,
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "Composite" },
				{ "IncludePath", "EnvironmentQuery/Generators/EnvQueryGenerator_Composite.h" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_Composite.h" },
				{ "ToolTip", "Composite generator allows using multiple generators in single query option\nAll child generators must produce exactly the same item type!" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForcedItemType_MetaData[] = {
				{ "Category", "Generator" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_Composite.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_ForcedItemType = { UE4CodeGen_Private::EPropertyClass::Class, "ForcedItemType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014040000010001, 1, nullptr, STRUCT_OFFSET(UEnvQueryGenerator_Composite, ForcedItemType), Z_Construct_UClass_UEnvQueryItemType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_ForcedItemType_MetaData, ARRAY_COUNT(NewProp_ForcedItemType_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasMatchingItemType_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_Composite.h" },
			};
#endif
			auto NewProp_bHasMatchingItemType_SetBit = [](void* Obj){ ((UEnvQueryGenerator_Composite*)Obj)->bHasMatchingItemType = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasMatchingItemType = { UE4CodeGen_Private::EPropertyClass::Bool, "bHasMatchingItemType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UEnvQueryGenerator_Composite), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bHasMatchingItemType_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bHasMatchingItemType_MetaData, ARRAY_COUNT(NewProp_bHasMatchingItemType_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowDifferentItemTypes_MetaData[] = {
				{ "Category", "Generator" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_Composite.h" },
				{ "ToolTip", "allow generators with different item types, use at own risk!\n\nWARNING:\ngenerator will use ForcedItemType for raw data, you MUST ensure proper memory layout\nchild generators will be writing to memory block through their own item types:\n- data must fit info block allocated by ForcedItemType\n- tests will read item location/properties through ForcedItemType" },
			};
#endif
			auto NewProp_bAllowDifferentItemTypes_SetBit = [](void* Obj){ ((UEnvQueryGenerator_Composite*)Obj)->bAllowDifferentItemTypes = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowDifferentItemTypes = { UE4CodeGen_Private::EPropertyClass::Bool, "bAllowDifferentItemTypes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000010001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UEnvQueryGenerator_Composite), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAllowDifferentItemTypes_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAllowDifferentItemTypes_MetaData, ARRAY_COUNT(NewProp_bAllowDifferentItemTypes_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Generators_MetaData[] = {
				{ "Category", "Generator" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_Composite.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Generators = { UE4CodeGen_Private::EPropertyClass::Array, "Generators", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000010009, 1, nullptr, STRUCT_OFFSET(UEnvQueryGenerator_Composite, Generators), METADATA_PARAMS(NewProp_Generators_MetaData, ARRAY_COUNT(NewProp_Generators_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Generators_Inner_MetaData[] = {
				{ "Category", "Generator" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_Composite.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Generators_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Generators", RF_Public|RF_Transient|RF_MarkAsNative, 0x0002000000080008, 1, nullptr, 0, Z_Construct_UClass_UEnvQueryGenerator_NoRegister, METADATA_PARAMS(NewProp_Generators_Inner_MetaData, ARRAY_COUNT(NewProp_Generators_Inner_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ForcedItemType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bHasMatchingItemType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAllowDifferentItemTypes,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Generators,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Generators_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UEnvQueryGenerator_Composite>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UEnvQueryGenerator_Composite::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00901080u,
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
	IMPLEMENT_CLASS(UEnvQueryGenerator_Composite, 2888313317);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnvQueryGenerator_Composite(Z_Construct_UClass_UEnvQueryGenerator_Composite, &UEnvQueryGenerator_Composite::StaticClass, TEXT("/Script/AIModule"), TEXT("UEnvQueryGenerator_Composite"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryGenerator_Composite);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
