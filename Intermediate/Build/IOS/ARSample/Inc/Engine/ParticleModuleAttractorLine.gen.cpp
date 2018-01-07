// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Particles/Attractor/ParticleModuleAttractorLine.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleAttractorLine() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleAttractorLine_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleAttractorLine();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleAttractorBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void UParticleModuleAttractorLine::StaticRegisterNativesUParticleModuleAttractorLine()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleAttractorLine_NoRegister()
	{
		return UParticleModuleAttractorLine::StaticClass();
	}
	UClass* Z_Construct_UClass_UParticleModuleAttractorLine()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UParticleModuleAttractorBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "Line Attractor" },
				{ "HideCategories", "Object Object Object" },
				{ "IncludePath", "Particles/Attractor/ParticleModuleAttractorLine.h" },
				{ "ModuleRelativePath", "Classes/Particles/Attractor/ParticleModuleAttractorLine.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[] = {
				{ "Category", "Attractor" },
				{ "ModuleRelativePath", "Classes/Particles/Attractor/ParticleModuleAttractorLine.h" },
				{ "ToolTip", "The strength of the line attractor." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Strength = { UE4CodeGen_Private::EPropertyClass::Struct, "Strength", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleAttractorLine, Strength), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(NewProp_Strength_MetaData, ARRAY_COUNT(NewProp_Strength_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Range_MetaData[] = {
				{ "Category", "Attractor" },
				{ "ModuleRelativePath", "Classes/Particles/Attractor/ParticleModuleAttractorLine.h" },
				{ "ToolTip", "The range of the line attractor." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Range = { UE4CodeGen_Private::EPropertyClass::Struct, "Range", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleAttractorLine, Range), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(NewProp_Range_MetaData, ARRAY_COUNT(NewProp_Range_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndPoint1_MetaData[] = {
				{ "Category", "Attractor" },
				{ "ModuleRelativePath", "Classes/Particles/Attractor/ParticleModuleAttractorLine.h" },
				{ "ToolTip", "The second endpoint of the line." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndPoint1 = { UE4CodeGen_Private::EPropertyClass::Struct, "EndPoint1", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleAttractorLine, EndPoint1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_EndPoint1_MetaData, ARRAY_COUNT(NewProp_EndPoint1_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndPoint0_MetaData[] = {
				{ "Category", "Attractor" },
				{ "ModuleRelativePath", "Classes/Particles/Attractor/ParticleModuleAttractorLine.h" },
				{ "ToolTip", "The first endpoint of the line." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndPoint0 = { UE4CodeGen_Private::EPropertyClass::Struct, "EndPoint0", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleAttractorLine, EndPoint0), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_EndPoint0_MetaData, ARRAY_COUNT(NewProp_EndPoint0_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Strength,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Range,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EndPoint1,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EndPoint0,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UParticleModuleAttractorLine>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UParticleModuleAttractorLine::StaticClass,
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
	IMPLEMENT_CLASS(UParticleModuleAttractorLine, 3303221122);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleAttractorLine(Z_Construct_UClass_UParticleModuleAttractorLine, &UParticleModuleAttractorLine::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleAttractorLine"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleAttractorLine);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
