// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/GameplayTagsSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayTagsSettings() {}
// Cross Module References
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagCategoryRemap();
	UPackage* Z_Construct_UPackage__Script_GameplayTags();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagRedirect();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagsList_NoRegister();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagsList();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagTableRow();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagsSettings_NoRegister();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagsSettings();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagsDeveloperSettings_NoRegister();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagsDeveloperSettings();
// End Cross Module References
class UScriptStruct* FGameplayTagCategoryRemap::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEPLAYTAGS_API uint32 Get_Z_Construct_UScriptStruct_FGameplayTagCategoryRemap_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayTagCategoryRemap, Z_Construct_UPackage__Script_GameplayTags(), TEXT("GameplayTagCategoryRemap"), sizeof(FGameplayTagCategoryRemap), Get_Z_Construct_UScriptStruct_FGameplayTagCategoryRemap_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameplayTagCategoryRemap(FGameplayTagCategoryRemap::StaticStruct, TEXT("/Script/GameplayTags"), TEXT("GameplayTagCategoryRemap"), false, nullptr, nullptr);
static struct FScriptStruct_GameplayTags_StaticRegisterNativesFGameplayTagCategoryRemap
{
	FScriptStruct_GameplayTags_StaticRegisterNativesFGameplayTagCategoryRemap()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GameplayTagCategoryRemap")),new UScriptStruct::TCppStructOps<FGameplayTagCategoryRemap>);
	}
} ScriptStruct_GameplayTags_StaticRegisterNativesFGameplayTagCategoryRemap;
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagCategoryRemap()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameplayTagCategoryRemap_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayTags();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameplayTagCategoryRemap"), sizeof(FGameplayTagCategoryRemap), Get_Z_Construct_UScriptStruct_FGameplayTagCategoryRemap_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
				{ "ToolTip", "Category remapping. This allows base engine tag category meta data to remap to multiple project-specific categories." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayTagCategoryRemap>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemapCategories_MetaData[] = {
				{ "Category", "GameplayTags" },
				{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RemapCategories = { UE4CodeGen_Private::EPropertyClass::Array, "RemapCategories", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FGameplayTagCategoryRemap, RemapCategories), METADATA_PARAMS(NewProp_RemapCategories_MetaData, ARRAY_COUNT(NewProp_RemapCategories_MetaData)) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_RemapCategories_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "RemapCategories", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseCategory_MetaData[] = {
				{ "Category", "GameplayTags" },
				{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_BaseCategory = { UE4CodeGen_Private::EPropertyClass::Str, "BaseCategory", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FGameplayTagCategoryRemap, BaseCategory), METADATA_PARAMS(NewProp_BaseCategory_MetaData, ARRAY_COUNT(NewProp_BaseCategory_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RemapCategories,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RemapCategories_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BaseCategory,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_GameplayTags,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"GameplayTagCategoryRemap",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FGameplayTagCategoryRemap),
				alignof(FGameplayTagCategoryRemap),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameplayTagCategoryRemap_CRC() { return 4236148914U; }
class UScriptStruct* FGameplayTagRedirect::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEPLAYTAGS_API uint32 Get_Z_Construct_UScriptStruct_FGameplayTagRedirect_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayTagRedirect, Z_Construct_UPackage__Script_GameplayTags(), TEXT("GameplayTagRedirect"), sizeof(FGameplayTagRedirect), Get_Z_Construct_UScriptStruct_FGameplayTagRedirect_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameplayTagRedirect(FGameplayTagRedirect::StaticStruct, TEXT("/Script/GameplayTags"), TEXT("GameplayTagRedirect"), false, nullptr, nullptr);
static struct FScriptStruct_GameplayTags_StaticRegisterNativesFGameplayTagRedirect
{
	FScriptStruct_GameplayTags_StaticRegisterNativesFGameplayTagRedirect()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GameplayTagRedirect")),new UScriptStruct::TCppStructOps<FGameplayTagRedirect>);
	}
} ScriptStruct_GameplayTags_StaticRegisterNativesFGameplayTagRedirect;
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagRedirect()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameplayTagRedirect_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayTags();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameplayTagRedirect"), sizeof(FGameplayTagRedirect), Get_Z_Construct_UScriptStruct_FGameplayTagRedirect_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
				{ "ToolTip", "A single redirect from a deleted tag to the new tag that should replace it" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayTagRedirect>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewTagName_MetaData[] = {
				{ "Category", "GameplayTags" },
				{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_NewTagName = { UE4CodeGen_Private::EPropertyClass::Name, "NewTagName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FGameplayTagRedirect, NewTagName), METADATA_PARAMS(NewProp_NewTagName_MetaData, ARRAY_COUNT(NewProp_NewTagName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldTagName_MetaData[] = {
				{ "Category", "GameplayTags" },
				{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_OldTagName = { UE4CodeGen_Private::EPropertyClass::Name, "OldTagName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FGameplayTagRedirect, OldTagName), METADATA_PARAMS(NewProp_OldTagName_MetaData, ARRAY_COUNT(NewProp_OldTagName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewTagName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OldTagName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_GameplayTags,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"GameplayTagRedirect",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FGameplayTagRedirect),
				alignof(FGameplayTagRedirect),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameplayTagRedirect_CRC() { return 1708769040U; }
	void UGameplayTagsList::StaticRegisterNativesUGameplayTagsList()
	{
	}
	UClass* Z_Construct_UClass_UGameplayTagsList_NoRegister()
	{
		return UGameplayTagsList::StaticClass();
	}
	UClass* Z_Construct_UClass_UGameplayTagsList()
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
				{ "IncludePath", "GameplayTagsSettings.h" },
				{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
				{ "ToolTip", "Base class for storing a list of gameplay tags as an ini list. This is used for both the central list and additional lists" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameplayTagList_MetaData[] = {
				{ "Category", "GameplayTags" },
				{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
				{ "ToolTip", "List of tags saved to this file" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GameplayTagList = { UE4CodeGen_Private::EPropertyClass::Array, "GameplayTagList", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UGameplayTagsList, GameplayTagList), METADATA_PARAMS(NewProp_GameplayTagList_MetaData, ARRAY_COUNT(NewProp_GameplayTagList_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameplayTagList_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "GameplayTagList", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000004000, 1, nullptr, 0, Z_Construct_UScriptStruct_FGameplayTagTableRow, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConfigFileName_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
				{ "ToolTip", "Relative path to the ini file that is backing this list" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ConfigFileName = { UE4CodeGen_Private::EPropertyClass::Str, "ConfigFileName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UGameplayTagsList, ConfigFileName), METADATA_PARAMS(NewProp_ConfigFileName_MetaData, ARRAY_COUNT(NewProp_ConfigFileName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GameplayTagList,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GameplayTagList_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConfigFileName,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UGameplayTagsList>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UGameplayTagsList::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100284u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				"GameplayTagsList",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameplayTagsList, 661035141);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameplayTagsList(Z_Construct_UClass_UGameplayTagsList, &UGameplayTagsList::StaticClass, TEXT("/Script/GameplayTags"), TEXT("UGameplayTagsList"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayTagsList);
	void UGameplayTagsSettings::StaticRegisterNativesUGameplayTagsSettings()
	{
	}
	UClass* Z_Construct_UClass_UGameplayTagsSettings_NoRegister()
	{
		return UGameplayTagsSettings::StaticClass();
	}
	UClass* Z_Construct_UClass_UGameplayTagsSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UGameplayTagsList,
				(UObject* (*)())Z_Construct_UPackage__Script_GameplayTags,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "GameplayTagsSettings.h" },
				{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
				{ "ToolTip", "Class for importing GameplayTags directly from a config file.\nFGameplayTagsEditorModule::StartupModule adds this class to the Project Settings menu to be edited.\nEditing this in Project Settings will output changes to Config/DefaultGameplayTags.ini.\n\nPrimary advantages of this approach are:\n-Adding new tags doesn't require checking out external and editing file (CSV or xls) then reimporting.\n-New tags are mergeable since .ini are text and non exclusive checkout.\n\nTo do:\n-Better support could be added for adding new tags. We could match existing tags and autocomplete subtags as\nthe user types (e.g, autocomplete 'Damage.Physical' as the user is adding a 'Damage.Physical.Slash' tag)." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NetIndexFirstBitSegment_MetaData[] = {
				{ "Category", "Advanced Replication" },
				{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
				{ "ToolTip", "The length in bits of the first segment when net serializing tags. We will serialize NetIndexFirstBitSegment + 1 bit to indicate \"more\", which is slower to replicate" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_NetIndexFirstBitSegment = { UE4CodeGen_Private::EPropertyClass::Int, "NetIndexFirstBitSegment", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UGameplayTagsSettings, NetIndexFirstBitSegment), METADATA_PARAMS(NewProp_NetIndexFirstBitSegment_MetaData, ARRAY_COUNT(NewProp_NetIndexFirstBitSegment_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumBitsForContainerSize_MetaData[] = {
				{ "Category", "Advanced Replication" },
				{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
				{ "ToolTip", "Numbers of bits to use for replicating container size, set this based on how large your containers tend to be" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumBitsForContainerSize = { UE4CodeGen_Private::EPropertyClass::Int, "NumBitsForContainerSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UGameplayTagsSettings, NumBitsForContainerSize), METADATA_PARAMS(NewProp_NumBitsForContainerSize_MetaData, ARRAY_COUNT(NewProp_NumBitsForContainerSize_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CommonlyReplicatedTags_MetaData[] = {
				{ "Category", "Advanced Replication" },
				{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
				{ "ToolTip", "List of tags most frequently replicated" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CommonlyReplicatedTags = { UE4CodeGen_Private::EPropertyClass::Array, "CommonlyReplicatedTags", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UGameplayTagsSettings, CommonlyReplicatedTags), METADATA_PARAMS(NewProp_CommonlyReplicatedTags_MetaData, ARRAY_COUNT(NewProp_CommonlyReplicatedTags_MetaData)) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_CommonlyReplicatedTags_Inner = { UE4CodeGen_Private::EPropertyClass::Name, "CommonlyReplicatedTags", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000004000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameplayTagRedirects_MetaData[] = {
				{ "Category", "GameplayTags" },
				{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
				{ "ToolTip", "List of active tag redirects" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GameplayTagRedirects = { UE4CodeGen_Private::EPropertyClass::Array, "GameplayTagRedirects", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UGameplayTagsSettings, GameplayTagRedirects), METADATA_PARAMS(NewProp_GameplayTagRedirects_MetaData, ARRAY_COUNT(NewProp_GameplayTagRedirects_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameplayTagRedirects_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "GameplayTagRedirects", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000004000, 1, nullptr, 0, Z_Construct_UScriptStruct_FGameplayTagRedirect, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameplayTagTableList_MetaData[] = {
				{ "AllowedClasses", "DataTable" },
				{ "Category", "GameplayTags" },
				{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
				{ "ToolTip", "List of data tables to load tags from" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GameplayTagTableList = { UE4CodeGen_Private::EPropertyClass::Array, "GameplayTagTableList", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UGameplayTagsSettings, GameplayTagTableList), METADATA_PARAMS(NewProp_GameplayTagTableList_MetaData, ARRAY_COUNT(NewProp_GameplayTagTableList_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameplayTagTableList_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "GameplayTagTableList", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000004000, 1, nullptr, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FastReplication_MetaData[] = {
				{ "Category", "Advanced Replication" },
				{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
				{ "ToolTip", "If true, will replicate gameplay tags by index instead of name. For this to work, tags must be identical on client and server" },
			};
#endif
			auto NewProp_FastReplication_SetBit = [](void* Obj){ ((UGameplayTagsSettings*)Obj)->FastReplication = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_FastReplication = { UE4CodeGen_Private::EPropertyClass::Bool, "FastReplication", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UGameplayTagsSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_FastReplication_SetBit)>::SetBit, METADATA_PARAMS(NewProp_FastReplication_MetaData, ARRAY_COUNT(NewProp_FastReplication_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategoryRemapping_MetaData[] = {
				{ "Category", "GameplayTags" },
				{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CategoryRemapping = { UE4CodeGen_Private::EPropertyClass::Array, "CategoryRemapping", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UGameplayTagsSettings, CategoryRemapping), METADATA_PARAMS(NewProp_CategoryRemapping_MetaData, ARRAY_COUNT(NewProp_CategoryRemapping_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CategoryRemapping_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "CategoryRemapping", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000004000, 1, nullptr, 0, Z_Construct_UScriptStruct_FGameplayTagCategoryRemap, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WarnOnInvalidTags_MetaData[] = {
				{ "Category", "GameplayTags" },
				{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
				{ "ToolTip", "If true, will give load warnings when reading invalid tags off disk" },
			};
#endif
			auto NewProp_WarnOnInvalidTags_SetBit = [](void* Obj){ ((UGameplayTagsSettings*)Obj)->WarnOnInvalidTags = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_WarnOnInvalidTags = { UE4CodeGen_Private::EPropertyClass::Bool, "WarnOnInvalidTags", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UGameplayTagsSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_WarnOnInvalidTags_SetBit)>::SetBit, METADATA_PARAMS(NewProp_WarnOnInvalidTags_MetaData, ARRAY_COUNT(NewProp_WarnOnInvalidTags_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImportTagsFromConfig_MetaData[] = {
				{ "Category", "GameplayTags" },
				{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
				{ "ToolTip", "If true, will import tags from ini files in the config/tags folder" },
			};
#endif
			auto NewProp_ImportTagsFromConfig_SetBit = [](void* Obj){ ((UGameplayTagsSettings*)Obj)->ImportTagsFromConfig = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ImportTagsFromConfig = { UE4CodeGen_Private::EPropertyClass::Bool, "ImportTagsFromConfig", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UGameplayTagsSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ImportTagsFromConfig_SetBit)>::SetBit, METADATA_PARAMS(NewProp_ImportTagsFromConfig_MetaData, ARRAY_COUNT(NewProp_ImportTagsFromConfig_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NetIndexFirstBitSegment,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NumBitsForContainerSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CommonlyReplicatedTags,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CommonlyReplicatedTags_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GameplayTagRedirects,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GameplayTagRedirects_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GameplayTagTableList,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GameplayTagTableList_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FastReplication,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CategoryRemapping,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CategoryRemapping_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WarnOnInvalidTags,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ImportTagsFromConfig,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UGameplayTagsSettings>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UGameplayTagsSettings::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100286u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				"GameplayTags",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameplayTagsSettings, 218797868);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameplayTagsSettings(Z_Construct_UClass_UGameplayTagsSettings, &UGameplayTagsSettings::StaticClass, TEXT("/Script/GameplayTags"), TEXT("UGameplayTagsSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayTagsSettings);
	void UGameplayTagsDeveloperSettings::StaticRegisterNativesUGameplayTagsDeveloperSettings()
	{
	}
	UClass* Z_Construct_UClass_UGameplayTagsDeveloperSettings_NoRegister()
	{
		return UGameplayTagsDeveloperSettings::StaticClass();
	}
	UClass* Z_Construct_UClass_UGameplayTagsDeveloperSettings()
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
				{ "IncludePath", "GameplayTagsSettings.h" },
				{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeveloperConfigName_MetaData[] = {
				{ "Category", "GameplayTags" },
				{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
				{ "ToolTip", "Allows new tags to be saved into their own INI file. This is make merging easier for non technical developers by setting up their own ini file." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_DeveloperConfigName = { UE4CodeGen_Private::EPropertyClass::Str, "DeveloperConfigName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UGameplayTagsDeveloperSettings, DeveloperConfigName), METADATA_PARAMS(NewProp_DeveloperConfigName_MetaData, ARRAY_COUNT(NewProp_DeveloperConfigName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DeveloperConfigName,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UGameplayTagsDeveloperSettings>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UGameplayTagsDeveloperSettings::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100284u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				"GameplayTags",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameplayTagsDeveloperSettings, 3119478580);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameplayTagsDeveloperSettings(Z_Construct_UClass_UGameplayTagsDeveloperSettings, &UGameplayTagsDeveloperSettings::StaticClass, TEXT("/Script/GameplayTags"), TEXT("UGameplayTagsDeveloperSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayTagsDeveloperSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
