// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Particles/Kill/ParticleModuleKillHeight.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleKillHeight() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleKillHeight_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleKillHeight();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleKillBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
// End Cross Module References
	void UParticleModuleKillHeight::StaticRegisterNativesUParticleModuleKillHeight()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleKillHeight_NoRegister()
	{
		return UParticleModuleKillHeight::StaticClass();
	}
	UClass* Z_Construct_UClass_UParticleModuleKillHeight()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UParticleModuleKillBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "Kill Height" },
				{ "HideCategories", "Object Object Object" },
				{ "IncludePath", "Particles/Kill/ParticleModuleKillHeight.h" },
				{ "ModuleRelativePath", "Classes/Particles/Kill/ParticleModuleKillHeight.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bApplyPSysScale_MetaData[] = {
				{ "Category", "Kill" },
				{ "ModuleRelativePath", "Classes/Particles/Kill/ParticleModuleKillHeight.h" },
				{ "ToolTip", "If true, take the particle systems scale into account" },
			};
#endif
			auto NewProp_bApplyPSysScale_SetBit = [](void* Obj){ ((UParticleModuleKillHeight*)Obj)->bApplyPSysScale = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bApplyPSysScale = { UE4CodeGen_Private::EPropertyClass::Bool, "bApplyPSysScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleKillHeight), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bApplyPSysScale_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bApplyPSysScale_MetaData, ARRAY_COUNT(NewProp_bApplyPSysScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFloor_MetaData[] = {
				{ "Category", "Kill" },
				{ "ModuleRelativePath", "Classes/Particles/Kill/ParticleModuleKillHeight.h" },
				{ "ToolTip", "If true, the plane should be considered a floor - ie kill anything BELOW it.\nIf false, if is a ceiling - ie kill anything ABOVE it." },
			};
#endif
			auto NewProp_bFloor_SetBit = [](void* Obj){ ((UParticleModuleKillHeight*)Obj)->bFloor = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFloor = { UE4CodeGen_Private::EPropertyClass::Bool, "bFloor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleKillHeight), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bFloor_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bFloor_MetaData, ARRAY_COUNT(NewProp_bFloor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAbsolute_MetaData[] = {
				{ "Category", "Kill" },
				{ "ModuleRelativePath", "Classes/Particles/Kill/ParticleModuleKillHeight.h" },
				{ "ToolTip", "If true, the height should be treated as a world-space position." },
			};
#endif
			auto NewProp_bAbsolute_SetBit = [](void* Obj){ ((UParticleModuleKillHeight*)Obj)->bAbsolute = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAbsolute = { UE4CodeGen_Private::EPropertyClass::Bool, "bAbsolute", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleKillHeight), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAbsolute_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAbsolute_MetaData, ARRAY_COUNT(NewProp_bAbsolute_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[] = {
				{ "Category", "Kill" },
				{ "ModuleRelativePath", "Classes/Particles/Kill/ParticleModuleKillHeight.h" },
				{ "ToolTip", "The height at which to kill the particle." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Height = { UE4CodeGen_Private::EPropertyClass::Struct, "Height", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleKillHeight, Height), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(NewProp_Height_MetaData, ARRAY_COUNT(NewProp_Height_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bApplyPSysScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bFloor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAbsolute,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Height,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UParticleModuleKillHeight>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UParticleModuleKillHeight::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00801080u,
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
	IMPLEMENT_CLASS(UParticleModuleKillHeight, 2778812521);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleKillHeight(Z_Construct_UClass_UParticleModuleKillHeight, &UParticleModuleKillHeight::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleKillHeight"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleKillHeight);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
