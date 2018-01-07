// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Navigation/CrowdManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCrowdManager() {}
// Cross Module References
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FCrowdAvoidanceSamplingPattern();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FCrowdAvoidanceConfig();
	AIMODULE_API UClass* Z_Construct_UClass_UCrowdManager_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UCrowdManager();
	ENGINE_API UClass* Z_Construct_UClass_UCrowdManagerBase();
	ENGINE_API UClass* Z_Construct_UClass_ANavigationData_NoRegister();
// End Cross Module References
class UScriptStruct* FCrowdAvoidanceSamplingPattern::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AIMODULE_API uint32 Get_Z_Construct_UScriptStruct_FCrowdAvoidanceSamplingPattern_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCrowdAvoidanceSamplingPattern, Z_Construct_UPackage__Script_AIModule(), TEXT("CrowdAvoidanceSamplingPattern"), sizeof(FCrowdAvoidanceSamplingPattern), Get_Z_Construct_UScriptStruct_FCrowdAvoidanceSamplingPattern_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCrowdAvoidanceSamplingPattern(FCrowdAvoidanceSamplingPattern::StaticStruct, TEXT("/Script/AIModule"), TEXT("CrowdAvoidanceSamplingPattern"), false, nullptr, nullptr);
static struct FScriptStruct_AIModule_StaticRegisterNativesFCrowdAvoidanceSamplingPattern
{
	FScriptStruct_AIModule_StaticRegisterNativesFCrowdAvoidanceSamplingPattern()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CrowdAvoidanceSamplingPattern")),new UScriptStruct::TCppStructOps<FCrowdAvoidanceSamplingPattern>);
	}
} ScriptStruct_AIModule_StaticRegisterNativesFCrowdAvoidanceSamplingPattern;
	UScriptStruct* Z_Construct_UScriptStruct_FCrowdAvoidanceSamplingPattern()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCrowdAvoidanceSamplingPattern_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CrowdAvoidanceSamplingPattern"), sizeof(FCrowdAvoidanceSamplingPattern), Get_Z_Construct_UScriptStruct_FCrowdAvoidanceSamplingPattern_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Navigation/CrowdManager.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCrowdAvoidanceSamplingPattern>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radii_MetaData[] = {
				{ "Category", "Crowd" },
				{ "ModuleRelativePath", "Classes/Navigation/CrowdManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Radii = { UE4CodeGen_Private::EPropertyClass::Array, "Radii", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FCrowdAvoidanceSamplingPattern, Radii), METADATA_PARAMS(NewProp_Radii_MetaData, ARRAY_COUNT(NewProp_Radii_MetaData)) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radii_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "Radii", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Angles_MetaData[] = {
				{ "Category", "Crowd" },
				{ "ModuleRelativePath", "Classes/Navigation/CrowdManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Angles = { UE4CodeGen_Private::EPropertyClass::Array, "Angles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FCrowdAvoidanceSamplingPattern, Angles), METADATA_PARAMS(NewProp_Angles_MetaData, ARRAY_COUNT(NewProp_Angles_MetaData)) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Angles_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "Angles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Radii,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Radii_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Angles,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Angles_Inner,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"CrowdAvoidanceSamplingPattern",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FCrowdAvoidanceSamplingPattern),
				alignof(FCrowdAvoidanceSamplingPattern),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCrowdAvoidanceSamplingPattern_CRC() { return 3627058120U; }
class UScriptStruct* FCrowdAvoidanceConfig::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AIMODULE_API uint32 Get_Z_Construct_UScriptStruct_FCrowdAvoidanceConfig_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCrowdAvoidanceConfig, Z_Construct_UPackage__Script_AIModule(), TEXT("CrowdAvoidanceConfig"), sizeof(FCrowdAvoidanceConfig), Get_Z_Construct_UScriptStruct_FCrowdAvoidanceConfig_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCrowdAvoidanceConfig(FCrowdAvoidanceConfig::StaticStruct, TEXT("/Script/AIModule"), TEXT("CrowdAvoidanceConfig"), false, nullptr, nullptr);
static struct FScriptStruct_AIModule_StaticRegisterNativesFCrowdAvoidanceConfig
{
	FScriptStruct_AIModule_StaticRegisterNativesFCrowdAvoidanceConfig()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CrowdAvoidanceConfig")),new UScriptStruct::TCppStructOps<FCrowdAvoidanceConfig>);
	}
} ScriptStruct_AIModule_StaticRegisterNativesFCrowdAvoidanceConfig;
	UScriptStruct* Z_Construct_UScriptStruct_FCrowdAvoidanceConfig()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCrowdAvoidanceConfig_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CrowdAvoidanceConfig"), sizeof(FCrowdAvoidanceConfig), Get_Z_Construct_UScriptStruct_FCrowdAvoidanceConfig_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Navigation/CrowdManager.h" },
				{ "ToolTip", "Crowd manager is responsible for handling crowds using Detour (Recast library)\n\nAgents will respect navmesh for all steering and avoidance updates,\nbut it's slower than AvoidanceManager solution (RVO, cares only about agents)\n\nAll agents will operate on the same navmesh data, which will be picked from\nnavigation system defaults (UNavigationSystem::SupportedAgents[0])\n\nTo use it, you have to add CrowdFollowingComponent to your agent\n(usually: replace class of PathFollowingComponent in AIController by adding\n those lines in controller's constructor\n\n ACrowdAIController::ACrowdAIController(const FObjectInitializer& ObjectInitializer)\n     : Super(ObjectInitializer.SetDefaultSubobjectClass<UCrowdFollowingComponent>(TEXT(\"PathFollowingComponent\")))\n\n or simply add both components and switch move requests between them)\n\nActors that should be avoided, but are not being simulated by crowd (like players)\nshould implement CrowdAgentInterface AND register/unregister themselves with crowd manager:\n\n UCrowdManager* CrowdManager = UCrowdManager::GetCurrent(this);\n if (CrowdManager)\n {\n    CrowdManager->RegisterAgent(this);\n }\n\n Check flags in CrowdDebugDrawing namespace (CrowdManager.cpp) for debugging options." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCrowdAvoidanceConfig>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdaptiveDepth_MetaData[] = {
				{ "Category", "Crowd" },
				{ "ModuleRelativePath", "Classes/Navigation/CrowdManager.h" },
				{ "ToolTip", "adaptive sampling: number of iterations at best velocity" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_AdaptiveDepth = { UE4CodeGen_Private::EPropertyClass::Byte, "AdaptiveDepth", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FCrowdAvoidanceConfig, AdaptiveDepth), nullptr, METADATA_PARAMS(NewProp_AdaptiveDepth_MetaData, ARRAY_COUNT(NewProp_AdaptiveDepth_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdaptiveRings_MetaData[] = {
				{ "Category", "Crowd" },
				{ "ModuleRelativePath", "Classes/Navigation/CrowdManager.h" },
				{ "ToolTip", "adaptive sampling: number of rings" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_AdaptiveRings = { UE4CodeGen_Private::EPropertyClass::Byte, "AdaptiveRings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FCrowdAvoidanceConfig, AdaptiveRings), nullptr, METADATA_PARAMS(NewProp_AdaptiveRings_MetaData, ARRAY_COUNT(NewProp_AdaptiveRings_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdaptiveDivisions_MetaData[] = {
				{ "Category", "Crowd" },
				{ "ModuleRelativePath", "Classes/Navigation/CrowdManager.h" },
				{ "ToolTip", "adaptive sampling: number of divisions per ring" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_AdaptiveDivisions = { UE4CodeGen_Private::EPropertyClass::Byte, "AdaptiveDivisions", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FCrowdAvoidanceConfig, AdaptiveDivisions), nullptr, METADATA_PARAMS(NewProp_AdaptiveDivisions_MetaData, ARRAY_COUNT(NewProp_AdaptiveDivisions_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomPatternIdx_MetaData[] = {
				{ "Category", "Crowd" },
				{ "ModuleRelativePath", "Classes/Navigation/CrowdManager.h" },
				{ "ToolTip", "index in SamplingPatterns array or 0xff for adaptive sampling" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_CustomPatternIdx = { UE4CodeGen_Private::EPropertyClass::Byte, "CustomPatternIdx", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FCrowdAvoidanceConfig, CustomPatternIdx), nullptr, METADATA_PARAMS(NewProp_CustomPatternIdx_MetaData, ARRAY_COUNT(NewProp_CustomPatternIdx_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpactTimeRange_MetaData[] = {
				{ "Category", "Crowd" },
				{ "ModuleRelativePath", "Classes/Navigation/CrowdManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ImpactTimeRange = { UE4CodeGen_Private::EPropertyClass::Float, "ImpactTimeRange", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FCrowdAvoidanceConfig, ImpactTimeRange), METADATA_PARAMS(NewProp_ImpactTimeRange_MetaData, ARRAY_COUNT(NewProp_ImpactTimeRange_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpactTimeWeight_MetaData[] = {
				{ "Category", "Crowd" },
				{ "ModuleRelativePath", "Classes/Navigation/CrowdManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ImpactTimeWeight = { UE4CodeGen_Private::EPropertyClass::Float, "ImpactTimeWeight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FCrowdAvoidanceConfig, ImpactTimeWeight), METADATA_PARAMS(NewProp_ImpactTimeWeight_MetaData, ARRAY_COUNT(NewProp_ImpactTimeWeight_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SideBiasWeight_MetaData[] = {
				{ "Category", "Crowd" },
				{ "ModuleRelativePath", "Classes/Navigation/CrowdManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SideBiasWeight = { UE4CodeGen_Private::EPropertyClass::Float, "SideBiasWeight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FCrowdAvoidanceConfig, SideBiasWeight), METADATA_PARAMS(NewProp_SideBiasWeight_MetaData, ARRAY_COUNT(NewProp_SideBiasWeight_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentVelocityWeight_MetaData[] = {
				{ "Category", "Crowd" },
				{ "ModuleRelativePath", "Classes/Navigation/CrowdManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentVelocityWeight = { UE4CodeGen_Private::EPropertyClass::Float, "CurrentVelocityWeight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FCrowdAvoidanceConfig, CurrentVelocityWeight), METADATA_PARAMS(NewProp_CurrentVelocityWeight_MetaData, ARRAY_COUNT(NewProp_CurrentVelocityWeight_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DesiredVelocityWeight_MetaData[] = {
				{ "Category", "Crowd" },
				{ "ModuleRelativePath", "Classes/Navigation/CrowdManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DesiredVelocityWeight = { UE4CodeGen_Private::EPropertyClass::Float, "DesiredVelocityWeight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FCrowdAvoidanceConfig, DesiredVelocityWeight), METADATA_PARAMS(NewProp_DesiredVelocityWeight_MetaData, ARRAY_COUNT(NewProp_DesiredVelocityWeight_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VelocityBias_MetaData[] = {
				{ "Category", "Crowd" },
				{ "ModuleRelativePath", "Classes/Navigation/CrowdManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VelocityBias = { UE4CodeGen_Private::EPropertyClass::Float, "VelocityBias", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FCrowdAvoidanceConfig, VelocityBias), METADATA_PARAMS(NewProp_VelocityBias_MetaData, ARRAY_COUNT(NewProp_VelocityBias_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AdaptiveDepth,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AdaptiveRings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AdaptiveDivisions,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CustomPatternIdx,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ImpactTimeRange,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ImpactTimeWeight,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SideBiasWeight,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurrentVelocityWeight,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DesiredVelocityWeight,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VelocityBias,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"CrowdAvoidanceConfig",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FCrowdAvoidanceConfig),
				alignof(FCrowdAvoidanceConfig),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCrowdAvoidanceConfig_CRC() { return 1935420674U; }
	void UCrowdManager::StaticRegisterNativesUCrowdManager()
	{
	}
	UClass* Z_Construct_UClass_UCrowdManager_NoRegister()
	{
		return UCrowdManager::StaticClass();
	}
	UClass* Z_Construct_UClass_UCrowdManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UCrowdManagerBase,
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Navigation/CrowdManager.h" },
				{ "ModuleRelativePath", "Classes/Navigation/CrowdManager.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bResolveCollisions_MetaData[] = {
				{ "Category", "Config" },
				{ "ModuleRelativePath", "Classes/Navigation/CrowdManager.h" },
				{ "ToolTip", "should crowd simulation resolve collisions between agents? if not, this will be handled by their movement components" },
			};
#endif
			auto NewProp_bResolveCollisions_SetBit = [](void* Obj){ ((UCrowdManager*)Obj)->bResolveCollisions = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bResolveCollisions = { UE4CodeGen_Private::EPropertyClass::Bool, "bResolveCollisions", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UCrowdManager), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bResolveCollisions_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bResolveCollisions_MetaData, ARRAY_COUNT(NewProp_bResolveCollisions_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathOffsetRadiusMultiplier_MetaData[] = {
				{ "Category", "Config" },
				{ "ModuleRelativePath", "Classes/Navigation/CrowdManager.h" },
				{ "ToolTip", "agent radius multiplier for offsetting path around corners" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PathOffsetRadiusMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "PathOffsetRadiusMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000004001, 1, nullptr, STRUCT_OFFSET(UCrowdManager, PathOffsetRadiusMultiplier), METADATA_PARAMS(NewProp_PathOffsetRadiusMultiplier_MetaData, ARRAY_COUNT(NewProp_PathOffsetRadiusMultiplier_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SeparationDirClamp_MetaData[] = {
				{ "Category", "Config" },
				{ "ModuleRelativePath", "Classes/Navigation/CrowdManager.h" },
				{ "ToolTip", "clamp separation force to left/right when neighbor is behind (dot between forward and dirToNei, -1 = disabled)" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SeparationDirClamp = { UE4CodeGen_Private::EPropertyClass::Float, "SeparationDirClamp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000004001, 1, nullptr, STRUCT_OFFSET(UCrowdManager, SeparationDirClamp), METADATA_PARAMS(NewProp_SeparationDirClamp_MetaData, ARRAY_COUNT(NewProp_SeparationDirClamp_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathOptimizationInterval_MetaData[] = {
				{ "Category", "Config" },
				{ "ModuleRelativePath", "Classes/Navigation/CrowdManager.h" },
				{ "ToolTip", "how often should agents try to optimize their paths?" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PathOptimizationInterval = { UE4CodeGen_Private::EPropertyClass::Float, "PathOptimizationInterval", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000004001, 1, nullptr, STRUCT_OFFSET(UCrowdManager, PathOptimizationInterval), METADATA_PARAMS(NewProp_PathOptimizationInterval_MetaData, ARRAY_COUNT(NewProp_PathOptimizationInterval_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavmeshCheckInterval_MetaData[] = {
				{ "Category", "Config" },
				{ "ModuleRelativePath", "Classes/Navigation/CrowdManager.h" },
				{ "ToolTip", "how often should agents check their position after moving off navmesh?" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NavmeshCheckInterval = { UE4CodeGen_Private::EPropertyClass::Float, "NavmeshCheckInterval", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000004001, 1, nullptr, STRUCT_OFFSET(UCrowdManager, NavmeshCheckInterval), METADATA_PARAMS(NewProp_NavmeshCheckInterval_MetaData, ARRAY_COUNT(NewProp_NavmeshCheckInterval_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAvoidedWalls_MetaData[] = {
				{ "Category", "Config" },
				{ "ModuleRelativePath", "Classes/Navigation/CrowdManager.h" },
				{ "ToolTip", "max number of wall segments for velocity avoidance" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxAvoidedWalls = { UE4CodeGen_Private::EPropertyClass::Int, "MaxAvoidedWalls", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000004001, 1, nullptr, STRUCT_OFFSET(UCrowdManager, MaxAvoidedWalls), METADATA_PARAMS(NewProp_MaxAvoidedWalls_MetaData, ARRAY_COUNT(NewProp_MaxAvoidedWalls_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAvoidedAgents_MetaData[] = {
				{ "Category", "Config" },
				{ "ModuleRelativePath", "Classes/Navigation/CrowdManager.h" },
				{ "ToolTip", "max number of neighbor agents for velocity avoidance" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxAvoidedAgents = { UE4CodeGen_Private::EPropertyClass::Int, "MaxAvoidedAgents", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000004001, 1, nullptr, STRUCT_OFFSET(UCrowdManager, MaxAvoidedAgents), METADATA_PARAMS(NewProp_MaxAvoidedAgents_MetaData, ARRAY_COUNT(NewProp_MaxAvoidedAgents_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAgentRadius_MetaData[] = {
				{ "Category", "Config" },
				{ "ModuleRelativePath", "Classes/Navigation/CrowdManager.h" },
				{ "ToolTip", "max radius of agent that can be added to crowd" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxAgentRadius = { UE4CodeGen_Private::EPropertyClass::Float, "MaxAgentRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000004001, 1, nullptr, STRUCT_OFFSET(UCrowdManager, MaxAgentRadius), METADATA_PARAMS(NewProp_MaxAgentRadius_MetaData, ARRAY_COUNT(NewProp_MaxAgentRadius_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAgents_MetaData[] = {
				{ "Category", "Config" },
				{ "ModuleRelativePath", "Classes/Navigation/CrowdManager.h" },
				{ "ToolTip", "max number of agents supported by crowd" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxAgents = { UE4CodeGen_Private::EPropertyClass::Int, "MaxAgents", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000004001, 1, nullptr, STRUCT_OFFSET(UCrowdManager, MaxAgents), METADATA_PARAMS(NewProp_MaxAgents_MetaData, ARRAY_COUNT(NewProp_MaxAgents_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SamplingPatterns_MetaData[] = {
				{ "Category", "Config" },
				{ "ModuleRelativePath", "Classes/Navigation/CrowdManager.h" },
				{ "ToolTip", "obstacle avoidance params" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SamplingPatterns = { UE4CodeGen_Private::EPropertyClass::Array, "SamplingPatterns", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000004001, 1, nullptr, STRUCT_OFFSET(UCrowdManager, SamplingPatterns), METADATA_PARAMS(NewProp_SamplingPatterns_MetaData, ARRAY_COUNT(NewProp_SamplingPatterns_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SamplingPatterns_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "SamplingPatterns", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000004000, 1, nullptr, 0, Z_Construct_UScriptStruct_FCrowdAvoidanceSamplingPattern, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AvoidanceConfig_MetaData[] = {
				{ "Category", "Config" },
				{ "ModuleRelativePath", "Classes/Navigation/CrowdManager.h" },
				{ "ToolTip", "obstacle avoidance params" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AvoidanceConfig = { UE4CodeGen_Private::EPropertyClass::Array, "AvoidanceConfig", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000004001, 1, nullptr, STRUCT_OFFSET(UCrowdManager, AvoidanceConfig), METADATA_PARAMS(NewProp_AvoidanceConfig_MetaData, ARRAY_COUNT(NewProp_AvoidanceConfig_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AvoidanceConfig_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "AvoidanceConfig", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000004000, 1, nullptr, 0, Z_Construct_UScriptStruct_FCrowdAvoidanceConfig, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyNavData_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Navigation/CrowdManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyNavData = { UE4CodeGen_Private::EPropertyClass::Object, "MyNavData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000002000, 1, nullptr, STRUCT_OFFSET(UCrowdManager, MyNavData), Z_Construct_UClass_ANavigationData_NoRegister, METADATA_PARAMS(NewProp_MyNavData_MetaData, ARRAY_COUNT(NewProp_MyNavData_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bResolveCollisions,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PathOffsetRadiusMultiplier,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SeparationDirClamp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PathOptimizationInterval,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NavmeshCheckInterval,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxAvoidedWalls,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxAvoidedAgents,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxAgentRadius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxAgents,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SamplingPatterns,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SamplingPatterns_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AvoidanceConfig,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AvoidanceConfig_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MyNavData,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UCrowdManager>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UCrowdManager::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x0010008Eu,
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
	IMPLEMENT_CLASS(UCrowdManager, 2934629959);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCrowdManager(Z_Construct_UClass_UCrowdManager, &UCrowdManager::StaticClass, TEXT("/Script/AIModule"), TEXT("UCrowdManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCrowdManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
