// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Particles/TypeData/ParticleModuleTypeDataAnimTrail.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleTypeDataAnimTrail() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleTypeDataAnimTrail_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleTypeDataAnimTrail();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleTypeDataBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UParticleModuleTypeDataAnimTrail::StaticRegisterNativesUParticleModuleTypeDataAnimTrail()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleTypeDataAnimTrail_NoRegister()
	{
		return UParticleModuleTypeDataAnimTrail::StaticClass();
	}
	UClass* Z_Construct_UClass_UParticleModuleTypeDataAnimTrail()
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
				{ "DisplayName", "AnimTrail Data" },
				{ "HideCategories", "Object Object Object" },
				{ "IncludePath", "Particles/TypeData/ParticleModuleTypeDataAnimTrail.h" },
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataAnimTrail.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidthTessellationStepSize_MetaData[] = {
				{ "Category", "Rendering" },
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataAnimTrail.h" },
				{ "ToolTip", "The width step size for tessellation.\nThis is the number of world units change in the width required to warrant an additional tessellation point. If 0 then there is no width tessellation." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WidthTessellationStepSize = { UE4CodeGen_Private::EPropertyClass::Float, "WidthTessellationStepSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleTypeDataAnimTrail, WidthTessellationStepSize), METADATA_PARAMS(NewProp_WidthTessellationStepSize_MetaData, ARRAY_COUNT(NewProp_WidthTessellationStepSize_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TangentTessellationStepSize_MetaData[] = {
				{ "Category", "Rendering" },
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataAnimTrail.h" },
				{ "ToolTip", "The tangent scalar for tessellation.\nThis is the degree change in the tangent direction [0...180] required to warrant an additional tessellation point. If 0 then there is no tangent tessellation." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TangentTessellationStepSize = { UE4CodeGen_Private::EPropertyClass::Float, "TangentTessellationStepSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleTypeDataAnimTrail, TangentTessellationStepSize), METADATA_PARAMS(NewProp_TangentTessellationStepSize_MetaData, ARRAY_COUNT(NewProp_TangentTessellationStepSize_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceTessellationStepSize_MetaData[] = {
				{ "Category", "Rendering" },
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataAnimTrail.h" },
				{ "ToolTip", "The distance step size for tessellation.\n# Tessellation Points = TruncToInt((Distance Between Spawned Particles) / DistanceTessellationStepSize)). If 0 then there is no distance tessellation." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceTessellationStepSize = { UE4CodeGen_Private::EPropertyClass::Float, "DistanceTessellationStepSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleTypeDataAnimTrail, DistanceTessellationStepSize), METADATA_PARAMS(NewProp_DistanceTessellationStepSize_MetaData, ARRAY_COUNT(NewProp_DistanceTessellationStepSize_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TilingDistance_MetaData[] = {
				{ "Category", "Rendering" },
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataAnimTrail.h" },
				{ "ToolTip", "The (estimated) covered distance to tile the 2nd UV set at.\nIf 0.0, a second UV set will not be passed in." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TilingDistance = { UE4CodeGen_Private::EPropertyClass::Float, "TilingDistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleTypeDataAnimTrail, TilingDistance), METADATA_PARAMS(NewProp_TilingDistance_MetaData, ARRAY_COUNT(NewProp_TilingDistance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTangentRecalculationEveryFrame_MetaData[] = {
				{ "Category", "Trail" },
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataAnimTrail.h" },
				{ "ToolTip", "If true, recalculate tangents every frame to allow velocity/acceleration to be applied" },
			};
#endif
			auto NewProp_bTangentRecalculationEveryFrame_SetBit = [](void* Obj){ ((UParticleModuleTypeDataAnimTrail*)Obj)->bTangentRecalculationEveryFrame = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTangentRecalculationEveryFrame = { UE4CodeGen_Private::EPropertyClass::Bool, "bTangentRecalculationEveryFrame", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleTypeDataAnimTrail), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bTangentRecalculationEveryFrame_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bTangentRecalculationEveryFrame_MetaData, ARRAY_COUNT(NewProp_bTangentRecalculationEveryFrame_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnablePreviousTangentRecalculation_MetaData[] = {
				{ "Category", "Trail" },
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataAnimTrail.h" },
				{ "ToolTip", "If true, recalculate the previous tangent when a new particle is spawned" },
			};
#endif
			auto NewProp_bEnablePreviousTangentRecalculation_SetBit = [](void* Obj){ ((UParticleModuleTypeDataAnimTrail*)Obj)->bEnablePreviousTangentRecalculation = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnablePreviousTangentRecalculation = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnablePreviousTangentRecalculation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleTypeDataAnimTrail), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnablePreviousTangentRecalculation_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnablePreviousTangentRecalculation_MetaData, ARRAY_COUNT(NewProp_bEnablePreviousTangentRecalculation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDeadTrailsOnDeactivate_MetaData[] = {
				{ "Category", "Trail" },
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataAnimTrail.h" },
				{ "ToolTip", "If true, when the system is deactivated, mark trails as dead.\nThis means they will still render, but will not have more particles\nadded to them, even if the system re-activates..." },
			};
#endif
			auto NewProp_bDeadTrailsOnDeactivate_SetBit = [](void* Obj){ ((UParticleModuleTypeDataAnimTrail*)Obj)->bDeadTrailsOnDeactivate = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDeadTrailsOnDeactivate = { UE4CodeGen_Private::EPropertyClass::Bool, "bDeadTrailsOnDeactivate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleTypeDataAnimTrail), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDeadTrailsOnDeactivate_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDeadTrailsOnDeactivate_MetaData, ARRAY_COUNT(NewProp_bDeadTrailsOnDeactivate_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WidthTessellationStepSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TangentTessellationStepSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DistanceTessellationStepSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TilingDistance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bTangentRecalculationEveryFrame,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnablePreviousTangentRecalculation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDeadTrailsOnDeactivate,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UParticleModuleTypeDataAnimTrail>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UParticleModuleTypeDataAnimTrail::StaticClass,
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
	IMPLEMENT_CLASS(UParticleModuleTypeDataAnimTrail, 2269728875);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleTypeDataAnimTrail(Z_Construct_UClass_UParticleModuleTypeDataAnimTrail, &UParticleModuleTypeDataAnimTrail::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleTypeDataAnimTrail"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleTypeDataAnimTrail);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
