// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/AI/Navigation/NavigationTestingActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavigationTestingActor() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ENavCostDisplay();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_ANavigationTestingActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ANavigationTestingActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UNavigationQueryFilter_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_ANavigationData_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNavAgentProperties();
	ENGINE_API UClass* Z_Construct_UClass_UNavigationInvokerComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNavTestRenderingComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNavAgentInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNavPathObserverInterface_NoRegister();
// End Cross Module References
	static UEnum* ENavCostDisplay_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ENavCostDisplay, Z_Construct_UPackage__Script_Engine(), TEXT("ENavCostDisplay"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENavCostDisplay(ENavCostDisplay_StaticEnum, TEXT("/Script/Engine"), TEXT("ENavCostDisplay"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ENavCostDisplay_CRC() { return 1641045737U; }
	UEnum* Z_Construct_UEnum_Engine_ENavCostDisplay()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENavCostDisplay"), 0, Get_Z_Construct_UEnum_Engine_ENavCostDisplay_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENavCostDisplay::TotalCost", (int64)ENavCostDisplay::TotalCost },
				{ "ENavCostDisplay::HeuristicOnly", (int64)ENavCostDisplay::HeuristicOnly },
				{ "ENavCostDisplay::RealCostOnly", (int64)ENavCostDisplay::RealCostOnly },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTestingActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ENavCostDisplay",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"ENavCostDisplay::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void ANavigationTestingActor::StaticRegisterNativesANavigationTestingActor()
	{
	}
	UClass* Z_Construct_UClass_ANavigationTestingActor_NoRegister()
	{
		return ANavigationTestingActor::StaticClass();
	}
	UClass* Z_Construct_UClass_ANavigationTestingActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HideCategories", "Object Actor Input Rendering" },
				{ "IncludePath", "AI/Navigation/NavigationTestingActor.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTestingActor.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OffsetFromCornersDistance_MetaData[] = {
				{ "Category", "Pathfinding" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTestingActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OffsetFromCornersDistance = { UE4CodeGen_Private::EPropertyClass::Float, "OffsetFromCornersDistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ANavigationTestingActor, OffsetFromCornersDistance), METADATA_PARAMS(NewProp_OffsetFromCornersDistance_MetaData, ARRAY_COUNT(NewProp_OffsetFromCornersDistance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowStepIndex_MetaData[] = {
				{ "Category", "Debug" },
				{ "ClampMin", "-1" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTestingActor.h" },
				{ "UIMin", "-1" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ShowStepIndex = { UE4CodeGen_Private::EPropertyClass::Int, "ShowStepIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002801, 1, nullptr, STRUCT_OFFSET(ANavigationTestingActor, ShowStepIndex), METADATA_PARAMS(NewProp_ShowStepIndex_MetaData, ARRAY_COUNT(NewProp_ShowStepIndex_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilterClass_MetaData[] = {
				{ "Category", "Pathfinding" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTestingActor.h" },
				{ "ToolTip", "\"None\" will result in default filter being used" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_FilterClass = { UE4CodeGen_Private::EPropertyClass::Class, "FilterClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000001, 1, nullptr, STRUCT_OFFSET(ANavigationTestingActor, FilterClass), Z_Construct_UClass_UNavigationQueryFilter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_FilterClass_MetaData, ARRAY_COUNT(NewProp_FilterClass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherActor_MetaData[] = {
				{ "Category", "Pathfinding" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTestingActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor = { UE4CodeGen_Private::EPropertyClass::Object, "OtherActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ANavigationTestingActor, OtherActor), Z_Construct_UClass_ANavigationTestingActor_NoRegister, METADATA_PARAMS(NewProp_OtherActor_MetaData, ARRAY_COUNT(NewProp_OtherActor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathfindingSteps_MetaData[] = {
				{ "Category", "PathfindingStatus" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTestingActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_PathfindingSteps = { UE4CodeGen_Private::EPropertyClass::Int, "PathfindingSteps", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000022015, 1, nullptr, STRUCT_OFFSET(ANavigationTestingActor, PathfindingSteps), METADATA_PARAMS(NewProp_PathfindingSteps_MetaData, ARRAY_COUNT(NewProp_PathfindingSteps_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathCost_MetaData[] = {
				{ "Category", "PathfindingStatus" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTestingActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PathCost = { UE4CodeGen_Private::EPropertyClass::Float, "PathCost", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000022015, 1, nullptr, STRUCT_OFFSET(ANavigationTestingActor, PathCost), METADATA_PARAMS(NewProp_PathCost_MetaData, ARRAY_COUNT(NewProp_PathCost_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathfindingTime_MetaData[] = {
				{ "Category", "PathfindingStatus" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTestingActor.h" },
				{ "ToolTip", "Time in micro seconds" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PathfindingTime = { UE4CodeGen_Private::EPropertyClass::Float, "PathfindingTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000022015, 1, nullptr, STRUCT_OFFSET(ANavigationTestingActor, PathfindingTime), METADATA_PARAMS(NewProp_PathfindingTime_MetaData, ARRAY_COUNT(NewProp_PathfindingTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPathSearchOutOfNodes_MetaData[] = {
				{ "Category", "PathfindingStatus" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTestingActor.h" },
			};
#endif
			auto NewProp_bPathSearchOutOfNodes_SetBit = [](void* Obj){ ((ANavigationTestingActor*)Obj)->bPathSearchOutOfNodes = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPathSearchOutOfNodes = { UE4CodeGen_Private::EPropertyClass::Bool, "bPathSearchOutOfNodes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000022015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ANavigationTestingActor), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bPathSearchOutOfNodes_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bPathSearchOutOfNodes_MetaData, ARRAY_COUNT(NewProp_bPathSearchOutOfNodes_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPathIsPartial_MetaData[] = {
				{ "Category", "PathfindingStatus" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTestingActor.h" },
			};
#endif
			auto NewProp_bPathIsPartial_SetBit = [](void* Obj){ ((ANavigationTestingActor*)Obj)->bPathIsPartial = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPathIsPartial = { UE4CodeGen_Private::EPropertyClass::Bool, "bPathIsPartial", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000022015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ANavigationTestingActor), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bPathIsPartial_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bPathIsPartial_MetaData, ARRAY_COUNT(NewProp_bPathIsPartial_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPathExist_MetaData[] = {
				{ "Category", "PathfindingStatus" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTestingActor.h" },
			};
#endif
			auto NewProp_bPathExist_SetBit = [](void* Obj){ ((ANavigationTestingActor*)Obj)->bPathExist = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPathExist = { UE4CodeGen_Private::EPropertyClass::Bool, "bPathExist", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000022015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ANavigationTestingActor), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bPathExist_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bPathExist_MetaData, ARRAY_COUNT(NewProp_bPathExist_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextCanvasOffset_MetaData[] = {
				{ "Category", "Debug" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTestingActor.h" },
				{ "ToolTip", "text canvas offset to apply" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextCanvasOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "TextCanvasOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ANavigationTestingActor, TextCanvasOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(NewProp_TextCanvasOffset_MetaData, ARRAY_COUNT(NewProp_TextCanvasOffset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CostDisplayMode_MetaData[] = {
				{ "Category", "Debug" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTestingActor.h" },
				{ "ToolTip", "determines which cost will be shown" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_CostDisplayMode = { UE4CodeGen_Private::EPropertyClass::Byte, "CostDisplayMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ANavigationTestingActor, CostDisplayMode), Z_Construct_UEnum_Engine_ENavCostDisplay, METADATA_PARAMS(NewProp_CostDisplayMode_MetaData, ARRAY_COUNT(NewProp_CostDisplayMode_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldBeVisibleInGame_MetaData[] = {
				{ "Category", "Debug" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTestingActor.h" },
			};
#endif
			auto NewProp_bShouldBeVisibleInGame_SetBit = [](void* Obj){ ((ANavigationTestingActor*)Obj)->bShouldBeVisibleInGame = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldBeVisibleInGame = { UE4CodeGen_Private::EPropertyClass::Bool, "bShouldBeVisibleInGame", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ANavigationTestingActor), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bShouldBeVisibleInGame_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bShouldBeVisibleInGame_MetaData, ARRAY_COUNT(NewProp_bShouldBeVisibleInGame_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowDiffWithPreviousStep_MetaData[] = {
				{ "Category", "Debug" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTestingActor.h" },
				{ "ToolTip", "show which nodes were modified in current A* step" },
			};
#endif
			auto NewProp_bShowDiffWithPreviousStep_SetBit = [](void* Obj){ ((ANavigationTestingActor*)Obj)->bShowDiffWithPreviousStep = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowDiffWithPreviousStep = { UE4CodeGen_Private::EPropertyClass::Bool, "bShowDiffWithPreviousStep", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ANavigationTestingActor), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bShowDiffWithPreviousStep_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bShowDiffWithPreviousStep_MetaData, ARRAY_COUNT(NewProp_bShowDiffWithPreviousStep_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowBestPath_MetaData[] = {
				{ "Category", "Debug" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTestingActor.h" },
				{ "ToolTip", "show current best path" },
			};
#endif
			auto NewProp_bShowBestPath_SetBit = [](void* Obj){ ((ANavigationTestingActor*)Obj)->bShowBestPath = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowBestPath = { UE4CodeGen_Private::EPropertyClass::Bool, "bShowBestPath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ANavigationTestingActor), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bShowBestPath_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bShowBestPath_MetaData, ARRAY_COUNT(NewProp_bShowBestPath_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowNodePool_MetaData[] = {
				{ "Category", "Debug" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTestingActor.h" },
				{ "ToolTip", "show polys from open (orange) and closed (yellow) sets" },
			};
#endif
			auto NewProp_bShowNodePool_SetBit = [](void* Obj){ ((ANavigationTestingActor*)Obj)->bShowNodePool = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowNodePool = { UE4CodeGen_Private::EPropertyClass::Bool, "bShowNodePool", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ANavigationTestingActor), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bShowNodePool_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bShowNodePool_MetaData, ARRAY_COUNT(NewProp_bShowNodePool_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawDistanceToWall_MetaData[] = {
				{ "Category", "Query" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTestingActor.h" },
			};
#endif
			auto NewProp_bDrawDistanceToWall_SetBit = [](void* Obj){ ((ANavigationTestingActor*)Obj)->bDrawDistanceToWall = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawDistanceToWall = { UE4CodeGen_Private::EPropertyClass::Bool, "bDrawDistanceToWall", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ANavigationTestingActor), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDrawDistanceToWall_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDrawDistanceToWall_MetaData, ARRAY_COUNT(NewProp_bDrawDistanceToWall_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGatherDetailedInfo_MetaData[] = {
				{ "Category", "Pathfinding" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTestingActor.h" },
				{ "ToolTip", "if set, all steps of A* algorithm will be accessible for debugging" },
			};
#endif
			auto NewProp_bGatherDetailedInfo_SetBit = [](void* Obj){ ((ANavigationTestingActor*)Obj)->bGatherDetailedInfo = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGatherDetailedInfo = { UE4CodeGen_Private::EPropertyClass::Bool, "bGatherDetailedInfo", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ANavigationTestingActor), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bGatherDetailedInfo_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bGatherDetailedInfo_MetaData, ARRAY_COUNT(NewProp_bGatherDetailedInfo_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseHierarchicalPathfinding_MetaData[] = {
				{ "Category", "Pathfinding" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTestingActor.h" },
			};
#endif
			auto NewProp_bUseHierarchicalPathfinding_SetBit = [](void* Obj){ ((ANavigationTestingActor*)Obj)->bUseHierarchicalPathfinding = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseHierarchicalPathfinding = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseHierarchicalPathfinding", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ANavigationTestingActor), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseHierarchicalPathfinding_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseHierarchicalPathfinding_MetaData, ARRAY_COUNT(NewProp_bUseHierarchicalPathfinding_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSearchStart_MetaData[] = {
				{ "Category", "Pathfinding" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTestingActor.h" },
			};
#endif
			auto NewProp_bSearchStart_SetBit = [](void* Obj){ ((ANavigationTestingActor*)Obj)->bSearchStart = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSearchStart = { UE4CodeGen_Private::EPropertyClass::Bool, "bSearchStart", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ANavigationTestingActor), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSearchStart_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSearchStart_MetaData, ARRAY_COUNT(NewProp_bSearchStart_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bProjectedLocationValid_MetaData[] = {
				{ "Category", "AgentStatus" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTestingActor.h" },
			};
#endif
			auto NewProp_bProjectedLocationValid_SetBit = [](void* Obj){ ((ANavigationTestingActor*)Obj)->bProjectedLocationValid = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bProjectedLocationValid = { UE4CodeGen_Private::EPropertyClass::Bool, "bProjectedLocationValid", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ANavigationTestingActor), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bProjectedLocationValid_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bProjectedLocationValid_MetaData, ARRAY_COUNT(NewProp_bProjectedLocationValid_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectedLocation_MetaData[] = {
				{ "Category", "AgentStatus" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTestingActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProjectedLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "ProjectedLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020015, 1, nullptr, STRUCT_OFFSET(ANavigationTestingActor, ProjectedLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_ProjectedLocation_MetaData, ARRAY_COUNT(NewProp_ProjectedLocation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyNavData_MetaData[] = {
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTestingActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyNavData = { UE4CodeGen_Private::EPropertyClass::Object, "MyNavData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, STRUCT_OFFSET(ANavigationTestingActor, MyNavData), Z_Construct_UClass_ANavigationData_NoRegister, METADATA_PARAMS(NewProp_MyNavData_MetaData, ARRAY_COUNT(NewProp_MyNavData_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueryingExtent_MetaData[] = {
				{ "Category", "Agent" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTestingActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_QueryingExtent = { UE4CodeGen_Private::EPropertyClass::Struct, "QueryingExtent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ANavigationTestingActor, QueryingExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_QueryingExtent_MetaData, ARRAY_COUNT(NewProp_QueryingExtent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavAgentProps_MetaData[] = {
				{ "Category", "Agent" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTestingActor.h" },
				{ "ToolTip", "@todo document" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NavAgentProps = { UE4CodeGen_Private::EPropertyClass::Struct, "NavAgentProps", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ANavigationTestingActor, NavAgentProps), Z_Construct_UScriptStruct_FNavAgentProperties, METADATA_PARAMS(NewProp_NavAgentProps_MetaData, ARRAY_COUNT(NewProp_NavAgentProps_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bActAsNavigationInvoker_MetaData[] = {
				{ "Category", "Navigation" },
				{ "InlineEditConditionToggle", "" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTestingActor.h" },
			};
#endif
			auto NewProp_bActAsNavigationInvoker_SetBit = [](void* Obj){ ((ANavigationTestingActor*)Obj)->bActAsNavigationInvoker = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bActAsNavigationInvoker = { UE4CodeGen_Private::EPropertyClass::Bool, "bActAsNavigationInvoker", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ANavigationTestingActor), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bActAsNavigationInvoker_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bActAsNavigationInvoker_MetaData, ARRAY_COUNT(NewProp_bActAsNavigationInvoker_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InvokerComponent_MetaData[] = {
				{ "Category", "Navigation" },
				{ "EditCondition", "bActAsNavigationInvoker" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTestingActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InvokerComponent = { UE4CodeGen_Private::EPropertyClass::Object, "InvokerComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000080009, 1, nullptr, STRUCT_OFFSET(ANavigationTestingActor, InvokerComponent), Z_Construct_UClass_UNavigationInvokerComponent_NoRegister, METADATA_PARAMS(NewProp_InvokerComponent_MetaData, ARRAY_COUNT(NewProp_InvokerComponent_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EdRenderComp_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTestingActor.h" },
				{ "ToolTip", "Editor Preview" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EdRenderComp = { UE4CodeGen_Private::EPropertyClass::Object, "EdRenderComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000800080008, 1, nullptr, STRUCT_OFFSET(ANavigationTestingActor, EdRenderComp), Z_Construct_UClass_UNavTestRenderingComponent_NoRegister, METADATA_PARAMS(NewProp_EdRenderComp_MetaData, ARRAY_COUNT(NewProp_EdRenderComp_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CapsuleComponent_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTestingActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CapsuleComponent = { UE4CodeGen_Private::EPropertyClass::Object, "CapsuleComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000080008, 1, nullptr, STRUCT_OFFSET(ANavigationTestingActor, CapsuleComponent), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(NewProp_CapsuleComponent_MetaData, ARRAY_COUNT(NewProp_CapsuleComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OffsetFromCornersDistance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ShowStepIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FilterClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OtherActor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PathfindingSteps,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PathCost,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PathfindingTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bPathSearchOutOfNodes,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bPathIsPartial,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bPathExist,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TextCanvasOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CostDisplayMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bShouldBeVisibleInGame,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bShowDiffWithPreviousStep,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bShowBestPath,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bShowNodePool,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDrawDistanceToWall,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bGatherDetailedInfo,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseHierarchicalPathfinding,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSearchStart,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bProjectedLocationValid,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ProjectedLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MyNavData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_QueryingExtent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NavAgentProps,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bActAsNavigationInvoker,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InvokerComponent,
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EdRenderComp,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CapsuleComponent,
			};
			static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[] = {
				{ Z_Construct_UClass_UNavAgentInterface_NoRegister, (int32)VTABLE_OFFSET(ANavigationTestingActor, INavAgentInterface), false },
				{ Z_Construct_UClass_UNavPathObserverInterface_NoRegister, (int32)VTABLE_OFFSET(ANavigationTestingActor, INavPathObserverInterface), false },
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ANavigationTestingActor>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ANavigationTestingActor::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
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
	IMPLEMENT_CLASS(ANavigationTestingActor, 2340048139);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANavigationTestingActor(Z_Construct_UClass_ANavigationTestingActor, &ANavigationTestingActor::StaticClass, TEXT("/Script/Engine"), TEXT("ANavigationTestingActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANavigationTestingActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
