// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Particles/Location/ParticleModuleLocationPrimitiveCylinder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleLocationPrimitiveCylinder() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_CylinderHeightAxis();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocationPrimitiveCylinder_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocationPrimitiveCylinder();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocationPrimitiveBase();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
// End Cross Module References
	static UEnum* CylinderHeightAxis_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_CylinderHeightAxis, Z_Construct_UPackage__Script_Engine(), TEXT("CylinderHeightAxis"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_CylinderHeightAxis(CylinderHeightAxis_StaticEnum, TEXT("/Script/Engine"), TEXT("CylinderHeightAxis"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_CylinderHeightAxis_CRC() { return 301275899U; }
	UEnum* Z_Construct_UEnum_Engine_CylinderHeightAxis()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("CylinderHeightAxis"), 0, Get_Z_Construct_UEnum_Engine_CylinderHeightAxis_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "PMLPC_HEIGHTAXIS_X", (int64)PMLPC_HEIGHTAXIS_X },
				{ "PMLPC_HEIGHTAXIS_Y", (int64)PMLPC_HEIGHTAXIS_Y },
				{ "PMLPC_HEIGHTAXIS_Z", (int64)PMLPC_HEIGHTAXIS_Z },
				{ "PMLPC_HEIGHTAXIS_MAX", (int64)PMLPC_HEIGHTAXIS_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationPrimitiveCylinder.h" },
				{ "PMLPC_HEIGHTAXIS_X.DisplayName", "X" },
				{ "PMLPC_HEIGHTAXIS_Y.DisplayName", "Y" },
				{ "PMLPC_HEIGHTAXIS_Z.DisplayName", "Z" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"CylinderHeightAxis",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"CylinderHeightAxis",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UParticleModuleLocationPrimitiveCylinder::StaticRegisterNativesUParticleModuleLocationPrimitiveCylinder()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleLocationPrimitiveCylinder_NoRegister()
	{
		return UParticleModuleLocationPrimitiveCylinder::StaticClass();
	}
	UClass* Z_Construct_UClass_UParticleModuleLocationPrimitiveCylinder()
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
				{ "DisplayName", "Cylinder" },
				{ "HideCategories", "Object Object Object Object" },
				{ "IncludePath", "Particles/Location/ParticleModuleLocationPrimitiveCylinder.h" },
				{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationPrimitiveCylinder.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeightAxis_MetaData[] = {
				{ "Category", "Location" },
				{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationPrimitiveCylinder.h" },
				{ "ToolTip", "Determine particle particle system axis that should represent the height of the cylinder.\nCan be one of the following:\n  PMLPC_HEIGHTAXIS_X - Orient the height along the particle system X-axis.\n  PMLPC_HEIGHTAXIS_Y - Orient the height along the particle system Y-axis.\n  PMLPC_HEIGHTAXIS_Z - Orient the height along the particle system Z-axis." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_HeightAxis = { UE4CodeGen_Private::EPropertyClass::Byte, "HeightAxis", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleLocationPrimitiveCylinder, HeightAxis), Z_Construct_UEnum_Engine_CylinderHeightAxis, METADATA_PARAMS(NewProp_HeightAxis_MetaData, ARRAY_COUNT(NewProp_HeightAxis_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartHeight_MetaData[] = {
				{ "Category", "Location" },
				{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationPrimitiveCylinder.h" },
				{ "ToolTip", "The height of the cylinder, centered about the location." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartHeight = { UE4CodeGen_Private::EPropertyClass::Struct, "StartHeight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleLocationPrimitiveCylinder, StartHeight), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(NewProp_StartHeight_MetaData, ARRAY_COUNT(NewProp_StartHeight_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartRadius_MetaData[] = {
				{ "Category", "Location" },
				{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationPrimitiveCylinder.h" },
				{ "ToolTip", "The radius of the cylinder." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartRadius = { UE4CodeGen_Private::EPropertyClass::Struct, "StartRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleLocationPrimitiveCylinder, StartRadius), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(NewProp_StartRadius_MetaData, ARRAY_COUNT(NewProp_StartRadius_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RadialVelocity_MetaData[] = {
				{ "Category", "Location" },
				{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationPrimitiveCylinder.h" },
				{ "ToolTip", "If true, get the particle velocity form the radial distance inside the primitive." },
			};
#endif
			auto NewProp_RadialVelocity_SetBit = [](void* Obj){ ((UParticleModuleLocationPrimitiveCylinder*)Obj)->RadialVelocity = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RadialVelocity = { UE4CodeGen_Private::EPropertyClass::Bool, "RadialVelocity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleLocationPrimitiveCylinder), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_RadialVelocity_SetBit)>::SetBit, METADATA_PARAMS(NewProp_RadialVelocity_MetaData, ARRAY_COUNT(NewProp_RadialVelocity_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HeightAxis,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StartHeight,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StartRadius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RadialVelocity,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UParticleModuleLocationPrimitiveCylinder>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UParticleModuleLocationPrimitiveCylinder::StaticClass,
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
	IMPLEMENT_CLASS(UParticleModuleLocationPrimitiveCylinder, 4034068555);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleLocationPrimitiveCylinder(Z_Construct_UClass_UParticleModuleLocationPrimitiveCylinder, &UParticleModuleLocationPrimitiveCylinder::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleLocationPrimitiveCylinder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleLocationPrimitiveCylinder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
