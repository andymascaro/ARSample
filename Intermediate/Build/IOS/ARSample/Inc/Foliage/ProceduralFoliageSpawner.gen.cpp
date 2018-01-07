// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/ProceduralFoliageSpawner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProceduralFoliageSpawner() {}
// Cross Module References
	FOLIAGE_API UClass* Z_Construct_UClass_UProceduralFoliageSpawner_NoRegister();
	FOLIAGE_API UClass* Z_Construct_UClass_UProceduralFoliageSpawner();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Foliage();
	FOLIAGE_API UFunction* Z_Construct_UFunction_UProceduralFoliageSpawner_Simulate();
	FOLIAGE_API UScriptStruct* Z_Construct_UScriptStruct_FFoliageTypeObject();
// End Cross Module References
	void UProceduralFoliageSpawner::StaticRegisterNativesUProceduralFoliageSpawner()
	{
		UClass* Class = UProceduralFoliageSpawner::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Simulate", (Native)&UProceduralFoliageSpawner::execSimulate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UProceduralFoliageSpawner_Simulate()
	{
		struct ProceduralFoliageSpawner_eventSimulate_Parms
		{
			int32 NumSteps;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumSteps = { UE4CodeGen_Private::EPropertyClass::Int, "NumSteps", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ProceduralFoliageSpawner_eventSimulate_Parms, NumSteps), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NumSteps,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "ProceduralFoliageSimulation" },
				{ "CPP_Default_NumSteps", "-1" },
				{ "ModuleRelativePath", "Public/ProceduralFoliageSpawner.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UProceduralFoliageSpawner, "Simulate", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ProceduralFoliageSpawner_eventSimulate_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UProceduralFoliageSpawner_NoRegister()
	{
		return UProceduralFoliageSpawner::StaticClass();
	}
	UClass* Z_Construct_UClass_UProceduralFoliageSpawner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_Foliage,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UProceduralFoliageSpawner_Simulate, "Simulate" }, // 2091901424
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "ProceduralFoliageSpawner.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/ProceduralFoliageSpawner.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNeedsSimulation_MetaData[] = {
				{ "ModuleRelativePath", "Public/ProceduralFoliageSpawner.h" },
			};
#endif
			auto NewProp_bNeedsSimulation_SetBit = [](void* Obj){ ((UProceduralFoliageSpawner*)Obj)->bNeedsSimulation = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNeedsSimulation = { UE4CodeGen_Private::EPropertyClass::Bool, "bNeedsSimulation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UProceduralFoliageSpawner), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bNeedsSimulation_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bNeedsSimulation_MetaData, ARRAY_COUNT(NewProp_bNeedsSimulation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FoliageTypes_MetaData[] = {
				{ "Category", "ProceduralFoliageSimulation" },
				{ "ModuleRelativePath", "Public/ProceduralFoliageSpawner.h" },
				{ "ToolTip", "The types of foliage to procedurally spawn." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FoliageTypes = { UE4CodeGen_Private::EPropertyClass::Array, "FoliageTypes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(UProceduralFoliageSpawner, FoliageTypes), METADATA_PARAMS(NewProp_FoliageTypes_MetaData, ARRAY_COUNT(NewProp_FoliageTypes_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_FoliageTypes_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "FoliageTypes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FFoliageTypeObject, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimumQuadTreeSize_MetaData[] = {
				{ "Category", "ProceduralFoliageSimulation" },
				{ "ModuleRelativePath", "Public/ProceduralFoliageSpawner.h" },
				{ "ToolTip", "Minimum size of the quad tree used during the simulation. Reduce if too many instances are in splittable leaf quads (as warned in the log)." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinimumQuadTreeSize = { UE4CodeGen_Private::EPropertyClass::Float, "MinimumQuadTreeSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UProceduralFoliageSpawner, MinimumQuadTreeSize), METADATA_PARAMS(NewProp_MinimumQuadTreeSize_MetaData, ARRAY_COUNT(NewProp_MinimumQuadTreeSize_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumUniqueTiles_MetaData[] = {
				{ "Category", "ProceduralFoliageSimulation" },
				{ "ModuleRelativePath", "Public/ProceduralFoliageSpawner.h" },
				{ "ToolTip", "The number of unique tiles to generate. The final simulation is a procedurally determined combination of the various unique tiles." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumUniqueTiles = { UE4CodeGen_Private::EPropertyClass::Int, "NumUniqueTiles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UProceduralFoliageSpawner, NumUniqueTiles), METADATA_PARAMS(NewProp_NumUniqueTiles_MetaData, ARRAY_COUNT(NewProp_NumUniqueTiles_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileSize_MetaData[] = {
				{ "Category", "ProceduralFoliageSimulation" },
				{ "ModuleRelativePath", "Public/ProceduralFoliageSpawner.h" },
				{ "ToolTip", "Length of the tile (in cm) along one axis. The total area of the tile will be TileSize*TileSize." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TileSize = { UE4CodeGen_Private::EPropertyClass::Float, "TileSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UProceduralFoliageSpawner, TileSize), METADATA_PARAMS(NewProp_TileSize_MetaData, ARRAY_COUNT(NewProp_TileSize_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomSeed_MetaData[] = {
				{ "Category", "ProceduralFoliageSimulation" },
				{ "ModuleRelativePath", "Public/ProceduralFoliageSpawner.h" },
				{ "ToolTip", "The seed used for generating the randomness of the simulation." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_RandomSeed = { UE4CodeGen_Private::EPropertyClass::Int, "RandomSeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UProceduralFoliageSpawner, RandomSeed), METADATA_PARAMS(NewProp_RandomSeed_MetaData, ARRAY_COUNT(NewProp_RandomSeed_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bNeedsSimulation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FoliageTypes,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FoliageTypes_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MinimumQuadTreeSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NumUniqueTiles,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TileSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RandomSeed,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UProceduralFoliageSpawner>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UProceduralFoliageSpawner::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(UProceduralFoliageSpawner, 1440532521);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UProceduralFoliageSpawner(Z_Construct_UClass_UProceduralFoliageSpawner, &UProceduralFoliageSpawner::StaticClass, TEXT("/Script/Foliage"), TEXT("UProceduralFoliageSpawner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProceduralFoliageSpawner);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
