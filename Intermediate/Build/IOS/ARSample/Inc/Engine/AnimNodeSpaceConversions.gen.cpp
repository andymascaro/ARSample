// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Animation/AnimNodeSpaceConversions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNodeSpaceConversions() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ConvertLocalToComponentSpace();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ConvertComponentToLocalSpace();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FComponentSpacePoseLink();
// End Cross Module References
class UScriptStruct* FAnimNode_ConvertLocalToComponentSpace::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_ConvertLocalToComponentSpace_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_ConvertLocalToComponentSpace, Z_Construct_UPackage__Script_Engine(), TEXT("AnimNode_ConvertLocalToComponentSpace"), sizeof(FAnimNode_ConvertLocalToComponentSpace), Get_Z_Construct_UScriptStruct_FAnimNode_ConvertLocalToComponentSpace_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_ConvertLocalToComponentSpace(FAnimNode_ConvertLocalToComponentSpace::StaticStruct, TEXT("/Script/Engine"), TEXT("AnimNode_ConvertLocalToComponentSpace"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAnimNode_ConvertLocalToComponentSpace
{
	FScriptStruct_Engine_StaticRegisterNativesFAnimNode_ConvertLocalToComponentSpace()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_ConvertLocalToComponentSpace")),new UScriptStruct::TCppStructOps<FAnimNode_ConvertLocalToComponentSpace>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAnimNode_ConvertLocalToComponentSpace;
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ConvertLocalToComponentSpace()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_ConvertLocalToComponentSpace_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_ConvertLocalToComponentSpace"), sizeof(FAnimNode_ConvertLocalToComponentSpace), Get_Z_Construct_UScriptStruct_FAnimNode_ConvertLocalToComponentSpace_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintInternalUseOnly", "true" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/Animation/AnimNodeSpaceConversions.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_ConvertLocalToComponentSpace>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalPose_MetaData[] = {
				{ "Category", "Links" },
				{ "ModuleRelativePath", "Classes/Animation/AnimNodeSpaceConversions.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalPose = { UE4CodeGen_Private::EPropertyClass::Struct, "LocalPose", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_ConvertLocalToComponentSpace, LocalPose), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(NewProp_LocalPose_MetaData, ARRAY_COUNT(NewProp_LocalPose_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LocalPose,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				Z_Construct_UScriptStruct_FAnimNode_Base,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AnimNode_ConvertLocalToComponentSpace",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FAnimNode_ConvertLocalToComponentSpace),
				alignof(FAnimNode_ConvertLocalToComponentSpace),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_ConvertLocalToComponentSpace_CRC() { return 642513009U; }
class UScriptStruct* FAnimNode_ConvertComponentToLocalSpace::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_ConvertComponentToLocalSpace_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_ConvertComponentToLocalSpace, Z_Construct_UPackage__Script_Engine(), TEXT("AnimNode_ConvertComponentToLocalSpace"), sizeof(FAnimNode_ConvertComponentToLocalSpace), Get_Z_Construct_UScriptStruct_FAnimNode_ConvertComponentToLocalSpace_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_ConvertComponentToLocalSpace(FAnimNode_ConvertComponentToLocalSpace::StaticStruct, TEXT("/Script/Engine"), TEXT("AnimNode_ConvertComponentToLocalSpace"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAnimNode_ConvertComponentToLocalSpace
{
	FScriptStruct_Engine_StaticRegisterNativesFAnimNode_ConvertComponentToLocalSpace()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_ConvertComponentToLocalSpace")),new UScriptStruct::TCppStructOps<FAnimNode_ConvertComponentToLocalSpace>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAnimNode_ConvertComponentToLocalSpace;
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ConvertComponentToLocalSpace()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_ConvertComponentToLocalSpace_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_ConvertComponentToLocalSpace"), sizeof(FAnimNode_ConvertComponentToLocalSpace), Get_Z_Construct_UScriptStruct_FAnimNode_ConvertComponentToLocalSpace_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintInternalUseOnly", "true" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/Animation/AnimNodeSpaceConversions.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_ConvertComponentToLocalSpace>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentPose_MetaData[] = {
				{ "Category", "Links" },
				{ "ModuleRelativePath", "Classes/Animation/AnimNodeSpaceConversions.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ComponentPose = { UE4CodeGen_Private::EPropertyClass::Struct, "ComponentPose", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_ConvertComponentToLocalSpace, ComponentPose), Z_Construct_UScriptStruct_FComponentSpacePoseLink, METADATA_PARAMS(NewProp_ComponentPose_MetaData, ARRAY_COUNT(NewProp_ComponentPose_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ComponentPose,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				Z_Construct_UScriptStruct_FAnimNode_Base,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AnimNode_ConvertComponentToLocalSpace",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FAnimNode_ConvertComponentToLocalSpace),
				alignof(FAnimNode_ConvertComponentToLocalSpace),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_ConvertComponentToLocalSpace_CRC() { return 971317762U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
