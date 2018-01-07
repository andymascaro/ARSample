// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Particles/TypeData/ParticleModuleTypeDataRibbon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleTypeDataRibbon() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETrailsRenderAxisOption();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleTypeDataRibbon_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleTypeDataRibbon();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleTypeDataBase();
// End Cross Module References
	static UEnum* ETrailsRenderAxisOption_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETrailsRenderAxisOption, Z_Construct_UPackage__Script_Engine(), TEXT("ETrailsRenderAxisOption"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETrailsRenderAxisOption(ETrailsRenderAxisOption_StaticEnum, TEXT("/Script/Engine"), TEXT("ETrailsRenderAxisOption"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ETrailsRenderAxisOption_CRC() { return 4059156160U; }
	UEnum* Z_Construct_UEnum_Engine_ETrailsRenderAxisOption()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETrailsRenderAxisOption"), 0, Get_Z_Construct_UEnum_Engine_ETrailsRenderAxisOption_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Trails_CameraUp", (int64)Trails_CameraUp },
				{ "Trails_SourceUp", (int64)Trails_SourceUp },
				{ "Trails_WorldUp", (int64)Trails_WorldUp },
				{ "Trails_MAX", (int64)Trails_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataRibbon.h" },
				{ "Trails_CameraUp.DisplayName", "Camera Up" },
				{ "Trails_SourceUp.DisplayName", "Source Up" },
				{ "Trails_WorldUp.DisplayName", "World Up" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ETrailsRenderAxisOption",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"ETrailsRenderAxisOption",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UParticleModuleTypeDataRibbon::StaticRegisterNativesUParticleModuleTypeDataRibbon()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleTypeDataRibbon_NoRegister()
	{
		return UParticleModuleTypeDataRibbon::StaticClass();
	}
	UClass* Z_Construct_UClass_UParticleModuleTypeDataRibbon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UParticleModuleTypeDataBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "Ribbon Data" },
				{ "HideCategories", "Object Object Object" },
				{ "IncludePath", "Particles/TypeData/ParticleModuleTypeDataRibbon.h" },
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataRibbon.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TangentTessellationScalar_MetaData[] = {
				{ "Category", "Rendering" },
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataRibbon.h" },
				{ "ToolTip", "The tangent scalar for tessellation.\nAngles between tangent A and B are mapped to [0.0f .. 1.0f]\nThis is then multiplied by TangentTessellationScalar to give the number of points to tessellate" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TangentTessellationScalar = { UE4CodeGen_Private::EPropertyClass::Float, "TangentTessellationScalar", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleTypeDataRibbon, TangentTessellationScalar), METADATA_PARAMS(NewProp_TangentTessellationScalar_MetaData, ARRAY_COUNT(NewProp_TangentTessellationScalar_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableTangentDiffInterpScale_MetaData[] = {
				{ "Category", "Rendering" },
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataRibbon.h" },
				{ "ToolTip", "If this flag is enabled, the system will scale the number of interpolated vertices\nbased on the difference in the tangents of neighboring particles.\nEach pair of neighboring particles will compute the following CheckTangent value:\n        CheckTangent = ((ParticleA Tangent DOT ParticleB Tangent) - 1.0f) * 0.5f\nIf CheckTangent is LESS THAN 0.5, then the DistanceTessellationStepSize will be\nscaled based on the result. This will map so that from parallel to orthogonal\n(0..90 degrees) will scale from [0..1]. Anything greater than 90 degrees will clamp\nat a scale of 1." },
			};
#endif
			auto NewProp_bEnableTangentDiffInterpScale_SetBit = [](void* Obj){ ((UParticleModuleTypeDataRibbon*)Obj)->bEnableTangentDiffInterpScale = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableTangentDiffInterpScale = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableTangentDiffInterpScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleTypeDataRibbon), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnableTangentDiffInterpScale_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnableTangentDiffInterpScale_MetaData, ARRAY_COUNT(NewProp_bEnableTangentDiffInterpScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceTessellationStepSize_MetaData[] = {
				{ "Category", "Rendering" },
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataRibbon.h" },
				{ "ToolTip", "The distance step size for tessellation.\n# Tessellation Points = TruncToInt((Distance Between Spawned Particles) / DistanceTessellationStepSize))" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceTessellationStepSize = { UE4CodeGen_Private::EPropertyClass::Float, "DistanceTessellationStepSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleTypeDataRibbon, DistanceTessellationStepSize), METADATA_PARAMS(NewProp_DistanceTessellationStepSize_MetaData, ARRAY_COUNT(NewProp_DistanceTessellationStepSize_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TilingDistance_MetaData[] = {
				{ "Category", "Rendering" },
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataRibbon.h" },
				{ "ToolTip", "The (estimated) covered distance to tile the 2nd UV set at.\nIf 0.0, a second UV set will not be passed in." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TilingDistance = { UE4CodeGen_Private::EPropertyClass::Float, "TilingDistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleTypeDataRibbon, TilingDistance), METADATA_PARAMS(NewProp_TilingDistance_MetaData, ARRAY_COUNT(NewProp_TilingDistance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRenderTessellation_MetaData[] = {
				{ "Category", "Rendering" },
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataRibbon.h" },
				{ "ToolTip", "If true, render the tessellated path between spawned particles" },
			};
#endif
			auto NewProp_bRenderTessellation_SetBit = [](void* Obj){ ((UParticleModuleTypeDataRibbon*)Obj)->bRenderTessellation = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRenderTessellation = { UE4CodeGen_Private::EPropertyClass::Bool, "bRenderTessellation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleTypeDataRibbon), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bRenderTessellation_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bRenderTessellation_MetaData, ARRAY_COUNT(NewProp_bRenderTessellation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRenderTangents_MetaData[] = {
				{ "Category", "Rendering" },
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataRibbon.h" },
				{ "ToolTip", "If true, render a line showing the tangent at each spawned particle point along the trail" },
			};
#endif
			auto NewProp_bRenderTangents_SetBit = [](void* Obj){ ((UParticleModuleTypeDataRibbon*)Obj)->bRenderTangents = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRenderTangents = { UE4CodeGen_Private::EPropertyClass::Bool, "bRenderTangents", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleTypeDataRibbon), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bRenderTangents_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bRenderTangents_MetaData, ARRAY_COUNT(NewProp_bRenderTangents_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRenderSpawnPoints_MetaData[] = {
				{ "Category", "Rendering" },
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataRibbon.h" },
				{ "ToolTip", "If true, render stars at each spawned particle point along the trail" },
			};
#endif
			auto NewProp_bRenderSpawnPoints_SetBit = [](void* Obj){ ((UParticleModuleTypeDataRibbon*)Obj)->bRenderSpawnPoints = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRenderSpawnPoints = { UE4CodeGen_Private::EPropertyClass::Bool, "bRenderSpawnPoints", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleTypeDataRibbon), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bRenderSpawnPoints_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bRenderSpawnPoints_MetaData, ARRAY_COUNT(NewProp_bRenderSpawnPoints_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRenderGeometry_MetaData[] = {
				{ "Category", "Rendering" },
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataRibbon.h" },
				{ "ToolTip", "If true, render the trail geometry (this should typically be on)" },
			};
#endif
			auto NewProp_bRenderGeometry_SetBit = [](void* Obj){ ((UParticleModuleTypeDataRibbon*)Obj)->bRenderGeometry = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRenderGeometry = { UE4CodeGen_Private::EPropertyClass::Bool, "bRenderGeometry", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleTypeDataRibbon), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bRenderGeometry_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bRenderGeometry_MetaData, ARRAY_COUNT(NewProp_bRenderGeometry_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TangentSpawningScalar_MetaData[] = {
				{ "Category", "Spawn" },
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataRibbon.h" },
				{ "ToolTip", "The tangent scalar for spawning.\nAngles between tangent A and B are mapped to [0.0f .. 1.0f]\nThis is then multiplied by TangentTessellationScalar to give the number of particles to spawn" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TangentSpawningScalar = { UE4CodeGen_Private::EPropertyClass::Float, "TangentSpawningScalar", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleTypeDataRibbon, TangentSpawningScalar), METADATA_PARAMS(NewProp_TangentSpawningScalar_MetaData, ARRAY_COUNT(NewProp_TangentSpawningScalar_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenderAxis_MetaData[] = {
				{ "Category", "Trail" },
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataRibbon.h" },
				{ "ToolTip", "The 'render' axis for the trail (what axis the trail is stretched out on)\n        Trails_CameraUp - Traditional camera-facing trail.\n        Trails_SourceUp - Use the up axis of the source for each spawned particle.\n        Trails_WorldUp  - Use the world up axis." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_RenderAxis = { UE4CodeGen_Private::EPropertyClass::Byte, "RenderAxis", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleTypeDataRibbon, RenderAxis), Z_Construct_UEnum_Engine_ETrailsRenderAxisOption, METADATA_PARAMS(NewProp_RenderAxis_MetaData, ARRAY_COUNT(NewProp_RenderAxis_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSpawnInitialParticle_MetaData[] = {
				{ "Category", "Trail" },
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataRibbon.h" },
				{ "ToolTip", "If true, ribbon will spawn a particle when it first starts moving" },
			};
#endif
			auto NewProp_bSpawnInitialParticle_SetBit = [](void* Obj){ ((UParticleModuleTypeDataRibbon*)Obj)->bSpawnInitialParticle = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSpawnInitialParticle = { UE4CodeGen_Private::EPropertyClass::Bool, "bSpawnInitialParticle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleTypeDataRibbon), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSpawnInitialParticle_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSpawnInitialParticle_MetaData, ARRAY_COUNT(NewProp_bSpawnInitialParticle_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTangentRecalculationEveryFrame_MetaData[] = {
				{ "Category", "Trail" },
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataRibbon.h" },
				{ "ToolTip", "If true, recalculate tangents every frame to allow velocity/acceleration to be applied" },
			};
#endif
			auto NewProp_bTangentRecalculationEveryFrame_SetBit = [](void* Obj){ ((UParticleModuleTypeDataRibbon*)Obj)->bTangentRecalculationEveryFrame = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTangentRecalculationEveryFrame = { UE4CodeGen_Private::EPropertyClass::Bool, "bTangentRecalculationEveryFrame", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleTypeDataRibbon), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bTangentRecalculationEveryFrame_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bTangentRecalculationEveryFrame_MetaData, ARRAY_COUNT(NewProp_bTangentRecalculationEveryFrame_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnablePreviousTangentRecalculation_MetaData[] = {
				{ "Category", "Trail" },
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataRibbon.h" },
				{ "ToolTip", "If true, recalculate the previous tangent when a new particle is spawned" },
			};
#endif
			auto NewProp_bEnablePreviousTangentRecalculation_SetBit = [](void* Obj){ ((UParticleModuleTypeDataRibbon*)Obj)->bEnablePreviousTangentRecalculation = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnablePreviousTangentRecalculation = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnablePreviousTangentRecalculation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleTypeDataRibbon), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnablePreviousTangentRecalculation_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnablePreviousTangentRecalculation_MetaData, ARRAY_COUNT(NewProp_bEnablePreviousTangentRecalculation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bClipSourceSegement_MetaData[] = {
				{ "Category", "Trail" },
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataRibbon.h" },
				{ "ToolTip", "If true, do not join the trail to the source position" },
			};
#endif
			auto NewProp_bClipSourceSegement_SetBit = [](void* Obj){ ((UParticleModuleTypeDataRibbon*)Obj)->bClipSourceSegement = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bClipSourceSegement = { UE4CodeGen_Private::EPropertyClass::Bool, "bClipSourceSegement", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleTypeDataRibbon), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bClipSourceSegement_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bClipSourceSegement_MetaData, ARRAY_COUNT(NewProp_bClipSourceSegement_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDeadTrailsOnSourceLoss_MetaData[] = {
				{ "Category", "Trail" },
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataRibbon.h" },
				{ "ToolTip", "If true, when the source of a trail is 'lost' (ie, the source particle\ndies), mark the current trail as dead." },
			};
#endif
			auto NewProp_bDeadTrailsOnSourceLoss_SetBit = [](void* Obj){ ((UParticleModuleTypeDataRibbon*)Obj)->bDeadTrailsOnSourceLoss = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDeadTrailsOnSourceLoss = { UE4CodeGen_Private::EPropertyClass::Bool, "bDeadTrailsOnSourceLoss", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleTypeDataRibbon), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDeadTrailsOnSourceLoss_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDeadTrailsOnSourceLoss_MetaData, ARRAY_COUNT(NewProp_bDeadTrailsOnSourceLoss_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDeadTrailsOnDeactivate_MetaData[] = {
				{ "Category", "Trail" },
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataRibbon.h" },
				{ "ToolTip", "If true, when the system is deactivated, mark trails as dead.\nThis means they will still render, but will not have more particles\nadded to them, even if the system re-activates..." },
			};
#endif
			auto NewProp_bDeadTrailsOnDeactivate_SetBit = [](void* Obj){ ((UParticleModuleTypeDataRibbon*)Obj)->bDeadTrailsOnDeactivate = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDeadTrailsOnDeactivate = { UE4CodeGen_Private::EPropertyClass::Bool, "bDeadTrailsOnDeactivate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleTypeDataRibbon), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDeadTrailsOnDeactivate_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDeadTrailsOnDeactivate_MetaData, ARRAY_COUNT(NewProp_bDeadTrailsOnDeactivate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxParticleInTrailCount_MetaData[] = {
				{ "Category", "Trail" },
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataRibbon.h" },
				{ "ToolTip", "Max particles per trail" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxParticleInTrailCount = { UE4CodeGen_Private::EPropertyClass::Int, "MaxParticleInTrailCount", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleTypeDataRibbon, MaxParticleInTrailCount), METADATA_PARAMS(NewProp_MaxParticleInTrailCount_MetaData, ARRAY_COUNT(NewProp_MaxParticleInTrailCount_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxTrailCount_MetaData[] = {
				{ "Category", "Trail" },
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataRibbon.h" },
				{ "ToolTip", "The number of live trails" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxTrailCount = { UE4CodeGen_Private::EPropertyClass::Int, "MaxTrailCount", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleTypeDataRibbon, MaxTrailCount), METADATA_PARAMS(NewProp_MaxTrailCount_MetaData, ARRAY_COUNT(NewProp_MaxTrailCount_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SheetsPerTrail_MetaData[] = {
				{ "Category", "Trail" },
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataRibbon.h" },
				{ "ToolTip", "The number of sheets to render for the trail." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_SheetsPerTrail = { UE4CodeGen_Private::EPropertyClass::Int, "SheetsPerTrail", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleTypeDataRibbon, SheetsPerTrail), METADATA_PARAMS(NewProp_SheetsPerTrail_MetaData, ARRAY_COUNT(NewProp_SheetsPerTrail_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxTessellationBetweenParticles_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataRibbon.h" },
				{ "ToolTip", "The maximum amount to tessellate between two particles of the trail.\nDepending on the distance between the particles and the tangent change, the\nsystem will select a number of tessellation points\n        [0..MaxTessellationBetweenParticles]" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxTessellationBetweenParticles = { UE4CodeGen_Private::EPropertyClass::Int, "MaxTessellationBetweenParticles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UParticleModuleTypeDataRibbon, MaxTessellationBetweenParticles), METADATA_PARAMS(NewProp_MaxTessellationBetweenParticles_MetaData, ARRAY_COUNT(NewProp_MaxTessellationBetweenParticles_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TangentTessellationScalar,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnableTangentDiffInterpScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DistanceTessellationStepSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TilingDistance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bRenderTessellation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bRenderTangents,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bRenderSpawnPoints,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bRenderGeometry,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TangentSpawningScalar,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RenderAxis,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSpawnInitialParticle,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bTangentRecalculationEveryFrame,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnablePreviousTangentRecalculation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bClipSourceSegement,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDeadTrailsOnSourceLoss,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDeadTrailsOnDeactivate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxParticleInTrailCount,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxTrailCount,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SheetsPerTrail,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxTessellationBetweenParticles,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UParticleModuleTypeDataRibbon>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UParticleModuleTypeDataRibbon::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00081080u,
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
	IMPLEMENT_CLASS(UParticleModuleTypeDataRibbon, 2552082438);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleTypeDataRibbon(Z_Construct_UClass_UParticleModuleTypeDataRibbon, &UParticleModuleTypeDataRibbon::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleTypeDataRibbon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleTypeDataRibbon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
