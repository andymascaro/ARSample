// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Particles/VectorField/ParticleModuleVectorFieldGlobal.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleVectorFieldGlobal() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVectorFieldGlobal_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVectorFieldGlobal();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVectorFieldBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UParticleModuleVectorFieldGlobal::StaticRegisterNativesUParticleModuleVectorFieldGlobal()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleVectorFieldGlobal_NoRegister()
	{
		return UParticleModuleVectorFieldGlobal::StaticClass();
	}
	UClass* Z_Construct_UClass_UParticleModuleVectorFieldGlobal()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UParticleModuleVectorFieldBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "Global Vector Fields" },
				{ "HideCategories", "Object Object Object" },
				{ "IncludePath", "Particles/VectorField/ParticleModuleVectorFieldGlobal.h" },
				{ "ModuleRelativePath", "Classes/Particles/VectorField/ParticleModuleVectorFieldGlobal.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalVectorFieldTightness_MetaData[] = {
				{ "Category", "VectorField" },
				{ "ClampMin", "0.0" },
				{ "editcondition", "bOverrideGlobalVectorFieldTightness" },
				{ "ModuleRelativePath", "Classes/Particles/VectorField/ParticleModuleVectorFieldGlobal.h" },
				{ "ToolTip", "Global vector field tightness override." },
				{ "UIMax", "1.0" },
				{ "UIMin", "0.0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GlobalVectorFieldTightness = { UE4CodeGen_Private::EPropertyClass::Float, "GlobalVectorFieldTightness", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleVectorFieldGlobal, GlobalVectorFieldTightness), METADATA_PARAMS(NewProp_GlobalVectorFieldTightness_MetaData, ARRAY_COUNT(NewProp_GlobalVectorFieldTightness_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalVectorFieldScale_MetaData[] = {
				{ "Category", "VectorField" },
				{ "ModuleRelativePath", "Classes/Particles/VectorField/ParticleModuleVectorFieldGlobal.h" },
				{ "ToolTip", "Global vector field scale." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GlobalVectorFieldScale = { UE4CodeGen_Private::EPropertyClass::Float, "GlobalVectorFieldScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleVectorFieldGlobal, GlobalVectorFieldScale), METADATA_PARAMS(NewProp_GlobalVectorFieldScale_MetaData, ARRAY_COUNT(NewProp_GlobalVectorFieldScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideGlobalVectorFieldTightness_MetaData[] = {
				{ "Category", "VectorField" },
				{ "InlineEditConditionToggle", "" },
				{ "ModuleRelativePath", "Classes/Particles/VectorField/ParticleModuleVectorFieldGlobal.h" },
				{ "ToolTip", "Property override value for global vector field tightness." },
			};
#endif
			auto NewProp_bOverrideGlobalVectorFieldTightness_SetBit = [](void* Obj){ ((UParticleModuleVectorFieldGlobal*)Obj)->bOverrideGlobalVectorFieldTightness = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideGlobalVectorFieldTightness = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverrideGlobalVectorFieldTightness", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleVectorFieldGlobal), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bOverrideGlobalVectorFieldTightness_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bOverrideGlobalVectorFieldTightness_MetaData, ARRAY_COUNT(NewProp_bOverrideGlobalVectorFieldTightness_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GlobalVectorFieldTightness,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GlobalVectorFieldScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bOverrideGlobalVectorFieldTightness,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UParticleModuleVectorFieldGlobal>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UParticleModuleVectorFieldGlobal::StaticClass,
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
	IMPLEMENT_CLASS(UParticleModuleVectorFieldGlobal, 2512196957);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleVectorFieldGlobal(Z_Construct_UClass_UParticleModuleVectorFieldGlobal, &UParticleModuleVectorFieldGlobal::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleVectorFieldGlobal"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleVectorFieldGlobal);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
