// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/AI/Navigation/RecastNavMesh.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRecastNavMesh() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERecastPartitioning();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_ARecastNavMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ARecastNavMesh();
	ENGINE_API UClass* Z_Construct_UClass_ANavigationData();
// End Cross Module References
	static UEnum* ERecastPartitioning_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ERecastPartitioning, Z_Construct_UPackage__Script_Engine(), TEXT("ERecastPartitioning"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERecastPartitioning(ERecastPartitioning_StaticEnum, TEXT("/Script/Engine"), TEXT("ERecastPartitioning"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ERecastPartitioning_CRC() { return 205806059U; }
	UEnum* Z_Construct_UEnum_Engine_ERecastPartitioning()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERecastPartitioning"), 0, Get_Z_Construct_UEnum_Engine_ERecastPartitioning_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERecastPartitioning::Monotone", (int64)ERecastPartitioning::Monotone },
				{ "ERecastPartitioning::Watershed", (int64)ERecastPartitioning::Watershed },
				{ "ERecastPartitioning::ChunkyMonotone", (int64)ERecastPartitioning::ChunkyMonotone },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/AI/Navigation/RecastNavMesh.h" },
				{ "ToolTip", "keep in sync with rcRegionPartitioning enum!" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ERecastPartitioning",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"ERecastPartitioning::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void ARecastNavMesh::StaticRegisterNativesARecastNavMesh()
	{
	}
	UClass* Z_Construct_UClass_ARecastNavMesh_NoRegister()
	{
		return ARecastNavMesh::StaticClass();
	}
	UClass* Z_Construct_UClass_ARecastNavMesh()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ANavigationData,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Input Rendering Tags Transform Utilities|Transformation Actor Layers Replication" },
				{ "IncludePath", "AI/Navigation/RecastNavMesh.h" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/RecastNavMesh.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VerticalDeviationFromGroundCompensation_MetaData[] = {
				{ "Category", "Query" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/RecastNavMesh.h" },
				{ "ToolTip", "Value added to each search height to compensate for error between navmesh polys and walkable geometry" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VerticalDeviationFromGroundCompensation = { UE4CodeGen_Private::EPropertyClass::Float, "VerticalDeviationFromGroundCompensation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(ARecastNavMesh, VerticalDeviationFromGroundCompensation), METADATA_PARAMS(NewProp_VerticalDeviationFromGroundCompensation_MetaData, ARRAY_COUNT(NewProp_VerticalDeviationFromGroundCompensation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeuristicScale_MetaData[] = {
				{ "Category", "Query" },
				{ "ClampMin", "0.1" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/RecastNavMesh.h" },
				{ "ToolTip", "Euclidean distance heuristic scale used while pathfinding" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HeuristicScale = { UE4CodeGen_Private::EPropertyClass::Float, "HeuristicScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(ARecastNavMesh, HeuristicScale), METADATA_PARAMS(NewProp_HeuristicScale_MetaData, ARRAY_COUNT(NewProp_HeuristicScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileSetUpdateInterval_MetaData[] = {
				{ "ModuleRelativePath", "Classes/AI/Navigation/RecastNavMesh.h" },
				{ "ToolTip", "indicates how often we will sort navigation tiles to mach players position" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TileSetUpdateInterval = { UE4CodeGen_Private::EPropertyClass::Float, "TileSetUpdateInterval", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000004000, 1, nullptr, STRUCT_OFFSET(ARecastNavMesh, TileSetUpdateInterval), METADATA_PARAMS(NewProp_TileSetUpdateInterval_MetaData, ARRAY_COUNT(NewProp_TileSetUpdateInterval_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseVoxelCache_MetaData[] = {
				{ "ModuleRelativePath", "Classes/AI/Navigation/RecastNavMesh.h" },
				{ "ToolTip", "Cache rasterized voxels instead of just collision vertices/indices in navigation octree" },
			};
#endif
			auto NewProp_bUseVoxelCache_SetBit = [](void* Obj){ ((ARecastNavMesh*)Obj)->bUseVoxelCache = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseVoxelCache = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseVoxelCache", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000004000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ARecastNavMesh), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseVoxelCache_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseVoxelCache_MetaData, ARRAY_COUNT(NewProp_bUseVoxelCache_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowNavLinkAsPathEnd_MetaData[] = {
				{ "ModuleRelativePath", "Classes/AI/Navigation/RecastNavMesh.h" },
				{ "ToolTip", "If set, paths can end at navlink poly (not the ground one!)" },
			};
#endif
			auto NewProp_bAllowNavLinkAsPathEnd_SetBit = [](void* Obj){ ((ARecastNavMesh*)Obj)->bAllowNavLinkAsPathEnd = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowNavLinkAsPathEnd = { UE4CodeGen_Private::EPropertyClass::Bool, "bAllowNavLinkAsPathEnd", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ARecastNavMesh), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAllowNavLinkAsPathEnd_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAllowNavLinkAsPathEnd_MetaData, ARRAY_COUNT(NewProp_bAllowNavLinkAsPathEnd_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseVirtualFilters_MetaData[] = {
				{ "ModuleRelativePath", "Classes/AI/Navigation/RecastNavMesh.h" },
				{ "ToolTip", "Indicates whether default navigation filters will use virtual functions. Defaults to true." },
			};
#endif
			auto NewProp_bUseVirtualFilters_SetBit = [](void* Obj){ ((ARecastNavMesh*)Obj)->bUseVirtualFilters = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseVirtualFilters = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseVirtualFilters", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ARecastNavMesh), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseVirtualFilters_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseVirtualFilters_MetaData, ARRAY_COUNT(NewProp_bUseVirtualFilters_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStoreEmptyTileLayers_MetaData[] = {
				{ "ModuleRelativePath", "Classes/AI/Navigation/RecastNavMesh.h" },
				{ "ToolTip", "If set, tiles generated without any navmesh data will be marked to distinguish them from not generated / streamed out ones. Defaults to false." },
			};
#endif
			auto NewProp_bStoreEmptyTileLayers_SetBit = [](void* Obj){ ((ARecastNavMesh*)Obj)->bStoreEmptyTileLayers = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStoreEmptyTileLayers = { UE4CodeGen_Private::EPropertyClass::Bool, "bStoreEmptyTileLayers", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ARecastNavMesh), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bStoreEmptyTileLayers_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bStoreEmptyTileLayers_MetaData, ARRAY_COUNT(NewProp_bStoreEmptyTileLayers_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseBetterOffsetsFromCorners_MetaData[] = {
				{ "ModuleRelativePath", "Classes/AI/Navigation/RecastNavMesh.h" },
				{ "ToolTip", "TODO: switch to disable new code from OffsetFromCorners if necessary - remove it later" },
			};
#endif
			auto NewProp_bUseBetterOffsetsFromCorners_SetBit = [](void* Obj){ ((ARecastNavMesh*)Obj)->bUseBetterOffsetsFromCorners = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseBetterOffsetsFromCorners = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseBetterOffsetsFromCorners", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ARecastNavMesh), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseBetterOffsetsFromCorners_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseBetterOffsetsFromCorners_MetaData, ARRAY_COUNT(NewProp_bUseBetterOffsetsFromCorners_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDoFullyAsyncNavDataGathering_MetaData[] = {
				{ "Category", "Generation" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/RecastNavMesh.h" },
			};
#endif
			auto NewProp_bDoFullyAsyncNavDataGathering_SetBit = [](void* Obj){ ((ARecastNavMesh*)Obj)->bDoFullyAsyncNavDataGathering = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoFullyAsyncNavDataGathering = { UE4CodeGen_Private::EPropertyClass::Bool, "bDoFullyAsyncNavDataGathering", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ARecastNavMesh), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDoFullyAsyncNavDataGathering_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDoFullyAsyncNavDataGathering_MetaData, ARRAY_COUNT(NewProp_bDoFullyAsyncNavDataGathering_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMarkLowHeightAreas_MetaData[] = {
				{ "Category", "Generation" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/RecastNavMesh.h" },
				{ "ToolTip", "mark areas with insufficient free height above instead of cutting them out" },
			};
#endif
			auto NewProp_bMarkLowHeightAreas_SetBit = [](void* Obj){ ((ARecastNavMesh*)Obj)->bMarkLowHeightAreas = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMarkLowHeightAreas = { UE4CodeGen_Private::EPropertyClass::Bool, "bMarkLowHeightAreas", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ARecastNavMesh), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bMarkLowHeightAreas_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bMarkLowHeightAreas_MetaData, ARRAY_COUNT(NewProp_bMarkLowHeightAreas_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPerformVoxelFiltering_MetaData[] = {
				{ "Category", "Generation" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/RecastNavMesh.h" },
				{ "ToolTip", "controls whether voxel filterring will be applied (via FRecastTileGenerator::ApplyVoxelFilter).\n    Results in generated navemesh better fitting navigation bounds, but hits (a bit) generation performance" },
			};
#endif
			auto NewProp_bPerformVoxelFiltering_SetBit = [](void* Obj){ ((ARecastNavMesh*)Obj)->bPerformVoxelFiltering = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPerformVoxelFiltering = { UE4CodeGen_Private::EPropertyClass::Bool, "bPerformVoxelFiltering", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ARecastNavMesh), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bPerformVoxelFiltering_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bPerformVoxelFiltering_MetaData, ARRAY_COUNT(NewProp_bPerformVoxelFiltering_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSortNavigationAreasByCost_MetaData[] = {
				{ "Category", "Generation" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/RecastNavMesh.h" },
				{ "ToolTip", "Controls whether Navigation Areas will be sorted by cost before application\n    to navmesh during navmesh generation. This is relevant then there are\n    areas overlapping and we want to have area cost express area relevancy\n    as well. Setting it to true will result in having area sorted by cost,\n    but it will also increase navmesh generation cost a bit" },
			};
#endif
			auto NewProp_bSortNavigationAreasByCost_SetBit = [](void* Obj){ ((ARecastNavMesh*)Obj)->bSortNavigationAreasByCost = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSortNavigationAreasByCost = { UE4CodeGen_Private::EPropertyClass::Bool, "bSortNavigationAreasByCost", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ARecastNavMesh), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSortNavigationAreasByCost_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSortNavigationAreasByCost_MetaData, ARRAY_COUNT(NewProp_bSortNavigationAreasByCost_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LayerChunkSplits_MetaData[] = {
				{ "Category", "Generation" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/RecastNavMesh.h" },
				{ "ToolTip", "number of chunk splits (along single axis) used for layer's partitioning: ChunkyMonotone" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_LayerChunkSplits = { UE4CodeGen_Private::EPropertyClass::Int, "LayerChunkSplits", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000004001, 1, nullptr, STRUCT_OFFSET(ARecastNavMesh, LayerChunkSplits), METADATA_PARAMS(NewProp_LayerChunkSplits_MetaData, ARRAY_COUNT(NewProp_LayerChunkSplits_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RegionChunkSplits_MetaData[] = {
				{ "Category", "Generation" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/RecastNavMesh.h" },
				{ "ToolTip", "number of chunk splits (along single axis) used for region's partitioning: ChunkyMonotone" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_RegionChunkSplits = { UE4CodeGen_Private::EPropertyClass::Int, "RegionChunkSplits", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000004001, 1, nullptr, STRUCT_OFFSET(ARecastNavMesh, RegionChunkSplits), METADATA_PARAMS(NewProp_RegionChunkSplits_MetaData, ARRAY_COUNT(NewProp_RegionChunkSplits_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LayerPartitioning_MetaData[] = {
				{ "Category", "Generation" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/RecastNavMesh.h" },
				{ "ToolTip", "partitioning method for creating tile layers" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_LayerPartitioning = { UE4CodeGen_Private::EPropertyClass::Byte, "LayerPartitioning", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000004001, 1, nullptr, STRUCT_OFFSET(ARecastNavMesh, LayerPartitioning), Z_Construct_UEnum_Engine_ERecastPartitioning, METADATA_PARAMS(NewProp_LayerPartitioning_MetaData, ARRAY_COUNT(NewProp_LayerPartitioning_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RegionPartitioning_MetaData[] = {
				{ "Category", "Generation" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/RecastNavMesh.h" },
				{ "ToolTip", "partitioning method for creating navmesh polys" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_RegionPartitioning = { UE4CodeGen_Private::EPropertyClass::Byte, "RegionPartitioning", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000004001, 1, nullptr, STRUCT_OFFSET(ARecastNavMesh, RegionPartitioning), Z_Construct_UEnum_Engine_ERecastPartitioning, METADATA_PARAMS(NewProp_RegionPartitioning_MetaData, ARRAY_COUNT(NewProp_RegionPartitioning_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultMaxHierarchicalSearchNodes_MetaData[] = {
				{ "ModuleRelativePath", "Classes/AI/Navigation/RecastNavMesh.h" },
				{ "ToolTip", "specifes default limit to A* nodes used when performing hierarchical navigation queries." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultMaxHierarchicalSearchNodes = { UE4CodeGen_Private::EPropertyClass::Float, "DefaultMaxHierarchicalSearchNodes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004000, 1, nullptr, STRUCT_OFFSET(ARecastNavMesh, DefaultMaxHierarchicalSearchNodes), METADATA_PARAMS(NewProp_DefaultMaxHierarchicalSearchNodes_MetaData, ARRAY_COUNT(NewProp_DefaultMaxHierarchicalSearchNodes_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultMaxSearchNodes_MetaData[] = {
				{ "ModuleRelativePath", "Classes/AI/Navigation/RecastNavMesh.h" },
				{ "ToolTip", "specifes default limit to A* nodes used when performing navigation queries.\n    Can be overridden by passing custom FNavigationQueryFilter" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultMaxSearchNodes = { UE4CodeGen_Private::EPropertyClass::Float, "DefaultMaxSearchNodes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004000, 1, nullptr, STRUCT_OFFSET(ARecastNavMesh, DefaultMaxSearchNodes), METADATA_PARAMS(NewProp_DefaultMaxSearchNodes_MetaData, ARRAY_COUNT(NewProp_DefaultMaxSearchNodes_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultDrawDistance_MetaData[] = {
				{ "ModuleRelativePath", "Classes/AI/Navigation/RecastNavMesh.h" },
				{ "ToolTip", "navmesh draw distance in game (always visible in editor)" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultDrawDistance = { UE4CodeGen_Private::EPropertyClass::Float, "DefaultDrawDistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004000, 1, nullptr, STRUCT_OFFSET(ARecastNavMesh, DefaultDrawDistance), METADATA_PARAMS(NewProp_DefaultDrawDistance_MetaData, ARRAY_COUNT(NewProp_DefaultDrawDistance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PolyRefSaltBits_MetaData[] = {
				{ "Category", "Generation" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/RecastNavMesh.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_PolyRefSaltBits = { UE4CodeGen_Private::EPropertyClass::Int, "PolyRefSaltBits", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000020001, 1, nullptr, STRUCT_OFFSET(ARecastNavMesh, PolyRefSaltBits), METADATA_PARAMS(NewProp_PolyRefSaltBits_MetaData, ARRAY_COUNT(NewProp_PolyRefSaltBits_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PolyRefNavPolyBits_MetaData[] = {
				{ "Category", "Generation" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/RecastNavMesh.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_PolyRefNavPolyBits = { UE4CodeGen_Private::EPropertyClass::Int, "PolyRefNavPolyBits", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000020001, 1, nullptr, STRUCT_OFFSET(ARecastNavMesh, PolyRefNavPolyBits), METADATA_PARAMS(NewProp_PolyRefNavPolyBits_MetaData, ARRAY_COUNT(NewProp_PolyRefNavPolyBits_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PolyRefTileBits_MetaData[] = {
				{ "Category", "Generation" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/RecastNavMesh.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_PolyRefTileBits = { UE4CodeGen_Private::EPropertyClass::Int, "PolyRefTileBits", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000020001, 1, nullptr, STRUCT_OFFSET(ARecastNavMesh, PolyRefTileBits), METADATA_PARAMS(NewProp_PolyRefTileBits_MetaData, ARRAY_COUNT(NewProp_PolyRefTileBits_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileNumberHardLimit_MetaData[] = {
				{ "Category", "Generation" },
				{ "ClampMin", "1" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/RecastNavMesh.h" },
				{ "ToolTip", "Absolute hard limit to number of navmesh tiles. Be very, very careful while modifying it while\n    having big maps with navmesh. A single, empty tile takes 176 bytes and empty tiles are\n    allocated up front (subject to change, but that's where it's at now)\n    @note TileNumberHardLimit is always rounded up to the closest power of 2" },
				{ "UIMin", "1" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_TileNumberHardLimit = { UE4CodeGen_Private::EPropertyClass::Int, "TileNumberHardLimit", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000004001, 1, nullptr, STRUCT_OFFSET(ARecastNavMesh, TileNumberHardLimit), METADATA_PARAMS(NewProp_TileNumberHardLimit_MetaData, ARRAY_COUNT(NewProp_TileNumberHardLimit_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSimultaneousTileGenerationJobsCount_MetaData[] = {
				{ "Category", "Generation" },
				{ "ClampMin", "0" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/RecastNavMesh.h" },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxSimultaneousTileGenerationJobsCount = { UE4CodeGen_Private::EPropertyClass::Int, "MaxSimultaneousTileGenerationJobsCount", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000004001, 1, nullptr, STRUCT_OFFSET(ARecastNavMesh, MaxSimultaneousTileGenerationJobsCount), METADATA_PARAMS(NewProp_MaxSimultaneousTileGenerationJobsCount_MetaData, ARRAY_COUNT(NewProp_MaxSimultaneousTileGenerationJobsCount_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSimplificationError_MetaData[] = {
				{ "Category", "Generation" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/RecastNavMesh.h" },
				{ "ToolTip", "How much navigable shapes can get simplified - the higher the value the more freedom" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxSimplificationError = { UE4CodeGen_Private::EPropertyClass::Float, "MaxSimplificationError", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(ARecastNavMesh, MaxSimplificationError), METADATA_PARAMS(NewProp_MaxSimplificationError_MetaData, ARRAY_COUNT(NewProp_MaxSimplificationError_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MergeRegionSize_MetaData[] = {
				{ "Category", "Generation" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/RecastNavMesh.h" },
				{ "ToolTip", "The size limit of regions to be merged with bigger regions (watershed partitioning only)" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MergeRegionSize = { UE4CodeGen_Private::EPropertyClass::Float, "MergeRegionSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(ARecastNavMesh, MergeRegionSize), METADATA_PARAMS(NewProp_MergeRegionSize_MetaData, ARRAY_COUNT(NewProp_MergeRegionSize_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinRegionArea_MetaData[] = {
				{ "Category", "Generation" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/RecastNavMesh.h" },
				{ "ToolTip", "The minimum dimension of area. Areas smaller than this will be discarded" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinRegionArea = { UE4CodeGen_Private::EPropertyClass::Float, "MinRegionArea", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(ARecastNavMesh, MinRegionArea), METADATA_PARAMS(NewProp_MinRegionArea_MetaData, ARRAY_COUNT(NewProp_MinRegionArea_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AgentMaxStepHeight_MetaData[] = {
				{ "Category", "Generation" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/RecastNavMesh.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AgentMaxStepHeight = { UE4CodeGen_Private::EPropertyClass::Float, "AgentMaxStepHeight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(ARecastNavMesh, AgentMaxStepHeight), METADATA_PARAMS(NewProp_AgentMaxStepHeight_MetaData, ARRAY_COUNT(NewProp_AgentMaxStepHeight_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AgentMaxSlope_MetaData[] = {
				{ "Category", "Generation" },
				{ "ClampMax", "89.0" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/RecastNavMesh.h" },
				{ "ToolTip", "The maximum slope (angle) that the agent can move on." },
				{ "UIMax", "89.0" },
				{ "UIMin", "0.0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AgentMaxSlope = { UE4CodeGen_Private::EPropertyClass::Float, "AgentMaxSlope", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(ARecastNavMesh, AgentMaxSlope), METADATA_PARAMS(NewProp_AgentMaxSlope_MetaData, ARRAY_COUNT(NewProp_AgentMaxSlope_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AgentMaxHeight_MetaData[] = {
				{ "Category", "Generation" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/RecastNavMesh.h" },
				{ "ToolTip", "Size of the tallest agent that will path with this navmesh." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AgentMaxHeight = { UE4CodeGen_Private::EPropertyClass::Float, "AgentMaxHeight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(ARecastNavMesh, AgentMaxHeight), METADATA_PARAMS(NewProp_AgentMaxHeight_MetaData, ARRAY_COUNT(NewProp_AgentMaxHeight_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AgentHeight_MetaData[] = {
				{ "Category", "Generation" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/RecastNavMesh.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AgentHeight = { UE4CodeGen_Private::EPropertyClass::Float, "AgentHeight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(ARecastNavMesh, AgentHeight), METADATA_PARAMS(NewProp_AgentHeight_MetaData, ARRAY_COUNT(NewProp_AgentHeight_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AgentRadius_MetaData[] = {
				{ "Category", "Generation" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/RecastNavMesh.h" },
				{ "ToolTip", "Radius of smallest agent to traverse this navmesh" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AgentRadius = { UE4CodeGen_Private::EPropertyClass::Float, "AgentRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(ARecastNavMesh, AgentRadius), METADATA_PARAMS(NewProp_AgentRadius_MetaData, ARRAY_COUNT(NewProp_AgentRadius_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CellHeight_MetaData[] = {
				{ "Category", "Generation" },
				{ "ClampMax", "1024.0" },
				{ "ClampMin", "1.0" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/RecastNavMesh.h" },
				{ "ToolTip", "vertical size of voxelization cell" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CellHeight = { UE4CodeGen_Private::EPropertyClass::Float, "CellHeight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(ARecastNavMesh, CellHeight), METADATA_PARAMS(NewProp_CellHeight_MetaData, ARRAY_COUNT(NewProp_CellHeight_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CellSize_MetaData[] = {
				{ "Category", "Generation" },
				{ "ClampMax", "1024.0" },
				{ "ClampMin", "1.0" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/RecastNavMesh.h" },
				{ "ToolTip", "horizontal size of voxelization cell" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CellSize = { UE4CodeGen_Private::EPropertyClass::Float, "CellSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(ARecastNavMesh, CellSize), METADATA_PARAMS(NewProp_CellSize_MetaData, ARRAY_COUNT(NewProp_CellSize_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileSizeUU_MetaData[] = {
				{ "Category", "Generation" },
				{ "ClampMin", "300.0" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/RecastNavMesh.h" },
				{ "ToolTip", "size of single tile, expressed in uu" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TileSizeUU = { UE4CodeGen_Private::EPropertyClass::Float, "TileSizeUU", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(ARecastNavMesh, TileSizeUU), METADATA_PARAMS(NewProp_TileSizeUU_MetaData, ARRAY_COUNT(NewProp_TileSizeUU_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TilePoolSize_MetaData[] = {
				{ "Category", "Generation" },
				{ "editcondition", "bFixedTilePoolSize" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/RecastNavMesh.h" },
				{ "ToolTip", "maximum number of tiles NavMesh can hold" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_TilePoolSize = { UE4CodeGen_Private::EPropertyClass::Int, "TilePoolSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(ARecastNavMesh, TilePoolSize), METADATA_PARAMS(NewProp_TilePoolSize_MetaData, ARRAY_COUNT(NewProp_TilePoolSize_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFixedTilePoolSize_MetaData[] = {
				{ "Category", "Generation" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/RecastNavMesh.h" },
				{ "ToolTip", "if true, the NavMesh will allocate fixed size pool for tiles, should be enabled to support streaming" },
			};
#endif
			auto NewProp_bFixedTilePoolSize_SetBit = [](void* Obj){ ((ARecastNavMesh*)Obj)->bFixedTilePoolSize = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFixedTilePoolSize = { UE4CodeGen_Private::EPropertyClass::Bool, "bFixedTilePoolSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ARecastNavMesh), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bFixedTilePoolSize_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bFixedTilePoolSize_MetaData, ARRAY_COUNT(NewProp_bFixedTilePoolSize_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrawOffset_MetaData[] = {
				{ "Category", "Display" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/RecastNavMesh.h" },
				{ "ToolTip", "vertical offset added to navmesh's debug representation for better readability" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DrawOffset = { UE4CodeGen_Private::EPropertyClass::Float, "DrawOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(ARecastNavMesh, DrawOffset), METADATA_PARAMS(NewProp_DrawOffset_MetaData, ARRAY_COUNT(NewProp_DrawOffset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawNavMesh_MetaData[] = {
				{ "Category", "Display" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/RecastNavMesh.h" },
			};
#endif
			auto NewProp_bDrawNavMesh_SetBit = [](void* Obj){ ((ARecastNavMesh*)Obj)->bDrawNavMesh = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawNavMesh = { UE4CodeGen_Private::EPropertyClass::Bool, "bDrawNavMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ARecastNavMesh), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDrawNavMesh_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDrawNavMesh_MetaData, ARRAY_COUNT(NewProp_bDrawNavMesh_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDistinctlyDrawTilesBeingBuilt_MetaData[] = {
				{ "ModuleRelativePath", "Classes/AI/Navigation/RecastNavMesh.h" },
			};
#endif
			auto NewProp_bDistinctlyDrawTilesBeingBuilt_SetBit = [](void* Obj){ ((ARecastNavMesh*)Obj)->bDistinctlyDrawTilesBeingBuilt = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDistinctlyDrawTilesBeingBuilt = { UE4CodeGen_Private::EPropertyClass::Bool, "bDistinctlyDrawTilesBeingBuilt", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ARecastNavMesh), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDistinctlyDrawTilesBeingBuilt_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDistinctlyDrawTilesBeingBuilt_MetaData, ARRAY_COUNT(NewProp_bDistinctlyDrawTilesBeingBuilt_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawOctree_MetaData[] = {
				{ "Category", "Display" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/RecastNavMesh.h" },
				{ "ToolTip", "should we draw edges of every navmesh's triangle" },
			};
#endif
			auto NewProp_bDrawOctree_SetBit = [](void* Obj){ ((ARecastNavMesh*)Obj)->bDrawOctree = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawOctree = { UE4CodeGen_Private::EPropertyClass::Bool, "bDrawOctree", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ARecastNavMesh), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDrawOctree_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDrawOctree_MetaData, ARRAY_COUNT(NewProp_bDrawOctree_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawClusters_MetaData[] = {
				{ "Category", "Display" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/RecastNavMesh.h" },
			};
#endif
			auto NewProp_bDrawClusters_SetBit = [](void* Obj){ ((ARecastNavMesh*)Obj)->bDrawClusters = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawClusters = { UE4CodeGen_Private::EPropertyClass::Bool, "bDrawClusters", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ARecastNavMesh), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDrawClusters_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDrawClusters_MetaData, ARRAY_COUNT(NewProp_bDrawClusters_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawFailedNavLinks_MetaData[] = {
				{ "Category", "Display" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/RecastNavMesh.h" },
			};
#endif
			auto NewProp_bDrawFailedNavLinks_SetBit = [](void* Obj){ ((ARecastNavMesh*)Obj)->bDrawFailedNavLinks = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawFailedNavLinks = { UE4CodeGen_Private::EPropertyClass::Bool, "bDrawFailedNavLinks", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ARecastNavMesh), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDrawFailedNavLinks_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDrawFailedNavLinks_MetaData, ARRAY_COUNT(NewProp_bDrawFailedNavLinks_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawNavLinks_MetaData[] = {
				{ "Category", "Display" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/RecastNavMesh.h" },
			};
#endif
			auto NewProp_bDrawNavLinks_SetBit = [](void* Obj){ ((ARecastNavMesh*)Obj)->bDrawNavLinks = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawNavLinks = { UE4CodeGen_Private::EPropertyClass::Bool, "bDrawNavLinks", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ARecastNavMesh), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDrawNavLinks_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDrawNavLinks_MetaData, ARRAY_COUNT(NewProp_bDrawNavLinks_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawLabelsOnPathNodes_MetaData[] = {
				{ "Category", "Display" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/RecastNavMesh.h" },
			};
#endif
			auto NewProp_bDrawLabelsOnPathNodes_SetBit = [](void* Obj){ ((ARecastNavMesh*)Obj)->bDrawLabelsOnPathNodes = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawLabelsOnPathNodes = { UE4CodeGen_Private::EPropertyClass::Bool, "bDrawLabelsOnPathNodes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ARecastNavMesh), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDrawLabelsOnPathNodes_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDrawLabelsOnPathNodes_MetaData, ARRAY_COUNT(NewProp_bDrawLabelsOnPathNodes_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawDefaultPolygonCost_MetaData[] = {
				{ "Category", "Display" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/RecastNavMesh.h" },
			};
#endif
			auto NewProp_bDrawDefaultPolygonCost_SetBit = [](void* Obj){ ((ARecastNavMesh*)Obj)->bDrawDefaultPolygonCost = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawDefaultPolygonCost = { UE4CodeGen_Private::EPropertyClass::Bool, "bDrawDefaultPolygonCost", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ARecastNavMesh), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDrawDefaultPolygonCost_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDrawDefaultPolygonCost_MetaData, ARRAY_COUNT(NewProp_bDrawDefaultPolygonCost_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawPolygonLabels_MetaData[] = {
				{ "Category", "Display" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/RecastNavMesh.h" },
			};
#endif
			auto NewProp_bDrawPolygonLabels_SetBit = [](void* Obj){ ((ARecastNavMesh*)Obj)->bDrawPolygonLabels = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawPolygonLabels = { UE4CodeGen_Private::EPropertyClass::Bool, "bDrawPolygonLabels", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ARecastNavMesh), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDrawPolygonLabels_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDrawPolygonLabels_MetaData, ARRAY_COUNT(NewProp_bDrawPolygonLabels_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawTileLabels_MetaData[] = {
				{ "Category", "Display" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/RecastNavMesh.h" },
			};
#endif
			auto NewProp_bDrawTileLabels_SetBit = [](void* Obj){ ((ARecastNavMesh*)Obj)->bDrawTileLabels = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawTileLabels = { UE4CodeGen_Private::EPropertyClass::Bool, "bDrawTileLabels", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ARecastNavMesh), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDrawTileLabels_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDrawTileLabels_MetaData, ARRAY_COUNT(NewProp_bDrawTileLabels_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawPathCollidingGeometry_MetaData[] = {
				{ "Category", "Display" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/RecastNavMesh.h" },
				{ "ToolTip", "Draw input geometry passed to the navmesh generator.  Recommend disabling other geometry rendering via viewport showflags in editor." },
			};
#endif
			auto NewProp_bDrawPathCollidingGeometry_SetBit = [](void* Obj){ ((ARecastNavMesh*)Obj)->bDrawPathCollidingGeometry = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawPathCollidingGeometry = { UE4CodeGen_Private::EPropertyClass::Bool, "bDrawPathCollidingGeometry", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ARecastNavMesh), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDrawPathCollidingGeometry_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDrawPathCollidingGeometry_MetaData, ARRAY_COUNT(NewProp_bDrawPathCollidingGeometry_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawTileBounds_MetaData[] = {
				{ "Category", "Display" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/RecastNavMesh.h" },
				{ "ToolTip", "should we draw the tile boundaries" },
			};
#endif
			auto NewProp_bDrawTileBounds_SetBit = [](void* Obj){ ((ARecastNavMesh*)Obj)->bDrawTileBounds = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawTileBounds = { UE4CodeGen_Private::EPropertyClass::Bool, "bDrawTileBounds", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ARecastNavMesh), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDrawTileBounds_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDrawTileBounds_MetaData, ARRAY_COUNT(NewProp_bDrawTileBounds_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawNavMeshEdges_MetaData[] = {
				{ "Category", "Display" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/RecastNavMesh.h" },
				{ "ToolTip", "should we draw border-edges" },
			};
#endif
			auto NewProp_bDrawNavMeshEdges_SetBit = [](void* Obj){ ((ARecastNavMesh*)Obj)->bDrawNavMeshEdges = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawNavMeshEdges = { UE4CodeGen_Private::EPropertyClass::Bool, "bDrawNavMeshEdges", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ARecastNavMesh), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDrawNavMeshEdges_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDrawNavMeshEdges_MetaData, ARRAY_COUNT(NewProp_bDrawNavMeshEdges_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawFilledPolys_MetaData[] = {
				{ "Category", "Display" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/RecastNavMesh.h" },
				{ "ToolTip", "if disabled skips filling drawn navmesh polygons" },
			};
#endif
			auto NewProp_bDrawFilledPolys_SetBit = [](void* Obj){ ((ARecastNavMesh*)Obj)->bDrawFilledPolys = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawFilledPolys = { UE4CodeGen_Private::EPropertyClass::Bool, "bDrawFilledPolys", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ARecastNavMesh), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDrawFilledPolys_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDrawFilledPolys_MetaData, ARRAY_COUNT(NewProp_bDrawFilledPolys_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawPolyEdges_MetaData[] = {
				{ "Category", "Display" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/RecastNavMesh.h" },
				{ "ToolTip", "should we draw edges of every poly (i.e. not only border-edges)" },
			};
#endif
			auto NewProp_bDrawPolyEdges_SetBit = [](void* Obj){ ((ARecastNavMesh*)Obj)->bDrawPolyEdges = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawPolyEdges = { UE4CodeGen_Private::EPropertyClass::Bool, "bDrawPolyEdges", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ARecastNavMesh), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDrawPolyEdges_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDrawPolyEdges_MetaData, ARRAY_COUNT(NewProp_bDrawPolyEdges_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawTriangleEdges_MetaData[] = {
				{ "Category", "Display" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/RecastNavMesh.h" },
				{ "ToolTip", "should we draw edges of every navmesh's triangle" },
			};
#endif
			auto NewProp_bDrawTriangleEdges_SetBit = [](void* Obj){ ((ARecastNavMesh*)Obj)->bDrawTriangleEdges = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawTriangleEdges = { UE4CodeGen_Private::EPropertyClass::Bool, "bDrawTriangleEdges", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ARecastNavMesh), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDrawTriangleEdges_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDrawTriangleEdges_MetaData, ARRAY_COUNT(NewProp_bDrawTriangleEdges_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VerticalDeviationFromGroundCompensation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HeuristicScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TileSetUpdateInterval,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseVoxelCache,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAllowNavLinkAsPathEnd,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseVirtualFilters,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bStoreEmptyTileLayers,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseBetterOffsetsFromCorners,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDoFullyAsyncNavDataGathering,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bMarkLowHeightAreas,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bPerformVoxelFiltering,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSortNavigationAreasByCost,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LayerChunkSplits,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RegionChunkSplits,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LayerPartitioning,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RegionPartitioning,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultMaxHierarchicalSearchNodes,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultMaxSearchNodes,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultDrawDistance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PolyRefSaltBits,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PolyRefNavPolyBits,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PolyRefTileBits,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TileNumberHardLimit,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxSimultaneousTileGenerationJobsCount,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxSimplificationError,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MergeRegionSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MinRegionArea,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AgentMaxStepHeight,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AgentMaxSlope,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AgentMaxHeight,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AgentHeight,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AgentRadius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CellHeight,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CellSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TileSizeUU,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TilePoolSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bFixedTilePoolSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DrawOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDrawNavMesh,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDistinctlyDrawTilesBeingBuilt,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDrawOctree,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDrawClusters,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDrawFailedNavLinks,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDrawNavLinks,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDrawLabelsOnPathNodes,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDrawDefaultPolygonCost,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDrawPolygonLabels,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDrawTileLabels,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDrawPathCollidingGeometry,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDrawTileBounds,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDrawNavMeshEdges,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDrawFilledPolys,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDrawPolyEdges,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDrawTriangleEdges,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ARecastNavMesh>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ARecastNavMesh::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900286u,
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
	IMPLEMENT_CLASS(ARecastNavMesh, 4278582250);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARecastNavMesh(Z_Construct_UClass_ARecastNavMesh, &ARecastNavMesh::StaticClass, TEXT("/Script/Engine"), TEXT("ARecastNavMesh"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARecastNavMesh);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
