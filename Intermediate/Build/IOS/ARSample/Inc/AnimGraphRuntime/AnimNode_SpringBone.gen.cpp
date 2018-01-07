// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/BoneControllers/AnimNode_SpringBone.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_SpringBone() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SpringBone();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
// End Cross Module References
class UScriptStruct* FAnimNode_SpringBone::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_SpringBone_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SpringBone, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_SpringBone"), sizeof(FAnimNode_SpringBone), Get_Z_Construct_UScriptStruct_FAnimNode_SpringBone_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_SpringBone(FAnimNode_SpringBone::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("AnimNode_SpringBone"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_SpringBone
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_SpringBone()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_SpringBone")),new UScriptStruct::TCppStructOps<FAnimNode_SpringBone>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_SpringBone;
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SpringBone()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_SpringBone_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_SpringBone"), sizeof(FAnimNode_SpringBone), Get_Z_Construct_UScriptStruct_FAnimNode_SpringBone_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintInternalUseOnly", "true" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SpringBone.h" },
				{ "ToolTip", "Simple controller that replaces or adds to the translation/rotation of a single bone." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_SpringBone>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRotateZ_MetaData[] = {
				{ "Category", "FilterChannels" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SpringBone.h" },
				{ "ToolTip", "If true take the spring calculation for rotation in Z" },
			};
#endif
			auto NewProp_bRotateZ_SetBit = [](void* Obj){ ((FAnimNode_SpringBone*)Obj)->bRotateZ = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRotateZ = { UE4CodeGen_Private::EPropertyClass::Bool, "bRotateZ", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAnimNode_SpringBone), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bRotateZ_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bRotateZ_MetaData, ARRAY_COUNT(NewProp_bRotateZ_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRotateY_MetaData[] = {
				{ "Category", "FilterChannels" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SpringBone.h" },
				{ "ToolTip", "If true take the spring calculation for rotation in Y" },
			};
#endif
			auto NewProp_bRotateY_SetBit = [](void* Obj){ ((FAnimNode_SpringBone*)Obj)->bRotateY = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRotateY = { UE4CodeGen_Private::EPropertyClass::Bool, "bRotateY", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAnimNode_SpringBone), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bRotateY_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bRotateY_MetaData, ARRAY_COUNT(NewProp_bRotateY_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRotateX_MetaData[] = {
				{ "Category", "FilterChannels" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SpringBone.h" },
				{ "ToolTip", "If true take the spring calculation for rotation in X" },
			};
#endif
			auto NewProp_bRotateX_SetBit = [](void* Obj){ ((FAnimNode_SpringBone*)Obj)->bRotateX = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRotateX = { UE4CodeGen_Private::EPropertyClass::Bool, "bRotateX", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAnimNode_SpringBone), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bRotateX_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bRotateX_MetaData, ARRAY_COUNT(NewProp_bRotateX_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTranslateZ_MetaData[] = {
				{ "Category", "FilterChannels" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SpringBone.h" },
				{ "ToolTip", "If true take the spring calculation for translation in Z" },
			};
#endif
			auto NewProp_bTranslateZ_SetBit = [](void* Obj){ ((FAnimNode_SpringBone*)Obj)->bTranslateZ = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTranslateZ = { UE4CodeGen_Private::EPropertyClass::Bool, "bTranslateZ", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAnimNode_SpringBone), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bTranslateZ_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bTranslateZ_MetaData, ARRAY_COUNT(NewProp_bTranslateZ_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTranslateY_MetaData[] = {
				{ "Category", "FilterChannels" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SpringBone.h" },
				{ "ToolTip", "If true take the spring calculation for translation in Y" },
			};
#endif
			auto NewProp_bTranslateY_SetBit = [](void* Obj){ ((FAnimNode_SpringBone*)Obj)->bTranslateY = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTranslateY = { UE4CodeGen_Private::EPropertyClass::Bool, "bTranslateY", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAnimNode_SpringBone), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bTranslateY_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bTranslateY_MetaData, ARRAY_COUNT(NewProp_bTranslateY_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTranslateX_MetaData[] = {
				{ "Category", "FilterChannels" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SpringBone.h" },
				{ "ToolTip", "If true take the spring calculation for translation in X" },
			};
#endif
			auto NewProp_bTranslateX_SetBit = [](void* Obj){ ((FAnimNode_SpringBone*)Obj)->bTranslateX = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTranslateX = { UE4CodeGen_Private::EPropertyClass::Bool, "bTranslateX", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAnimNode_SpringBone), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bTranslateX_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bTranslateX_MetaData, ARRAY_COUNT(NewProp_bTranslateX_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNoZSpring_MetaData[] = {
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SpringBone.h" },
				{ "ToolTip", "If true, Z position is always correct, no spring applied" },
			};
#endif
			auto NewProp_bNoZSpring_SetBit = [](void* Obj){ ((FAnimNode_SpringBone*)Obj)->bNoZSpring_DEPRECATED = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNoZSpring = { UE4CodeGen_Private::EPropertyClass::Bool, "bNoZSpring", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAnimNode_SpringBone), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bNoZSpring_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bNoZSpring_MetaData, ARRAY_COUNT(NewProp_bNoZSpring_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorResetThresh_MetaData[] = {
				{ "Category", "Spring" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SpringBone.h" },
				{ "ToolTip", "If spring stretches more than this, reset it. Useful for catching teleports etc" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ErrorResetThresh = { UE4CodeGen_Private::EPropertyClass::Float, "ErrorResetThresh", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_SpringBone, ErrorResetThresh), METADATA_PARAMS(NewProp_ErrorResetThresh_MetaData, ARRAY_COUNT(NewProp_ErrorResetThresh_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringDamping_MetaData[] = {
				{ "Category", "Spring" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SpringBone.h" },
				{ "ToolTip", "Damping of spring" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpringDamping = { UE4CodeGen_Private::EPropertyClass::Float, "SpringDamping", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_SpringBone, SpringDamping), METADATA_PARAMS(NewProp_SpringDamping_MetaData, ARRAY_COUNT(NewProp_SpringDamping_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringStiffness_MetaData[] = {
				{ "Category", "Spring" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SpringBone.h" },
				{ "ToolTip", "Stiffness of spring" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpringStiffness = { UE4CodeGen_Private::EPropertyClass::Float, "SpringStiffness", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_SpringBone, SpringStiffness), METADATA_PARAMS(NewProp_SpringStiffness_MetaData, ARRAY_COUNT(NewProp_SpringStiffness_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDisplacement_MetaData[] = {
				{ "Category", "Spring" },
				{ "EditCondition", "bLimitDisplacement" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SpringBone.h" },
				{ "ToolTip", "If bLimitDisplacement is true, this indicates how long a bone can stretch beyond its length in the ref-pose." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDisplacement = { UE4CodeGen_Private::EPropertyClass::Float, "MaxDisplacement", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_SpringBone, MaxDisplacement), METADATA_PARAMS(NewProp_MaxDisplacement_MetaData, ARRAY_COUNT(NewProp_MaxDisplacement_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLimitDisplacement_MetaData[] = {
				{ "Category", "Spring" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SpringBone.h" },
				{ "ToolTip", "Limit the amount that a bone can stretch from its ref-pose length." },
			};
#endif
			auto NewProp_bLimitDisplacement_SetBit = [](void* Obj){ ((FAnimNode_SpringBone*)Obj)->bLimitDisplacement = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLimitDisplacement = { UE4CodeGen_Private::EPropertyClass::Bool, "bLimitDisplacement", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAnimNode_SpringBone), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bLimitDisplacement_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bLimitDisplacement_MetaData, ARRAY_COUNT(NewProp_bLimitDisplacement_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringBone_MetaData[] = {
				{ "Category", "Spring" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SpringBone.h" },
				{ "ToolTip", "Name of bone to control. This is the main bone chain to modify from. *" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpringBone = { UE4CodeGen_Private::EPropertyClass::Struct, "SpringBone", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_SpringBone, SpringBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(NewProp_SpringBone_MetaData, ARRAY_COUNT(NewProp_SpringBone_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bRotateZ,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bRotateY,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bRotateX,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bTranslateZ,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bTranslateY,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bTranslateX,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bNoZSpring,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ErrorResetThresh,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpringDamping,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpringStiffness,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxDisplacement,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bLimitDisplacement,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpringBone,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
				Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AnimNode_SpringBone",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FAnimNode_SpringBone),
				alignof(FAnimNode_SpringBone),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_SpringBone_CRC() { return 819986401U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
