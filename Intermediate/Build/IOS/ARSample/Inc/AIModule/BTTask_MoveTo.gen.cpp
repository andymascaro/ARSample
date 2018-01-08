// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/BehaviorTree/Tasks/BTTask_MoveTo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_MoveTo() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_MoveTo_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_MoveTo();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UNavigationQueryFilter_NoRegister();
// End Cross Module References
	void UBTTask_MoveTo::StaticRegisterNativesUBTTask_MoveTo()
	{
	}
	UClass* Z_Construct_UClass_UBTTask_MoveTo_NoRegister()
	{
		return UBTTask_MoveTo::StaticClass();
	}
	UClass* Z_Construct_UClass_UBTTask_MoveTo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "BehaviorTree/Tasks/BTTask_MoveTo.h" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_MoveTo.h" },
				{ "ToolTip", "Move To task node.\nMoves the AI pawn toward the specified Actor or Location blackboard entry using the navigation system." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStopOnOverlapNeedsUpdate_MetaData[] = {
				{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_MoveTo.h" },
			};
#endif
			auto NewProp_bStopOnOverlapNeedsUpdate_SetBit = [](void* Obj){ ((UBTTask_MoveTo*)Obj)->bStopOnOverlapNeedsUpdate = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStopOnOverlapNeedsUpdate = { UE4CodeGen_Private::EPropertyClass::Bool, "bStopOnOverlapNeedsUpdate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UBTTask_MoveTo), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bStopOnOverlapNeedsUpdate_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bStopOnOverlapNeedsUpdate_MetaData, ARRAY_COUNT(NewProp_bStopOnOverlapNeedsUpdate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStopOnOverlap_MetaData[] = {
				{ "Category", "Node" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_MoveTo.h" },
				{ "ToolTip", "DEPRECATED, please use combination of bReachTestIncludes*Radius instead" },
			};
#endif
			auto NewProp_bStopOnOverlap_SetBit = [](void* Obj){ ((UBTTask_MoveTo*)Obj)->bStopOnOverlap = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStopOnOverlap = { UE4CodeGen_Private::EPropertyClass::Bool, "bStopOnOverlap", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020801, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UBTTask_MoveTo), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bStopOnOverlap_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bStopOnOverlap_MetaData, ARRAY_COUNT(NewProp_bStopOnOverlap_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReachTestIncludesGoalRadius_MetaData[] = {
				{ "Category", "Node" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_MoveTo.h" },
				{ "ToolTip", "if set, radius of goal's capsule will be added to threshold between AI and goal location in destination reach test" },
			};
#endif
			auto NewProp_bReachTestIncludesGoalRadius_SetBit = [](void* Obj){ ((UBTTask_MoveTo*)Obj)->bReachTestIncludesGoalRadius = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReachTestIncludesGoalRadius = { UE4CodeGen_Private::EPropertyClass::Bool, "bReachTestIncludesGoalRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UBTTask_MoveTo), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bReachTestIncludesGoalRadius_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bReachTestIncludesGoalRadius_MetaData, ARRAY_COUNT(NewProp_bReachTestIncludesGoalRadius_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReachTestIncludesAgentRadius_MetaData[] = {
				{ "Category", "Node" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_MoveTo.h" },
				{ "ToolTip", "if set, radius of AI's capsule will be added to threshold between AI and goal location in destination reach test" },
			};
#endif
			auto NewProp_bReachTestIncludesAgentRadius_SetBit = [](void* Obj){ ((UBTTask_MoveTo*)Obj)->bReachTestIncludesAgentRadius = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReachTestIncludesAgentRadius = { UE4CodeGen_Private::EPropertyClass::Bool, "bReachTestIncludesAgentRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UBTTask_MoveTo), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bReachTestIncludesAgentRadius_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bReachTestIncludesAgentRadius_MetaData, ARRAY_COUNT(NewProp_bReachTestIncludesAgentRadius_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bProjectGoalLocation_MetaData[] = {
				{ "Category", "Node" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_MoveTo.h" },
				{ "ToolTip", "if set, goal location will be projected on navigation data (navmesh) before using" },
			};
#endif
			auto NewProp_bProjectGoalLocation_SetBit = [](void* Obj){ ((UBTTask_MoveTo*)Obj)->bProjectGoalLocation = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bProjectGoalLocation = { UE4CodeGen_Private::EPropertyClass::Bool, "bProjectGoalLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UBTTask_MoveTo), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bProjectGoalLocation_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bProjectGoalLocation_MetaData, ARRAY_COUNT(NewProp_bProjectGoalLocation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTrackMovingGoal_MetaData[] = {
				{ "Category", "Node" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_MoveTo.h" },
				{ "ToolTip", "if set, path to goal actor will update itself when actor moves" },
			};
#endif
			auto NewProp_bTrackMovingGoal_SetBit = [](void* Obj){ ((UBTTask_MoveTo*)Obj)->bTrackMovingGoal = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTrackMovingGoal = { UE4CodeGen_Private::EPropertyClass::Bool, "bTrackMovingGoal", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UBTTask_MoveTo), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bTrackMovingGoal_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bTrackMovingGoal_MetaData, ARRAY_COUNT(NewProp_bTrackMovingGoal_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowPartialPath_MetaData[] = {
				{ "Category", "Node" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_MoveTo.h" },
				{ "ToolTip", "if set, use incomplete path when goal can't be reached" },
			};
#endif
			auto NewProp_bAllowPartialPath_SetBit = [](void* Obj){ ((UBTTask_MoveTo*)Obj)->bAllowPartialPath = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowPartialPath = { UE4CodeGen_Private::EPropertyClass::Bool, "bAllowPartialPath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UBTTask_MoveTo), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAllowPartialPath_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAllowPartialPath_MetaData, ARRAY_COUNT(NewProp_bAllowPartialPath_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowStrafe_MetaData[] = {
				{ "Category", "Node" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_MoveTo.h" },
			};
#endif
			auto NewProp_bAllowStrafe_SetBit = [](void* Obj){ ((UBTTask_MoveTo*)Obj)->bAllowStrafe = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowStrafe = { UE4CodeGen_Private::EPropertyClass::Bool, "bAllowStrafe", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UBTTask_MoveTo), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAllowStrafe_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAllowStrafe_MetaData, ARRAY_COUNT(NewProp_bAllowStrafe_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bObserveBlackboardValue_MetaData[] = {
				{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_MoveTo.h" },
				{ "ToolTip", "if move goal in BB changes the move will be redirected to new location" },
			};
#endif
			auto NewProp_bObserveBlackboardValue_SetBit = [](void* Obj){ ((UBTTask_MoveTo*)Obj)->bObserveBlackboardValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bObserveBlackboardValue = { UE4CodeGen_Private::EPropertyClass::Bool, "bObserveBlackboardValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UBTTask_MoveTo), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bObserveBlackboardValue_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bObserveBlackboardValue_MetaData, ARRAY_COUNT(NewProp_bObserveBlackboardValue_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObservedBlackboardValueTolerance_MetaData[] = {
				{ "Category", "Blackboard" },
				{ "ClampMin", "1" },
				{ "EditCondition", "bObserveBlackboardValue" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_MoveTo.h" },
				{ "ToolTip", "if task is expected to react to changes to location represented by BB key\n    this property can be used to tweak sensitivity of the mechanism. Value is\n    recommended to be less then AcceptableRadius" },
				{ "UIMin", "1" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ObservedBlackboardValueTolerance = { UE4CodeGen_Private::EPropertyClass::Float, "ObservedBlackboardValueTolerance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, STRUCT_OFFSET(UBTTask_MoveTo, ObservedBlackboardValueTolerance), METADATA_PARAMS(NewProp_ObservedBlackboardValueTolerance_MetaData, ARRAY_COUNT(NewProp_ObservedBlackboardValueTolerance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilterClass_MetaData[] = {
				{ "Category", "Node" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_MoveTo.h" },
				{ "ToolTip", "\"None\" will result in default filter being used" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_FilterClass = { UE4CodeGen_Private::EPropertyClass::Class, "FilterClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000001, 1, nullptr, STRUCT_OFFSET(UBTTask_MoveTo, FilterClass), Z_Construct_UClass_UNavigationQueryFilter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_FilterClass_MetaData, ARRAY_COUNT(NewProp_FilterClass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AcceptableRadius_MetaData[] = {
				{ "Category", "Node" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_MoveTo.h" },
				{ "ToolTip", "fixed distance added to threshold between AI and goal location in destination reach test" },
				{ "UIMin", "0.0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AcceptableRadius = { UE4CodeGen_Private::EPropertyClass::Float, "AcceptableRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UBTTask_MoveTo, AcceptableRadius), METADATA_PARAMS(NewProp_AcceptableRadius_MetaData, ARRAY_COUNT(NewProp_AcceptableRadius_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bStopOnOverlapNeedsUpdate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bStopOnOverlap,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bReachTestIncludesGoalRadius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bReachTestIncludesAgentRadius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bProjectGoalLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bTrackMovingGoal,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAllowPartialPath,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAllowStrafe,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bObserveBlackboardValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ObservedBlackboardValueTolerance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FilterClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AcceptableRadius,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UBTTask_MoveTo>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UBTTask_MoveTo::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100084u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTTask_MoveTo, 3615265187);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTTask_MoveTo(Z_Construct_UClass_UBTTask_MoveTo, &UBTTask_MoveTo::StaticClass, TEXT("/Script/AIModule"), TEXT("UBTTask_MoveTo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_MoveTo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
