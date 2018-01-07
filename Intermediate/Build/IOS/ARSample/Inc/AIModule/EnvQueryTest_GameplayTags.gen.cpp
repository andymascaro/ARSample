// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/EnvironmentQuery/Tests/EnvQueryTest_GameplayTags.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryTest_GameplayTags() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest_GameplayTags_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest_GameplayTags();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	GAMEPLAYTAGS_API UEnum* Z_Construct_UEnum_GameplayTags_EGameplayContainerMatchType();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagQuery();
// End Cross Module References
	void UEnvQueryTest_GameplayTags::StaticRegisterNativesUEnvQueryTest_GameplayTags()
	{
	}
	UClass* Z_Construct_UClass_UEnvQueryTest_GameplayTags_NoRegister()
	{
		return UEnvQueryTest_GameplayTags::StaticClass();
	}
	UClass* Z_Construct_UClass_UEnvQueryTest_GameplayTags()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UEnvQueryTest,
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "EnvironmentQuery/Tests/EnvQueryTest_GameplayTags.h" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/Tests/EnvQueryTest_GameplayTags.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameplayTags_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/Tests/EnvQueryTest_GameplayTags.h" },
				{ "ToolTip", "Deprecated property.  Used only to load old data into TagQueryToMatch." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameplayTags = { UE4CodeGen_Private::EPropertyClass::Struct, "GameplayTags", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UEnvQueryTest_GameplayTags, GameplayTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(NewProp_GameplayTags_MetaData, ARRAY_COUNT(NewProp_GameplayTags_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TagsToMatch_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/Tests/EnvQueryTest_GameplayTags.h" },
				{ "ToolTip", "Deprecated property.  Used only to load old data into TagQueryToMatch." },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TagsToMatch = { UE4CodeGen_Private::EPropertyClass::Enum, "TagsToMatch", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UEnvQueryTest_GameplayTags, TagsToMatch), Z_Construct_UEnum_GameplayTags_EGameplayContainerMatchType, METADATA_PARAMS(NewProp_TagsToMatch_MetaData, ARRAY_COUNT(NewProp_TagsToMatch_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_TagsToMatch_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUpdatedToUseQuery_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/Tests/EnvQueryTest_GameplayTags.h" },
				{ "ToolTip", "Used to determine whether the file format needs to be updated to move data into TagQueryToMatch or not." },
			};
#endif
			auto NewProp_bUpdatedToUseQuery_SetBit = [](void* Obj){ ((UEnvQueryTest_GameplayTags*)Obj)->bUpdatedToUseQuery = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdatedToUseQuery = { UE4CodeGen_Private::EPropertyClass::Bool, "bUpdatedToUseQuery", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UEnvQueryTest_GameplayTags), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUpdatedToUseQuery_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUpdatedToUseQuery_MetaData, ARRAY_COUNT(NewProp_bUpdatedToUseQuery_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TagQueryToMatch_MetaData[] = {
				{ "Category", "GameplayTagCheck" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/Tests/EnvQueryTest_GameplayTags.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TagQueryToMatch = { UE4CodeGen_Private::EPropertyClass::Struct, "TagQueryToMatch", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UEnvQueryTest_GameplayTags, TagQueryToMatch), Z_Construct_UScriptStruct_FGameplayTagQuery, METADATA_PARAMS(NewProp_TagQueryToMatch_MetaData, ARRAY_COUNT(NewProp_TagQueryToMatch_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GameplayTags,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TagsToMatch,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TagsToMatch_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUpdatedToUseQuery,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TagQueryToMatch,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UEnvQueryTest_GameplayTags>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UEnvQueryTest_GameplayTags::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880080u,
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
	IMPLEMENT_CLASS(UEnvQueryTest_GameplayTags, 3193391870);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnvQueryTest_GameplayTags(Z_Construct_UClass_UEnvQueryTest_GameplayTags, &UEnvQueryTest_GameplayTags::StaticClass, TEXT("/Script/AIModule"), TEXT("UEnvQueryTest_GameplayTags"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryTest_GameplayTags);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
