// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/BoneControllers/AnimNode_BoneDrivenController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_BoneDrivenController() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_EDrivenDestinationMode();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
	ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_EDrivenBoneModificationMode();
	ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_EComponentType();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
// End Cross Module References
	static UEnum* EDrivenDestinationMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AnimGraphRuntime_EDrivenDestinationMode, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("EDrivenDestinationMode"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDrivenDestinationMode(EDrivenDestinationMode_StaticEnum, TEXT("/Script/AnimGraphRuntime"), TEXT("EDrivenDestinationMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AnimGraphRuntime_EDrivenDestinationMode_CRC() { return 4275336687U; }
	UEnum* Z_Construct_UEnum_AnimGraphRuntime_EDrivenDestinationMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDrivenDestinationMode"), 0, Get_Z_Construct_UEnum_AnimGraphRuntime_EDrivenDestinationMode_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDrivenDestinationMode::Bone", (int64)EDrivenDestinationMode::Bone },
				{ "EDrivenDestinationMode::MorphTarget", (int64)EDrivenDestinationMode::MorphTarget },
				{ "EDrivenDestinationMode::MaterialParameter", (int64)EDrivenDestinationMode::MaterialParameter },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_BoneDrivenController.h" },
				{ "ToolTip", "Type of destination value to drive" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EDrivenDestinationMode",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EDrivenDestinationMode",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EDrivenBoneModificationMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AnimGraphRuntime_EDrivenBoneModificationMode, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("EDrivenBoneModificationMode"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDrivenBoneModificationMode(EDrivenBoneModificationMode_StaticEnum, TEXT("/Script/AnimGraphRuntime"), TEXT("EDrivenBoneModificationMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AnimGraphRuntime_EDrivenBoneModificationMode_CRC() { return 3521068872U; }
	UEnum* Z_Construct_UEnum_AnimGraphRuntime_EDrivenBoneModificationMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDrivenBoneModificationMode"), 0, Get_Z_Construct_UEnum_AnimGraphRuntime_EDrivenBoneModificationMode_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDrivenBoneModificationMode::AddToInput", (int64)EDrivenBoneModificationMode::AddToInput },
				{ "EDrivenBoneModificationMode::ReplaceComponent", (int64)EDrivenBoneModificationMode::ReplaceComponent },
				{ "EDrivenBoneModificationMode::AddToRefPose", (int64)EDrivenBoneModificationMode::AddToRefPose },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AddToInput.ToolTip", "Add the driven value to the input component value(s)" },
				{ "AddToRefPose.ToolTip", "Add the driven value to the reference pose value" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_BoneDrivenController.h" },
				{ "ReplaceComponent.ToolTip", "Replace the input component value(s) with the driven value" },
				{ "ToolTip", "The type of modification to make to the destination component(s)" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EDrivenBoneModificationMode",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EDrivenBoneModificationMode",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EComponentType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AnimGraphRuntime_EComponentType, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("EComponentType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EComponentType(EComponentType_StaticEnum, TEXT("/Script/AnimGraphRuntime"), TEXT("EComponentType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AnimGraphRuntime_EComponentType_CRC() { return 1377501026U; }
	UEnum* Z_Construct_UEnum_AnimGraphRuntime_EComponentType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EComponentType"), 0, Get_Z_Construct_UEnum_AnimGraphRuntime_EComponentType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EComponentType::None", (int64)EComponentType::None },
				{ "EComponentType::TranslationX", (int64)EComponentType::TranslationX },
				{ "EComponentType::TranslationY", (int64)EComponentType::TranslationY },
				{ "EComponentType::TranslationZ", (int64)EComponentType::TranslationZ },
				{ "EComponentType::RotationX", (int64)EComponentType::RotationX },
				{ "EComponentType::RotationY", (int64)EComponentType::RotationY },
				{ "EComponentType::RotationZ", (int64)EComponentType::RotationZ },
				{ "EComponentType::Scale", (int64)EComponentType::Scale },
				{ "EComponentType::ScaleX", (int64)EComponentType::ScaleX },
				{ "EComponentType::ScaleY", (int64)EComponentType::ScaleY },
				{ "EComponentType::ScaleZ", (int64)EComponentType::ScaleZ },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_BoneDrivenController.h" },
				{ "Scale.DisplayName", "Scale (largest component)" },
				{ "ToolTip", "The transform component (attribute) to read from" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EComponentType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EComponentType::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FAnimNode_BoneDrivenController::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_BoneDrivenController"), sizeof(FAnimNode_BoneDrivenController), Get_Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_BoneDrivenController(FAnimNode_BoneDrivenController::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("AnimNode_BoneDrivenController"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_BoneDrivenController
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_BoneDrivenController()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_BoneDrivenController")),new UScriptStruct::TCppStructOps<FAnimNode_BoneDrivenController>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_BoneDrivenController;
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_BoneDrivenController"), sizeof(FAnimNode_BoneDrivenController), Get_Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_BoneDrivenController.h" },
				{ "ToolTip", "This is the runtime version of a bone driven controller, which maps part of the state from one bone to another (e.g., 2 * source.x -> target.z)" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_BoneDrivenController>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModificationMode_MetaData[] = {
				{ "Category", "Destination (driven)" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_BoneDrivenController.h" },
				{ "ToolTip", "The type of modification to make to the destination component(s)" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ModificationMode = { UE4CodeGen_Private::EPropertyClass::Enum, "ModificationMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_BoneDrivenController, ModificationMode), Z_Construct_UEnum_AnimGraphRuntime_EDrivenBoneModificationMode, METADATA_PARAMS(NewProp_ModificationMode_MetaData, ARRAY_COUNT(NewProp_ModificationMode_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ModificationMode_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAffectTargetScaleZ_MetaData[] = {
				{ "Category", "Destination (driven)" },
				{ "DisplayName", "Z" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_BoneDrivenController.h" },
				{ "ToolTip", "Affect the Z component of scale on the target bone" },
			};
#endif
			auto NewProp_bAffectTargetScaleZ_SetBit = [](void* Obj){ ((FAnimNode_BoneDrivenController*)Obj)->bAffectTargetScaleZ = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAffectTargetScaleZ = { UE4CodeGen_Private::EPropertyClass::Bool, "bAffectTargetScaleZ", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FAnimNode_BoneDrivenController), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAffectTargetScaleZ_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAffectTargetScaleZ_MetaData, ARRAY_COUNT(NewProp_bAffectTargetScaleZ_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAffectTargetScaleY_MetaData[] = {
				{ "Category", "Destination (driven)" },
				{ "DisplayName", "Y" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_BoneDrivenController.h" },
				{ "ToolTip", "Affect the Y component of scale on the target bone" },
			};
#endif
			auto NewProp_bAffectTargetScaleY_SetBit = [](void* Obj){ ((FAnimNode_BoneDrivenController*)Obj)->bAffectTargetScaleY = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAffectTargetScaleY = { UE4CodeGen_Private::EPropertyClass::Bool, "bAffectTargetScaleY", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FAnimNode_BoneDrivenController), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAffectTargetScaleY_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAffectTargetScaleY_MetaData, ARRAY_COUNT(NewProp_bAffectTargetScaleY_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAffectTargetScaleX_MetaData[] = {
				{ "Category", "Destination (driven)" },
				{ "DisplayName", "X" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_BoneDrivenController.h" },
				{ "ToolTip", "Affect the X component of scale on the target bone" },
			};
#endif
			auto NewProp_bAffectTargetScaleX_SetBit = [](void* Obj){ ((FAnimNode_BoneDrivenController*)Obj)->bAffectTargetScaleX = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAffectTargetScaleX = { UE4CodeGen_Private::EPropertyClass::Bool, "bAffectTargetScaleX", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FAnimNode_BoneDrivenController), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAffectTargetScaleX_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAffectTargetScaleX_MetaData, ARRAY_COUNT(NewProp_bAffectTargetScaleX_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAffectTargetRotationZ_MetaData[] = {
				{ "Category", "Destination (driven)" },
				{ "DisplayName", "Z" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_BoneDrivenController.h" },
				{ "ToolTip", "Affect the Z component of rotation on the target bone" },
			};
#endif
			auto NewProp_bAffectTargetRotationZ_SetBit = [](void* Obj){ ((FAnimNode_BoneDrivenController*)Obj)->bAffectTargetRotationZ = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAffectTargetRotationZ = { UE4CodeGen_Private::EPropertyClass::Bool, "bAffectTargetRotationZ", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FAnimNode_BoneDrivenController), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAffectTargetRotationZ_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAffectTargetRotationZ_MetaData, ARRAY_COUNT(NewProp_bAffectTargetRotationZ_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAffectTargetRotationY_MetaData[] = {
				{ "Category", "Destination (driven)" },
				{ "DisplayName", "Y" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_BoneDrivenController.h" },
				{ "ToolTip", "Affect the Y component of rotation on the target bone" },
			};
#endif
			auto NewProp_bAffectTargetRotationY_SetBit = [](void* Obj){ ((FAnimNode_BoneDrivenController*)Obj)->bAffectTargetRotationY = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAffectTargetRotationY = { UE4CodeGen_Private::EPropertyClass::Bool, "bAffectTargetRotationY", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FAnimNode_BoneDrivenController), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAffectTargetRotationY_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAffectTargetRotationY_MetaData, ARRAY_COUNT(NewProp_bAffectTargetRotationY_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAffectTargetRotationX_MetaData[] = {
				{ "Category", "Destination (driven)" },
				{ "DisplayName", "X" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_BoneDrivenController.h" },
				{ "ToolTip", "Affect the X component of rotation on the target bone" },
			};
#endif
			auto NewProp_bAffectTargetRotationX_SetBit = [](void* Obj){ ((FAnimNode_BoneDrivenController*)Obj)->bAffectTargetRotationX = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAffectTargetRotationX = { UE4CodeGen_Private::EPropertyClass::Bool, "bAffectTargetRotationX", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FAnimNode_BoneDrivenController), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAffectTargetRotationX_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAffectTargetRotationX_MetaData, ARRAY_COUNT(NewProp_bAffectTargetRotationX_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAffectTargetTranslationZ_MetaData[] = {
				{ "Category", "Destination (driven)" },
				{ "DisplayName", "Z" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_BoneDrivenController.h" },
				{ "ToolTip", "Affect the Z component of translation on the target bone" },
			};
#endif
			auto NewProp_bAffectTargetTranslationZ_SetBit = [](void* Obj){ ((FAnimNode_BoneDrivenController*)Obj)->bAffectTargetTranslationZ = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAffectTargetTranslationZ = { UE4CodeGen_Private::EPropertyClass::Bool, "bAffectTargetTranslationZ", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FAnimNode_BoneDrivenController), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAffectTargetTranslationZ_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAffectTargetTranslationZ_MetaData, ARRAY_COUNT(NewProp_bAffectTargetTranslationZ_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAffectTargetTranslationY_MetaData[] = {
				{ "Category", "Destination (driven)" },
				{ "DisplayName", "Y" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_BoneDrivenController.h" },
				{ "ToolTip", "Affect the Y component of translation on the target bone" },
			};
#endif
			auto NewProp_bAffectTargetTranslationY_SetBit = [](void* Obj){ ((FAnimNode_BoneDrivenController*)Obj)->bAffectTargetTranslationY = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAffectTargetTranslationY = { UE4CodeGen_Private::EPropertyClass::Bool, "bAffectTargetTranslationY", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FAnimNode_BoneDrivenController), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAffectTargetTranslationY_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAffectTargetTranslationY_MetaData, ARRAY_COUNT(NewProp_bAffectTargetTranslationY_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAffectTargetTranslationX_MetaData[] = {
				{ "Category", "Destination (driven)" },
				{ "DisplayName", "X" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_BoneDrivenController.h" },
				{ "ToolTip", "Affect the X component of translation on the target bone" },
			};
#endif
			auto NewProp_bAffectTargetTranslationX_SetBit = [](void* Obj){ ((FAnimNode_BoneDrivenController*)Obj)->bAffectTargetTranslationX = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAffectTargetTranslationX = { UE4CodeGen_Private::EPropertyClass::Bool, "bAffectTargetTranslationX", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FAnimNode_BoneDrivenController), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAffectTargetTranslationX_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAffectTargetTranslationX_MetaData, ARRAY_COUNT(NewProp_bAffectTargetTranslationX_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetComponent_MetaData[] = {
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_BoneDrivenController.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_TargetComponent = { UE4CodeGen_Private::EPropertyClass::Byte, "TargetComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000020000000, 1, nullptr, STRUCT_OFFSET(FAnimNode_BoneDrivenController, TargetComponent_DEPRECATED), Z_Construct_UEnum_AnimGraphRuntime_EComponentType, METADATA_PARAMS(NewProp_TargetComponent_MetaData, ARRAY_COUNT(NewProp_TargetComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetBone_MetaData[] = {
				{ "Category", "Destination (driven)" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_BoneDrivenController.h" },
				{ "ToolTip", "Bone to drive using controller input" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetBone = { UE4CodeGen_Private::EPropertyClass::Struct, "TargetBone", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_BoneDrivenController, TargetBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(NewProp_TargetBone_MetaData, ARRAY_COUNT(NewProp_TargetBone_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[] = {
				{ "Category", "Destination (driven)" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_BoneDrivenController.h" },
				{ "ToolTip", "Name of Morph Target to drive using the source attribute" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName = { UE4CodeGen_Private::EPropertyClass::Name, "ParameterName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_BoneDrivenController, ParameterName), METADATA_PARAMS(NewProp_ParameterName_MetaData, ARRAY_COUNT(NewProp_ParameterName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestinationMode_MetaData[] = {
				{ "Category", "Destination (driven)" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_BoneDrivenController.h" },
				{ "ToolTip", "Type of destination to drive, currently either bone or morph target" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DestinationMode = { UE4CodeGen_Private::EPropertyClass::Enum, "DestinationMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_BoneDrivenController, DestinationMode), Z_Construct_UEnum_AnimGraphRuntime_EDrivenDestinationMode, METADATA_PARAMS(NewProp_DestinationMode_MetaData, ARRAY_COUNT(NewProp_DestinationMode_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_DestinationMode_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemappedMax_MetaData[] = {
				{ "Category", "Mapping" },
				{ "DisplayName", "Mapped Range Max" },
				{ "EditCondition", "bUseRange" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_BoneDrivenController.h" },
				{ "ToolTip", "Maximum value to apply to the destination (remapped from the input range)" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RemappedMax = { UE4CodeGen_Private::EPropertyClass::Float, "RemappedMax", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_BoneDrivenController, RemappedMax), METADATA_PARAMS(NewProp_RemappedMax_MetaData, ARRAY_COUNT(NewProp_RemappedMax_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemappedMin_MetaData[] = {
				{ "Category", "Mapping" },
				{ "DisplayName", "Mapped Range Min" },
				{ "EditCondition", "bUseRange" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_BoneDrivenController.h" },
				{ "ToolTip", "Minimum value to apply to the destination (remapped from the input range)" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RemappedMin = { UE4CodeGen_Private::EPropertyClass::Float, "RemappedMin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_BoneDrivenController, RemappedMin), METADATA_PARAMS(NewProp_RemappedMin_MetaData, ARRAY_COUNT(NewProp_RemappedMin_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RangeMax_MetaData[] = {
				{ "Category", "Mapping" },
				{ "DisplayName", "Source Range Max" },
				{ "EditCondition", "bUseRange" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_BoneDrivenController.h" },
				{ "ToolTip", "Maximum limit of the input value (mapped to RemappedMax, only used when limiting the source range)" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RangeMax = { UE4CodeGen_Private::EPropertyClass::Float, "RangeMax", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_BoneDrivenController, RangeMax), METADATA_PARAMS(NewProp_RangeMax_MetaData, ARRAY_COUNT(NewProp_RangeMax_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RangeMin_MetaData[] = {
				{ "Category", "Mapping" },
				{ "DisplayName", "Source Range Min" },
				{ "EditCondition", "bUseRange" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_BoneDrivenController.h" },
				{ "ToolTip", "Minimum limit of the input value (mapped to RemappedMin, only used when limiting the source range)" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RangeMin = { UE4CodeGen_Private::EPropertyClass::Float, "RangeMin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_BoneDrivenController, RangeMin), METADATA_PARAMS(NewProp_RangeMin_MetaData, ARRAY_COUNT(NewProp_RangeMin_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseRange_MetaData[] = {
				{ "Category", "Mapping" },
				{ "DisplayName", "Remap Source" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_BoneDrivenController.h" },
				{ "ToolTip", "Whether or not to clamp the driver value and remap it before scaling it" },
			};
#endif
			auto NewProp_bUseRange_SetBit = [](void* Obj){ ((FAnimNode_BoneDrivenController*)Obj)->bUseRange = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseRange = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseRange", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAnimNode_BoneDrivenController), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseRange_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseRange_MetaData, ARRAY_COUNT(NewProp_bUseRange_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Multiplier_MetaData[] = {
				{ "Category", "Mapping" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_BoneDrivenController.h" },
				{ "ToolTip", "Multiplier to apply to the input value (Note: Ignored when a curve is used)" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Multiplier = { UE4CodeGen_Private::EPropertyClass::Float, "Multiplier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_BoneDrivenController, Multiplier), METADATA_PARAMS(NewProp_Multiplier_MetaData, ARRAY_COUNT(NewProp_Multiplier_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrivingCurve_MetaData[] = {
				{ "Category", "Mapping" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_BoneDrivenController.h" },
				{ "ToolTip", "Curve used to map from the source attribute to the driven attributes if present (otherwise the Multiplier will be used)" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DrivingCurve = { UE4CodeGen_Private::EPropertyClass::Object, "DrivingCurve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_BoneDrivenController, DrivingCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(NewProp_DrivingCurve_MetaData, ARRAY_COUNT(NewProp_DrivingCurve_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceComponent_MetaData[] = {
				{ "Category", "Source (driver)" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_BoneDrivenController.h" },
				{ "ToolTip", "Transform component to use as input" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_SourceComponent = { UE4CodeGen_Private::EPropertyClass::Byte, "SourceComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_BoneDrivenController, SourceComponent), Z_Construct_UEnum_AnimGraphRuntime_EComponentType, METADATA_PARAMS(NewProp_SourceComponent_MetaData, ARRAY_COUNT(NewProp_SourceComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceBone_MetaData[] = {
				{ "Category", "Source (driver)" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_BoneDrivenController.h" },
				{ "ToolTip", "Bone to use as controller input" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SourceBone = { UE4CodeGen_Private::EPropertyClass::Struct, "SourceBone", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_BoneDrivenController, SourceBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(NewProp_SourceBone_MetaData, ARRAY_COUNT(NewProp_SourceBone_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ModificationMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ModificationMode_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAffectTargetScaleZ,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAffectTargetScaleY,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAffectTargetScaleX,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAffectTargetRotationZ,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAffectTargetRotationY,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAffectTargetRotationX,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAffectTargetTranslationZ,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAffectTargetTranslationY,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAffectTargetTranslationX,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetBone,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParameterName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DestinationMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DestinationMode_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RemappedMax,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RemappedMin,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RangeMax,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RangeMin,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseRange,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Multiplier,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DrivingCurve,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SourceComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SourceBone,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
				Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AnimNode_BoneDrivenController",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FAnimNode_BoneDrivenController),
				alignof(FAnimNode_BoneDrivenController),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_CRC() { return 2970011836U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
