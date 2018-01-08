// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/GameFramework/WorldSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldSettings() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EVolumeLightingMethod();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EVisibilityAggressiveness();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHierarchicalSimplification();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshMergingSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshProxySettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNetViewer();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNetConnection_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLightmassWorldInfoSettings();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UClass* Z_Construct_UClass_AWorldSettings_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AWorldSettings();
	ENGINE_API UClass* Z_Construct_UClass_AInfo();
	ENGINE_API UFunction* Z_Construct_UFunction_AWorldSettings_OnRep_WorldGravityZ();
	ENGINE_API UClass* Z_Construct_UClass_UAssetUserData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBookMark_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundMix_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInteriorSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FReverbSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AGameNetworkManager_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsCollisionHandler_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ADefaultPhysicsVolume_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterface_AssetUserData_NoRegister();
// End Cross Module References
	static UEnum* EVolumeLightingMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EVolumeLightingMethod, Z_Construct_UPackage__Script_Engine(), TEXT("EVolumeLightingMethod"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVolumeLightingMethod(EVolumeLightingMethod_StaticEnum, TEXT("/Script/Engine"), TEXT("EVolumeLightingMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EVolumeLightingMethod_CRC() { return 2560306320U; }
	UEnum* Z_Construct_UEnum_Engine_EVolumeLightingMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVolumeLightingMethod"), 0, Get_Z_Construct_UEnum_Engine_EVolumeLightingMethod_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "VLM_VolumetricLightmap", (int64)VLM_VolumetricLightmap },
				{ "VLM_SparseVolumeLightingSamples", (int64)VLM_SparseVolumeLightingSamples },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
				{ "VLM_SparseVolumeLightingSamples.ToolTip", "Volume lighting samples are placed on top of static surfaces at medium density, and everywhere else in the Lightmass Importance Volume at low density.  Positions outside of the Importance Volume will have no indirect lighting.\nThis method requires CPU interpolation so the Indirect Lighting Cache is used to interpolate results for each dynamic object, adding Rendering Thread overhead.\nVolumetric Fog cannot be affected by precomputed lighting with this method." },
				{ "VLM_VolumetricLightmap.ToolTip", "Lighting samples are computed in an adaptive grid which covers the entire Lightmass Importance Volume.  Higher density grids are used near geometry.\nThe Volumetric Lightmap is interpolated efficiently on the GPU per-pixel, allowing accurate indirect lighting for dynamic objects and volumetric fog.\nPositions outside of the Importance Volume reuse the border texels of the Volumetric Lightmap (clamp addressing).\nOn mobile, interpolation is done on the CPU at the center of each object's bounds." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EVolumeLightingMethod",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EVolumeLightingMethod",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EVisibilityAggressiveness_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EVisibilityAggressiveness, Z_Construct_UPackage__Script_Engine(), TEXT("EVisibilityAggressiveness"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVisibilityAggressiveness(EVisibilityAggressiveness_StaticEnum, TEXT("/Script/Engine"), TEXT("EVisibilityAggressiveness"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EVisibilityAggressiveness_CRC() { return 1390392788U; }
	UEnum* Z_Construct_UEnum_Engine_EVisibilityAggressiveness()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVisibilityAggressiveness"), 0, Get_Z_Construct_UEnum_Engine_EVisibilityAggressiveness_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "VIS_LeastAggressive", (int64)VIS_LeastAggressive },
				{ "VIS_ModeratelyAggressive", (int64)VIS_ModeratelyAggressive },
				{ "VIS_MostAggressive", (int64)VIS_MostAggressive },
				{ "VIS_Max", (int64)VIS_Max },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EVisibilityAggressiveness",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EVisibilityAggressiveness",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FHierarchicalSimplification::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FHierarchicalSimplification_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHierarchicalSimplification, Z_Construct_UPackage__Script_Engine(), TEXT("HierarchicalSimplification"), sizeof(FHierarchicalSimplification), Get_Z_Construct_UScriptStruct_FHierarchicalSimplification_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHierarchicalSimplification(FHierarchicalSimplification::StaticStruct, TEXT("/Script/Engine"), TEXT("HierarchicalSimplification"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFHierarchicalSimplification
{
	FScriptStruct_Engine_StaticRegisterNativesFHierarchicalSimplification()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("HierarchicalSimplification")),new UScriptStruct::TCppStructOps<FHierarchicalSimplification>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFHierarchicalSimplification;
	UScriptStruct* Z_Construct_UScriptStruct_FHierarchicalSimplification()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHierarchicalSimplification_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HierarchicalSimplification"), sizeof(FHierarchicalSimplification), Get_Z_Construct_UScriptStruct_FHierarchicalSimplification_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHierarchicalSimplification>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinNumberOfActorsToBuild_MetaData[] = {
				{ "Category", "FHierarchicalSimplification" },
				{ "ClampMin", "1" },
				{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
				{ "ToolTip", "Min number of actors to build LODActor" },
				{ "UIMin", "1" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinNumberOfActorsToBuild = { UE4CodeGen_Private::EPropertyClass::Int, "MinNumberOfActorsToBuild", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, STRUCT_OFFSET(FHierarchicalSimplification, MinNumberOfActorsToBuild), METADATA_PARAMS(NewProp_MinNumberOfActorsToBuild_MetaData, ARRAY_COUNT(NewProp_MinNumberOfActorsToBuild_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DesiredFillingPercentage_MetaData[] = {
				{ "Category", "FHierarchicalSimplification" },
				{ "ClampMax", "100" },
				{ "ClampMin", "0" },
				{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
				{ "ToolTip", "Desired Filling Percentage for clustering - this is not guaranteed but used to calculate filling factor  for auto clustering" },
				{ "UIMax", "100" },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DesiredFillingPercentage = { UE4CodeGen_Private::EPropertyClass::Float, "DesiredFillingPercentage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, STRUCT_OFFSET(FHierarchicalSimplification, DesiredFillingPercentage), METADATA_PARAMS(NewProp_DesiredFillingPercentage_MetaData, ARRAY_COUNT(NewProp_DesiredFillingPercentage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DesiredBoundRadius_MetaData[] = {
				{ "Category", "FHierarchicalSimplification" },
				{ "ClampMin", "10.000000" },
				{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
				{ "ToolTip", "Desired Bounding Radius for clustering - this is not guaranteed but used to calculate filling factor for auto clustering" },
				{ "UIMin", "10.000000" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DesiredBoundRadius = { UE4CodeGen_Private::EPropertyClass::Float, "DesiredBoundRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, STRUCT_OFFSET(FHierarchicalSimplification, DesiredBoundRadius), METADATA_PARAMS(NewProp_DesiredBoundRadius_MetaData, ARRAY_COUNT(NewProp_DesiredBoundRadius_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MergeSetting_MetaData[] = {
				{ "Category", "FHierarchicalSimplification" },
				{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
				{ "ToolTip", "Merge Mesh Setting if bSimplifyMesh is false" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_MergeSetting = { UE4CodeGen_Private::EPropertyClass::Struct, "MergeSetting", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, STRUCT_OFFSET(FHierarchicalSimplification, MergeSetting), Z_Construct_UScriptStruct_FMeshMergingSettings, METADATA_PARAMS(NewProp_MergeSetting_MetaData, ARRAY_COUNT(NewProp_MergeSetting_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProxySetting_MetaData[] = {
				{ "Category", "FHierarchicalSimplification" },
				{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
				{ "ToolTip", "Simplification Setting if bSimplifyMesh is true" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProxySetting = { UE4CodeGen_Private::EPropertyClass::Struct, "ProxySetting", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, STRUCT_OFFSET(FHierarchicalSimplification, ProxySetting), Z_Construct_UScriptStruct_FMeshProxySettings, METADATA_PARAMS(NewProp_ProxySetting_MetaData, ARRAY_COUNT(NewProp_ProxySetting_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSimplifyMesh_MetaData[] = {
				{ "Category", "FHierarchicalSimplification" },
				{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
				{ "ToolTip", "If this is true, it will simplify mesh but it is slower.\nIf false, it will just merge actors but not simplify using the lower LOD if exists.\nFor example if you build LOD 1, it will use LOD 1 of the mesh to merge actors if exists.\nIf you merge material, it will reduce drawcalls." },
			};
#endif
			auto NewProp_bSimplifyMesh_SetBit = [](void* Obj){ ((FHierarchicalSimplification*)Obj)->bSimplifyMesh = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSimplifyMesh = { UE4CodeGen_Private::EPropertyClass::Bool, "bSimplifyMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FHierarchicalSimplification), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSimplifyMesh_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSimplifyMesh_MetaData, ARRAY_COUNT(NewProp_bSimplifyMesh_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransitionScreenSize_MetaData[] = {
				{ "Category", "FHierarchicalSimplification" },
				{ "ClampMax", "1.0" },
				{ "ClampMin", "0.000001" },
				{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
				{ "ToolTip", "The screen radius an mesh object should reach before swapping to the LOD actor, once one of parent displays, it won't draw any of children." },
				{ "UIMax", "1.0" },
				{ "UIMin", "0.00001" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TransitionScreenSize = { UE4CodeGen_Private::EPropertyClass::Float, "TransitionScreenSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FHierarchicalSimplification, TransitionScreenSize), METADATA_PARAMS(NewProp_TransitionScreenSize_MetaData, ARRAY_COUNT(NewProp_TransitionScreenSize_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MinNumberOfActorsToBuild,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DesiredFillingPercentage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DesiredBoundRadius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MergeSetting,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ProxySetting,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSimplifyMesh,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TransitionScreenSize,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"HierarchicalSimplification",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FHierarchicalSimplification),
				alignof(FHierarchicalSimplification),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHierarchicalSimplification_CRC() { return 3343568908U; }
class UScriptStruct* FNetViewer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FNetViewer_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNetViewer, Z_Construct_UPackage__Script_Engine(), TEXT("NetViewer"), sizeof(FNetViewer), Get_Z_Construct_UScriptStruct_FNetViewer_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNetViewer(FNetViewer::StaticStruct, TEXT("/Script/Engine"), TEXT("NetViewer"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFNetViewer
{
	FScriptStruct_Engine_StaticRegisterNativesFNetViewer()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NetViewer")),new UScriptStruct::TCppStructOps<FNetViewer>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFNetViewer;
	UScriptStruct* Z_Construct_UScriptStruct_FNetViewer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNetViewer_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NetViewer"), sizeof(FNetViewer), Get_Z_Construct_UScriptStruct_FNetViewer_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
				{ "ToolTip", "stores information on a viewer that actors need to be checked against for relevancy" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNetViewer>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViewDir_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
				{ "ToolTip", "Direction the viewer is looking" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ViewDir = { UE4CodeGen_Private::EPropertyClass::Struct, "ViewDir", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FNetViewer, ViewDir), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_ViewDir_MetaData, ARRAY_COUNT(NewProp_ViewDir_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViewLocation_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
				{ "ToolTip", "Where the viewer is looking from" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ViewLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "ViewLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FNetViewer, ViewLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_ViewLocation_MetaData, ARRAY_COUNT(NewProp_ViewLocation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViewTarget_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
				{ "ToolTip", "The actor that is being directly viewed, usually a pawn.  Could also be the net actor of consequence" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ViewTarget = { UE4CodeGen_Private::EPropertyClass::Object, "ViewTarget", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FNetViewer, ViewTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(NewProp_ViewTarget_MetaData, ARRAY_COUNT(NewProp_ViewTarget_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InViewer_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
				{ "ToolTip", "The \"controlling net object\" associated with this view (typically player controller)" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InViewer = { UE4CodeGen_Private::EPropertyClass::Object, "InViewer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FNetViewer, InViewer), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(NewProp_InViewer_MetaData, ARRAY_COUNT(NewProp_InViewer_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Connection_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Connection = { UE4CodeGen_Private::EPropertyClass::Object, "Connection", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FNetViewer, Connection), Z_Construct_UClass_UNetConnection_NoRegister, METADATA_PARAMS(NewProp_Connection_MetaData, ARRAY_COUNT(NewProp_Connection_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ViewDir,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ViewLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ViewTarget,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InViewer,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Connection,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"NetViewer",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FNetViewer),
				alignof(FNetViewer),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNetViewer_CRC() { return 650741020U; }
class UScriptStruct* FLightmassWorldInfoSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLightmassWorldInfoSettings, Z_Construct_UPackage__Script_Engine(), TEXT("LightmassWorldInfoSettings"), sizeof(FLightmassWorldInfoSettings), Get_Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLightmassWorldInfoSettings(FLightmassWorldInfoSettings::StaticStruct, TEXT("/Script/Engine"), TEXT("LightmassWorldInfoSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFLightmassWorldInfoSettings
{
	FScriptStruct_Engine_StaticRegisterNativesFLightmassWorldInfoSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LightmassWorldInfoSettings")),new UScriptStruct::TCppStructOps<FLightmassWorldInfoSettings>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFLightmassWorldInfoSettings;
	UScriptStruct* Z_Construct_UScriptStruct_FLightmassWorldInfoSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LightmassWorldInfoSettings"), sizeof(FLightmassWorldInfoSettings), Get_Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLightmassWorldInfoSettings>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCompressLightmaps_MetaData[] = {
				{ "Category", "LightmassGeneral" },
				{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
				{ "ToolTip", "Whether to compress lightmap textures.  Disabling lightmap texture compression will reduce artifacts but increase memory and disk size by 4x.\nUse caution when disabling this." },
			};
#endif
			auto NewProp_bCompressLightmaps_SetBit = [](void* Obj){ ((FLightmassWorldInfoSettings*)Obj)->bCompressLightmaps = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCompressLightmaps = { UE4CodeGen_Private::EPropertyClass::Bool, "bCompressLightmaps", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FLightmassWorldInfoSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCompressLightmaps_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCompressLightmaps_MetaData, ARRAY_COUNT(NewProp_bCompressLightmaps_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bVisualizeAmbientOcclusion_MetaData[] = {
				{ "Category", "LightmassDebug" },
				{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
				{ "ToolTip", "If true, override normal direct and indirect lighting with just the AO term." },
			};
#endif
			auto NewProp_bVisualizeAmbientOcclusion_SetBit = [](void* Obj){ ((FLightmassWorldInfoSettings*)Obj)->bVisualizeAmbientOcclusion = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bVisualizeAmbientOcclusion = { UE4CodeGen_Private::EPropertyClass::Bool, "bVisualizeAmbientOcclusion", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FLightmassWorldInfoSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bVisualizeAmbientOcclusion_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bVisualizeAmbientOcclusion_MetaData, ARRAY_COUNT(NewProp_bVisualizeAmbientOcclusion_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bVisualizeMaterialDiffuse_MetaData[] = {
				{ "Category", "LightmassDebug" },
				{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
				{ "ToolTip", "If true, override normal direct and indirect lighting with just the exported diffuse term." },
			};
#endif
			auto NewProp_bVisualizeMaterialDiffuse_SetBit = [](void* Obj){ ((FLightmassWorldInfoSettings*)Obj)->bVisualizeMaterialDiffuse = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bVisualizeMaterialDiffuse = { UE4CodeGen_Private::EPropertyClass::Bool, "bVisualizeMaterialDiffuse", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FLightmassWorldInfoSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bVisualizeMaterialDiffuse_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bVisualizeMaterialDiffuse_MetaData, ARRAY_COUNT(NewProp_bVisualizeMaterialDiffuse_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxOcclusionDistance_MetaData[] = {
				{ "Category", "LightmassOcclusion" },
				{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
				{ "ToolTip", "Maximum distance for an object to cause occlusion on another object." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxOcclusionDistance = { UE4CodeGen_Private::EPropertyClass::Float, "MaxOcclusionDistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FLightmassWorldInfoSettings, MaxOcclusionDistance), METADATA_PARAMS(NewProp_MaxOcclusionDistance_MetaData, ARRAY_COUNT(NewProp_MaxOcclusionDistance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FullyOccludedSamplesFraction_MetaData[] = {
				{ "Category", "LightmassOcclusion" },
				{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
				{ "ToolTip", "Fraction of samples taken that must be occluded in order to reach full occlusion." },
				{ "UIMax", "1" },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FullyOccludedSamplesFraction = { UE4CodeGen_Private::EPropertyClass::Float, "FullyOccludedSamplesFraction", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FLightmassWorldInfoSettings, FullyOccludedSamplesFraction), METADATA_PARAMS(NewProp_FullyOccludedSamplesFraction_MetaData, ARRAY_COUNT(NewProp_FullyOccludedSamplesFraction_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OcclusionExponent_MetaData[] = {
				{ "Category", "LightmassOcclusion" },
				{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
				{ "ToolTip", "Higher exponents increase contrast." },
				{ "UIMax", "8" },
				{ "UIMin", ".5" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OcclusionExponent = { UE4CodeGen_Private::EPropertyClass::Float, "OcclusionExponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FLightmassWorldInfoSettings, OcclusionExponent), METADATA_PARAMS(NewProp_OcclusionExponent_MetaData, ARRAY_COUNT(NewProp_OcclusionExponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IndirectIlluminationOcclusionFraction_MetaData[] = {
				{ "Category", "LightmassOcclusion" },
				{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
				{ "ToolTip", "How much of the AO to apply to indirect lighting." },
				{ "UIMax", "1" },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IndirectIlluminationOcclusionFraction = { UE4CodeGen_Private::EPropertyClass::Float, "IndirectIlluminationOcclusionFraction", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FLightmassWorldInfoSettings, IndirectIlluminationOcclusionFraction), METADATA_PARAMS(NewProp_IndirectIlluminationOcclusionFraction_MetaData, ARRAY_COUNT(NewProp_IndirectIlluminationOcclusionFraction_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DirectIlluminationOcclusionFraction_MetaData[] = {
				{ "Category", "LightmassOcclusion" },
				{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
				{ "ToolTip", "How much of the AO to apply to direct lighting." },
				{ "UIMax", "1" },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DirectIlluminationOcclusionFraction = { UE4CodeGen_Private::EPropertyClass::Float, "DirectIlluminationOcclusionFraction", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FLightmassWorldInfoSettings, DirectIlluminationOcclusionFraction), METADATA_PARAMS(NewProp_DirectIlluminationOcclusionFraction_MetaData, ARRAY_COUNT(NewProp_DirectIlluminationOcclusionFraction_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGenerateAmbientOcclusionMaterialMask_MetaData[] = {
				{ "Category", "LightmassOcclusion" },
				{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
				{ "ToolTip", "Whether to generate textures storing the AO computed by Lightmass.\nThese can be accessed through the PrecomputedAOMask material node,\nWhich is useful for blending between material layers on environment assets.\nBe sure to set DirectIlluminationOcclusionFraction and IndirectIlluminationOcclusionFraction to 0 if you only want the PrecomputedAOMask!" },
			};
#endif
			auto NewProp_bGenerateAmbientOcclusionMaterialMask_SetBit = [](void* Obj){ ((FLightmassWorldInfoSettings*)Obj)->bGenerateAmbientOcclusionMaterialMask = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGenerateAmbientOcclusionMaterialMask = { UE4CodeGen_Private::EPropertyClass::Bool, "bGenerateAmbientOcclusionMaterialMask", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FLightmassWorldInfoSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bGenerateAmbientOcclusionMaterialMask_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bGenerateAmbientOcclusionMaterialMask_MetaData, ARRAY_COUNT(NewProp_bGenerateAmbientOcclusionMaterialMask_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseAmbientOcclusion_MetaData[] = {
				{ "Category", "LightmassOcclusion" },
				{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
				{ "ToolTip", "If true, AmbientOcclusion will be enabled." },
			};
#endif
			auto NewProp_bUseAmbientOcclusion_SetBit = [](void* Obj){ ((FLightmassWorldInfoSettings*)Obj)->bUseAmbientOcclusion = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseAmbientOcclusion = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseAmbientOcclusion", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FLightmassWorldInfoSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseAmbientOcclusion_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseAmbientOcclusion_MetaData, ARRAY_COUNT(NewProp_bUseAmbientOcclusion_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumeLightSamplePlacementScale_MetaData[] = {
				{ "Category", "LightmassVolumeLighting" },
				{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
				{ "ToolTip", "Scales the distances at which volume lighting samples are placed.  Volume lighting samples are computed by Lightmass and are used for GI on movable components.\nUsing larger scales results in less sample memory usage and reduces Indirect Lighting Cache update times, but less accurate transitions between lighting areas." },
				{ "UIMax", "100.0" },
				{ "UIMin", "0.1" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VolumeLightSamplePlacementScale = { UE4CodeGen_Private::EPropertyClass::Float, "VolumeLightSamplePlacementScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, STRUCT_OFFSET(FLightmassWorldInfoSettings, VolumeLightSamplePlacementScale), METADATA_PARAMS(NewProp_VolumeLightSamplePlacementScale_MetaData, ARRAY_COUNT(NewProp_VolumeLightSamplePlacementScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumetricLightmapMaximumBrickMemoryMb_MetaData[] = {
				{ "Category", "LightmassVolumeLighting" },
				{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
				{ "ToolTip", "Maximum amount of memory to spend on Volumetric Lightmap Brick data.  High density bricks will be discarded until this limit is met, with bricks furthest from geometry discarded first." },
				{ "UIMax", "500" },
				{ "UIMin", "1" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VolumetricLightmapMaximumBrickMemoryMb = { UE4CodeGen_Private::EPropertyClass::Float, "VolumetricLightmapMaximumBrickMemoryMb", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FLightmassWorldInfoSettings, VolumetricLightmapMaximumBrickMemoryMb), METADATA_PARAMS(NewProp_VolumetricLightmapMaximumBrickMemoryMb_MetaData, ARRAY_COUNT(NewProp_VolumetricLightmapMaximumBrickMemoryMb_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumetricLightmapDetailCellSize_MetaData[] = {
				{ "Category", "LightmassVolumeLighting" },
				{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
				{ "ToolTip", "Size of an Volumetric Lightmap voxel at the highest density (used around geometry), in world space units.\nThis setting has a large impact on build times and memory, use with caution.\nHalving the DetailCellSize can increase memory by up to a factor of 8x." },
				{ "UIMax", "1000" },
				{ "UIMin", "50" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VolumetricLightmapDetailCellSize = { UE4CodeGen_Private::EPropertyClass::Float, "VolumetricLightmapDetailCellSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FLightmassWorldInfoSettings, VolumetricLightmapDetailCellSize), METADATA_PARAMS(NewProp_VolumetricLightmapDetailCellSize_MetaData, ARRAY_COUNT(NewProp_VolumetricLightmapDetailCellSize_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumeLightingMethod_MetaData[] = {
				{ "Category", "LightmassVolumeLighting" },
				{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
				{ "ToolTip", "Technique to use for providing precomputed lighting at all positions inside the Lightmass Importance Volume" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_VolumeLightingMethod = { UE4CodeGen_Private::EPropertyClass::Byte, "VolumeLightingMethod", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FLightmassWorldInfoSettings, VolumeLightingMethod), Z_Construct_UEnum_Engine_EVolumeLightingMethod, METADATA_PARAMS(NewProp_VolumeLightingMethod_MetaData, ARRAY_COUNT(NewProp_VolumeLightingMethod_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DiffuseBoost_MetaData[] = {
				{ "Category", "LightmassGeneral" },
				{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
				{ "ToolTip", "Scales the diffuse contribution of all materials in the scene." },
				{ "UIMax", "6.0" },
				{ "UIMin", "0.1" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DiffuseBoost = { UE4CodeGen_Private::EPropertyClass::Float, "DiffuseBoost", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FLightmassWorldInfoSettings, DiffuseBoost), METADATA_PARAMS(NewProp_DiffuseBoost_MetaData, ARRAY_COUNT(NewProp_DiffuseBoost_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmissiveBoost_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
				{ "ToolTip", "Scales the emissive contribution of all materials in the scene.  Currently disabled and should be removed with mesh area lights." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EmissiveBoost = { UE4CodeGen_Private::EPropertyClass::Float, "EmissiveBoost", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FLightmassWorldInfoSettings, EmissiveBoost), METADATA_PARAMS(NewProp_EmissiveBoost_MetaData, ARRAY_COUNT(NewProp_EmissiveBoost_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnvironmentIntensity_MetaData[] = {
				{ "Category", "LightmassGeneral" },
				{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
				{ "ToolTip", "Scales EnvironmentColor to allow independent color and brightness controls." },
				{ "UIMax", "10" },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EnvironmentIntensity = { UE4CodeGen_Private::EPropertyClass::Float, "EnvironmentIntensity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FLightmassWorldInfoSettings, EnvironmentIntensity), METADATA_PARAMS(NewProp_EnvironmentIntensity_MetaData, ARRAY_COUNT(NewProp_EnvironmentIntensity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnvironmentColor_MetaData[] = {
				{ "Category", "LightmassGeneral" },
				{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
				{ "ToolTip", "Represents a constant color light surrounding the upper hemisphere of the level, like a sky.\nThis light source currently does not get bounced as indirect lighting and causes reflection capture brightness to be incorrect.  Prefer using a Static Skylight instead." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_EnvironmentColor = { UE4CodeGen_Private::EPropertyClass::Struct, "EnvironmentColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FLightmassWorldInfoSettings, EnvironmentColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(NewProp_EnvironmentColor_MetaData, ARRAY_COUNT(NewProp_EnvironmentColor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IndirectLightingSmoothness_MetaData[] = {
				{ "Category", "LightmassGeneral" },
				{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
				{ "ToolTip", "Smoothness factor to apply to indirect lighting.  This is useful in some lighting conditions when Lightmass cannot resolve accurate indirect lighting.\n1 is default smoothness tweaked for a variety of lighting situations.\nHigher values like 3 smooth out the indirect lighting more, but at the cost of indirect shadows losing detail." },
				{ "UIMax", "6.0" },
				{ "UIMin", "0.5" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IndirectLightingSmoothness = { UE4CodeGen_Private::EPropertyClass::Float, "IndirectLightingSmoothness", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, STRUCT_OFFSET(FLightmassWorldInfoSettings, IndirectLightingSmoothness), METADATA_PARAMS(NewProp_IndirectLightingSmoothness_MetaData, ARRAY_COUNT(NewProp_IndirectLightingSmoothness_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IndirectLightingQuality_MetaData[] = {
				{ "Category", "LightmassGeneral" },
				{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
				{ "ToolTip", "Warning: Setting this higher than 1 will greatly increase build times!\nCan be used to increase the GI solver sample counts in order to get higher quality for levels that need it.\nIt can be useful to reduce IndirectLightingSmoothness somewhat (~.75) when increasing quality to get defined indirect shadows.\nNote that this can't affect compression artifacts, UV seams or other texture based artifacts." },
				{ "UIMax", "4.0" },
				{ "UIMin", "1.0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IndirectLightingQuality = { UE4CodeGen_Private::EPropertyClass::Float, "IndirectLightingQuality", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, STRUCT_OFFSET(FLightmassWorldInfoSettings, IndirectLightingQuality), METADATA_PARAMS(NewProp_IndirectLightingQuality_MetaData, ARRAY_COUNT(NewProp_IndirectLightingQuality_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumSkyLightingBounces_MetaData[] = {
				{ "Category", "LightmassGeneral" },
				{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
				{ "ToolTip", "Number of skylight and emissive bounces to simulate.\nLightmass uses a non-distributable radiosity method for skylight bounces whose cost is proportional to the number of bounces." },
				{ "UIMax", "10.0" },
				{ "UIMin", "1.0" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumSkyLightingBounces = { UE4CodeGen_Private::EPropertyClass::Int, "NumSkyLightingBounces", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FLightmassWorldInfoSettings, NumSkyLightingBounces), METADATA_PARAMS(NewProp_NumSkyLightingBounces_MetaData, ARRAY_COUNT(NewProp_NumSkyLightingBounces_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumIndirectLightingBounces_MetaData[] = {
				{ "Category", "LightmassGeneral" },
				{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
				{ "ToolTip", "Number of light bounces to simulate for point / spot / directional lights, starting from the light source.\n0 is direct lighting only, 1 is one bounce, etc.\nBounce 1 takes the most time to calculate and contributes the most to visual quality, followed by bounce 2.\nSuccessive bounces don't really affect build times, but have a much lower visual impact, unless the material diffuse colors are close to 1." },
				{ "UIMax", "10.0" },
				{ "UIMin", "1.0" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumIndirectLightingBounces = { UE4CodeGen_Private::EPropertyClass::Int, "NumIndirectLightingBounces", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FLightmassWorldInfoSettings, NumIndirectLightingBounces), METADATA_PARAMS(NewProp_NumIndirectLightingBounces_MetaData, ARRAY_COUNT(NewProp_NumIndirectLightingBounces_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticLightingLevelScale_MetaData[] = {
				{ "Category", "LightmassGeneral" },
				{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
				{ "ToolTip", "Warning: Setting this to less than 1 will greatly increase build times!\nScale of the level relative to real world scale (1 Unreal Unit = 1 cm).\nAll scale-dependent Lightmass setting defaults have been tweaked to work well with real world scale,\nAny levels with a different scale should use this scale to compensate.\nFor large levels it can drastically reduce build times to set this to 2 or 4." },
				{ "UIMax", "4.0" },
				{ "UIMin", "1.0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StaticLightingLevelScale = { UE4CodeGen_Private::EPropertyClass::Float, "StaticLightingLevelScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, STRUCT_OFFSET(FLightmassWorldInfoSettings, StaticLightingLevelScale), METADATA_PARAMS(NewProp_StaticLightingLevelScale_MetaData, ARRAY_COUNT(NewProp_StaticLightingLevelScale_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCompressLightmaps,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bVisualizeAmbientOcclusion,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bVisualizeMaterialDiffuse,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxOcclusionDistance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FullyOccludedSamplesFraction,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OcclusionExponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IndirectIlluminationOcclusionFraction,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DirectIlluminationOcclusionFraction,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bGenerateAmbientOcclusionMaterialMask,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseAmbientOcclusion,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VolumeLightSamplePlacementScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VolumetricLightmapMaximumBrickMemoryMb,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VolumetricLightmapDetailCellSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VolumeLightingMethod,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DiffuseBoost,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EmissiveBoost,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EnvironmentIntensity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EnvironmentColor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IndirectLightingSmoothness,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IndirectLightingQuality,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NumSkyLightingBounces,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NumIndirectLightingBounces,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StaticLightingLevelScale,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"LightmassWorldInfoSettings",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FLightmassWorldInfoSettings),
				alignof(FLightmassWorldInfoSettings),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_CRC() { return 212300648U; }
	void AWorldSettings::StaticRegisterNativesAWorldSettings()
	{
		UClass* Class = AWorldSettings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_WorldGravityZ", (Native)&AWorldSettings::execOnRep_WorldGravityZ },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AWorldSettings_OnRep_WorldGravityZ()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AWorldSettings, "OnRep_WorldGravityZ", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AWorldSettings_NoRegister()
	{
		return AWorldSettings::StaticClass();
	}
	UClass* Z_Construct_UClass_AWorldSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AInfo,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AWorldSettings_OnRep_WorldGravityZ, "OnRep_WorldGravityZ" }, // 1178757975
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Actor Advanced Display Events Object Attachment Info Input Blueprint Layers Tags Replication Input Movement Collision Utilities|Transformation" },
				{ "IncludePath", "GameFramework/WorldSettings.h" },
				{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
				{ "ToolTip", "Actor containing all script accessible world properties." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetUserData_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
				{ "ToolTip", "Array of user data stored with the asset" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AssetUserData = { UE4CodeGen_Private::EPropertyClass::Array, "AssetUserData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020088000000008, 1, nullptr, STRUCT_OFFSET(AWorldSettings, AssetUserData), METADATA_PARAMS(NewProp_AssetUserData_MetaData, ARRAY_COUNT(NewProp_AssetUserData_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetUserData_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "AssetUserData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000080008, 1, nullptr, 0, Z_Construct_UClass_UAssetUserData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplicationViewers_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
				{ "ToolTip", "valid only during replication - information about the player(s) being replicated to\n(there could be more than one in the case of a splitscreen client)" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReplicationViewers = { UE4CodeGen_Private::EPropertyClass::Array, "ReplicationViewers", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(AWorldSettings, ReplicationViewers), METADATA_PARAMS(NewProp_ReplicationViewers_MetaData, ARRAY_COUNT(NewProp_ReplicationViewers_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReplicationViewers_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ReplicationViewers", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FNetViewer, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHighPriorityLoadingLocal_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
				{ "ToolTip", "copy of bHighPriorityLoading that is not replicated, for clientside-only loading operations" },
			};
#endif
			auto NewProp_bHighPriorityLoadingLocal_SetBit = [](void* Obj){ ((AWorldSettings*)Obj)->bHighPriorityLoadingLocal = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHighPriorityLoadingLocal = { UE4CodeGen_Private::EPropertyClass::Bool, "bHighPriorityLoadingLocal", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(AWorldSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bHighPriorityLoadingLocal_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bHighPriorityLoadingLocal_MetaData, ARRAY_COUNT(NewProp_bHighPriorityLoadingLocal_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHighPriorityLoading_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
				{ "ToolTip", "when this flag is set, more time is allocated to background loading (replicated)" },
			};
#endif
			auto NewProp_bHighPriorityLoading_SetBit = [](void* Obj){ ((AWorldSettings*)Obj)->bHighPriorityLoading = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHighPriorityLoading = { UE4CodeGen_Private::EPropertyClass::Bool, "bHighPriorityLoading", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000020, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(AWorldSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bHighPriorityLoading_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bHighPriorityLoading_MetaData, ARRAY_COUNT(NewProp_bHighPriorityLoading_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pauser_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
				{ "ToolTip", "If paused, FName of person pausing the game." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pauser = { UE4CodeGen_Private::EPropertyClass::Object, "Pauser", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002020, 1, nullptr, STRUCT_OFFSET(AWorldSettings, Pauser), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(NewProp_Pauser_MetaData, ARRAY_COUNT(NewProp_Pauser_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxUndilatedFrameTime_MetaData[] = {
				{ "Category", "Tick" },
				{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
				{ "ToolTip", "Largest possible frametime, not considering dilation. Equiv to 1/SlowestFPS." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxUndilatedFrameTime = { UE4CodeGen_Private::EPropertyClass::Float, "MaxUndilatedFrameTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000004001, 1, nullptr, STRUCT_OFFSET(AWorldSettings, MaxUndilatedFrameTime), METADATA_PARAMS(NewProp_MaxUndilatedFrameTime_MetaData, ARRAY_COUNT(NewProp_MaxUndilatedFrameTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinUndilatedFrameTime_MetaData[] = {
				{ "Category", "Tick" },
				{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
				{ "ToolTip", "Smallest possible frametime, not considering dilation. Equiv to 1/FastestFPS." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinUndilatedFrameTime = { UE4CodeGen_Private::EPropertyClass::Float, "MinUndilatedFrameTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000004001, 1, nullptr, STRUCT_OFFSET(AWorldSettings, MinUndilatedFrameTime), METADATA_PARAMS(NewProp_MinUndilatedFrameTime_MetaData, ARRAY_COUNT(NewProp_MinUndilatedFrameTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxGlobalTimeDilation_MetaData[] = {
				{ "Category", "Tick" },
				{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
				{ "ToolTip", "Highest acceptable global time dilation." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxGlobalTimeDilation = { UE4CodeGen_Private::EPropertyClass::Float, "MaxGlobalTimeDilation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000004001, 1, nullptr, STRUCT_OFFSET(AWorldSettings, MaxGlobalTimeDilation), METADATA_PARAMS(NewProp_MaxGlobalTimeDilation_MetaData, ARRAY_COUNT(NewProp_MaxGlobalTimeDilation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinGlobalTimeDilation_MetaData[] = {
				{ "Category", "Tick" },
				{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
				{ "ToolTip", "Lowest acceptable global time dilation." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinGlobalTimeDilation = { UE4CodeGen_Private::EPropertyClass::Float, "MinGlobalTimeDilation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000004001, 1, nullptr, STRUCT_OFFSET(AWorldSettings, MinGlobalTimeDilation), METADATA_PARAMS(NewProp_MinGlobalTimeDilation_MetaData, ARRAY_COUNT(NewProp_MinGlobalTimeDilation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DemoPlayTimeDilation_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
				{ "ToolTip", "Additional TimeDilation used to control demo playback speed" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DemoPlayTimeDilation = { UE4CodeGen_Private::EPropertyClass::Float, "DemoPlayTimeDilation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, STRUCT_OFFSET(AWorldSettings, DemoPlayTimeDilation), METADATA_PARAMS(NewProp_DemoPlayTimeDilation_MetaData, ARRAY_COUNT(NewProp_DemoPlayTimeDilation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatineeTimeDilation_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
				{ "ToolTip", "Additional time dilation used by Matinee (or Sequencer) slomo track.  Transient because this is often\ntemporarily modified by the editor when previewing slow motion effects, yet we don't want it saved or loaded from level packages." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MatineeTimeDilation = { UE4CodeGen_Private::EPropertyClass::Float, "MatineeTimeDilation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002020, 1, nullptr, STRUCT_OFFSET(AWorldSettings, MatineeTimeDilation), METADATA_PARAMS(NewProp_MatineeTimeDilation_MetaData, ARRAY_COUNT(NewProp_MatineeTimeDilation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeDilation_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
				{ "ToolTip", "Normally 1 - scales real time passage.\nWarning - most use cases should use GetEffectiveTimeDilation() instead of reading from this directly" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeDilation = { UE4CodeGen_Private::EPropertyClass::Float, "TimeDilation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002020, 1, nullptr, STRUCT_OFFSET(AWorldSettings, TimeDilation), METADATA_PARAMS(NewProp_TimeDilation_MetaData, ARRAY_COUNT(NewProp_TimeDilation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BookMarks_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
				{ "ToolTip", "Level Bookmarks: 10 should be MAX_BOOKMARK_NUMBER @fixmeconst" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BookMarks = { UE4CodeGen_Private::EPropertyClass::Object, "BookMarks", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, CPP_ARRAY_DIM(BookMarks, AWorldSettings), nullptr, STRUCT_OFFSET(AWorldSettings, BookMarks), Z_Construct_UClass_UBookMark_NoRegister, METADATA_PARAMS(NewProp_BookMarks_MetaData, ARRAY_COUNT(NewProp_BookMarks_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MonoCullingDistance_MetaData[] = {
				{ "Category", "VR" },
				{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
				{ "ToolTip", "Distance from the player after which content will be rendered in mono if monoscopic far field rendering is activated" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MonoCullingDistance = { UE4CodeGen_Private::EPropertyClass::Float, "MonoCullingDistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(AWorldSettings, MonoCullingDistance), METADATA_PARAMS(NewProp_MonoCullingDistance_MetaData, ARRAY_COUNT(NewProp_MonoCullingDistance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldToMeters_MetaData[] = {
				{ "Category", "VR" },
				{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
				{ "ToolTip", "scale of 1uu to 1m in real world measurements, for HMD and other physically tracked devices (e.g. 1uu = 1cm would be 100.0)" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WorldToMeters = { UE4CodeGen_Private::EPropertyClass::Float, "WorldToMeters", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(AWorldSettings, WorldToMeters), METADATA_PARAMS(NewProp_WorldToMeters_MetaData, ARRAY_COUNT(NewProp_WorldToMeters_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumHLODLevels_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumHLODLevels = { UE4CodeGen_Private::EPropertyClass::Int, "NumHLODLevels", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(AWorldSettings, NumHLODLevels), METADATA_PARAMS(NewProp_NumHLODLevels_MetaData, ARRAY_COUNT(NewProp_NumHLODLevels_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HierarchicalLODSetup_MetaData[] = {
				{ "Category", "LODSystem" },
				{ "editcondition", "bEnableHierarchicalLODSystem" },
				{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
				{ "ToolTip", "Hierarchical LOD Setup" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HierarchicalLODSetup = { UE4CodeGen_Private::EPropertyClass::Array, "HierarchicalLODSetup", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000001, 1, nullptr, STRUCT_OFFSET(AWorldSettings, HierarchicalLODSetup), METADATA_PARAMS(NewProp_HierarchicalLODSetup_MetaData, ARRAY_COUNT(NewProp_HierarchicalLODSetup_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_HierarchicalLODSetup_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "HierarchicalLODSetup", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000800000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FHierarchicalSimplification, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableHierarchicalLODSystem_MetaData[] = {
				{ "Category", "LODSystem" },
				{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
				{ "ToolTip", "if set to true, hierarchical LODs will be built, which will create hierarchical LODActors" },
			};
#endif
			auto NewProp_bEnableHierarchicalLODSystem_SetBit = [](void* Obj){ ((AWorldSettings*)Obj)->bEnableHierarchicalLODSystem = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableHierarchicalLODSystem = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableHierarchicalLODSystem", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(AWorldSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnableHierarchicalLODSystem_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnableHierarchicalLODSystem_MetaData, ARRAY_COUNT(NewProp_bEnableHierarchicalLODSystem_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultBaseSoundMix_MetaData[] = {
				{ "Category", "Audio" },
				{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
				{ "ToolTip", "Default Base SoundMix." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultBaseSoundMix = { UE4CodeGen_Private::EPropertyClass::Object, "DefaultBaseSoundMix", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AWorldSettings, DefaultBaseSoundMix), Z_Construct_UClass_USoundMix_NoRegister, METADATA_PARAMS(NewProp_DefaultBaseSoundMix_MetaData, ARRAY_COUNT(NewProp_DefaultBaseSoundMix_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultAmbientZoneSettings_MetaData[] = {
				{ "Category", "Audio" },
				{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
				{ "ToolTip", "Default interior settings used by audio volumes." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultAmbientZoneSettings = { UE4CodeGen_Private::EPropertyClass::Struct, "DefaultAmbientZoneSettings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(AWorldSettings, DefaultAmbientZoneSettings), Z_Construct_UScriptStruct_FInteriorSettings, METADATA_PARAMS(NewProp_DefaultAmbientZoneSettings_MetaData, ARRAY_COUNT(NewProp_DefaultAmbientZoneSettings_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultReverbSettings_MetaData[] = {
				{ "Category", "Audio" },
				{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
				{ "ToolTip", "Default reverb settings used by audio volumes." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultReverbSettings = { UE4CodeGen_Private::EPropertyClass::Struct, "DefaultReverbSettings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(AWorldSettings, DefaultReverbSettings), Z_Construct_UScriptStruct_FReverbSettings, METADATA_PARAMS(NewProp_DefaultReverbSettings_MetaData, ARRAY_COUNT(NewProp_DefaultReverbSettings_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightmassSettings_MetaData[] = {
				{ "Category", "Lightmass" },
				{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LightmassSettings = { UE4CodeGen_Private::EPropertyClass::Struct, "LightmassSettings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AWorldSettings, LightmassSettings), Z_Construct_UScriptStruct_FLightmassWorldInfoSettings, METADATA_PARAMS(NewProp_LightmassSettings_MetaData, ARRAY_COUNT(NewProp_LightmassSettings_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForceNoPrecomputedLighting_MetaData[] = {
				{ "Category", "Lightmass" },
				{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
				{ "ToolTip", "Whether to force lightmaps and other precomputed lighting to not be created even when the engine thinks they are needed.\nThis is useful for improving iteration in levels with fully dynamic lighting and shadowing.\nNote that any lighting and shadowing interactions that are usually precomputed will be lost if this is enabled." },
			};
#endif
			auto NewProp_bForceNoPrecomputedLighting_SetBit = [](void* Obj){ ((AWorldSettings*)Obj)->bForceNoPrecomputedLighting = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceNoPrecomputedLighting = { UE4CodeGen_Private::EPropertyClass::Bool, "bForceNoPrecomputedLighting", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(AWorldSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bForceNoPrecomputedLighting_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bForceNoPrecomputedLighting_MetaData, ARRAY_COUNT(NewProp_bForceNoPrecomputedLighting_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisibilityAggressiveness_MetaData[] = {
				{ "Category", "PrecomputedVisibility" },
				{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
				{ "ToolTip", "Determines how aggressive precomputed visibility should be.\nMore aggressive settings cull more objects but also cause more visibility errors like popping." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_VisibilityAggressiveness = { UE4CodeGen_Private::EPropertyClass::Byte, "VisibilityAggressiveness", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, STRUCT_OFFSET(AWorldSettings, VisibilityAggressiveness), Z_Construct_UEnum_Engine_EVisibilityAggressiveness, METADATA_PARAMS(NewProp_VisibilityAggressiveness_MetaData, ARRAY_COUNT(NewProp_VisibilityAggressiveness_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisibilityCellSize_MetaData[] = {
				{ "Category", "PrecomputedVisibility" },
				{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
				{ "ToolTip", "World space size of precomputed visibility cells in x and y.\nSmaller sizes produce more effective occlusion culling at the cost of increased runtime memory usage and lighting build times." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_VisibilityCellSize = { UE4CodeGen_Private::EPropertyClass::Int, "VisibilityCellSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, STRUCT_OFFSET(AWorldSettings, VisibilityCellSize), METADATA_PARAMS(NewProp_VisibilityCellSize_MetaData, ARRAY_COUNT(NewProp_VisibilityCellSize_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPlaceCellsOnlyAlongCameraTracks_MetaData[] = {
				{ "Category", "PrecomputedVisibility" },
				{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
				{ "ToolTip", "Whether to place visibility cells only along camera tracks or only above shadow casting surfaces." },
			};
#endif
			auto NewProp_bPlaceCellsOnlyAlongCameraTracks_SetBit = [](void* Obj){ ((AWorldSettings*)Obj)->bPlaceCellsOnlyAlongCameraTracks = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPlaceCellsOnlyAlongCameraTracks = { UE4CodeGen_Private::EPropertyClass::Bool, "bPlaceCellsOnlyAlongCameraTracks", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(AWorldSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bPlaceCellsOnlyAlongCameraTracks_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bPlaceCellsOnlyAlongCameraTracks_MetaData, ARRAY_COUNT(NewProp_bPlaceCellsOnlyAlongCameraTracks_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPrecomputeVisibility_MetaData[] = {
				{ "Category", "PrecomputedVisibility" },
				{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
				{ "ToolTip", "Whether to place visibility cells inside Precomputed Visibility Volumes and along camera tracks in this level.\nPrecomputing visibility reduces rendering thread time at the cost of some runtime memory and somewhat increased lighting build times." },
			};
#endif
			auto NewProp_bPrecomputeVisibility_SetBit = [](void* Obj){ ((AWorldSettings*)Obj)->bPrecomputeVisibility = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPrecomputeVisibility = { UE4CodeGen_Private::EPropertyClass::Bool, "bPrecomputeVisibility", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(AWorldSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bPrecomputeVisibility_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bPrecomputeVisibility_MetaData, ARRAY_COUNT(NewProp_bPrecomputeVisibility_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DynamicIndirectShadowsSelfShadowingIntensity_MetaData[] = {
				{ "Category", "Rendering" },
				{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
				{ "ToolTip", "Controls the intensity of self-shadowing from capsule indirect shadows.\nThese types of shadows use approximate occluder representations, so reducing self-shadowing intensity can hide those artifacts." },
				{ "UIMax", "1" },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DynamicIndirectShadowsSelfShadowingIntensity = { UE4CodeGen_Private::EPropertyClass::Float, "DynamicIndirectShadowsSelfShadowingIntensity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(AWorldSettings, DynamicIndirectShadowsSelfShadowingIntensity), METADATA_PARAMS(NewProp_DynamicIndirectShadowsSelfShadowingIntensity_MetaData, ARRAY_COUNT(NewProp_DynamicIndirectShadowsSelfShadowingIntensity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalDistanceFieldViewDistance_MetaData[] = {
				{ "Category", "Rendering" },
				{ "DisplayName", "Global DistanceField View Distance" },
				{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
				{ "ToolTip", "Distance from the camera that the global distance field should cover." },
				{ "UIMax", "100000" },
				{ "UIMin", "10000" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GlobalDistanceFieldViewDistance = { UE4CodeGen_Private::EPropertyClass::Float, "GlobalDistanceFieldViewDistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AWorldSettings, GlobalDistanceFieldViewDistance), METADATA_PARAMS(NewProp_GlobalDistanceFieldViewDistance_MetaData, ARRAY_COUNT(NewProp_GlobalDistanceFieldViewDistance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultMaxDistanceFieldOcclusionDistance_MetaData[] = {
				{ "Category", "Rendering" },
				{ "DisplayName", "Default Max DistanceField Occlusion Distance" },
				{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
				{ "ToolTip", "Max occlusion distance used by mesh distance fields, overridden if there is a movable skylight." },
				{ "UIMax", "5000" },
				{ "UIMin", "500" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultMaxDistanceFieldOcclusionDistance = { UE4CodeGen_Private::EPropertyClass::Float, "DefaultMaxDistanceFieldOcclusionDistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AWorldSettings, DefaultMaxDistanceFieldOcclusionDistance), METADATA_PARAMS(NewProp_DefaultMaxDistanceFieldOcclusionDistance_MetaData, ARRAY_COUNT(NewProp_DefaultMaxDistanceFieldOcclusionDistance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultColorScale_MetaData[] = {
				{ "Category", "World" },
				{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
				{ "ToolTip", "Default color scale for the level" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultColorScale = { UE4CodeGen_Private::EPropertyClass::Struct, "DefaultColorScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000015, 1, nullptr, STRUCT_OFFSET(AWorldSettings, DefaultColorScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_DefaultColorScale_MetaData, ARRAY_COUNT(NewProp_DefaultColorScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMinimizeBSPSections_MetaData[] = {
				{ "Category", "World" },
				{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
				{ "ToolTip", "Causes the BSP build to generate as few sections as possible.\nThis is useful when you need to reduce draw calls but can reduce texture streaming efficiency and effective lightmap resolution.\nNote - changes require a rebuild to propagate.  Also, be sure to select all surfaces and make sure they all have the same flags to minimize section count." },
			};
#endif
			auto NewProp_bMinimizeBSPSections_SetBit = [](void* Obj){ ((AWorldSettings*)Obj)->bMinimizeBSPSections = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMinimizeBSPSections = { UE4CodeGen_Private::EPropertyClass::Bool, "bMinimizeBSPSections", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(AWorldSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bMinimizeBSPSections_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bMinimizeBSPSections_MetaData, ARRAY_COUNT(NewProp_bMinimizeBSPSections_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PackedLightAndShadowMapTextureSize_MetaData[] = {
				{ "Category", "Lightmass" },
				{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
				{ "ToolTip", "Maximum size of textures for packed light and shadow maps" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_PackedLightAndShadowMapTextureSize = { UE4CodeGen_Private::EPropertyClass::Int, "PackedLightAndShadowMapTextureSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, STRUCT_OFFSET(AWorldSettings, PackedLightAndShadowMapTextureSize), METADATA_PARAMS(NewProp_PackedLightAndShadowMapTextureSize_MetaData, ARRAY_COUNT(NewProp_PackedLightAndShadowMapTextureSize_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameNetworkManagerClass_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
				{ "ToolTip", "Class of GameNetworkManager to spawn for network games" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_GameNetworkManagerClass = { UE4CodeGen_Private::EPropertyClass::Class, "GameNetworkManagerClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000000, 1, nullptr, STRUCT_OFFSET(AWorldSettings, GameNetworkManagerClass), Z_Construct_UClass_AGameNetworkManager_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_GameNetworkManagerClass_MetaData, ARRAY_COUNT(NewProp_GameNetworkManagerClass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultGameMode_MetaData[] = {
				{ "Category", "GameMode" },
				{ "DisplayName", "GameMode Override" },
				{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
				{ "ToolTip", "The default GameMode to use when starting this map in the game. If this value is NULL, the INI setting for default game type is used." },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_DefaultGameMode = { UE4CodeGen_Private::EPropertyClass::Class, "DefaultGameMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000015, 1, nullptr, STRUCT_OFFSET(AWorldSettings, DefaultGameMode), Z_Construct_UClass_AGameModeBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_DefaultGameMode_MetaData, ARRAY_COUNT(NewProp_DefaultGameMode_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicsCollisionHandlerClass_MetaData[] = {
				{ "Category", "Physics" },
				{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
				{ "ToolTip", "optional level specific collision handler" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_PhysicsCollisionHandlerClass = { UE4CodeGen_Private::EPropertyClass::Class, "PhysicsCollisionHandlerClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014040000000015, 1, nullptr, STRUCT_OFFSET(AWorldSettings, PhysicsCollisionHandlerClass), Z_Construct_UClass_UPhysicsCollisionHandler_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_PhysicsCollisionHandlerClass_MetaData, ARRAY_COUNT(NewProp_PhysicsCollisionHandlerClass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultPhysicsVolumeClass_MetaData[] = {
				{ "Category", "Physics" },
				{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
				{ "ToolTip", "level specific default physics volume" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_DefaultPhysicsVolumeClass = { UE4CodeGen_Private::EPropertyClass::Class, "DefaultPhysicsVolumeClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014040002000015, 1, nullptr, STRUCT_OFFSET(AWorldSettings, DefaultPhysicsVolumeClass), Z_Construct_UClass_ADefaultPhysicsVolume_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_DefaultPhysicsVolumeClass_MetaData, ARRAY_COUNT(NewProp_DefaultPhysicsVolumeClass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalGravityZ_MetaData[] = {
				{ "Category", "Physics" },
				{ "editcondition", "bGlobalGravitySet" },
				{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
				{ "ToolTip", "optional level specific gravity override set by level designer" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GlobalGravityZ = { UE4CodeGen_Private::EPropertyClass::Float, "GlobalGravityZ", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(AWorldSettings, GlobalGravityZ), METADATA_PARAMS(NewProp_GlobalGravityZ_MetaData, ARRAY_COUNT(NewProp_GlobalGravityZ_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldGravityZ_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
				{ "ToolTip", "current gravity actually being used" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WorldGravityZ = { UE4CodeGen_Private::EPropertyClass::Float, "WorldGravityZ", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000100002020, 1, "OnRep_WorldGravityZ", STRUCT_OFFSET(AWorldSettings, WorldGravityZ), METADATA_PARAMS(NewProp_WorldGravityZ_MetaData, ARRAY_COUNT(NewProp_WorldGravityZ_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KillZDamageType_MetaData[] = {
				{ "Category", "World" },
				{ "editcondition", "bEnableWorldBoundsChecks" },
				{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
				{ "ToolTip", "The type of damage inflicted when a actor falls below KillZ" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_KillZDamageType = { UE4CodeGen_Private::EPropertyClass::Class, "KillZDamageType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014040000000015, 1, nullptr, STRUCT_OFFSET(AWorldSettings, KillZDamageType), Z_Construct_UClass_UDamageType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_KillZDamageType_MetaData, ARRAY_COUNT(NewProp_KillZDamageType_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KillZ_MetaData[] = {
				{ "Category", "World" },
				{ "editcondition", "bEnableWorldBoundsChecks" },
				{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
				{ "ToolTip", "any actor falling below this level gets destroyed" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_KillZ = { UE4CodeGen_Private::EPropertyClass::Float, "KillZ", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(AWorldSettings, KillZ), METADATA_PARAMS(NewProp_KillZ_MetaData, ARRAY_COUNT(NewProp_KillZ_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGlobalGravitySet_MetaData[] = {
				{ "Category", "Physics" },
				{ "DisplayName", "Override World Gravity" },
				{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
				{ "ToolTip", "If set to true we will use GlobalGravityZ instead of project setting DefaultGravityZ" },
			};
#endif
			auto NewProp_bGlobalGravitySet_SetBit = [](void* Obj){ ((AWorldSettings*)Obj)->bGlobalGravitySet = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGlobalGravitySet = { UE4CodeGen_Private::EPropertyClass::Bool, "bGlobalGravitySet", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(AWorldSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bGlobalGravitySet_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bGlobalGravitySet_MetaData, ARRAY_COUNT(NewProp_bGlobalGravitySet_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWorldGravitySet_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
				{ "ToolTip", "if set to true, when we call GetGravityZ we assume WorldGravityZ has already been initialized and skip the lookup of DefaultGravityZ and GlobalGravityZ" },
			};
#endif
			auto NewProp_bWorldGravitySet_SetBit = [](void* Obj){ ((AWorldSettings*)Obj)->bWorldGravitySet = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWorldGravitySet = { UE4CodeGen_Private::EPropertyClass::Bool, "bWorldGravitySet", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(AWorldSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bWorldGravitySet_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bWorldGravitySet_MetaData, ARRAY_COUNT(NewProp_bWorldGravitySet_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableWorldOriginRebasing_MetaData[] = {
				{ "Category", "World" },
				{ "editcondition", "bEnableWorldComposition" },
				{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
				{ "ToolTip", "World origin will shift to a camera position when camera goes far away from current origin" },
			};
#endif
			auto NewProp_bEnableWorldOriginRebasing_SetBit = [](void* Obj){ ((AWorldSettings*)Obj)->bEnableWorldOriginRebasing = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableWorldOriginRebasing = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableWorldOriginRebasing", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(AWorldSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnableWorldOriginRebasing_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnableWorldOriginRebasing_MetaData, ARRAY_COUNT(NewProp_bEnableWorldOriginRebasing_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseClientSideLevelStreamingVolumes_MetaData[] = {
				{ "Category", "World" },
				{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
				{ "ToolTip", "Enables client-side streaming volumes instead of server-side.\nExpected usage scenario: server has all streaming levels always loaded, clients independently stream levels in/out based on streaming volumes." },
			};
#endif
			auto NewProp_bUseClientSideLevelStreamingVolumes_SetBit = [](void* Obj){ ((AWorldSettings*)Obj)->bUseClientSideLevelStreamingVolumes = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseClientSideLevelStreamingVolumes = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseClientSideLevelStreamingVolumes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(AWorldSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseClientSideLevelStreamingVolumes_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseClientSideLevelStreamingVolumes_MetaData, ARRAY_COUNT(NewProp_bUseClientSideLevelStreamingVolumes_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableWorldComposition_MetaData[] = {
				{ "Category", "World" },
				{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
				{ "ToolTip", "Enables tools for composing a tiled world.\nLevel has to be saved and all sub-levels removed before enabling this option." },
			};
#endif
			auto NewProp_bEnableWorldComposition_SetBit = [](void* Obj){ ((AWorldSettings*)Obj)->bEnableWorldComposition = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableWorldComposition = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableWorldComposition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(AWorldSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnableWorldComposition_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnableWorldComposition_MetaData, ARRAY_COUNT(NewProp_bEnableWorldComposition_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableAISystem_MetaData[] = {
				{ "Category", "World" },
				{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
				{ "ToolTip", "if set to false AI system will not get created. Use it to disable all AI-related activity on a map" },
			};
#endif
			auto NewProp_bEnableAISystem_SetBit = [](void* Obj){ ((AWorldSettings*)Obj)->bEnableAISystem = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableAISystem = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableAISystem", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000004015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(AWorldSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnableAISystem_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnableAISystem_MetaData, ARRAY_COUNT(NewProp_bEnableAISystem_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableNavigationSystem_MetaData[] = {
				{ "Category", "World" },
				{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
				{ "ToolTip", "if set to false navigation system will not get created (and all navigation functionality won't be accessible)" },
			};
#endif
			auto NewProp_bEnableNavigationSystem_SetBit = [](void* Obj){ ((AWorldSettings*)Obj)->bEnableNavigationSystem = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableNavigationSystem = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableNavigationSystem", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000004015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(AWorldSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnableNavigationSystem_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnableNavigationSystem_MetaData, ARRAY_COUNT(NewProp_bEnableNavigationSystem_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableWorldBoundsChecks_MetaData[] = {
				{ "Category", "World" },
				{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
				{ "ToolTip", "If true, enables CheckStillInWorld checks" },
			};
#endif
			auto NewProp_bEnableWorldBoundsChecks_SetBit = [](void* Obj){ ((AWorldSettings*)Obj)->bEnableWorldBoundsChecks = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableWorldBoundsChecks = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableWorldBoundsChecks", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(AWorldSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnableWorldBoundsChecks_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnableWorldBoundsChecks_MetaData, ARRAY_COUNT(NewProp_bEnableWorldBoundsChecks_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AssetUserData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AssetUserData_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReplicationViewers,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReplicationViewers_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bHighPriorityLoadingLocal,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bHighPriorityLoading,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Pauser,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxUndilatedFrameTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MinUndilatedFrameTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxGlobalTimeDilation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MinGlobalTimeDilation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DemoPlayTimeDilation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MatineeTimeDilation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TimeDilation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BookMarks,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MonoCullingDistance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldToMeters,
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NumHLODLevels,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HierarchicalLODSetup,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HierarchicalLODSetup_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnableHierarchicalLODSystem,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultBaseSoundMix,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultAmbientZoneSettings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultReverbSettings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LightmassSettings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bForceNoPrecomputedLighting,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VisibilityAggressiveness,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VisibilityCellSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bPlaceCellsOnlyAlongCameraTracks,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bPrecomputeVisibility,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DynamicIndirectShadowsSelfShadowingIntensity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GlobalDistanceFieldViewDistance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultMaxDistanceFieldOcclusionDistance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultColorScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bMinimizeBSPSections,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PackedLightAndShadowMapTextureSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GameNetworkManagerClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultGameMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PhysicsCollisionHandlerClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultPhysicsVolumeClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GlobalGravityZ,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldGravityZ,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_KillZDamageType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_KillZ,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bGlobalGravitySet,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bWorldGravitySet,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnableWorldOriginRebasing,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseClientSideLevelStreamingVolumes,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnableWorldComposition,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnableAISystem,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnableNavigationSystem,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnableWorldBoundsChecks,
			};
			static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[] = {
				{ Z_Construct_UClass_UInterface_AssetUserData_NoRegister, (int32)VTABLE_OFFSET(AWorldSettings, IInterface_AssetUserData), false },
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AWorldSettings>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AWorldSettings::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900284u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				"game",
				&StaticCppClassTypeInfo,
				InterfaceParams, ARRAY_COUNT(InterfaceParams),
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWorldSettings, 2553379907);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWorldSettings(Z_Construct_UClass_AWorldSettings, &AWorldSettings::StaticClass, TEXT("/Script/Engine"), TEXT("AWorldSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWorldSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
