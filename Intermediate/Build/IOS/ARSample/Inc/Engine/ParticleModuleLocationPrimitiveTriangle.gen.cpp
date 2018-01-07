// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Particles/Location/ParticleModuleLocationPrimitiveTriangle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleLocationPrimitiveTriangle() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocationPrimitiveTriangle_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocationPrimitiveTriangle();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocationBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
// End Cross Module References
	void UParticleModuleLocationPrimitiveTriangle::StaticRegisterNativesUParticleModuleLocationPrimitiveTriangle()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleLocationPrimitiveTriangle_NoRegister()
	{
		return UParticleModuleLocationPrimitiveTriangle::StaticClass();
	}
	UClass* Z_Construct_UClass_UParticleModuleLocationPrimitiveTriangle()
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
				{ "DisplayName", "Triangle" },
				{ "HideCategories", "Object Object Object" },
				{ "IncludePath", "Particles/Location/ParticleModuleLocationPrimitiveTriangle.h" },
				{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationPrimitiveTriangle.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Thickness_MetaData[] = {
				{ "Category", "Location" },
				{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationPrimitiveTriangle.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Thickness = { UE4CodeGen_Private::EPropertyClass::Struct, "Thickness", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleLocationPrimitiveTriangle, Thickness), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(NewProp_Thickness_MetaData, ARRAY_COUNT(NewProp_Thickness_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Angle_MetaData[] = {
				{ "Category", "Location" },
				{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationPrimitiveTriangle.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Angle = { UE4CodeGen_Private::EPropertyClass::Struct, "Angle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleLocationPrimitiveTriangle, Angle), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(NewProp_Angle_MetaData, ARRAY_COUNT(NewProp_Angle_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[] = {
				{ "Category", "Location" },
				{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationPrimitiveTriangle.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Height = { UE4CodeGen_Private::EPropertyClass::Struct, "Height", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleLocationPrimitiveTriangle, Height), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(NewProp_Height_MetaData, ARRAY_COUNT(NewProp_Height_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartOffset_MetaData[] = {
				{ "Category", "Location" },
				{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationPrimitiveTriangle.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "StartOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleLocationPrimitiveTriangle, StartOffset), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(NewProp_StartOffset_MetaData, ARRAY_COUNT(NewProp_StartOffset_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Thickness,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Angle,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Height,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StartOffset,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UParticleModuleLocationPrimitiveTriangle>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UParticleModuleLocationPrimitiveTriangle::StaticClass,
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
	IMPLEMENT_CLASS(UParticleModuleLocationPrimitiveTriangle, 3098049006);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleLocationPrimitiveTriangle(Z_Construct_UClass_UParticleModuleLocationPrimitiveTriangle, &UParticleModuleLocationPrimitiveTriangle::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleLocationPrimitiveTriangle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleLocationPrimitiveTriangle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
