// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/GameFramework/PlayerMuteList.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerMuteList() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerMuteList();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
class UScriptStruct* FPlayerMuteList::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FPlayerMuteList_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerMuteList, Z_Construct_UPackage__Script_Engine(), TEXT("PlayerMuteList"), sizeof(FPlayerMuteList), Get_Z_Construct_UScriptStruct_FPlayerMuteList_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPlayerMuteList(FPlayerMuteList::StaticStruct, TEXT("/Script/Engine"), TEXT("PlayerMuteList"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFPlayerMuteList
{
	FScriptStruct_Engine_StaticRegisterNativesFPlayerMuteList()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PlayerMuteList")),new UScriptStruct::TCppStructOps<FPlayerMuteList>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFPlayerMuteList;
	UScriptStruct* Z_Construct_UScriptStruct_FPlayerMuteList()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPlayerMuteList_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PlayerMuteList"), sizeof(FPlayerMuteList), Get_Z_Construct_UScriptStruct_FPlayerMuteList_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/PlayerMuteList.h" },
				{ "ToolTip", "Container responsible for managing the mute state of a player controller\nat the gameplay level (VoiceInterface handles actual muting)" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerMuteList>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoiceChannelIdx_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/PlayerMuteList.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_VoiceChannelIdx = { UE4CodeGen_Private::EPropertyClass::Int, "VoiceChannelIdx", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FPlayerMuteList, VoiceChannelIdx), METADATA_PARAMS(NewProp_VoiceChannelIdx_MetaData, ARRAY_COUNT(NewProp_VoiceChannelIdx_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasVoiceHandshakeCompleted_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/PlayerMuteList.h" },
				{ "ToolTip", "Has server and client handshake completed" },
			};
#endif
			auto NewProp_bHasVoiceHandshakeCompleted_SetBit = [](void* Obj){ ((FPlayerMuteList*)Obj)->bHasVoiceHandshakeCompleted = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasVoiceHandshakeCompleted = { UE4CodeGen_Private::EPropertyClass::Bool, "bHasVoiceHandshakeCompleted", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FPlayerMuteList), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bHasVoiceHandshakeCompleted_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bHasVoiceHandshakeCompleted_MetaData, ARRAY_COUNT(NewProp_bHasVoiceHandshakeCompleted_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VoiceChannelIdx,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bHasVoiceHandshakeCompleted,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"PlayerMuteList",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FPlayerMuteList),
				alignof(FPlayerMuteList),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPlayerMuteList_CRC() { return 1642495655U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
