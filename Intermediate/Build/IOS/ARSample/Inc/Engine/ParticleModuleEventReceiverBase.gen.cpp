// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Particles/Event/ParticleModuleEventReceiverBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleEventReceiverBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleEventReceiverBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleEventReceiverBase();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleEventBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EParticleEventType();
// End Cross Module References
	void UParticleModuleEventReceiverBase::StaticRegisterNativesUParticleModuleEventReceiverBase()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleEventReceiverBase_NoRegister()
	{
		return UParticleModuleEventReceiverBase::StaticClass();
	}
	UClass* Z_Construct_UClass_UParticleModuleEventReceiverBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UParticleModuleEventBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Object Object Object" },
				{ "IncludePath", "Particles/Event/ParticleModuleEventReceiverBase.h" },
				{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventReceiverBase.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[] = {
				{ "Category", "Source" },
				{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventReceiverBase.h" },
				{ "ToolTip", "The name of the emitter of interest for generating the event." },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_EventName = { UE4CodeGen_Private::EPropertyClass::Name, "EventName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleEventReceiverBase, EventName), METADATA_PARAMS(NewProp_EventName_MetaData, ARRAY_COUNT(NewProp_EventName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventGeneratorType_MetaData[] = {
				{ "Category", "Source" },
				{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventReceiverBase.h" },
				{ "ToolTip", "The type of event that will generate the kill." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_EventGeneratorType = { UE4CodeGen_Private::EPropertyClass::Byte, "EventGeneratorType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleEventReceiverBase, EventGeneratorType), Z_Construct_UEnum_Engine_EParticleEventType, METADATA_PARAMS(NewProp_EventGeneratorType_MetaData, ARRAY_COUNT(NewProp_EventGeneratorType_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EventName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EventGeneratorType,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UParticleModuleEventReceiverBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UParticleModuleEventReceiverBase::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00001081u,
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
	IMPLEMENT_CLASS(UParticleModuleEventReceiverBase, 2610330287);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleEventReceiverBase(Z_Construct_UClass_UParticleModuleEventReceiverBase, &UParticleModuleEventReceiverBase::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleEventReceiverBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleEventReceiverBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
