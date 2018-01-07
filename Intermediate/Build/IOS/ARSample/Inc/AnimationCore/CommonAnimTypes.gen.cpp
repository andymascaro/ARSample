// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/CommonAnimTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonAnimTypes() {}
// Cross Module References
	ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FAxis();
	UPackage* Z_Construct_UPackage__Script_AnimationCore();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
class UScriptStruct* FAxis::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMATIONCORE_API uint32 Get_Z_Construct_UScriptStruct_FAxis_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAxis, Z_Construct_UPackage__Script_AnimationCore(), TEXT("Axis"), sizeof(FAxis), Get_Z_Construct_UScriptStruct_FAxis_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAxis(FAxis::StaticStruct, TEXT("/Script/AnimationCore"), TEXT("Axis"), false, nullptr, nullptr);
static struct FScriptStruct_AnimationCore_StaticRegisterNativesFAxis
{
	FScriptStruct_AnimationCore_StaticRegisterNativesFAxis()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Axis")),new UScriptStruct::TCppStructOps<FAxis>);
	}
} ScriptStruct_AnimationCore_StaticRegisterNativesFAxis;
	UScriptStruct* Z_Construct_UScriptStruct_FAxis()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAxis_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimationCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Axis"), sizeof(FAxis), Get_Z_Construct_UScriptStruct_FAxis_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/CommonAnimTypes.h" },
				{ "ToolTip", "Axis to represent direction" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAxis>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInLocalSpace_MetaData[] = {
				{ "Category", "FAxis" },
				{ "ModuleRelativePath", "Public/CommonAnimTypes.h" },
			};
#endif
			auto NewProp_bInLocalSpace_SetBit = [](void* Obj){ ((FAxis*)Obj)->bInLocalSpace = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInLocalSpace = { UE4CodeGen_Private::EPropertyClass::Bool, "bInLocalSpace", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAxis), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bInLocalSpace_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bInLocalSpace_MetaData, ARRAY_COUNT(NewProp_bInLocalSpace_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Axis_MetaData[] = {
				{ "Category", "FAxis" },
				{ "ModuleRelativePath", "Public/CommonAnimTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Axis = { UE4CodeGen_Private::EPropertyClass::Struct, "Axis", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAxis, Axis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_Axis_MetaData, ARRAY_COUNT(NewProp_Axis_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bInLocalSpace,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Axis,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AnimationCore,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"Axis",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FAxis),
				alignof(FAxis),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAxis_CRC() { return 821203322U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
