// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Animation/AnimBlueprint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimBlueprint() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimParentNodeAssetOverride();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_UAnimationAsset_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimGroupInfo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UAnimBlueprint_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimBlueprint();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprint();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPoseWatch_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
// End Cross Module References
class UScriptStruct* FAnimParentNodeAssetOverride::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAnimParentNodeAssetOverride_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimParentNodeAssetOverride, Z_Construct_UPackage__Script_Engine(), TEXT("AnimParentNodeAssetOverride"), sizeof(FAnimParentNodeAssetOverride), Get_Z_Construct_UScriptStruct_FAnimParentNodeAssetOverride_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimParentNodeAssetOverride(FAnimParentNodeAssetOverride::StaticStruct, TEXT("/Script/Engine"), TEXT("AnimParentNodeAssetOverride"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAnimParentNodeAssetOverride
{
	FScriptStruct_Engine_StaticRegisterNativesFAnimParentNodeAssetOverride()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimParentNodeAssetOverride")),new UScriptStruct::TCppStructOps<FAnimParentNodeAssetOverride>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAnimParentNodeAssetOverride;
	UScriptStruct* Z_Construct_UScriptStruct_FAnimParentNodeAssetOverride()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimParentNodeAssetOverride_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimParentNodeAssetOverride"), sizeof(FAnimParentNodeAssetOverride), Get_Z_Construct_UScriptStruct_FAnimParentNodeAssetOverride_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimBlueprint.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimParentNodeAssetOverride>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentNodeGuid_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimBlueprint.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParentNodeGuid = { UE4CodeGen_Private::EPropertyClass::Struct, "ParentNodeGuid", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAnimParentNodeAssetOverride, ParentNodeGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_ParentNodeGuid_MetaData, ARRAY_COUNT(NewProp_ParentNodeGuid_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewAsset_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimBlueprint.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewAsset = { UE4CodeGen_Private::EPropertyClass::Object, "NewAsset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAnimParentNodeAssetOverride, NewAsset), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(NewProp_NewAsset_MetaData, ARRAY_COUNT(NewProp_NewAsset_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParentNodeGuid,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewAsset,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AnimParentNodeAssetOverride",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FAnimParentNodeAssetOverride),
				alignof(FAnimParentNodeAssetOverride),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimParentNodeAssetOverride_CRC() { return 394440963U; }
class UScriptStruct* FAnimGroupInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAnimGroupInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimGroupInfo, Z_Construct_UPackage__Script_Engine(), TEXT("AnimGroupInfo"), sizeof(FAnimGroupInfo), Get_Z_Construct_UScriptStruct_FAnimGroupInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimGroupInfo(FAnimGroupInfo::StaticStruct, TEXT("/Script/Engine"), TEXT("AnimGroupInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAnimGroupInfo
{
	FScriptStruct_Engine_StaticRegisterNativesFAnimGroupInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimGroupInfo")),new UScriptStruct::TCppStructOps<FAnimGroupInfo>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAnimGroupInfo;
	UScriptStruct* Z_Construct_UScriptStruct_FAnimGroupInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimGroupInfo_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimGroupInfo"), sizeof(FAnimGroupInfo), Get_Z_Construct_UScriptStruct_FAnimGroupInfo_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimBlueprint.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimGroupInfo>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimBlueprint.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color = { UE4CodeGen_Private::EPropertyClass::Struct, "Color", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAnimGroupInfo, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(NewProp_Color_MetaData, ARRAY_COUNT(NewProp_Color_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimBlueprint.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name = { UE4CodeGen_Private::EPropertyClass::Name, "Name", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAnimGroupInfo, Name), METADATA_PARAMS(NewProp_Name_MetaData, ARRAY_COUNT(NewProp_Name_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Color,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Name,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AnimGroupInfo",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FAnimGroupInfo),
				alignof(FAnimGroupInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimGroupInfo_CRC() { return 1129519926U; }
	void UAnimBlueprint::StaticRegisterNativesUAnimBlueprint()
	{
	}
	UClass* Z_Construct_UClass_UAnimBlueprint_NoRegister()
	{
		return UAnimBlueprint::StaticClass();
	}
	UClass* Z_Construct_UClass_UAnimBlueprint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlueprint,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "Animation/AnimBlueprint.h" },
				{ "ModuleRelativePath", "Classes/Animation/AnimBlueprint.h" },
				{ "ToolTip", "An Anim Blueprint is essentially a specialized Blueprint whose graphs control the animation of a Skeletal Mesh.\nIt can perform blending of animations, directly control the bones of the skeleton, and output a final pose\nfor a Skeletal Mesh each frame." },
			};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewSkeletalMesh_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimBlueprint.h" },
				{ "ToolTip", "The default skeletal mesh to use when previewing this asset - this only applies when you open Persona using this asset" },
			};
#endif
			static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_PreviewSkeletalMesh = { UE4CodeGen_Private::EPropertyClass::SoftObject, "PreviewSkeletalMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x0044010800200000, 1, nullptr, STRUCT_OFFSET(UAnimBlueprint, PreviewSkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(NewProp_PreviewSkeletalMesh_MetaData, ARRAY_COUNT(NewProp_PreviewSkeletalMesh_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PoseWatches_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimBlueprint.h" },
				{ "ToolTip", "Array of active pose watches (pose watch allows us to see the bone pose at a\nparticular point of the anim graph)" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PoseWatches = { UE4CodeGen_Private::EPropertyClass::Array, "PoseWatches", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800002000, 1, nullptr, STRUCT_OFFSET(UAnimBlueprint, PoseWatches), METADATA_PARAMS(NewProp_PoseWatches_MetaData, ARRAY_COUNT(NewProp_PoseWatches_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PoseWatches_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "PoseWatches", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000800000000, 1, nullptr, 0, Z_Construct_UClass_UPoseWatch_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentAssetOverrides_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimBlueprint.h" },
				{ "ToolTip", "Array of overrides to asset containing nodes in the parent that have been overridden" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ParentAssetOverrides = { UE4CodeGen_Private::EPropertyClass::Array, "ParentAssetOverrides", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(UAnimBlueprint, ParentAssetOverrides), METADATA_PARAMS(NewProp_ParentAssetOverrides_MetaData, ARRAY_COUNT(NewProp_ParentAssetOverrides_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParentAssetOverrides_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ParentAssetOverrides", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000800000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FAnimParentNodeAssetOverride, METADATA_PARAMS(nullptr, 0) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWarnAboutBlueprintUsage_MetaData[] = {
				{ "Category", "Optimization" },
				{ "ModuleRelativePath", "Classes/Animation/AnimBlueprint.h" },
				{ "ToolTip", "Selecting this option will cause the compiler to emit warnings whenever a call into Blueprint\nis made from the animation graph. This can help track down optimizations that need to be made." },
			};
#endif
			auto NewProp_bWarnAboutBlueprintUsage_SetBit = [](void* Obj){ ((UAnimBlueprint*)Obj)->bWarnAboutBlueprintUsage = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWarnAboutBlueprintUsage = { UE4CodeGen_Private::EPropertyClass::Bool, "bWarnAboutBlueprintUsage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAnimBlueprint), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bWarnAboutBlueprintUsage_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bWarnAboutBlueprintUsage_MetaData, ARRAY_COUNT(NewProp_bWarnAboutBlueprintUsage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseMultiThreadedAnimationUpdate_MetaData[] = {
				{ "Category", "Optimization" },
				{ "ModuleRelativePath", "Classes/Animation/AnimBlueprint.h" },
				{ "ToolTip", "Allows this anim Blueprint to update its native update, blend tree, montages and asset players on\na worker thread. The compiler will attempt to pick up any issues that may occur with threaded update.\nFor updates to run in multiple threads both this flag and the project setting \"Allow Multi Threaded\nAnimation Update\" should be set." },
			};
#endif
			auto NewProp_bUseMultiThreadedAnimationUpdate_SetBit = [](void* Obj){ ((UAnimBlueprint*)Obj)->bUseMultiThreadedAnimationUpdate = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseMultiThreadedAnimationUpdate = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseMultiThreadedAnimationUpdate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAnimBlueprint), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseMultiThreadedAnimationUpdate_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseMultiThreadedAnimationUpdate_MetaData, ARRAY_COUNT(NewProp_bUseMultiThreadedAnimationUpdate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Groups_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimBlueprint.h" },
				{ "ToolTip", "List of animation sync groups" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Groups = { UE4CodeGen_Private::EPropertyClass::Array, "Groups", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UAnimBlueprint, Groups), METADATA_PARAMS(NewProp_Groups_MetaData, ARRAY_COUNT(NewProp_Groups_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Groups_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Groups", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FAnimGroupInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetSkeleton_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimBlueprint.h" },
				{ "ToolTip", "The kind of skeleton that animation graphs compiled from the blueprint will animate" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetSkeleton = { UE4CodeGen_Private::EPropertyClass::Object, "TargetSkeleton", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010010000000000, 1, nullptr, STRUCT_OFFSET(UAnimBlueprint, TargetSkeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(NewProp_TargetSkeleton_MetaData, ARRAY_COUNT(NewProp_TargetSkeleton_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PreviewSkeletalMesh,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PoseWatches,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PoseWatches_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParentAssetOverrides,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParentAssetOverrides_Inner,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bWarnAboutBlueprintUsage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseMultiThreadedAnimationUpdate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Groups,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Groups_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetSkeleton,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAnimBlueprint>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAnimBlueprint::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900084u,
				nullptr, 0,
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
	IMPLEMENT_CLASS(UAnimBlueprint, 2819678903);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimBlueprint(Z_Construct_UClass_UAnimBlueprint, &UAnimBlueprint::StaticClass, TEXT("/Script/Engine"), TEXT("UAnimBlueprint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimBlueprint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
