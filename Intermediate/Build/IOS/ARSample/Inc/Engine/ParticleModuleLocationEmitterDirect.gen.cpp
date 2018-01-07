// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Particles/Location/ParticleModuleLocationEmitterDirect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleLocationEmitterDirect() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocationEmitterDirect_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocationEmitterDirect();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocationBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UParticleModuleLocationEmitterDirect::StaticRegisterNativesUParticleModuleLocationEmitterDirect()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleLocationEmitterDirect_NoRegister()
	{
		return UParticleModuleLocationEmitterDirect::StaticClass();
	}
	UClass* Z_Construct_UClass_UParticleModuleLocationEmitterDirect()
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
				{ "DisplayName", "Emitter Direct Location" },
				{ "HideCategories", "Object Object Object" },
				{ "IncludePath", "Particles/Location/ParticleModuleLocationEmitterDirect.h" },
				{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationEmitterDirect.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmitterName_MetaData[] = {
				{ "Category", "Location" },
				{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationEmitterDirect.h" },
				{ "ToolTip", "The name of the emitter to use as a source for the location of the particles." },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_EmitterName = { UE4CodeGen_Private::EPropertyClass::Name, "EmitterName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000002000009, 1, nullptr, STRUCT_OFFSET(UParticleModuleLocationEmitterDirect, EmitterName), METADATA_PARAMS(NewProp_EmitterName_MetaData, ARRAY_COUNT(NewProp_EmitterName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EmitterName,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UParticleModuleLocationEmitterDirect>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UParticleModuleLocationEmitterDirect::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00101080u,
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
	IMPLEMENT_CLASS(UParticleModuleLocationEmitterDirect, 112956031);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleLocationEmitterDirect(Z_Construct_UClass_UParticleModuleLocationEmitterDirect, &UParticleModuleLocationEmitterDirect::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleLocationEmitterDirect"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleLocationEmitterDirect);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
