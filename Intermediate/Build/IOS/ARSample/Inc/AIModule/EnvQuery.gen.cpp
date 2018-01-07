// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/EnvironmentQuery/EnvQuery.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQuery() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQuery_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQuery();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryOption_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph_NoRegister();
// End Cross Module References
	void UEnvQuery::StaticRegisterNativesUEnvQuery()
	{
	}
	UClass* Z_Construct_UClass_UEnvQuery_NoRegister()
	{
		return UEnvQuery::StaticClass();
	}
	UClass* Z_Construct_UClass_UEnvQuery()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UDataAsset,
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "EnvironmentQuery/EnvQuery.h" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQuery.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQuery.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Options = { UE4CodeGen_Private::EPropertyClass::Array, "Options", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UEnvQuery, Options), METADATA_PARAMS(NewProp_Options_MetaData, ARRAY_COUNT(NewProp_Options_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Options_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Options", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UEnvQueryOption_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueryName_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQuery.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_QueryName = { UE4CodeGen_Private::EPropertyClass::Name, "QueryName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UEnvQuery, QueryName), METADATA_PARAMS(NewProp_QueryName_MetaData, ARRAY_COUNT(NewProp_QueryName_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EdGraph_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQuery.h" },
				{ "ToolTip", "Graph for query" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EdGraph = { UE4CodeGen_Private::EPropertyClass::Object, "EdGraph", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(UEnvQuery, EdGraph), Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(NewProp_EdGraph_MetaData, ARRAY_COUNT(NewProp_EdGraph_MetaData)) };
#endif // WITH_EDITORONLY_DATA
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Options,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Options_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_QueryName,
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EdGraph,
#endif // WITH_EDITORONLY_DATA
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UEnvQuery>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UEnvQuery::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
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
	IMPLEMENT_CLASS(UEnvQuery, 2139593194);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnvQuery(Z_Construct_UClass_UEnvQuery, &UEnvQuery::StaticClass, TEXT("/Script/AIModule"), TEXT("UEnvQuery"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQuery);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
