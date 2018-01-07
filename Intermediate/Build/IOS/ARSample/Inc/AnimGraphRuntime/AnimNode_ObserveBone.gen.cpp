// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/BoneControllers/AnimNode_ObserveBone.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_ObserveBone() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ObserveBone();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBoneControlSpace();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
// End Cross Module References
class UScriptStruct* FAnimNode_ObserveBone::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_ObserveBone_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_ObserveBone, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_ObserveBone"), sizeof(FAnimNode_ObserveBone), Get_Z_Construct_UScriptStruct_FAnimNode_ObserveBone_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_ObserveBone(FAnimNode_ObserveBone::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("AnimNode_ObserveBone"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_ObserveBone
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_ObserveBone()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_ObserveBone")),new UScriptStruct::TCppStructOps<FAnimNode_ObserveBone>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_ObserveBone;
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ObserveBone()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_ObserveBone_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_ObserveBone"), sizeof(FAnimNode_ObserveBone), Get_Z_Construct_UScriptStruct_FAnimNode_ObserveBone_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ObserveBone.h" },
				{ "ToolTip", "Debugging node that displays the current value of a bone in a specific space." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_ObserveBone>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ObserveBone.h" },
				{ "ToolTip", "Scale of the bone being observed." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Scale = { UE4CodeGen_Private::EPropertyClass::Struct, "Scale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAnimNode_ObserveBone, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_Scale_MetaData, ARRAY_COUNT(NewProp_Scale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ObserveBone.h" },
				{ "ToolTip", "Rotation of the bone being observed." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation = { UE4CodeGen_Private::EPropertyClass::Struct, "Rotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAnimNode_ObserveBone, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(NewProp_Rotation_MetaData, ARRAY_COUNT(NewProp_Rotation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Translation_MetaData[] = {
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ObserveBone.h" },
				{ "ToolTip", "Translation of the bone being observed." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Translation = { UE4CodeGen_Private::EPropertyClass::Struct, "Translation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAnimNode_ObserveBone, Translation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_Translation_MetaData, ARRAY_COUNT(NewProp_Translation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRelativeToRefPose_MetaData[] = {
				{ "Category", "SkeletalControl" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ObserveBone.h" },
				{ "ToolTip", "Show the difference from the reference pose?" },
			};
#endif
			auto NewProp_bRelativeToRefPose_SetBit = [](void* Obj){ ((FAnimNode_ObserveBone*)Obj)->bRelativeToRefPose = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRelativeToRefPose = { UE4CodeGen_Private::EPropertyClass::Bool, "bRelativeToRefPose", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAnimNode_ObserveBone), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bRelativeToRefPose_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bRelativeToRefPose_MetaData, ARRAY_COUNT(NewProp_bRelativeToRefPose_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplaySpace_MetaData[] = {
				{ "Category", "SkeletalControl" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ObserveBone.h" },
				{ "ToolTip", "Reference frame to display the bone transform in." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_DisplaySpace = { UE4CodeGen_Private::EPropertyClass::Byte, "DisplaySpace", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_ObserveBone, DisplaySpace), Z_Construct_UEnum_Engine_EBoneControlSpace, METADATA_PARAMS(NewProp_DisplaySpace_MetaData, ARRAY_COUNT(NewProp_DisplaySpace_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneToObserve_MetaData[] = {
				{ "Category", "SkeletalControl" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ObserveBone.h" },
				{ "ToolTip", "Name of bone to observe." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoneToObserve = { UE4CodeGen_Private::EPropertyClass::Struct, "BoneToObserve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_ObserveBone, BoneToObserve), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(NewProp_BoneToObserve_MetaData, ARRAY_COUNT(NewProp_BoneToObserve_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Scale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Rotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Translation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bRelativeToRefPose,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DisplaySpace,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoneToObserve,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
				Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AnimNode_ObserveBone",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FAnimNode_ObserveBone),
				alignof(FAnimNode_ObserveBone),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_ObserveBone_CRC() { return 3456610581U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
