// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/BlueprintGameplayTagLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintGameplayTagLibrary() {}
// Cross Module References
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UBlueprintGameplayTagLibrary_NoRegister();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UBlueprintGameplayTagLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_GameplayTags();
	GAMEPLAYTAGS_API UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_AddGameplayTag();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	GAMEPLAYTAGS_API UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_AppendGameplayTagContainers();
	GAMEPLAYTAGS_API UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_BreakGameplayTagContainer();
	GAMEPLAYTAGS_API UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_DoesContainerMatchTagQuery();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagQuery();
	GAMEPLAYTAGS_API UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_DoesTagAssetInterfaceHaveTag();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister();
	GAMEPLAYTAGS_API UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_EqualEqual_GameplayTag();
	GAMEPLAYTAGS_API UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_EqualEqual_GameplayTagContainer();
	GAMEPLAYTAGS_API UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetAllActorsOfClassMatchingTagQuery();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	GAMEPLAYTAGS_API UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTag();
	GAMEPLAYTAGS_API UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTagContainer();
	GAMEPLAYTAGS_API UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetNumGameplayTagsInContainer();
	GAMEPLAYTAGS_API UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetTagName();
	GAMEPLAYTAGS_API UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllMatchingGameplayTags();
	GAMEPLAYTAGS_API UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllTags();
	GAMEPLAYTAGS_API UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAnyTags();
	GAMEPLAYTAGS_API UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasTag();
	GAMEPLAYTAGS_API UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_IsGameplayTagValid();
	GAMEPLAYTAGS_API UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromArray();
	GAMEPLAYTAGS_API UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromTag();
	GAMEPLAYTAGS_API UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagQuery();
	GAMEPLAYTAGS_API UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeLiteralGameplayTag();
	GAMEPLAYTAGS_API UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeLiteralGameplayTagContainer();
	GAMEPLAYTAGS_API UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesAnyTags();
	GAMEPLAYTAGS_API UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesTag();
	GAMEPLAYTAGS_API UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_GameplayTag();
	GAMEPLAYTAGS_API UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_GameplayTagContainer();
	GAMEPLAYTAGS_API UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_TagContainerTagContainer();
	GAMEPLAYTAGS_API UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_TagTag();
	GAMEPLAYTAGS_API UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_RemoveGameplayTag();
// End Cross Module References
	void UBlueprintGameplayTagLibrary::StaticRegisterNativesUBlueprintGameplayTagLibrary()
	{
		UClass* Class = UBlueprintGameplayTagLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddGameplayTag", (Native)&UBlueprintGameplayTagLibrary::execAddGameplayTag },
			{ "AppendGameplayTagContainers", (Native)&UBlueprintGameplayTagLibrary::execAppendGameplayTagContainers },
			{ "BreakGameplayTagContainer", (Native)&UBlueprintGameplayTagLibrary::execBreakGameplayTagContainer },
			{ "DoesContainerMatchTagQuery", (Native)&UBlueprintGameplayTagLibrary::execDoesContainerMatchTagQuery },
			{ "DoesTagAssetInterfaceHaveTag", (Native)&UBlueprintGameplayTagLibrary::execDoesTagAssetInterfaceHaveTag },
			{ "EqualEqual_GameplayTag", (Native)&UBlueprintGameplayTagLibrary::execEqualEqual_GameplayTag },
			{ "EqualEqual_GameplayTagContainer", (Native)&UBlueprintGameplayTagLibrary::execEqualEqual_GameplayTagContainer },
			{ "GetAllActorsOfClassMatchingTagQuery", (Native)&UBlueprintGameplayTagLibrary::execGetAllActorsOfClassMatchingTagQuery },
			{ "GetDebugStringFromGameplayTag", (Native)&UBlueprintGameplayTagLibrary::execGetDebugStringFromGameplayTag },
			{ "GetDebugStringFromGameplayTagContainer", (Native)&UBlueprintGameplayTagLibrary::execGetDebugStringFromGameplayTagContainer },
			{ "GetNumGameplayTagsInContainer", (Native)&UBlueprintGameplayTagLibrary::execGetNumGameplayTagsInContainer },
			{ "GetTagName", (Native)&UBlueprintGameplayTagLibrary::execGetTagName },
			{ "HasAllMatchingGameplayTags", (Native)&UBlueprintGameplayTagLibrary::execHasAllMatchingGameplayTags },
			{ "HasAllTags", (Native)&UBlueprintGameplayTagLibrary::execHasAllTags },
			{ "HasAnyTags", (Native)&UBlueprintGameplayTagLibrary::execHasAnyTags },
			{ "HasTag", (Native)&UBlueprintGameplayTagLibrary::execHasTag },
			{ "IsGameplayTagValid", (Native)&UBlueprintGameplayTagLibrary::execIsGameplayTagValid },
			{ "MakeGameplayTagContainerFromArray", (Native)&UBlueprintGameplayTagLibrary::execMakeGameplayTagContainerFromArray },
			{ "MakeGameplayTagContainerFromTag", (Native)&UBlueprintGameplayTagLibrary::execMakeGameplayTagContainerFromTag },
			{ "MakeGameplayTagQuery", (Native)&UBlueprintGameplayTagLibrary::execMakeGameplayTagQuery },
			{ "MakeLiteralGameplayTag", (Native)&UBlueprintGameplayTagLibrary::execMakeLiteralGameplayTag },
			{ "MakeLiteralGameplayTagContainer", (Native)&UBlueprintGameplayTagLibrary::execMakeLiteralGameplayTagContainer },
			{ "MatchesAnyTags", (Native)&UBlueprintGameplayTagLibrary::execMatchesAnyTags },
			{ "MatchesTag", (Native)&UBlueprintGameplayTagLibrary::execMatchesTag },
			{ "NotEqual_GameplayTag", (Native)&UBlueprintGameplayTagLibrary::execNotEqual_GameplayTag },
			{ "NotEqual_GameplayTagContainer", (Native)&UBlueprintGameplayTagLibrary::execNotEqual_GameplayTagContainer },
			{ "NotEqual_TagContainerTagContainer", (Native)&UBlueprintGameplayTagLibrary::execNotEqual_TagContainerTagContainer },
			{ "NotEqual_TagTag", (Native)&UBlueprintGameplayTagLibrary::execNotEqual_TagTag },
			{ "RemoveGameplayTag", (Native)&UBlueprintGameplayTagLibrary::execRemoveGameplayTag },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_AddGameplayTag()
	{
		struct BlueprintGameplayTagLibrary_eventAddGameplayTag_Parms
		{
			FGameplayTagContainer TagContainer;
			FGameplayTag Tag;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tag = { UE4CodeGen_Private::EPropertyClass::Struct, "Tag", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventAddGameplayTag_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TagContainer = { UE4CodeGen_Private::EPropertyClass::Struct, "TagContainer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000180, 1, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventAddGameplayTag_Parms, TagContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Tag,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TagContainer,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "GameplayTags" },
				{ "ModuleRelativePath", "Classes/BlueprintGameplayTagLibrary.h" },
				{ "ToolTip", "Adds a single tag to the passed in tag container\n\n@param InOutTagContainer             The container that will be appended too.\n@param Tag                                   The tag to add to the container" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintGameplayTagLibrary, "AddGameplayTag", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(BlueprintGameplayTagLibrary_eventAddGameplayTag_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_AppendGameplayTagContainers()
	{
		struct BlueprintGameplayTagLibrary_eventAppendGameplayTagContainers_Parms
		{
			FGameplayTagContainer InOutTagContainer;
			FGameplayTagContainer InTagContainer;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InTagContainer_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InTagContainer = { UE4CodeGen_Private::EPropertyClass::Struct, "InTagContainer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventAppendGameplayTagContainers_Parms, InTagContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(NewProp_InTagContainer_MetaData, ARRAY_COUNT(NewProp_InTagContainer_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InOutTagContainer = { UE4CodeGen_Private::EPropertyClass::Struct, "InOutTagContainer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000180, 1, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventAppendGameplayTagContainers_Parms, InOutTagContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InTagContainer,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InOutTagContainer,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "GameplayTags" },
				{ "ModuleRelativePath", "Classes/BlueprintGameplayTagLibrary.h" },
				{ "ToolTip", "Appends all tags in the InTagContainer to InOutTagContainer\n\n@param InOutTagContainer             The container that will be appended too.\n@param InTagContainer                The container to append." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintGameplayTagLibrary, "AppendGameplayTagContainers", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(BlueprintGameplayTagLibrary_eventAppendGameplayTagContainers_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_BreakGameplayTagContainer()
	{
		struct BlueprintGameplayTagLibrary_eventBreakGameplayTagContainer_Parms
		{
			FGameplayTagContainer GameplayTagContainer;
			TArray<FGameplayTag> GameplayTags;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GameplayTags = { UE4CodeGen_Private::EPropertyClass::Array, "GameplayTags", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventBreakGameplayTagContainer_Parms, GameplayTags), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameplayTags_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "GameplayTags", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameplayTagContainer_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameplayTagContainer = { UE4CodeGen_Private::EPropertyClass::Struct, "GameplayTagContainer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventBreakGameplayTagContainer_Parms, GameplayTagContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(NewProp_GameplayTagContainer_MetaData, ARRAY_COUNT(NewProp_GameplayTagContainer_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GameplayTags,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GameplayTags_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GameplayTagContainer,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "GameplayTags" },
				{ "ModuleRelativePath", "Classes/BlueprintGameplayTagLibrary.h" },
				{ "ToolTip", "Breaks tag container into explicit array of tags" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintGameplayTagLibrary, "BreakGameplayTagContainer", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(BlueprintGameplayTagLibrary_eventBreakGameplayTagContainer_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_DoesContainerMatchTagQuery()
	{
		struct BlueprintGameplayTagLibrary_eventDoesContainerMatchTagQuery_Parms
		{
			FGameplayTagContainer TagContainer;
			FGameplayTagQuery TagQuery;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((BlueprintGameplayTagLibrary_eventDoesContainerMatchTagQuery_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(BlueprintGameplayTagLibrary_eventDoesContainerMatchTagQuery_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TagQuery_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TagQuery = { UE4CodeGen_Private::EPropertyClass::Struct, "TagQuery", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventDoesContainerMatchTagQuery_Parms, TagQuery), Z_Construct_UScriptStruct_FGameplayTagQuery, METADATA_PARAMS(NewProp_TagQuery_MetaData, ARRAY_COUNT(NewProp_TagQuery_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TagContainer_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TagContainer = { UE4CodeGen_Private::EPropertyClass::Struct, "TagContainer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventDoesContainerMatchTagQuery_Parms, TagContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(NewProp_TagContainer_MetaData, ARRAY_COUNT(NewProp_TagContainer_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TagQuery,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TagContainer,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "GameplayTags" },
				{ "ModuleRelativePath", "Classes/BlueprintGameplayTagLibrary.h" },
				{ "ToolTip", "Check if the specified tag container matches the given Tag Query\n\n@param TagContainer                  Container to check if it matches all of the tags in the other container\n@param TagQuery                              Query to match against\n\n@return True if the container matches the query, false otherwise." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintGameplayTagLibrary, "DoesContainerMatchTagQuery", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(BlueprintGameplayTagLibrary_eventDoesContainerMatchTagQuery_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_DoesTagAssetInterfaceHaveTag()
	{
		struct BlueprintGameplayTagLibrary_eventDoesTagAssetInterfaceHaveTag_Parms
		{
			TScriptInterface<IGameplayTagAssetInterface> TagContainerInterface;
			FGameplayTag Tag;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((BlueprintGameplayTagLibrary_eventDoesTagAssetInterfaceHaveTag_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(BlueprintGameplayTagLibrary_eventDoesTagAssetInterfaceHaveTag_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tag = { UE4CodeGen_Private::EPropertyClass::Struct, "Tag", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventDoesTagAssetInterfaceHaveTag_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_TagContainerInterface = { UE4CodeGen_Private::EPropertyClass::Interface, "TagContainerInterface", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000080, 1, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventDoesTagAssetInterfaceHaveTag_Parms, TagContainerInterface), Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Tag,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TagContainerInterface,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "BlueprintInternalUseOnly", "TRUE" },
				{ "ModuleRelativePath", "Classes/BlueprintGameplayTagLibrary.h" },
				{ "ToolTip", "Check if the specified tag container has the specified tag, using the specified tag matching types\n\n@param TagContainerInterface         An Interface to a tag container\n@param Tag                                           Tag to check for in the container\n\n@return True if the container has the specified tag, false if it does not" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintGameplayTagLibrary, "DoesTagAssetInterfaceHaveTag", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(BlueprintGameplayTagLibrary_eventDoesTagAssetInterfaceHaveTag_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_EqualEqual_GameplayTag()
	{
		struct BlueprintGameplayTagLibrary_eventEqualEqual_GameplayTag_Parms
		{
			FGameplayTag A;
			FGameplayTag B;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((BlueprintGameplayTagLibrary_eventEqualEqual_GameplayTag_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(BlueprintGameplayTagLibrary_eventEqualEqual_GameplayTag_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_B = { UE4CodeGen_Private::EPropertyClass::Struct, "B", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventEqualEqual_GameplayTag_Parms, B), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_A = { UE4CodeGen_Private::EPropertyClass::Struct, "A", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventEqualEqual_GameplayTag_Parms, A), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_B,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_A,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "GameplayTags" },
				{ "CompactNodeTitle", "==" },
				{ "DisplayName", "Equal (GameplayTag)" },
				{ "ModuleRelativePath", "Classes/BlueprintGameplayTagLibrary.h" },
				{ "ToolTip", "Returns true if the values are equal (A == B)" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintGameplayTagLibrary, "EqualEqual_GameplayTag", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(BlueprintGameplayTagLibrary_eventEqualEqual_GameplayTag_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_EqualEqual_GameplayTagContainer()
	{
		struct BlueprintGameplayTagLibrary_eventEqualEqual_GameplayTagContainer_Parms
		{
			FGameplayTagContainer A;
			FGameplayTagContainer B;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((BlueprintGameplayTagLibrary_eventEqualEqual_GameplayTagContainer_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(BlueprintGameplayTagLibrary_eventEqualEqual_GameplayTagContainer_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_B = { UE4CodeGen_Private::EPropertyClass::Struct, "B", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventEqualEqual_GameplayTagContainer_Parms, B), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(NewProp_B_MetaData, ARRAY_COUNT(NewProp_B_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_A = { UE4CodeGen_Private::EPropertyClass::Struct, "A", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventEqualEqual_GameplayTagContainer_Parms, A), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(NewProp_A_MetaData, ARRAY_COUNT(NewProp_A_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_B,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_A,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "GameplayTags" },
				{ "CompactNodeTitle", "==" },
				{ "DisplayName", "Equal (GameplayTagContainer)" },
				{ "ModuleRelativePath", "Classes/BlueprintGameplayTagLibrary.h" },
				{ "ToolTip", "Returns true if the values are equal (A == B)" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintGameplayTagLibrary, "EqualEqual_GameplayTagContainer", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(BlueprintGameplayTagLibrary_eventEqualEqual_GameplayTagContainer_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetAllActorsOfClassMatchingTagQuery()
	{
		struct BlueprintGameplayTagLibrary_eventGetAllActorsOfClassMatchingTagQuery_Parms
		{
			UObject* WorldContextObject;
			TSubclassOf<AActor>  ActorClass;
			FGameplayTagQuery GameplayTagQuery;
			TArray<AActor*> OutActors;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutActors = { UE4CodeGen_Private::EPropertyClass::Array, "OutActors", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventGetAllActorsOfClassMatchingTagQuery_Parms, OutActors), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutActors_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "OutActors", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameplayTagQuery_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameplayTagQuery = { UE4CodeGen_Private::EPropertyClass::Struct, "GameplayTagQuery", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventGetAllActorsOfClassMatchingTagQuery_Parms, GameplayTagQuery), Z_Construct_UScriptStruct_FGameplayTagQuery, METADATA_PARAMS(NewProp_GameplayTagQuery_MetaData, ARRAY_COUNT(NewProp_GameplayTagQuery_MetaData)) };
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_ActorClass = { UE4CodeGen_Private::EPropertyClass::Class, "ActorClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000080, 1, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventGetAllActorsOfClassMatchingTagQuery_Parms, ActorClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventGetAllActorsOfClassMatchingTagQuery_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutActors,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutActors_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GameplayTagQuery,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ActorClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "GameplayTags" },
				{ "DeterminesOutputType", "ActorClass" },
				{ "DynamicOutputParam", "OutActors" },
				{ "ModuleRelativePath", "Classes/BlueprintGameplayTagLibrary.h" },
				{ "ToolTip", "Get an array of all actors of a specific class (or subclass of that class) which match the specified gameplay tag query.\n\n@param ActorClass                    Class of actors to fetch\n@param GameplayTagQuery              Query to match against" },
				{ "WorldContext", "WorldContextObject" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintGameplayTagLibrary, "GetAllActorsOfClassMatchingTagQuery", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(BlueprintGameplayTagLibrary_eventGetAllActorsOfClassMatchingTagQuery_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTag()
	{
		struct BlueprintGameplayTagLibrary_eventGetDebugStringFromGameplayTag_Parms
		{
			FGameplayTag GameplayTag;
			FString ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventGetDebugStringFromGameplayTag_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameplayTag = { UE4CodeGen_Private::EPropertyClass::Struct, "GameplayTag", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventGetDebugStringFromGameplayTag_Parms, GameplayTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GameplayTag,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "GameplayTags" },
				{ "ModuleRelativePath", "Classes/BlueprintGameplayTagLibrary.h" },
				{ "ToolTip", "Returns an FString representation of a gameplay tag for debugging purposes.\n\n@param GameplayTag   The tag to get the debug string from." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintGameplayTagLibrary, "GetDebugStringFromGameplayTag", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(BlueprintGameplayTagLibrary_eventGetDebugStringFromGameplayTag_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTagContainer()
	{
		struct BlueprintGameplayTagLibrary_eventGetDebugStringFromGameplayTagContainer_Parms
		{
			FGameplayTagContainer TagContainer;
			FString ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventGetDebugStringFromGameplayTagContainer_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TagContainer_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TagContainer = { UE4CodeGen_Private::EPropertyClass::Struct, "TagContainer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventGetDebugStringFromGameplayTagContainer_Parms, TagContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(NewProp_TagContainer_MetaData, ARRAY_COUNT(NewProp_TagContainer_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TagContainer,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "GameplayTags" },
				{ "ModuleRelativePath", "Classes/BlueprintGameplayTagLibrary.h" },
				{ "ToolTip", "Returns an FString listing all of the gameplay tags in the tag container for debugging purposes.\n\n@param TagContainer  The tag container to get the debug string from." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintGameplayTagLibrary, "GetDebugStringFromGameplayTagContainer", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(BlueprintGameplayTagLibrary_eventGetDebugStringFromGameplayTagContainer_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetNumGameplayTagsInContainer()
	{
		struct BlueprintGameplayTagLibrary_eventGetNumGameplayTagsInContainer_Parms
		{
			FGameplayTagContainer TagContainer;
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventGetNumGameplayTagsInContainer_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TagContainer_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TagContainer = { UE4CodeGen_Private::EPropertyClass::Struct, "TagContainer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventGetNumGameplayTagsInContainer_Parms, TagContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(NewProp_TagContainer_MetaData, ARRAY_COUNT(NewProp_TagContainer_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TagContainer,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "GameplayTags" },
				{ "ModuleRelativePath", "Classes/BlueprintGameplayTagLibrary.h" },
				{ "ToolTip", "Get the number of gameplay tags in the specified container\n\n@param TagContainer  Tag container to get the number of tags from\n\n@return The number of tags in the specified container" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintGameplayTagLibrary, "GetNumGameplayTagsInContainer", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(BlueprintGameplayTagLibrary_eventGetNumGameplayTagsInContainer_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetTagName()
	{
		struct BlueprintGameplayTagLibrary_eventGetTagName_Parms
		{
			FGameplayTag GameplayTag;
			FName ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Name, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventGetTagName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameplayTag_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameplayTag = { UE4CodeGen_Private::EPropertyClass::Struct, "GameplayTag", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventGetTagName_Parms, GameplayTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(NewProp_GameplayTag_MetaData, ARRAY_COUNT(NewProp_GameplayTag_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GameplayTag,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "GameplayTags" },
				{ "ModuleRelativePath", "Classes/BlueprintGameplayTagLibrary.h" },
				{ "ToolTip", "Returns FName of this tag" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintGameplayTagLibrary, "GetTagName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(BlueprintGameplayTagLibrary_eventGetTagName_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllMatchingGameplayTags()
	{
		struct BlueprintGameplayTagLibrary_eventHasAllMatchingGameplayTags_Parms
		{
			TScriptInterface<IGameplayTagAssetInterface> TagContainerInterface;
			FGameplayTagContainer OtherContainer;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((BlueprintGameplayTagLibrary_eventHasAllMatchingGameplayTags_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(BlueprintGameplayTagLibrary_eventHasAllMatchingGameplayTags_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherContainer_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OtherContainer = { UE4CodeGen_Private::EPropertyClass::Struct, "OtherContainer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventHasAllMatchingGameplayTags_Parms, OtherContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(NewProp_OtherContainer_MetaData, ARRAY_COUNT(NewProp_OtherContainer_MetaData)) };
			static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_TagContainerInterface = { UE4CodeGen_Private::EPropertyClass::Interface, "TagContainerInterface", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000080, 1, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventHasAllMatchingGameplayTags_Parms, TagContainerInterface), Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OtherContainer,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TagContainerInterface,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "BlueprintInternalUseOnly", "TRUE" },
				{ "ModuleRelativePath", "Classes/BlueprintGameplayTagLibrary.h" },
				{ "ToolTip", "Check Gameplay tags in the interface has all of the specified tags in the tag container (expands to include parents of asset tags)\n\n@param TagContainerInterface         An Interface to a tag container\n@param OtherContainer                        A Tag Container\n\n@return True if the tagcontainer in the interface has all the tags inside the container." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintGameplayTagLibrary, "HasAllMatchingGameplayTags", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(BlueprintGameplayTagLibrary_eventHasAllMatchingGameplayTags_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllTags()
	{
		struct BlueprintGameplayTagLibrary_eventHasAllTags_Parms
		{
			FGameplayTagContainer TagContainer;
			FGameplayTagContainer OtherContainer;
			bool bExactMatch;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((BlueprintGameplayTagLibrary_eventHasAllTags_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(BlueprintGameplayTagLibrary_eventHasAllTags_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bExactMatch_SetBit = [](void* Obj){ ((BlueprintGameplayTagLibrary_eventHasAllTags_Parms*)Obj)->bExactMatch = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExactMatch = { UE4CodeGen_Private::EPropertyClass::Bool, "bExactMatch", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(BlueprintGameplayTagLibrary_eventHasAllTags_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bExactMatch_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherContainer_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OtherContainer = { UE4CodeGen_Private::EPropertyClass::Struct, "OtherContainer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventHasAllTags_Parms, OtherContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(NewProp_OtherContainer_MetaData, ARRAY_COUNT(NewProp_OtherContainer_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TagContainer_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TagContainer = { UE4CodeGen_Private::EPropertyClass::Struct, "TagContainer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventHasAllTags_Parms, TagContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(NewProp_TagContainer_MetaData, ARRAY_COUNT(NewProp_TagContainer_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bExactMatch,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OtherContainer,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TagContainer,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "GameplayTags" },
				{ "Keywords", "DoesContainerMatchAllTagsInContainer" },
				{ "ModuleRelativePath", "Classes/BlueprintGameplayTagLibrary.h" },
				{ "ToolTip", "Check if the specified tag container has ALL of the tags in the other container\n\n@param TagContainer                  Container to check if it matches all of the tags in the other container\n@param OtherContainer                Container to check against. If this is empty, the check will succeed\n@param bExactMatch                   If true, the tag has to be exactly present, if false then TagContainer will include it's parent tags while matching\n\n@return True if the container has ALL of the tags in the other container" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintGameplayTagLibrary, "HasAllTags", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(BlueprintGameplayTagLibrary_eventHasAllTags_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAnyTags()
	{
		struct BlueprintGameplayTagLibrary_eventHasAnyTags_Parms
		{
			FGameplayTagContainer TagContainer;
			FGameplayTagContainer OtherContainer;
			bool bExactMatch;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((BlueprintGameplayTagLibrary_eventHasAnyTags_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(BlueprintGameplayTagLibrary_eventHasAnyTags_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bExactMatch_SetBit = [](void* Obj){ ((BlueprintGameplayTagLibrary_eventHasAnyTags_Parms*)Obj)->bExactMatch = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExactMatch = { UE4CodeGen_Private::EPropertyClass::Bool, "bExactMatch", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(BlueprintGameplayTagLibrary_eventHasAnyTags_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bExactMatch_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherContainer_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OtherContainer = { UE4CodeGen_Private::EPropertyClass::Struct, "OtherContainer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventHasAnyTags_Parms, OtherContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(NewProp_OtherContainer_MetaData, ARRAY_COUNT(NewProp_OtherContainer_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TagContainer_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TagContainer = { UE4CodeGen_Private::EPropertyClass::Struct, "TagContainer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventHasAnyTags_Parms, TagContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(NewProp_TagContainer_MetaData, ARRAY_COUNT(NewProp_TagContainer_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bExactMatch,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OtherContainer,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TagContainer,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "GameplayTags" },
				{ "Keywords", "DoesContainerMatchAnyTagsInContainer" },
				{ "ModuleRelativePath", "Classes/BlueprintGameplayTagLibrary.h" },
				{ "ToolTip", "Check if the specified tag container has ANY of the tags in the other container\n\n@param TagContainer                  Container to check if it matches any of the tags in the other container\n@param OtherContainer                Container to check against.\n@param bExactMatch                   If true, the tag has to be exactly present, if false then TagContainer will include it's parent tags while matching\n\n@return True if the container has ANY of the tags in the other container" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintGameplayTagLibrary, "HasAnyTags", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(BlueprintGameplayTagLibrary_eventHasAnyTags_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasTag()
	{
		struct BlueprintGameplayTagLibrary_eventHasTag_Parms
		{
			FGameplayTagContainer TagContainer;
			FGameplayTag Tag;
			bool bExactMatch;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((BlueprintGameplayTagLibrary_eventHasTag_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(BlueprintGameplayTagLibrary_eventHasTag_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bExactMatch_SetBit = [](void* Obj){ ((BlueprintGameplayTagLibrary_eventHasTag_Parms*)Obj)->bExactMatch = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExactMatch = { UE4CodeGen_Private::EPropertyClass::Bool, "bExactMatch", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(BlueprintGameplayTagLibrary_eventHasTag_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bExactMatch_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tag = { UE4CodeGen_Private::EPropertyClass::Struct, "Tag", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventHasTag_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TagContainer_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TagContainer = { UE4CodeGen_Private::EPropertyClass::Struct, "TagContainer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventHasTag_Parms, TagContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(NewProp_TagContainer_MetaData, ARRAY_COUNT(NewProp_TagContainer_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bExactMatch,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Tag,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TagContainer,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "GameplayTags" },
				{ "Keywords", "DoesContainerHaveTag" },
				{ "ModuleRelativePath", "Classes/BlueprintGameplayTagLibrary.h" },
				{ "ToolTip", "Check if the tag container has the specified tag\n\n@param TagContainer                  Container to check for the tag\n@param Tag                                   Tag to check for in the container\n@param bExactMatch                   If true, the tag has to be exactly present, if false then TagContainer will include it's parent tags while matching\n\n@return True if the container has the specified tag, false if it does not" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintGameplayTagLibrary, "HasTag", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(BlueprintGameplayTagLibrary_eventHasTag_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_IsGameplayTagValid()
	{
		struct BlueprintGameplayTagLibrary_eventIsGameplayTagValid_Parms
		{
			FGameplayTag GameplayTag;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((BlueprintGameplayTagLibrary_eventIsGameplayTagValid_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(BlueprintGameplayTagLibrary_eventIsGameplayTagValid_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameplayTag = { UE4CodeGen_Private::EPropertyClass::Struct, "GameplayTag", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventIsGameplayTagValid_Parms, GameplayTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GameplayTag,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "GameplayTags" },
				{ "ModuleRelativePath", "Classes/BlueprintGameplayTagLibrary.h" },
				{ "ToolTip", "Returns true if the passed in gameplay tag is non-null" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintGameplayTagLibrary, "IsGameplayTagValid", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(BlueprintGameplayTagLibrary_eventIsGameplayTagValid_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromArray()
	{
		struct BlueprintGameplayTagLibrary_eventMakeGameplayTagContainerFromArray_Parms
		{
			TArray<FGameplayTag> GameplayTags;
			FGameplayTagContainer ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventMakeGameplayTagContainerFromArray_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameplayTags_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GameplayTags = { UE4CodeGen_Private::EPropertyClass::Array, "GameplayTags", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventMakeGameplayTagContainerFromArray_Parms, GameplayTags), METADATA_PARAMS(NewProp_GameplayTags_MetaData, ARRAY_COUNT(NewProp_GameplayTags_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameplayTags_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "GameplayTags", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GameplayTags,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GameplayTags_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "GameplayTags" },
				{ "ModuleRelativePath", "Classes/BlueprintGameplayTagLibrary.h" },
				{ "ToolTip", "Creates a FGameplayTagContainer from the array of passed in tags" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintGameplayTagLibrary, "MakeGameplayTagContainerFromArray", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(BlueprintGameplayTagLibrary_eventMakeGameplayTagContainerFromArray_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromTag()
	{
		struct BlueprintGameplayTagLibrary_eventMakeGameplayTagContainerFromTag_Parms
		{
			FGameplayTag SingleTag;
			FGameplayTagContainer ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventMakeGameplayTagContainerFromTag_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SingleTag = { UE4CodeGen_Private::EPropertyClass::Struct, "SingleTag", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventMakeGameplayTagContainerFromTag_Parms, SingleTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SingleTag,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "GameplayTags" },
				{ "ModuleRelativePath", "Classes/BlueprintGameplayTagLibrary.h" },
				{ "ToolTip", "Creates a FGameplayTagContainer containing a single tag" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintGameplayTagLibrary, "MakeGameplayTagContainerFromTag", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(BlueprintGameplayTagLibrary_eventMakeGameplayTagContainerFromTag_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagQuery()
	{
		struct BlueprintGameplayTagLibrary_eventMakeGameplayTagQuery_Parms
		{
			FGameplayTagQuery TagQuery;
			FGameplayTagQuery ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventMakeGameplayTagQuery_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTagQuery, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TagQuery = { UE4CodeGen_Private::EPropertyClass::Struct, "TagQuery", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventMakeGameplayTagQuery_Parms, TagQuery), Z_Construct_UScriptStruct_FGameplayTagQuery, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TagQuery,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "GameplayTags" },
				{ "ModuleRelativePath", "Classes/BlueprintGameplayTagLibrary.h" },
				{ "ToolTip", "Creates a literal FGameplayTagQuery\n\n@param       TagQuery        value to set the FGameplayTagQuery to\n\n@return      The literal FGameplayTagQuery" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintGameplayTagLibrary, "MakeGameplayTagQuery", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(BlueprintGameplayTagLibrary_eventMakeGameplayTagQuery_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeLiteralGameplayTag()
	{
		struct BlueprintGameplayTagLibrary_eventMakeLiteralGameplayTag_Parms
		{
			FGameplayTag Value;
			FGameplayTag ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventMakeLiteralGameplayTag_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Struct, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventMakeLiteralGameplayTag_Parms, Value), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "GameplayTags" },
				{ "ModuleRelativePath", "Classes/BlueprintGameplayTagLibrary.h" },
				{ "ToolTip", "Creates a literal FGameplayTag" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintGameplayTagLibrary, "MakeLiteralGameplayTag", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(BlueprintGameplayTagLibrary_eventMakeLiteralGameplayTag_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeLiteralGameplayTagContainer()
	{
		struct BlueprintGameplayTagLibrary_eventMakeLiteralGameplayTagContainer_Parms
		{
			FGameplayTagContainer Value;
			FGameplayTagContainer ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventMakeLiteralGameplayTagContainer_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Struct, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventMakeLiteralGameplayTagContainer_Parms, Value), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "GameplayTags" },
				{ "ModuleRelativePath", "Classes/BlueprintGameplayTagLibrary.h" },
				{ "ToolTip", "Creates a literal FGameplayTagContainer" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintGameplayTagLibrary, "MakeLiteralGameplayTagContainer", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(BlueprintGameplayTagLibrary_eventMakeLiteralGameplayTagContainer_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesAnyTags()
	{
		struct BlueprintGameplayTagLibrary_eventMatchesAnyTags_Parms
		{
			FGameplayTag TagOne;
			FGameplayTagContainer OtherContainer;
			bool bExactMatch;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((BlueprintGameplayTagLibrary_eventMatchesAnyTags_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(BlueprintGameplayTagLibrary_eventMatchesAnyTags_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bExactMatch_SetBit = [](void* Obj){ ((BlueprintGameplayTagLibrary_eventMatchesAnyTags_Parms*)Obj)->bExactMatch = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExactMatch = { UE4CodeGen_Private::EPropertyClass::Bool, "bExactMatch", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(BlueprintGameplayTagLibrary_eventMatchesAnyTags_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bExactMatch_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherContainer_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OtherContainer = { UE4CodeGen_Private::EPropertyClass::Struct, "OtherContainer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventMatchesAnyTags_Parms, OtherContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(NewProp_OtherContainer_MetaData, ARRAY_COUNT(NewProp_OtherContainer_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TagOne = { UE4CodeGen_Private::EPropertyClass::Struct, "TagOne", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventMatchesAnyTags_Parms, TagOne), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bExactMatch,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OtherContainer,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TagOne,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "GameplayTags" },
				{ "ModuleRelativePath", "Classes/BlueprintGameplayTagLibrary.h" },
				{ "ToolTip", "Determine if TagOne matches against any tag in OtherContainer\n\n@param TagOne                        Tag to check for match\n@param OtherContainer        Container to check against.\n@param bExactMatch           If true, the tag has to be exactly present, if false then TagOne will include it's parent tags while matching\n\n@return True if TagOne matches any tags explicitly present in OtherContainer" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintGameplayTagLibrary, "MatchesAnyTags", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(BlueprintGameplayTagLibrary_eventMatchesAnyTags_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesTag()
	{
		struct BlueprintGameplayTagLibrary_eventMatchesTag_Parms
		{
			FGameplayTag TagOne;
			FGameplayTag TagTwo;
			bool bExactMatch;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((BlueprintGameplayTagLibrary_eventMatchesTag_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(BlueprintGameplayTagLibrary_eventMatchesTag_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bExactMatch_SetBit = [](void* Obj){ ((BlueprintGameplayTagLibrary_eventMatchesTag_Parms*)Obj)->bExactMatch = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExactMatch = { UE4CodeGen_Private::EPropertyClass::Bool, "bExactMatch", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(BlueprintGameplayTagLibrary_eventMatchesTag_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bExactMatch_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TagTwo = { UE4CodeGen_Private::EPropertyClass::Struct, "TagTwo", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventMatchesTag_Parms, TagTwo), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TagOne = { UE4CodeGen_Private::EPropertyClass::Struct, "TagOne", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventMatchesTag_Parms, TagOne), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bExactMatch,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TagTwo,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TagOne,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "GameplayTags" },
				{ "Keywords", "DoGameplayTagsMatch" },
				{ "ModuleRelativePath", "Classes/BlueprintGameplayTagLibrary.h" },
				{ "ToolTip", "Determine if TagOne matches against TagTwo\n\n@param TagOne                        Tag to check for match\n@param TagTwo                        Tag to check match against\n@param bExactMatch           If true, the tag has to be exactly present, if false then TagOne will include it's parent tags while matching\n\n@return True if TagOne matches TagTwo" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintGameplayTagLibrary, "MatchesTag", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(BlueprintGameplayTagLibrary_eventMatchesTag_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_GameplayTag()
	{
		struct BlueprintGameplayTagLibrary_eventNotEqual_GameplayTag_Parms
		{
			FGameplayTag A;
			FGameplayTag B;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((BlueprintGameplayTagLibrary_eventNotEqual_GameplayTag_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(BlueprintGameplayTagLibrary_eventNotEqual_GameplayTag_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_B = { UE4CodeGen_Private::EPropertyClass::Struct, "B", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventNotEqual_GameplayTag_Parms, B), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_A = { UE4CodeGen_Private::EPropertyClass::Struct, "A", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventNotEqual_GameplayTag_Parms, A), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_B,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_A,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "GameplayTags" },
				{ "CompactNodeTitle", "!=" },
				{ "DisplayName", "NotEqual (GameplayTag)" },
				{ "ModuleRelativePath", "Classes/BlueprintGameplayTagLibrary.h" },
				{ "ToolTip", "Returns true if the values are not equal (A != B)" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintGameplayTagLibrary, "NotEqual_GameplayTag", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(BlueprintGameplayTagLibrary_eventNotEqual_GameplayTag_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_GameplayTagContainer()
	{
		struct BlueprintGameplayTagLibrary_eventNotEqual_GameplayTagContainer_Parms
		{
			FGameplayTagContainer A;
			FGameplayTagContainer B;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((BlueprintGameplayTagLibrary_eventNotEqual_GameplayTagContainer_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(BlueprintGameplayTagLibrary_eventNotEqual_GameplayTagContainer_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_B = { UE4CodeGen_Private::EPropertyClass::Struct, "B", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventNotEqual_GameplayTagContainer_Parms, B), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(NewProp_B_MetaData, ARRAY_COUNT(NewProp_B_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_A = { UE4CodeGen_Private::EPropertyClass::Struct, "A", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventNotEqual_GameplayTagContainer_Parms, A), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(NewProp_A_MetaData, ARRAY_COUNT(NewProp_A_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_B,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_A,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "GameplayTags" },
				{ "CompactNodeTitle", "!=" },
				{ "DisplayName", "NotEqual (GameplayTagContainer)" },
				{ "ModuleRelativePath", "Classes/BlueprintGameplayTagLibrary.h" },
				{ "ToolTip", "Returns true if the values are not equal (A != B)" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintGameplayTagLibrary, "NotEqual_GameplayTagContainer", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(BlueprintGameplayTagLibrary_eventNotEqual_GameplayTagContainer_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_TagContainerTagContainer()
	{
		struct BlueprintGameplayTagLibrary_eventNotEqual_TagContainerTagContainer_Parms
		{
			FGameplayTagContainer A;
			FString B;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((BlueprintGameplayTagLibrary_eventNotEqual_TagContainerTagContainer_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(BlueprintGameplayTagLibrary_eventNotEqual_TagContainerTagContainer_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_B = { UE4CodeGen_Private::EPropertyClass::Str, "B", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventNotEqual_TagContainerTagContainer_Parms, B), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_A = { UE4CodeGen_Private::EPropertyClass::Struct, "A", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventNotEqual_TagContainerTagContainer_Parms, A), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_B,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_A,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "BlueprintInternalUseOnly", "TRUE" },
				{ "Category", "PinOptions" },
				{ "ModuleRelativePath", "Classes/BlueprintGameplayTagLibrary.h" },
				{ "ToolTip", "Checks if a gameplay tag containers's name and a string are not equal to one another" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintGameplayTagLibrary, "NotEqual_TagContainerTagContainer", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(BlueprintGameplayTagLibrary_eventNotEqual_TagContainerTagContainer_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_TagTag()
	{
		struct BlueprintGameplayTagLibrary_eventNotEqual_TagTag_Parms
		{
			FGameplayTag A;
			FString B;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((BlueprintGameplayTagLibrary_eventNotEqual_TagTag_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(BlueprintGameplayTagLibrary_eventNotEqual_TagTag_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_B = { UE4CodeGen_Private::EPropertyClass::Str, "B", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventNotEqual_TagTag_Parms, B), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_A = { UE4CodeGen_Private::EPropertyClass::Struct, "A", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventNotEqual_TagTag_Parms, A), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_B,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_A,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "BlueprintInternalUseOnly", "TRUE" },
				{ "Category", "PinOptions" },
				{ "ModuleRelativePath", "Classes/BlueprintGameplayTagLibrary.h" },
				{ "ToolTip", "Checks if a gameplay tag's name and a string are not equal to one another" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintGameplayTagLibrary, "NotEqual_TagTag", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(BlueprintGameplayTagLibrary_eventNotEqual_TagTag_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_RemoveGameplayTag()
	{
		struct BlueprintGameplayTagLibrary_eventRemoveGameplayTag_Parms
		{
			FGameplayTagContainer TagContainer;
			FGameplayTag Tag;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((BlueprintGameplayTagLibrary_eventRemoveGameplayTag_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(BlueprintGameplayTagLibrary_eventRemoveGameplayTag_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tag = { UE4CodeGen_Private::EPropertyClass::Struct, "Tag", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventRemoveGameplayTag_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TagContainer = { UE4CodeGen_Private::EPropertyClass::Struct, "TagContainer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000180, 1, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventRemoveGameplayTag_Parms, TagContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Tag,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TagContainer,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "GameplayTags" },
				{ "ModuleRelativePath", "Classes/BlueprintGameplayTagLibrary.h" },
				{ "ToolTip", "Remove a single tag from the passed in tag container, returns true if found\n\n@param InOutTagContainer             The container that will be appended too.\n@param Tag                                   The tag to add to the container" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintGameplayTagLibrary, "RemoveGameplayTag", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(BlueprintGameplayTagLibrary_eventRemoveGameplayTag_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBlueprintGameplayTagLibrary_NoRegister()
	{
		return UBlueprintGameplayTagLibrary::StaticClass();
	}
	UClass* Z_Construct_UClass_UBlueprintGameplayTagLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
				(UObject* (*)())Z_Construct_UPackage__Script_GameplayTags,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_AddGameplayTag, "AddGameplayTag" }, // 94423554
				{ &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_AppendGameplayTagContainers, "AppendGameplayTagContainers" }, // 1329858971
				{ &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_BreakGameplayTagContainer, "BreakGameplayTagContainer" }, // 3505128865
				{ &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_DoesContainerMatchTagQuery, "DoesContainerMatchTagQuery" }, // 3197735556
				{ &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_DoesTagAssetInterfaceHaveTag, "DoesTagAssetInterfaceHaveTag" }, // 3220060408
				{ &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_EqualEqual_GameplayTag, "EqualEqual_GameplayTag" }, // 3386599163
				{ &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_EqualEqual_GameplayTagContainer, "EqualEqual_GameplayTagContainer" }, // 69492152
				{ &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetAllActorsOfClassMatchingTagQuery, "GetAllActorsOfClassMatchingTagQuery" }, // 3624571858
				{ &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTag, "GetDebugStringFromGameplayTag" }, // 680349274
				{ &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTagContainer, "GetDebugStringFromGameplayTagContainer" }, // 4116676581
				{ &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetNumGameplayTagsInContainer, "GetNumGameplayTagsInContainer" }, // 3431896643
				{ &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetTagName, "GetTagName" }, // 813540973
				{ &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllMatchingGameplayTags, "HasAllMatchingGameplayTags" }, // 2087407614
				{ &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllTags, "HasAllTags" }, // 1624506424
				{ &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAnyTags, "HasAnyTags" }, // 3867023294
				{ &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasTag, "HasTag" }, // 3602353361
				{ &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_IsGameplayTagValid, "IsGameplayTagValid" }, // 1999603636
				{ &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromArray, "MakeGameplayTagContainerFromArray" }, // 3928886956
				{ &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromTag, "MakeGameplayTagContainerFromTag" }, // 517214199
				{ &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagQuery, "MakeGameplayTagQuery" }, // 997737321
				{ &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeLiteralGameplayTag, "MakeLiteralGameplayTag" }, // 1270658294
				{ &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeLiteralGameplayTagContainer, "MakeLiteralGameplayTagContainer" }, // 4164231536
				{ &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesAnyTags, "MatchesAnyTags" }, // 829965350
				{ &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesTag, "MatchesTag" }, // 489904361
				{ &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_GameplayTag, "NotEqual_GameplayTag" }, // 4293173251
				{ &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_GameplayTagContainer, "NotEqual_GameplayTagContainer" }, // 868766384
				{ &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_TagContainerTagContainer, "NotEqual_TagContainerTagContainer" }, // 1252450460
				{ &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_TagTag, "NotEqual_TagTag" }, // 1131525585
				{ &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_RemoveGameplayTag, "RemoveGameplayTag" }, // 474568480
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "BlueprintGameplayTagLibrary.h" },
				{ "ModuleRelativePath", "Classes/BlueprintGameplayTagLibrary.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UBlueprintGameplayTagLibrary>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UBlueprintGameplayTagLibrary::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00080080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(UBlueprintGameplayTagLibrary, 3857305703);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlueprintGameplayTagLibrary(Z_Construct_UClass_UBlueprintGameplayTagLibrary, &UBlueprintGameplayTagLibrary::StaticClass, TEXT("/Script/GameplayTags"), TEXT("UBlueprintGameplayTagLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintGameplayTagLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
