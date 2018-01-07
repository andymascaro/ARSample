// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Animation/AnimSet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimSet() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimSetMeshLinkup();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSet_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSet();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
// End Cross Module References
class UScriptStruct* FAnimSetMeshLinkup::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAnimSetMeshLinkup_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimSetMeshLinkup, Z_Construct_UPackage__Script_Engine(), TEXT("AnimSetMeshLinkup"), sizeof(FAnimSetMeshLinkup), Get_Z_Construct_UScriptStruct_FAnimSetMeshLinkup_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimSetMeshLinkup(FAnimSetMeshLinkup::StaticStruct, TEXT("/Script/Engine"), TEXT("AnimSetMeshLinkup"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAnimSetMeshLinkup
{
	FScriptStruct_Engine_StaticRegisterNativesFAnimSetMeshLinkup()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimSetMeshLinkup")),new UScriptStruct::TCppStructOps<FAnimSetMeshLinkup>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAnimSetMeshLinkup;
	UScriptStruct* Z_Construct_UScriptStruct_FAnimSetMeshLinkup()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimSetMeshLinkup_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimSetMeshLinkup"), sizeof(FAnimSetMeshLinkup), Get_Z_Construct_UScriptStruct_FAnimSetMeshLinkup_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimSet.h" },
				{ "ToolTip", "This is a mapping table between each bone in a particular skeletal mesh and the tracks of this animation set." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimSetMeshLinkup>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneToTrackTable_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimSet.h" },
				{ "ToolTip", "Mapping table. Size must be same as size of SkelMesh reference skeleton.\nNo index should be more than the number of tracks in this AnimSet.\n-1 indicates no track for this bone - will use reference pose instead." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BoneToTrackTable = { UE4CodeGen_Private::EPropertyClass::Array, "BoneToTrackTable", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAnimSetMeshLinkup, BoneToTrackTable), METADATA_PARAMS(NewProp_BoneToTrackTable_MetaData, ARRAY_COUNT(NewProp_BoneToTrackTable_MetaData)) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_BoneToTrackTable_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "BoneToTrackTable", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoneToTrackTable,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoneToTrackTable_Inner,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AnimSetMeshLinkup",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FAnimSetMeshLinkup),
				alignof(FAnimSetMeshLinkup),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimSetMeshLinkup_CRC() { return 1287408642U; }
	void UAnimSet::StaticRegisterNativesUAnimSet()
	{
	}
	UClass* Z_Construct_UClass_UAnimSet_NoRegister()
	{
		return UAnimSet::StaticClass();
	}
	UClass* Z_Construct_UClass_UAnimSet()
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
				{ "IncludePath", "Animation/AnimSet.h" },
				{ "ModuleRelativePath", "Classes/Animation/AnimSet.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BestRatioSkelMeshName_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimSet.h" },
				{ "ToolTip", "Holds the name of the skeletal mesh whose reference skeleton best matches the TrackBoneName array." },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_BestRatioSkelMeshName = { UE4CodeGen_Private::EPropertyClass::Name, "BestRatioSkelMeshName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UAnimSet, BestRatioSkelMeshName), METADATA_PARAMS(NewProp_BestRatioSkelMeshName_MetaData, ARRAY_COUNT(NewProp_BestRatioSkelMeshName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewSkelMeshName_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimSet.h" },
				{ "ToolTip", "In the AnimSetEditor, when you switch to this AnimSet, it sees if this skeletal mesh is loaded and if so switches to it." },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_PreviewSkelMeshName = { UE4CodeGen_Private::EPropertyClass::Name, "PreviewSkelMeshName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UAnimSet, PreviewSkelMeshName), METADATA_PARAMS(NewProp_PreviewSkelMeshName_MetaData, ARRAY_COUNT(NewProp_PreviewSkelMeshName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForceMeshTranslationBoneNames_MetaData[] = {
				{ "Category", "AnimSet" },
				{ "ModuleRelativePath", "Classes/Animation/AnimSet.h" },
				{ "ToolTip", "List of bones which are ALWAYS going to use their translation from the mesh and not the animation. // @UE4: Do not change private - they will go away" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ForceMeshTranslationBoneNames = { UE4CodeGen_Private::EPropertyClass::Array, "ForceMeshTranslationBoneNames", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(UAnimSet, ForceMeshTranslationBoneNames), METADATA_PARAMS(NewProp_ForceMeshTranslationBoneNames_MetaData, ARRAY_COUNT(NewProp_ForceMeshTranslationBoneNames_MetaData)) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ForceMeshTranslationBoneNames_Inner = { UE4CodeGen_Private::EPropertyClass::Name, "ForceMeshTranslationBoneNames", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseTranslationBoneNames_MetaData[] = {
				{ "Category", "AnimSet" },
				{ "ModuleRelativePath", "Classes/Animation/AnimSet.h" },
				{ "ToolTip", "Names of bones that should use translation from the animation, if bAnimRotationOnly is set. // @UE4: Do not change private - they will go away" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UseTranslationBoneNames = { UE4CodeGen_Private::EPropertyClass::Array, "UseTranslationBoneNames", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(UAnimSet, UseTranslationBoneNames), METADATA_PARAMS(NewProp_UseTranslationBoneNames_MetaData, ARRAY_COUNT(NewProp_UseTranslationBoneNames_MetaData)) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_UseTranslationBoneNames_Inner = { UE4CodeGen_Private::EPropertyClass::Name, "UseTranslationBoneNames", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForceUseMeshTranslation_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimSet.h" },
				{ "ToolTip", "Cooked down version of ForceMeshTranslationBoneNames // @UE4: Do not change private - they will go away" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ForceUseMeshTranslation = { UE4CodeGen_Private::EPropertyClass::Array, "ForceUseMeshTranslation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000002000, 1, nullptr, STRUCT_OFFSET(UAnimSet, ForceUseMeshTranslation), METADATA_PARAMS(NewProp_ForceUseMeshTranslation_MetaData, ARRAY_COUNT(NewProp_ForceUseMeshTranslation_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ForceUseMeshTranslation_Inner = { UE4CodeGen_Private::EPropertyClass::Byte, "ForceUseMeshTranslation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneUseAnimTranslation_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimSet.h" },
				{ "ToolTip", "Array of booleans that indicate whether or not to read the translation of a bone from animation or ref skeleton.\nThis is basically a cooked down version of UseTranslationBoneNames for speed.\nSize matches the number of tracks.\n   // @UE4: Do not change private - they will go away" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BoneUseAnimTranslation = { UE4CodeGen_Private::EPropertyClass::Array, "BoneUseAnimTranslation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000002000, 1, nullptr, STRUCT_OFFSET(UAnimSet, BoneUseAnimTranslation), METADATA_PARAMS(NewProp_BoneUseAnimTranslation_MetaData, ARRAY_COUNT(NewProp_BoneUseAnimTranslation_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_BoneUseAnimTranslation_Inner = { UE4CodeGen_Private::EPropertyClass::Byte, "BoneUseAnimTranslation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinkupCache_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimSet.h" },
				{ "ToolTip", "Non-serialised cache of linkups between different skeletal meshes and this AnimSet. // @UE4: Do not change private - they will go away" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LinkupCache = { UE4CodeGen_Private::EPropertyClass::Array, "LinkupCache", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000002000, 1, nullptr, STRUCT_OFFSET(UAnimSet, LinkupCache), METADATA_PARAMS(NewProp_LinkupCache_MetaData, ARRAY_COUNT(NewProp_LinkupCache_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LinkupCache_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "LinkupCache", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FAnimSetMeshLinkup, METADATA_PARAMS(nullptr, 0) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sequences_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimSet.h" },
				{ "ToolTip", "Actual animation sequence information." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Sequences = { UE4CodeGen_Private::EPropertyClass::Array, "Sequences", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(UAnimSet, Sequences), METADATA_PARAMS(NewProp_Sequences_MetaData, ARRAY_COUNT(NewProp_Sequences_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sequences_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Sequences", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000800000000, 1, nullptr, 0, Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackBoneNames_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimSet.h" },
				{ "ToolTip", "Bone name that each track relates to. TrackBoneName.Num() == Number of tracks." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TrackBoneNames = { UE4CodeGen_Private::EPropertyClass::Array, "TrackBoneNames", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UAnimSet, TrackBoneNames), METADATA_PARAMS(NewProp_TrackBoneNames_MetaData, ARRAY_COUNT(NewProp_TrackBoneNames_MetaData)) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_TrackBoneNames_Inner = { UE4CodeGen_Private::EPropertyClass::Name, "TrackBoneNames", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAnimRotationOnly_MetaData[] = {
				{ "Category", "AnimSet" },
				{ "ModuleRelativePath", "Classes/Animation/AnimSet.h" },
				{ "ToolTip", "Indicates that only the rotation should be taken from the animation sequence and the translation should come from the USkeletalMesh ref pose.\nNote that the root bone always takes translation from the animation, even if this flag is set.\nYou can use the UseTranslationBoneNames array to specify other bones that should use translation with this flag set." },
			};
#endif
			auto NewProp_bAnimRotationOnly_SetBit = [](void* Obj){ ((UAnimSet*)Obj)->bAnimRotationOnly = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAnimRotationOnly = { UE4CodeGen_Private::EPropertyClass::Bool, "bAnimRotationOnly", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UAnimSet), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAnimRotationOnly_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAnimRotationOnly_MetaData, ARRAY_COUNT(NewProp_bAnimRotationOnly_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BestRatioSkelMeshName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PreviewSkelMeshName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ForceMeshTranslationBoneNames,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ForceMeshTranslationBoneNames_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UseTranslationBoneNames,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UseTranslationBoneNames_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ForceUseMeshTranslation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ForceUseMeshTranslation_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoneUseAnimTranslation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoneUseAnimTranslation_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LinkupCache,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LinkupCache_Inner,
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Sequences,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Sequences_Inner,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TrackBoneNames,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TrackBoneNames_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAnimRotationOnly,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAnimSet>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAnimSet::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00080080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimSet, 621436962);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimSet(Z_Construct_UClass_UAnimSet, &UAnimSet::StaticClass, TEXT("/Script/Engine"), TEXT("UAnimSet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimSet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
