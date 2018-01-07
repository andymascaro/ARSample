// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Particles/Location/ParticleModuleLocationPrimitiveSphere.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleLocationPrimitiveSphere() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocationPrimitiveSphere_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocationPrimitiveSphere();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocationPrimitiveBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
// End Cross Module References
	void UParticleModuleLocationPrimitiveSphere::StaticRegisterNativesUParticleModuleLocationPrimitiveSphere()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleLocationPrimitiveSphere_NoRegister()
	{
		return UParticleModuleLocationPrimitiveSphere::StaticClass();
	}
	UClass* Z_Construct_UClass_UParticleModuleLocationPrimitiveSphere()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UParticleModuleLocationPrimitiveBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "Sphere" },
				{ "HideCategories", "Object Object Object Object" },
				{ "IncludePath", "Particles/Location/ParticleModuleLocationPrimitiveSphere.h" },
				{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationPrimitiveSphere.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartRadius_MetaData[] = {
				{ "Category", "Location" },
				{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationPrimitiveSphere.h" },
				{ "ToolTip", "The radius of the sphere. Retrieved using EmitterTime." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartRadius = { UE4CodeGen_Private::EPropertyClass::Struct, "StartRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleLocationPrimitiveSphere, StartRadius), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(NewProp_StartRadius_MetaData, ARRAY_COUNT(NewProp_StartRadius_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StartRadius,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UParticleModuleLocationPrimitiveSphere>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UParticleModuleLocationPrimitiveSphere::StaticClass,
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
	IMPLEMENT_CLASS(UParticleModuleLocationPrimitiveSphere, 3993889256);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleLocationPrimitiveSphere(Z_Construct_UClass_UParticleModuleLocationPrimitiveSphere, &UParticleModuleLocationPrimitiveSphere::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleLocationPrimitiveSphere"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleLocationPrimitiveSphere);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
