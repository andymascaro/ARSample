// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/BoneControllers/AnimNode_CopyBoneDelta.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_CopyBoneDelta() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_CopyBoneDeltaMode();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
// End Cross Module References
	static UEnum* CopyBoneDeltaMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AnimGraphRuntime_CopyBoneDeltaMode, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("CopyBoneDeltaMode"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_CopyBoneDeltaMode(CopyBoneDeltaMode_StaticEnum, TEXT("/Script/AnimGraphRuntime"), TEXT("CopyBoneDeltaMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AnimGraphRuntime_CopyBoneDeltaMode_CRC() { return 2871724216U; }
	UEnum* Z_Construct_UEnum_AnimGraphRuntime_CopyBoneDeltaMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("CopyBoneDeltaMode"), 0, Get_Z_Construct_UEnum_AnimGraphRuntime_CopyBoneDeltaMode_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "CopyBoneDeltaMode::Accumulate", (int64)CopyBoneDeltaMode::Accumulate },
				{ "CopyBoneDeltaMode::Copy", (int64)CopyBoneDeltaMode::Copy },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_CopyBoneDelta.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"CopyBoneDeltaMode",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"CopyBoneDeltaMode",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FAnimNode_CopyBoneDelta::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_CopyBoneDelta"), sizeof(FAnimNode_CopyBoneDelta), Get_Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_CopyBoneDelta(FAnimNode_CopyBoneDelta::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("AnimNode_CopyBoneDelta"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_CopyBoneDelta
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_CopyBoneDelta()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_CopyBoneDelta")),new UScriptStruct::TCppStructOps<FAnimNode_CopyBoneDelta>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_CopyBoneDelta;
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_CopyBoneDelta"), sizeof(FAnimNode_CopyBoneDelta), Get_Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintInternalUseOnly", "true" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_CopyBoneDelta.h" },
				{ "ToolTip", "Simple controller to copy a transform relative to the ref pose to the target bone,\ninstead of the copy bone node which copies the absolute transform" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_CopyBoneDelta>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleMultiplier_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_CopyBoneDelta.h" },
				{ "PinHiddenByDefault", "" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScaleMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "ScaleMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_CopyBoneDelta, ScaleMultiplier), METADATA_PARAMS(NewProp_ScaleMultiplier_MetaData, ARRAY_COUNT(NewProp_ScaleMultiplier_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationMultiplier_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_CopyBoneDelta.h" },
				{ "PinHiddenByDefault", "" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotationMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "RotationMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_CopyBoneDelta, RotationMultiplier), METADATA_PARAMS(NewProp_RotationMultiplier_MetaData, ARRAY_COUNT(NewProp_RotationMultiplier_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TranslationMultiplier_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_CopyBoneDelta.h" },
				{ "PinHiddenByDefault", "" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TranslationMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "TranslationMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_CopyBoneDelta, TranslationMultiplier), METADATA_PARAMS(NewProp_TranslationMultiplier_MetaData, ARRAY_COUNT(NewProp_TranslationMultiplier_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CopyMode_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_CopyBoneDelta.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CopyMode = { UE4CodeGen_Private::EPropertyClass::Enum, "CopyMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_CopyBoneDelta, CopyMode), Z_Construct_UEnum_AnimGraphRuntime_CopyBoneDeltaMode, METADATA_PARAMS(NewProp_CopyMode_MetaData, ARRAY_COUNT(NewProp_CopyMode_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_CopyMode_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCopyScale_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_CopyBoneDelta.h" },
				{ "PinShownByDefault", "" },
			};
#endif
			auto NewProp_bCopyScale_SetBit = [](void* Obj){ ((FAnimNode_CopyBoneDelta*)Obj)->bCopyScale = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCopyScale = { UE4CodeGen_Private::EPropertyClass::Bool, "bCopyScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAnimNode_CopyBoneDelta), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCopyScale_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCopyScale_MetaData, ARRAY_COUNT(NewProp_bCopyScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCopyRotation_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_CopyBoneDelta.h" },
				{ "PinShownByDefault", "" },
			};
#endif
			auto NewProp_bCopyRotation_SetBit = [](void* Obj){ ((FAnimNode_CopyBoneDelta*)Obj)->bCopyRotation = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCopyRotation = { UE4CodeGen_Private::EPropertyClass::Bool, "bCopyRotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAnimNode_CopyBoneDelta), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCopyRotation_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCopyRotation_MetaData, ARRAY_COUNT(NewProp_bCopyRotation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCopyTranslation_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_CopyBoneDelta.h" },
				{ "PinShownByDefault", "" },
			};
#endif
			auto NewProp_bCopyTranslation_SetBit = [](void* Obj){ ((FAnimNode_CopyBoneDelta*)Obj)->bCopyTranslation = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCopyTranslation = { UE4CodeGen_Private::EPropertyClass::Bool, "bCopyTranslation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAnimNode_CopyBoneDelta), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCopyTranslation_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCopyTranslation_MetaData, ARRAY_COUNT(NewProp_bCopyTranslation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetBone_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_CopyBoneDelta.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetBone = { UE4CodeGen_Private::EPropertyClass::Struct, "TargetBone", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_CopyBoneDelta, TargetBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(NewProp_TargetBone_MetaData, ARRAY_COUNT(NewProp_TargetBone_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceBone_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_CopyBoneDelta.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SourceBone = { UE4CodeGen_Private::EPropertyClass::Struct, "SourceBone", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_CopyBoneDelta, SourceBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(NewProp_SourceBone_MetaData, ARRAY_COUNT(NewProp_SourceBone_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScaleMultiplier,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RotationMultiplier,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TranslationMultiplier,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CopyMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CopyMode_Underlying,
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
				"AnimNode_CopyBoneDelta",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FAnimNode_CopyBoneDelta),
				alignof(FAnimNode_CopyBoneDelta),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_CRC() { return 2679542651U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
