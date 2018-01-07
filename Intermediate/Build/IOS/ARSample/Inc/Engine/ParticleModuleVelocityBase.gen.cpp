// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Particles/Velocity/ParticleModuleVelocityBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleVelocityBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVelocityBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVelocityBase();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModule();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UParticleModuleVelocityBase::StaticRegisterNativesUParticleModuleVelocityBase()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleVelocityBase_NoRegister()
	{
		return UParticleModuleVelocityBase::StaticClass();
	}
	UClass* Z_Construct_UClass_UParticleModuleVelocityBase()
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
				{ "DisplayName", "Velocity" },
				{ "HideCategories", "Object Object" },
				{ "IncludePath", "Particles/Velocity/ParticleModuleVelocityBase.h" },
				{ "ModuleRelativePath", "Classes/Particles/Velocity/ParticleModuleVelocityBase.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bApplyOwnerScale_MetaData[] = {
				{ "Category", "Velocity" },
				{ "ModuleRelativePath", "Classes/Particles/Velocity/ParticleModuleVelocityBase.h" },
				{ "ToolTip", "If true, then apply the particle system components scale to the velocity value." },
			};
#endif
			auto NewProp_bApplyOwnerScale_SetBit = [](void* Obj){ ((UParticleModuleVelocityBase*)Obj)->bApplyOwnerScale = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bApplyOwnerScale = { UE4CodeGen_Private::EPropertyClass::Bool, "bApplyOwnerScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleVelocityBase), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bApplyOwnerScale_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bApplyOwnerScale_MetaData, ARRAY_COUNT(NewProp_bApplyOwnerScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInWorldSpace_MetaData[] = {
				{ "Category", "Velocity" },
				{ "ModuleRelativePath", "Classes/Particles/Velocity/ParticleModuleVelocityBase.h" },
				{ "ToolTip", "If true, then treat the velocity as world-space defined.\nNOTE: LocalSpace emitters that are moving will see strange results..." },
			};
#endif
			auto NewProp_bInWorldSpace_SetBit = [](void* Obj){ ((UParticleModuleVelocityBase*)Obj)->bInWorldSpace = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInWorldSpace = { UE4CodeGen_Private::EPropertyClass::Bool, "bInWorldSpace", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleVelocityBase), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bInWorldSpace_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bInWorldSpace_MetaData, ARRAY_COUNT(NewProp_bInWorldSpace_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bApplyOwnerScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bInWorldSpace,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UParticleModuleVelocityBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UParticleModuleVelocityBase::StaticClass,
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
	IMPLEMENT_CLASS(UParticleModuleVelocityBase, 1000613488);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleVelocityBase(Z_Construct_UClass_UParticleModuleVelocityBase, &UParticleModuleVelocityBase::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleVelocityBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleVelocityBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
