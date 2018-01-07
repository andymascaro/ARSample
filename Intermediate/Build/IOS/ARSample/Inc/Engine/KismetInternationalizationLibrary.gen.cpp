// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Kismet/KismetInternationalizationLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKismetInternationalizationLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UKismetInternationalizationLibrary_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UKismetInternationalizationLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInternationalizationLibrary_ClearCurrentAssetGroupCulture();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentAssetGroupCulture();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentCulture();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLanguage();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLocale();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale();
// End Cross Module References
	void UKismetInternationalizationLibrary::StaticRegisterNativesUKismetInternationalizationLibrary()
	{
		UClass* Class = UKismetInternationalizationLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearCurrentAssetGroupCulture", (Native)&UKismetInternationalizationLibrary::execClearCurrentAssetGroupCulture },
			{ "GetCurrentAssetGroupCulture", (Native)&UKismetInternationalizationLibrary::execGetCurrentAssetGroupCulture },
			{ "GetCurrentCulture", (Native)&UKismetInternationalizationLibrary::execGetCurrentCulture },
			{ "GetCurrentLanguage", (Native)&UKismetInternationalizationLibrary::execGetCurrentLanguage },
			{ "GetCurrentLocale", (Native)&UKismetInternationalizationLibrary::execGetCurrentLocale },
			{ "SetCurrentAssetGroupCulture", (Native)&UKismetInternationalizationLibrary::execSetCurrentAssetGroupCulture },
			{ "SetCurrentCulture", (Native)&UKismetInternationalizationLibrary::execSetCurrentCulture },
			{ "SetCurrentLanguage", (Native)&UKismetInternationalizationLibrary::execSetCurrentLanguage },
			{ "SetCurrentLanguageAndLocale", (Native)&UKismetInternationalizationLibrary::execSetCurrentLanguageAndLocale },
			{ "SetCurrentLocale", (Native)&UKismetInternationalizationLibrary::execSetCurrentLocale },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UKismetInternationalizationLibrary_ClearCurrentAssetGroupCulture()
	{
		struct KismetInternationalizationLibrary_eventClearCurrentAssetGroupCulture_Parms
		{
			FName AssetGroup;
			bool SaveToConfig;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveToConfig_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			auto NewProp_SaveToConfig_SetBit = [](void* Obj){ ((KismetInternationalizationLibrary_eventClearCurrentAssetGroupCulture_Parms*)Obj)->SaveToConfig = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SaveToConfig = { UE4CodeGen_Private::EPropertyClass::Bool, "SaveToConfig", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000082, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KismetInternationalizationLibrary_eventClearCurrentAssetGroupCulture_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_SaveToConfig_SetBit)>::SetBit, METADATA_PARAMS(NewProp_SaveToConfig_MetaData, ARRAY_COUNT(NewProp_SaveToConfig_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetGroup_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_AssetGroup = { UE4CodeGen_Private::EPropertyClass::Name, "AssetGroup", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(KismetInternationalizationLibrary_eventClearCurrentAssetGroupCulture_Parms, AssetGroup), METADATA_PARAMS(NewProp_AssetGroup_MetaData, ARRAY_COUNT(NewProp_AssetGroup_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SaveToConfig,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AssetGroup,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "AdvancedDisplay", "1" },
				{ "Category", "Utilities|Internationalization" },
				{ "CPP_Default_SaveToConfig", "false" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetInternationalizationLibrary.h" },
				{ "ToolTip", "Clear the given asset group category culture.\n@param AssetGroup The asset group to clear the culture for.\n@param SaveToConfig If true, save the new setting to the users' \"GameUserSettings\" config so that it persists after a reload." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInternationalizationLibrary, "ClearCurrentAssetGroupCulture", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(KismetInternationalizationLibrary_eventClearCurrentAssetGroupCulture_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentAssetGroupCulture()
	{
		struct KismetInternationalizationLibrary_eventGetCurrentAssetGroupCulture_Parms
		{
			FName AssetGroup;
			FString ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetInternationalizationLibrary_eventGetCurrentAssetGroupCulture_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetGroup_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_AssetGroup = { UE4CodeGen_Private::EPropertyClass::Name, "AssetGroup", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(KismetInternationalizationLibrary_eventGetCurrentAssetGroupCulture_Parms, AssetGroup), METADATA_PARAMS(NewProp_AssetGroup_MetaData, ARRAY_COUNT(NewProp_AssetGroup_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AssetGroup,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Utilities|Internationalization" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetInternationalizationLibrary.h" },
				{ "ToolTip", "Get the given asset group category culture.\n@note Returns the current language if the group category doesn't have a culture override.\n@param AssetGroup The asset group to get the culture for.\n@return The culture as an IETF language tag (eg, \"zh-Hans-CN\")." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInternationalizationLibrary, "GetCurrentAssetGroupCulture", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(KismetInternationalizationLibrary_eventGetCurrentAssetGroupCulture_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentCulture()
	{
		struct KismetInternationalizationLibrary_eventGetCurrentCulture_Parms
		{
			FString ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetInternationalizationLibrary_eventGetCurrentCulture_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Utilities|Internationalization" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetInternationalizationLibrary.h" },
				{ "ToolTip", "Get the current culture as an IETF language tag:\n - A two-letter ISO 639-1 language code (eg, \"zh\").\n - An optional four-letter ISO 15924 script code (eg, \"Hans\").\n - An optional two-letter ISO 3166-1 country code (eg, \"CN\").\n@note This function exists for legacy API parity with SetCurrentCulture and is equivalent to GetCurrentLanguage.\n@return The culture as an IETF language tag (eg, \"zh-Hans-CN\")." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInternationalizationLibrary, "GetCurrentCulture", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(KismetInternationalizationLibrary_eventGetCurrentCulture_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLanguage()
	{
		struct KismetInternationalizationLibrary_eventGetCurrentLanguage_Parms
		{
			FString ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetInternationalizationLibrary_eventGetCurrentLanguage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Utilities|Internationalization" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetInternationalizationLibrary.h" },
				{ "ToolTip", "Get the current language (for localization) as an IETF language tag:\n - A two-letter ISO 639-1 language code (eg, \"zh\").\n - An optional four-letter ISO 15924 script code (eg, \"Hans\").\n - An optional two-letter ISO 3166-1 country code (eg, \"CN\").\n@return The language as an IETF language tag (eg, \"zh-Hans-CN\")." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInternationalizationLibrary, "GetCurrentLanguage", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(KismetInternationalizationLibrary_eventGetCurrentLanguage_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLocale()
	{
		struct KismetInternationalizationLibrary_eventGetCurrentLocale_Parms
		{
			FString ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetInternationalizationLibrary_eventGetCurrentLocale_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Utilities|Internationalization" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetInternationalizationLibrary.h" },
				{ "ToolTip", "Get the current locale (for internationalization) as an IETF language tag:\n - A two-letter ISO 639-1 language code (eg, \"zh\").\n - An optional four-letter ISO 15924 script code (eg, \"Hans\").\n - An optional two-letter ISO 3166-1 country code (eg, \"CN\").\n@return The locale as an IETF language tag (eg, \"zh-Hans-CN\")." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInternationalizationLibrary, "GetCurrentLocale", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(KismetInternationalizationLibrary_eventGetCurrentLocale_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture()
	{
		struct KismetInternationalizationLibrary_eventSetCurrentAssetGroupCulture_Parms
		{
			FName AssetGroup;
			FString Culture;
			bool SaveToConfig;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((KismetInternationalizationLibrary_eventSetCurrentAssetGroupCulture_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KismetInternationalizationLibrary_eventSetCurrentAssetGroupCulture_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveToConfig_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			auto NewProp_SaveToConfig_SetBit = [](void* Obj){ ((KismetInternationalizationLibrary_eventSetCurrentAssetGroupCulture_Parms*)Obj)->SaveToConfig = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SaveToConfig = { UE4CodeGen_Private::EPropertyClass::Bool, "SaveToConfig", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000082, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KismetInternationalizationLibrary_eventSetCurrentAssetGroupCulture_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_SaveToConfig_SetBit)>::SetBit, METADATA_PARAMS(NewProp_SaveToConfig_MetaData, ARRAY_COUNT(NewProp_SaveToConfig_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Culture_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Culture = { UE4CodeGen_Private::EPropertyClass::Str, "Culture", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetInternationalizationLibrary_eventSetCurrentAssetGroupCulture_Parms, Culture), METADATA_PARAMS(NewProp_Culture_MetaData, ARRAY_COUNT(NewProp_Culture_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetGroup_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_AssetGroup = { UE4CodeGen_Private::EPropertyClass::Name, "AssetGroup", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(KismetInternationalizationLibrary_eventSetCurrentAssetGroupCulture_Parms, AssetGroup), METADATA_PARAMS(NewProp_AssetGroup_MetaData, ARRAY_COUNT(NewProp_AssetGroup_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SaveToConfig,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Culture,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AssetGroup,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "AdvancedDisplay", "2" },
				{ "Category", "Utilities|Internationalization" },
				{ "CPP_Default_SaveToConfig", "false" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetInternationalizationLibrary.h" },
				{ "ToolTip", "Set the given asset group category culture from an IETF language tag (eg, \"zh-Hans-CN\").\n@param AssetGroup The asset group to set the culture for.\n@param Culture The culture to set, as an IETF language tag (eg, \"zh-Hans-CN\").\n@param SaveToConfig If true, save the new setting to the users' \"GameUserSettings\" config so that it persists after a reload.\n@return True if the culture was set, false otherwise." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInternationalizationLibrary, "SetCurrentAssetGroupCulture", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(KismetInternationalizationLibrary_eventSetCurrentAssetGroupCulture_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture()
	{
		struct KismetInternationalizationLibrary_eventSetCurrentCulture_Parms
		{
			FString Culture;
			bool SaveToConfig;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((KismetInternationalizationLibrary_eventSetCurrentCulture_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KismetInternationalizationLibrary_eventSetCurrentCulture_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveToConfig_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			auto NewProp_SaveToConfig_SetBit = [](void* Obj){ ((KismetInternationalizationLibrary_eventSetCurrentCulture_Parms*)Obj)->SaveToConfig = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SaveToConfig = { UE4CodeGen_Private::EPropertyClass::Bool, "SaveToConfig", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000082, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KismetInternationalizationLibrary_eventSetCurrentCulture_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_SaveToConfig_SetBit)>::SetBit, METADATA_PARAMS(NewProp_SaveToConfig_MetaData, ARRAY_COUNT(NewProp_SaveToConfig_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Culture_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Culture = { UE4CodeGen_Private::EPropertyClass::Str, "Culture", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetInternationalizationLibrary_eventSetCurrentCulture_Parms, Culture), METADATA_PARAMS(NewProp_Culture_MetaData, ARRAY_COUNT(NewProp_Culture_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SaveToConfig,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Culture,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "AdvancedDisplay", "1" },
				{ "Category", "Utilities|Internationalization" },
				{ "CPP_Default_SaveToConfig", "false" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetInternationalizationLibrary.h" },
				{ "ToolTip", "Set the current culture.\n@note This function is a sledgehammer, and will set both the language and locale, as well as clear out any asset group cultures that may be set.\n@param Culture The culture to set, as an IETF language tag (eg, \"zh-Hans-CN\").\n@param SaveToConfig If true, save the new setting to the users' \"GameUserSettings\" config so that it persists after a reload.\n@return True if the culture was set, false otherwise." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInternationalizationLibrary, "SetCurrentCulture", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(KismetInternationalizationLibrary_eventSetCurrentCulture_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage()
	{
		struct KismetInternationalizationLibrary_eventSetCurrentLanguage_Parms
		{
			FString Culture;
			bool SaveToConfig;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((KismetInternationalizationLibrary_eventSetCurrentLanguage_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KismetInternationalizationLibrary_eventSetCurrentLanguage_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveToConfig_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			auto NewProp_SaveToConfig_SetBit = [](void* Obj){ ((KismetInternationalizationLibrary_eventSetCurrentLanguage_Parms*)Obj)->SaveToConfig = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SaveToConfig = { UE4CodeGen_Private::EPropertyClass::Bool, "SaveToConfig", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000082, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KismetInternationalizationLibrary_eventSetCurrentLanguage_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_SaveToConfig_SetBit)>::SetBit, METADATA_PARAMS(NewProp_SaveToConfig_MetaData, ARRAY_COUNT(NewProp_SaveToConfig_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Culture_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Culture = { UE4CodeGen_Private::EPropertyClass::Str, "Culture", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetInternationalizationLibrary_eventSetCurrentLanguage_Parms, Culture), METADATA_PARAMS(NewProp_Culture_MetaData, ARRAY_COUNT(NewProp_Culture_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SaveToConfig,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Culture,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "AdvancedDisplay", "1" },
				{ "Category", "Utilities|Internationalization" },
				{ "CPP_Default_SaveToConfig", "false" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetInternationalizationLibrary.h" },
				{ "ToolTip", "Set *only* the current language (for localization).\n@note Unless you're doing something advanced, you likely want SetCurrentLanguageAndLocale or SetCurrentCulture instead.\n@param Culture The language to set, as an IETF language tag (eg, \"zh-Hans-CN\").\n@param SaveToConfig If true, save the new setting to the users' \"GameUserSettings\" config so that it persists after a reload.\n@return True if the language was set, false otherwise." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInternationalizationLibrary, "SetCurrentLanguage", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(KismetInternationalizationLibrary_eventSetCurrentLanguage_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale()
	{
		struct KismetInternationalizationLibrary_eventSetCurrentLanguageAndLocale_Parms
		{
			FString Culture;
			bool SaveToConfig;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((KismetInternationalizationLibrary_eventSetCurrentLanguageAndLocale_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KismetInternationalizationLibrary_eventSetCurrentLanguageAndLocale_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveToConfig_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			auto NewProp_SaveToConfig_SetBit = [](void* Obj){ ((KismetInternationalizationLibrary_eventSetCurrentLanguageAndLocale_Parms*)Obj)->SaveToConfig = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SaveToConfig = { UE4CodeGen_Private::EPropertyClass::Bool, "SaveToConfig", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000082, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KismetInternationalizationLibrary_eventSetCurrentLanguageAndLocale_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_SaveToConfig_SetBit)>::SetBit, METADATA_PARAMS(NewProp_SaveToConfig_MetaData, ARRAY_COUNT(NewProp_SaveToConfig_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Culture_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Culture = { UE4CodeGen_Private::EPropertyClass::Str, "Culture", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetInternationalizationLibrary_eventSetCurrentLanguageAndLocale_Parms, Culture), METADATA_PARAMS(NewProp_Culture_MetaData, ARRAY_COUNT(NewProp_Culture_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SaveToConfig,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Culture,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "AdvancedDisplay", "1" },
				{ "Category", "Utilities|Internationalization" },
				{ "CPP_Default_SaveToConfig", "false" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetInternationalizationLibrary.h" },
				{ "ToolTip", "Set the current language (for localization) and locale (for internationalization).\n@param Culture The language and locale to set, as an IETF language tag (eg, \"zh-Hans-CN\").\n@param SaveToConfig If true, save the new setting to the users' \"GameUserSettings\" config so that it persists after a reload.\n@return True if the language and locale were set, false otherwise." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInternationalizationLibrary, "SetCurrentLanguageAndLocale", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(KismetInternationalizationLibrary_eventSetCurrentLanguageAndLocale_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale()
	{
		struct KismetInternationalizationLibrary_eventSetCurrentLocale_Parms
		{
			FString Culture;
			bool SaveToConfig;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((KismetInternationalizationLibrary_eventSetCurrentLocale_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KismetInternationalizationLibrary_eventSetCurrentLocale_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveToConfig_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			auto NewProp_SaveToConfig_SetBit = [](void* Obj){ ((KismetInternationalizationLibrary_eventSetCurrentLocale_Parms*)Obj)->SaveToConfig = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SaveToConfig = { UE4CodeGen_Private::EPropertyClass::Bool, "SaveToConfig", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000082, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KismetInternationalizationLibrary_eventSetCurrentLocale_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_SaveToConfig_SetBit)>::SetBit, METADATA_PARAMS(NewProp_SaveToConfig_MetaData, ARRAY_COUNT(NewProp_SaveToConfig_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Culture_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Culture = { UE4CodeGen_Private::EPropertyClass::Str, "Culture", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetInternationalizationLibrary_eventSetCurrentLocale_Parms, Culture), METADATA_PARAMS(NewProp_Culture_MetaData, ARRAY_COUNT(NewProp_Culture_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SaveToConfig,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Culture,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "AdvancedDisplay", "1" },
				{ "Category", "Utilities|Internationalization" },
				{ "CPP_Default_SaveToConfig", "false" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetInternationalizationLibrary.h" },
				{ "ToolTip", "Set *only* the current locale (for internationalization).\n@note Unless you're doing something advanced, you likely want SetCurrentLanguageAndLocale or SetCurrentCulture instead.\n@param Culture The locale to set, as an IETF language tag (eg, \"zh-Hans-CN\").\n@param SaveToConfig If true, save the new setting to the users' \"GameUserSettings\" config so that it persists after a reload.\n@return True if the locale was set, false otherwise." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInternationalizationLibrary, "SetCurrentLocale", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(KismetInternationalizationLibrary_eventSetCurrentLocale_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UKismetInternationalizationLibrary_NoRegister()
	{
		return UKismetInternationalizationLibrary::StaticClass();
	}
	UClass* Z_Construct_UClass_UKismetInternationalizationLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UKismetInternationalizationLibrary_ClearCurrentAssetGroupCulture, "ClearCurrentAssetGroupCulture" }, // 2222764250
				{ &Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentAssetGroupCulture, "GetCurrentAssetGroupCulture" }, // 2644934589
				{ &Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentCulture, "GetCurrentCulture" }, // 3943619033
				{ &Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLanguage, "GetCurrentLanguage" }, // 1323201228
				{ &Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLocale, "GetCurrentLocale" }, // 4197120690
				{ &Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture, "SetCurrentAssetGroupCulture" }, // 4072566764
				{ &Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture, "SetCurrentCulture" }, // 1876591005
				{ &Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage, "SetCurrentLanguage" }, // 2345830264
				{ &Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale, "SetCurrentLanguageAndLocale" }, // 1130661499
				{ &Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale, "SetCurrentLocale" }, // 2569675968
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintThreadSafe", "" },
				{ "IncludePath", "Kismet/KismetInternationalizationLibrary.h" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetInternationalizationLibrary.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UKismetInternationalizationLibrary>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UKismetInternationalizationLibrary::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
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
	IMPLEMENT_CLASS(UKismetInternationalizationLibrary, 2151280180);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKismetInternationalizationLibrary(Z_Construct_UClass_UKismetInternationalizationLibrary, &UKismetInternationalizationLibrary::StaticClass, TEXT("/Script/Engine"), TEXT("UKismetInternationalizationLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKismetInternationalizationLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
