// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Animation/PoseAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePoseAsset() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseDataContainer();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimCurveBase();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartName();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UPoseAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPoseAsset();
	ENGINE_API UClass* Z_Construct_UClass_UAnimationAsset();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
// End Cross Module References
class UScriptStruct* FPoseDataContainer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FPoseDataContainer_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPoseDataContainer, Z_Construct_UPackage__Script_Engine(), TEXT("PoseDataContainer"), sizeof(FPoseDataContainer), Get_Z_Construct_UScriptStruct_FPoseDataContainer_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPoseDataContainer(FPoseDataContainer::StaticStruct, TEXT("/Script/Engine"), TEXT("PoseDataContainer"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFPoseDataContainer
{
	FScriptStruct_Engine_StaticRegisterNativesFPoseDataContainer()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PoseDataContainer")),new UScriptStruct::TCppStructOps<FPoseDataContainer>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFPoseDataContainer;
	UScriptStruct* Z_Construct_UScriptStruct_FPoseDataContainer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPoseDataContainer_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PoseDataContainer"), sizeof(FPoseDataContainer), Get_Z_Construct_UScriptStruct_FPoseDataContainer_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
				{ "ToolTip", "Pose data container\n\nContains animation and curve for all poses" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPoseDataContainer>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Curves_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
				{ "ToolTip", "curve meta data # of Curve UIDs should match with Poses.CurveValues.Num" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Curves = { UE4CodeGen_Private::EPropertyClass::Array, "Curves", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FPoseDataContainer, Curves), METADATA_PARAMS(NewProp_Curves_MetaData, ARRAY_COUNT(NewProp_Curves_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Curves_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Curves", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FAnimCurveBase, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackMap_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
				{ "ToolTip", "vertical data - the track names for bone position, and skeleton index" },
			};
#endif
			static const UE4CodeGen_Private::FMapPropertyParams NewProp_TrackMap = { UE4CodeGen_Private::EPropertyClass::Map, "TrackMap", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000002000, 1, nullptr, STRUCT_OFFSET(FPoseDataContainer, TrackMap), METADATA_PARAMS(NewProp_TrackMap_MetaData, ARRAY_COUNT(NewProp_TrackMap_MetaData)) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_TrackMap_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Name, "TrackMap_Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_TrackMap_ValueProp = { UE4CodeGen_Private::EPropertyClass::Int, "TrackMap", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tracks_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Tracks = { UE4CodeGen_Private::EPropertyClass::Array, "Tracks", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FPoseDataContainer, Tracks), METADATA_PARAMS(NewProp_Tracks_MetaData, ARRAY_COUNT(NewProp_Tracks_MetaData)) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_Tracks_Inner = { UE4CodeGen_Private::EPropertyClass::Name, "Tracks", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Poses_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Poses = { UE4CodeGen_Private::EPropertyClass::Array, "Poses", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FPoseDataContainer, Poses), METADATA_PARAMS(NewProp_Poses_MetaData, ARRAY_COUNT(NewProp_Poses_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Poses_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Poses", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FPoseData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PoseNames_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
				{ "ToolTip", "pose names - horizontal data\n# of poses - there is no compression across tracks -\nunfortunately, tried TMap, but it is not great because it changes order whenever add/remove\nwe need consistent array of names, so that it doesn't change orders" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PoseNames = { UE4CodeGen_Private::EPropertyClass::Array, "PoseNames", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FPoseDataContainer, PoseNames), METADATA_PARAMS(NewProp_PoseNames_MetaData, ARRAY_COUNT(NewProp_PoseNames_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PoseNames_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "PoseNames", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FSmartName, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Curves,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Curves_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TrackMap,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TrackMap_Key_KeyProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TrackMap_ValueProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Tracks,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Tracks_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Poses,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Poses_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PoseNames,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PoseNames_Inner,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"PoseDataContainer",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FPoseDataContainer),
				alignof(FPoseDataContainer),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPoseDataContainer_CRC() { return 3128326593U; }
class UScriptStruct* FPoseData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FPoseData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPoseData, Z_Construct_UPackage__Script_Engine(), TEXT("PoseData"), sizeof(FPoseData), Get_Z_Construct_UScriptStruct_FPoseData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPoseData(FPoseData::StaticStruct, TEXT("/Script/Engine"), TEXT("PoseData"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFPoseData
{
	FScriptStruct_Engine_StaticRegisterNativesFPoseData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PoseData")),new UScriptStruct::TCppStructOps<FPoseData>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFPoseData;
	UScriptStruct* Z_Construct_UScriptStruct_FPoseData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPoseData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PoseData"), sizeof(FPoseData), Get_Z_Construct_UScriptStruct_FPoseData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
				{ "ToolTip", "Pose data\n\nThis is one pose data structure\nThis will let us blend poses quickly easily\nAll poses within this asset should contain same number of tracks,\nso that we can blend quickly" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPoseData>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurveData_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
				{ "ToolTip", "# of array match with # of Curves in PoseDataContainer" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CurveData = { UE4CodeGen_Private::EPropertyClass::Array, "CurveData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FPoseData, CurveData), METADATA_PARAMS(NewProp_CurveData_MetaData, ARRAY_COUNT(NewProp_CurveData_MetaData)) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurveData_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "CurveData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalSpacePoseMask_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
				{ "ToolTip", "whether or not, the joint contains dirty transform\nit only blends if this is true\nthis allows per bone blend\n@todo: convert to bit field?" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LocalSpacePoseMask = { UE4CodeGen_Private::EPropertyClass::Array, "LocalSpacePoseMask", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FPoseData, LocalSpacePoseMask), METADATA_PARAMS(NewProp_LocalSpacePoseMask_MetaData, ARRAY_COUNT(NewProp_LocalSpacePoseMask_MetaData)) };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_LocalSpacePoseMask_Inner = { UE4CodeGen_Private::EPropertyClass::Bool, "LocalSpacePoseMask", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalSpacePose_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
				{ "ToolTip", "local space pose, # of array match with # of Tracks" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LocalSpacePose = { UE4CodeGen_Private::EPropertyClass::Array, "LocalSpacePose", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FPoseData, LocalSpacePose), METADATA_PARAMS(NewProp_LocalSpacePose_MetaData, ARRAY_COUNT(NewProp_LocalSpacePose_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalSpacePose_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "LocalSpacePose", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurveData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurveData_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LocalSpacePoseMask,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LocalSpacePoseMask_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LocalSpacePose,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LocalSpacePose_Inner,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"PoseData",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FPoseData),
				alignof(FPoseData),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPoseData_CRC() { return 2434302600U; }
	void UPoseAsset::StaticRegisterNativesUPoseAsset()
	{
	}
	UClass* Z_Construct_UClass_UPoseAsset_NoRegister()
	{
		return UPoseAsset::StaticClass();
	}
	UClass* Z_Construct_UClass_UPoseAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UAnimationAsset,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "Animation/PoseAsset.h" },
				{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
				{ "ToolTip", "* Pose Asset that can be blended by weight of curves" },
			};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceAnimation_MetaData[] = {
				{ "Category", "Source" },
				{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SourceAnimation = { UE4CodeGen_Private::EPropertyClass::Object, "SourceAnimation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000001, 1, nullptr, STRUCT_OFFSET(UPoseAsset, SourceAnimation), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(NewProp_SourceAnimation_MetaData, ARRAY_COUNT(NewProp_SourceAnimation_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RetargetSource_MetaData[] = {
				{ "Category", "Animation" },
				{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
				{ "ToolTip", "Base pose to use when retargeting" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_RetargetSource = { UE4CodeGen_Private::EPropertyClass::Name, "RetargetSource", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UPoseAsset, RetargetSource), METADATA_PARAMS(NewProp_RetargetSource_MetaData, ARRAY_COUNT(NewProp_RetargetSource_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BasePoseIndex_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
				{ "ToolTip", "if -1, use ref pose" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_BasePoseIndex = { UE4CodeGen_Private::EPropertyClass::Int, "BasePoseIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UPoseAsset, BasePoseIndex), METADATA_PARAMS(NewProp_BasePoseIndex_MetaData, ARRAY_COUNT(NewProp_BasePoseIndex_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAdditivePose_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
				{ "ToolTip", "Whether or not Additive Pose or not - these are property that needs post process, so" },
			};
#endif
			auto NewProp_bAdditivePose_SetBit = [](void* Obj){ ((UPoseAsset*)Obj)->bAdditivePose = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAdditivePose = { UE4CodeGen_Private::EPropertyClass::Bool, "bAdditivePose", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UPoseAsset), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAdditivePose_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAdditivePose_MetaData, ARRAY_COUNT(NewProp_bAdditivePose_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PoseContainer_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
				{ "ToolTip", "Animation Pose Data" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PoseContainer = { UE4CodeGen_Private::EPropertyClass::Struct, "PoseContainer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UPoseAsset, PoseContainer), Z_Construct_UScriptStruct_FPoseDataContainer, METADATA_PARAMS(NewProp_PoseContainer_MetaData, ARRAY_COUNT(NewProp_PoseContainer_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SourceAnimation,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RetargetSource,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BasePoseIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAdditivePose,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PoseContainer,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UPoseAsset>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UPoseAsset::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880080u,
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
	IMPLEMENT_CLASS(UPoseAsset, 2960820885);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPoseAsset(Z_Construct_UClass_UPoseAsset, &UPoseAsset::StaticClass, TEXT("/Script/Engine"), TEXT("UPoseAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPoseAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
