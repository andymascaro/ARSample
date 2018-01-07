// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/BoneControllers/AnimNode_CopyBone.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_CopyBone() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_CopyBone();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBoneControlSpace();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
// End Cross Module References
class UScriptStruct* FAnimNode_CopyBone::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_CopyBone_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_CopyBone, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_CopyBone"), sizeof(FAnimNode_CopyBone), Get_Z_Construct_UScriptStruct_FAnimNode_CopyBone_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_CopyBone(FAnimNode_CopyBone::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("AnimNode_CopyBone"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_CopyBone
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_CopyBone()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_CopyBone")),new UScriptStruct::TCppStructOps<FAnimNode_CopyBone>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_CopyBone;
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_CopyBone()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_CopyBone_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_CopyBone"), sizeof(FAnimNode_CopyBone), Get_Z_Construct_UScriptStruct_FAnimNode_CopyBone_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintInternalUseOnly", "true" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_CopyBone.h" },
				{ "ToolTip", "Simple controller to copy a bone's transform to another one." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_CopyBone>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControlSpace_MetaData[] = {
				{ "Category", "Copy" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_CopyBone.h" },
				{ "ToolTip", "Space to convert transforms into prior to copying components" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ControlSpace = { UE4CodeGen_Private::EPropertyClass::Byte, "ControlSpace", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_CopyBone, ControlSpace), Z_Construct_UEnum_Engine_EBoneControlSpace, METADATA_PARAMS(NewProp_ControlSpace_MetaData, ARRAY_COUNT(NewProp_ControlSpace_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCopyScale_MetaData[] = {
				{ "Category", "Copy" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_CopyBone.h" },
				{ "PinShownByDefault", "" },
				{ "ToolTip", "If Scale should be copied" },
			};
#endif
			auto NewProp_bCopyScale_SetBit = [](void* Obj){ ((FAnimNode_CopyBone*)Obj)->bCopyScale = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCopyScale = { UE4CodeGen_Private::EPropertyClass::Bool, "bCopyScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAnimNode_CopyBone), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCopyScale_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCopyScale_MetaData, ARRAY_COUNT(NewProp_bCopyScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCopyRotation_MetaData[] = {
				{ "Category", "Copy" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_CopyBone.h" },
				{ "PinShownByDefault", "" },
				{ "ToolTip", "If Rotation should be copied" },
			};
#endif
			auto NewProp_bCopyRotation_SetBit = [](void* Obj){ ((FAnimNode_CopyBone*)Obj)->bCopyRotation = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCopyRotation = { UE4CodeGen_Private::EPropertyClass::Bool, "bCopyRotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAnimNode_CopyBone), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCopyRotation_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCopyRotation_MetaData, ARRAY_COUNT(NewProp_bCopyRotation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCopyTranslation_MetaData[] = {
				{ "Category", "Copy" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_CopyBone.h" },
				{ "PinShownByDefault", "" },
				{ "ToolTip", "If Translation should be copied" },
			};
#endif
			auto NewProp_bCopyTranslation_SetBit = [](void* Obj){ ((FAnimNode_CopyBone*)Obj)->bCopyTranslation = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCopyTranslation = { UE4CodeGen_Private::EPropertyClass::Bool, "bCopyTranslation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAnimNode_CopyBone), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCopyTranslation_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCopyTranslation_MetaData, ARRAY_COUNT(NewProp_bCopyTranslation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetBone_MetaData[] = {
				{ "Category", "Copy" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_CopyBone.h" },
				{ "ToolTip", "Name of bone to control. This is the main bone chain to modify from. *" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetBone = { UE4CodeGen_Private::EPropertyClass::Struct, "TargetBone", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_CopyBone, TargetBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(NewProp_TargetBone_MetaData, ARRAY_COUNT(NewProp_TargetBone_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceBone_MetaData[] = {
				{ "Category", "Copy" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_CopyBone.h" },
				{ "ToolTip", "Source Bone Name to get transform from" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SourceBone = { UE4CodeGen_Private::EPropertyClass::Struct, "SourceBone", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_CopyBone, SourceBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(NewProp_SourceBone_MetaData, ARRAY_COUNT(NewProp_SourceBone_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ControlSpace,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCopyScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCopyRotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCopyTranslation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetBone,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SourceBone,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
				Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AnimNode_CopyBone",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FAnimNode_CopyBone),
				alignof(FAnimNode_CopyBone),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_CopyBone_CRC() { return 2059754092U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
