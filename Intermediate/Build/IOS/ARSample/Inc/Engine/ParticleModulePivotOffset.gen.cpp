// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Particles/Modules/Location/ParticleModulePivotOffset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModulePivotOffset() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModulePivotOffset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModulePivotOffset();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocationBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
	void UParticleModulePivotOffset::StaticRegisterNativesUParticleModulePivotOffset()
	{
	}
	UClass* Z_Construct_UClass_UParticleModulePivotOffset_NoRegister()
	{
		return UParticleModulePivotOffset::StaticClass();
	}
	UClass* Z_Construct_UClass_UParticleModulePivotOffset()
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
				{ "DisplayName", "Pivot Offset" },
				{ "HideCategories", "Object Object Object" },
				{ "IncludePath", "Particles/Modules/Location/ParticleModulePivotOffset.h" },
				{ "ModuleRelativePath", "Classes/Particles/Modules/Location/ParticleModulePivotOffset.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PivotOffset_MetaData[] = {
				{ "Category", "PivotOffset" },
				{ "ModuleRelativePath", "Classes/Particles/Modules/Location/ParticleModulePivotOffset.h" },
				{ "ToolTip", "Offset applied in UV space to the particle vertex positions. Defaults to (0.5,0.5) putting the pivot in the centre of the partilce." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PivotOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "PivotOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModulePivotOffset, PivotOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(NewProp_PivotOffset_MetaData, ARRAY_COUNT(NewProp_PivotOffset_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PivotOffset,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UParticleModulePivotOffset>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UParticleModulePivotOffset::StaticClass,
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
	IMPLEMENT_CLASS(UParticleModulePivotOffset, 2538406887);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModulePivotOffset(Z_Construct_UClass_UParticleModulePivotOffset, &UParticleModulePivotOffset::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModulePivotOffset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModulePivotOffset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
