// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/ARHitTestingSupport.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARHitTestingSupport() {}
// Cross Module References
	AUGMENTEDREALITY_API UScriptStruct* Z_Construct_UScriptStruct_FARHitTestResult();
	UPackage* Z_Construct_UPackage__Script_AugmentedReality();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
class UScriptStruct* FARHitTestResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUGMENTEDREALITY_API uint32 Get_Z_Construct_UScriptStruct_FARHitTestResult_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FARHitTestResult, Z_Construct_UPackage__Script_AugmentedReality(), TEXT("ARHitTestResult"), sizeof(FARHitTestResult), Get_Z_Construct_UScriptStruct_FARHitTestResult_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FARHitTestResult(FARHitTestResult::StaticStruct, TEXT("/Script/AugmentedReality"), TEXT("ARHitTestResult"), false, nullptr, nullptr);
static struct FScriptStruct_AugmentedReality_StaticRegisterNativesFARHitTestResult
{
	FScriptStruct_AugmentedReality_StaticRegisterNativesFARHitTestResult()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ARHitTestResult")),new UScriptStruct::TCppStructOps<FARHitTestResult>);
	}
} ScriptStruct_AugmentedReality_StaticRegisterNativesFARHitTestResult;
	UScriptStruct* Z_Construct_UScriptStruct_FARHitTestResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FARHitTestResult_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AugmentedReality();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ARHitTestResult"), sizeof(FARHitTestResult), Get_Z_Construct_UScriptStruct_FARHitTestResult_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Category", "AR" },
				{ "Experimental", "" },
				{ "ModuleRelativePath", "Public/ARHitTestingSupport.h" },
				{ "ToolTip", "A result of an intersection found during a hit-test." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FARHitTestResult>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
				{ "Category", "ARHitTestResult" },
				{ "ModuleRelativePath", "Public/ARHitTestingSupport.h" },
				{ "ToolTip", "The transformation matrix that defines the intersection's rotation, translation and scale\nrelative to the world." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform = { UE4CodeGen_Private::EPropertyClass::Struct, "Transform", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FARHitTestResult, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(NewProp_Transform_MetaData, ARRAY_COUNT(NewProp_Transform_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[] = {
				{ "Category", "ARHitTestResult" },
				{ "ModuleRelativePath", "Public/ARHitTestingSupport.h" },
				{ "ToolTip", "The distance from the camera to the intersection in meters." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Distance = { UE4CodeGen_Private::EPropertyClass::Float, "Distance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FARHitTestResult, Distance), METADATA_PARAMS(NewProp_Distance_MetaData, ARRAY_COUNT(NewProp_Distance_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Transform,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Distance,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"ARHitTestResult",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FARHitTestResult),
				alignof(FARHitTestResult),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FARHitTestResult_CRC() { return 2291666122U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
