// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/BoneControllers/AnimNode_ModifyBone.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_ModifyBone() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_EBoneModificationMode();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ModifyBone();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBoneControlSpace();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
// End Cross Module References
	static UEnum* EBoneModificationMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AnimGraphRuntime_EBoneModificationMode, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("EBoneModificationMode"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBoneModificationMode(EBoneModificationMode_StaticEnum, TEXT("/Script/AnimGraphRuntime"), TEXT("EBoneModificationMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AnimGraphRuntime_EBoneModificationMode_CRC() { return 1687180648U; }
	UEnum* Z_Construct_UEnum_AnimGraphRuntime_EBoneModificationMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBoneModificationMode"), 0, Get_Z_Construct_UEnum_AnimGraphRuntime_EBoneModificationMode_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "BMM_Ignore", (int64)BMM_Ignore },
				{ "BMM_Replace", (int64)BMM_Replace },
				{ "BMM_Additive", (int64)BMM_Additive },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BMM_Additive.DisplayName", "Add to Existing" },
				{ "BMM_Additive.ToolTip", "The modifier adds to the existing translation, rotation, or scale." },
				{ "BMM_Ignore.DisplayName", "Ignore" },
				{ "BMM_Ignore.ToolTip", "The modifier ignores this channel (keeps the existing bone translation, rotation, or scale)." },
				{ "BMM_Replace.DisplayName", "Replace Existing" },
				{ "BMM_Replace.ToolTip", "The modifier replaces the existing translation, rotation, or scale." },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ModifyBone.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EBoneModificationMode",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EBoneModificationMode",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FAnimNode_ModifyBone::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_ModifyBone_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_ModifyBone, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_ModifyBone"), sizeof(FAnimNode_ModifyBone), Get_Z_Construct_UScriptStruct_FAnimNode_ModifyBone_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_ModifyBone(FAnimNode_ModifyBone::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("AnimNode_ModifyBone"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_ModifyBone
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_ModifyBone()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_ModifyBone")),new UScriptStruct::TCppStructOps<FAnimNode_ModifyBone>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_ModifyBone;
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ModifyBone()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_ModifyBone_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_ModifyBone"), sizeof(FAnimNode_ModifyBone), Get_Z_Construct_UScriptStruct_FAnimNode_ModifyBone_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintInternalUseOnly", "true" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ModifyBone.h" },
				{ "ToolTip", "Simple controller that replaces or adds to the translation/rotation of a single bone." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_ModifyBone>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleSpace_MetaData[] = {
				{ "Category", "Scale" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ModifyBone.h" },
				{ "ToolTip", "Reference frame to apply Scale in." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ScaleSpace = { UE4CodeGen_Private::EPropertyClass::Byte, "ScaleSpace", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_ModifyBone, ScaleSpace), Z_Construct_UEnum_Engine_EBoneControlSpace, METADATA_PARAMS(NewProp_ScaleSpace_MetaData, ARRAY_COUNT(NewProp_ScaleSpace_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationSpace_MetaData[] = {
				{ "Category", "Rotation" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ModifyBone.h" },
				{ "ToolTip", "Reference frame to apply Rotation in." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_RotationSpace = { UE4CodeGen_Private::EPropertyClass::Byte, "RotationSpace", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_ModifyBone, RotationSpace), Z_Construct_UEnum_Engine_EBoneControlSpace, METADATA_PARAMS(NewProp_RotationSpace_MetaData, ARRAY_COUNT(NewProp_RotationSpace_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TranslationSpace_MetaData[] = {
				{ "Category", "Translation" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ModifyBone.h" },
				{ "ToolTip", "Reference frame to apply Translation in." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_TranslationSpace = { UE4CodeGen_Private::EPropertyClass::Byte, "TranslationSpace", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_ModifyBone, TranslationSpace), Z_Construct_UEnum_Engine_EBoneControlSpace, METADATA_PARAMS(NewProp_TranslationSpace_MetaData, ARRAY_COUNT(NewProp_TranslationSpace_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleMode_MetaData[] = {
				{ "Category", "Scale" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ModifyBone.h" },
				{ "ToolTip", "Whether and how to modify the translation of this bone." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ScaleMode = { UE4CodeGen_Private::EPropertyClass::Byte, "ScaleMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_ModifyBone, ScaleMode), Z_Construct_UEnum_AnimGraphRuntime_EBoneModificationMode, METADATA_PARAMS(NewProp_ScaleMode_MetaData, ARRAY_COUNT(NewProp_ScaleMode_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationMode_MetaData[] = {
				{ "Category", "Rotation" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ModifyBone.h" },
				{ "ToolTip", "Whether and how to modify the translation of this bone." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_RotationMode = { UE4CodeGen_Private::EPropertyClass::Byte, "RotationMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_ModifyBone, RotationMode), Z_Construct_UEnum_AnimGraphRuntime_EBoneModificationMode, METADATA_PARAMS(NewProp_RotationMode_MetaData, ARRAY_COUNT(NewProp_RotationMode_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TranslationMode_MetaData[] = {
				{ "Category", "Translation" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ModifyBone.h" },
				{ "ToolTip", "Whether and how to modify the translation of this bone." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_TranslationMode = { UE4CodeGen_Private::EPropertyClass::Byte, "TranslationMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_ModifyBone, TranslationMode), Z_Construct_UEnum_AnimGraphRuntime_EBoneModificationMode, METADATA_PARAMS(NewProp_TranslationMode_MetaData, ARRAY_COUNT(NewProp_TranslationMode_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
				{ "Category", "Scale" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ModifyBone.h" },
				{ "PinShownByDefault", "" },
				{ "ToolTip", "New Scale of bone to apply. This is only worldspace." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Scale = { UE4CodeGen_Private::EPropertyClass::Struct, "Scale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_ModifyBone, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_Scale_MetaData, ARRAY_COUNT(NewProp_Scale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
				{ "Category", "Rotation" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ModifyBone.h" },
				{ "PinShownByDefault", "" },
				{ "ToolTip", "New rotation of bone to apply." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation = { UE4CodeGen_Private::EPropertyClass::Struct, "Rotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_ModifyBone, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(NewProp_Rotation_MetaData, ARRAY_COUNT(NewProp_Rotation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Translation_MetaData[] = {
				{ "Category", "Translation" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ModifyBone.h" },
				{ "PinShownByDefault", "" },
				{ "ToolTip", "New translation of bone to apply." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Translation = { UE4CodeGen_Private::EPropertyClass::Struct, "Translation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_ModifyBone, Translation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_Translation_MetaData, ARRAY_COUNT(NewProp_Translation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneToModify_MetaData[] = {
				{ "Category", "SkeletalControl" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ModifyBone.h" },
				{ "ToolTip", "Name of bone to control. This is the main bone chain to modify from. *" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoneToModify = { UE4CodeGen_Private::EPropertyClass::Struct, "BoneToModify", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_ModifyBone, BoneToModify), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(NewProp_BoneToModify_MetaData, ARRAY_COUNT(NewProp_BoneToModify_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScaleSpace,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RotationSpace,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TranslationSpace,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScaleMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RotationMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TranslationMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Scale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Rotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Translation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoneToModify,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
				Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AnimNode_ModifyBone",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FAnimNode_ModifyBone),
				alignof(FAnimNode_ModifyBone),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_ModifyBone_CRC() { return 1756995381U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
