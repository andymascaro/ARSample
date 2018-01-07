// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/AISystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISystem() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UAISystem_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAISystem();
	ENGINE_API UClass* Z_Construct_UClass_UAISystemBase();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UFunction* Z_Construct_UFunction_UAISystem_AIIgnorePlayers();
	AIMODULE_API UFunction* Z_Construct_UFunction_UAISystem_AILoggingVerbose();
	AIMODULE_API UClass* Z_Construct_UClass_UNavLocalGridManager_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAIHotSpotManager_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAIAsyncTaskBlueprintProxy_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionSystem_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryManager_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeManager_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
// End Cross Module References
	void UAISystem::StaticRegisterNativesUAISystem()
	{
		UClass* Class = UAISystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AIIgnorePlayers", (Native)&UAISystem::execAIIgnorePlayers },
			{ "AILoggingVerbose", (Native)&UAISystem::execAILoggingVerbose },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UAISystem_AIIgnorePlayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/AISystem.h" },
				{ "ToolTip", "cheats" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAISystem, "AIIgnorePlayers", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020600, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAISystem_AILoggingVerbose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/AISystem.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAISystem, "AILoggingVerbose", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020600, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAISystem_NoRegister()
	{
		return UAISystem::StaticClass();
	}
	UClass* Z_Construct_UClass_UAISystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UAISystemBase,
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UAISystem_AIIgnorePlayers, "AIIgnorePlayers" }, // 2166386614
				{ &Z_Construct_UFunction_UAISystem_AILoggingVerbose, "AILoggingVerbose" }, // 3761008025
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "AISystem.h" },
				{ "ModuleRelativePath", "Classes/AISystem.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavLocalGrids_MetaData[] = {
				{ "ModuleRelativePath", "Classes/AISystem.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NavLocalGrids = { UE4CodeGen_Private::EPropertyClass::Object, "NavLocalGrids", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000002000, 1, nullptr, STRUCT_OFFSET(UAISystem, NavLocalGrids), Z_Construct_UClass_UNavLocalGridManager_NoRegister, METADATA_PARAMS(NewProp_NavLocalGrids_MetaData, ARRAY_COUNT(NewProp_NavLocalGrids_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HotSpotManager_MetaData[] = {
				{ "ModuleRelativePath", "Classes/AISystem.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HotSpotManager = { UE4CodeGen_Private::EPropertyClass::Object, "HotSpotManager", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000002000, 1, nullptr, STRUCT_OFFSET(UAISystem, HotSpotManager), Z_Construct_UClass_UAIHotSpotManager_NoRegister, METADATA_PARAMS(NewProp_HotSpotManager_MetaData, ARRAY_COUNT(NewProp_HotSpotManager_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllProxyObjects_MetaData[] = {
				{ "ModuleRelativePath", "Classes/AISystem.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AllProxyObjects = { UE4CodeGen_Private::EPropertyClass::Array, "AllProxyObjects", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000002000, 1, nullptr, STRUCT_OFFSET(UAISystem, AllProxyObjects), METADATA_PARAMS(NewProp_AllProxyObjects_MetaData, ARRAY_COUNT(NewProp_AllProxyObjects_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AllProxyObjects_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "AllProxyObjects", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UAIAsyncTaskBlueprintProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerceptionSystem_MetaData[] = {
				{ "ModuleRelativePath", "Classes/AISystem.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PerceptionSystem = { UE4CodeGen_Private::EPropertyClass::Object, "PerceptionSystem", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000002000, 1, nullptr, STRUCT_OFFSET(UAISystem, PerceptionSystem), Z_Construct_UClass_UAIPerceptionSystem_NoRegister, METADATA_PARAMS(NewProp_PerceptionSystem_MetaData, ARRAY_COUNT(NewProp_PerceptionSystem_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnvironmentQueryManager_MetaData[] = {
				{ "ModuleRelativePath", "Classes/AISystem.h" },
				{ "ToolTip", "Environment query manager used by game" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EnvironmentQueryManager = { UE4CodeGen_Private::EPropertyClass::Object, "EnvironmentQueryManager", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000002000, 1, nullptr, STRUCT_OFFSET(UAISystem, EnvironmentQueryManager), Z_Construct_UClass_UEnvQueryManager_NoRegister, METADATA_PARAMS(NewProp_EnvironmentQueryManager_MetaData, ARRAY_COUNT(NewProp_EnvironmentQueryManager_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BehaviorTreeManager_MetaData[] = {
				{ "ModuleRelativePath", "Classes/AISystem.h" },
				{ "ToolTip", "Behavior tree manager used by game" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BehaviorTreeManager = { UE4CodeGen_Private::EPropertyClass::Object, "BehaviorTreeManager", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000002000, 1, nullptr, STRUCT_OFFSET(UAISystem, BehaviorTreeManager), Z_Construct_UClass_UBehaviorTreeManager_NoRegister, METADATA_PARAMS(NewProp_BehaviorTreeManager_MetaData, ARRAY_COUNT(NewProp_BehaviorTreeManager_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultSightCollisionChannel_MetaData[] = {
				{ "Category", "PerceptionSystem" },
				{ "ModuleRelativePath", "Classes/AISystem.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_DefaultSightCollisionChannel = { UE4CodeGen_Private::EPropertyClass::Byte, "DefaultSightCollisionChannel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044001, 1, nullptr, STRUCT_OFFSET(UAISystem, DefaultSightCollisionChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(NewProp_DefaultSightCollisionChannel_MetaData, ARRAY_COUNT(NewProp_DefaultSightCollisionChannel_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableDebuggerPlugin_MetaData[] = {
				{ "Category", "AISystem" },
				{ "ModuleRelativePath", "Classes/AISystem.h" },
				{ "ToolTip", "if set, GameplayDebuggerPlugin will be loaded on module's startup" },
			};
#endif
			auto NewProp_bEnableDebuggerPlugin_SetBit = [](void* Obj){ ((UAISystem*)Obj)->bEnableDebuggerPlugin = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableDebuggerPlugin = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableDebuggerPlugin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000054001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAISystem), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnableDebuggerPlugin_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnableDebuggerPlugin_MetaData, ARRAY_COUNT(NewProp_bEnableDebuggerPlugin_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowControllersAsEQSQuerier_MetaData[] = {
				{ "Category", "EQS" },
				{ "ModuleRelativePath", "Classes/AISystem.h" },
				{ "ToolTip", "if enable will make EQS not complaint about using Controllers as queriers. Default behavior (false) will\n    in places automatically convert controllers to pawns, and complain if code user bypasses the conversion or uses\n    pawn-less controller" },
			};
#endif
			auto NewProp_bAllowControllersAsEQSQuerier_SetBit = [](void* Obj){ ((UAISystem*)Obj)->bAllowControllersAsEQSQuerier = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowControllersAsEQSQuerier = { UE4CodeGen_Private::EPropertyClass::Bool, "bAllowControllersAsEQSQuerier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000054001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAISystem), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAllowControllersAsEQSQuerier_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAllowControllersAsEQSQuerier_MetaData, ARRAY_COUNT(NewProp_bAllowControllersAsEQSQuerier_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableBTAITasks_MetaData[] = {
				{ "Category", "Gameplay Tasks" },
				{ "ModuleRelativePath", "Classes/AISystem.h" },
				{ "ToolTip", "this property is just a transition-time flag - in the end we're going to switch over to Gameplay Tasks anyway, that's the goal." },
			};
#endif
			auto NewProp_bEnableBTAITasks_SetBit = [](void* Obj){ ((UAISystem*)Obj)->bEnableBTAITasks = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableBTAITasks = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableBTAITasks", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000054001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAISystem), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnableBTAITasks_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnableBTAITasks_MetaData, ARRAY_COUNT(NewProp_bEnableBTAITasks_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowStrafing_MetaData[] = {
				{ "Category", "Movement" },
				{ "ModuleRelativePath", "Classes/AISystem.h" },
			};
#endif
			auto NewProp_bAllowStrafing_SetBit = [](void* Obj){ ((UAISystem*)Obj)->bAllowStrafing = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowStrafing = { UE4CodeGen_Private::EPropertyClass::Bool, "bAllowStrafing", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000054001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAISystem), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAllowStrafing_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAllowStrafing_MetaData, ARRAY_COUNT(NewProp_bAllowStrafing_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAcceptPartialPaths_MetaData[] = {
				{ "Category", "Movement" },
				{ "ModuleRelativePath", "Classes/AISystem.h" },
			};
#endif
			auto NewProp_bAcceptPartialPaths_SetBit = [](void* Obj){ ((UAISystem*)Obj)->bAcceptPartialPaths = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAcceptPartialPaths = { UE4CodeGen_Private::EPropertyClass::Bool, "bAcceptPartialPaths", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000054001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAISystem), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAcceptPartialPaths_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAcceptPartialPaths_MetaData, ARRAY_COUNT(NewProp_bAcceptPartialPaths_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFinishMoveOnGoalOverlap_MetaData[] = {
				{ "Category", "Movement" },
				{ "ModuleRelativePath", "Classes/AISystem.h" },
			};
#endif
			auto NewProp_bFinishMoveOnGoalOverlap_SetBit = [](void* Obj){ ((UAISystem*)Obj)->bFinishMoveOnGoalOverlap = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFinishMoveOnGoalOverlap = { UE4CodeGen_Private::EPropertyClass::Bool, "bFinishMoveOnGoalOverlap", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000054001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAISystem), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bFinishMoveOnGoalOverlap_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bFinishMoveOnGoalOverlap_MetaData, ARRAY_COUNT(NewProp_bFinishMoveOnGoalOverlap_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathfollowingNavLinkAcceptanceRadius_MetaData[] = {
				{ "Category", "Movement" },
				{ "ModuleRelativePath", "Classes/AISystem.h" },
				{ "ToolTip", "Similarly to PathfollowingRegularPathPointAcceptanceRadius used by pathfollowing's internals\n    but gets applied only when next point on a path represents a begining of navigation link" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PathfollowingNavLinkAcceptanceRadius = { UE4CodeGen_Private::EPropertyClass::Float, "PathfollowingNavLinkAcceptanceRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000054001, 1, nullptr, STRUCT_OFFSET(UAISystem, PathfollowingNavLinkAcceptanceRadius), METADATA_PARAMS(NewProp_PathfollowingNavLinkAcceptanceRadius_MetaData, ARRAY_COUNT(NewProp_PathfollowingNavLinkAcceptanceRadius_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathfollowingRegularPathPointAcceptanceRadius_MetaData[] = {
				{ "Category", "Movement" },
				{ "ModuleRelativePath", "Classes/AISystem.h" },
				{ "ToolTip", "Value used for pathfollowing's internal code to determine whether AI reached path's point.\n    @note this value is not used for path's last point. @see AcceptanceRadius" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PathfollowingRegularPathPointAcceptanceRadius = { UE4CodeGen_Private::EPropertyClass::Float, "PathfollowingRegularPathPointAcceptanceRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000054001, 1, nullptr, STRUCT_OFFSET(UAISystem, PathfollowingRegularPathPointAcceptanceRadius), METADATA_PARAMS(NewProp_PathfollowingRegularPathPointAcceptanceRadius_MetaData, ARRAY_COUNT(NewProp_PathfollowingRegularPathPointAcceptanceRadius_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AcceptanceRadius_MetaData[] = {
				{ "Category", "Movement" },
				{ "ModuleRelativePath", "Classes/AISystem.h" },
				{ "ToolTip", "Default AI movement's acceptance radius used to determine whether\nAI reached path's end" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AcceptanceRadius = { UE4CodeGen_Private::EPropertyClass::Float, "AcceptanceRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000054001, 1, nullptr, STRUCT_OFFSET(UAISystem, AcceptanceRadius), METADATA_PARAMS(NewProp_AcceptanceRadius_MetaData, ARRAY_COUNT(NewProp_AcceptanceRadius_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HotSpotManagerClassName_MetaData[] = {
				{ "Category", "AISystem" },
				{ "DisplayName", "AIHotSpotManager Class" },
				{ "MetaClass", "AIHotSpotManager" },
				{ "ModuleRelativePath", "Classes/AISystem.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_HotSpotManagerClassName = { UE4CodeGen_Private::EPropertyClass::Struct, "HotSpotManagerClassName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000044001, 1, nullptr, STRUCT_OFFSET(UAISystem, HotSpotManagerClassName), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(NewProp_HotSpotManagerClassName_MetaData, ARRAY_COUNT(NewProp_HotSpotManagerClassName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerceptionSystemClassName_MetaData[] = {
				{ "Category", "AISystem" },
				{ "DisplayName", "Perception System Class" },
				{ "MetaClass", "AIPerceptionSystem" },
				{ "ModuleRelativePath", "Classes/AISystem.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PerceptionSystemClassName = { UE4CodeGen_Private::EPropertyClass::Struct, "PerceptionSystemClassName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000044001, 1, nullptr, STRUCT_OFFSET(UAISystem, PerceptionSystemClassName), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(NewProp_PerceptionSystemClassName_MetaData, ARRAY_COUNT(NewProp_PerceptionSystemClassName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NavLocalGrids,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HotSpotManager,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AllProxyObjects,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AllProxyObjects_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PerceptionSystem,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EnvironmentQueryManager,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BehaviorTreeManager,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultSightCollisionChannel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnableDebuggerPlugin,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAllowControllersAsEQSQuerier,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnableBTAITasks,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAllowStrafing,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAcceptPartialPaths,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bFinishMoveOnGoalOverlap,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PathfollowingNavLinkAcceptanceRadius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PathfollowingRegularPathPointAcceptanceRadius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AcceptanceRadius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HotSpotManagerClassName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PerceptionSystemClassName,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAISystem>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAISystem::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100086u,
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
	IMPLEMENT_CLASS(UAISystem, 2156387114);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAISystem(Z_Construct_UClass_UAISystem, &UAISystem::StaticClass, TEXT("/Script/AIModule"), TEXT("UAISystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAISystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
