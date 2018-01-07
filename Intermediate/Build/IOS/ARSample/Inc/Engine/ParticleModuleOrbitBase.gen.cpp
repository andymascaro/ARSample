// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Particles/Orbit/ParticleModuleOrbitBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleOrbitBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleOrbitBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleOrbitBase();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModule();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UParticleModuleOrbitBase::StaticRegisterNativesUParticleModuleOrbitBase()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleOrbitBase_NoRegister()
	{
		return UParticleModuleOrbitBase::StaticClass();
	}
	UClass* Z_Construct_UClass_UParticleModuleOrbitBase()
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
				{ "DisplayName", "Orbit" },
				{ "HideCategories", "Object Object" },
				{ "IncludePath", "Particles/Orbit/ParticleModuleOrbitBase.h" },
				{ "ModuleRelativePath", "Classes/Particles/Orbit/ParticleModuleOrbitBase.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseEmitterTime_MetaData[] = {
				{ "Category", "Orbit" },
				{ "ModuleRelativePath", "Classes/Particles/Orbit/ParticleModuleOrbitBase.h" },
				{ "ToolTip", "If true, distribution values will be retrieved using the EmitterTime.\nIf false (default), they will be retrieved using the Particle.RelativeTime." },
			};
#endif
			auto NewProp_bUseEmitterTime_SetBit = [](void* Obj){ ((UParticleModuleOrbitBase*)Obj)->bUseEmitterTime = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseEmitterTime = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseEmitterTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleOrbitBase), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseEmitterTime_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseEmitterTime_MetaData, ARRAY_COUNT(NewProp_bUseEmitterTime_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseEmitterTime,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UParticleModuleOrbitBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UParticleModuleOrbitBase::StaticClass,
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
	IMPLEMENT_CLASS(UParticleModuleOrbitBase, 3619254676);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleOrbitBase(Z_Construct_UClass_UParticleModuleOrbitBase, &UParticleModuleOrbitBase::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleOrbitBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleOrbitBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
