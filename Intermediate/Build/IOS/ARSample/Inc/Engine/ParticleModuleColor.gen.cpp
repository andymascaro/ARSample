// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Particles/Color/ParticleModuleColor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleColor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleColor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleColor();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleColorBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
// End Cross Module References
	void UParticleModuleColor::StaticRegisterNativesUParticleModuleColor()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleColor_NoRegister()
	{
		return UParticleModuleColor::StaticClass();
	}
	UClass* Z_Construct_UClass_UParticleModuleColor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UParticleModuleColorBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "Initial Color" },
				{ "HideCategories", "Object Object Object" },
				{ "IncludePath", "Particles/Color/ParticleModuleColor.h" },
				{ "ModuleRelativePath", "Classes/Particles/Color/ParticleModuleColor.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bClampAlpha_MetaData[] = {
				{ "Category", "Color" },
				{ "ModuleRelativePath", "Classes/Particles/Color/ParticleModuleColor.h" },
				{ "ToolTip", "If true, the alpha value will be clamped to the [0..1] range." },
			};
#endif
			auto NewProp_bClampAlpha_SetBit = [](void* Obj){ ((UParticleModuleColor*)Obj)->bClampAlpha = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bClampAlpha = { UE4CodeGen_Private::EPropertyClass::Bool, "bClampAlpha", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleColor), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bClampAlpha_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bClampAlpha_MetaData, ARRAY_COUNT(NewProp_bClampAlpha_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartAlpha_MetaData[] = {
				{ "Category", "Color" },
				{ "ModuleRelativePath", "Classes/Particles/Color/ParticleModuleColor.h" },
				{ "ToolTip", "Initial alpha for a particle as a function of Emitter time." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartAlpha = { UE4CodeGen_Private::EPropertyClass::Struct, "StartAlpha", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleColor, StartAlpha), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(NewProp_StartAlpha_MetaData, ARRAY_COUNT(NewProp_StartAlpha_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartColor_MetaData[] = {
				{ "Category", "Color" },
				{ "ModuleRelativePath", "Classes/Particles/Color/ParticleModuleColor.h" },
				{ "ToolTip", "Initial color for a particle as a function of Emitter time." },
				{ "TreatAsColor", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartColor = { UE4CodeGen_Private::EPropertyClass::Struct, "StartColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleColor, StartColor), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(NewProp_StartColor_MetaData, ARRAY_COUNT(NewProp_StartColor_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bClampAlpha,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StartAlpha,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StartColor,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UParticleModuleColor>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UParticleModuleColor::StaticClass,
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
	IMPLEMENT_CLASS(UParticleModuleColor, 2292095395);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleColor(Z_Construct_UClass_UParticleModuleColor, &UParticleModuleColor::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleColor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleColor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
