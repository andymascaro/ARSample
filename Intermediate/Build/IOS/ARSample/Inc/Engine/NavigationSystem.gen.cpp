// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/AI/Navigation/NavigationSystem.h"
#include "Classes/Engine/World.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavigationSystem() {}
// Cross Module References
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnNavDataGenerigEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_ANavigationData_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_FNavigationSystemRunMode();
	ENGINE_API UClass* Z_Construct_UClass_UNavigationSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNavigationSystem();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UFunction* Z_Construct_UFunction_UNavigationSystem_FindPathToActorSynchronously();
	ENGINE_API UClass* Z_Construct_UClass_UNavigationPath_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UNavigationQueryFilter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_UNavigationSystem_FindPathToLocationSynchronously();
	ENGINE_API UFunction* Z_Construct_UFunction_UNavigationSystem_GetNavigationSystem();
	ENGINE_API UFunction* Z_Construct_UFunction_UNavigationSystem_GetPathCost();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ENavigationQueryResult();
	ENGINE_API UFunction* Z_Construct_UFunction_UNavigationSystem_GetPathLength();
	ENGINE_API UFunction* Z_Construct_UFunction_UNavigationSystem_GetRandomPointInNavigableRadius();
	ENGINE_API UFunction* Z_Construct_UFunction_UNavigationSystem_GetRandomReachablePointInRadius();
	ENGINE_API UFunction* Z_Construct_UFunction_UNavigationSystem_IsNavigationBeingBuilt();
	ENGINE_API UFunction* Z_Construct_UFunction_UNavigationSystem_IsNavigationBeingBuiltOrLocked();
	ENGINE_API UFunction* Z_Construct_UFunction_UNavigationSystem_K2_GetRandomPointInNavigableRadius();
	ENGINE_API UFunction* Z_Construct_UFunction_UNavigationSystem_K2_GetRandomReachablePointInRadius();
	ENGINE_API UFunction* Z_Construct_UFunction_UNavigationSystem_K2_ProjectPointToNavigation();
	ENGINE_API UFunction* Z_Construct_UFunction_UNavigationSystem_NavigationRaycast();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_UNavigationSystem_OnNavigationBoundsUpdated();
	ENGINE_API UClass* Z_Construct_UClass_ANavMeshBoundsVolume_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_UNavigationSystem_ProjectPointToNavigation();
	ENGINE_API UFunction* Z_Construct_UFunction_UNavigationSystem_RegisterNavigationInvoker();
	ENGINE_API UFunction* Z_Construct_UFunction_UNavigationSystem_ResetMaxSimultaneousTileGenerationJobsCount();
	ENGINE_API UFunction* Z_Construct_UFunction_UNavigationSystem_SetGeometryGatheringMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ENavDataGatheringModeConfig();
	ENGINE_API UFunction* Z_Construct_UFunction_UNavigationSystem_SetMaxSimultaneousTileGenerationJobsCount();
	ENGINE_API UFunction* Z_Construct_UFunction_UNavigationSystem_SimpleMoveToActor();
	ENGINE_API UFunction* Z_Construct_UFunction_UNavigationSystem_SimpleMoveToLocation();
	ENGINE_API UFunction* Z_Construct_UFunction_UNavigationSystem_UnregisterNavigationInvoker();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNavDataConfig();
	ENGINE_API UClass* Z_Construct_UClass_UCrowdManagerBase_NoRegister();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_Engine_OnNavDataGenerigEvent__DelegateSignature()
	{
		struct _Script_Engine_eventOnNavDataGenerigEvent_Parms
		{
			ANavigationData* NavData;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NavData = { UE4CodeGen_Private::EPropertyClass::Object, "NavData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_Engine_eventOnNavDataGenerigEvent_Parms, NavData), Z_Construct_UClass_ANavigationData_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NavData,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationSystem.h" },
				{ "ToolTip", "Delegate to let interested parties know that Nav Data has been registered" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, "OnNavDataGenerigEvent__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_Engine_eventOnNavDataGenerigEvent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* FNavigationSystemRunMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_FNavigationSystemRunMode, Z_Construct_UPackage__Script_Engine(), TEXT("FNavigationSystemRunMode"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_FNavigationSystemRunMode(FNavigationSystemRunMode_StaticEnum, TEXT("/Script/Engine"), TEXT("FNavigationSystemRunMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_FNavigationSystemRunMode_CRC() { return 2746379459U; }
	UEnum* Z_Construct_UEnum_Engine_FNavigationSystemRunMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("FNavigationSystemRunMode"), 0, Get_Z_Construct_UEnum_Engine_FNavigationSystemRunMode_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "FNavigationSystemRunMode::InvalidMode", (int64)FNavigationSystemRunMode::InvalidMode },
				{ "FNavigationSystemRunMode::GameMode", (int64)FNavigationSystemRunMode::GameMode },
				{ "FNavigationSystemRunMode::EditorMode", (int64)FNavigationSystemRunMode::EditorMode },
				{ "FNavigationSystemRunMode::SimulationMode", (int64)FNavigationSystemRunMode::SimulationMode },
				{ "FNavigationSystemRunMode::PIEMode", (int64)FNavigationSystemRunMode::PIEMode },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationSystem.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"FNavigationSystemRunMode",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"FNavigationSystemRunMode",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UNavigationSystem::StaticRegisterNativesUNavigationSystem()
	{
		UClass* Class = UNavigationSystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindPathToActorSynchronously", (Native)&UNavigationSystem::execFindPathToActorSynchronously },
			{ "FindPathToLocationSynchronously", (Native)&UNavigationSystem::execFindPathToLocationSynchronously },
			{ "GetNavigationSystem", (Native)&UNavigationSystem::execGetNavigationSystem },
			{ "GetPathCost", (Native)&UNavigationSystem::execGetPathCost },
			{ "GetPathLength", (Native)&UNavigationSystem::execGetPathLength },
			{ "GetRandomPointInNavigableRadius", (Native)&UNavigationSystem::execGetRandomPointInNavigableRadius },
			{ "GetRandomReachablePointInRadius", (Native)&UNavigationSystem::execGetRandomReachablePointInRadius },
			{ "IsNavigationBeingBuilt", (Native)&UNavigationSystem::execIsNavigationBeingBuilt },
			{ "IsNavigationBeingBuiltOrLocked", (Native)&UNavigationSystem::execIsNavigationBeingBuiltOrLocked },
			{ "K2_GetRandomPointInNavigableRadius", (Native)&UNavigationSystem::execK2_GetRandomPointInNavigableRadius },
			{ "K2_GetRandomReachablePointInRadius", (Native)&UNavigationSystem::execK2_GetRandomReachablePointInRadius },
			{ "K2_ProjectPointToNavigation", (Native)&UNavigationSystem::execK2_ProjectPointToNavigation },
			{ "NavigationRaycast", (Native)&UNavigationSystem::execNavigationRaycast },
			{ "OnNavigationBoundsUpdated", (Native)&UNavigationSystem::execOnNavigationBoundsUpdated },
			{ "ProjectPointToNavigation", (Native)&UNavigationSystem::execProjectPointToNavigation },
			{ "RegisterNavigationInvoker", (Native)&UNavigationSystem::execRegisterNavigationInvoker },
			{ "ResetMaxSimultaneousTileGenerationJobsCount", (Native)&UNavigationSystem::execResetMaxSimultaneousTileGenerationJobsCount },
			{ "SetGeometryGatheringMode", (Native)&UNavigationSystem::execSetGeometryGatheringMode },
			{ "SetMaxSimultaneousTileGenerationJobsCount", (Native)&UNavigationSystem::execSetMaxSimultaneousTileGenerationJobsCount },
			{ "SimpleMoveToActor", (Native)&UNavigationSystem::execSimpleMoveToActor },
			{ "SimpleMoveToLocation", (Native)&UNavigationSystem::execSimpleMoveToLocation },
			{ "UnregisterNavigationInvoker", (Native)&UNavigationSystem::execUnregisterNavigationInvoker },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UNavigationSystem_FindPathToActorSynchronously()
	{
		struct NavigationSystem_eventFindPathToActorSynchronously_Parms
		{
			UObject* WorldContextObject;
			FVector PathStart;
			AActor* GoalActor;
			float TetherDistance;
			AActor* PathfindingContext;
			TSubclassOf<UNavigationQueryFilter>  FilterClass;
			UNavigationPath* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(NavigationSystem_eventFindPathToActorSynchronously_Parms, ReturnValue), Z_Construct_UClass_UNavigationPath_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_FilterClass = { UE4CodeGen_Private::EPropertyClass::Class, "FilterClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000080, 1, nullptr, STRUCT_OFFSET(NavigationSystem_eventFindPathToActorSynchronously_Parms, FilterClass), Z_Construct_UClass_UNavigationQueryFilter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PathfindingContext = { UE4CodeGen_Private::EPropertyClass::Object, "PathfindingContext", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavigationSystem_eventFindPathToActorSynchronously_Parms, PathfindingContext), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TetherDistance = { UE4CodeGen_Private::EPropertyClass::Float, "TetherDistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavigationSystem_eventFindPathToActorSynchronously_Parms, TetherDistance), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GoalActor = { UE4CodeGen_Private::EPropertyClass::Object, "GoalActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavigationSystem_eventFindPathToActorSynchronously_Parms, GoalActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathStart_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PathStart = { UE4CodeGen_Private::EPropertyClass::Struct, "PathStart", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(NavigationSystem_eventFindPathToActorSynchronously_Parms, PathStart), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_PathStart_MetaData, ARRAY_COUNT(NewProp_PathStart_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavigationSystem_eventFindPathToActorSynchronously_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FilterClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PathfindingContext,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TetherDistance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GoalActor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PathStart,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|Navigation" },
				{ "CPP_Default_TetherDistance", "50.000000" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationSystem.h" },
				{ "ToolTip", "Finds path instantly, in a FindPath Synchronously. Main advantage over FindPathToLocationSynchronously is that\n    the resulting path will automatically get updated if goal actor moves more than TetherDistance away from last path node\n    @param PathfindingContext could be one of following: NavigationData (like Navmesh actor), Pawn or Controller. This parameter determines parameters of specific pathfinding query" },
				{ "WorldContext", "WorldContextObject" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationSystem, "FindPathToActorSynchronously", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C22401, sizeof(NavigationSystem_eventFindPathToActorSynchronously_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UNavigationSystem_FindPathToLocationSynchronously()
	{
		struct NavigationSystem_eventFindPathToLocationSynchronously_Parms
		{
			UObject* WorldContextObject;
			FVector PathStart;
			FVector PathEnd;
			AActor* PathfindingContext;
			TSubclassOf<UNavigationQueryFilter>  FilterClass;
			UNavigationPath* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(NavigationSystem_eventFindPathToLocationSynchronously_Parms, ReturnValue), Z_Construct_UClass_UNavigationPath_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_FilterClass = { UE4CodeGen_Private::EPropertyClass::Class, "FilterClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000080, 1, nullptr, STRUCT_OFFSET(NavigationSystem_eventFindPathToLocationSynchronously_Parms, FilterClass), Z_Construct_UClass_UNavigationQueryFilter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PathfindingContext = { UE4CodeGen_Private::EPropertyClass::Object, "PathfindingContext", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavigationSystem_eventFindPathToLocationSynchronously_Parms, PathfindingContext), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathEnd_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PathEnd = { UE4CodeGen_Private::EPropertyClass::Struct, "PathEnd", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(NavigationSystem_eventFindPathToLocationSynchronously_Parms, PathEnd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_PathEnd_MetaData, ARRAY_COUNT(NewProp_PathEnd_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathStart_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PathStart = { UE4CodeGen_Private::EPropertyClass::Struct, "PathStart", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(NavigationSystem_eventFindPathToLocationSynchronously_Parms, PathStart), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_PathStart_MetaData, ARRAY_COUNT(NewProp_PathStart_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavigationSystem_eventFindPathToLocationSynchronously_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FilterClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PathfindingContext,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PathEnd,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PathStart,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|Navigation" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationSystem.h" },
				{ "ToolTip", "Finds path instantly, in a FindPath Synchronously.\n    @param PathfindingContext could be one of following: NavigationData (like Navmesh actor), Pawn or Controller. This parameter determines parameters of specific pathfinding query" },
				{ "WorldContext", "WorldContextObject" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationSystem, "FindPathToLocationSynchronously", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C22401, sizeof(NavigationSystem_eventFindPathToLocationSynchronously_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UNavigationSystem_GetNavigationSystem()
	{
		struct NavigationSystem_eventGetNavigationSystem_Parms
		{
			UObject* WorldContextObject;
			UNavigationSystem* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(NavigationSystem_eventGetNavigationSystem_Parms, ReturnValue), Z_Construct_UClass_UNavigationSystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavigationSystem_eventGetNavigationSystem_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|Navigation" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationSystem.h" },
				{ "ToolTip", "Blueprint functions" },
				{ "WorldContext", "WorldContextObject" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationSystem, "GetNavigationSystem", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(NavigationSystem_eventGetNavigationSystem_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UNavigationSystem_GetPathCost()
	{
		struct NavigationSystem_eventGetPathCost_Parms
		{
			UObject* WorldContextObject;
			FVector PathStart;
			FVector PathEnd;
			float PathCost;
			ANavigationData* NavData;
			TSubclassOf<UNavigationQueryFilter>  FilterClass;
			TEnumAsByte<ENavigationQueryResult::Type> ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Byte, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(NavigationSystem_eventGetPathCost_Parms, ReturnValue), Z_Construct_UEnum_Engine_ENavigationQueryResult, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_FilterClass = { UE4CodeGen_Private::EPropertyClass::Class, "FilterClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000080, 1, nullptr, STRUCT_OFFSET(NavigationSystem_eventGetPathCost_Parms, FilterClass), Z_Construct_UClass_UNavigationQueryFilter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NavData = { UE4CodeGen_Private::EPropertyClass::Object, "NavData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavigationSystem_eventGetPathCost_Parms, NavData), Z_Construct_UClass_ANavigationData_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PathCost = { UE4CodeGen_Private::EPropertyClass::Float, "PathCost", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(NavigationSystem_eventGetPathCost_Parms, PathCost), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathEnd_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PathEnd = { UE4CodeGen_Private::EPropertyClass::Struct, "PathEnd", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(NavigationSystem_eventGetPathCost_Parms, PathEnd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_PathEnd_MetaData, ARRAY_COUNT(NewProp_PathEnd_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathStart_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PathStart = { UE4CodeGen_Private::EPropertyClass::Struct, "PathStart", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(NavigationSystem_eventGetPathCost_Parms, PathStart), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_PathStart_MetaData, ARRAY_COUNT(NewProp_PathStart_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavigationSystem_eventGetPathCost_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FilterClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NavData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PathCost,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PathEnd,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PathStart,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|Navigation" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationSystem.h" },
				{ "ToolTip", "Potentially expensive. Use with caution. Consider using UPathFollowingComponent::GetRemainingPathCost instead" },
				{ "WorldContext", "WorldContextObject" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationSystem, "GetPathCost", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C22401, sizeof(NavigationSystem_eventGetPathCost_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UNavigationSystem_GetPathLength()
	{
		struct NavigationSystem_eventGetPathLength_Parms
		{
			UObject* WorldContextObject;
			FVector PathStart;
			FVector PathEnd;
			float PathLength;
			ANavigationData* NavData;
			TSubclassOf<UNavigationQueryFilter>  FilterClass;
			TEnumAsByte<ENavigationQueryResult::Type> ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Byte, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(NavigationSystem_eventGetPathLength_Parms, ReturnValue), Z_Construct_UEnum_Engine_ENavigationQueryResult, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_FilterClass = { UE4CodeGen_Private::EPropertyClass::Class, "FilterClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000080, 1, nullptr, STRUCT_OFFSET(NavigationSystem_eventGetPathLength_Parms, FilterClass), Z_Construct_UClass_UNavigationQueryFilter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NavData = { UE4CodeGen_Private::EPropertyClass::Object, "NavData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavigationSystem_eventGetPathLength_Parms, NavData), Z_Construct_UClass_ANavigationData_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PathLength = { UE4CodeGen_Private::EPropertyClass::Float, "PathLength", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(NavigationSystem_eventGetPathLength_Parms, PathLength), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathEnd_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PathEnd = { UE4CodeGen_Private::EPropertyClass::Struct, "PathEnd", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(NavigationSystem_eventGetPathLength_Parms, PathEnd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_PathEnd_MetaData, ARRAY_COUNT(NewProp_PathEnd_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathStart_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PathStart = { UE4CodeGen_Private::EPropertyClass::Struct, "PathStart", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(NavigationSystem_eventGetPathLength_Parms, PathStart), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_PathStart_MetaData, ARRAY_COUNT(NewProp_PathStart_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavigationSystem_eventGetPathLength_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FilterClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NavData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PathLength,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PathEnd,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PathStart,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|Navigation" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationSystem.h" },
				{ "ToolTip", "Potentially expensive. Use with caution" },
				{ "WorldContext", "WorldContextObject" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationSystem, "GetPathLength", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C22401, sizeof(NavigationSystem_eventGetPathLength_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UNavigationSystem_GetRandomPointInNavigableRadius()
	{
		struct NavigationSystem_eventGetRandomPointInNavigableRadius_Parms
		{
			UObject* WorldContextObject;
			FVector Origin;
			float Radius;
			ANavigationData* NavData;
			TSubclassOf<UNavigationQueryFilter>  FilterClass;
			FVector ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(NavigationSystem_eventGetRandomPointInNavigableRadius_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_FilterClass = { UE4CodeGen_Private::EPropertyClass::Class, "FilterClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000080, 1, nullptr, STRUCT_OFFSET(NavigationSystem_eventGetRandomPointInNavigableRadius_Parms, FilterClass), Z_Construct_UClass_UNavigationQueryFilter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NavData = { UE4CodeGen_Private::EPropertyClass::Object, "NavData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavigationSystem_eventGetRandomPointInNavigableRadius_Parms, NavData), Z_Construct_UClass_ANavigationData_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius = { UE4CodeGen_Private::EPropertyClass::Float, "Radius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavigationSystem_eventGetRandomPointInNavigableRadius_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Origin = { UE4CodeGen_Private::EPropertyClass::Struct, "Origin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(NavigationSystem_eventGetRandomPointInNavigableRadius_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_Origin_MetaData, ARRAY_COUNT(NewProp_Origin_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavigationSystem_eventGetRandomPointInNavigableRadius_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FilterClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NavData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Radius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Origin,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|Navigation" },
				{ "DeprecatedFunction", "" },
				{ "DeprecationMessage", "This version of GetRandomPointInNavigableRadius is deprecated. Please use the new version" },
				{ "DisplayName", "GetRandomPointInNavigableRadius_DEPRECATED" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationSystem.h" },
				{ "WorldContext", "WorldContextObject" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationSystem, "GetRandomPointInNavigableRadius", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C22401, sizeof(NavigationSystem_eventGetRandomPointInNavigableRadius_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UNavigationSystem_GetRandomReachablePointInRadius()
	{
		struct NavigationSystem_eventGetRandomReachablePointInRadius_Parms
		{
			UObject* WorldContextObject;
			FVector Origin;
			float Radius;
			ANavigationData* NavData;
			TSubclassOf<UNavigationQueryFilter>  FilterClass;
			FVector ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(NavigationSystem_eventGetRandomReachablePointInRadius_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_FilterClass = { UE4CodeGen_Private::EPropertyClass::Class, "FilterClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000080, 1, nullptr, STRUCT_OFFSET(NavigationSystem_eventGetRandomReachablePointInRadius_Parms, FilterClass), Z_Construct_UClass_UNavigationQueryFilter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NavData = { UE4CodeGen_Private::EPropertyClass::Object, "NavData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavigationSystem_eventGetRandomReachablePointInRadius_Parms, NavData), Z_Construct_UClass_ANavigationData_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius = { UE4CodeGen_Private::EPropertyClass::Float, "Radius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavigationSystem_eventGetRandomReachablePointInRadius_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Origin = { UE4CodeGen_Private::EPropertyClass::Struct, "Origin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(NavigationSystem_eventGetRandomReachablePointInRadius_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_Origin_MetaData, ARRAY_COUNT(NewProp_Origin_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavigationSystem_eventGetRandomReachablePointInRadius_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FilterClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NavData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Radius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Origin,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|Navigation" },
				{ "DeprecatedFunction", "" },
				{ "DeprecationMessage", "This version of GetRandomReachablePointInRadius is deprecated. Please use the new version" },
				{ "DisplayName", "GetRandomReachablePointInRadius_DEPRECATED" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationSystem.h" },
				{ "WorldContext", "WorldContextObject" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationSystem, "GetRandomReachablePointInRadius", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C22401, sizeof(NavigationSystem_eventGetRandomReachablePointInRadius_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UNavigationSystem_IsNavigationBeingBuilt()
	{
		struct NavigationSystem_eventIsNavigationBeingBuilt_Parms
		{
			UObject* WorldContextObject;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((NavigationSystem_eventIsNavigationBeingBuilt_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(NavigationSystem_eventIsNavigationBeingBuilt_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavigationSystem_eventIsNavigationBeingBuilt_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|Navigation" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationSystem.h" },
				{ "WorldContext", "WorldContextObject" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationSystem, "IsNavigationBeingBuilt", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(NavigationSystem_eventIsNavigationBeingBuilt_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UNavigationSystem_IsNavigationBeingBuiltOrLocked()
	{
		struct NavigationSystem_eventIsNavigationBeingBuiltOrLocked_Parms
		{
			UObject* WorldContextObject;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((NavigationSystem_eventIsNavigationBeingBuiltOrLocked_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(NavigationSystem_eventIsNavigationBeingBuiltOrLocked_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavigationSystem_eventIsNavigationBeingBuiltOrLocked_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|Navigation" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationSystem.h" },
				{ "WorldContext", "WorldContextObject" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationSystem, "IsNavigationBeingBuiltOrLocked", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(NavigationSystem_eventIsNavigationBeingBuiltOrLocked_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UNavigationSystem_K2_GetRandomPointInNavigableRadius()
	{
		struct NavigationSystem_eventK2_GetRandomPointInNavigableRadius_Parms
		{
			UObject* WorldContextObject;
			FVector Origin;
			FVector RandomLocation;
			float Radius;
			ANavigationData* NavData;
			TSubclassOf<UNavigationQueryFilter>  FilterClass;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((NavigationSystem_eventK2_GetRandomPointInNavigableRadius_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(NavigationSystem_eventK2_GetRandomPointInNavigableRadius_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_FilterClass = { UE4CodeGen_Private::EPropertyClass::Class, "FilterClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000080, 1, nullptr, STRUCT_OFFSET(NavigationSystem_eventK2_GetRandomPointInNavigableRadius_Parms, FilterClass), Z_Construct_UClass_UNavigationQueryFilter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NavData = { UE4CodeGen_Private::EPropertyClass::Object, "NavData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavigationSystem_eventK2_GetRandomPointInNavigableRadius_Parms, NavData), Z_Construct_UClass_ANavigationData_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius = { UE4CodeGen_Private::EPropertyClass::Float, "Radius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavigationSystem_eventK2_GetRandomPointInNavigableRadius_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_RandomLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "RandomLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(NavigationSystem_eventK2_GetRandomPointInNavigableRadius_Parms, RandomLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Origin = { UE4CodeGen_Private::EPropertyClass::Struct, "Origin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(NavigationSystem_eventK2_GetRandomPointInNavigableRadius_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_Origin_MetaData, ARRAY_COUNT(NewProp_Origin_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavigationSystem_eventK2_GetRandomPointInNavigableRadius_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FilterClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NavData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Radius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RandomLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Origin,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|Navigation" },
				{ "DisplayName", "GetRandomPointInNavigableRadius" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationSystem.h" },
				{ "ToolTip", "Generates a random location in navigable space within given radius of Origin.\n    @return Return Value represents if the call was successful" },
				{ "WorldContext", "WorldContextObject" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationSystem, "K2_GetRandomPointInNavigableRadius", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C22401, sizeof(NavigationSystem_eventK2_GetRandomPointInNavigableRadius_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UNavigationSystem_K2_GetRandomReachablePointInRadius()
	{
		struct NavigationSystem_eventK2_GetRandomReachablePointInRadius_Parms
		{
			UObject* WorldContextObject;
			FVector Origin;
			FVector RandomLocation;
			float Radius;
			ANavigationData* NavData;
			TSubclassOf<UNavigationQueryFilter>  FilterClass;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((NavigationSystem_eventK2_GetRandomReachablePointInRadius_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(NavigationSystem_eventK2_GetRandomReachablePointInRadius_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_FilterClass = { UE4CodeGen_Private::EPropertyClass::Class, "FilterClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000080, 1, nullptr, STRUCT_OFFSET(NavigationSystem_eventK2_GetRandomReachablePointInRadius_Parms, FilterClass), Z_Construct_UClass_UNavigationQueryFilter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NavData = { UE4CodeGen_Private::EPropertyClass::Object, "NavData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavigationSystem_eventK2_GetRandomReachablePointInRadius_Parms, NavData), Z_Construct_UClass_ANavigationData_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius = { UE4CodeGen_Private::EPropertyClass::Float, "Radius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavigationSystem_eventK2_GetRandomReachablePointInRadius_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_RandomLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "RandomLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(NavigationSystem_eventK2_GetRandomReachablePointInRadius_Parms, RandomLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Origin = { UE4CodeGen_Private::EPropertyClass::Struct, "Origin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(NavigationSystem_eventK2_GetRandomReachablePointInRadius_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_Origin_MetaData, ARRAY_COUNT(NewProp_Origin_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavigationSystem_eventK2_GetRandomReachablePointInRadius_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FilterClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NavData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Radius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RandomLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Origin,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|Navigation" },
				{ "DisplayName", "GetRandomReachablePointInRadius" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationSystem.h" },
				{ "ToolTip", "Generates a random location reachable from given Origin location.\n    @return Return Value represents if the call was successful" },
				{ "WorldContext", "WorldContextObject" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationSystem, "K2_GetRandomReachablePointInRadius", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C22401, sizeof(NavigationSystem_eventK2_GetRandomReachablePointInRadius_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UNavigationSystem_K2_ProjectPointToNavigation()
	{
		struct NavigationSystem_eventK2_ProjectPointToNavigation_Parms
		{
			UObject* WorldContextObject;
			FVector Point;
			FVector ProjectedLocation;
			ANavigationData* NavData;
			TSubclassOf<UNavigationQueryFilter>  FilterClass;
			FVector QueryExtent;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((NavigationSystem_eventK2_ProjectPointToNavigation_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(NavigationSystem_eventK2_ProjectPointToNavigation_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueryExtent_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_QueryExtent = { UE4CodeGen_Private::EPropertyClass::Struct, "QueryExtent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(NavigationSystem_eventK2_ProjectPointToNavigation_Parms, QueryExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_QueryExtent_MetaData, ARRAY_COUNT(NewProp_QueryExtent_MetaData)) };
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_FilterClass = { UE4CodeGen_Private::EPropertyClass::Class, "FilterClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000080, 1, nullptr, STRUCT_OFFSET(NavigationSystem_eventK2_ProjectPointToNavigation_Parms, FilterClass), Z_Construct_UClass_UNavigationQueryFilter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NavData = { UE4CodeGen_Private::EPropertyClass::Object, "NavData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavigationSystem_eventK2_ProjectPointToNavigation_Parms, NavData), Z_Construct_UClass_ANavigationData_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProjectedLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "ProjectedLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(NavigationSystem_eventK2_ProjectPointToNavigation_Parms, ProjectedLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Point_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Point = { UE4CodeGen_Private::EPropertyClass::Struct, "Point", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(NavigationSystem_eventK2_ProjectPointToNavigation_Parms, Point), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_Point_MetaData, ARRAY_COUNT(NewProp_Point_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavigationSystem_eventK2_ProjectPointToNavigation_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_QueryExtent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FilterClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NavData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ProjectedLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Point,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|Navigation" },
				{ "DisplayName", "ProjectPointToNavigation" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationSystem.h" },
				{ "ToolTip", "Project a point onto the NavigationData" },
				{ "WorldContext", "WorldContextObject" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationSystem, "K2_ProjectPointToNavigation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C22401, sizeof(NavigationSystem_eventK2_ProjectPointToNavigation_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UNavigationSystem_NavigationRaycast()
	{
		struct NavigationSystem_eventNavigationRaycast_Parms
		{
			UObject* WorldContextObject;
			FVector RayStart;
			FVector RayEnd;
			FVector HitLocation;
			TSubclassOf<UNavigationQueryFilter>  FilterClass;
			AController* Querier;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((NavigationSystem_eventNavigationRaycast_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(NavigationSystem_eventNavigationRaycast_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Querier = { UE4CodeGen_Private::EPropertyClass::Object, "Querier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavigationSystem_eventNavigationRaycast_Parms, Querier), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_FilterClass = { UE4CodeGen_Private::EPropertyClass::Class, "FilterClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000080, 1, nullptr, STRUCT_OFFSET(NavigationSystem_eventNavigationRaycast_Parms, FilterClass), Z_Construct_UClass_UNavigationQueryFilter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "HitLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(NavigationSystem_eventNavigationRaycast_Parms, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RayEnd_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_RayEnd = { UE4CodeGen_Private::EPropertyClass::Struct, "RayEnd", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(NavigationSystem_eventNavigationRaycast_Parms, RayEnd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_RayEnd_MetaData, ARRAY_COUNT(NewProp_RayEnd_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RayStart_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_RayStart = { UE4CodeGen_Private::EPropertyClass::Struct, "RayStart", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(NavigationSystem_eventNavigationRaycast_Parms, RayStart), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_RayStart_MetaData, ARRAY_COUNT(NewProp_RayStart_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavigationSystem_eventNavigationRaycast_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Querier,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FilterClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HitLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RayEnd,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RayStart,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|Navigation" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationSystem.h" },
				{ "ToolTip", "Performs navigation raycast on NavigationData appropriate for given Querier.\n    @param Querier if not passed default navigation data will be used\n    @param HitLocation if line was obstructed this will be set to hit location. Otherwise it contains SegmentEnd\n    @return true if line from RayStart to RayEnd was obstructed. Also, true when no navigation data present" },
				{ "WorldContext", "WorldContextObject" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationSystem, "NavigationRaycast", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C22401, sizeof(NavigationSystem_eventNavigationRaycast_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UNavigationSystem_OnNavigationBoundsUpdated()
	{
		struct NavigationSystem_eventOnNavigationBoundsUpdated_Parms
		{
			ANavMeshBoundsVolume* NavVolume;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NavVolume = { UE4CodeGen_Private::EPropertyClass::Object, "NavVolume", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavigationSystem_eventOnNavigationBoundsUpdated_Parms, NavVolume), Z_Construct_UClass_ANavMeshBoundsVolume_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NavVolume,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|Navigation" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationSystem.h" },
				{ "ToolTip", "@todo document" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationSystem, "OnNavigationBoundsUpdated", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(NavigationSystem_eventOnNavigationBoundsUpdated_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UNavigationSystem_ProjectPointToNavigation()
	{
		struct NavigationSystem_eventProjectPointToNavigation_Parms
		{
			UObject* WorldContextObject;
			FVector Point;
			ANavigationData* NavData;
			TSubclassOf<UNavigationQueryFilter>  FilterClass;
			FVector QueryExtent;
			FVector ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(NavigationSystem_eventProjectPointToNavigation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueryExtent_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_QueryExtent = { UE4CodeGen_Private::EPropertyClass::Struct, "QueryExtent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(NavigationSystem_eventProjectPointToNavigation_Parms, QueryExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_QueryExtent_MetaData, ARRAY_COUNT(NewProp_QueryExtent_MetaData)) };
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_FilterClass = { UE4CodeGen_Private::EPropertyClass::Class, "FilterClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000080, 1, nullptr, STRUCT_OFFSET(NavigationSystem_eventProjectPointToNavigation_Parms, FilterClass), Z_Construct_UClass_UNavigationQueryFilter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NavData = { UE4CodeGen_Private::EPropertyClass::Object, "NavData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavigationSystem_eventProjectPointToNavigation_Parms, NavData), Z_Construct_UClass_ANavigationData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Point_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Point = { UE4CodeGen_Private::EPropertyClass::Struct, "Point", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(NavigationSystem_eventProjectPointToNavigation_Parms, Point), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_Point_MetaData, ARRAY_COUNT(NewProp_Point_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavigationSystem_eventProjectPointToNavigation_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_QueryExtent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FilterClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NavData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Point,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|Navigation" },
				{ "DeprecatedFunction", "" },
				{ "DeprecationMessage", "This version of ProjectPointToNavigation is deprecated. Please use the new version" },
				{ "DisplayName", "ProjectPointToNavigation_DEPRECATED" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationSystem.h" },
				{ "WorldContext", "WorldContextObject" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationSystem, "ProjectPointToNavigation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C22401, sizeof(NavigationSystem_eventProjectPointToNavigation_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UNavigationSystem_RegisterNavigationInvoker()
	{
		struct NavigationSystem_eventRegisterNavigationInvoker_Parms
		{
			AActor* Invoker;
			float TileGenerationRadius;
			float TileRemovalRadius;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TileRemovalRadius = { UE4CodeGen_Private::EPropertyClass::Float, "TileRemovalRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavigationSystem_eventRegisterNavigationInvoker_Parms, TileRemovalRadius), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TileGenerationRadius = { UE4CodeGen_Private::EPropertyClass::Float, "TileGenerationRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavigationSystem_eventRegisterNavigationInvoker_Parms, TileGenerationRadius), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Invoker = { UE4CodeGen_Private::EPropertyClass::Object, "Invoker", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavigationSystem_eventRegisterNavigationInvoker_Parms, Invoker), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TileRemovalRadius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TileGenerationRadius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Invoker,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|Navigation" },
				{ "CPP_Default_TileGenerationRadius", "3000.000000" },
				{ "CPP_Default_TileRemovalRadius", "5000.000000" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationSystem.h" },
				{ "ToolTip", "Registers given actor as a \"navigation enforcer\" which means navigation system will\n    make sure navigation is being generated in specified radius around it.\n    @note: you need NavigationSystem's GenerateNavigationOnlyAroundNavigationInvokers to be set to true\n            to take advantage of this feature" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationSystem, "RegisterNavigationInvoker", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(NavigationSystem_eventRegisterNavigationInvoker_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UNavigationSystem_ResetMaxSimultaneousTileGenerationJobsCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|Navigation" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationSystem.h" },
				{ "ToolTip", "Brings limit of simultaneous navmesh tile generation jobs back to Project Setting's default value" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationSystem, "ResetMaxSimultaneousTileGenerationJobsCount", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UNavigationSystem_SetGeometryGatheringMode()
	{
		struct NavigationSystem_eventSetGeometryGatheringMode_Parms
		{
			ENavDataGatheringModeConfig NewMode;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewMode = { UE4CodeGen_Private::EPropertyClass::Enum, "NewMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavigationSystem_eventSetGeometryGatheringMode_Parms, NewMode), Z_Construct_UEnum_Engine_ENavDataGatheringModeConfig, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewMode_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewMode_Underlying,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|Navigation|Generation" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationSystem.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationSystem, "SetGeometryGatheringMode", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(NavigationSystem_eventSetGeometryGatheringMode_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UNavigationSystem_SetMaxSimultaneousTileGenerationJobsCount()
	{
		struct NavigationSystem_eventSetMaxSimultaneousTileGenerationJobsCount_Parms
		{
			int32 MaxNumberOfJobs;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxNumberOfJobs = { UE4CodeGen_Private::EPropertyClass::Int, "MaxNumberOfJobs", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavigationSystem_eventSetMaxSimultaneousTileGenerationJobsCount_Parms, MaxNumberOfJobs), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxNumberOfJobs,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|Navigation" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationSystem.h" },
				{ "ToolTip", "will limit the number of simultaneously running navmesh tile generation jobs to specified number.\n    @param MaxNumberOfJobs gets trimmed to be at least 1. You cannot use this function to pause navmesh generation" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationSystem, "SetMaxSimultaneousTileGenerationJobsCount", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(NavigationSystem_eventSetMaxSimultaneousTileGenerationJobsCount_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UNavigationSystem_SimpleMoveToActor()
	{
		struct NavigationSystem_eventSimpleMoveToActor_Parms
		{
			AController* Controller;
			const AActor* Goal;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Goal_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Goal = { UE4CodeGen_Private::EPropertyClass::Object, "Goal", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(NavigationSystem_eventSimpleMoveToActor_Parms, Goal), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(NewProp_Goal_MetaData, ARRAY_COUNT(NewProp_Goal_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller = { UE4CodeGen_Private::EPropertyClass::Object, "Controller", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavigationSystem_eventSimpleMoveToActor_Parms, Controller), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Goal,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Controller,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|Navigation" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationSystem.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationSystem, "SimpleMoveToActor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(NavigationSystem_eventSimpleMoveToActor_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UNavigationSystem_SimpleMoveToLocation()
	{
		struct NavigationSystem_eventSimpleMoveToLocation_Parms
		{
			AController* Controller;
			FVector Goal;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Goal_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Goal = { UE4CodeGen_Private::EPropertyClass::Struct, "Goal", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(NavigationSystem_eventSimpleMoveToLocation_Parms, Goal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_Goal_MetaData, ARRAY_COUNT(NewProp_Goal_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller = { UE4CodeGen_Private::EPropertyClass::Object, "Controller", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavigationSystem_eventSimpleMoveToLocation_Parms, Controller), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Goal,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Controller,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|Navigation" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationSystem.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationSystem, "SimpleMoveToLocation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C22401, sizeof(NavigationSystem_eventSimpleMoveToLocation_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UNavigationSystem_UnregisterNavigationInvoker()
	{
		struct NavigationSystem_eventUnregisterNavigationInvoker_Parms
		{
			AActor* Invoker;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Invoker = { UE4CodeGen_Private::EPropertyClass::Object, "Invoker", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavigationSystem_eventUnregisterNavigationInvoker_Parms, Invoker), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Invoker,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|Navigation" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationSystem.h" },
				{ "ToolTip", "Removes given actor from the list of active navigation enforcers.\n    @see RegisterNavigationInvoker for more details" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationSystem, "UnregisterNavigationInvoker", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(NavigationSystem_eventUnregisterNavigationInvoker_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UNavigationSystem_NoRegister()
	{
		return UNavigationSystem::StaticClass();
	}
	UClass* Z_Construct_UClass_UNavigationSystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UNavigationSystem_FindPathToActorSynchronously, "FindPathToActorSynchronously" }, // 1909372004
				{ &Z_Construct_UFunction_UNavigationSystem_FindPathToLocationSynchronously, "FindPathToLocationSynchronously" }, // 2469822000
				{ &Z_Construct_UFunction_UNavigationSystem_GetNavigationSystem, "GetNavigationSystem" }, // 2184605670
				{ &Z_Construct_UFunction_UNavigationSystem_GetPathCost, "GetPathCost" }, // 175738780
				{ &Z_Construct_UFunction_UNavigationSystem_GetPathLength, "GetPathLength" }, // 331611890
				{ &Z_Construct_UFunction_UNavigationSystem_GetRandomPointInNavigableRadius, "GetRandomPointInNavigableRadius" }, // 2915869759
				{ &Z_Construct_UFunction_UNavigationSystem_GetRandomReachablePointInRadius, "GetRandomReachablePointInRadius" }, // 795148524
				{ &Z_Construct_UFunction_UNavigationSystem_IsNavigationBeingBuilt, "IsNavigationBeingBuilt" }, // 1665755553
				{ &Z_Construct_UFunction_UNavigationSystem_IsNavigationBeingBuiltOrLocked, "IsNavigationBeingBuiltOrLocked" }, // 2694879052
				{ &Z_Construct_UFunction_UNavigationSystem_K2_GetRandomPointInNavigableRadius, "K2_GetRandomPointInNavigableRadius" }, // 2255743093
				{ &Z_Construct_UFunction_UNavigationSystem_K2_GetRandomReachablePointInRadius, "K2_GetRandomReachablePointInRadius" }, // 798934306
				{ &Z_Construct_UFunction_UNavigationSystem_K2_ProjectPointToNavigation, "K2_ProjectPointToNavigation" }, // 4032229400
				{ &Z_Construct_UFunction_UNavigationSystem_NavigationRaycast, "NavigationRaycast" }, // 2223735506
				{ &Z_Construct_UFunction_UNavigationSystem_OnNavigationBoundsUpdated, "OnNavigationBoundsUpdated" }, // 3223794710
				{ &Z_Construct_UFunction_UNavigationSystem_ProjectPointToNavigation, "ProjectPointToNavigation" }, // 1877371835
				{ &Z_Construct_UFunction_UNavigationSystem_RegisterNavigationInvoker, "RegisterNavigationInvoker" }, // 2220117993
				{ &Z_Construct_UFunction_UNavigationSystem_ResetMaxSimultaneousTileGenerationJobsCount, "ResetMaxSimultaneousTileGenerationJobsCount" }, // 972005679
				{ &Z_Construct_UFunction_UNavigationSystem_SetGeometryGatheringMode, "SetGeometryGatheringMode" }, // 1236833867
				{ &Z_Construct_UFunction_UNavigationSystem_SetMaxSimultaneousTileGenerationJobsCount, "SetMaxSimultaneousTileGenerationJobsCount" }, // 2031696801
				{ &Z_Construct_UFunction_UNavigationSystem_SimpleMoveToActor, "SimpleMoveToActor" }, // 3528792305
				{ &Z_Construct_UFunction_UNavigationSystem_SimpleMoveToLocation, "SimpleMoveToLocation" }, // 3522188741
				{ &Z_Construct_UFunction_UNavigationSystem_UnregisterNavigationInvoker, "UnregisterNavigationInvoker" }, // 2557538133
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "AI/Navigation/NavigationSystem.h" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationSystem.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OperationMode_MetaData[] = {
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationSystem.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OperationMode = { UE4CodeGen_Private::EPropertyClass::Enum, "OperationMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UNavigationSystem, OperationMode), Z_Construct_UEnum_Engine_FNavigationSystemRunMode, METADATA_PARAMS(NewProp_OperationMode_MetaData, ARRAY_COUNT(NewProp_OperationMode_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_OperationMode_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnNavigationGenerationFinishedDelegate_MetaData[] = {
				{ "displayname", "OnNavigationGenerationFinished" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationSystem.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnNavigationGenerationFinishedDelegate = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnNavigationGenerationFinishedDelegate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010082000, 1, nullptr, STRUCT_OFFSET(UNavigationSystem, OnNavigationGenerationFinishedDelegate), Z_Construct_UDelegateFunction_Engine_OnNavDataGenerigEvent__DelegateSignature, METADATA_PARAMS(NewProp_OnNavigationGenerationFinishedDelegate_MetaData, ARRAY_COUNT(NewProp_OnNavigationGenerationFinishedDelegate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnNavDataRegisteredEvent_MetaData[] = {
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationSystem.h" },
				{ "ToolTip", "BlueprintAssignable," },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnNavDataRegisteredEvent = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnNavDataRegisteredEvent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000082000, 1, nullptr, STRUCT_OFFSET(UNavigationSystem, OnNavDataRegisteredEvent), Z_Construct_UDelegateFunction_Engine_OnNavDataGenerigEvent__DelegateSignature, METADATA_PARAMS(NewProp_OnNavDataRegisteredEvent_MetaData, ARRAY_COUNT(NewProp_OnNavDataRegisteredEvent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavDataRegistrationQueue_MetaData[] = {
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationSystem.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NavDataRegistrationQueue = { UE4CodeGen_Private::EPropertyClass::Array, "NavDataRegistrationQueue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, STRUCT_OFFSET(UNavigationSystem, NavDataRegistrationQueue), METADATA_PARAMS(NewProp_NavDataRegistrationQueue_MetaData, ARRAY_COUNT(NewProp_NavDataRegistrationQueue_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NavDataRegistrationQueue_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "NavDataRegistrationQueue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_ANavigationData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavDataSet_MetaData[] = {
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationSystem.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NavDataSet = { UE4CodeGen_Private::EPropertyClass::Array, "NavDataSet", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UNavigationSystem, NavDataSet), METADATA_PARAMS(NewProp_NavDataSet_MetaData, ARRAY_COUNT(NewProp_NavDataSet_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NavDataSet_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "NavDataSet", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_ANavigationData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DirtyAreasUpdateFreq_MetaData[] = {
				{ "Category", "NavigationSystem" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationSystem.h" },
				{ "ToolTip", "update frequency for dirty areas on navmesh" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DirtyAreasUpdateFreq = { UE4CodeGen_Private::EPropertyClass::Float, "DirtyAreasUpdateFreq", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UNavigationSystem, DirtyAreasUpdateFreq), METADATA_PARAMS(NewProp_DirtyAreasUpdateFreq_MetaData, ARRAY_COUNT(NewProp_DirtyAreasUpdateFreq_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SupportedAgents_MetaData[] = {
				{ "Category", "Agents" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationSystem.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SupportedAgents = { UE4CodeGen_Private::EPropertyClass::Array, "SupportedAgents", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000004001, 1, nullptr, STRUCT_OFFSET(UNavigationSystem, SupportedAgents), METADATA_PARAMS(NewProp_SupportedAgents_MetaData, ARRAY_COUNT(NewProp_SupportedAgents_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SupportedAgents_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "SupportedAgents", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000004000, 1, nullptr, 0, Z_Construct_UScriptStruct_FNavDataConfig, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveTilesUpdateInterval_MetaData[] = {
				{ "Category", "Navigation Enforcing" },
				{ "ClampMin", "0.1" },
				{ "EditCondition", "bGenerateNavigationOnlyAroundNavigationInvokers" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationSystem.h" },
				{ "ToolTip", "Minimal time, in seconds, between active tiles set update" },
				{ "UIMin", "0.1" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ActiveTilesUpdateInterval = { UE4CodeGen_Private::EPropertyClass::Float, "ActiveTilesUpdateInterval", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000004001, 1, nullptr, STRUCT_OFFSET(UNavigationSystem, ActiveTilesUpdateInterval), METADATA_PARAMS(NewProp_ActiveTilesUpdateInterval_MetaData, ARRAY_COUNT(NewProp_ActiveTilesUpdateInterval_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGenerateNavigationOnlyAroundNavigationInvokers_MetaData[] = {
				{ "Category", "Navigation Enforcing" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationSystem.h" },
				{ "ToolTip", "If set to true navigation will be generated only around registered \"navigation enforcers\"\n     This has a range of consequences (including how navigation octree operates) so it needs to\n     be a conscious decision.\n     Once enabled results in whole world being navigable.\n     @see RegisterNavigationInvoker" },
			};
#endif
			auto NewProp_bGenerateNavigationOnlyAroundNavigationInvokers_SetBit = [](void* Obj){ ((UNavigationSystem*)Obj)->bGenerateNavigationOnlyAroundNavigationInvokers = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGenerateNavigationOnlyAroundNavigationInvokers = { UE4CodeGen_Private::EPropertyClass::Bool, "bGenerateNavigationOnlyAroundNavigationInvokers", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000014001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UNavigationSystem), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bGenerateNavigationOnlyAroundNavigationInvokers_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bGenerateNavigationOnlyAroundNavigationInvokers_MetaData, ARRAY_COUNT(NewProp_bGenerateNavigationOnlyAroundNavigationInvokers_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataGatheringMode_MetaData[] = {
				{ "Category", "NavigationSystem" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationSystem.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DataGatheringMode = { UE4CodeGen_Private::EPropertyClass::Enum, "DataGatheringMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000014001, 1, nullptr, STRUCT_OFFSET(UNavigationSystem, DataGatheringMode), Z_Construct_UEnum_Engine_ENavDataGatheringModeConfig, METADATA_PARAMS(NewProp_DataGatheringMode_MetaData, ARRAY_COUNT(NewProp_DataGatheringMode_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_DataGatheringMode_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSkipAgentHeightCheckWhenPickingNavData_MetaData[] = {
				{ "Category", "NavigationSystem" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationSystem.h" },
				{ "ToolTip", "false by default, if set to true will result in not caring about nav agent height\n    when trying to match navigation data to passed in nav agent" },
			};
#endif
			auto NewProp_bSkipAgentHeightCheckWhenPickingNavData_SetBit = [](void* Obj){ ((UNavigationSystem*)Obj)->bSkipAgentHeightCheckWhenPickingNavData = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSkipAgentHeightCheckWhenPickingNavData = { UE4CodeGen_Private::EPropertyClass::Bool, "bSkipAgentHeightCheckWhenPickingNavData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UNavigationSystem), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSkipAgentHeightCheckWhenPickingNavData_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSkipAgentHeightCheckWhenPickingNavData_MetaData, ARRAY_COUNT(NewProp_bSkipAgentHeightCheckWhenPickingNavData_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInitialBuildingLocked_MetaData[] = {
				{ "Category", "NavigationSystem" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationSystem.h" },
				{ "ToolTip", "if set to true will result navigation system not rebuild navigation until\n    a call to ReleaseInitialBuildingLock() is called. Does not influence\n    editor-time generation (i.e. does influence PIE and Game).\n    Defaults to false." },
			};
#endif
			auto NewProp_bInitialBuildingLocked_SetBit = [](void* Obj){ ((UNavigationSystem*)Obj)->bInitialBuildingLocked = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInitialBuildingLocked = { UE4CodeGen_Private::EPropertyClass::Bool, "bInitialBuildingLocked", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UNavigationSystem), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bInitialBuildingLocked_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bInitialBuildingLocked_MetaData, ARRAY_COUNT(NewProp_bInitialBuildingLocked_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportRebuilding_MetaData[] = {
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationSystem.h" },
				{ "ToolTip", "gets set to true if gathering navigation data (like in navoctree) is required due to the need of navigation generation\n    Is always true in Editor Mode. In other modes it depends on bRebuildAtRuntime of every required NavigationData class' CDO" },
			};
#endif
			auto NewProp_bSupportRebuilding_SetBit = [](void* Obj){ ((UNavigationSystem*)Obj)->bSupportRebuilding = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportRebuilding = { UE4CodeGen_Private::EPropertyClass::Bool, "bSupportRebuilding", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UNavigationSystem), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSupportRebuilding_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSupportRebuilding_MetaData, ARRAY_COUNT(NewProp_bSupportRebuilding_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowClientSideNavigation_MetaData[] = {
				{ "Category", "NavigationSystem" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationSystem.h" },
			};
#endif
			auto NewProp_bAllowClientSideNavigation_SetBit = [](void* Obj){ ((UNavigationSystem*)Obj)->bAllowClientSideNavigation = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowClientSideNavigation = { UE4CodeGen_Private::EPropertyClass::Bool, "bAllowClientSideNavigation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UNavigationSystem), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAllowClientSideNavigation_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAllowClientSideNavigation_MetaData, ARRAY_COUNT(NewProp_bAllowClientSideNavigation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoCreateNavigationData_MetaData[] = {
				{ "Category", "NavigationSystem" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationSystem.h" },
				{ "ToolTip", "Should navigation system spawn default Navigation Data when there's none and there are navigation bounds present?" },
			};
#endif
			auto NewProp_bAutoCreateNavigationData_SetBit = [](void* Obj){ ((UNavigationSystem*)Obj)->bAutoCreateNavigationData = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoCreateNavigationData = { UE4CodeGen_Private::EPropertyClass::Bool, "bAutoCreateNavigationData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UNavigationSystem), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAutoCreateNavigationData_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAutoCreateNavigationData_MetaData, ARRAY_COUNT(NewProp_bAutoCreateNavigationData_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrowdManagerClass_MetaData[] = {
				{ "Category", "Navigation" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationSystem.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_CrowdManagerClass = { UE4CodeGen_Private::EPropertyClass::Class, "CrowdManagerClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0024080000000015, 1, nullptr, STRUCT_OFFSET(UNavigationSystem, CrowdManagerClass), Z_Construct_UClass_UCrowdManagerBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_CrowdManagerClass_MetaData, ARRAY_COUNT(NewProp_CrowdManagerClass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbstractNavData_MetaData[] = {
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationSystem.h" },
				{ "ToolTip", "special navigation data for managing direct paths, not part of NavDataSet!" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AbstractNavData = { UE4CodeGen_Private::EPropertyClass::Object, "AbstractNavData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, STRUCT_OFFSET(UNavigationSystem, AbstractNavData), Z_Construct_UClass_ANavigationData_NoRegister, METADATA_PARAMS(NewProp_AbstractNavData_MetaData, ARRAY_COUNT(NewProp_AbstractNavData_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainNavData_MetaData[] = {
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationSystem.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MainNavData = { UE4CodeGen_Private::EPropertyClass::Object, "MainNavData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UNavigationSystem, MainNavData), Z_Construct_UClass_ANavigationData_NoRegister, METADATA_PARAMS(NewProp_MainNavData_MetaData, ARRAY_COUNT(NewProp_MainNavData_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OperationMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OperationMode_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnNavigationGenerationFinishedDelegate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnNavDataRegisteredEvent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NavDataRegistrationQueue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NavDataRegistrationQueue_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NavDataSet,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NavDataSet_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DirtyAreasUpdateFreq,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SupportedAgents,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SupportedAgents_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ActiveTilesUpdateInterval,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bGenerateNavigationOnlyAroundNavigationInvokers,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DataGatheringMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DataGatheringMode_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSkipAgentHeightCheckWhenPickingNavData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bInitialBuildingLocked,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSupportRebuilding,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAllowClientSideNavigation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAutoCreateNavigationData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CrowdManagerClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AbstractNavData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MainNavData,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UNavigationSystem>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UNavigationSystem::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900086u,
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
	IMPLEMENT_CLASS(UNavigationSystem, 3154083437);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNavigationSystem(Z_Construct_UClass_UNavigationSystem, &UNavigationSystem::StaticClass, TEXT("/Script/Engine"), TEXT("UNavigationSystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNavigationSystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
