// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Layout/Margin.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMargin() {}
// Cross Module References
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	UPackage* Z_Construct_UPackage__Script_SlateCore();
// End Cross Module References
class UScriptStruct* FMargin::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SLATECORE_API uint32 Get_Z_Construct_UScriptStruct_FMargin_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMargin, Z_Construct_UPackage__Script_SlateCore(), TEXT("Margin"), sizeof(FMargin), Get_Z_Construct_UScriptStruct_FMargin_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMargin(FMargin::StaticStruct, TEXT("/Script/SlateCore"), TEXT("Margin"), false, nullptr, nullptr);
static struct FScriptStruct_SlateCore_StaticRegisterNativesFMargin
{
	FScriptStruct_SlateCore_StaticRegisterNativesFMargin()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Margin")),new UScriptStruct::TCppStructOps<FMargin>);
	}
} ScriptStruct_SlateCore_StaticRegisterNativesFMargin;
	UScriptStruct* Z_Construct_UScriptStruct_FMargin()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMargin_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_SlateCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Margin"), sizeof(FMargin), Get_Z_Construct_UScriptStruct_FMargin_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Layout/Margin.h" },
				{ "ToolTip", "Describes the space around a Widget." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMargin>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bottom_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Layout/Margin.h" },
				{ "ToolTip", "Holds the margin to the bottom." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Bottom = { UE4CodeGen_Private::EPropertyClass::Float, "Bottom", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMargin, Bottom), METADATA_PARAMS(NewProp_Bottom_MetaData, ARRAY_COUNT(NewProp_Bottom_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Right_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Layout/Margin.h" },
				{ "ToolTip", "Holds the margin to the right." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Right = { UE4CodeGen_Private::EPropertyClass::Float, "Right", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMargin, Right), METADATA_PARAMS(NewProp_Right_MetaData, ARRAY_COUNT(NewProp_Right_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Top_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Layout/Margin.h" },
				{ "ToolTip", "Holds the margin to the top." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Top = { UE4CodeGen_Private::EPropertyClass::Float, "Top", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMargin, Top), METADATA_PARAMS(NewProp_Top_MetaData, ARRAY_COUNT(NewProp_Top_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Left_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Layout/Margin.h" },
				{ "ToolTip", "Holds the margin to the left." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Left = { UE4CodeGen_Private::EPropertyClass::Float, "Left", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMargin, Left), METADATA_PARAMS(NewProp_Left_MetaData, ARRAY_COUNT(NewProp_Left_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Bottom,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Right,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Top,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Left,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"Margin",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FMargin),
				alignof(FMargin),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMargin_CRC() { return 3481193848U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
