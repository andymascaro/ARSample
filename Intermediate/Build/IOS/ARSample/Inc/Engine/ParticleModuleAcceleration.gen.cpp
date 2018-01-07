// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Particles/Acceleration/ParticleModuleAcceleration.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleAcceleration() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleAcceleration_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleAcceleration();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleAccelerationBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
// End Cross Module References
	void UParticleModuleAcceleration::StaticRegisterNativesUParticleModuleAcceleration()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleAcceleration_NoRegister()
	{
		return UParticleModuleAcceleration::StaticClass();
	}
	UClass* Z_Construct_UClass_UParticleModuleAcceleration()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UParticleModuleAccelerationBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "Acceleration" },
				{ "HideCategories", "Object Object Object" },
				{ "IncludePath", "Particles/Acceleration/ParticleModuleAcceleration.h" },
				{ "ModuleRelativePath", "Classes/Particles/Acceleration/ParticleModuleAcceleration.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bApplyOwnerScale_MetaData[] = {
				{ "Category", "Acceleration" },
				{ "ModuleRelativePath", "Classes/Particles/Acceleration/ParticleModuleAcceleration.h" },
				{ "ToolTip", "If true, then apply the particle system components scale\nto the acceleration value." },
			};
#endif
			auto NewProp_bApplyOwnerScale_SetBit = [](void* Obj){ ((UParticleModuleAcceleration*)Obj)->bApplyOwnerScale = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bApplyOwnerScale = { UE4CodeGen_Private::EPropertyClass::Bool, "bApplyOwnerScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleAcceleration), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bApplyOwnerScale_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bApplyOwnerScale_MetaData, ARRAY_COUNT(NewProp_bApplyOwnerScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Acceleration_MetaData[] = {
				{ "Category", "Acceleration" },
				{ "ModuleRelativePath", "Classes/Particles/Acceleration/ParticleModuleAcceleration.h" },
				{ "ToolTip", "The initial acceleration of the particle.\nValue is obtained using the EmitterTime at particle spawn.\nEach frame, the current and base velocity of the particle\nis then updated using the formula\n        velocity += acceleration * DeltaTime\nwhere DeltaTime is the time passed since the last frame." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Acceleration = { UE4CodeGen_Private::EPropertyClass::Struct, "Acceleration", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleAcceleration, Acceleration), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(NewProp_Acceleration_MetaData, ARRAY_COUNT(NewProp_Acceleration_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bApplyOwnerScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Acceleration,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UParticleModuleAcceleration>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UParticleModuleAcceleration::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00881080u,
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
	IMPLEMENT_CLASS(UParticleModuleAcceleration, 1805653468);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleAcceleration(Z_Construct_UClass_UParticleModuleAcceleration, &UParticleModuleAcceleration::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleAcceleration"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleAcceleration);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
