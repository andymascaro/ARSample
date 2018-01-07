// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Particles/VectorField/ParticleModuleVectorFieldLocal.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleVectorFieldLocal() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVectorFieldLocal_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVectorFieldLocal();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVectorFieldBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_UVectorField_NoRegister();
// End Cross Module References
	void UParticleModuleVectorFieldLocal::StaticRegisterNativesUParticleModuleVectorFieldLocal()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleVectorFieldLocal_NoRegister()
	{
		return UParticleModuleVectorFieldLocal::StaticClass();
	}
	UClass* Z_Construct_UClass_UParticleModuleVectorFieldLocal()
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
				{ "DisplayName", "Local Vector Field" },
				{ "HideCategories", "Object Object Object" },
				{ "IncludePath", "Particles/VectorField/ParticleModuleVectorFieldLocal.h" },
				{ "ModuleRelativePath", "Classes/Particles/VectorField/ParticleModuleVectorFieldLocal.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseFixDT_MetaData[] = {
				{ "Category", "VectorField" },
				{ "ModuleRelativePath", "Classes/Particles/VectorField/ParticleModuleVectorFieldLocal.h" },
				{ "ToolTip", "Use fix delta time in the simulation?" },
			};
#endif
			auto NewProp_bUseFixDT_SetBit = [](void* Obj){ ((UParticleModuleVectorFieldLocal*)Obj)->bUseFixDT = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseFixDT = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseFixDT", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleVectorFieldLocal), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseFixDT_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseFixDT_MetaData, ARRAY_COUNT(NewProp_bUseFixDT_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTileZ_MetaData[] = {
				{ "Category", "VectorField" },
				{ "ModuleRelativePath", "Classes/Particles/VectorField/ParticleModuleVectorFieldLocal.h" },
				{ "ToolTip", "Tile vector field in z axis?" },
			};
#endif
			auto NewProp_bTileZ_SetBit = [](void* Obj){ ((UParticleModuleVectorFieldLocal*)Obj)->bTileZ = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTileZ = { UE4CodeGen_Private::EPropertyClass::Bool, "bTileZ", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleVectorFieldLocal), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bTileZ_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bTileZ_MetaData, ARRAY_COUNT(NewProp_bTileZ_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTileY_MetaData[] = {
				{ "Category", "VectorField" },
				{ "ModuleRelativePath", "Classes/Particles/VectorField/ParticleModuleVectorFieldLocal.h" },
				{ "ToolTip", "Tile vector field in y axis?" },
			};
#endif
			auto NewProp_bTileY_SetBit = [](void* Obj){ ((UParticleModuleVectorFieldLocal*)Obj)->bTileY = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTileY = { UE4CodeGen_Private::EPropertyClass::Bool, "bTileY", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleVectorFieldLocal), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bTileY_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bTileY_MetaData, ARRAY_COUNT(NewProp_bTileY_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTileX_MetaData[] = {
				{ "Category", "VectorField" },
				{ "ModuleRelativePath", "Classes/Particles/VectorField/ParticleModuleVectorFieldLocal.h" },
				{ "ToolTip", "Tile vector field in x axis?" },
			};
#endif
			auto NewProp_bTileX_SetBit = [](void* Obj){ ((UParticleModuleVectorFieldLocal*)Obj)->bTileX = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTileX = { UE4CodeGen_Private::EPropertyClass::Bool, "bTileX", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleVectorFieldLocal), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bTileX_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bTileX_MetaData, ARRAY_COUNT(NewProp_bTileX_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnoreComponentTransform_MetaData[] = {
				{ "Category", "VectorField" },
				{ "ModuleRelativePath", "Classes/Particles/VectorField/ParticleModuleVectorFieldLocal.h" },
				{ "ToolTip", "Ignore component transform." },
			};
#endif
			auto NewProp_bIgnoreComponentTransform_SetBit = [](void* Obj){ ((UParticleModuleVectorFieldLocal*)Obj)->bIgnoreComponentTransform = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreComponentTransform = { UE4CodeGen_Private::EPropertyClass::Bool, "bIgnoreComponentTransform", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleVectorFieldLocal), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIgnoreComponentTransform_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIgnoreComponentTransform_MetaData, ARRAY_COUNT(NewProp_bIgnoreComponentTransform_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tightness_MetaData[] = {
				{ "Category", "VectorField" },
				{ "ModuleRelativePath", "Classes/Particles/VectorField/ParticleModuleVectorFieldLocal.h" },
				{ "ToolTip", "Tightness tweak value: 0: Force 1: Velocity." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Tightness = { UE4CodeGen_Private::EPropertyClass::Float, "Tightness", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleVectorFieldLocal, Tightness), METADATA_PARAMS(NewProp_Tightness_MetaData, ARRAY_COUNT(NewProp_Tightness_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Intensity_MetaData[] = {
				{ "Category", "VectorField" },
				{ "ModuleRelativePath", "Classes/Particles/VectorField/ParticleModuleVectorFieldLocal.h" },
				{ "ToolTip", "Intensity of the local vector field." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Intensity = { UE4CodeGen_Private::EPropertyClass::Float, "Intensity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleVectorFieldLocal, Intensity), METADATA_PARAMS(NewProp_Intensity_MetaData, ARRAY_COUNT(NewProp_Intensity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RelativeScale3D_MetaData[] = {
				{ "Category", "VectorField" },
				{ "ModuleRelativePath", "Classes/Particles/VectorField/ParticleModuleVectorFieldLocal.h" },
				{ "ToolTip", "Scale of the vector field relative to the emitter." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_RelativeScale3D = { UE4CodeGen_Private::EPropertyClass::Struct, "RelativeScale3D", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleVectorFieldLocal, RelativeScale3D), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_RelativeScale3D_MetaData, ARRAY_COUNT(NewProp_RelativeScale3D_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RelativeRotation_MetaData[] = {
				{ "Category", "VectorField" },
				{ "ModuleRelativePath", "Classes/Particles/VectorField/ParticleModuleVectorFieldLocal.h" },
				{ "ToolTip", "Rotation of the vector field relative to the emitter." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_RelativeRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "RelativeRotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleVectorFieldLocal, RelativeRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(NewProp_RelativeRotation_MetaData, ARRAY_COUNT(NewProp_RelativeRotation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RelativeTranslation_MetaData[] = {
				{ "Category", "VectorField" },
				{ "ModuleRelativePath", "Classes/Particles/VectorField/ParticleModuleVectorFieldLocal.h" },
				{ "ToolTip", "Translation of the vector field relative to the emitter." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_RelativeTranslation = { UE4CodeGen_Private::EPropertyClass::Struct, "RelativeTranslation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleVectorFieldLocal, RelativeTranslation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_RelativeTranslation_MetaData, ARRAY_COUNT(NewProp_RelativeTranslation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VectorField_MetaData[] = {
				{ "Category", "VectorField" },
				{ "ModuleRelativePath", "Classes/Particles/VectorField/ParticleModuleVectorFieldLocal.h" },
				{ "ToolTip", "Vector field asset to use." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VectorField = { UE4CodeGen_Private::EPropertyClass::Object, "VectorField", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleVectorFieldLocal, VectorField), Z_Construct_UClass_UVectorField_NoRegister, METADATA_PARAMS(NewProp_VectorField_MetaData, ARRAY_COUNT(NewProp_VectorField_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseFixDT,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bTileZ,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bTileY,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bTileX,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIgnoreComponentTransform,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Tightness,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Intensity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RelativeScale3D,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RelativeRotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RelativeTranslation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VectorField,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UParticleModuleVectorFieldLocal>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UParticleModuleVectorFieldLocal::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00081080u,
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
	IMPLEMENT_CLASS(UParticleModuleVectorFieldLocal, 3351776739);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleVectorFieldLocal(Z_Construct_UClass_UParticleModuleVectorFieldLocal, &UParticleModuleVectorFieldLocal::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleVectorFieldLocal"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleVectorFieldLocal);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
