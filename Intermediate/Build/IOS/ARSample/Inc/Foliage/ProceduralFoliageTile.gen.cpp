// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/ProceduralFoliageTile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProceduralFoliageTile() {}
// Cross Module References
	FOLIAGE_API UClass* Z_Construct_UClass_UProceduralFoliageTile_NoRegister();
	FOLIAGE_API UClass* Z_Construct_UClass_UProceduralFoliageTile();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Foliage();
	FOLIAGE_API UScriptStruct* Z_Construct_UScriptStruct_FProceduralFoliageInstance();
	FOLIAGE_API UClass* Z_Construct_UClass_UProceduralFoliageSpawner_NoRegister();
// End Cross Module References
	void UProceduralFoliageTile::StaticRegisterNativesUProceduralFoliageTile()
	{
	}
	UClass* Z_Construct_UClass_UProceduralFoliageTile_NoRegister()
	{
		return UProceduralFoliageTile::StaticClass();
	}
	UClass* Z_Construct_UClass_UProceduralFoliageTile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_Foliage,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "ProceduralFoliageTile.h" },
				{ "ModuleRelativePath", "Public/ProceduralFoliageTile.h" },
				{ "ToolTip", "Procedurally determines where to spawn foliage meshes within a discrete area.\nGenerally, a procedural foliage simulation as a whole is composed of multiple tiles.\nTiles are able to overlap one another as well to create a seamless appearance.\n\nNote that the tile is not responsible for actually spawning any instances, it only determines where they should be placed.\nFollowing a simulation, call ExtractDesiredInstances for information about where each instance should spawn.\n\nNote also that, barring any core changes to the ordering of TSet, foliage generation is deterministic\n(i.e. given the same inputs, the result of the simulation will always be the same)." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstancesArray_MetaData[] = {
				{ "ModuleRelativePath", "Public/ProceduralFoliageTile.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InstancesArray = { UE4CodeGen_Private::EPropertyClass::Array, "InstancesArray", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UProceduralFoliageTile, InstancesArray), METADATA_PARAMS(NewProp_InstancesArray_MetaData, ARRAY_COUNT(NewProp_InstancesArray_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InstancesArray_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "InstancesArray", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FProceduralFoliageInstance, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FoliageSpawner_MetaData[] = {
				{ "ModuleRelativePath", "Public/ProceduralFoliageTile.h" },
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FoliageSpawner = { UE4CodeGen_Private::EPropertyClass::Object, "FoliageSpawner", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UProceduralFoliageTile, FoliageSpawner), Z_Construct_UClass_UProceduralFoliageSpawner_NoRegister, METADATA_PARAMS(NewProp_FoliageSpawner_MetaData, ARRAY_COUNT(NewProp_FoliageSpawner_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InstancesArray,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InstancesArray_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FoliageSpawner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UProceduralFoliageTile>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UProceduralFoliageTile::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
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
	IMPLEMENT_CLASS(UProceduralFoliageTile, 1768150753);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UProceduralFoliageTile(Z_Construct_UClass_UProceduralFoliageTile, &UProceduralFoliageTile::StaticClass, TEXT("/Script/Foliage"), TEXT("UProceduralFoliageTile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProceduralFoliageTile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
