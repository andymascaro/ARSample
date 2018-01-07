// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Particles/Acceleration/ParticleModuleAccelerationDragScaleOverLife.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleAccelerationDragScaleOverLife() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleAccelerationDragScaleOverLife_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleAccelerationDragScaleOverLife();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleAccelerationBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
	ENGINE_API UClass* Z_Construct_UClass_UDistributionFloat_NoRegister();
// End Cross Module References
	void UParticleModuleAccelerationDragScaleOverLife::StaticRegisterNativesUParticleModuleAccelerationDragScaleOverLife()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleAccelerationDragScaleOverLife_NoRegister()
	{
		return UParticleModuleAccelerationDragScaleOverLife::StaticClass();
	}
	UClass* Z_Construct_UClass_UParticleModuleAccelerationDragScaleOverLife()
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
				{ "DisplayName", "Drag Scale/Life" },
				{ "HideCategories", "UObject Acceleration Object Object" },
				{ "IncludePath", "Particles/Acceleration/ParticleModuleAccelerationDragScaleOverLife.h" },
				{ "ModuleRelativePath", "Classes/Particles/Acceleration/ParticleModuleAccelerationDragScaleOverLife.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DragScaleRaw_MetaData[] = {
				{ "Category", "Drag" },
				{ "ModuleRelativePath", "Classes/Particles/Acceleration/ParticleModuleAccelerationDragScaleOverLife.h" },
				{ "ToolTip", "Per-particle drag scale. Evaluted using particle relative time." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_DragScaleRaw = { UE4CodeGen_Private::EPropertyClass::Struct, "DragScaleRaw", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleAccelerationDragScaleOverLife, DragScaleRaw), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(NewProp_DragScaleRaw_MetaData, ARRAY_COUNT(NewProp_DragScaleRaw_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DragScale_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/Particles/Acceleration/ParticleModuleAccelerationDragScaleOverLife.h" },
				{ "ToolTip", "Per-particle drag scale. Evaluted using particle relative time." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DragScale = { UE4CodeGen_Private::EPropertyClass::Object, "DragScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020080008, 1, nullptr, STRUCT_OFFSET(UParticleModuleAccelerationDragScaleOverLife, DragScale_DEPRECATED), Z_Construct_UClass_UDistributionFloat_NoRegister, METADATA_PARAMS(NewProp_DragScale_MetaData, ARRAY_COUNT(NewProp_DragScale_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DragScaleRaw,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DragScale,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UParticleModuleAccelerationDragScaleOverLife>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UParticleModuleAccelerationDragScaleOverLife::StaticClass,
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
	IMPLEMENT_CLASS(UParticleModuleAccelerationDragScaleOverLife, 2162361154);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleAccelerationDragScaleOverLife(Z_Construct_UClass_UParticleModuleAccelerationDragScaleOverLife, &UParticleModuleAccelerationDragScaleOverLife::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleAccelerationDragScaleOverLife"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleAccelerationDragScaleOverLife);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
