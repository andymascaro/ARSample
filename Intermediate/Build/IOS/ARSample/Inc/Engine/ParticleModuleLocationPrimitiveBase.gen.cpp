// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Particles/Location/ParticleModuleLocationPrimitiveBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleLocationPrimitiveBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocationPrimitiveBase();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocationBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
// End Cross Module References
	void UParticleModuleLocationPrimitiveBase::StaticRegisterNativesUParticleModuleLocationPrimitiveBase()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_NoRegister()
	{
		return UParticleModuleLocationPrimitiveBase::StaticClass();
	}
	UClass* Z_Construct_UClass_UParticleModuleLocationPrimitiveBase()
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
				{ "HideCategories", "Object Object Object" },
				{ "IncludePath", "Particles/Location/ParticleModuleLocationPrimitiveBase.h" },
				{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationPrimitiveBase.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartLocation_MetaData[] = {
				{ "Category", "Location" },
				{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationPrimitiveBase.h" },
				{ "ToolTip", "The location of the bounding primitive relative to the position of the emitter." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "StartLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleLocationPrimitiveBase, StartLocation), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(NewProp_StartLocation_MetaData, ARRAY_COUNT(NewProp_StartLocation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VelocityScale_MetaData[] = {
				{ "Category", "Location" },
				{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationPrimitiveBase.h" },
				{ "ToolTip", "The scale applied to the velocity. (Only used if 'Velocity' is checked)." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_VelocityScale = { UE4CodeGen_Private::EPropertyClass::Struct, "VelocityScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleLocationPrimitiveBase, VelocityScale), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(NewProp_VelocityScale_MetaData, ARRAY_COUNT(NewProp_VelocityScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[] = {
				{ "Category", "Location" },
				{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationPrimitiveBase.h" },
				{ "ToolTip", "Whether the particle should get its velocity from the position within the primitive." },
			};
#endif
			auto NewProp_Velocity_SetBit = [](void* Obj){ ((UParticleModuleLocationPrimitiveBase*)Obj)->Velocity = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Velocity = { UE4CodeGen_Private::EPropertyClass::Bool, "Velocity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleLocationPrimitiveBase), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_Velocity_SetBit)>::SetBit, METADATA_PARAMS(NewProp_Velocity_MetaData, ARRAY_COUNT(NewProp_Velocity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurfaceOnly_MetaData[] = {
				{ "Category", "Location" },
				{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationPrimitiveBase.h" },
				{ "ToolTip", "Whether particles will only spawn on the surface of the primitive." },
			};
#endif
			auto NewProp_SurfaceOnly_SetBit = [](void* Obj){ ((UParticleModuleLocationPrimitiveBase*)Obj)->SurfaceOnly = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SurfaceOnly = { UE4CodeGen_Private::EPropertyClass::Bool, "SurfaceOnly", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleLocationPrimitiveBase), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_SurfaceOnly_SetBit)>::SetBit, METADATA_PARAMS(NewProp_SurfaceOnly_MetaData, ARRAY_COUNT(NewProp_SurfaceOnly_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Negative_Z_MetaData[] = {
				{ "Category", "Location" },
				{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationPrimitiveBase.h" },
				{ "ToolTip", "Whether the negative Zaxis is valid for spawning." },
			};
#endif
			auto NewProp_Negative_Z_SetBit = [](void* Obj){ ((UParticleModuleLocationPrimitiveBase*)Obj)->Negative_Z = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Negative_Z = { UE4CodeGen_Private::EPropertyClass::Bool, "Negative_Z", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleLocationPrimitiveBase), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_Negative_Z_SetBit)>::SetBit, METADATA_PARAMS(NewProp_Negative_Z_MetaData, ARRAY_COUNT(NewProp_Negative_Z_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Negative_Y_MetaData[] = {
				{ "Category", "Location" },
				{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationPrimitiveBase.h" },
				{ "ToolTip", "Whether the negative Y axis is valid for spawning." },
			};
#endif
			auto NewProp_Negative_Y_SetBit = [](void* Obj){ ((UParticleModuleLocationPrimitiveBase*)Obj)->Negative_Y = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Negative_Y = { UE4CodeGen_Private::EPropertyClass::Bool, "Negative_Y", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleLocationPrimitiveBase), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_Negative_Y_SetBit)>::SetBit, METADATA_PARAMS(NewProp_Negative_Y_MetaData, ARRAY_COUNT(NewProp_Negative_Y_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Negative_X_MetaData[] = {
				{ "Category", "Location" },
				{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationPrimitiveBase.h" },
				{ "ToolTip", "Whether the negative X axis is valid for spawning." },
			};
#endif
			auto NewProp_Negative_X_SetBit = [](void* Obj){ ((UParticleModuleLocationPrimitiveBase*)Obj)->Negative_X = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Negative_X = { UE4CodeGen_Private::EPropertyClass::Bool, "Negative_X", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleLocationPrimitiveBase), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_Negative_X_SetBit)>::SetBit, METADATA_PARAMS(NewProp_Negative_X_MetaData, ARRAY_COUNT(NewProp_Negative_X_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Positive_Z_MetaData[] = {
				{ "Category", "Location" },
				{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationPrimitiveBase.h" },
				{ "ToolTip", "Whether the positive Z axis is valid for spawning." },
			};
#endif
			auto NewProp_Positive_Z_SetBit = [](void* Obj){ ((UParticleModuleLocationPrimitiveBase*)Obj)->Positive_Z = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Positive_Z = { UE4CodeGen_Private::EPropertyClass::Bool, "Positive_Z", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleLocationPrimitiveBase), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_Positive_Z_SetBit)>::SetBit, METADATA_PARAMS(NewProp_Positive_Z_MetaData, ARRAY_COUNT(NewProp_Positive_Z_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Positive_Y_MetaData[] = {
				{ "Category", "Location" },
				{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationPrimitiveBase.h" },
				{ "ToolTip", "Whether the positive Y axis is valid for spawning." },
			};
#endif
			auto NewProp_Positive_Y_SetBit = [](void* Obj){ ((UParticleModuleLocationPrimitiveBase*)Obj)->Positive_Y = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Positive_Y = { UE4CodeGen_Private::EPropertyClass::Bool, "Positive_Y", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleLocationPrimitiveBase), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_Positive_Y_SetBit)>::SetBit, METADATA_PARAMS(NewProp_Positive_Y_MetaData, ARRAY_COUNT(NewProp_Positive_Y_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Positive_X_MetaData[] = {
				{ "Category", "Location" },
				{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationPrimitiveBase.h" },
				{ "ToolTip", "Whether the positive X axis is valid for spawning." },
			};
#endif
			auto NewProp_Positive_X_SetBit = [](void* Obj){ ((UParticleModuleLocationPrimitiveBase*)Obj)->Positive_X = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Positive_X = { UE4CodeGen_Private::EPropertyClass::Bool, "Positive_X", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleLocationPrimitiveBase), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_Positive_X_SetBit)>::SetBit, METADATA_PARAMS(NewProp_Positive_X_MetaData, ARRAY_COUNT(NewProp_Positive_X_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StartLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VelocityScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Velocity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SurfaceOnly,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Negative_Z,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Negative_Y,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Negative_X,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Positive_Z,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Positive_Y,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Positive_X,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UParticleModuleLocationPrimitiveBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UParticleModuleLocationPrimitiveBase::StaticClass,
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
	IMPLEMENT_CLASS(UParticleModuleLocationPrimitiveBase, 3272006994);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleLocationPrimitiveBase(Z_Construct_UClass_UParticleModuleLocationPrimitiveBase, &UParticleModuleLocationPrimitiveBase::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleLocationPrimitiveBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleLocationPrimitiveBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
