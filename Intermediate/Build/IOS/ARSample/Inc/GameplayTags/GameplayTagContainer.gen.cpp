// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/GameplayTagContainer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayTagContainer() {}
// Cross Module References
	GAMEPLAYTAGS_API UEnum* Z_Construct_UEnum_GameplayTags_EGameplayTagQueryExprType();
	UPackage* Z_Construct_UPackage__Script_GameplayTags();
	GAMEPLAYTAGS_API UEnum* Z_Construct_UEnum_GameplayTags_EGameplayContainerMatchType();
	GAMEPLAYTAGS_API UEnum* Z_Construct_UEnum_GameplayTags_EGameplayTagMatchType();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagQuery();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagCreationWidgetHelper();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagReferenceHelper();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UEditableGameplayTagQuery_NoRegister();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UEditableGameplayTagQuery();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoRegister();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UEditableGameplayTagQueryExpression();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyTagsMatch_NoRegister();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyTagsMatch();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllTagsMatch_NoRegister();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllTagsMatch();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoTagsMatch_NoRegister();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoTagsMatch();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyExprMatch_NoRegister();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyExprMatch();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllExprMatch_NoRegister();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllExprMatch();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoExprMatch_NoRegister();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoExprMatch();
// End Cross Module References
	static UEnum* EGameplayTagQueryExprType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GameplayTags_EGameplayTagQueryExprType, Z_Construct_UPackage__Script_GameplayTags(), TEXT("EGameplayTagQueryExprType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGameplayTagQueryExprType(EGameplayTagQueryExprType_StaticEnum, TEXT("/Script/GameplayTags"), TEXT("EGameplayTagQueryExprType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GameplayTags_EGameplayTagQueryExprType_CRC() { return 3046996100U; }
	UEnum* Z_Construct_UEnum_GameplayTags_EGameplayTagQueryExprType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayTags();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGameplayTagQueryExprType"), 0, Get_Z_Construct_UEnum_GameplayTags_EGameplayTagQueryExprType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGameplayTagQueryExprType::Undefined", (int64)EGameplayTagQueryExprType::Undefined },
				{ "EGameplayTagQueryExprType::AnyTagsMatch", (int64)EGameplayTagQueryExprType::AnyTagsMatch },
				{ "EGameplayTagQueryExprType::AllTagsMatch", (int64)EGameplayTagQueryExprType::AllTagsMatch },
				{ "EGameplayTagQueryExprType::NoTagsMatch", (int64)EGameplayTagQueryExprType::NoTagsMatch },
				{ "EGameplayTagQueryExprType::AnyExprMatch", (int64)EGameplayTagQueryExprType::AnyExprMatch },
				{ "EGameplayTagQueryExprType::AllExprMatch", (int64)EGameplayTagQueryExprType::AllExprMatch },
				{ "EGameplayTagQueryExprType::NoExprMatch", (int64)EGameplayTagQueryExprType::NoExprMatch },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameplayTagContainer.h" },
				{ "ToolTip", "Enumerates the list of supported query expression types." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GameplayTags,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EGameplayTagQueryExprType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EGameplayTagQueryExprType::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EGameplayContainerMatchType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GameplayTags_EGameplayContainerMatchType, Z_Construct_UPackage__Script_GameplayTags(), TEXT("EGameplayContainerMatchType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGameplayContainerMatchType(EGameplayContainerMatchType_StaticEnum, TEXT("/Script/GameplayTags"), TEXT("EGameplayContainerMatchType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GameplayTags_EGameplayContainerMatchType_CRC() { return 77078203U; }
	UEnum* Z_Construct_UEnum_GameplayTags_EGameplayContainerMatchType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayTags();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGameplayContainerMatchType"), 0, Get_Z_Construct_UEnum_GameplayTags_EGameplayContainerMatchType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGameplayContainerMatchType::Any", (int64)EGameplayContainerMatchType::Any },
				{ "EGameplayContainerMatchType::All", (int64)EGameplayContainerMatchType::All },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "All.ToolTip", "Means the filter is populated by any tag matches in this container." },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/GameplayTagContainer.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GameplayTags,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EGameplayContainerMatchType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EGameplayContainerMatchType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EGameplayTagMatchType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GameplayTags_EGameplayTagMatchType, Z_Construct_UPackage__Script_GameplayTags(), TEXT("EGameplayTagMatchType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGameplayTagMatchType(EGameplayTagMatchType_StaticEnum, TEXT("/Script/GameplayTags"), TEXT("EGameplayTagMatchType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GameplayTags_EGameplayTagMatchType_CRC() { return 2643131969U; }
	UEnum* Z_Construct_UEnum_GameplayTags_EGameplayTagMatchType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayTags();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGameplayTagMatchType"), 0, Get_Z_Construct_UEnum_GameplayTags_EGameplayTagMatchType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGameplayTagMatchType::Explicit", (int64)EGameplayTagMatchType::Explicit },
				{ "EGameplayTagMatchType::IncludeParentTags", (int64)EGameplayTagMatchType::IncludeParentTags },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludeParentTags.ToolTip", "This will check for a match against just this tag" },
				{ "ModuleRelativePath", "Classes/GameplayTagContainer.h" },
				{ "ToolTip", "DEPRECATED ENUMS" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GameplayTags,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EGameplayTagMatchType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EGameplayTagMatchType::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FGameplayTagQuery::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEPLAYTAGS_API uint32 Get_Z_Construct_UScriptStruct_FGameplayTagQuery_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayTagQuery, Z_Construct_UPackage__Script_GameplayTags(), TEXT("GameplayTagQuery"), sizeof(FGameplayTagQuery), Get_Z_Construct_UScriptStruct_FGameplayTagQuery_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameplayTagQuery(FGameplayTagQuery::StaticStruct, TEXT("/Script/GameplayTags"), TEXT("GameplayTagQuery"), false, nullptr, nullptr);
static struct FScriptStruct_GameplayTags_StaticRegisterNativesFGameplayTagQuery
{
	FScriptStruct_GameplayTags_StaticRegisterNativesFGameplayTagQuery()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GameplayTagQuery")),new UScriptStruct::TCppStructOps<FGameplayTagQuery>);
	}
} ScriptStruct_GameplayTags_StaticRegisterNativesFGameplayTagQuery;
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagQuery()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameplayTagQuery_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayTags();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameplayTagQuery"), sizeof(FGameplayTagQuery), Get_Z_Construct_UScriptStruct_FGameplayTagQuery_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HasNativeMake", "GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagQuery" },
				{ "ModuleRelativePath", "Classes/GameplayTagContainer.h" },
				{ "ToolTip", "An FGameplayTagQuery is a logical query that can be run against an FGameplayTagContainer.  A query that succeeds is said to \"match\".\nQueries are logical expressions that can test the intersection properties of another tag container (all, any, or none), or the matching state of a set of sub-expressions\n(all, any, or none). This allows queries to be arbitrarily recursive and very expressive.  For instance, if you wanted to test if a given tag container contained tags\n((A && B) || (C)) && (!D), you would construct your query in the form ALL( ANY( ALL(A,B), ALL(C) ), NONE(D) )\n\nYou can expose the query structs to Blueprints and edit them with a custom editor, or you can construct them natively in code.\n\nExample of how to build a query via code:\n    FGameplayTagQuery Q;\n    Q.BuildQuery(\n            FGameplayTagQueryExpression()\n            .AllTagsMatch()\n            .AddTag(FGameplayTag::RequestGameplayTag(FName(TEXT(\"Animal.Mammal.Dog.Corgi\"))))\n            .AddTag(FGameplayTag::RequestGameplayTag(FName(TEXT(\"Plant.Tree.Spruce\"))))\n            );\n\nQueries are internally represented as a byte stream that is memory-efficient and can be evaluated quickly at runtime.\nNote: these have an extensive details and graph pin customization for editing, so there is no need to expose the internals to Blueprints." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayTagQuery>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoDescription_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameplayTagContainer.h" },
				{ "ToolTip", "Auto-generated string describing the query" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_AutoDescription = { UE4CodeGen_Private::EPropertyClass::Str, "AutoDescription", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FGameplayTagQuery, AutoDescription), METADATA_PARAMS(NewProp_AutoDescription_MetaData, ARRAY_COUNT(NewProp_AutoDescription_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserDescription_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameplayTagContainer.h" },
				{ "ToolTip", "User-provided string describing the query" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserDescription = { UE4CodeGen_Private::EPropertyClass::Str, "UserDescription", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FGameplayTagQuery, UserDescription), METADATA_PARAMS(NewProp_UserDescription_MetaData, ARRAY_COUNT(NewProp_UserDescription_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueryTokenStream_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameplayTagContainer.h" },
				{ "ToolTip", "Stream representation of the actual hierarchical query" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_QueryTokenStream = { UE4CodeGen_Private::EPropertyClass::Array, "QueryTokenStream", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FGameplayTagQuery, QueryTokenStream), METADATA_PARAMS(NewProp_QueryTokenStream_MetaData, ARRAY_COUNT(NewProp_QueryTokenStream_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_QueryTokenStream_Inner = { UE4CodeGen_Private::EPropertyClass::Byte, "QueryTokenStream", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TagDictionary_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameplayTagContainer.h" },
				{ "ToolTip", "List of tags referenced by this entire query. Token stream stored indices into this list." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TagDictionary = { UE4CodeGen_Private::EPropertyClass::Array, "TagDictionary", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FGameplayTagQuery, TagDictionary), METADATA_PARAMS(NewProp_TagDictionary_MetaData, ARRAY_COUNT(NewProp_TagDictionary_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TagDictionary_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "TagDictionary", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TokenStreamVersion_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameplayTagContainer.h" },
				{ "ToolTip", "Versioning for future token stream protocol changes. See EGameplayTagQueryStreamVersion." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_TokenStreamVersion = { UE4CodeGen_Private::EPropertyClass::Int, "TokenStreamVersion", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FGameplayTagQuery, TokenStreamVersion), METADATA_PARAMS(NewProp_TokenStreamVersion_MetaData, ARRAY_COUNT(NewProp_TokenStreamVersion_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AutoDescription,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UserDescription,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_QueryTokenStream,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_QueryTokenStream_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TagDictionary,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TagDictionary_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TokenStreamVersion,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_GameplayTags,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"GameplayTagQuery",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FGameplayTagQuery),
				alignof(FGameplayTagQuery),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameplayTagQuery_CRC() { return 1962344711U; }
class UScriptStruct* FGameplayTagCreationWidgetHelper::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEPLAYTAGS_API uint32 Get_Z_Construct_UScriptStruct_FGameplayTagCreationWidgetHelper_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayTagCreationWidgetHelper, Z_Construct_UPackage__Script_GameplayTags(), TEXT("GameplayTagCreationWidgetHelper"), sizeof(FGameplayTagCreationWidgetHelper), Get_Z_Construct_UScriptStruct_FGameplayTagCreationWidgetHelper_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameplayTagCreationWidgetHelper(FGameplayTagCreationWidgetHelper::StaticStruct, TEXT("/Script/GameplayTags"), TEXT("GameplayTagCreationWidgetHelper"), false, nullptr, nullptr);
static struct FScriptStruct_GameplayTags_StaticRegisterNativesFGameplayTagCreationWidgetHelper
{
	FScriptStruct_GameplayTags_StaticRegisterNativesFGameplayTagCreationWidgetHelper()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GameplayTagCreationWidgetHelper")),new UScriptStruct::TCppStructOps<FGameplayTagCreationWidgetHelper>);
	}
} ScriptStruct_GameplayTags_StaticRegisterNativesFGameplayTagCreationWidgetHelper;
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagCreationWidgetHelper()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameplayTagCreationWidgetHelper_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayTags();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameplayTagCreationWidgetHelper"), sizeof(FGameplayTagCreationWidgetHelper), Get_Z_Construct_UScriptStruct_FGameplayTagCreationWidgetHelper_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameplayTagContainer.h" },
				{ "ToolTip", "Helper struct: drop this in another struct to get an embedded create new tag widget." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayTagCreationWidgetHelper>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_GameplayTags,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"GameplayTagCreationWidgetHelper",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FGameplayTagCreationWidgetHelper),
				alignof(FGameplayTagCreationWidgetHelper),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameplayTagCreationWidgetHelper_CRC() { return 426085474U; }
class UScriptStruct* FGameplayTagReferenceHelper::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEPLAYTAGS_API uint32 Get_Z_Construct_UScriptStruct_FGameplayTagReferenceHelper_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayTagReferenceHelper, Z_Construct_UPackage__Script_GameplayTags(), TEXT("GameplayTagReferenceHelper"), sizeof(FGameplayTagReferenceHelper), Get_Z_Construct_UScriptStruct_FGameplayTagReferenceHelper_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameplayTagReferenceHelper(FGameplayTagReferenceHelper::StaticStruct, TEXT("/Script/GameplayTags"), TEXT("GameplayTagReferenceHelper"), false, nullptr, nullptr);
static struct FScriptStruct_GameplayTags_StaticRegisterNativesFGameplayTagReferenceHelper
{
	FScriptStruct_GameplayTags_StaticRegisterNativesFGameplayTagReferenceHelper()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GameplayTagReferenceHelper")),new UScriptStruct::TCppStructOps<FGameplayTagReferenceHelper>);
	}
} ScriptStruct_GameplayTags_StaticRegisterNativesFGameplayTagReferenceHelper;
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagReferenceHelper()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameplayTagReferenceHelper_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayTags();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameplayTagReferenceHelper"), sizeof(FGameplayTagReferenceHelper), Get_Z_Construct_UScriptStruct_FGameplayTagReferenceHelper_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameplayTagContainer.h" },
				{ "ToolTip", "Helper struct for viewing tag references (assets that reference a tag). Drop this into a struct and set the OnGetgameplayStatName. A details customization\nwill display a tree view of assets referencing the tag" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayTagReferenceHelper>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_GameplayTags,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"GameplayTagReferenceHelper",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FGameplayTagReferenceHelper),
				alignof(FGameplayTagReferenceHelper),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameplayTagReferenceHelper_CRC() { return 3799388919U; }
class UScriptStruct* FGameplayTagContainer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEPLAYTAGS_API uint32 Get_Z_Construct_UScriptStruct_FGameplayTagContainer_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayTagContainer, Z_Construct_UPackage__Script_GameplayTags(), TEXT("GameplayTagContainer"), sizeof(FGameplayTagContainer), Get_Z_Construct_UScriptStruct_FGameplayTagContainer_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameplayTagContainer(FGameplayTagContainer::StaticStruct, TEXT("/Script/GameplayTags"), TEXT("GameplayTagContainer"), false, nullptr, nullptr);
static struct FScriptStruct_GameplayTags_StaticRegisterNativesFGameplayTagContainer
{
	FScriptStruct_GameplayTags_StaticRegisterNativesFGameplayTagContainer()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GameplayTagContainer")),new UScriptStruct::TCppStructOps<FGameplayTagContainer>);
	}
} ScriptStruct_GameplayTags_StaticRegisterNativesFGameplayTagContainer;
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameplayTagContainer_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayTags();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameplayTagContainer"), sizeof(FGameplayTagContainer), Get_Z_Construct_UScriptStruct_FGameplayTagContainer_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HasNativeBreak", "GameplayTags.BlueprintGameplayTagLibrary.BreakGameplayTagContainer" },
				{ "HasNativeMake", "GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromArray" },
				{ "ModuleRelativePath", "Classes/GameplayTagContainer.h" },
				{ "ToolTip", "A Tag Container holds a collection of FGameplayTags, tags are included explicitly by adding them, and implicitly from adding child tags" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayTagContainer>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentTags_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameplayTagContainer.h" },
				{ "ToolTip", "Array of expanded parent tags, in addition to GameplayTags. Used to accelerate parent searches. May contain duplicates in some cases" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ParentTags = { UE4CodeGen_Private::EPropertyClass::Array, "ParentTags", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000002000, 1, nullptr, STRUCT_OFFSET(FGameplayTagContainer, ParentTags), METADATA_PARAMS(NewProp_ParentTags_MetaData, ARRAY_COUNT(NewProp_ParentTags_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParentTags_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ParentTags", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameplayTags_MetaData[] = {
				{ "Category", "GameplayTags" },
				{ "ModuleRelativePath", "Classes/GameplayTagContainer.h" },
				{ "ToolTip", "Array of gameplay tags // Change to VisibleAnywhere after fixing up games" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GameplayTags = { UE4CodeGen_Private::EPropertyClass::Array, "GameplayTags", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000004, 1, nullptr, STRUCT_OFFSET(FGameplayTagContainer, GameplayTags), METADATA_PARAMS(NewProp_GameplayTags_MetaData, ARRAY_COUNT(NewProp_GameplayTags_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameplayTags_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "GameplayTags", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParentTags,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParentTags_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GameplayTags,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GameplayTags_Inner,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_GameplayTags,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"GameplayTagContainer",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FGameplayTagContainer),
				alignof(FGameplayTagContainer),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameplayTagContainer_CRC() { return 3558587296U; }
class UScriptStruct* FGameplayTag::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEPLAYTAGS_API uint32 Get_Z_Construct_UScriptStruct_FGameplayTag_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayTag, Z_Construct_UPackage__Script_GameplayTags(), TEXT("GameplayTag"), sizeof(FGameplayTag), Get_Z_Construct_UScriptStruct_FGameplayTag_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameplayTag(FGameplayTag::StaticStruct, TEXT("/Script/GameplayTags"), TEXT("GameplayTag"), false, nullptr, nullptr);
static struct FScriptStruct_GameplayTags_StaticRegisterNativesFGameplayTag
{
	FScriptStruct_GameplayTags_StaticRegisterNativesFGameplayTag()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GameplayTag")),new UScriptStruct::TCppStructOps<FGameplayTag>);
	}
} ScriptStruct_GameplayTags_StaticRegisterNativesFGameplayTag;
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameplayTag_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayTags();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameplayTag"), sizeof(FGameplayTag), Get_Z_Construct_UScriptStruct_FGameplayTag_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HasNativeBreak", "GameplayTags.BlueprintGameplayTagLibrary.GetTagName" },
				{ "HasNativeMake", "GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTag" },
				{ "ModuleRelativePath", "Classes/GameplayTagContainer.h" },
				{ "ToolTip", "A single gameplay tag, which represents a hierarchical name of the form x.y that is registered in the GameplayTagsManager" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayTag>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TagName_MetaData[] = {
				{ "Category", "GameplayTags" },
				{ "ModuleRelativePath", "Classes/GameplayTagContainer.h" },
				{ "ToolTip", "This Tags Name" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_TagName = { UE4CodeGen_Private::EPropertyClass::Name, "TagName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000020001, 1, nullptr, STRUCT_OFFSET(FGameplayTag, TagName), METADATA_PARAMS(NewProp_TagName_MetaData, ARRAY_COUNT(NewProp_TagName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TagName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_GameplayTags,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"GameplayTag",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FGameplayTag),
				alignof(FGameplayTag),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameplayTag_CRC() { return 4003098223U; }
	void UEditableGameplayTagQuery::StaticRegisterNativesUEditableGameplayTagQuery()
	{
	}
	UClass* Z_Construct_UClass_UEditableGameplayTagQuery_NoRegister()
	{
		return UEditableGameplayTagQuery::StaticClass();
	}
	UClass* Z_Construct_UClass_UEditableGameplayTagQuery()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_GameplayTags,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "GameplayTagContainer.h" },
				{ "ModuleRelativePath", "Classes/GameplayTagContainer.h" },
				{ "ToolTip", "This is an editor-only representation of a query, designed to be editable with a typical property window.\nTo edit a query in the editor, an FGameplayTagQuery is converted to a set of UObjects and edited,  When finished,\nthe query struct is rewritten and these UObjects are discarded.\nThis query representation is not intended for runtime use." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TagQueryExportText_Helper_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameplayTagContainer.h" },
				{ "ToolTip", "Property to hold a gameplay tag query so we can use the exporttext path to get a string representation." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TagQueryExportText_Helper = { UE4CodeGen_Private::EPropertyClass::Struct, "TagQueryExportText_Helper", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UEditableGameplayTagQuery, TagQueryExportText_Helper), Z_Construct_UScriptStruct_FGameplayTagQuery, METADATA_PARAMS(NewProp_TagQueryExportText_Helper_MetaData, ARRAY_COUNT(NewProp_TagQueryExportText_Helper_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootExpression_MetaData[] = {
				{ "Category", "Query" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/GameplayTagContainer.h" },
				{ "ToolTip", "The base expression of this query." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RootExpression = { UE4CodeGen_Private::EPropertyClass::Object, "RootExpression", RF_Public|RF_Transient|RF_MarkAsNative, 0x0012000000090009, 1, nullptr, STRUCT_OFFSET(UEditableGameplayTagQuery, RootExpression), Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoRegister, METADATA_PARAMS(NewProp_RootExpression_MetaData, ARRAY_COUNT(NewProp_RootExpression_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserDescription_MetaData[] = {
				{ "Category", "Query" },
				{ "ModuleRelativePath", "Classes/GameplayTagContainer.h" },
				{ "ToolTip", "User-supplied description, shown in property details. Auto-generated description is shown if not supplied." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserDescription = { UE4CodeGen_Private::EPropertyClass::Str, "UserDescription", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010001, 1, nullptr, STRUCT_OFFSET(UEditableGameplayTagQuery, UserDescription), METADATA_PARAMS(NewProp_UserDescription_MetaData, ARRAY_COUNT(NewProp_UserDescription_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TagQueryExportText_Helper,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RootExpression,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UserDescription,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UEditableGameplayTagQuery>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UEditableGameplayTagQuery::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00903088u,
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
	IMPLEMENT_CLASS(UEditableGameplayTagQuery, 1366591202);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEditableGameplayTagQuery(Z_Construct_UClass_UEditableGameplayTagQuery, &UEditableGameplayTagQuery::StaticClass, TEXT("/Script/GameplayTags"), TEXT("UEditableGameplayTagQuery"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditableGameplayTagQuery);
	void UEditableGameplayTagQueryExpression::StaticRegisterNativesUEditableGameplayTagQueryExpression()
	{
	}
	UClass* Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoRegister()
	{
		return UEditableGameplayTagQueryExpression::StaticClass();
	}
	UClass* Z_Construct_UClass_UEditableGameplayTagQueryExpression()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_GameplayTags,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "GameplayTagContainer.h" },
				{ "ModuleRelativePath", "Classes/GameplayTagContainer.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UEditableGameplayTagQueryExpression>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UEditableGameplayTagQueryExpression::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00103089u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEditableGameplayTagQueryExpression, 1228191660);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEditableGameplayTagQueryExpression(Z_Construct_UClass_UEditableGameplayTagQueryExpression, &UEditableGameplayTagQueryExpression::StaticClass, TEXT("/Script/GameplayTags"), TEXT("UEditableGameplayTagQueryExpression"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditableGameplayTagQueryExpression);
	void UEditableGameplayTagQueryExpression_AnyTagsMatch::StaticRegisterNativesUEditableGameplayTagQueryExpression_AnyTagsMatch()
	{
	}
	UClass* Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyTagsMatch_NoRegister()
	{
		return UEditableGameplayTagQueryExpression_AnyTagsMatch::StaticClass();
	}
	UClass* Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyTagsMatch()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UEditableGameplayTagQueryExpression,
				(UObject* (*)())Z_Construct_UPackage__Script_GameplayTags,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "DisplayName", "Any Tags Match" },
				{ "IncludePath", "GameplayTagContainer.h" },
				{ "ModuleRelativePath", "Classes/GameplayTagContainer.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[] = {
				{ "Category", "Expr" },
				{ "ModuleRelativePath", "Classes/GameplayTagContainer.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tags = { UE4CodeGen_Private::EPropertyClass::Struct, "Tags", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010001, 1, nullptr, STRUCT_OFFSET(UEditableGameplayTagQueryExpression_AnyTagsMatch, Tags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(NewProp_Tags_MetaData, ARRAY_COUNT(NewProp_Tags_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Tags,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UEditableGameplayTagQueryExpression_AnyTagsMatch>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UEditableGameplayTagQueryExpression_AnyTagsMatch::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00003088u,
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
	IMPLEMENT_CLASS(UEditableGameplayTagQueryExpression_AnyTagsMatch, 2586717347);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEditableGameplayTagQueryExpression_AnyTagsMatch(Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyTagsMatch, &UEditableGameplayTagQueryExpression_AnyTagsMatch::StaticClass, TEXT("/Script/GameplayTags"), TEXT("UEditableGameplayTagQueryExpression_AnyTagsMatch"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditableGameplayTagQueryExpression_AnyTagsMatch);
	void UEditableGameplayTagQueryExpression_AllTagsMatch::StaticRegisterNativesUEditableGameplayTagQueryExpression_AllTagsMatch()
	{
	}
	UClass* Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllTagsMatch_NoRegister()
	{
		return UEditableGameplayTagQueryExpression_AllTagsMatch::StaticClass();
	}
	UClass* Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllTagsMatch()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UEditableGameplayTagQueryExpression,
				(UObject* (*)())Z_Construct_UPackage__Script_GameplayTags,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "DisplayName", "All Tags Match" },
				{ "IncludePath", "GameplayTagContainer.h" },
				{ "ModuleRelativePath", "Classes/GameplayTagContainer.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[] = {
				{ "Category", "Expr" },
				{ "ModuleRelativePath", "Classes/GameplayTagContainer.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tags = { UE4CodeGen_Private::EPropertyClass::Struct, "Tags", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010001, 1, nullptr, STRUCT_OFFSET(UEditableGameplayTagQueryExpression_AllTagsMatch, Tags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(NewProp_Tags_MetaData, ARRAY_COUNT(NewProp_Tags_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Tags,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UEditableGameplayTagQueryExpression_AllTagsMatch>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UEditableGameplayTagQueryExpression_AllTagsMatch::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00003088u,
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
	IMPLEMENT_CLASS(UEditableGameplayTagQueryExpression_AllTagsMatch, 3029654235);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEditableGameplayTagQueryExpression_AllTagsMatch(Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllTagsMatch, &UEditableGameplayTagQueryExpression_AllTagsMatch::StaticClass, TEXT("/Script/GameplayTags"), TEXT("UEditableGameplayTagQueryExpression_AllTagsMatch"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditableGameplayTagQueryExpression_AllTagsMatch);
	void UEditableGameplayTagQueryExpression_NoTagsMatch::StaticRegisterNativesUEditableGameplayTagQueryExpression_NoTagsMatch()
	{
	}
	UClass* Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoTagsMatch_NoRegister()
	{
		return UEditableGameplayTagQueryExpression_NoTagsMatch::StaticClass();
	}
	UClass* Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoTagsMatch()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UEditableGameplayTagQueryExpression,
				(UObject* (*)())Z_Construct_UPackage__Script_GameplayTags,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "DisplayName", "No Tags Match" },
				{ "IncludePath", "GameplayTagContainer.h" },
				{ "ModuleRelativePath", "Classes/GameplayTagContainer.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[] = {
				{ "Category", "Expr" },
				{ "ModuleRelativePath", "Classes/GameplayTagContainer.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tags = { UE4CodeGen_Private::EPropertyClass::Struct, "Tags", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010001, 1, nullptr, STRUCT_OFFSET(UEditableGameplayTagQueryExpression_NoTagsMatch, Tags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(NewProp_Tags_MetaData, ARRAY_COUNT(NewProp_Tags_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Tags,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UEditableGameplayTagQueryExpression_NoTagsMatch>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UEditableGameplayTagQueryExpression_NoTagsMatch::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00003088u,
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
	IMPLEMENT_CLASS(UEditableGameplayTagQueryExpression_NoTagsMatch, 2368325571);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEditableGameplayTagQueryExpression_NoTagsMatch(Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoTagsMatch, &UEditableGameplayTagQueryExpression_NoTagsMatch::StaticClass, TEXT("/Script/GameplayTags"), TEXT("UEditableGameplayTagQueryExpression_NoTagsMatch"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditableGameplayTagQueryExpression_NoTagsMatch);
	void UEditableGameplayTagQueryExpression_AnyExprMatch::StaticRegisterNativesUEditableGameplayTagQueryExpression_AnyExprMatch()
	{
	}
	UClass* Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyExprMatch_NoRegister()
	{
		return UEditableGameplayTagQueryExpression_AnyExprMatch::StaticClass();
	}
	UClass* Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyExprMatch()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UEditableGameplayTagQueryExpression,
				(UObject* (*)())Z_Construct_UPackage__Script_GameplayTags,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "DisplayName", "Any Expressions Match" },
				{ "IncludePath", "GameplayTagContainer.h" },
				{ "ModuleRelativePath", "Classes/GameplayTagContainer.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Expressions_MetaData[] = {
				{ "Category", "Expr" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/GameplayTagContainer.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Expressions = { UE4CodeGen_Private::EPropertyClass::Array, "Expressions", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000009, 1, nullptr, STRUCT_OFFSET(UEditableGameplayTagQueryExpression_AnyExprMatch, Expressions), METADATA_PARAMS(NewProp_Expressions_MetaData, ARRAY_COUNT(NewProp_Expressions_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Expressions_Inner_MetaData[] = {
				{ "Category", "Expr" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/GameplayTagContainer.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Expressions_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Expressions", RF_Public|RF_Transient|RF_MarkAsNative, 0x0002000000080008, 1, nullptr, 0, Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoRegister, METADATA_PARAMS(NewProp_Expressions_Inner_MetaData, ARRAY_COUNT(NewProp_Expressions_Inner_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Expressions,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Expressions_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UEditableGameplayTagQueryExpression_AnyExprMatch>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UEditableGameplayTagQueryExpression_AnyExprMatch::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00803088u,
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
	IMPLEMENT_CLASS(UEditableGameplayTagQueryExpression_AnyExprMatch, 3773073577);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEditableGameplayTagQueryExpression_AnyExprMatch(Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyExprMatch, &UEditableGameplayTagQueryExpression_AnyExprMatch::StaticClass, TEXT("/Script/GameplayTags"), TEXT("UEditableGameplayTagQueryExpression_AnyExprMatch"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditableGameplayTagQueryExpression_AnyExprMatch);
	void UEditableGameplayTagQueryExpression_AllExprMatch::StaticRegisterNativesUEditableGameplayTagQueryExpression_AllExprMatch()
	{
	}
	UClass* Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllExprMatch_NoRegister()
	{
		return UEditableGameplayTagQueryExpression_AllExprMatch::StaticClass();
	}
	UClass* Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllExprMatch()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UEditableGameplayTagQueryExpression,
				(UObject* (*)())Z_Construct_UPackage__Script_GameplayTags,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "DisplayName", "All Expressions Match" },
				{ "IncludePath", "GameplayTagContainer.h" },
				{ "ModuleRelativePath", "Classes/GameplayTagContainer.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Expressions_MetaData[] = {
				{ "Category", "Expr" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/GameplayTagContainer.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Expressions = { UE4CodeGen_Private::EPropertyClass::Array, "Expressions", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000009, 1, nullptr, STRUCT_OFFSET(UEditableGameplayTagQueryExpression_AllExprMatch, Expressions), METADATA_PARAMS(NewProp_Expressions_MetaData, ARRAY_COUNT(NewProp_Expressions_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Expressions_Inner_MetaData[] = {
				{ "Category", "Expr" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/GameplayTagContainer.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Expressions_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Expressions", RF_Public|RF_Transient|RF_MarkAsNative, 0x0002000000080008, 1, nullptr, 0, Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoRegister, METADATA_PARAMS(NewProp_Expressions_Inner_MetaData, ARRAY_COUNT(NewProp_Expressions_Inner_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Expressions,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Expressions_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UEditableGameplayTagQueryExpression_AllExprMatch>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UEditableGameplayTagQueryExpression_AllExprMatch::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00803088u,
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
	IMPLEMENT_CLASS(UEditableGameplayTagQueryExpression_AllExprMatch, 254344206);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEditableGameplayTagQueryExpression_AllExprMatch(Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllExprMatch, &UEditableGameplayTagQueryExpression_AllExprMatch::StaticClass, TEXT("/Script/GameplayTags"), TEXT("UEditableGameplayTagQueryExpression_AllExprMatch"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditableGameplayTagQueryExpression_AllExprMatch);
	void UEditableGameplayTagQueryExpression_NoExprMatch::StaticRegisterNativesUEditableGameplayTagQueryExpression_NoExprMatch()
	{
	}
	UClass* Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoExprMatch_NoRegister()
	{
		return UEditableGameplayTagQueryExpression_NoExprMatch::StaticClass();
	}
	UClass* Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoExprMatch()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UEditableGameplayTagQueryExpression,
				(UObject* (*)())Z_Construct_UPackage__Script_GameplayTags,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "DisplayName", "No Expressions Match" },
				{ "IncludePath", "GameplayTagContainer.h" },
				{ "ModuleRelativePath", "Classes/GameplayTagContainer.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Expressions_MetaData[] = {
				{ "Category", "Expr" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/GameplayTagContainer.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Expressions = { UE4CodeGen_Private::EPropertyClass::Array, "Expressions", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000009, 1, nullptr, STRUCT_OFFSET(UEditableGameplayTagQueryExpression_NoExprMatch, Expressions), METADATA_PARAMS(NewProp_Expressions_MetaData, ARRAY_COUNT(NewProp_Expressions_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Expressions_Inner_MetaData[] = {
				{ "Category", "Expr" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/GameplayTagContainer.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Expressions_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Expressions", RF_Public|RF_Transient|RF_MarkAsNative, 0x0002000000080008, 1, nullptr, 0, Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoRegister, METADATA_PARAMS(NewProp_Expressions_Inner_MetaData, ARRAY_COUNT(NewProp_Expressions_Inner_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Expressions,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Expressions_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UEditableGameplayTagQueryExpression_NoExprMatch>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UEditableGameplayTagQueryExpression_NoExprMatch::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00803088u,
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
	IMPLEMENT_CLASS(UEditableGameplayTagQueryExpression_NoExprMatch, 1159039730);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEditableGameplayTagQueryExpression_NoExprMatch(Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoExprMatch, &UEditableGameplayTagQueryExpression_NoExprMatch::StaticClass, TEXT("/Script/GameplayTags"), TEXT("UEditableGameplayTagQueryExpression_NoExprMatch"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditableGameplayTagQueryExpression_NoExprMatch);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
