// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Particles/Acceleration/ParticleModuleAccelerationBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleAccelerationBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleAccelerationBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleAccelerationBase();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModule();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UParticleModuleAccelerationBase::StaticRegisterNativesUParticleModuleAccelerationBase()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleAccelerationBase_NoRegister()
	{
		return UParticleModuleAccelerationBase::StaticClass();
	}
	UClass* Z_Construct_UClass_UParticleModuleAccelerationBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UParticleModule,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "Acceleration" },
				{ "HideCategories", "Object Object" },
				{ "IncludePath", "Particles/Acceleration/ParticleModuleAccelerationBase.h" },
				{ "ModuleRelativePath", "Classes/Particles/Acceleration/ParticleModuleAccelerationBase.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAlwaysInWorldSpace_MetaData[] = {
				{ "Category", "Acceleration" },
				{ "ModuleRelativePath", "Classes/Particles/Acceleration/ParticleModuleAccelerationBase.h" },
				{ "ToolTip", "If true, then treat the acceleration as world-space" },
			};
#endif
			auto NewProp_bAlwaysInWorldSpace_SetBit = [](void* Obj){ ((UParticleModuleAccelerationBase*)Obj)->bAlwaysInWorldSpace = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAlwaysInWorldSpace = { UE4CodeGen_Private::EPropertyClass::Bool, "bAlwaysInWorldSpace", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleAccelerationBase), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAlwaysInWorldSpace_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAlwaysInWorldSpace_MetaData, ARRAY_COUNT(NewProp_bAlwaysInWorldSpace_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAlwaysInWorldSpace,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UParticleModuleAccelerationBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UParticleModuleAccelerationBase::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00001081u,
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
	IMPLEMENT_CLASS(UParticleModuleAccelerationBase, 4050988046);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleAccelerationBase(Z_Construct_UClass_UParticleModuleAccelerationBase, &UParticleModuleAccelerationBase::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleAccelerationBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleAccelerationBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
