// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Particles/Velocity/ParticleModuleVelocityCone.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleVelocityCone() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVelocityCone_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVelocityCone();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVelocityBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
// End Cross Module References
	void UParticleModuleVelocityCone::StaticRegisterNativesUParticleModuleVelocityCone()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleVelocityCone_NoRegister()
	{
		return UParticleModuleVelocityCone::StaticClass();
	}
	UClass* Z_Construct_UClass_UParticleModuleVelocityCone()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UParticleModuleVelocityBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "Velocity Cone" },
				{ "HideCategories", "Object Object Object" },
				{ "IncludePath", "Particles/Velocity/ParticleModuleVelocityCone.h" },
				{ "ModuleRelativePath", "Classes/Particles/Velocity/ParticleModuleVelocityCone.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[] = {
				{ "Category", "Cone" },
				{ "ModuleRelativePath", "Classes/Particles/Velocity/ParticleModuleVelocityCone.h" },
				{ "ToolTip", "The direction FVector of the cone." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Direction = { UE4CodeGen_Private::EPropertyClass::Struct, "Direction", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleVelocityCone, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_Direction_MetaData, ARRAY_COUNT(NewProp_Direction_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[] = {
				{ "Category", "Cone" },
				{ "ModuleRelativePath", "Classes/Particles/Velocity/ParticleModuleVelocityCone.h" },
				{ "ToolTip", "The initial velocity of the particles." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Velocity = { UE4CodeGen_Private::EPropertyClass::Struct, "Velocity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleVelocityCone, Velocity), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(NewProp_Velocity_MetaData, ARRAY_COUNT(NewProp_Velocity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Angle_MetaData[] = {
				{ "Category", "Cone" },
				{ "ModuleRelativePath", "Classes/Particles/Velocity/ParticleModuleVelocityCone.h" },
				{ "ToolTip", "The Min value represents the inner cone angle value and the Max value represents the outer cone angle value." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Angle = { UE4CodeGen_Private::EPropertyClass::Struct, "Angle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleVelocityCone, Angle), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(NewProp_Angle_MetaData, ARRAY_COUNT(NewProp_Angle_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Direction,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Velocity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Angle,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UParticleModuleVelocityCone>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UParticleModuleVelocityCone::StaticClass,
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
	IMPLEMENT_CLASS(UParticleModuleVelocityCone, 3472902869);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleVelocityCone(Z_Construct_UClass_UParticleModuleVelocityCone, &UParticleModuleVelocityCone::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleVelocityCone"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleVelocityCone);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
