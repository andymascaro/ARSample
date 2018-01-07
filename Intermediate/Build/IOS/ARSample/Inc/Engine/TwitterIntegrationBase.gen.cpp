// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/TwitterIntegrationBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTwitterIntegrationBase() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETwitterIntegrationDelegate();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETwitterRequestMethod();
	ENGINE_API UClass* Z_Construct_UClass_UTwitterIntegrationBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTwitterIntegrationBase();
	ENGINE_API UClass* Z_Construct_UClass_UPlatformInterfaceBase();
	ENGINE_API UFunction* Z_Construct_UFunction_UTwitterIntegrationBase_AuthorizeAccounts();
	ENGINE_API UFunction* Z_Construct_UFunction_UTwitterIntegrationBase_CanShowTweetUI();
	ENGINE_API UFunction* Z_Construct_UFunction_UTwitterIntegrationBase_GetAccountName();
	ENGINE_API UFunction* Z_Construct_UFunction_UTwitterIntegrationBase_GetNumAccounts();
	ENGINE_API UFunction* Z_Construct_UFunction_UTwitterIntegrationBase_Init();
	ENGINE_API UFunction* Z_Construct_UFunction_UTwitterIntegrationBase_ShowTweetUI();
	ENGINE_API UFunction* Z_Construct_UFunction_UTwitterIntegrationBase_TwitterRequest();
// End Cross Module References
	static UEnum* ETwitterIntegrationDelegate_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETwitterIntegrationDelegate, Z_Construct_UPackage__Script_Engine(), TEXT("ETwitterIntegrationDelegate"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETwitterIntegrationDelegate(ETwitterIntegrationDelegate_StaticEnum, TEXT("/Script/Engine"), TEXT("ETwitterIntegrationDelegate"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ETwitterIntegrationDelegate_CRC() { return 84568129U; }
	UEnum* Z_Construct_UEnum_Engine_ETwitterIntegrationDelegate()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETwitterIntegrationDelegate"), 0, Get_Z_Construct_UEnum_Engine_ETwitterIntegrationDelegate_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "TID_AuthorizeComplete", (int64)TID_AuthorizeComplete },
				{ "TID_TweetUIComplete", (int64)TID_TweetUIComplete },
				{ "TID_RequestComplete", (int64)TID_RequestComplete },
				{ "TID_MAX", (int64)TID_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/TwitterIntegrationBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ETwitterIntegrationDelegate",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"ETwitterIntegrationDelegate",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ETwitterRequestMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETwitterRequestMethod, Z_Construct_UPackage__Script_Engine(), TEXT("ETwitterRequestMethod"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETwitterRequestMethod(ETwitterRequestMethod_StaticEnum, TEXT("/Script/Engine"), TEXT("ETwitterRequestMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ETwitterRequestMethod_CRC() { return 2498895593U; }
	UEnum* Z_Construct_UEnum_Engine_ETwitterRequestMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETwitterRequestMethod"), 0, Get_Z_Construct_UEnum_Engine_ETwitterRequestMethod_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "TRM_Get", (int64)TRM_Get },
				{ "TRM_Post", (int64)TRM_Post },
				{ "TRM_Delete", (int64)TRM_Delete },
				{ "TRM_MAX", (int64)TRM_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/TwitterIntegrationBase.h" },
				{ "ToolTip", "The possible twitter request methods" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ETwitterRequestMethod",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"ETwitterRequestMethod",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UTwitterIntegrationBase::StaticRegisterNativesUTwitterIntegrationBase()
	{
		UClass* Class = UTwitterIntegrationBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AuthorizeAccounts", (Native)&UTwitterIntegrationBase::execAuthorizeAccounts },
			{ "CanShowTweetUI", (Native)&UTwitterIntegrationBase::execCanShowTweetUI },
			{ "GetAccountName", (Native)&UTwitterIntegrationBase::execGetAccountName },
			{ "GetNumAccounts", (Native)&UTwitterIntegrationBase::execGetNumAccounts },
			{ "Init", (Native)&UTwitterIntegrationBase::execInit },
			{ "ShowTweetUI", (Native)&UTwitterIntegrationBase::execShowTweetUI },
			{ "TwitterRequest", (Native)&UTwitterIntegrationBase::execTwitterRequest },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UTwitterIntegrationBase_AuthorizeAccounts()
	{
		struct TwitterIntegrationBase_eventAuthorizeAccounts_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((TwitterIntegrationBase_eventAuthorizeAccounts_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(TwitterIntegrationBase_eventAuthorizeAccounts_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/TwitterIntegrationBase.h" },
				{ "ToolTip", "Starts the process of authorizing the local user(s). When TID_AuthorizeComplete is called, then GetNumAccounts()\nwill return a valid number of accounts\n\n@return true if the authorization process started, and TID_AuthorizeComplete delegates will be called" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTwitterIntegrationBase, "AuthorizeAccounts", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020400, sizeof(TwitterIntegrationBase_eventAuthorizeAccounts_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTwitterIntegrationBase_CanShowTweetUI()
	{
		struct TwitterIntegrationBase_eventCanShowTweetUI_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((TwitterIntegrationBase_eventCanShowTweetUI_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(TwitterIntegrationBase_eventCanShowTweetUI_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/TwitterIntegrationBase.h" },
				{ "ToolTip", "@return true if the user is allowed to use the Tweet UI" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTwitterIntegrationBase, "CanShowTweetUI", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020400, sizeof(TwitterIntegrationBase_eventCanShowTweetUI_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTwitterIntegrationBase_GetAccountName()
	{
		struct TwitterIntegrationBase_eventGetAccountName_Parms
		{
			int32 AccountIndex;
			FString ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(TwitterIntegrationBase_eventGetAccountName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_AccountIndex = { UE4CodeGen_Private::EPropertyClass::Int, "AccountIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TwitterIntegrationBase_eventGetAccountName_Parms, AccountIndex), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AccountIndex,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/TwitterIntegrationBase.h" },
				{ "ToolTip", "@return the display name of the given Twitter account" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTwitterIntegrationBase, "GetAccountName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020400, sizeof(TwitterIntegrationBase_eventGetAccountName_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTwitterIntegrationBase_GetNumAccounts()
	{
		struct TwitterIntegrationBase_eventGetNumAccounts_Parms
		{
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(TwitterIntegrationBase_eventGetNumAccounts_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/TwitterIntegrationBase.h" },
				{ "ToolTip", "@return The number of accounts that were authorized" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTwitterIntegrationBase, "GetNumAccounts", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020400, sizeof(TwitterIntegrationBase_eventGetNumAccounts_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTwitterIntegrationBase_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/TwitterIntegrationBase.h" },
				{ "ToolTip", "Perform any needed initialization" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTwitterIntegrationBase, "Init", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTwitterIntegrationBase_ShowTweetUI()
	{
		struct TwitterIntegrationBase_eventShowTweetUI_Parms
		{
			FString InitialMessage;
			FString URL;
			FString Picture;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((TwitterIntegrationBase_eventShowTweetUI_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(TwitterIntegrationBase_eventShowTweetUI_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Picture_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Picture = { UE4CodeGen_Private::EPropertyClass::Str, "Picture", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TwitterIntegrationBase_eventShowTweetUI_Parms, Picture), METADATA_PARAMS(NewProp_Picture_MetaData, ARRAY_COUNT(NewProp_Picture_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_URL = { UE4CodeGen_Private::EPropertyClass::Str, "URL", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TwitterIntegrationBase_eventShowTweetUI_Parms, URL), METADATA_PARAMS(NewProp_URL_MetaData, ARRAY_COUNT(NewProp_URL_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialMessage_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_InitialMessage = { UE4CodeGen_Private::EPropertyClass::Str, "InitialMessage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TwitterIntegrationBase_eventShowTweetUI_Parms, InitialMessage), METADATA_PARAMS(NewProp_InitialMessage_MetaData, ARRAY_COUNT(NewProp_InitialMessage_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Picture,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_URL,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InitialMessage,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/TwitterIntegrationBase.h" },
				{ "ToolTip", "Kicks off a tweet, using the platform to show the UI. If this returns false, or you are on a platform that doesn't support the UI,\nyou can use the TwitterRequest method to perform a manual tweet using the Twitter API\n\n@param InitialMessage [optional] Initial message to show\n@param URL [optional] URL to attach to the tweet\n@param Picture [optional] Name of a picture (stored locally, platform subclass will do the searching for it) to add to the tweet\n\n@return true if a UI was displayed for the user to interact with, and a TID_TweetUIComplete will be sent" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTwitterIntegrationBase, "ShowTweetUI", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020400, sizeof(TwitterIntegrationBase_eventShowTweetUI_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTwitterIntegrationBase_TwitterRequest()
	{
		struct TwitterIntegrationBase_eventTwitterRequest_Parms
		{
			FString URL;
			TArray<FString> ParamKeysAndValues;
			TEnumAsByte<ETwitterRequestMethod> RequestMethod;
			int32 AccountIndex;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((TwitterIntegrationBase_eventTwitterRequest_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(TwitterIntegrationBase_eventTwitterRequest_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_AccountIndex = { UE4CodeGen_Private::EPropertyClass::Int, "AccountIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TwitterIntegrationBase_eventTwitterRequest_Parms, AccountIndex), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_RequestMethod = { UE4CodeGen_Private::EPropertyClass::Byte, "RequestMethod", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TwitterIntegrationBase_eventTwitterRequest_Parms, RequestMethod), Z_Construct_UEnum_Engine_ETwitterRequestMethod, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParamKeysAndValues_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ParamKeysAndValues = { UE4CodeGen_Private::EPropertyClass::Array, "ParamKeysAndValues", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(TwitterIntegrationBase_eventTwitterRequest_Parms, ParamKeysAndValues), METADATA_PARAMS(NewProp_ParamKeysAndValues_MetaData, ARRAY_COUNT(NewProp_ParamKeysAndValues_MetaData)) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ParamKeysAndValues_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "ParamKeysAndValues", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_URL = { UE4CodeGen_Private::EPropertyClass::Str, "URL", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TwitterIntegrationBase_eventTwitterRequest_Parms, URL), METADATA_PARAMS(NewProp_URL_MetaData, ARRAY_COUNT(NewProp_URL_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AccountIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RequestMethod,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParamKeysAndValues,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParamKeysAndValues_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_URL,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/TwitterIntegrationBase.h" },
				{ "ToolTip", "Kicks off a generic twitter request\n\n@param URL The URL for the twitter request\n@param KeysAndValues The extra parameters to pass to the request (request specific). Separate keys and values: < \"key1\", \"value1\", \"key2\", \"value2\" >\n@param Method The method for this request (get, post, delete)\n@param AccountIndex A user index if an account is needed, or -1 if an account isn't needed for the request\n\n@return true the request was sent off, and a TID_RequestComplete" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTwitterIntegrationBase, "TwitterRequest", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00420400, sizeof(TwitterIntegrationBase_eventTwitterRequest_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTwitterIntegrationBase_NoRegister()
	{
		return UTwitterIntegrationBase::StaticClass();
	}
	UClass* Z_Construct_UClass_UTwitterIntegrationBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UPlatformInterfaceBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UTwitterIntegrationBase_AuthorizeAccounts, "AuthorizeAccounts" }, // 3426472848
				{ &Z_Construct_UFunction_UTwitterIntegrationBase_CanShowTweetUI, "CanShowTweetUI" }, // 4089946127
				{ &Z_Construct_UFunction_UTwitterIntegrationBase_GetAccountName, "GetAccountName" }, // 472360469
				{ &Z_Construct_UFunction_UTwitterIntegrationBase_GetNumAccounts, "GetNumAccounts" }, // 3838322138
				{ &Z_Construct_UFunction_UTwitterIntegrationBase_Init, "Init" }, // 302664602
				{ &Z_Construct_UFunction_UTwitterIntegrationBase_ShowTweetUI, "ShowTweetUI" }, // 3087734838
				{ &Z_Construct_UFunction_UTwitterIntegrationBase_TwitterRequest, "TwitterRequest" }, // 3601719866
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Engine/TwitterIntegrationBase.h" },
				{ "ModuleRelativePath", "Classes/Engine/TwitterIntegrationBase.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UTwitterIntegrationBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UTwitterIntegrationBase::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00800088u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				nullptr, 0,
				"Engine",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTwitterIntegrationBase, 566021815);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTwitterIntegrationBase(Z_Construct_UClass_UTwitterIntegrationBase, &UTwitterIntegrationBase::StaticClass, TEXT("/Script/Engine"), TEXT("UTwitterIntegrationBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTwitterIntegrationBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
