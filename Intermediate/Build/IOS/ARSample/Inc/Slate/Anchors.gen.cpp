// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Widgets/Layout/Anchors.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnchors() {}
// Cross Module References
	SLATE_API UScriptStruct* Z_Construct_UScriptStruct_FAnchors();
	UPackage* Z_Construct_UPackage__Script_Slate();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
class UScriptStruct* FAnchors::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SLATE_API uint32 Get_Z_Construct_UScriptStruct_FAnchors_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnchors, Z_Construct_UPackage__Script_Slate(), TEXT("Anchors"), sizeof(FAnchors), Get_Z_Construct_UScriptStruct_FAnchors_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnchors(FAnchors::StaticStruct, TEXT("/Script/Slate"), TEXT("Anchors"), false, nullptr, nullptr);
static struct FScriptStruct_Slate_StaticRegisterNativesFAnchors
{
	FScriptStruct_Slate_StaticRegisterNativesFAnchors()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Anchors")),new UScriptStruct::TCppStructOps<FAnchors>);
	}
} ScriptStruct_Slate_StaticRegisterNativesFAnchors;
	UScriptStruct* Z_Construct_UScriptStruct_FAnchors()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnchors_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Slate();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Anchors"), sizeof(FAnchors), Get_Z_Construct_UScriptStruct_FAnchors_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Widgets/Layout/Anchors.h" },
				{ "ToolTip", "Describes how a widget is anchored." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnchors>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Maximum_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Widgets/Layout/Anchors.h" },
				{ "ToolTip", "Holds the maximum anchors, right + bottom." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Maximum = { UE4CodeGen_Private::EPropertyClass::Struct, "Maximum", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnchors, Maximum), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(NewProp_Maximum_MetaData, ARRAY_COUNT(NewProp_Maximum_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Minimum_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Widgets/Layout/Anchors.h" },
				{ "ToolTip", "Holds the minimum anchors, left + top." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Minimum = { UE4CodeGen_Private::EPropertyClass::Struct, "Minimum", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnchors, Minimum), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(NewProp_Minimum_MetaData, ARRAY_COUNT(NewProp_Minimum_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Maximum,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Minimum,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Slate,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"Anchors",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FAnchors),
				alignof(FAnchors),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnchors_CRC() { return 563923212U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
