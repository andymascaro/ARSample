// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/GameplayTagAssetInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayTagAssetInterface() {}
// Cross Module References
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagAssetInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_GameplayTags();
	GAMEPLAYTAGS_API UFunction* Z_Construct_UFunction_UGameplayTagAssetInterface_GetOwnedGameplayTags();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	GAMEPLAYTAGS_API UFunction* Z_Construct_UFunction_UGameplayTagAssetInterface_HasAllMatchingGameplayTags();
	GAMEPLAYTAGS_API UFunction* Z_Construct_UFunction_UGameplayTagAssetInterface_HasAnyMatchingGameplayTags();
	GAMEPLAYTAGS_API UFunction* Z_Construct_UFunction_UGameplayTagAssetInterface_HasMatchingGameplayTag();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
	void UGameplayTagAssetInterface::StaticRegisterNativesUGameplayTagAssetInterface()
	{
		UClass* Class = UGameplayTagAssetInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetOwnedGameplayTags", (Native)&IGameplayTagAssetInterface::execGetOwnedGameplayTags },
			{ "HasAllMatchingGameplayTags", (Native)&IGameplayTagAssetInterface::execHasAllMatchingGameplayTags },
			{ "HasAnyMatchingGameplayTags", (Native)&IGameplayTagAssetInterface::execHasAnyMatchingGameplayTags },
			{ "HasMatchingGameplayTag", (Native)&IGameplayTagAssetInterface::execHasMatchingGameplayTag },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UGameplayTagAssetInterface_GetOwnedGameplayTags()
	{
		struct GameplayTagAssetInterface_eventGetOwnedGameplayTags_Parms
		{
			FGameplayTagContainer TagContainer;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TagContainer = { UE4CodeGen_Private::EPropertyClass::Struct, "TagContainer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(GameplayTagAssetInterface_eventGetOwnedGameplayTags_Parms, TagContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TagContainer,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "GameplayTags" },
				{ "ModuleRelativePath", "Classes/GameplayTagAssetInterface.h" },
				{ "ToolTip", "Get any owned gameplay tags on the asset\n\n@param OutTags       [OUT] Set of tags on the asset" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayTagAssetInterface, "GetOwnedGameplayTags", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54420400, sizeof(GameplayTagAssetInterface_eventGetOwnedGameplayTags_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGameplayTagAssetInterface_HasAllMatchingGameplayTags()
	{
		struct GameplayTagAssetInterface_eventHasAllMatchingGameplayTags_Parms
		{
			FGameplayTagContainer TagContainer;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((GameplayTagAssetInterface_eventHasAllMatchingGameplayTags_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(GameplayTagAssetInterface_eventHasAllMatchingGameplayTags_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TagContainer_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TagContainer = { UE4CodeGen_Private::EPropertyClass::Struct, "TagContainer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(GameplayTagAssetInterface_eventHasAllMatchingGameplayTags_Parms, TagContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(NewProp_TagContainer_MetaData, ARRAY_COUNT(NewProp_TagContainer_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TagContainer,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "GameplayTags" },
				{ "ModuleRelativePath", "Classes/GameplayTagAssetInterface.h" },
				{ "ToolTip", "Check if the asset has gameplay tags that matches against all of the specified tags (expands to include parents of asset tags)\n\n@param TagContainer                  Tag container to check for a match\n\n@return True if the asset has matches all of the gameplay tags, will be true if container is empty" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayTagAssetInterface, "HasAllMatchingGameplayTags", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54420400, sizeof(GameplayTagAssetInterface_eventHasAllMatchingGameplayTags_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGameplayTagAssetInterface_HasAnyMatchingGameplayTags()
	{
		struct GameplayTagAssetInterface_eventHasAnyMatchingGameplayTags_Parms
		{
			FGameplayTagContainer TagContainer;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((GameplayTagAssetInterface_eventHasAnyMatchingGameplayTags_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(GameplayTagAssetInterface_eventHasAnyMatchingGameplayTags_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TagContainer_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TagContainer = { UE4CodeGen_Private::EPropertyClass::Struct, "TagContainer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(GameplayTagAssetInterface_eventHasAnyMatchingGameplayTags_Parms, TagContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(NewProp_TagContainer_MetaData, ARRAY_COUNT(NewProp_TagContainer_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TagContainer,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "GameplayTags" },
				{ "ModuleRelativePath", "Classes/GameplayTagAssetInterface.h" },
				{ "ToolTip", "Check if the asset has gameplay tags that matches against any of the specified tags (expands to include parents of asset tags)\n\n@param TagContainer                  Tag container to check for a match\n\n@return True if the asset has matches any of the gameplay tags, will be false if container is empty" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayTagAssetInterface, "HasAnyMatchingGameplayTags", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54420400, sizeof(GameplayTagAssetInterface_eventHasAnyMatchingGameplayTags_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGameplayTagAssetInterface_HasMatchingGameplayTag()
	{
		struct GameplayTagAssetInterface_eventHasMatchingGameplayTag_Parms
		{
			FGameplayTag TagToCheck;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((GameplayTagAssetInterface_eventHasMatchingGameplayTag_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(GameplayTagAssetInterface_eventHasMatchingGameplayTag_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TagToCheck = { UE4CodeGen_Private::EPropertyClass::Struct, "TagToCheck", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GameplayTagAssetInterface_eventHasMatchingGameplayTag_Parms, TagToCheck), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TagToCheck,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "GameplayTags" },
				{ "ModuleRelativePath", "Classes/GameplayTagAssetInterface.h" },
				{ "ToolTip", "Check if the asset has a gameplay tag that matches against the specified tag (expands to include parents of asset tags)\n\n@param TagToCheck    Tag to check for a match\n\n@return True if the asset has a gameplay tag that matches, false if not" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayTagAssetInterface, "HasMatchingGameplayTag", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020400, sizeof(GameplayTagAssetInterface_eventHasMatchingGameplayTag_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister()
	{
		return UGameplayTagAssetInterface::StaticClass();
	}
	UClass* Z_Construct_UClass_UGameplayTagAssetInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UInterface,
				(UObject* (*)())Z_Construct_UPackage__Script_GameplayTags,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UGameplayTagAssetInterface_GetOwnedGameplayTags, "GetOwnedGameplayTags" }, // 944914215
				{ &Z_Construct_UFunction_UGameplayTagAssetInterface_HasAllMatchingGameplayTags, "HasAllMatchingGameplayTags" }, // 883012179
				{ &Z_Construct_UFunction_UGameplayTagAssetInterface_HasAnyMatchingGameplayTags, "HasAnyMatchingGameplayTags" }, // 532639872
				{ &Z_Construct_UFunction_UGameplayTagAssetInterface_HasMatchingGameplayTag, "HasMatchingGameplayTag" }, // 1018147926
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CannotImplementInterfaceInBlueprint", "" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Classes/GameplayTagAssetInterface.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<IGameplayTagAssetInterface>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UGameplayTagAssetInterface::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00084081u,
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
	IMPLEMENT_CLASS(UGameplayTagAssetInterface, 2370529641);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameplayTagAssetInterface(Z_Construct_UClass_UGameplayTagAssetInterface, &UGameplayTagAssetInterface::StaticClass, TEXT("/Script/GameplayTags"), TEXT("UGameplayTagAssetInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayTagAssetInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
