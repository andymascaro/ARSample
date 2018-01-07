// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AnimNodes/AnimNode_CurveSource.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_CurveSource() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_CurveSource();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	ENGINE_API UClass* Z_Construct_UClass_UCurveSourceInterface_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
// End Cross Module References
class UScriptStruct* FAnimNode_CurveSource::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_CurveSource_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_CurveSource, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_CurveSource"), sizeof(FAnimNode_CurveSource), Get_Z_Construct_UScriptStruct_FAnimNode_CurveSource_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_CurveSource(FAnimNode_CurveSource::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("AnimNode_CurveSource"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_CurveSource
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_CurveSource()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_CurveSource")),new UScriptStruct::TCppStructOps<FAnimNode_CurveSource>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_CurveSource;
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_CurveSource()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_CurveSource_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_CurveSource"), sizeof(FAnimNode_CurveSource), Get_Z_Construct_UScriptStruct_FAnimNode_CurveSource_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintInternalUseOnly", "true" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_CurveSource.h" },
				{ "ToolTip", "Supply curves from some external source (e.g. audio)" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_CurveSource>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurveSource_MetaData[] = {
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_CurveSource.h" },
				{ "ToolTip", "Our bound source" },
			};
#endif
			static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_CurveSource = { UE4CodeGen_Private::EPropertyClass::Interface, "CurveSource", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000002000, 1, nullptr, STRUCT_OFFSET(FAnimNode_CurveSource, CurveSource), Z_Construct_UClass_UCurveSourceInterface_NoRegister, METADATA_PARAMS(NewProp_CurveSource_MetaData, ARRAY_COUNT(NewProp_CurveSource_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[] = {
				{ "Category", "CurveSource" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_CurveSource.h" },
				{ "PinShownByDefault", "" },
				{ "ToolTip", "How much we wan to blend the curve in by" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Alpha = { UE4CodeGen_Private::EPropertyClass::Float, "Alpha", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_CurveSource, Alpha), METADATA_PARAMS(NewProp_Alpha_MetaData, ARRAY_COUNT(NewProp_Alpha_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceBinding_MetaData[] = {
				{ "Category", "CurveSource" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_CurveSource.h" },
				{ "PinHiddenByDefault", "" },
				{ "ToolTip", "The binding of the curve source we want to bind to.\nWe will bind to an object that implements ICurveSourceInterface. First we check\nthe actor that owns this (if any), then we check each of its components to see if we should\nbind to the source that matches this name." },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_SourceBinding = { UE4CodeGen_Private::EPropertyClass::Name, "SourceBinding", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_CurveSource, SourceBinding), METADATA_PARAMS(NewProp_SourceBinding_MetaData, ARRAY_COUNT(NewProp_SourceBinding_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourcePose_MetaData[] = {
				{ "Category", "Links" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_CurveSource.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SourcePose = { UE4CodeGen_Private::EPropertyClass::Struct, "SourcePose", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_CurveSource, SourcePose), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(NewProp_SourcePose_MetaData, ARRAY_COUNT(NewProp_SourcePose_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurveSource,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Alpha,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SourceBinding,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SourcePose,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
				Z_Construct_UScriptStruct_FAnimNode_Base,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AnimNode_CurveSource",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FAnimNode_CurveSource),
				alignof(FAnimNode_CurveSource),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_CurveSource_CRC() { return 2700743218U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
