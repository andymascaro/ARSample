// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/GameFramework/PainCausingVolume.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePainCausingVolume() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APainCausingVolume_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APainCausingVolume();
	ENGINE_API UClass* Z_Construct_UClass_APhysicsVolume();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
// End Cross Module References
	void APainCausingVolume::StaticRegisterNativesAPainCausingVolume()
	{
	}
	UClass* Z_Construct_UClass_APainCausingVolume_NoRegister()
	{
		return APainCausingVolume::StaticClass();
	}
	UClass* Z_Construct_UClass_APainCausingVolume()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_APhysicsVolume,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Brush Physics Object Display Rendering Physics Input Blueprint" },
				{ "IncludePath", "GameFramework/PainCausingVolume.h" },
				{ "ModuleRelativePath", "Classes/GameFramework/PainCausingVolume.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
				{ "ToolTip", "Volume that causes damage over time to any Actor that overlaps its collision." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageInstigator_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/PainCausingVolume.h" },
				{ "ToolTip", "Controller that gets credit for any damage caused by this volume" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageInstigator = { UE4CodeGen_Private::EPropertyClass::Object, "DamageInstigator", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(APainCausingVolume, DamageInstigator), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(NewProp_DamageInstigator_MetaData, ARRAY_COUNT(NewProp_DamageInstigator_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BACKUP_bPainCausing_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/PainCausingVolume.h" },
				{ "ToolTip", "Checkpointed bPainCausing value" },
			};
#endif
			auto NewProp_BACKUP_bPainCausing_SetBit = [](void* Obj){ ((APainCausingVolume*)Obj)->BACKUP_bPainCausing = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_BACKUP_bPainCausing = { UE4CodeGen_Private::EPropertyClass::Bool, "BACKUP_bPainCausing", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(APainCausingVolume), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_BACKUP_bPainCausing_SetBit)>::SetBit, METADATA_PARAMS(NewProp_BACKUP_bPainCausing_MetaData, ARRAY_COUNT(NewProp_BACKUP_bPainCausing_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEntryPain_MetaData[] = {
				{ "Category", "PainCausingVolume" },
				{ "ModuleRelativePath", "Classes/GameFramework/PainCausingVolume.h" },
				{ "ToolTip", "if bPainCausing, cause pain when something enters the volume in addition to damage each second" },
			};
#endif
			auto NewProp_bEntryPain_SetBit = [](void* Obj){ ((APainCausingVolume*)Obj)->bEntryPain = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEntryPain = { UE4CodeGen_Private::EPropertyClass::Bool, "bEntryPain", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(APainCausingVolume), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEntryPain_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEntryPain_MetaData, ARRAY_COUNT(NewProp_bEntryPain_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PainInterval_MetaData[] = {
				{ "Category", "PainCausingVolume" },
				{ "ModuleRelativePath", "Classes/GameFramework/PainCausingVolume.h" },
				{ "ToolTip", "If pain causing, time between damage applications." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PainInterval = { UE4CodeGen_Private::EPropertyClass::Float, "PainInterval", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(APainCausingVolume, PainInterval), METADATA_PARAMS(NewProp_PainInterval_MetaData, ARRAY_COUNT(NewProp_PainInterval_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[] = {
				{ "Category", "PainCausingVolume" },
				{ "ModuleRelativePath", "Classes/GameFramework/PainCausingVolume.h" },
				{ "ToolTip", "Type of damage done" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_DamageType = { UE4CodeGen_Private::EPropertyClass::Class, "DamageType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000005, 1, nullptr, STRUCT_OFFSET(APainCausingVolume, DamageType), Z_Construct_UClass_UDamageType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_DamageType_MetaData, ARRAY_COUNT(NewProp_DamageType_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamagePerSec_MetaData[] = {
				{ "Category", "PainCausingVolume" },
				{ "ModuleRelativePath", "Classes/GameFramework/PainCausingVolume.h" },
				{ "ToolTip", "Damage done per second to actors in this volume when bPainCausing=true" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DamagePerSec = { UE4CodeGen_Private::EPropertyClass::Float, "DamagePerSec", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(APainCausingVolume, DamagePerSec), METADATA_PARAMS(NewProp_DamagePerSec_MetaData, ARRAY_COUNT(NewProp_DamagePerSec_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPainCausing_MetaData[] = {
				{ "Category", "PainCausingVolume" },
				{ "ModuleRelativePath", "Classes/GameFramework/PainCausingVolume.h" },
				{ "ToolTip", "Whether volume currently causes damage." },
			};
#endif
			auto NewProp_bPainCausing_SetBit = [](void* Obj){ ((APainCausingVolume*)Obj)->bPainCausing = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPainCausing = { UE4CodeGen_Private::EPropertyClass::Bool, "bPainCausing", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(APainCausingVolume), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bPainCausing_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bPainCausing_MetaData, ARRAY_COUNT(NewProp_bPainCausing_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DamageInstigator,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BACKUP_bPainCausing,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEntryPain,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PainInterval,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DamageType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DamagePerSec,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bPainCausing,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<APainCausingVolume>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&APainCausingVolume::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
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
	IMPLEMENT_CLASS(APainCausingVolume, 1405467801);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APainCausingVolume(Z_Construct_UClass_APainCausingVolume, &APainCausingVolume::StaticClass, TEXT("/Script/Engine"), TEXT("APainCausingVolume"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APainCausingVolume);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
