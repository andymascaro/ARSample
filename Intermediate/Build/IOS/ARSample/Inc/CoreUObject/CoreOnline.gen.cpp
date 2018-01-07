// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/UObject/CoreOnline.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreOnline() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdWrapper();
	UPackage* Z_Construct_UPackage__Script_CoreUObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FJoinabilitySettings();
// End Cross Module References
	UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdWrapper()
	{
		struct FUniqueNetIdWrapper
		{
		};

#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FUniqueNetIdWrapper_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_CoreUObject();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("UniqueNetIdWrapper"), sizeof(FUniqueNetIdWrapper), Get_Z_Construct_UScriptStruct_FUniqueNetIdWrapper_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/UObject/CoreOnline.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_CoreUObject,
				nullptr,
				nullptr,
				"UniqueNetIdWrapper",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000008),
				sizeof(FUniqueNetIdWrapper),
				alignof(FUniqueNetIdWrapper),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FUniqueNetIdWrapper_CRC() { return 4059912123U; }
	UScriptStruct* Z_Construct_UScriptStruct_FJoinabilitySettings()
	{
		struct FJoinabilitySettings
		{
			FName SessionName;
			bool bPublicSearchable;
			bool bAllowInvites;
			bool bJoinViaPresence;
			bool bJoinViaPresenceFriendsOnly;
			int32 MaxPlayers;
			int32 MaxPartySize;
		};

#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FJoinabilitySettings_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_CoreUObject();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("JoinabilitySettings"), sizeof(FJoinabilitySettings), Get_Z_Construct_UScriptStruct_FJoinabilitySettings_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/UObject/CoreOnline.h" },
				{ "ToolTip", "Circular dependency on Core vs UHT means we have to noexport these structs so tools can build" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxPartySize_MetaData[] = {
				{ "ModuleRelativePath", "Public/UObject/CoreOnline.h" },
				{ "ToolTip", "Current max party size in this session" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxPartySize = { UE4CodeGen_Private::EPropertyClass::Int, "MaxPartySize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FJoinabilitySettings, MaxPartySize), METADATA_PARAMS(NewProp_MaxPartySize_MetaData, ARRAY_COUNT(NewProp_MaxPartySize_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxPlayers_MetaData[] = {
				{ "ModuleRelativePath", "Public/UObject/CoreOnline.h" },
				{ "ToolTip", "Current max players in this session" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxPlayers = { UE4CodeGen_Private::EPropertyClass::Int, "MaxPlayers", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FJoinabilitySettings, MaxPlayers), METADATA_PARAMS(NewProp_MaxPlayers_MetaData, ARRAY_COUNT(NewProp_MaxPlayers_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bJoinViaPresenceFriendsOnly_MetaData[] = {
				{ "ModuleRelativePath", "Public/UObject/CoreOnline.h" },
				{ "ToolTip", "Does this session allow friends to join via presence" },
			};
#endif
			auto NewProp_bJoinViaPresenceFriendsOnly_SetBit = [](void* Obj){ ((FJoinabilitySettings*)Obj)->bJoinViaPresenceFriendsOnly = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bJoinViaPresenceFriendsOnly = { UE4CodeGen_Private::EPropertyClass::Bool, "bJoinViaPresenceFriendsOnly", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FJoinabilitySettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bJoinViaPresenceFriendsOnly_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bJoinViaPresenceFriendsOnly_MetaData, ARRAY_COUNT(NewProp_bJoinViaPresenceFriendsOnly_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bJoinViaPresence_MetaData[] = {
				{ "ModuleRelativePath", "Public/UObject/CoreOnline.h" },
				{ "ToolTip", "Does this session allow public join via presence" },
			};
#endif
			auto NewProp_bJoinViaPresence_SetBit = [](void* Obj){ ((FJoinabilitySettings*)Obj)->bJoinViaPresence = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bJoinViaPresence = { UE4CodeGen_Private::EPropertyClass::Bool, "bJoinViaPresence", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FJoinabilitySettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bJoinViaPresence_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bJoinViaPresence_MetaData, ARRAY_COUNT(NewProp_bJoinViaPresence_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowInvites_MetaData[] = {
				{ "ModuleRelativePath", "Public/UObject/CoreOnline.h" },
				{ "ToolTip", "Does this session allow invites" },
			};
#endif
			auto NewProp_bAllowInvites_SetBit = [](void* Obj){ ((FJoinabilitySettings*)Obj)->bAllowInvites = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowInvites = { UE4CodeGen_Private::EPropertyClass::Bool, "bAllowInvites", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FJoinabilitySettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAllowInvites_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAllowInvites_MetaData, ARRAY_COUNT(NewProp_bAllowInvites_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPublicSearchable_MetaData[] = {
				{ "ModuleRelativePath", "Public/UObject/CoreOnline.h" },
				{ "ToolTip", "Is this session now publicly searchable" },
			};
#endif
			auto NewProp_bPublicSearchable_SetBit = [](void* Obj){ ((FJoinabilitySettings*)Obj)->bPublicSearchable = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPublicSearchable = { UE4CodeGen_Private::EPropertyClass::Bool, "bPublicSearchable", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FJoinabilitySettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bPublicSearchable_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bPublicSearchable_MetaData, ARRAY_COUNT(NewProp_bPublicSearchable_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionName_MetaData[] = {
				{ "ModuleRelativePath", "Public/UObject/CoreOnline.h" },
				{ "ToolTip", "Name of session these settings affect" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_SessionName = { UE4CodeGen_Private::EPropertyClass::Name, "SessionName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FJoinabilitySettings, SessionName), METADATA_PARAMS(NewProp_SessionName_MetaData, ARRAY_COUNT(NewProp_SessionName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxPartySize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxPlayers,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bJoinViaPresenceFriendsOnly,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bJoinViaPresence,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAllowInvites,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bPublicSearchable,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SessionName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_CoreUObject,
				nullptr,
				nullptr,
				"JoinabilitySettings",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000008),
				sizeof(FJoinabilitySettings),
				alignof(FJoinabilitySettings),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FJoinabilitySettings_CRC() { return 2579742958U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
