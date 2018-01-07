// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/GameplayTagsManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayTagsManager() {}
// Cross Module References
	GAMEPLAYTAGS_API UEnum* Z_Construct_UEnum_GameplayTags_EGameplayTagSourceType();
	UPackage* Z_Construct_UPackage__Script_GameplayTags();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagNode();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagSource();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagsList_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagTableRow();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagsManager_NoRegister();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagsManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
// End Cross Module References
	static UEnum* EGameplayTagSourceType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GameplayTags_EGameplayTagSourceType, Z_Construct_UPackage__Script_GameplayTags(), TEXT("EGameplayTagSourceType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGameplayTagSourceType(EGameplayTagSourceType_StaticEnum, TEXT("/Script/GameplayTags"), TEXT("EGameplayTagSourceType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GameplayTags_EGameplayTagSourceType_CRC() { return 2385823725U; }
	UEnum* Z_Construct_UEnum_GameplayTags_EGameplayTagSourceType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayTags();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGameplayTagSourceType"), 0, Get_Z_Construct_UEnum_GameplayTags_EGameplayTagSourceType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGameplayTagSourceType::Native", (int64)EGameplayTagSourceType::Native },
				{ "EGameplayTagSourceType::DefaultTagList", (int64)EGameplayTagSourceType::DefaultTagList },
				{ "EGameplayTagSourceType::TagList", (int64)EGameplayTagSourceType::TagList },
				{ "EGameplayTagSourceType::DataTable", (int64)EGameplayTagSourceType::DataTable },
				{ "EGameplayTagSourceType::Invalid", (int64)EGameplayTagSourceType::Invalid },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "DataTable.ToolTip", "Another tag list from an ini in tags.ini" },
				{ "DefaultTagList.ToolTip", "Was added from C++ code" },
				{ "Invalid.ToolTip", "From a DataTable" },
				{ "ModuleRelativePath", "Classes/GameplayTagsManager.h" },
				{ "TagList.ToolTip", "The default tag list in DefaultGameplayTags.ini" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GameplayTags,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EGameplayTagSourceType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EGameplayTagSourceType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FGameplayTagNode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEPLAYTAGS_API uint32 Get_Z_Construct_UScriptStruct_FGameplayTagNode_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayTagNode, Z_Construct_UPackage__Script_GameplayTags(), TEXT("GameplayTagNode"), sizeof(FGameplayTagNode), Get_Z_Construct_UScriptStruct_FGameplayTagNode_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameplayTagNode(FGameplayTagNode::StaticStruct, TEXT("/Script/GameplayTags"), TEXT("GameplayTagNode"), false, nullptr, nullptr);
static struct FScriptStruct_GameplayTags_StaticRegisterNativesFGameplayTagNode
{
	FScriptStruct_GameplayTags_StaticRegisterNativesFGameplayTagNode()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GameplayTagNode")),new UScriptStruct::TCppStructOps<FGameplayTagNode>);
	}
} ScriptStruct_GameplayTags_StaticRegisterNativesFGameplayTagNode;
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagNode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameplayTagNode_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayTags();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameplayTagNode"), sizeof(FGameplayTagNode), Get_Z_Construct_UScriptStruct_FGameplayTagNode_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameplayTagsManager.h" },
				{ "ToolTip", "Simple tree node for gameplay tags, this stores metadata about specific tags" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayTagNode>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_GameplayTags,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"GameplayTagNode",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FGameplayTagNode),
				alignof(FGameplayTagNode),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameplayTagNode_CRC() { return 1257022154U; }
class UScriptStruct* FGameplayTagSource::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEPLAYTAGS_API uint32 Get_Z_Construct_UScriptStruct_FGameplayTagSource_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayTagSource, Z_Construct_UPackage__Script_GameplayTags(), TEXT("GameplayTagSource"), sizeof(FGameplayTagSource), Get_Z_Construct_UScriptStruct_FGameplayTagSource_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameplayTagSource(FGameplayTagSource::StaticStruct, TEXT("/Script/GameplayTags"), TEXT("GameplayTagSource"), false, nullptr, nullptr);
static struct FScriptStruct_GameplayTags_StaticRegisterNativesFGameplayTagSource
{
	FScriptStruct_GameplayTags_StaticRegisterNativesFGameplayTagSource()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GameplayTagSource")),new UScriptStruct::TCppStructOps<FGameplayTagSource>);
	}
} ScriptStruct_GameplayTags_StaticRegisterNativesFGameplayTagSource;
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagSource()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameplayTagSource_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayTags();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameplayTagSource"), sizeof(FGameplayTagSource), Get_Z_Construct_UScriptStruct_FGameplayTagSource_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameplayTagsManager.h" },
				{ "ToolTip", "Struct defining where gameplay tags are loaded/saved from. Mostly for the editor" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayTagSource>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceTagList_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameplayTagsManager.h" },
				{ "ToolTip", "If this is bound to an ini object for saving, this is the one" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SourceTagList = { UE4CodeGen_Private::EPropertyClass::Object, "SourceTagList", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FGameplayTagSource, SourceTagList), Z_Construct_UClass_UGameplayTagsList_NoRegister, METADATA_PARAMS(NewProp_SourceTagList_MetaData, ARRAY_COUNT(NewProp_SourceTagList_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceType_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameplayTagsManager.h" },
				{ "ToolTip", "Type of this source" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SourceType = { UE4CodeGen_Private::EPropertyClass::Enum, "SourceType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FGameplayTagSource, SourceType), Z_Construct_UEnum_GameplayTags_EGameplayTagSourceType, METADATA_PARAMS(NewProp_SourceType_MetaData, ARRAY_COUNT(NewProp_SourceType_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_SourceType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceName_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameplayTagsManager.h" },
				{ "ToolTip", "Name of this source" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_SourceName = { UE4CodeGen_Private::EPropertyClass::Name, "SourceName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FGameplayTagSource, SourceName), METADATA_PARAMS(NewProp_SourceName_MetaData, ARRAY_COUNT(NewProp_SourceName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SourceTagList,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SourceType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SourceType_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SourceName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_GameplayTags,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"GameplayTagSource",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FGameplayTagSource),
				alignof(FGameplayTagSource),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameplayTagSource_CRC() { return 3132670113U; }
class UScriptStruct* FGameplayTagTableRow::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEPLAYTAGS_API uint32 Get_Z_Construct_UScriptStruct_FGameplayTagTableRow_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayTagTableRow, Z_Construct_UPackage__Script_GameplayTags(), TEXT("GameplayTagTableRow"), sizeof(FGameplayTagTableRow), Get_Z_Construct_UScriptStruct_FGameplayTagTableRow_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameplayTagTableRow(FGameplayTagTableRow::StaticStruct, TEXT("/Script/GameplayTags"), TEXT("GameplayTagTableRow"), false, nullptr, nullptr);
static struct FScriptStruct_GameplayTags_StaticRegisterNativesFGameplayTagTableRow
{
	FScriptStruct_GameplayTags_StaticRegisterNativesFGameplayTagTableRow()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GameplayTagTableRow")),new UScriptStruct::TCppStructOps<FGameplayTagTableRow>);
	}
} ScriptStruct_GameplayTags_StaticRegisterNativesFGameplayTagTableRow;
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagTableRow()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameplayTagTableRow_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayTags();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameplayTagTableRow"), sizeof(FGameplayTagTableRow), Get_Z_Construct_UScriptStruct_FGameplayTagTableRow_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameplayTagsManager.h" },
				{ "ToolTip", "Simple struct for a table row in the gameplay tag table and element in the ini list" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayTagTableRow>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DevComment_MetaData[] = {
				{ "Category", "GameplayTag" },
				{ "ModuleRelativePath", "Classes/GameplayTagsManager.h" },
				{ "ToolTip", "Developer comment clarifying the usage of a particular tag, not user facing" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_DevComment = { UE4CodeGen_Private::EPropertyClass::Str, "DevComment", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FGameplayTagTableRow, DevComment), METADATA_PARAMS(NewProp_DevComment_MetaData, ARRAY_COUNT(NewProp_DevComment_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[] = {
				{ "Category", "GameplayTag" },
				{ "ModuleRelativePath", "Classes/GameplayTagsManager.h" },
				{ "ToolTip", "Tag specified in the table" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_Tag = { UE4CodeGen_Private::EPropertyClass::Name, "Tag", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FGameplayTagTableRow, Tag), METADATA_PARAMS(NewProp_Tag_MetaData, ARRAY_COUNT(NewProp_Tag_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DevComment,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Tag,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_GameplayTags,
				Z_Construct_UScriptStruct_FTableRowBase,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"GameplayTagTableRow",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FGameplayTagTableRow),
				alignof(FGameplayTagTableRow),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameplayTagTableRow_CRC() { return 2628314910U; }
	void UGameplayTagsManager::StaticRegisterNativesUGameplayTagsManager()
	{
	}
	UClass* Z_Construct_UClass_UGameplayTagsManager_NoRegister()
	{
		return UGameplayTagsManager::StaticClass();
	}
	UClass* Z_Construct_UClass_UGameplayTagsManager()
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
				{ "IncludePath", "GameplayTagsManager.h" },
				{ "ModuleRelativePath", "Classes/GameplayTagsManager.h" },
				{ "ToolTip", "Holds data about the tag dictionary, is in a singleton UObject" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameplayTagTables_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameplayTagsManager.h" },
				{ "ToolTip", "Holds all of the valid gameplay-related tags that can be applied to assets" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GameplayTagTables = { UE4CodeGen_Private::EPropertyClass::Array, "GameplayTagTables", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UGameplayTagsManager, GameplayTagTables), METADATA_PARAMS(NewProp_GameplayTagTables_MetaData, ARRAY_COUNT(NewProp_GameplayTagTables_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameplayTagTables_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "GameplayTagTables", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TagSources_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameplayTagsManager.h" },
				{ "ToolTip", "List of gameplay tag sources" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TagSources = { UE4CodeGen_Private::EPropertyClass::Array, "TagSources", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UGameplayTagsManager, TagSources), METADATA_PARAMS(NewProp_TagSources_MetaData, ARRAY_COUNT(NewProp_TagSources_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TagSources_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "TagSources", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FGameplayTagSource, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GameplayTagTables,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GameplayTagTables_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TagSources,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TagSources_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UGameplayTagsManager>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UGameplayTagsManager::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				"Engine",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameplayTagsManager, 675091785);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameplayTagsManager(Z_Construct_UClass_UGameplayTagsManager, &UGameplayTagsManager::StaticClass, TEXT("/Script/GameplayTags"), TEXT("UGameplayTagsManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayTagsManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
