// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Animation/WidgetAnimationBinding.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetAnimationBinding() {}
// Cross Module References
	UMG_API UScriptStruct* Z_Construct_UScriptStruct_FWidgetAnimationBinding();
	UPackage* Z_Construct_UPackage__Script_UMG();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
class UScriptStruct* FWidgetAnimationBinding::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UMG_API uint32 Get_Z_Construct_UScriptStruct_FWidgetAnimationBinding_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWidgetAnimationBinding, Z_Construct_UPackage__Script_UMG(), TEXT("WidgetAnimationBinding"), sizeof(FWidgetAnimationBinding), Get_Z_Construct_UScriptStruct_FWidgetAnimationBinding_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWidgetAnimationBinding(FWidgetAnimationBinding::StaticStruct, TEXT("/Script/UMG"), TEXT("WidgetAnimationBinding"), false, nullptr, nullptr);
static struct FScriptStruct_UMG_StaticRegisterNativesFWidgetAnimationBinding
{
	FScriptStruct_UMG_StaticRegisterNativesFWidgetAnimationBinding()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("WidgetAnimationBinding")),new UScriptStruct::TCppStructOps<FWidgetAnimationBinding>);
	}
} ScriptStruct_UMG_StaticRegisterNativesFWidgetAnimationBinding;
	UScriptStruct* Z_Construct_UScriptStruct_FWidgetAnimationBinding()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWidgetAnimationBinding_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_UMG();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WidgetAnimationBinding"), sizeof(FWidgetAnimationBinding), Get_Z_Construct_UScriptStruct_FWidgetAnimationBinding_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Animation/WidgetAnimationBinding.h" },
				{ "ToolTip", "A single object bound to a UMG sequence." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWidgetAnimationBinding>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsRootWidget_MetaData[] = {
				{ "ModuleRelativePath", "Public/Animation/WidgetAnimationBinding.h" },
			};
#endif
			auto NewProp_bIsRootWidget_SetBit = [](void* Obj){ ((FWidgetAnimationBinding*)Obj)->bIsRootWidget = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsRootWidget = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsRootWidget", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FWidgetAnimationBinding), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsRootWidget_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsRootWidget_MetaData, ARRAY_COUNT(NewProp_bIsRootWidget_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationGuid_MetaData[] = {
				{ "ModuleRelativePath", "Public/Animation/WidgetAnimationBinding.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AnimationGuid = { UE4CodeGen_Private::EPropertyClass::Struct, "AnimationGuid", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FWidgetAnimationBinding, AnimationGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_AnimationGuid_MetaData, ARRAY_COUNT(NewProp_AnimationGuid_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotWidgetName_MetaData[] = {
				{ "ModuleRelativePath", "Public/Animation/WidgetAnimationBinding.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_SlotWidgetName = { UE4CodeGen_Private::EPropertyClass::Name, "SlotWidgetName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FWidgetAnimationBinding, SlotWidgetName), METADATA_PARAMS(NewProp_SlotWidgetName_MetaData, ARRAY_COUNT(NewProp_SlotWidgetName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetName_MetaData[] = {
				{ "ModuleRelativePath", "Public/Animation/WidgetAnimationBinding.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_WidgetName = { UE4CodeGen_Private::EPropertyClass::Name, "WidgetName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FWidgetAnimationBinding, WidgetName), METADATA_PARAMS(NewProp_WidgetName_MetaData, ARRAY_COUNT(NewProp_WidgetName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsRootWidget,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AnimationGuid,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SlotWidgetName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WidgetName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_UMG,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"WidgetAnimationBinding",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FWidgetAnimationBinding),
				alignof(FWidgetAnimationBinding),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWidgetAnimationBinding_CRC() { return 1498981742U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
