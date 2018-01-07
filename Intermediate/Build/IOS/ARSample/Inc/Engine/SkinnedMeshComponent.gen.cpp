// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Components/SkinnedMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkinnedMeshComponent() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBoneSpaces();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMeshComponentUpdateFlag();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EPhysBodyOp();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBoneVisibilityStatus();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSkelMeshComponentLODInfo();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo();
	ENGINE_API UClass* Z_Construct_UClass_USkinnedMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkinnedMeshComponent();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent();
	ENGINE_API UFunction* Z_Construct_UFunction_USkinnedMeshComponent_BoneIsChildOf();
	ENGINE_API UFunction* Z_Construct_UFunction_USkinnedMeshComponent_ClearSkinWeightOverride();
	ENGINE_API UFunction* Z_Construct_UFunction_USkinnedMeshComponent_ClearVertexColorOverride();
	ENGINE_API UFunction* Z_Construct_UFunction_USkinnedMeshComponent_FindClosestBone_K2();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UFunction* Z_Construct_UFunction_USkinnedMeshComponent_GetBoneIndex();
	ENGINE_API UFunction* Z_Construct_UFunction_USkinnedMeshComponent_GetBoneName();
	ENGINE_API UFunction* Z_Construct_UFunction_USkinnedMeshComponent_GetNumBones();
	ENGINE_API UFunction* Z_Construct_UFunction_USkinnedMeshComponent_GetParentBone();
	ENGINE_API UFunction* Z_Construct_UFunction_USkinnedMeshComponent_GetSocketBoneName();
	ENGINE_API UFunction* Z_Construct_UFunction_USkinnedMeshComponent_HideBoneByName();
	ENGINE_API UFunction* Z_Construct_UFunction_USkinnedMeshComponent_IsBoneHiddenByName();
	ENGINE_API UFunction* Z_Construct_UFunction_USkinnedMeshComponent_SetCapsuleIndirectShadowMinVisibility();
	ENGINE_API UFunction* Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleDirectShadow();
	ENGINE_API UFunction* Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleIndirectShadow();
	ENGINE_API UFunction* Z_Construct_UFunction_USkinnedMeshComponent_SetForcedLOD();
	ENGINE_API UFunction* Z_Construct_UFunction_USkinnedMeshComponent_SetMasterPoseComponent();
	ENGINE_API UFunction* Z_Construct_UFunction_USkinnedMeshComponent_SetMinLOD();
	ENGINE_API UFunction* Z_Construct_UFunction_USkinnedMeshComponent_SetPhysicsAsset();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsAsset_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_USkinnedMeshComponent_SetSkeletalMesh();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightOverride();
	ENGINE_API UFunction* Z_Construct_UFunction_USkinnedMeshComponent_SetVertexColorOverride_LinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UFunction* Z_Construct_UFunction_USkinnedMeshComponent_TransformFromBoneSpace();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UFunction* Z_Construct_UFunction_USkinnedMeshComponent_TransformToBoneSpace();
	ENGINE_API UFunction* Z_Construct_UFunction_USkinnedMeshComponent_UnHideBoneByName();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBoxSphereBounds();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
// End Cross Module References
	static UEnum* EBoneSpaces_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EBoneSpaces, Z_Construct_UPackage__Script_Engine(), TEXT("EBoneSpaces"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBoneSpaces(EBoneSpaces_StaticEnum, TEXT("/Script/Engine"), TEXT("EBoneSpaces"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EBoneSpaces_CRC() { return 2756526554U; }
	UEnum* Z_Construct_UEnum_Engine_EBoneSpaces()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBoneSpaces"), 0, Get_Z_Construct_UEnum_Engine_EBoneSpaces_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBoneSpaces::WorldSpace", (int64)EBoneSpaces::WorldSpace },
				{ "EBoneSpaces::ComponentSpace", (int64)EBoneSpaces::ComponentSpace },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ComponentSpace.DisplayName", "Component Space" },
				{ "ComponentSpace.ToolTip", "Set position of bone in components reference frame." },
				{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
				{ "ToolTip", "Values for specifying bone space." },
				{ "WorldSpace.DisplayName", "World Space" },
				{ "WorldSpace.ToolTip", "Set absolute position of bone in world space." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EBoneSpaces",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EBoneSpaces::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EMeshComponentUpdateFlag_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMeshComponentUpdateFlag, Z_Construct_UPackage__Script_Engine(), TEXT("EMeshComponentUpdateFlag"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMeshComponentUpdateFlag(EMeshComponentUpdateFlag_StaticEnum, TEXT("/Script/Engine"), TEXT("EMeshComponentUpdateFlag"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EMeshComponentUpdateFlag_CRC() { return 1574535344U; }
	UEnum* Z_Construct_UEnum_Engine_EMeshComponentUpdateFlag()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMeshComponentUpdateFlag"), 0, Get_Z_Construct_UEnum_Engine_EMeshComponentUpdateFlag_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMeshComponentUpdateFlag::AlwaysTickPoseAndRefreshBones", (int64)EMeshComponentUpdateFlag::AlwaysTickPoseAndRefreshBones },
				{ "EMeshComponentUpdateFlag::AlwaysTickPose", (int64)EMeshComponentUpdateFlag::AlwaysTickPose },
				{ "EMeshComponentUpdateFlag::OnlyTickMontagesWhenNotRendered", (int64)EMeshComponentUpdateFlag::OnlyTickMontagesWhenNotRendered },
				{ "EMeshComponentUpdateFlag::OnlyTickPoseWhenRendered", (int64)EMeshComponentUpdateFlag::OnlyTickPoseWhenRendered },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AlwaysTickPose.ToolTip", "Always Tick, but Refresh BoneTransforms only when rendered." },
				{ "AlwaysTickPoseAndRefreshBones.ToolTip", "Always Tick and Refresh BoneTransforms whether rendered or not." },
				{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
				{ "OnlyTickMontagesWhenNotRendered.ToolTip", "When rendered Tick Pose and Refresh Bone Transforms,\notherwise, just update montages and skip everything else.\n(AnimBP graph will not be updated)." },
				{ "OnlyTickPoseWhenRendered.ToolTip", "Tick only when rendered, and it will only RefreshBoneTransforms when rendered." },
				{ "ToolTip", "Skinned Mesh Update Flag based on rendered or not." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EMeshComponentUpdateFlag",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EMeshComponentUpdateFlag::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EPhysBodyOp_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EPhysBodyOp, Z_Construct_UPackage__Script_Engine(), TEXT("EPhysBodyOp"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPhysBodyOp(EPhysBodyOp_StaticEnum, TEXT("/Script/Engine"), TEXT("EPhysBodyOp"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EPhysBodyOp_CRC() { return 308539535U; }
	UEnum* Z_Construct_UEnum_Engine_EPhysBodyOp()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPhysBodyOp"), 0, Get_Z_Construct_UEnum_Engine_EPhysBodyOp_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "PBO_None", (int64)PBO_None },
				{ "PBO_Term", (int64)PBO_Term },
				{ "PBO_MAX", (int64)PBO_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
				{ "PBO_None.ToolTip", "Don't do anything." },
				{ "PBO_Term.ToolTip", "Terminate - if you terminate, you won't be able to re-init when unhidden." },
				{ "ToolTip", "PhysicsBody options when bone is hidden" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EPhysBodyOp",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EPhysBodyOp",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EBoneVisibilityStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EBoneVisibilityStatus, Z_Construct_UPackage__Script_Engine(), TEXT("EBoneVisibilityStatus"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBoneVisibilityStatus(EBoneVisibilityStatus_StaticEnum, TEXT("/Script/Engine"), TEXT("EBoneVisibilityStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EBoneVisibilityStatus_CRC() { return 657037907U; }
	UEnum* Z_Construct_UEnum_Engine_EBoneVisibilityStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBoneVisibilityStatus"), 0, Get_Z_Construct_UEnum_Engine_EBoneVisibilityStatus_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "BVS_HiddenByParent", (int64)BVS_HiddenByParent },
				{ "BVS_Visible", (int64)BVS_Visible },
				{ "BVS_ExplicitlyHidden", (int64)BVS_ExplicitlyHidden },
				{ "BVS_MAX", (int64)BVS_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BVS_ExplicitlyHidden.ToolTip", "Bone is hidden directly." },
				{ "BVS_HiddenByParent.ToolTip", "Bone is hidden because it's parent is hidden." },
				{ "BVS_Visible.ToolTip", "Bone is visible." },
				{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
				{ "ToolTip", "The valid BoneVisibilityStates values; A bone is only visible if it is *exactly* 1" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EBoneVisibilityStatus",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EBoneVisibilityStatus",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FSkelMeshComponentLODInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FSkelMeshComponentLODInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkelMeshComponentLODInfo, Z_Construct_UPackage__Script_Engine(), TEXT("SkelMeshComponentLODInfo"), sizeof(FSkelMeshComponentLODInfo), Get_Z_Construct_UScriptStruct_FSkelMeshComponentLODInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSkelMeshComponentLODInfo(FSkelMeshComponentLODInfo::StaticStruct, TEXT("/Script/Engine"), TEXT("SkelMeshComponentLODInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFSkelMeshComponentLODInfo
{
	FScriptStruct_Engine_StaticRegisterNativesFSkelMeshComponentLODInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SkelMeshComponentLODInfo")),new UScriptStruct::TCppStructOps<FSkelMeshComponentLODInfo>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFSkelMeshComponentLODInfo;
	UScriptStruct* Z_Construct_UScriptStruct_FSkelMeshComponentLODInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSkelMeshComponentLODInfo_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SkelMeshComponentLODInfo"), sizeof(FSkelMeshComponentLODInfo), Get_Z_Construct_UScriptStruct_FSkelMeshComponentLODInfo_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
				{ "ToolTip", "LOD specific setup for the skeletal mesh component." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkelMeshComponentLODInfo>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HiddenMaterials_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
				{ "ToolTip", "Material corresponds to section. To show/hide each section, use this." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HiddenMaterials = { UE4CodeGen_Private::EPropertyClass::Array, "HiddenMaterials", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FSkelMeshComponentLODInfo, HiddenMaterials), METADATA_PARAMS(NewProp_HiddenMaterials_MetaData, ARRAY_COUNT(NewProp_HiddenMaterials_MetaData)) };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HiddenMaterials_Inner = { UE4CodeGen_Private::EPropertyClass::Bool, "HiddenMaterials", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HiddenMaterials,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HiddenMaterials_Inner,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"SkelMeshComponentLODInfo",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FSkelMeshComponentLODInfo),
				alignof(FSkelMeshComponentLODInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSkelMeshComponentLODInfo_CRC() { return 2746316916U; }
class UScriptStruct* FSkelMeshSkinWeightInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo, Z_Construct_UPackage__Script_Engine(), TEXT("SkelMeshSkinWeightInfo"), sizeof(FSkelMeshSkinWeightInfo), Get_Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSkelMeshSkinWeightInfo(FSkelMeshSkinWeightInfo::StaticStruct, TEXT("/Script/Engine"), TEXT("SkelMeshSkinWeightInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFSkelMeshSkinWeightInfo
{
	FScriptStruct_Engine_StaticRegisterNativesFSkelMeshSkinWeightInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SkelMeshSkinWeightInfo")),new UScriptStruct::TCppStructOps<FSkelMeshSkinWeightInfo>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFSkelMeshSkinWeightInfo;
	UScriptStruct* Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SkelMeshSkinWeightInfo"), sizeof(FSkelMeshSkinWeightInfo), Get_Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HasNativeBreak", "Engine.KismetRenderingLibrary.BreakSkinWeightInfo" },
				{ "HasNativeMake", "Engine.KismetRenderingLibrary.MakeSkinWeightInfo" },
				{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
				{ "ToolTip", "Vertex skin weight info supplied for a component override." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkelMeshSkinWeightInfo>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Weights_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
				{ "ToolTip", "Influence of each bone on this vertex" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Weights = { UE4CodeGen_Private::EPropertyClass::Byte, "Weights", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, CPP_ARRAY_DIM(Weights, FSkelMeshSkinWeightInfo), nullptr, STRUCT_OFFSET(FSkelMeshSkinWeightInfo, Weights), nullptr, METADATA_PARAMS(NewProp_Weights_MetaData, ARRAY_COUNT(NewProp_Weights_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bones_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
				{ "ToolTip", "Index of bones that influence this vertex" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Bones = { UE4CodeGen_Private::EPropertyClass::Int, "Bones", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, CPP_ARRAY_DIM(Bones, FSkelMeshSkinWeightInfo), nullptr, STRUCT_OFFSET(FSkelMeshSkinWeightInfo, Bones), METADATA_PARAMS(NewProp_Bones_MetaData, ARRAY_COUNT(NewProp_Bones_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Weights,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Bones,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"SkelMeshSkinWeightInfo",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FSkelMeshSkinWeightInfo),
				alignof(FSkelMeshSkinWeightInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo_CRC() { return 1747205130U; }
	void USkinnedMeshComponent::StaticRegisterNativesUSkinnedMeshComponent()
	{
		UClass* Class = USkinnedMeshComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BoneIsChildOf", (Native)&USkinnedMeshComponent::execBoneIsChildOf },
			{ "ClearSkinWeightOverride", (Native)&USkinnedMeshComponent::execClearSkinWeightOverride },
			{ "ClearVertexColorOverride", (Native)&USkinnedMeshComponent::execClearVertexColorOverride },
			{ "FindClosestBone_K2", (Native)&USkinnedMeshComponent::execFindClosestBone_K2 },
			{ "GetBoneIndex", (Native)&USkinnedMeshComponent::execGetBoneIndex },
			{ "GetBoneName", (Native)&USkinnedMeshComponent::execGetBoneName },
			{ "GetNumBones", (Native)&USkinnedMeshComponent::execGetNumBones },
			{ "GetParentBone", (Native)&USkinnedMeshComponent::execGetParentBone },
			{ "GetSocketBoneName", (Native)&USkinnedMeshComponent::execGetSocketBoneName },
			{ "HideBoneByName", (Native)&USkinnedMeshComponent::execHideBoneByName },
			{ "IsBoneHiddenByName", (Native)&USkinnedMeshComponent::execIsBoneHiddenByName },
			{ "SetCapsuleIndirectShadowMinVisibility", (Native)&USkinnedMeshComponent::execSetCapsuleIndirectShadowMinVisibility },
			{ "SetCastCapsuleDirectShadow", (Native)&USkinnedMeshComponent::execSetCastCapsuleDirectShadow },
			{ "SetCastCapsuleIndirectShadow", (Native)&USkinnedMeshComponent::execSetCastCapsuleIndirectShadow },
			{ "SetForcedLOD", (Native)&USkinnedMeshComponent::execSetForcedLOD },
			{ "SetMasterPoseComponent", (Native)&USkinnedMeshComponent::execSetMasterPoseComponent },
			{ "SetMinLOD", (Native)&USkinnedMeshComponent::execSetMinLOD },
			{ "SetPhysicsAsset", (Native)&USkinnedMeshComponent::execSetPhysicsAsset },
			{ "SetSkeletalMesh", (Native)&USkinnedMeshComponent::execSetSkeletalMesh },
			{ "SetSkinWeightOverride", (Native)&USkinnedMeshComponent::execSetSkinWeightOverride },
			{ "SetVertexColorOverride_LinearColor", (Native)&USkinnedMeshComponent::execSetVertexColorOverride_LinearColor },
			{ "TransformFromBoneSpace", (Native)&USkinnedMeshComponent::execTransformFromBoneSpace },
			{ "TransformToBoneSpace", (Native)&USkinnedMeshComponent::execTransformToBoneSpace },
			{ "UnHideBoneByName", (Native)&USkinnedMeshComponent::execUnHideBoneByName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_BoneIsChildOf()
	{
		struct SkinnedMeshComponent_eventBoneIsChildOf_Parms
		{
			FName BoneName;
			FName ParentBoneName;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((SkinnedMeshComponent_eventBoneIsChildOf_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SkinnedMeshComponent_eventBoneIsChildOf_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParentBoneName = { UE4CodeGen_Private::EPropertyClass::Name, "ParentBoneName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventBoneIsChildOf_Parms, ParentBoneName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName = { UE4CodeGen_Private::EPropertyClass::Name, "BoneName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventBoneIsChildOf_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParentBoneName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoneName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|SkinnedMesh" },
				{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
				{ "ToolTip", "Tests if BoneName is child of (or equal to) ParentBoneName.\n\n@param BoneName Name of the bone\n@param ParentBone Name to check\n\n@return true if child (strictly, not same). false otherwise\nNote - will return false if ChildBoneIndex is the same as ParentBoneIndex ie. must be strictly a child." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, "BoneIsChildOf", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(SkinnedMeshComponent_eventBoneIsChildOf_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_ClearSkinWeightOverride()
	{
		struct SkinnedMeshComponent_eventClearSkinWeightOverride_Parms
		{
			int32 LODIndex;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODIndex = { UE4CodeGen_Private::EPropertyClass::Int, "LODIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventClearSkinWeightOverride_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LODIndex,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|SkinnedMesh" },
				{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
				{ "ToolTip", "Clear any applied skin weight override" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, "ClearSkinWeightOverride", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SkinnedMeshComponent_eventClearSkinWeightOverride_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_ClearVertexColorOverride()
	{
		struct SkinnedMeshComponent_eventClearVertexColorOverride_Parms
		{
			int32 LODIndex;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODIndex = { UE4CodeGen_Private::EPropertyClass::Int, "LODIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventClearVertexColorOverride_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LODIndex,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|SkinnedMesh" },
				{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
				{ "ToolTip", "Clear any applied vertex color override" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, "ClearVertexColorOverride", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SkinnedMeshComponent_eventClearVertexColorOverride_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_FindClosestBone_K2()
	{
		struct SkinnedMeshComponent_eventFindClosestBone_K2_Parms
		{
			FVector TestLocation;
			FVector BoneLocation;
			float IgnoreScale;
			bool bRequirePhysicsAsset;
			FName ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Name, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventFindClosestBone_K2_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bRequirePhysicsAsset_SetBit = [](void* Obj){ ((SkinnedMeshComponent_eventFindClosestBone_K2_Parms*)Obj)->bRequirePhysicsAsset = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRequirePhysicsAsset = { UE4CodeGen_Private::EPropertyClass::Bool, "bRequirePhysicsAsset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SkinnedMeshComponent_eventFindClosestBone_K2_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bRequirePhysicsAsset_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IgnoreScale = { UE4CodeGen_Private::EPropertyClass::Float, "IgnoreScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventFindClosestBone_K2_Parms, IgnoreScale), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoneLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "BoneLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventFindClosestBone_K2_Parms, BoneLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TestLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "TestLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventFindClosestBone_K2_Parms, TestLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bRequirePhysicsAsset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IgnoreScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoneLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TestLocation,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "AdvancedDisplay", "bRequirePhysicsAsset" },
				{ "Category", "Components|SkinnedMesh" },
				{ "CPP_Default_bRequirePhysicsAsset", "false" },
				{ "CPP_Default_IgnoreScale", "0.000000" },
				{ "DisplayName", "FindClosestBone" },
				{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
				{ "ToolTip", "finds the closest bone to the given location\n\n@param TestLocation the location to test against\n@param BoneLocation (optional, out) if specified, set to the world space location of the bone that was found, or (0,0,0) if no bone was found\n@param IgnoreScale (optional) if specified, only bones with scaling larger than the specified factor are considered\n@param bRequirePhysicsAsset (optional) if true, only bones with physics will be considered\n\n@return the name of the bone that was found, or 'None' if no bone was found" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, "FindClosestBone_K2", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54C20401, sizeof(SkinnedMeshComponent_eventFindClosestBone_K2_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_GetBoneIndex()
	{
		struct SkinnedMeshComponent_eventGetBoneIndex_Parms
		{
			FName BoneName;
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventGetBoneIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName = { UE4CodeGen_Private::EPropertyClass::Name, "BoneName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventGetBoneIndex_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoneName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|SkinnedMesh" },
				{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
				{ "ToolTip", "Find the index of bone by name. Looks in the current SkeletalMesh being used by this SkeletalMeshComponent.\n\n@param BoneName Name of bone to look up\n\n@return Index of the named bone in the current SkeletalMesh. Will return INDEX_NONE if bone not found.\n\n@see USkeletalMesh::GetBoneIndex." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, "GetBoneIndex", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(SkinnedMeshComponent_eventGetBoneIndex_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_GetBoneName()
	{
		struct SkinnedMeshComponent_eventGetBoneName_Parms
		{
			int32 BoneIndex;
			FName ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Name, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventGetBoneName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_BoneIndex = { UE4CodeGen_Private::EPropertyClass::Int, "BoneIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventGetBoneName_Parms, BoneIndex), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoneIndex,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|SkinnedMesh" },
				{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
				{ "ToolTip", "Get Bone Name from index\n@param BoneIndex Index of the bone\n\n@return the name of the bone at the specified index" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, "GetBoneName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(SkinnedMeshComponent_eventGetBoneName_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_GetNumBones()
	{
		struct SkinnedMeshComponent_eventGetNumBones_Parms
		{
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventGetNumBones_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|SkinnedMesh" },
				{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
				{ "ToolTip", "Returns the number of bones in the skeleton." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, "GetNumBones", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(SkinnedMeshComponent_eventGetNumBones_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_GetParentBone()
	{
		struct SkinnedMeshComponent_eventGetParentBone_Parms
		{
			FName BoneName;
			FName ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Name, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventGetParentBone_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName = { UE4CodeGen_Private::EPropertyClass::Name, "BoneName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventGetParentBone_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoneName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|SkinnedMesh" },
				{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
				{ "ToolTip", "Get Parent Bone of the input bone\n\n@param BoneName Name of the bone\n\n@return the name of the parent bone for the specified bone. Returns 'None' if the bone does not exist or it is the root bone" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, "GetParentBone", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(SkinnedMeshComponent_eventGetParentBone_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_GetSocketBoneName()
	{
		struct SkinnedMeshComponent_eventGetSocketBoneName_Parms
		{
			FName InSocketName;
			FName ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Name, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventGetSocketBoneName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_InSocketName = { UE4CodeGen_Private::EPropertyClass::Name, "InSocketName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventGetSocketBoneName_Parms, InSocketName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InSocketName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|SkinnedMesh" },
				{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
				{ "ToolTip", "Returns bone name linked to a given named socket on the skeletal mesh component.\nIf you're unsure to deal with sockets or bones names, you can use this function to filter through, and always return the bone name.\n\n@param       bone name or socket name\n\n@return      bone name" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, "GetSocketBoneName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(SkinnedMeshComponent_eventGetSocketBoneName_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_HideBoneByName()
	{
		struct SkinnedMeshComponent_eventHideBoneByName_Parms
		{
			FName BoneName;
			TEnumAsByte<EPhysBodyOp> PhysBodyOption;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_PhysBodyOption = { UE4CodeGen_Private::EPropertyClass::Byte, "PhysBodyOption", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventHideBoneByName_Parms, PhysBodyOption), Z_Construct_UEnum_Engine_EPhysBodyOp, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName = { UE4CodeGen_Private::EPropertyClass::Name, "BoneName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventHideBoneByName_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PhysBodyOption,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoneName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|SkinnedMesh" },
				{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
				{ "ToolTip", "Hides the specified bone with name.  Currently this just enforces a scale of 0 for the hidden bones.\nCompoared to HideBone By Index - This keeps track of list of bones and update when LOD changes\n\n@param  BoneName            Name of bone to hide\n@param  PhysBodyOption          Option for physics bodies that attach to the bones to be hidden" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, "HideBoneByName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SkinnedMeshComponent_eventHideBoneByName_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_IsBoneHiddenByName()
	{
		struct SkinnedMeshComponent_eventIsBoneHiddenByName_Parms
		{
			FName BoneName;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((SkinnedMeshComponent_eventIsBoneHiddenByName_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SkinnedMeshComponent_eventIsBoneHiddenByName_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName = { UE4CodeGen_Private::EPropertyClass::Name, "BoneName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventIsBoneHiddenByName_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoneName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|SkinnedMesh" },
				{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
				{ "ToolTip", "Determines if the specified bone is hidden.\n\n@param  BoneName            Name of bone to check\n\n@return true if hidden" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, "IsBoneHiddenByName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SkinnedMeshComponent_eventIsBoneHiddenByName_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_SetCapsuleIndirectShadowMinVisibility()
	{
		struct SkinnedMeshComponent_eventSetCapsuleIndirectShadowMinVisibility_Parms
		{
			float NewValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue = { UE4CodeGen_Private::EPropertyClass::Float, "NewValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventSetCapsuleIndirectShadowMinVisibility_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Lighting" },
				{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, "SetCapsuleIndirectShadowMinVisibility", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SkinnedMeshComponent_eventSetCapsuleIndirectShadowMinVisibility_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleDirectShadow()
	{
		struct SkinnedMeshComponent_eventSetCastCapsuleDirectShadow_Parms
		{
			bool bNewValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bNewValue_SetBit = [](void* Obj){ ((SkinnedMeshComponent_eventSetCastCapsuleDirectShadow_Parms*)Obj)->bNewValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewValue = { UE4CodeGen_Private::EPropertyClass::Bool, "bNewValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SkinnedMeshComponent_eventSetCastCapsuleDirectShadow_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bNewValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bNewValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Lighting" },
				{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, "SetCastCapsuleDirectShadow", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SkinnedMeshComponent_eventSetCastCapsuleDirectShadow_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleIndirectShadow()
	{
		struct SkinnedMeshComponent_eventSetCastCapsuleIndirectShadow_Parms
		{
			bool bNewValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bNewValue_SetBit = [](void* Obj){ ((SkinnedMeshComponent_eventSetCastCapsuleIndirectShadow_Parms*)Obj)->bNewValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewValue = { UE4CodeGen_Private::EPropertyClass::Bool, "bNewValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SkinnedMeshComponent_eventSetCastCapsuleIndirectShadow_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bNewValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bNewValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Lighting" },
				{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, "SetCastCapsuleIndirectShadow", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SkinnedMeshComponent_eventSetCastCapsuleIndirectShadow_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_SetForcedLOD()
	{
		struct SkinnedMeshComponent_eventSetForcedLOD_Parms
		{
			int32 InNewForcedLOD;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_InNewForcedLOD = { UE4CodeGen_Private::EPropertyClass::Int, "InNewForcedLOD", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventSetForcedLOD_Parms, InNewForcedLOD), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InNewForcedLOD,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|SkinnedMesh" },
				{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
				{ "ToolTip", "Set MinLodModel of the mesh component\n\n@param       InNewForcedLOD  Set new ForcedLODModel that forces to set the incoming LOD. Range from [1, Max Number of LOD]. This will affect in the next tick update." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, "SetForcedLOD", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SkinnedMeshComponent_eventSetForcedLOD_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_SetMasterPoseComponent()
	{
		struct SkinnedMeshComponent_eventSetMasterPoseComponent_Parms
		{
			USkinnedMeshComponent* NewMasterBoneComponent;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewMasterBoneComponent_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewMasterBoneComponent = { UE4CodeGen_Private::EPropertyClass::Object, "NewMasterBoneComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventSetMasterPoseComponent_Parms, NewMasterBoneComponent), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(NewProp_NewMasterBoneComponent_MetaData, ARRAY_COUNT(NewProp_NewMasterBoneComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewMasterBoneComponent,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|SkinnedMesh" },
				{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
				{ "ToolTip", "Set MasterPoseComponent for this component\n\n@param NewMasterBoneComponent New MasterPoseComponent" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, "SetMasterPoseComponent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SkinnedMeshComponent_eventSetMasterPoseComponent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_SetMinLOD()
	{
		struct SkinnedMeshComponent_eventSetMinLOD_Parms
		{
			int32 InNewMinLOD;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_InNewMinLOD = { UE4CodeGen_Private::EPropertyClass::Int, "InNewMinLOD", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventSetMinLOD_Parms, InNewMinLOD), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InNewMinLOD,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|SkinnedMesh" },
				{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
				{ "ToolTip", "Set MinLodModel of the mesh component\n\n@param       InNewMinLOD     Set new MinLodModel that make sure the LOD does not go below of this value. Range from [0, Max Number of LOD - 1]. This will affect in the next tick update." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, "SetMinLOD", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SkinnedMeshComponent_eventSetMinLOD_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_SetPhysicsAsset()
	{
		struct SkinnedMeshComponent_eventSetPhysicsAsset_Parms
		{
			UPhysicsAsset* NewPhysicsAsset;
			bool bForceReInit;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bForceReInit_SetBit = [](void* Obj){ ((SkinnedMeshComponent_eventSetPhysicsAsset_Parms*)Obj)->bForceReInit = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceReInit = { UE4CodeGen_Private::EPropertyClass::Bool, "bForceReInit", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SkinnedMeshComponent_eventSetPhysicsAsset_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bForceReInit_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewPhysicsAsset = { UE4CodeGen_Private::EPropertyClass::Object, "NewPhysicsAsset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventSetPhysicsAsset_Parms, NewPhysicsAsset), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bForceReInit,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewPhysicsAsset,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|SkinnedMesh" },
				{ "CPP_Default_bForceReInit", "false" },
				{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
				{ "ToolTip", "Override the Physics Asset of the mesh. It uses SkeletalMesh.PhysicsAsset, but if you'd like to override use this function\n\n@param       NewPhysicsAsset New PhysicsAsset\n@param       bForceReInit    Force reinitialize" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, "SetPhysicsAsset", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(SkinnedMeshComponent_eventSetPhysicsAsset_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_SetSkeletalMesh()
	{
		struct SkinnedMeshComponent_eventSetSkeletalMesh_Parms
		{
			USkeletalMesh* NewMesh;
			bool bReinitPose;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bReinitPose_SetBit = [](void* Obj){ ((SkinnedMeshComponent_eventSetSkeletalMesh_Parms*)Obj)->bReinitPose = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReinitPose = { UE4CodeGen_Private::EPropertyClass::Bool, "bReinitPose", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SkinnedMeshComponent_eventSetSkeletalMesh_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bReinitPose_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewMesh = { UE4CodeGen_Private::EPropertyClass::Object, "NewMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventSetSkeletalMesh_Parms, NewMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bReinitPose,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewMesh,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|SkinnedMesh" },
				{ "CPP_Default_bReinitPose", "true" },
				{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
				{ "ToolTip", "Change the SkeletalMesh that is rendered for this Component. Will re-initialize the animation tree etc.\n\n@param NewMesh New mesh to set for this component\n@param bReinitPose Whether we should keep current pose or reinitialize." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, "SetSkeletalMesh", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(SkinnedMeshComponent_eventSetSkeletalMesh_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightOverride()
	{
		struct SkinnedMeshComponent_eventSetSkinWeightOverride_Parms
		{
			int32 LODIndex;
			TArray<FSkelMeshSkinWeightInfo> SkinWeights;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkinWeights_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SkinWeights = { UE4CodeGen_Private::EPropertyClass::Array, "SkinWeights", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventSetSkinWeightOverride_Parms, SkinWeights), METADATA_PARAMS(NewProp_SkinWeights_MetaData, ARRAY_COUNT(NewProp_SkinWeights_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SkinWeights_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "SkinWeights", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODIndex = { UE4CodeGen_Private::EPropertyClass::Int, "LODIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventSetSkinWeightOverride_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SkinWeights,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SkinWeights_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LODIndex,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|SkinnedMesh" },
				{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
				{ "ToolTip", "Allow override of skin weights on a per-component basis." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, "SetSkinWeightOverride", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(SkinnedMeshComponent_eventSetSkinWeightOverride_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_SetVertexColorOverride_LinearColor()
	{
		struct SkinnedMeshComponent_eventSetVertexColorOverride_LinearColor_Parms
		{
			int32 LODIndex;
			TArray<FLinearColor> VertexColors;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexColors_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VertexColors = { UE4CodeGen_Private::EPropertyClass::Array, "VertexColors", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventSetVertexColorOverride_LinearColor_Parms, VertexColors), METADATA_PARAMS(NewProp_VertexColors_MetaData, ARRAY_COUNT(NewProp_VertexColors_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexColors_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "VertexColors", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODIndex = { UE4CodeGen_Private::EPropertyClass::Int, "LODIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventSetVertexColorOverride_LinearColor_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VertexColors,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VertexColors_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LODIndex,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|SkinnedMesh" },
				{ "DisplayName", "Set Vertex Color Override" },
				{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
				{ "ToolTip", "Allow override of vertex colors on a per-component basis, taking array of Blueprint-friendly LinearColors." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, "SetVertexColorOverride_LinearColor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(SkinnedMeshComponent_eventSetVertexColorOverride_LinearColor_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_TransformFromBoneSpace()
	{
		struct SkinnedMeshComponent_eventTransformFromBoneSpace_Parms
		{
			FName BoneName;
			FVector InPosition;
			FRotator InRotation;
			FVector OutPosition;
			FRotator OutRotation;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "OutRotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventTransformFromBoneSpace_Parms, OutRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutPosition = { UE4CodeGen_Private::EPropertyClass::Struct, "OutPosition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventTransformFromBoneSpace_Parms, OutPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "InRotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventTransformFromBoneSpace_Parms, InRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InPosition = { UE4CodeGen_Private::EPropertyClass::Struct, "InPosition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventTransformFromBoneSpace_Parms, InPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName = { UE4CodeGen_Private::EPropertyClass::Name, "BoneName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventTransformFromBoneSpace_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutRotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutPosition,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InRotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InPosition,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoneName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|SkinnedMesh" },
				{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
				{ "ToolTip", "Transform a location/rotation in bone relative space to world space.\n\n@param BoneName Name of bone\n@param InPosition Input position\n@param InRotation Input rotation\n@param OutPosition (out) Transformed position\n@param OutRotation (out) Transformed rotation" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, "TransformFromBoneSpace", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C20401, sizeof(SkinnedMeshComponent_eventTransformFromBoneSpace_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_TransformToBoneSpace()
	{
		struct SkinnedMeshComponent_eventTransformToBoneSpace_Parms
		{
			FName BoneName;
			FVector InPosition;
			FRotator InRotation;
			FVector OutPosition;
			FRotator OutRotation;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "OutRotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventTransformToBoneSpace_Parms, OutRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutPosition = { UE4CodeGen_Private::EPropertyClass::Struct, "OutPosition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventTransformToBoneSpace_Parms, OutPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "InRotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventTransformToBoneSpace_Parms, InRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InPosition = { UE4CodeGen_Private::EPropertyClass::Struct, "InPosition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventTransformToBoneSpace_Parms, InPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName = { UE4CodeGen_Private::EPropertyClass::Name, "BoneName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventTransformToBoneSpace_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutRotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutPosition,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InRotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InPosition,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoneName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|SkinnedMesh" },
				{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
				{ "ToolTip", "Transform a location/rotation from world space to bone relative space.\nThis is handy if you know the location in world space for a bone attachment, as AttachComponent takes location/rotation in bone-relative space.\n\n@param BoneName Name of bone\n@param InPosition Input position\n@param InRotation Input rotation\n@param OutPosition (out) Transformed position\n@param OutRotation (out) Transformed rotation" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, "TransformToBoneSpace", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54C20401, sizeof(SkinnedMeshComponent_eventTransformToBoneSpace_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_UnHideBoneByName()
	{
		struct SkinnedMeshComponent_eventUnHideBoneByName_Parms
		{
			FName BoneName;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName = { UE4CodeGen_Private::EPropertyClass::Name, "BoneName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventUnHideBoneByName_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoneName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|SkinnedMesh" },
				{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
				{ "ToolTip", "UnHide the specified bone with name.  Currently this just enforces a scale of 0 for the hidden bones.\nCompoared to HideBone By Index - This keeps track of list of bones and update when LOD changes\n@param  BoneName            Name of bone to unhide" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, "UnHideBoneByName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SkinnedMeshComponent_eventUnHideBoneByName_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USkinnedMeshComponent_NoRegister()
	{
		return USkinnedMeshComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_USkinnedMeshComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UMeshComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_USkinnedMeshComponent_BoneIsChildOf, "BoneIsChildOf" }, // 4192492049
				{ &Z_Construct_UFunction_USkinnedMeshComponent_ClearSkinWeightOverride, "ClearSkinWeightOverride" }, // 1914051117
				{ &Z_Construct_UFunction_USkinnedMeshComponent_ClearVertexColorOverride, "ClearVertexColorOverride" }, // 913690291
				{ &Z_Construct_UFunction_USkinnedMeshComponent_FindClosestBone_K2, "FindClosestBone_K2" }, // 402750794
				{ &Z_Construct_UFunction_USkinnedMeshComponent_GetBoneIndex, "GetBoneIndex" }, // 3136573099
				{ &Z_Construct_UFunction_USkinnedMeshComponent_GetBoneName, "GetBoneName" }, // 3700041664
				{ &Z_Construct_UFunction_USkinnedMeshComponent_GetNumBones, "GetNumBones" }, // 717647040
				{ &Z_Construct_UFunction_USkinnedMeshComponent_GetParentBone, "GetParentBone" }, // 917539519
				{ &Z_Construct_UFunction_USkinnedMeshComponent_GetSocketBoneName, "GetSocketBoneName" }, // 134406019
				{ &Z_Construct_UFunction_USkinnedMeshComponent_HideBoneByName, "HideBoneByName" }, // 133968728
				{ &Z_Construct_UFunction_USkinnedMeshComponent_IsBoneHiddenByName, "IsBoneHiddenByName" }, // 671007458
				{ &Z_Construct_UFunction_USkinnedMeshComponent_SetCapsuleIndirectShadowMinVisibility, "SetCapsuleIndirectShadowMinVisibility" }, // 1856244346
				{ &Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleDirectShadow, "SetCastCapsuleDirectShadow" }, // 2079357701
				{ &Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleIndirectShadow, "SetCastCapsuleIndirectShadow" }, // 3969355613
				{ &Z_Construct_UFunction_USkinnedMeshComponent_SetForcedLOD, "SetForcedLOD" }, // 2638236341
				{ &Z_Construct_UFunction_USkinnedMeshComponent_SetMasterPoseComponent, "SetMasterPoseComponent" }, // 2534654406
				{ &Z_Construct_UFunction_USkinnedMeshComponent_SetMinLOD, "SetMinLOD" }, // 2035743957
				{ &Z_Construct_UFunction_USkinnedMeshComponent_SetPhysicsAsset, "SetPhysicsAsset" }, // 3466822712
				{ &Z_Construct_UFunction_USkinnedMeshComponent_SetSkeletalMesh, "SetSkeletalMesh" }, // 3301030593
				{ &Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightOverride, "SetSkinWeightOverride" }, // 1429550989
				{ &Z_Construct_UFunction_USkinnedMeshComponent_SetVertexColorOverride_LinearColor, "SetVertexColorOverride_LinearColor" }, // 1599325086
				{ &Z_Construct_UFunction_USkinnedMeshComponent_TransformFromBoneSpace, "TransformFromBoneSpace" }, // 423393919
				{ &Z_Construct_UFunction_USkinnedMeshComponent_TransformToBoneSpace, "TransformToBoneSpace" }, // 341575042
				{ &Z_Construct_UFunction_USkinnedMeshComponent_UnHideBoneByName, "UnHideBoneByName" }, // 1323850620
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Object Mobility Trigger" },
				{ "IncludePath", "Components/SkinnedMeshComponent.h" },
				{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
				{ "ToolTip", "Skinned mesh component that supports bone skinned mesh rendering.\nThis class does not support animation.\n\n@see USkeletalMeshComponent" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisplayDebugUpdateRateOptimizations_MetaData[] = {
				{ "Category", "Optimization" },
				{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
				{ "ToolTip", "Enable on screen debugging of update rate optimization.\nRed = Skipping 0 frames, Green = skipping 1 frame, Blue = skipping 2 frames, black = skipping more than 2 frames.\n@todo: turn this into a console command." },
			};
#endif
			auto NewProp_bDisplayDebugUpdateRateOptimizations_SetBit = [](void* Obj){ ((USkinnedMeshComponent*)Obj)->bDisplayDebugUpdateRateOptimizations = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisplayDebugUpdateRateOptimizations = { UE4CodeGen_Private::EPropertyClass::Bool, "bDisplayDebugUpdateRateOptimizations", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(USkinnedMeshComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDisplayDebugUpdateRateOptimizations_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDisplayDebugUpdateRateOptimizations_MetaData, ARRAY_COUNT(NewProp_bDisplayDebugUpdateRateOptimizations_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableUpdateRateOptimizations_MetaData[] = {
				{ "Category", "Optimization" },
				{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
				{ "ToolTip", "if TRUE, Owner will determine how often animation will be updated and evaluated. See AnimUpdateRateTick()\nThis allows to skip frames for performance. (For example based on visibility and size on screen)." },
			};
#endif
			auto NewProp_bEnableUpdateRateOptimizations_SetBit = [](void* Obj){ ((USkinnedMeshComponent*)Obj)->bEnableUpdateRateOptimizations = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableUpdateRateOptimizations = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableUpdateRateOptimizations", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(USkinnedMeshComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnableUpdateRateOptimizations_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnableUpdateRateOptimizations_MetaData, ARRAY_COUNT(NewProp_bEnableUpdateRateOptimizations_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCachedLocalBoundsUpToDate_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
				{ "ToolTip", "true when CachedLocalBounds is up to date." },
			};
#endif
			auto NewProp_bCachedLocalBoundsUpToDate_SetBit = [](void* Obj){ ((USkinnedMeshComponent*)Obj)->bCachedLocalBoundsUpToDate = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCachedLocalBoundsUpToDate = { UE4CodeGen_Private::EPropertyClass::Bool, "bCachedLocalBoundsUpToDate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000002000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(USkinnedMeshComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCachedLocalBoundsUpToDate_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCachedLocalBoundsUpToDate_MetaData, ARRAY_COUNT(NewProp_bCachedLocalBoundsUpToDate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedLocalBounds_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
				{ "ToolTip", "LocalBounds cached, so they're computed just once." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CachedLocalBounds = { UE4CodeGen_Private::EPropertyClass::Struct, "CachedLocalBounds", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000002000, 1, nullptr, STRUCT_OFFSET(USkinnedMeshComponent, CachedLocalBounds), Z_Construct_UScriptStruct_FBoxSphereBounds, METADATA_PARAMS(NewProp_CachedLocalBounds_MetaData, ARRAY_COUNT(NewProp_CachedLocalBounds_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCPUSkinning_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
				{ "ToolTip", "Whether or not to CPU skin this component, requires render data refresh after changing" },
			};
#endif
			auto NewProp_bCPUSkinning_SetBit = [](void* Obj){ ((USkinnedMeshComponent*)Obj)->bCPUSkinning = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCPUSkinning = { UE4CodeGen_Private::EPropertyClass::Bool, "bCPUSkinning", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(USkinnedMeshComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCPUSkinning_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCPUSkinning_MetaData, ARRAY_COUNT(NewProp_bCPUSkinning_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CapsuleIndirectShadowMinVisibility_MetaData[] = {
				{ "Category", "Lighting" },
				{ "DisplayName", "Capsule Indirect Shadow Min Visibility" },
				{ "EditCondition", "bCastCapsuleIndirectShadow" },
				{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
				{ "ToolTip", "Controls how dark the capsule indirect shadow can be." },
				{ "UIMax", "1" },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CapsuleIndirectShadowMinVisibility = { UE4CodeGen_Private::EPropertyClass::Float, "CapsuleIndirectShadowMinVisibility", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000015, 1, nullptr, STRUCT_OFFSET(USkinnedMeshComponent, CapsuleIndirectShadowMinVisibility), METADATA_PARAMS(NewProp_CapsuleIndirectShadowMinVisibility_MetaData, ARRAY_COUNT(NewProp_CapsuleIndirectShadowMinVisibility_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCastCapsuleIndirectShadow_MetaData[] = {
				{ "Category", "Lighting" },
				{ "DisplayName", "Capsule Indirect Shadow" },
				{ "EditCondition", "CastShadow" },
				{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
				{ "ToolTip", "Whether to use the capsule representation (when present) from a skeletal mesh's ShadowPhysicsAsset for shadowing indirect lighting (from lightmaps or skylight)." },
			};
#endif
			auto NewProp_bCastCapsuleIndirectShadow_SetBit = [](void* Obj){ ((USkinnedMeshComponent*)Obj)->bCastCapsuleIndirectShadow = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCastCapsuleIndirectShadow = { UE4CodeGen_Private::EPropertyClass::Bool, "bCastCapsuleIndirectShadow", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(USkinnedMeshComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCastCapsuleIndirectShadow_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCastCapsuleIndirectShadow_MetaData, ARRAY_COUNT(NewProp_bCastCapsuleIndirectShadow_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCastCapsuleDirectShadow_MetaData[] = {
				{ "Category", "Lighting" },
				{ "DisplayName", "Capsule Direct Shadow" },
				{ "EditCondition", "CastShadow" },
				{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
				{ "ToolTip", "Whether to use the capsule representation (when present) from a skeletal mesh's ShadowPhysicsAsset for direct shadowing from lights.\nThis type of shadowing is approximate but handles extremely wide area shadowing well.  The softness of the shadow depends on the light's LightSourceAngle / SourceRadius.\nThis flag will force bCastInsetShadow to be enabled." },
			};
#endif
			auto NewProp_bCastCapsuleDirectShadow_SetBit = [](void* Obj){ ((USkinnedMeshComponent*)Obj)->bCastCapsuleDirectShadow = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCastCapsuleDirectShadow = { UE4CodeGen_Private::EPropertyClass::Bool, "bCastCapsuleDirectShadow", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(USkinnedMeshComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCastCapsuleDirectShadow_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCastCapsuleDirectShadow_MetaData, ARRAY_COUNT(NewProp_bCastCapsuleDirectShadow_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomSortAlternateIndexMode_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
				{ "ToolTip", "Editor only. Used for manually selecting the alternate indices for\nTRISORT_CustomLeftRight sections." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_CustomSortAlternateIndexMode = { UE4CodeGen_Private::EPropertyClass::Byte, "CustomSortAlternateIndexMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, STRUCT_OFFSET(USkinnedMeshComponent, CustomSortAlternateIndexMode), nullptr, METADATA_PARAMS(NewProp_CustomSortAlternateIndexMode_MetaData, ARRAY_COUNT(NewProp_CustomSortAlternateIndexMode_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProgressiveDrawingFraction_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
				{ "ToolTip", "Editor only. Used for visualizing drawing order in Animset Viewer. If < 1.0,\nonly the specified fraction of triangles will be rendered" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProgressiveDrawingFraction = { UE4CodeGen_Private::EPropertyClass::Float, "ProgressiveDrawingFraction", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800002000, 1, nullptr, STRUCT_OFFSET(USkinnedMeshComponent, ProgressiveDrawingFraction), METADATA_PARAMS(NewProp_ProgressiveDrawingFraction_MetaData, ARRAY_COUNT(NewProp_ProgressiveDrawingFraction_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRecentlyRendered_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
				{ "ToolTip", "true if mesh has been recently rendered, false otherwise" },
			};
#endif
			auto NewProp_bRecentlyRendered_SetBit = [](void* Obj){ ((USkinnedMeshComponent*)Obj)->bRecentlyRendered = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRecentlyRendered = { UE4CodeGen_Private::EPropertyClass::Bool, "bRecentlyRendered", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(USkinnedMeshComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bRecentlyRendered_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bRecentlyRendered_MetaData, ARRAY_COUNT(NewProp_bRecentlyRendered_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanHighlightSelectedSections_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
				{ "ToolTip", "Whether or not we can highlight selected sections - this should really only be done in the editor" },
			};
#endif
			auto NewProp_bCanHighlightSelectedSections_SetBit = [](void* Obj){ ((USkinnedMeshComponent*)Obj)->bCanHighlightSelectedSections = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanHighlightSelectedSections = { UE4CodeGen_Private::EPropertyClass::Bool, "bCanHighlightSelectedSections", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(USkinnedMeshComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCanHighlightSelectedSections_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCanHighlightSelectedSections_MetaData, ARRAY_COUNT(NewProp_bCanHighlightSelectedSections_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForceMeshObjectUpdate_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
				{ "ToolTip", "If true, UpdateTransform will always result in a call to MeshObject->Update." },
			};
#endif
			auto NewProp_bForceMeshObjectUpdate_SetBit = [](void* Obj){ ((USkinnedMeshComponent*)Obj)->bForceMeshObjectUpdate = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceMeshObjectUpdate = { UE4CodeGen_Private::EPropertyClass::Bool, "bForceMeshObjectUpdate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000002000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(USkinnedMeshComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bForceMeshObjectUpdate_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bForceMeshObjectUpdate_MetaData, ARRAY_COUNT(NewProp_bForceMeshObjectUpdate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComponentUpdateFlag_MetaData[] = {
				{ "Category", "SkeletalMesh" },
				{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
				{ "ToolTip", "This is update frequency flag even when our Owner has not been rendered recently\n\nSMU_AlwaysTickPoseAndRefreshBones,                   // Always Tick and Refresh BoneTransforms whether rendered or not\nSMU_AlwaysTickPose,                                                  // Always Tick, but Refresh BoneTransforms only when rendered\nSMU_OnlyTickPoseWhenRendered,                                // Tick only when rendered, and it will only RefreshBoneTransforms when rendered" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_MeshComponentUpdateFlag = { UE4CodeGen_Private::EPropertyClass::Byte, "MeshComponentUpdateFlag", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000005, 1, nullptr, STRUCT_OFFSET(USkinnedMeshComponent, MeshComponentUpdateFlag), Z_Construct_UEnum_Engine_EMeshComponentUpdateFlag, METADATA_PARAMS(NewProp_MeshComponentUpdateFlag_MetaData, ARRAY_COUNT(NewProp_MeshComponentUpdateFlag_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bConsiderAllBodiesForBounds_MetaData[] = {
				{ "Category", "SkeletalMesh" },
				{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
				{ "ToolTip", "If true, when updating bounds from a PhysicsAsset, consider _all_ BodySetups, not just those flagged with bConsiderForBounds." },
			};
#endif
			auto NewProp_bConsiderAllBodiesForBounds_SetBit = [](void* Obj){ ((USkinnedMeshComponent*)Obj)->bConsiderAllBodiesForBounds = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConsiderAllBodiesForBounds = { UE4CodeGen_Private::EPropertyClass::Bool, "bConsiderAllBodiesForBounds", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(USkinnedMeshComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bConsiderAllBodiesForBounds_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bConsiderAllBodiesForBounds_MetaData, ARRAY_COUNT(NewProp_bConsiderAllBodiesForBounds_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bComponentUseFixedSkelBounds_MetaData[] = {
				{ "Category", "SkeletalMesh" },
				{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
				{ "ToolTip", "When true, skip using the physics asset etc. and always use the fixed bounds defined in the SkeletalMesh." },
			};
#endif
			auto NewProp_bComponentUseFixedSkelBounds_SetBit = [](void* Obj){ ((USkinnedMeshComponent*)Obj)->bComponentUseFixedSkelBounds = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bComponentUseFixedSkelBounds = { UE4CodeGen_Private::EPropertyClass::Bool, "bComponentUseFixedSkelBounds", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(USkinnedMeshComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bComponentUseFixedSkelBounds_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bComponentUseFixedSkelBounds_MetaData, ARRAY_COUNT(NewProp_bComponentUseFixedSkelBounds_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPerBoneMotionBlur_MetaData[] = {
				{ "Category", "SkeletalMesh" },
				{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
				{ "ToolTip", "If true, use per-bone motion blur on this skeletal mesh (requires additional rendering, can be disabled to save performance)." },
			};
#endif
			auto NewProp_bPerBoneMotionBlur_SetBit = [](void* Obj){ ((USkinnedMeshComponent*)Obj)->bPerBoneMotionBlur = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPerBoneMotionBlur = { UE4CodeGen_Private::EPropertyClass::Bool, "bPerBoneMotionBlur", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(USkinnedMeshComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bPerBoneMotionBlur_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bPerBoneMotionBlur_MetaData, ARRAY_COUNT(NewProp_bPerBoneMotionBlur_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHideSkin_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
				{ "ToolTip", "Don't bother rendering the skin." },
			};
#endif
			auto NewProp_bHideSkin_SetBit = [](void* Obj){ ((USkinnedMeshComponent*)Obj)->bHideSkin = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideSkin = { UE4CodeGen_Private::EPropertyClass::Bool, "bHideSkin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(USkinnedMeshComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bHideSkin_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bHideSkin_MetaData, ARRAY_COUNT(NewProp_bHideSkin_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableMorphTarget_MetaData[] = {
				{ "Category", "SkeletalMesh" },
				{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
				{ "ToolTip", "Disable Morphtarget for this component." },
			};
#endif
			auto NewProp_bDisableMorphTarget_SetBit = [](void* Obj){ ((USkinnedMeshComponent*)Obj)->bDisableMorphTarget = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableMorphTarget = { UE4CodeGen_Private::EPropertyClass::Bool, "bDisableMorphTarget", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(USkinnedMeshComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDisableMorphTarget_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDisableMorphTarget_MetaData, ARRAY_COUNT(NewProp_bDisableMorphTarget_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisplayBones_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
				{ "ToolTip", "Draw the skeleton hierarchy for this skel mesh." },
			};
#endif
			auto NewProp_bDisplayBones_SetBit = [](void* Obj){ ((USkinnedMeshComponent*)Obj)->bDisplayBones_DEPRECATED = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisplayBones = { UE4CodeGen_Private::EPropertyClass::Bool, "bDisplayBones", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(USkinnedMeshComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDisplayBones_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDisplayBones_MetaData, ARRAY_COUNT(NewProp_bDisplayBones_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForceWireframe_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
				{ "ToolTip", "Forces the mesh to draw in wireframe mode." },
			};
#endif
			auto NewProp_bForceWireframe_SetBit = [](void* Obj){ ((USkinnedMeshComponent*)Obj)->bForceWireframe = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceWireframe = { UE4CodeGen_Private::EPropertyClass::Bool, "bForceWireframe", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(USkinnedMeshComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bForceWireframe_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bForceWireframe_MetaData, ARRAY_COUNT(NewProp_bForceWireframe_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WireframeColor_MetaData[] = {
				{ "Category", "SkeletalMesh" },
				{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
				{ "ToolTip", "Wireframe color" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_WireframeColor = { UE4CodeGen_Private::EPropertyClass::Struct, "WireframeColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000015, 1, nullptr, STRUCT_OFFSET(USkinnedMeshComponent, WireframeColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(NewProp_WireframeColor_MetaData, ARRAY_COUNT(NewProp_WireframeColor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StreamingDistanceMultiplier_MetaData[] = {
				{ "Category", "SkeletalMesh" },
				{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
				{ "ToolTip", "Allows adjusting the desired streaming distance of streaming textures that uses UV 0.\n1.0 is the default, whereas a higher value makes the textures stream in sooner from far away.\nA lower value (0.0-1.0) makes the textures stream in later (you have to be closer).\nValue can be < 0 (from legcay content, or code changes)" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StreamingDistanceMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "StreamingDistanceMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000005, 1, nullptr, STRUCT_OFFSET(USkinnedMeshComponent, StreamingDistanceMultiplier), METADATA_PARAMS(NewProp_StreamingDistanceMultiplier_MetaData, ARRAY_COUNT(NewProp_StreamingDistanceMultiplier_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODInfo_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
				{ "ToolTip", "LOD array info. Each index will correspond to the LOD index *" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LODInfo = { UE4CodeGen_Private::EPropertyClass::Array, "LODInfo", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, STRUCT_OFFSET(USkinnedMeshComponent, LODInfo), METADATA_PARAMS(NewProp_LODInfo_MetaData, ARRAY_COUNT(NewProp_LODInfo_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LODInfo_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "LODInfo", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FSkelMeshComponentLODInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinLodModel_MetaData[] = {
				{ "Category", "LOD" },
				{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
				{ "ToolTip", "This is the min LOD that this component will use.  (e.g. if set to 2 then only 2+ LOD Models will be used.) This is useful to set on\nmeshes which are known to be a certain distance away and still want to have better LODs when zoomed in on them." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinLodModel = { UE4CodeGen_Private::EPropertyClass::Int, "MinLodModel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000015, 1, nullptr, STRUCT_OFFSET(USkinnedMeshComponent, MinLodModel), METADATA_PARAMS(NewProp_MinLodModel_MetaData, ARRAY_COUNT(NewProp_MinLodModel_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForcedLodModel_MetaData[] = {
				{ "Category", "LOD" },
				{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
				{ "ToolTip", "If 0, auto-select LOD level. if >0, force to (ForcedLodModel-1)." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ForcedLodModel = { UE4CodeGen_Private::EPropertyClass::Int, "ForcedLodModel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000015, 1, nullptr, STRUCT_OFFSET(USkinnedMeshComponent, ForcedLodModel), METADATA_PARAMS(NewProp_ForcedLodModel_MetaData, ARRAY_COUNT(NewProp_ForcedLodModel_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicsAssetOverride_MetaData[] = {
				{ "Category", "Physics" },
				{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
				{ "ToolTip", "PhysicsAsset is set in SkeletalMesh by default, but you can override with this value" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PhysicsAssetOverride = { UE4CodeGen_Private::EPropertyClass::Object, "PhysicsAssetOverride", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000015, 1, nullptr, STRUCT_OFFSET(USkinnedMeshComponent, PhysicsAssetOverride), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(NewProp_PhysicsAssetOverride_MetaData, ARRAY_COUNT(NewProp_PhysicsAssetOverride_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialIndexPreview_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
				{ "ToolTip", "Index of the material to preview... If set to -1, all section will be rendered" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaterialIndexPreview = { UE4CodeGen_Private::EPropertyClass::Int, "MaterialIndexPreview", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800002000, 1, nullptr, STRUCT_OFFSET(USkinnedMeshComponent, MaterialIndexPreview), METADATA_PARAMS(NewProp_MaterialIndexPreview_MetaData, ARRAY_COUNT(NewProp_MaterialIndexPreview_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SectionIndexPreview_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
				{ "ToolTip", "Index of the section to preview... If set to -1, all section will be rendered" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_SectionIndexPreview = { UE4CodeGen_Private::EPropertyClass::Int, "SectionIndexPreview", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800002000, 1, nullptr, STRUCT_OFFSET(USkinnedMeshComponent, SectionIndexPreview), METADATA_PARAMS(NewProp_SectionIndexPreview_MetaData, ARRAY_COUNT(NewProp_SectionIndexPreview_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChunkIndexPreview_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
				{ "ToolTip", "Index of the chunk to preview... If set to -1, all chunks will be rendered" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ChunkIndexPreview = { UE4CodeGen_Private::EPropertyClass::Int, "ChunkIndexPreview", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800002000, 1, nullptr, STRUCT_OFFSET(USkinnedMeshComponent, ChunkIndexPreview), METADATA_PARAMS(NewProp_ChunkIndexPreview_MetaData, ARRAY_COUNT(NewProp_ChunkIndexPreview_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseBoundsFromMasterPoseComponent_MetaData[] = {
				{ "Category", "SkeletalMesh" },
				{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
				{ "ToolTip", "When true, we will just using the bounds from our MasterPoseComponent.  This is useful for when we have a Mesh Parented\nto the main SkelMesh (e.g. outline mesh or a full body overdraw effect that is toggled) that is always going to be the same\nbounds as parent.  We want to do no calculations in that case." },
			};
#endif
			auto NewProp_bUseBoundsFromMasterPoseComponent_SetBit = [](void* Obj){ ((USkinnedMeshComponent*)Obj)->bUseBoundsFromMasterPoseComponent = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseBoundsFromMasterPoseComponent = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseBoundsFromMasterPoseComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(USkinnedMeshComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseBoundsFromMasterPoseComponent_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseBoundsFromMasterPoseComponent_MetaData, ARRAY_COUNT(NewProp_bUseBoundsFromMasterPoseComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MasterPoseComponent_MetaData[] = {
				{ "Category", "Mesh" },
				{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
				{ "ToolTip", "If set, this SkeletalMeshComponent will not use its SpaceBase for bone transform, but will\nuse the component space transforms from the MasterPoseComponent. This is used when constructing a character using multiple skeletal meshes sharing the same\nskeleton within the same Actor." },
			};
#endif
			static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_MasterPoseComponent = { UE4CodeGen_Private::EPropertyClass::WeakObject, "MasterPoseComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x001400000008001c, 1, nullptr, STRUCT_OFFSET(USkinnedMeshComponent, MasterPoseComponent), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(NewProp_MasterPoseComponent_MetaData, ARRAY_COUNT(NewProp_MasterPoseComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[] = {
				{ "Category", "Mesh" },
				{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
				{ "ToolTip", "The skeletal mesh used by this component." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh = { UE4CodeGen_Private::EPropertyClass::Object, "SkeletalMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(USkinnedMeshComponent, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(NewProp_SkeletalMesh_MetaData, ARRAY_COUNT(NewProp_SkeletalMesh_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDisplayDebugUpdateRateOptimizations,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnableUpdateRateOptimizations,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCachedLocalBoundsUpToDate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CachedLocalBounds,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCPUSkinning,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CapsuleIndirectShadowMinVisibility,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCastCapsuleIndirectShadow,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCastCapsuleDirectShadow,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CustomSortAlternateIndexMode,
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ProgressiveDrawingFraction,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bRecentlyRendered,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCanHighlightSelectedSections,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bForceMeshObjectUpdate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MeshComponentUpdateFlag,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bConsiderAllBodiesForBounds,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bComponentUseFixedSkelBounds,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bPerBoneMotionBlur,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bHideSkin,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDisableMorphTarget,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDisplayBones,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bForceWireframe,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WireframeColor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StreamingDistanceMultiplier,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LODInfo,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LODInfo_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MinLodModel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ForcedLodModel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PhysicsAssetOverride,
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaterialIndexPreview,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SectionIndexPreview,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ChunkIndexPreview,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseBoundsFromMasterPoseComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MasterPoseComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SkeletalMesh,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USkinnedMeshComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USkinnedMeshComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B01081u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				"Engine",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USkinnedMeshComponent, 1809959920);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USkinnedMeshComponent(Z_Construct_UClass_USkinnedMeshComponent, &USkinnedMeshComponent::StaticClass, TEXT("/Script/Engine"), TEXT("USkinnedMeshComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USkinnedMeshComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
