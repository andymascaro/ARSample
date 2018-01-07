// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/BoneContainer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoneContainer() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
class UScriptStruct* FBoneReference::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FBoneReference_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBoneReference, Z_Construct_UPackage__Script_Engine(), TEXT("BoneReference"), sizeof(FBoneReference), Get_Z_Construct_UScriptStruct_FBoneReference_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBoneReference(FBoneReference::StaticStruct, TEXT("/Script/Engine"), TEXT("BoneReference"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFBoneReference
{
	FScriptStruct_Engine_StaticRegisterNativesFBoneReference()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BoneReference")),new UScriptStruct::TCppStructOps<FBoneReference>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFBoneReference;
	UScriptStruct* Z_Construct_UScriptStruct_FBoneReference()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBoneReference_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BoneReference"), sizeof(FBoneReference), Get_Z_Construct_UScriptStruct_FBoneReference_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/BoneContainer.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBoneReference>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[] = {
				{ "Category", "BoneReference" },
				{ "ModuleRelativePath", "Public/BoneContainer.h" },
				{ "ToolTip", "Name of bone to control. This is the main bone chain to modify from. *" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName = { UE4CodeGen_Private::EPropertyClass::Name, "BoneName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FBoneReference, BoneName), METADATA_PARAMS(NewProp_BoneName_MetaData, ARRAY_COUNT(NewProp_BoneName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoneName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"BoneReference",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FBoneReference),
				alignof(FBoneReference),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBoneReference_CRC() { return 2857709616U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
