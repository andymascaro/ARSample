// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ANavigationData;
class UObject;
struct FVector;
class UNavigationQueryFilter;
class ANavMeshBoundsVolume;
enum class ENavDataGatheringModeConfig : uint8;
class AActor;
class AController;
class UNavigationPath;
class UNavigationSystem;
#ifdef ENGINE_NavigationSystem_generated_h
#error "NavigationSystem.generated.h already included, missing '#pragma once' in NavigationSystem.h"
#endif
#define ENGINE_NavigationSystem_generated_h

#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationSystem_h_44_DELEGATE \
struct _Script_Engine_eventOnNavDataGenerigEvent_Parms \
{ \
	ANavigationData* NavData; \
}; \
static inline void FOnNavDataGenerigEvent_DelegateWrapper(const FMulticastScriptDelegate& OnNavDataGenerigEvent, ANavigationData* NavData) \
{ \
	_Script_Engine_eventOnNavDataGenerigEvent_Parms Parms; \
	Parms.NavData=NavData; \
	OnNavDataGenerigEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationSystem_h_154_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetRandomPointInNavigableRadius) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Origin); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_OBJECT(ANavigationData,Z_Param_NavData); \
		P_GET_OBJECT(UClass,Z_Param_FilterClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UNavigationSystem::GetRandomPointInNavigableRadius(Z_Param_WorldContextObject,Z_Param_Out_Origin,Z_Param_Radius,Z_Param_NavData,Z_Param_FilterClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRandomReachablePointInRadius) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Origin); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_OBJECT(ANavigationData,Z_Param_NavData); \
		P_GET_OBJECT(UClass,Z_Param_FilterClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UNavigationSystem::GetRandomReachablePointInRadius(Z_Param_WorldContextObject,Z_Param_Out_Origin,Z_Param_Radius,Z_Param_NavData,Z_Param_FilterClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execProjectPointToNavigation) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Point); \
		P_GET_OBJECT(ANavigationData,Z_Param_NavData); \
		P_GET_OBJECT(UClass,Z_Param_FilterClass); \
		P_GET_STRUCT(FVector,Z_Param_QueryExtent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UNavigationSystem::ProjectPointToNavigation(Z_Param_WorldContextObject,Z_Param_Out_Point,Z_Param_NavData,Z_Param_FilterClass,Z_Param_QueryExtent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnNavigationBoundsUpdated) \
	{ \
		P_GET_OBJECT(ANavMeshBoundsVolume,Z_Param_NavVolume); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnNavigationBoundsUpdated(Z_Param_NavVolume); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGeometryGatheringMode) \
	{ \
		P_GET_ENUM(ENavDataGatheringModeConfig,Z_Param_NewMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetGeometryGatheringMode(ENavDataGatheringModeConfig(Z_Param_NewMode)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnregisterNavigationInvoker) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Invoker); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->UnregisterNavigationInvoker(Z_Param_Invoker); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRegisterNavigationInvoker) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Invoker); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TileGenerationRadius); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TileRemovalRadius); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->RegisterNavigationInvoker(Z_Param_Invoker,Z_Param_TileGenerationRadius,Z_Param_TileRemovalRadius); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetMaxSimultaneousTileGenerationJobsCount) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ResetMaxSimultaneousTileGenerationJobsCount(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMaxSimultaneousTileGenerationJobsCount) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_MaxNumberOfJobs); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetMaxSimultaneousTileGenerationJobsCount(Z_Param_MaxNumberOfJobs); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNavigationRaycast) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_RayStart); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_RayEnd); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_HitLocation); \
		P_GET_OBJECT(UClass,Z_Param_FilterClass); \
		P_GET_OBJECT(AController,Z_Param_Querier); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UNavigationSystem::NavigationRaycast(Z_Param_WorldContextObject,Z_Param_Out_RayStart,Z_Param_Out_RayEnd,Z_Param_Out_HitLocation,Z_Param_FilterClass,Z_Param_Querier); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindPathToActorSynchronously) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_PathStart); \
		P_GET_OBJECT(AActor,Z_Param_GoalActor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TetherDistance); \
		P_GET_OBJECT(AActor,Z_Param_PathfindingContext); \
		P_GET_OBJECT(UClass,Z_Param_FilterClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UNavigationPath**)Z_Param__Result=UNavigationSystem::FindPathToActorSynchronously(Z_Param_WorldContextObject,Z_Param_Out_PathStart,Z_Param_GoalActor,Z_Param_TetherDistance,Z_Param_PathfindingContext,Z_Param_FilterClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindPathToLocationSynchronously) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_PathStart); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_PathEnd); \
		P_GET_OBJECT(AActor,Z_Param_PathfindingContext); \
		P_GET_OBJECT(UClass,Z_Param_FilterClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UNavigationPath**)Z_Param__Result=UNavigationSystem::FindPathToLocationSynchronously(Z_Param_WorldContextObject,Z_Param_Out_PathStart,Z_Param_Out_PathEnd,Z_Param_PathfindingContext,Z_Param_FilterClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSimpleMoveToLocation) \
	{ \
		P_GET_OBJECT(AController,Z_Param_Controller); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Goal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UNavigationSystem::SimpleMoveToLocation(Z_Param_Controller,Z_Param_Out_Goal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSimpleMoveToActor) \
	{ \
		P_GET_OBJECT(AController,Z_Param_Controller); \
		P_GET_OBJECT(AActor,Z_Param_Goal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UNavigationSystem::SimpleMoveToActor(Z_Param_Controller,Z_Param_Goal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsNavigationBeingBuiltOrLocked) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UNavigationSystem::IsNavigationBeingBuiltOrLocked(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsNavigationBeingBuilt) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UNavigationSystem::IsNavigationBeingBuilt(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPathLength) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_PathStart); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_PathEnd); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_PathLength); \
		P_GET_OBJECT(ANavigationData,Z_Param_NavData); \
		P_GET_OBJECT(UClass,Z_Param_FilterClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<ENavigationQueryResult::Type>*)Z_Param__Result=UNavigationSystem::GetPathLength(Z_Param_WorldContextObject,Z_Param_Out_PathStart,Z_Param_Out_PathEnd,Z_Param_Out_PathLength,Z_Param_NavData,Z_Param_FilterClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPathCost) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_PathStart); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_PathEnd); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_PathCost); \
		P_GET_OBJECT(ANavigationData,Z_Param_NavData); \
		P_GET_OBJECT(UClass,Z_Param_FilterClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<ENavigationQueryResult::Type>*)Z_Param__Result=UNavigationSystem::GetPathCost(Z_Param_WorldContextObject,Z_Param_Out_PathStart,Z_Param_Out_PathEnd,Z_Param_Out_PathCost,Z_Param_NavData,Z_Param_FilterClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_GetRandomPointInNavigableRadius) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Origin); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_RandomLocation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_OBJECT(ANavigationData,Z_Param_NavData); \
		P_GET_OBJECT(UClass,Z_Param_FilterClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UNavigationSystem::K2_GetRandomPointInNavigableRadius(Z_Param_WorldContextObject,Z_Param_Out_Origin,Z_Param_Out_RandomLocation,Z_Param_Radius,Z_Param_NavData,Z_Param_FilterClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_GetRandomReachablePointInRadius) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Origin); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_RandomLocation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_OBJECT(ANavigationData,Z_Param_NavData); \
		P_GET_OBJECT(UClass,Z_Param_FilterClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UNavigationSystem::K2_GetRandomReachablePointInRadius(Z_Param_WorldContextObject,Z_Param_Out_Origin,Z_Param_Out_RandomLocation,Z_Param_Radius,Z_Param_NavData,Z_Param_FilterClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_ProjectPointToNavigation) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Point); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ProjectedLocation); \
		P_GET_OBJECT(ANavigationData,Z_Param_NavData); \
		P_GET_OBJECT(UClass,Z_Param_FilterClass); \
		P_GET_STRUCT(FVector,Z_Param_QueryExtent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UNavigationSystem::K2_ProjectPointToNavigation(Z_Param_WorldContextObject,Z_Param_Out_Point,Z_Param_Out_ProjectedLocation,Z_Param_NavData,Z_Param_FilterClass,Z_Param_QueryExtent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNavigationSystem) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UNavigationSystem**)Z_Param__Result=UNavigationSystem::GetNavigationSystem(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationSystem_h_154_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetRandomPointInNavigableRadius) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Origin); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_OBJECT(ANavigationData,Z_Param_NavData); \
		P_GET_OBJECT(UClass,Z_Param_FilterClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UNavigationSystem::GetRandomPointInNavigableRadius(Z_Param_WorldContextObject,Z_Param_Out_Origin,Z_Param_Radius,Z_Param_NavData,Z_Param_FilterClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRandomReachablePointInRadius) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Origin); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_OBJECT(ANavigationData,Z_Param_NavData); \
		P_GET_OBJECT(UClass,Z_Param_FilterClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UNavigationSystem::GetRandomReachablePointInRadius(Z_Param_WorldContextObject,Z_Param_Out_Origin,Z_Param_Radius,Z_Param_NavData,Z_Param_FilterClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execProjectPointToNavigation) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Point); \
		P_GET_OBJECT(ANavigationData,Z_Param_NavData); \
		P_GET_OBJECT(UClass,Z_Param_FilterClass); \
		P_GET_STRUCT(FVector,Z_Param_QueryExtent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UNavigationSystem::ProjectPointToNavigation(Z_Param_WorldContextObject,Z_Param_Out_Point,Z_Param_NavData,Z_Param_FilterClass,Z_Param_QueryExtent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnNavigationBoundsUpdated) \
	{ \
		P_GET_OBJECT(ANavMeshBoundsVolume,Z_Param_NavVolume); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnNavigationBoundsUpdated(Z_Param_NavVolume); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGeometryGatheringMode) \
	{ \
		P_GET_ENUM(ENavDataGatheringModeConfig,Z_Param_NewMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetGeometryGatheringMode(ENavDataGatheringModeConfig(Z_Param_NewMode)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnregisterNavigationInvoker) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Invoker); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->UnregisterNavigationInvoker(Z_Param_Invoker); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRegisterNavigationInvoker) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Invoker); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TileGenerationRadius); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TileRemovalRadius); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->RegisterNavigationInvoker(Z_Param_Invoker,Z_Param_TileGenerationRadius,Z_Param_TileRemovalRadius); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetMaxSimultaneousTileGenerationJobsCount) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ResetMaxSimultaneousTileGenerationJobsCount(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMaxSimultaneousTileGenerationJobsCount) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_MaxNumberOfJobs); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetMaxSimultaneousTileGenerationJobsCount(Z_Param_MaxNumberOfJobs); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNavigationRaycast) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_RayStart); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_RayEnd); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_HitLocation); \
		P_GET_OBJECT(UClass,Z_Param_FilterClass); \
		P_GET_OBJECT(AController,Z_Param_Querier); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UNavigationSystem::NavigationRaycast(Z_Param_WorldContextObject,Z_Param_Out_RayStart,Z_Param_Out_RayEnd,Z_Param_Out_HitLocation,Z_Param_FilterClass,Z_Param_Querier); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindPathToActorSynchronously) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_PathStart); \
		P_GET_OBJECT(AActor,Z_Param_GoalActor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TetherDistance); \
		P_GET_OBJECT(AActor,Z_Param_PathfindingContext); \
		P_GET_OBJECT(UClass,Z_Param_FilterClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UNavigationPath**)Z_Param__Result=UNavigationSystem::FindPathToActorSynchronously(Z_Param_WorldContextObject,Z_Param_Out_PathStart,Z_Param_GoalActor,Z_Param_TetherDistance,Z_Param_PathfindingContext,Z_Param_FilterClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindPathToLocationSynchronously) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_PathStart); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_PathEnd); \
		P_GET_OBJECT(AActor,Z_Param_PathfindingContext); \
		P_GET_OBJECT(UClass,Z_Param_FilterClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UNavigationPath**)Z_Param__Result=UNavigationSystem::FindPathToLocationSynchronously(Z_Param_WorldContextObject,Z_Param_Out_PathStart,Z_Param_Out_PathEnd,Z_Param_PathfindingContext,Z_Param_FilterClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSimpleMoveToLocation) \
	{ \
		P_GET_OBJECT(AController,Z_Param_Controller); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Goal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UNavigationSystem::SimpleMoveToLocation(Z_Param_Controller,Z_Param_Out_Goal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSimpleMoveToActor) \
	{ \
		P_GET_OBJECT(AController,Z_Param_Controller); \
		P_GET_OBJECT(AActor,Z_Param_Goal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UNavigationSystem::SimpleMoveToActor(Z_Param_Controller,Z_Param_Goal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsNavigationBeingBuiltOrLocked) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UNavigationSystem::IsNavigationBeingBuiltOrLocked(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsNavigationBeingBuilt) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UNavigationSystem::IsNavigationBeingBuilt(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPathLength) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_PathStart); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_PathEnd); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_PathLength); \
		P_GET_OBJECT(ANavigationData,Z_Param_NavData); \
		P_GET_OBJECT(UClass,Z_Param_FilterClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<ENavigationQueryResult::Type>*)Z_Param__Result=UNavigationSystem::GetPathLength(Z_Param_WorldContextObject,Z_Param_Out_PathStart,Z_Param_Out_PathEnd,Z_Param_Out_PathLength,Z_Param_NavData,Z_Param_FilterClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPathCost) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_PathStart); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_PathEnd); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_PathCost); \
		P_GET_OBJECT(ANavigationData,Z_Param_NavData); \
		P_GET_OBJECT(UClass,Z_Param_FilterClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<ENavigationQueryResult::Type>*)Z_Param__Result=UNavigationSystem::GetPathCost(Z_Param_WorldContextObject,Z_Param_Out_PathStart,Z_Param_Out_PathEnd,Z_Param_Out_PathCost,Z_Param_NavData,Z_Param_FilterClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_GetRandomPointInNavigableRadius) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Origin); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_RandomLocation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_OBJECT(ANavigationData,Z_Param_NavData); \
		P_GET_OBJECT(UClass,Z_Param_FilterClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UNavigationSystem::K2_GetRandomPointInNavigableRadius(Z_Param_WorldContextObject,Z_Param_Out_Origin,Z_Param_Out_RandomLocation,Z_Param_Radius,Z_Param_NavData,Z_Param_FilterClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_GetRandomReachablePointInRadius) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Origin); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_RandomLocation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_OBJECT(ANavigationData,Z_Param_NavData); \
		P_GET_OBJECT(UClass,Z_Param_FilterClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UNavigationSystem::K2_GetRandomReachablePointInRadius(Z_Param_WorldContextObject,Z_Param_Out_Origin,Z_Param_Out_RandomLocation,Z_Param_Radius,Z_Param_NavData,Z_Param_FilterClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_ProjectPointToNavigation) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Point); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ProjectedLocation); \
		P_GET_OBJECT(ANavigationData,Z_Param_NavData); \
		P_GET_OBJECT(UClass,Z_Param_FilterClass); \
		P_GET_STRUCT(FVector,Z_Param_QueryExtent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UNavigationSystem::K2_ProjectPointToNavigation(Z_Param_WorldContextObject,Z_Param_Out_Point,Z_Param_Out_ProjectedLocation,Z_Param_NavData,Z_Param_FilterClass,Z_Param_QueryExtent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNavigationSystem) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UNavigationSystem**)Z_Param__Result=UNavigationSystem::GetNavigationSystem(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationSystem_h_154_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNavigationSystem(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UNavigationSystem(); \
public: \
	DECLARE_CLASS(UNavigationSystem, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), 0, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UNavigationSystem) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	DECLARE_WITHIN(UWorld) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationSystem_h_154_INCLASS \
private: \
	static void StaticRegisterNativesUNavigationSystem(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UNavigationSystem(); \
public: \
	DECLARE_CLASS(UNavigationSystem, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), 0, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UNavigationSystem) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	DECLARE_WITHIN(UWorld) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationSystem_h_154_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNavigationSystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavigationSystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNavigationSystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavigationSystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNavigationSystem(UNavigationSystem&&); \
	NO_API UNavigationSystem(const UNavigationSystem&); \
public:


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationSystem_h_154_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNavigationSystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNavigationSystem(UNavigationSystem&&); \
	NO_API UNavigationSystem(const UNavigationSystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNavigationSystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavigationSystem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavigationSystem)


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationSystem_h_154_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CrowdManagerClass() { return STRUCT_OFFSET(UNavigationSystem, CrowdManagerClass); } \
	FORCEINLINE static uint32 __PPO__DataGatheringMode() { return STRUCT_OFFSET(UNavigationSystem, DataGatheringMode); } \
	FORCEINLINE static uint32 __PPO__ActiveTilesUpdateInterval() { return STRUCT_OFFSET(UNavigationSystem, ActiveTilesUpdateInterval); } \
	FORCEINLINE static uint32 __PPO__SupportedAgents() { return STRUCT_OFFSET(UNavigationSystem, SupportedAgents); } \
	FORCEINLINE static uint32 __PPO__OperationMode() { return STRUCT_OFFSET(UNavigationSystem, OperationMode); }


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationSystem_h_151_PROLOG
#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationSystem_h_154_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationSystem_h_154_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationSystem_h_154_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationSystem_h_154_INCLASS \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationSystem_h_154_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationSystem_h_154_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationSystem_h_154_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationSystem_h_154_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationSystem_h_154_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationSystem_h_154_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class NavigationSystem."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationSystem_h


#define FOREACH_ENUM_FNAVIGATIONSYSTEMRUNMODE(op) \
	op(FNavigationSystemRunMode::InvalidMode) \
	op(FNavigationSystemRunMode::GameMode) \
	op(FNavigationSystemRunMode::EditorMode) \
	op(FNavigationSystemRunMode::SimulationMode) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
