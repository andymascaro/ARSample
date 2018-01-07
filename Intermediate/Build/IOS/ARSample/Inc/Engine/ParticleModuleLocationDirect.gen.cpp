// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Particles/Location/ParticleModuleLocationDirect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleLocationDirect() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocationDirect_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocationDirect();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocationBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
// End Cross Module References
	void UParticleModuleLocationDirect::StaticRegisterNativesUParticleModuleLocationDirect()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleLocationDirect_NoRegister()
	{
		return UParticleModuleLocationDirect::StaticClass();
	}
	UClass* Z_Construct_UClass_UParticleModuleLocationDirect()
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
				{ "DisplayName", "Direct Location" },
				{ "HideCategories", "Object Object Object" },
				{ "IncludePath", "Particles/Location/ParticleModuleLocationDirect.h" },
				{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationDirect.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[] = {
				{ "Category", "Location" },
				{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationDirect.h" },
				{ "ToolTip", "Currently unused." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Direction = { UE4CodeGen_Private::EPropertyClass::Struct, "Direction", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleLocationDirect, Direction), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(NewProp_Direction_MetaData, ARRAY_COUNT(NewProp_Direction_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleFactor_MetaData[] = {
				{ "Category", "Location" },
				{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationDirect.h" },
				{ "ToolTip", "Scales the velocity of the object at a given point in the time-line." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScaleFactor = { UE4CodeGen_Private::EPropertyClass::Struct, "ScaleFactor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleLocationDirect, ScaleFactor), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(NewProp_ScaleFactor_MetaData, ARRAY_COUNT(NewProp_ScaleFactor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocationOffset_MetaData[] = {
				{ "Category", "Location" },
				{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationDirect.h" },
				{ "ToolTip", "An offset to apply to the position retrieved from the Location calculation.\nThe offset is retrieved using the EmitterTime.\nThe offset will remain constant over the life of the particle." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocationOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "LocationOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleLocationDirect, LocationOffset), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(NewProp_LocationOffset_MetaData, ARRAY_COUNT(NewProp_LocationOffset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
				{ "Category", "Location" },
				{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationDirect.h" },
				{ "ToolTip", "The location of the particle at a give time. Retrieved using the particle RelativeTime.\nIMPORTANT: the particle location is set to this value, thereby over-writing any previous module impacts." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location = { UE4CodeGen_Private::EPropertyClass::Struct, "Location", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleLocationDirect, Location), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(NewProp_Location_MetaData, ARRAY_COUNT(NewProp_Location_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Direction,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScaleFactor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LocationOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Location,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UParticleModuleLocationDirect>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UParticleModuleLocationDirect::StaticClass,
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
	IMPLEMENT_CLASS(UParticleModuleLocationDirect, 686130051);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleLocationDirect(Z_Construct_UClass_UParticleModuleLocationDirect, &UParticleModuleLocationDirect::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleLocationDirect"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleLocationDirect);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
