// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Particles/Acceleration/ParticleModuleAccelerationConstant.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleAccelerationConstant() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleAccelerationConstant_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleAccelerationConstant();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleAccelerationBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void UParticleModuleAccelerationConstant::StaticRegisterNativesUParticleModuleAccelerationConstant()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleAccelerationConstant_NoRegister()
	{
		return UParticleModuleAccelerationConstant::StaticClass();
	}
	UClass* Z_Construct_UClass_UParticleModuleAccelerationConstant()
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
				{ "DisplayName", "Const Acceleration" },
				{ "HideCategories", "Object Acceleration Object Object" },
				{ "IncludePath", "Particles/Acceleration/ParticleModuleAccelerationConstant.h" },
				{ "ModuleRelativePath", "Classes/Particles/Acceleration/ParticleModuleAccelerationConstant.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Acceleration_MetaData[] = {
				{ "Category", "ParticleModuleAccelerationConstant" },
				{ "ModuleRelativePath", "Classes/Particles/Acceleration/ParticleModuleAccelerationConstant.h" },
				{ "ToolTip", "Constant acceleration for particles in this system." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Acceleration = { UE4CodeGen_Private::EPropertyClass::Struct, "Acceleration", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleAccelerationConstant, Acceleration), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_Acceleration_MetaData, ARRAY_COUNT(NewProp_Acceleration_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Acceleration,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UParticleModuleAccelerationConstant>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UParticleModuleAccelerationConstant::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00001080u,
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
	IMPLEMENT_CLASS(UParticleModuleAccelerationConstant, 1387998191);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleAccelerationConstant(Z_Construct_UClass_UParticleModuleAccelerationConstant, &UParticleModuleAccelerationConstant::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleAccelerationConstant"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleAccelerationConstant);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
