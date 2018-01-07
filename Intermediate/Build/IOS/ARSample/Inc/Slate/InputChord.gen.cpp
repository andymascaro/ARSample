// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Framework/Commands/InputChord.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputChord() {}
// Cross Module References
	SLATE_API UScriptStruct* Z_Construct_UScriptStruct_FInputChord();
	UPackage* Z_Construct_UPackage__Script_Slate();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
// End Cross Module References
class UScriptStruct* FInputChord::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SLATE_API uint32 Get_Z_Construct_UScriptStruct_FInputChord_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputChord, Z_Construct_UPackage__Script_Slate(), TEXT("InputChord"), sizeof(FInputChord), Get_Z_Construct_UScriptStruct_FInputChord_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInputChord(FInputChord::StaticStruct, TEXT("/Script/Slate"), TEXT("InputChord"), false, nullptr, nullptr);
static struct FScriptStruct_Slate_StaticRegisterNativesFInputChord
{
	FScriptStruct_Slate_StaticRegisterNativesFInputChord()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InputChord")),new UScriptStruct::TCppStructOps<FInputChord>);
	}
} ScriptStruct_Slate_StaticRegisterNativesFInputChord;
	UScriptStruct* Z_Construct_UScriptStruct_FInputChord()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInputChord_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Slate();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InputChord"), sizeof(FInputChord), Get_Z_Construct_UScriptStruct_FInputChord_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Framework/Commands/InputChord.h" },
				{ "ToolTip", "An Input Chord is a key and the modifier keys that are to be held with it." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputChord>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCmd_MetaData[] = {
				{ "Category", "Modifier" },
				{ "ModuleRelativePath", "Public/Framework/Commands/InputChord.h" },
				{ "ToolTip", "Whether the command key is part of the chord." },
			};
#endif
			auto NewProp_bCmd_SetBit = [](void* Obj){ ((FInputChord*)Obj)->bCmd = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCmd = { UE4CodeGen_Private::EPropertyClass::Bool, "bCmd", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FInputChord), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCmd_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCmd_MetaData, ARRAY_COUNT(NewProp_bCmd_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAlt_MetaData[] = {
				{ "Category", "Modifier" },
				{ "ModuleRelativePath", "Public/Framework/Commands/InputChord.h" },
				{ "ToolTip", "Whether the alt key is part of the chord." },
			};
#endif
			auto NewProp_bAlt_SetBit = [](void* Obj){ ((FInputChord*)Obj)->bAlt = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAlt = { UE4CodeGen_Private::EPropertyClass::Bool, "bAlt", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FInputChord), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAlt_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAlt_MetaData, ARRAY_COUNT(NewProp_bAlt_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCtrl_MetaData[] = {
				{ "Category", "Modifier" },
				{ "ModuleRelativePath", "Public/Framework/Commands/InputChord.h" },
				{ "ToolTip", "Whether the control key is part of the chord." },
			};
#endif
			auto NewProp_bCtrl_SetBit = [](void* Obj){ ((FInputChord*)Obj)->bCtrl = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCtrl = { UE4CodeGen_Private::EPropertyClass::Bool, "bCtrl", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FInputChord), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCtrl_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCtrl_MetaData, ARRAY_COUNT(NewProp_bCtrl_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShift_MetaData[] = {
				{ "Category", "Modifier" },
				{ "ModuleRelativePath", "Public/Framework/Commands/InputChord.h" },
				{ "ToolTip", "Whether the shift key is part of the chord." },
			};
#endif
			auto NewProp_bShift_SetBit = [](void* Obj){ ((FInputChord*)Obj)->bShift = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShift = { UE4CodeGen_Private::EPropertyClass::Bool, "bShift", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FInputChord), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bShift_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bShift_MetaData, ARRAY_COUNT(NewProp_bShift_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
				{ "Category", "Key" },
				{ "ModuleRelativePath", "Public/Framework/Commands/InputChord.h" },
				{ "ToolTip", "The Key is the core of the chord." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Struct, "Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FInputChord, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(NewProp_Key_MetaData, ARRAY_COUNT(NewProp_Key_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCmd,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAlt,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCtrl,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bShift,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Key,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Slate,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"InputChord",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FInputChord),
				alignof(FInputChord),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInputChord_CRC() { return 931406609U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
