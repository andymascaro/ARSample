// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Particles/Size/ParticleModuleSizeScale.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleSizeScale() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSizeScale_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSizeScale();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSizeBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
// End Cross Module References
	void UParticleModuleSizeScale::StaticRegisterNativesUParticleModuleSizeScale()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleSizeScale_NoRegister()
	{
		return UParticleModuleSizeScale::StaticClass();
	}
	UClass* Z_Construct_UClass_UParticleModuleSizeScale()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UParticleModuleSizeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "Size Scale" },
				{ "HideCategories", "Object Object Object" },
				{ "IncludePath", "Particles/Size/ParticleModuleSizeScale.h" },
				{ "ModuleRelativePath", "Classes/Particles/Size/ParticleModuleSizeScale.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableZ_MetaData[] = {
				{ "Category", "ParticleModuleSizeScale" },
				{ "ModuleRelativePath", "Classes/Particles/Size/ParticleModuleSizeScale.h" },
				{ "ToolTip", "Ignored" },
			};
#endif
			auto NewProp_EnableZ_SetBit = [](void* Obj){ ((UParticleModuleSizeScale*)Obj)->EnableZ = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableZ = { UE4CodeGen_Private::EPropertyClass::Bool, "EnableZ", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleSizeScale), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_EnableZ_SetBit)>::SetBit, METADATA_PARAMS(NewProp_EnableZ_MetaData, ARRAY_COUNT(NewProp_EnableZ_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableY_MetaData[] = {
				{ "Category", "ParticleModuleSizeScale" },
				{ "ModuleRelativePath", "Classes/Particles/Size/ParticleModuleSizeScale.h" },
				{ "ToolTip", "Ignored" },
			};
#endif
			auto NewProp_EnableY_SetBit = [](void* Obj){ ((UParticleModuleSizeScale*)Obj)->EnableY = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableY = { UE4CodeGen_Private::EPropertyClass::Bool, "EnableY", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleSizeScale), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_EnableY_SetBit)>::SetBit, METADATA_PARAMS(NewProp_EnableY_MetaData, ARRAY_COUNT(NewProp_EnableY_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableX_MetaData[] = {
				{ "Category", "ParticleModuleSizeScale" },
				{ "ModuleRelativePath", "Classes/Particles/Size/ParticleModuleSizeScale.h" },
				{ "ToolTip", "Ignored" },
			};
#endif
			auto NewProp_EnableX_SetBit = [](void* Obj){ ((UParticleModuleSizeScale*)Obj)->EnableX = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableX = { UE4CodeGen_Private::EPropertyClass::Bool, "EnableX", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleSizeScale), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_EnableX_SetBit)>::SetBit, METADATA_PARAMS(NewProp_EnableX_MetaData, ARRAY_COUNT(NewProp_EnableX_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SizeScale_MetaData[] = {
				{ "Category", "ParticleModuleSizeScale" },
				{ "ModuleRelativePath", "Classes/Particles/Size/ParticleModuleSizeScale.h" },
				{ "ToolTip", "The amount the BaseSize should be scaled before being used as the size of the particle.\nThe value is retrieved using the RelativeTime of the particle during its update.\nNOTE: this module overrides any size adjustments made prior to this module in that frame." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SizeScale = { UE4CodeGen_Private::EPropertyClass::Struct, "SizeScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleSizeScale, SizeScale), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(NewProp_SizeScale_MetaData, ARRAY_COUNT(NewProp_SizeScale_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EnableZ,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EnableY,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EnableX,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SizeScale,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UParticleModuleSizeScale>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UParticleModuleSizeScale::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00881080u,
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
	IMPLEMENT_CLASS(UParticleModuleSizeScale, 3667656537);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleSizeScale(Z_Construct_UClass_UParticleModuleSizeScale, &UParticleModuleSizeScale::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleSizeScale"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleSizeScale);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
