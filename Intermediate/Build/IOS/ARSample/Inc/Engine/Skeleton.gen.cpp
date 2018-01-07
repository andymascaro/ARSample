// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Animation/Skeleton.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkeleton() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBoneTranslationRetargetingMode();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVirtualBone();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimSlotGroup();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRigConfiguration();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNameMapping();
	ENGINE_API UClass* Z_Construct_UClass_URig_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReductionSetting();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FReferencePose();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneNode();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSkeletonToMeshLinkup();
	ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeleton();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UAssetUserData_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPreviewAssetAttachContainer();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlendProfile_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartNameContainer();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshSocket_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_UInterface_AssetUserData_NoRegister();
// End Cross Module References
	static UEnum* EBoneTranslationRetargetingMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EBoneTranslationRetargetingMode, Z_Construct_UPackage__Script_Engine(), TEXT("EBoneTranslationRetargetingMode"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBoneTranslationRetargetingMode(EBoneTranslationRetargetingMode_StaticEnum, TEXT("/Script/Engine"), TEXT("EBoneTranslationRetargetingMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EBoneTranslationRetargetingMode_CRC() { return 1129152053U; }
	UEnum* Z_Construct_UEnum_Engine_EBoneTranslationRetargetingMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBoneTranslationRetargetingMode"), 0, Get_Z_Construct_UEnum_Engine_EBoneTranslationRetargetingMode_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBoneTranslationRetargetingMode::Animation", (int64)EBoneTranslationRetargetingMode::Animation },
				{ "EBoneTranslationRetargetingMode::Skeleton", (int64)EBoneTranslationRetargetingMode::Skeleton },
				{ "EBoneTranslationRetargetingMode::AnimationScaled", (int64)EBoneTranslationRetargetingMode::AnimationScaled },
				{ "EBoneTranslationRetargetingMode::AnimationRelative", (int64)EBoneTranslationRetargetingMode::AnimationRelative },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Animation.ToolTip", "Use translation from animation data." },
				{ "AnimationRelative.ToolTip", "Use Translation from animation, but also play the difference from retargeting pose as an additive." },
				{ "AnimationScaled.ToolTip", "Use Translation from animation, but scale length by Skeleton's proportions." },
				{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
				{ "Skeleton.ToolTip", "Use fixed translation from Skeleton." },
				{ "ToolTip", "Bone translation retargeting mode." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EBoneTranslationRetargetingMode",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EBoneTranslationRetargetingMode::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FVirtualBone::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FVirtualBone_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVirtualBone, Z_Construct_UPackage__Script_Engine(), TEXT("VirtualBone"), sizeof(FVirtualBone), Get_Z_Construct_UScriptStruct_FVirtualBone_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVirtualBone(FVirtualBone::StaticStruct, TEXT("/Script/Engine"), TEXT("VirtualBone"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFVirtualBone
{
	FScriptStruct_Engine_StaticRegisterNativesFVirtualBone()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VirtualBone")),new UScriptStruct::TCppStructOps<FVirtualBone>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFVirtualBone;
	UScriptStruct* Z_Construct_UScriptStruct_FVirtualBone()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVirtualBone_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VirtualBone"), sizeof(FVirtualBone), Get_Z_Construct_UScriptStruct_FVirtualBone_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVirtualBone>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VirtualBoneName_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_VirtualBoneName = { UE4CodeGen_Private::EPropertyClass::Name, "VirtualBoneName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FVirtualBone, VirtualBoneName), METADATA_PARAMS(NewProp_VirtualBoneName_MetaData, ARRAY_COUNT(NewProp_VirtualBoneName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetBoneName_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_TargetBoneName = { UE4CodeGen_Private::EPropertyClass::Name, "TargetBoneName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FVirtualBone, TargetBoneName), METADATA_PARAMS(NewProp_TargetBoneName_MetaData, ARRAY_COUNT(NewProp_TargetBoneName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceBoneName_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_SourceBoneName = { UE4CodeGen_Private::EPropertyClass::Name, "SourceBoneName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FVirtualBone, SourceBoneName), METADATA_PARAMS(NewProp_SourceBoneName_MetaData, ARRAY_COUNT(NewProp_SourceBoneName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VirtualBoneName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetBoneName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SourceBoneName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"VirtualBone",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FVirtualBone),
				alignof(FVirtualBone),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVirtualBone_CRC() { return 1634923280U; }
class UScriptStruct* FAnimSlotGroup::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAnimSlotGroup_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimSlotGroup, Z_Construct_UPackage__Script_Engine(), TEXT("AnimSlotGroup"), sizeof(FAnimSlotGroup), Get_Z_Construct_UScriptStruct_FAnimSlotGroup_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimSlotGroup(FAnimSlotGroup::StaticStruct, TEXT("/Script/Engine"), TEXT("AnimSlotGroup"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAnimSlotGroup
{
	FScriptStruct_Engine_StaticRegisterNativesFAnimSlotGroup()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimSlotGroup")),new UScriptStruct::TCppStructOps<FAnimSlotGroup>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAnimSlotGroup;
	UScriptStruct* Z_Construct_UScriptStruct_FAnimSlotGroup()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimSlotGroup_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimSlotGroup"), sizeof(FAnimSlotGroup), Get_Z_Construct_UScriptStruct_FAnimSlotGroup_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimSlotGroup>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotNames_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SlotNames = { UE4CodeGen_Private::EPropertyClass::Array, "SlotNames", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAnimSlotGroup, SlotNames), METADATA_PARAMS(NewProp_SlotNames_MetaData, ARRAY_COUNT(NewProp_SlotNames_MetaData)) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_SlotNames_Inner = { UE4CodeGen_Private::EPropertyClass::Name, "SlotNames", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupName_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_GroupName = { UE4CodeGen_Private::EPropertyClass::Name, "GroupName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAnimSlotGroup, GroupName), METADATA_PARAMS(NewProp_GroupName_MetaData, ARRAY_COUNT(NewProp_GroupName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SlotNames,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SlotNames_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GroupName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AnimSlotGroup",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FAnimSlotGroup),
				alignof(FAnimSlotGroup),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimSlotGroup_CRC() { return 2334950056U; }
class UScriptStruct* FRigConfiguration::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FRigConfiguration_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigConfiguration, Z_Construct_UPackage__Script_Engine(), TEXT("RigConfiguration"), sizeof(FRigConfiguration), Get_Z_Construct_UScriptStruct_FRigConfiguration_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRigConfiguration(FRigConfiguration::StaticStruct, TEXT("/Script/Engine"), TEXT("RigConfiguration"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFRigConfiguration
{
	FScriptStruct_Engine_StaticRegisterNativesFRigConfiguration()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RigConfiguration")),new UScriptStruct::TCppStructOps<FRigConfiguration>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFRigConfiguration;
	UScriptStruct* Z_Construct_UScriptStruct_FRigConfiguration()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRigConfiguration_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RigConfiguration"), sizeof(FRigConfiguration), Get_Z_Construct_UScriptStruct_FRigConfiguration_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigConfiguration>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneMappingTable_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
				{ "ToolTip", "@todo in the future we can make this to be run-time data" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BoneMappingTable = { UE4CodeGen_Private::EPropertyClass::Array, "BoneMappingTable", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FRigConfiguration, BoneMappingTable), METADATA_PARAMS(NewProp_BoneMappingTable_MetaData, ARRAY_COUNT(NewProp_BoneMappingTable_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoneMappingTable_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "BoneMappingTable", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FNameMapping, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rig_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Rig = { UE4CodeGen_Private::EPropertyClass::Object, "Rig", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FRigConfiguration, Rig), Z_Construct_UClass_URig_NoRegister, METADATA_PARAMS(NewProp_Rig_MetaData, ARRAY_COUNT(NewProp_Rig_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoneMappingTable,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoneMappingTable_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Rig,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"RigConfiguration",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FRigConfiguration),
				alignof(FRigConfiguration),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRigConfiguration_CRC() { return 2955418545U; }
class UScriptStruct* FNameMapping::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FNameMapping_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNameMapping, Z_Construct_UPackage__Script_Engine(), TEXT("NameMapping"), sizeof(FNameMapping), Get_Z_Construct_UScriptStruct_FNameMapping_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNameMapping(FNameMapping::StaticStruct, TEXT("/Script/Engine"), TEXT("NameMapping"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFNameMapping
{
	FScriptStruct_Engine_StaticRegisterNativesFNameMapping()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NameMapping")),new UScriptStruct::TCppStructOps<FNameMapping>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFNameMapping;
	UScriptStruct* Z_Construct_UScriptStruct_FNameMapping()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNameMapping_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NameMapping"), sizeof(FNameMapping), Get_Z_Construct_UScriptStruct_FNameMapping_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNameMapping>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName = { UE4CodeGen_Private::EPropertyClass::Name, "BoneName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FNameMapping, BoneName), METADATA_PARAMS(NewProp_BoneName_MetaData, ARRAY_COUNT(NewProp_BoneName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeName_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_NodeName = { UE4CodeGen_Private::EPropertyClass::Name, "NodeName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FNameMapping, NodeName), METADATA_PARAMS(NewProp_NodeName_MetaData, ARRAY_COUNT(NewProp_NodeName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoneName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NodeName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"NameMapping",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FNameMapping),
				alignof(FNameMapping),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNameMapping_CRC() { return 2754089651U; }
class UScriptStruct* FBoneReductionSetting::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FBoneReductionSetting_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBoneReductionSetting, Z_Construct_UPackage__Script_Engine(), TEXT("BoneReductionSetting"), sizeof(FBoneReductionSetting), Get_Z_Construct_UScriptStruct_FBoneReductionSetting_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBoneReductionSetting(FBoneReductionSetting::StaticStruct, TEXT("/Script/Engine"), TEXT("BoneReductionSetting"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFBoneReductionSetting
{
	FScriptStruct_Engine_StaticRegisterNativesFBoneReductionSetting()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BoneReductionSetting")),new UScriptStruct::TCppStructOps<FBoneReductionSetting>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFBoneReductionSetting;
	UScriptStruct* Z_Construct_UScriptStruct_FBoneReductionSetting()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBoneReductionSetting_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BoneReductionSetting"), sizeof(FBoneReductionSetting), Get_Z_Construct_UScriptStruct_FBoneReductionSetting_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBoneReductionSetting>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BonesToRemove_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BonesToRemove = { UE4CodeGen_Private::EPropertyClass::Array, "BonesToRemove", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FBoneReductionSetting, BonesToRemove), METADATA_PARAMS(NewProp_BonesToRemove_MetaData, ARRAY_COUNT(NewProp_BonesToRemove_MetaData)) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_BonesToRemove_Inner = { UE4CodeGen_Private::EPropertyClass::Name, "BonesToRemove", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BonesToRemove,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BonesToRemove_Inner,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"BoneReductionSetting",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FBoneReductionSetting),
				alignof(FBoneReductionSetting),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBoneReductionSetting_CRC() { return 3703062577U; }
class UScriptStruct* FReferencePose::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FReferencePose_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FReferencePose, Z_Construct_UPackage__Script_Engine(), TEXT("ReferencePose"), sizeof(FReferencePose), Get_Z_Construct_UScriptStruct_FReferencePose_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FReferencePose(FReferencePose::StaticStruct, TEXT("/Script/Engine"), TEXT("ReferencePose"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFReferencePose
{
	FScriptStruct_Engine_StaticRegisterNativesFReferencePose()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ReferencePose")),new UScriptStruct::TCppStructOps<FReferencePose>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFReferencePose;
	UScriptStruct* Z_Construct_UScriptStruct_FReferencePose()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FReferencePose_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ReferencePose"), sizeof(FReferencePose), Get_Z_Construct_UScriptStruct_FReferencePose_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
				{ "ToolTip", "This is a mapping table between bone in a particular skeletal mesh and bone of this skeleton set." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FReferencePose>(); };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReferenceMesh_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReferenceMesh = { UE4CodeGen_Private::EPropertyClass::Object, "ReferenceMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(FReferencePose, ReferenceMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(NewProp_ReferenceMesh_MetaData, ARRAY_COUNT(NewProp_ReferenceMesh_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReferencePose_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReferencePose = { UE4CodeGen_Private::EPropertyClass::Array, "ReferencePose", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FReferencePose, ReferencePose), METADATA_PARAMS(NewProp_ReferencePose_MetaData, ARRAY_COUNT(NewProp_ReferencePose_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReferencePose_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ReferencePose", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PoseName_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_PoseName = { UE4CodeGen_Private::EPropertyClass::Name, "PoseName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FReferencePose, PoseName), METADATA_PARAMS(NewProp_PoseName_MetaData, ARRAY_COUNT(NewProp_PoseName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReferenceMesh,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReferencePose,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReferencePose_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PoseName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"ReferencePose",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FReferencePose),
				alignof(FReferencePose),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FReferencePose_CRC() { return 325769205U; }
class UScriptStruct* FBoneNode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FBoneNode_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBoneNode, Z_Construct_UPackage__Script_Engine(), TEXT("BoneNode"), sizeof(FBoneNode), Get_Z_Construct_UScriptStruct_FBoneNode_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBoneNode(FBoneNode::StaticStruct, TEXT("/Script/Engine"), TEXT("BoneNode"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFBoneNode
{
	FScriptStruct_Engine_StaticRegisterNativesFBoneNode()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BoneNode")),new UScriptStruct::TCppStructOps<FBoneNode>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFBoneNode;
	UScriptStruct* Z_Construct_UScriptStruct_FBoneNode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBoneNode_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BoneNode"), sizeof(FBoneNode), Get_Z_Construct_UScriptStruct_FBoneNode_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
				{ "ToolTip", "Each Bone node in BoneTree" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBoneNode>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TranslationRetargetingMode_MetaData[] = {
				{ "Category", "BoneNode" },
				{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
				{ "ToolTip", "Retargeting Mode for Translation Component." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_TranslationRetargetingMode = { UE4CodeGen_Private::EPropertyClass::Byte, "TranslationRetargetingMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FBoneNode, TranslationRetargetingMode), Z_Construct_UEnum_Engine_EBoneTranslationRetargetingMode, METADATA_PARAMS(NewProp_TranslationRetargetingMode_MetaData, ARRAY_COUNT(NewProp_TranslationRetargetingMode_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentIndex_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
				{ "ToolTip", "Parent Index. -1 if not used. The root has 0 as its parent. Do not delete the element but set this to -1. If it is revived by other reason, fix up this link." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ParentIndex = { UE4CodeGen_Private::EPropertyClass::Int, "ParentIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(FBoneNode, ParentIndex_DEPRECATED), METADATA_PARAMS(NewProp_ParentIndex_MetaData, ARRAY_COUNT(NewProp_ParentIndex_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
				{ "ToolTip", "Name of bone, this is the search criteria to match with mesh bone. This will be NAME_None if deleted." },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name = { UE4CodeGen_Private::EPropertyClass::Name, "Name", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(FBoneNode, Name_DEPRECATED), METADATA_PARAMS(NewProp_Name_MetaData, ARRAY_COUNT(NewProp_Name_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TranslationRetargetingMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParentIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Name,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"BoneNode",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FBoneNode),
				alignof(FBoneNode),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBoneNode_CRC() { return 822923509U; }
class UScriptStruct* FSkeletonToMeshLinkup::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FSkeletonToMeshLinkup_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkeletonToMeshLinkup, Z_Construct_UPackage__Script_Engine(), TEXT("SkeletonToMeshLinkup"), sizeof(FSkeletonToMeshLinkup), Get_Z_Construct_UScriptStruct_FSkeletonToMeshLinkup_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSkeletonToMeshLinkup(FSkeletonToMeshLinkup::StaticStruct, TEXT("/Script/Engine"), TEXT("SkeletonToMeshLinkup"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFSkeletonToMeshLinkup
{
	FScriptStruct_Engine_StaticRegisterNativesFSkeletonToMeshLinkup()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SkeletonToMeshLinkup")),new UScriptStruct::TCppStructOps<FSkeletonToMeshLinkup>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFSkeletonToMeshLinkup;
	UScriptStruct* Z_Construct_UScriptStruct_FSkeletonToMeshLinkup()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSkeletonToMeshLinkup_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SkeletonToMeshLinkup"), sizeof(FSkeletonToMeshLinkup), Get_Z_Construct_UScriptStruct_FSkeletonToMeshLinkup_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
				{ "ToolTip", "This is a mapping table between bone in a particular skeletal mesh and bone of this skeleton set." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkeletonToMeshLinkup>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshToSkeletonTable_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
				{ "ToolTip", "Mapping table. Size must be same as size of ref pose (not bone tree).\nNo index should be more than the number of bones in this skeletalmesh\n-1 indicates no match for this bone - will be ignored." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MeshToSkeletonTable = { UE4CodeGen_Private::EPropertyClass::Array, "MeshToSkeletonTable", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FSkeletonToMeshLinkup, MeshToSkeletonTable), METADATA_PARAMS(NewProp_MeshToSkeletonTable_MetaData, ARRAY_COUNT(NewProp_MeshToSkeletonTable_MetaData)) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MeshToSkeletonTable_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "MeshToSkeletonTable", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletonToMeshTable_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
				{ "ToolTip", "Mapping table. Size must be same as size of bone tree (not Mesh Ref Pose).\nNo index should be more than the number of bones in this skeleton\n-1 indicates no match for this bone - will be ignored." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SkeletonToMeshTable = { UE4CodeGen_Private::EPropertyClass::Array, "SkeletonToMeshTable", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FSkeletonToMeshLinkup, SkeletonToMeshTable), METADATA_PARAMS(NewProp_SkeletonToMeshTable_MetaData, ARRAY_COUNT(NewProp_SkeletonToMeshTable_MetaData)) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_SkeletonToMeshTable_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "SkeletonToMeshTable", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MeshToSkeletonTable,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MeshToSkeletonTable_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SkeletonToMeshTable,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SkeletonToMeshTable_Inner,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"SkeletonToMeshLinkup",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FSkeletonToMeshLinkup),
				alignof(FSkeletonToMeshLinkup),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSkeletonToMeshLinkup_CRC() { return 1660706919U; }
	void USkeleton::StaticRegisterNativesUSkeleton()
	{
	}
	UClass* Z_Construct_UClass_USkeleton_NoRegister()
	{
		return USkeleton::StaticClass();
	}
	UClass* Z_Construct_UClass_USkeleton()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Object" },
				{ "IncludePath", "Animation/Skeleton.h" },
				{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
				{ "ToolTip", "USkeleton : that links between mesh and animation\n        - Bone hierarchy for animations\n        - Bone/track linkup between mesh and animation\n        - Retargetting related\n        - Mirror table" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetUserData_MetaData[] = {
				{ "Category", "Skeleton" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
				{ "ToolTip", "Array of user data stored with the asset" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AssetUserData = { UE4CodeGen_Private::EPropertyClass::Array, "AssetUserData", RF_Public|RF_Transient|RF_MarkAsNative, 0x00200c8000000009, 1, nullptr, STRUCT_OFFSET(USkeleton, AssetUserData), METADATA_PARAMS(NewProp_AssetUserData_MetaData, ARRAY_COUNT(NewProp_AssetUserData_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetUserData_Inner_MetaData[] = {
				{ "Category", "Skeleton" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
				{ "ToolTip", "Array of user data stored with the asset" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetUserData_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "AssetUserData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0002000000080008, 1, nullptr, 0, Z_Construct_UClass_UAssetUserData_NoRegister, METADATA_PARAMS(NewProp_AssetUserData_Inner_MetaData, ARRAY_COUNT(NewProp_AssetUserData_Inner_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewAttachedAssetContainer_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
				{ "ToolTip", "Attached assets component for this skeleton" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PreviewAttachedAssetContainer = { UE4CodeGen_Private::EPropertyClass::Struct, "PreviewAttachedAssetContainer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(USkeleton, PreviewAttachedAssetContainer), Z_Construct_UScriptStruct_FPreviewAssetAttachContainer, METADATA_PARAMS(NewProp_PreviewAttachedAssetContainer_MetaData, ARRAY_COUNT(NewProp_PreviewAttachedAssetContainer_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationNotifies_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
				{ "ToolTip", "AnimNotifiers that has been created. Right now there is no delete step for this, but in the future we'll supply delete*" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AnimationNotifies = { UE4CodeGen_Private::EPropertyClass::Array, "AnimationNotifies", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(USkeleton, AnimationNotifies), METADATA_PARAMS(NewProp_AnimationNotifies_MetaData, ARRAY_COUNT(NewProp_AnimationNotifies_MetaData)) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_AnimationNotifies_Inner = { UE4CodeGen_Private::EPropertyClass::Name, "AnimationNotifies", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000800000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RigConfig_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_RigConfig = { UE4CodeGen_Private::EPropertyClass::Struct, "RigConfig", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000800000000, 1, nullptr, STRUCT_OFFSET(USkeleton, RigConfig), Z_Construct_UScriptStruct_FRigConfiguration, METADATA_PARAMS(NewProp_RigConfig_MetaData, ARRAY_COUNT(NewProp_RigConfig_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditionalPreviewSkeletalMeshes_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
				{ "ToolTip", "The additional skeletal meshes to use when previewing this skeleton" },
			};
#endif
			static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_AdditionalPreviewSkeletalMeshes = { UE4CodeGen_Private::EPropertyClass::SoftObject, "AdditionalPreviewSkeletalMeshes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0044010800200000, 1, nullptr, STRUCT_OFFSET(USkeleton, AdditionalPreviewSkeletalMeshes), Z_Construct_UClass_UDataAsset_NoRegister, METADATA_PARAMS(NewProp_AdditionalPreviewSkeletalMeshes_MetaData, ARRAY_COUNT(NewProp_AdditionalPreviewSkeletalMeshes_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewSkeletalMesh_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
				{ "ToolTip", "The default skeletal mesh to use when previewing this skeleton" },
			};
#endif
			static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_PreviewSkeletalMesh = { UE4CodeGen_Private::EPropertyClass::SoftObject, "PreviewSkeletalMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x0044010800200000, 1, nullptr, STRUCT_OFFSET(USkeleton, PreviewSkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(NewProp_PreviewSkeletalMesh_MetaData, ARRAY_COUNT(NewProp_PreviewSkeletalMesh_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotGroups_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
				{ "ToolTip", "serialized slot groups and slot names." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SlotGroups = { UE4CodeGen_Private::EPropertyClass::Array, "SlotGroups", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(USkeleton, SlotGroups), METADATA_PARAMS(NewProp_SlotGroups_MetaData, ARRAY_COUNT(NewProp_SlotGroups_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SlotGroups_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "SlotGroups", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FAnimSlotGroup, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendProfiles_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
				{ "ToolTip", "List of blend profiles available in this skeleton" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BlendProfiles = { UE4CodeGen_Private::EPropertyClass::Array, "BlendProfiles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000008, 1, nullptr, STRUCT_OFFSET(USkeleton, BlendProfiles), METADATA_PARAMS(NewProp_BlendProfiles_MetaData, ARRAY_COUNT(NewProp_BlendProfiles_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendProfiles_Inner_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
				{ "ToolTip", "List of blend profiles available in this skeleton" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlendProfiles_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "BlendProfiles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0002000000080008, 1, nullptr, 0, Z_Construct_UClass_UBlendProfile_NoRegister, METADATA_PARAMS(NewProp_BlendProfiles_Inner_MetaData, ARRAY_COUNT(NewProp_BlendProfiles_Inner_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SmartNames_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
				{ "ToolTip", "Container for smart name mappings" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SmartNames = { UE4CodeGen_Private::EPropertyClass::Struct, "SmartNames", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(USkeleton, SmartNames), Z_Construct_UScriptStruct_FSmartNameContainer, METADATA_PARAMS(NewProp_SmartNames_MetaData, ARRAY_COUNT(NewProp_SmartNames_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sockets_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
				{ "ToolTip", "Array of named socket locations, set up in editor and used as a shortcut instead of specifying\neverything explicitly to AttachComponent in the SkeletalMeshComponent." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Sockets = { UE4CodeGen_Private::EPropertyClass::Array, "Sockets", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(USkeleton, Sockets), METADATA_PARAMS(NewProp_Sockets_MetaData, ARRAY_COUNT(NewProp_Sockets_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sockets_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Sockets", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_USkeletalMeshSocket_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VirtualBones_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
				{ "ToolTip", "Array of this skeletons virtual bones. These are new bones are links between two existing bones\nand are baked into all the skeletons animations" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VirtualBones = { UE4CodeGen_Private::EPropertyClass::Array, "VirtualBones", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(USkeleton, VirtualBones), METADATA_PARAMS(NewProp_VirtualBones_MetaData, ARRAY_COUNT(NewProp_VirtualBones_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_VirtualBones_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "VirtualBones", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVirtualBone, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VirtualBoneGuid_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
				{ "ToolTip", "Guid for virtual bones.\nSeparate so that we don't have to dirty the original guid when only changing virtual bones" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_VirtualBoneGuid = { UE4CodeGen_Private::EPropertyClass::Struct, "VirtualBoneGuid", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(USkeleton, VirtualBoneGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_VirtualBoneGuid_MetaData, ARRAY_COUNT(NewProp_VirtualBoneGuid_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RefLocalPoses_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
				{ "ToolTip", "Reference skeleton poses in local space" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RefLocalPoses = { UE4CodeGen_Private::EPropertyClass::Array, "RefLocalPoses", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080020000000, 1, nullptr, STRUCT_OFFSET(USkeleton, RefLocalPoses_DEPRECATED), METADATA_PARAMS(NewProp_RefLocalPoses_MetaData, ARRAY_COUNT(NewProp_RefLocalPoses_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_RefLocalPoses_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "RefLocalPoses", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000020000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneTree_MetaData[] = {
				{ "Category", "Skeleton" },
				{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
				{ "ToolTip", "Skeleton bone tree - each contains name and parent index*" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BoneTree = { UE4CodeGen_Private::EPropertyClass::Array, "BoneTree", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000020001, 1, nullptr, STRUCT_OFFSET(USkeleton, BoneTree), METADATA_PARAMS(NewProp_BoneTree_MetaData, ARRAY_COUNT(NewProp_BoneTree_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoneTree_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "BoneTree", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000020000, 1, nullptr, 0, Z_Construct_UScriptStruct_FBoneNode, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AssetUserData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AssetUserData_Inner,
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PreviewAttachedAssetContainer,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AnimationNotifies,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AnimationNotifies_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RigConfig,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AdditionalPreviewSkeletalMeshes,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PreviewSkeletalMesh,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SlotGroups,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SlotGroups_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlendProfiles,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlendProfiles_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SmartNames,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Sockets,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Sockets_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VirtualBones,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VirtualBones_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VirtualBoneGuid,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RefLocalPoses,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RefLocalPoses_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoneTree,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoneTree_Inner,
			};
			static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[] = {
				{ Z_Construct_UClass_UInterface_AssetUserData_NoRegister, (int32)VTABLE_OFFSET(USkeleton, IInterface_AssetUserData), false },
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USkeleton>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USkeleton::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				InterfaceParams, ARRAY_COUNT(InterfaceParams),
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USkeleton, 2343881389);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USkeleton(Z_Construct_UClass_USkeleton, &USkeleton::StaticClass, TEXT("/Script/Engine"), TEXT("USkeleton"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USkeleton);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
