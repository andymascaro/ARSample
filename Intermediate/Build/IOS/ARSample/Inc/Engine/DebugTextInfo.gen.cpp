// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/GameFramework/DebugTextInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDebugTextInfo() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDebugTextInfo();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UFont_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
class UScriptStruct* FDebugTextInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FDebugTextInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDebugTextInfo, Z_Construct_UPackage__Script_Engine(), TEXT("DebugTextInfo"), sizeof(FDebugTextInfo), Get_Z_Construct_UScriptStruct_FDebugTextInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDebugTextInfo(FDebugTextInfo::StaticStruct, TEXT("/Script/Engine"), TEXT("DebugTextInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFDebugTextInfo
{
	FScriptStruct_Engine_StaticRegisterNativesFDebugTextInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DebugTextInfo")),new UScriptStruct::TCppStructOps<FDebugTextInfo>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFDebugTextInfo;
	UScriptStruct* Z_Construct_UScriptStruct_FDebugTextInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDebugTextInfo_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DebugTextInfo"), sizeof(FDebugTextInfo), Get_Z_Construct_UScriptStruct_FDebugTextInfo_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/DebugTextInfo.h" },
				{ "ToolTip", "* Single entry of a debug text item to render.\n*\n* @see AHud\n* @see AddDebugText(), RemoveDebugText() and DrawDebugTextList()" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDebugTextInfo>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FontScale_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/DebugTextInfo.h" },
				{ "ToolTip", "Scale to apply to font when rendering" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FontScale = { UE4CodeGen_Private::EPropertyClass::Float, "FontScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FDebugTextInfo, FontScale), METADATA_PARAMS(NewProp_FontScale_MetaData, ARRAY_COUNT(NewProp_FontScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Font_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/DebugTextInfo.h" },
				{ "ToolTip", "The Font which to display this as.  Will Default to GetSmallFont()*" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Font = { UE4CodeGen_Private::EPropertyClass::Object, "Font", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FDebugTextInfo, Font), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(NewProp_Font_MetaData, ARRAY_COUNT(NewProp_Font_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrigActorLocation_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/DebugTextInfo.h" },
				{ "ToolTip", "When we first spawn store off the original actor location for use with bKeepAttachedToActor" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OrigActorLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "OrigActorLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FDebugTextInfo, OrigActorLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_OrigActorLocation_MetaData, ARRAY_COUNT(NewProp_OrigActorLocation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawShadow_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/DebugTextInfo.h" },
				{ "ToolTip", "Whether to draw a shadow for the text" },
			};
#endif
			auto NewProp_bDrawShadow_SetBit = [](void* Obj){ ((FDebugTextInfo*)Obj)->bDrawShadow = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawShadow = { UE4CodeGen_Private::EPropertyClass::Bool, "bDrawShadow", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FDebugTextInfo), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDrawShadow_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDrawShadow_MetaData, ARRAY_COUNT(NewProp_bDrawShadow_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bKeepAttachedToActor_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/DebugTextInfo.h" },
				{ "ToolTip", "If the actor moves does the text also move with it?" },
			};
#endif
			auto NewProp_bKeepAttachedToActor_SetBit = [](void* Obj){ ((FDebugTextInfo*)Obj)->bKeepAttachedToActor = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bKeepAttachedToActor = { UE4CodeGen_Private::EPropertyClass::Bool, "bKeepAttachedToActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FDebugTextInfo), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bKeepAttachedToActor_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bKeepAttachedToActor_MetaData, ARRAY_COUNT(NewProp_bKeepAttachedToActor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAbsoluteLocation_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/DebugTextInfo.h" },
				{ "ToolTip", "whether the offset should be treated as absolute world location of the string" },
			};
#endif
			auto NewProp_bAbsoluteLocation_SetBit = [](void* Obj){ ((FDebugTextInfo*)Obj)->bAbsoluteLocation = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAbsoluteLocation = { UE4CodeGen_Private::EPropertyClass::Bool, "bAbsoluteLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FDebugTextInfo), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAbsoluteLocation_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAbsoluteLocation_MetaData, ARRAY_COUNT(NewProp_bAbsoluteLocation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextColor_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/DebugTextInfo.h" },
				{ "ToolTip", "Text color" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextColor = { UE4CodeGen_Private::EPropertyClass::Struct, "TextColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FDebugTextInfo, TextColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(NewProp_TextColor_MetaData, ARRAY_COUNT(NewProp_TextColor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/DebugTextInfo.h" },
				{ "ToolTip", "Duration used to lerp desired offset" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration = { UE4CodeGen_Private::EPropertyClass::Float, "Duration", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FDebugTextInfo, Duration), METADATA_PARAMS(NewProp_Duration_MetaData, ARRAY_COUNT(NewProp_Duration_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeRemaining_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/DebugTextInfo.h" },
				{ "ToolTip", "Time remaining for the debug text, -1.f == infinite" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeRemaining = { UE4CodeGen_Private::EPropertyClass::Float, "TimeRemaining", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, STRUCT_OFFSET(FDebugTextInfo, TimeRemaining), METADATA_PARAMS(NewProp_TimeRemaining_MetaData, ARRAY_COUNT(NewProp_TimeRemaining_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugText_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/DebugTextInfo.h" },
				{ "ToolTip", "Text to display" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_DebugText = { UE4CodeGen_Private::EPropertyClass::Str, "DebugText", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FDebugTextInfo, DebugText), METADATA_PARAMS(NewProp_DebugText_MetaData, ARRAY_COUNT(NewProp_DebugText_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SrcActorDesiredOffset_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/DebugTextInfo.h" },
				{ "ToolTip", "Desired offset to interpolate to" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SrcActorDesiredOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "SrcActorDesiredOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FDebugTextInfo, SrcActorDesiredOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_SrcActorDesiredOffset_MetaData, ARRAY_COUNT(NewProp_SrcActorDesiredOffset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SrcActorOffset_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/DebugTextInfo.h" },
				{ "ToolTip", "Offset from SrcActor.Location to apply" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SrcActorOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "SrcActorOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FDebugTextInfo, SrcActorOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_SrcActorOffset_MetaData, ARRAY_COUNT(NewProp_SrcActorOffset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SrcActor_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/DebugTextInfo.h" },
				{ "ToolTip", "AActor related to text item" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SrcActor = { UE4CodeGen_Private::EPropertyClass::Object, "SrcActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FDebugTextInfo, SrcActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(NewProp_SrcActor_MetaData, ARRAY_COUNT(NewProp_SrcActor_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FontScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Font,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OrigActorLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDrawShadow,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bKeepAttachedToActor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAbsoluteLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TextColor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Duration,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TimeRemaining,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DebugText,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SrcActorDesiredOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SrcActorOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SrcActor,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"DebugTextInfo",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FDebugTextInfo),
				alignof(FDebugTextInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDebugTextInfo_CRC() { return 3088345366U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
