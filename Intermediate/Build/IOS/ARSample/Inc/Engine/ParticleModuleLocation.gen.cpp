// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Particles/Location/ParticleModuleLocation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleLocation() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocation_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocation();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocationBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
// End Cross Module References
	void UParticleModuleLocation::StaticRegisterNativesUParticleModuleLocation()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleLocation_NoRegister()
	{
		return UParticleModuleLocation::StaticClass();
	}
	UClass* Z_Construct_UClass_UParticleModuleLocation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UParticleModuleLocationBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "Initial Location" },
				{ "HideCategories", "Object Object Object" },
				{ "IncludePath", "Particles/Location/ParticleModuleLocation.h" },
				{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocation.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistributeThreshold_MetaData[] = {
				{ "Category", "Location" },
				{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocation.h" },
				{ "ToolTip", "When DistributeOverNPoints is set to a non-zero value, this specifies the ratio of particles spawned\nthat should use the distribution.  (For example setting this to 1 will cause all the particles to\nbe distributed evenly whereas .75 would cause 1/4 of the particles to be randomly placed)." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistributeThreshold = { UE4CodeGen_Private::EPropertyClass::Float, "DistributeThreshold", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleLocation, DistributeThreshold), METADATA_PARAMS(NewProp_DistributeThreshold_MetaData, ARRAY_COUNT(NewProp_DistributeThreshold_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistributeOverNPoints_MetaData[] = {
				{ "Category", "Location" },
				{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocation.h" },
				{ "ToolTip", "When set to a non-zero value this will force the particles to only spawn on evenly distributed\npositions between the two points specified." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistributeOverNPoints = { UE4CodeGen_Private::EPropertyClass::Float, "DistributeOverNPoints", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleLocation, DistributeOverNPoints), METADATA_PARAMS(NewProp_DistributeOverNPoints_MetaData, ARRAY_COUNT(NewProp_DistributeOverNPoints_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartLocation_MetaData[] = {
				{ "Category", "Location" },
				{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocation.h" },
				{ "ToolTip", "The location the particle should be emitted.\nRelative in local space to the emitter by default.\nRelative in world space as a WorldOffset module or when the emitter's UseLocalSpace is off.\nRetrieved using the EmitterTime at the spawn of the particle." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "StartLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleLocation, StartLocation), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(NewProp_StartLocation_MetaData, ARRAY_COUNT(NewProp_StartLocation_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DistributeThreshold,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DistributeOverNPoints,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StartLocation,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UParticleModuleLocation>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UParticleModuleLocation::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00901080u,
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
	IMPLEMENT_CLASS(UParticleModuleLocation, 2712155273);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleLocation(Z_Construct_UClass_UParticleModuleLocation, &UParticleModuleLocation::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleLocation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleLocation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
