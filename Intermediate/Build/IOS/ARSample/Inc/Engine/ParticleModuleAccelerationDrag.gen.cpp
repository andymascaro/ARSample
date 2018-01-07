// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Particles/Acceleration/ParticleModuleAccelerationDrag.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleAccelerationDrag() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleAccelerationDrag_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleAccelerationDrag();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleAccelerationBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
	ENGINE_API UClass* Z_Construct_UClass_UDistributionFloat_NoRegister();
// End Cross Module References
	void UParticleModuleAccelerationDrag::StaticRegisterNativesUParticleModuleAccelerationDrag()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleAccelerationDrag_NoRegister()
	{
		return UParticleModuleAccelerationDrag::StaticClass();
	}
	UClass* Z_Construct_UClass_UParticleModuleAccelerationDrag()
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
				{ "DisplayName", "Drag" },
				{ "HideCategories", "Object Acceleration Object Object" },
				{ "IncludePath", "Particles/Acceleration/ParticleModuleAccelerationDrag.h" },
				{ "ModuleRelativePath", "Classes/Particles/Acceleration/ParticleModuleAccelerationDrag.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DragCoefficientRaw_MetaData[] = {
				{ "Category", "Drag" },
				{ "ModuleRelativePath", "Classes/Particles/Acceleration/ParticleModuleAccelerationDrag.h" },
				{ "ToolTip", "Per-particle drag coefficient. Evaluted using emitter time." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_DragCoefficientRaw = { UE4CodeGen_Private::EPropertyClass::Struct, "DragCoefficientRaw", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleAccelerationDrag, DragCoefficientRaw), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(NewProp_DragCoefficientRaw_MetaData, ARRAY_COUNT(NewProp_DragCoefficientRaw_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DragCoefficient_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/Particles/Acceleration/ParticleModuleAccelerationDrag.h" },
				{ "ToolTip", "Per-particle drag coefficient. Evaluted using emitter time." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DragCoefficient = { UE4CodeGen_Private::EPropertyClass::Object, "DragCoefficient", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020080008, 1, nullptr, STRUCT_OFFSET(UParticleModuleAccelerationDrag, DragCoefficient_DEPRECATED), Z_Construct_UClass_UDistributionFloat_NoRegister, METADATA_PARAMS(NewProp_DragCoefficient_MetaData, ARRAY_COUNT(NewProp_DragCoefficient_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DragCoefficientRaw,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DragCoefficient,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UParticleModuleAccelerationDrag>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UParticleModuleAccelerationDrag::StaticClass,
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
	IMPLEMENT_CLASS(UParticleModuleAccelerationDrag, 456601513);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleAccelerationDrag(Z_Construct_UClass_UParticleModuleAccelerationDrag, &UParticleModuleAccelerationDrag::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleAccelerationDrag"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleAccelerationDrag);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
