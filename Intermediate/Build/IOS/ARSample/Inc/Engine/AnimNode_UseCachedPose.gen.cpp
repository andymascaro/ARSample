// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Animation/AnimNode_UseCachedPose.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_UseCachedPose() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_UseCachedPose();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
// End Cross Module References
class UScriptStruct* FAnimNode_UseCachedPose::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_UseCachedPose_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_UseCachedPose, Z_Construct_UPackage__Script_Engine(), TEXT("AnimNode_UseCachedPose"), sizeof(FAnimNode_UseCachedPose), Get_Z_Construct_UScriptStruct_FAnimNode_UseCachedPose_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_UseCachedPose(FAnimNode_UseCachedPose::StaticStruct, TEXT("/Script/Engine"), TEXT("AnimNode_UseCachedPose"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAnimNode_UseCachedPose
{
	FScriptStruct_Engine_StaticRegisterNativesFAnimNode_UseCachedPose()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_UseCachedPose")),new UScriptStruct::TCppStructOps<FAnimNode_UseCachedPose>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAnimNode_UseCachedPose;
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_UseCachedPose()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_UseCachedPose_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_UseCachedPose"), sizeof(FAnimNode_UseCachedPose), Get_Z_Construct_UScriptStruct_FAnimNode_UseCachedPose_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimNode_UseCachedPose.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_UseCachedPose>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachePoseName_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimNode_UseCachedPose.h" },
				{ "ToolTip", "Intentionally not exposed, set by AnimBlueprintCompiler" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_CachePoseName = { UE4CodeGen_Private::EPropertyClass::Name, "CachePoseName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAnimNode_UseCachedPose, CachePoseName), METADATA_PARAMS(NewProp_CachePoseName_MetaData, ARRAY_COUNT(NewProp_CachePoseName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinkToCachingNode_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimNode_UseCachedPose.h" },
				{ "ToolTip", "Note: This link is intentionally not public; it's wired up during compilation" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LinkToCachingNode = { UE4CodeGen_Private::EPropertyClass::Struct, "LinkToCachingNode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAnimNode_UseCachedPose, LinkToCachingNode), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(NewProp_LinkToCachingNode_MetaData, ARRAY_COUNT(NewProp_LinkToCachingNode_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CachePoseName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LinkToCachingNode,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				Z_Construct_UScriptStruct_FAnimNode_Base,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AnimNode_UseCachedPose",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FAnimNode_UseCachedPose),
				alignof(FAnimNode_UseCachedPose),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_UseCachedPose_CRC() { return 913264534U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
