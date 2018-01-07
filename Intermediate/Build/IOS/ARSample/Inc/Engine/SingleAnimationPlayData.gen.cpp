// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SingleAnimationPlayData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSingleAnimationPlayData() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSingleAnimationPlayData();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UAnimationAsset_NoRegister();
// End Cross Module References
class UScriptStruct* FSingleAnimationPlayData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FSingleAnimationPlayData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSingleAnimationPlayData, Z_Construct_UPackage__Script_Engine(), TEXT("SingleAnimationPlayData"), sizeof(FSingleAnimationPlayData), Get_Z_Construct_UScriptStruct_FSingleAnimationPlayData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSingleAnimationPlayData(FSingleAnimationPlayData::StaticStruct, TEXT("/Script/Engine"), TEXT("SingleAnimationPlayData"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFSingleAnimationPlayData
{
	FScriptStruct_Engine_StaticRegisterNativesFSingleAnimationPlayData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SingleAnimationPlayData")),new UScriptStruct::TCppStructOps<FSingleAnimationPlayData>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFSingleAnimationPlayData;
	UScriptStruct* Z_Construct_UScriptStruct_FSingleAnimationPlayData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSingleAnimationPlayData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SingleAnimationPlayData"), sizeof(FSingleAnimationPlayData), Get_Z_Construct_UScriptStruct_FSingleAnimationPlayData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/SingleAnimationPlayData.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSingleAnimationPlayData>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SavedPlayRate_MetaData[] = {
				{ "Category", "Animation" },
				{ "DisplayName", "PlayRate" },
				{ "ModuleRelativePath", "Public/SingleAnimationPlayData.h" },
				{ "ToolTip", "Default setting for play rate of SequenceToPlay to play." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SavedPlayRate = { UE4CodeGen_Private::EPropertyClass::Float, "SavedPlayRate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000005, 1, nullptr, STRUCT_OFFSET(FSingleAnimationPlayData, SavedPlayRate), METADATA_PARAMS(NewProp_SavedPlayRate_MetaData, ARRAY_COUNT(NewProp_SavedPlayRate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SavedPosition_MetaData[] = {
				{ "Category", "Animation" },
				{ "DisplayName", "Initial Position" },
				{ "ModuleRelativePath", "Public/SingleAnimationPlayData.h" },
				{ "ToolTip", "Default setting for position of SequenceToPlay to play." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SavedPosition = { UE4CodeGen_Private::EPropertyClass::Float, "SavedPosition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSingleAnimationPlayData, SavedPosition), METADATA_PARAMS(NewProp_SavedPosition_MetaData, ARRAY_COUNT(NewProp_SavedPosition_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSavedPlaying_MetaData[] = {
				{ "Category", "Animation" },
				{ "DisplayName", "Playing" },
				{ "ModuleRelativePath", "Public/SingleAnimationPlayData.h" },
				{ "ToolTip", "Default setting for playing for SequenceToPlay. This is not current state of playing." },
			};
#endif
			auto NewProp_bSavedPlaying_SetBit = [](void* Obj){ ((FSingleAnimationPlayData*)Obj)->bSavedPlaying = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSavedPlaying = { UE4CodeGen_Private::EPropertyClass::Bool, "bSavedPlaying", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FSingleAnimationPlayData), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSavedPlaying_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSavedPlaying_MetaData, ARRAY_COUNT(NewProp_bSavedPlaying_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSavedLooping_MetaData[] = {
				{ "Category", "Animation" },
				{ "DisplayName", "Looping" },
				{ "ModuleRelativePath", "Public/SingleAnimationPlayData.h" },
				{ "ToolTip", "Default setting for looping for SequenceToPlay. This is not current state of looping." },
			};
#endif
			auto NewProp_bSavedLooping_SetBit = [](void* Obj){ ((FSingleAnimationPlayData*)Obj)->bSavedLooping = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSavedLooping = { UE4CodeGen_Private::EPropertyClass::Bool, "bSavedLooping", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FSingleAnimationPlayData), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSavedLooping_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSavedLooping_MetaData, ARRAY_COUNT(NewProp_bSavedLooping_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimToPlay_MetaData[] = {
				{ "Category", "Animation" },
				{ "ModuleRelativePath", "Public/SingleAnimationPlayData.h" },
				{ "ToolTip", "@todo in the future, we should make this one UObject\nand have detail customization to display different things\nThe default sequence to play on this skeletal mesh" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimToPlay = { UE4CodeGen_Private::EPropertyClass::Object, "AnimToPlay", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSingleAnimationPlayData, AnimToPlay), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(NewProp_AnimToPlay_MetaData, ARRAY_COUNT(NewProp_AnimToPlay_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SavedPlayRate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SavedPosition,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSavedPlaying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSavedLooping,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AnimToPlay,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"SingleAnimationPlayData",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FSingleAnimationPlayData),
				alignof(FSingleAnimationPlayData),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSingleAnimationPlayData_CRC() { return 3247629115U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
