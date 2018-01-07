// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/PhysicsEngine/PhysicsCollisionHandler.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicsCollisionHandler() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsCollisionHandler_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsCollisionHandler();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
// End Cross Module References
	void UPhysicsCollisionHandler::StaticRegisterNativesUPhysicsCollisionHandler()
	{
	}
	UClass* Z_Construct_UClass_UPhysicsCollisionHandler_NoRegister()
	{
		return UPhysicsCollisionHandler::StaticClass();
	}
	UClass* Z_Construct_UClass_UPhysicsCollisionHandler()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HideCategories", "Object" },
				{ "IncludePath", "PhysicsEngine/PhysicsCollisionHandler.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsCollisionHandler.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastImpactSoundTime_MetaData[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsCollisionHandler.h" },
				{ "ToolTip", "Time since last impact sound" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LastImpactSoundTime = { UE4CodeGen_Private::EPropertyClass::Float, "LastImpactSoundTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UPhysicsCollisionHandler, LastImpactSoundTime), METADATA_PARAMS(NewProp_LastImpactSoundTime_MetaData, ARRAY_COUNT(NewProp_LastImpactSoundTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultImpactSound_MetaData[] = {
				{ "Category", "Impact" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsCollisionHandler.h" },
				{ "ToolTip", "Sound to play" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultImpactSound = { UE4CodeGen_Private::EPropertyClass::Object, "DefaultImpactSound", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UPhysicsCollisionHandler, DefaultImpactSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(NewProp_DefaultImpactSound_MetaData, ARRAY_COUNT(NewProp_DefaultImpactSound_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpactReFireDelay_MetaData[] = {
				{ "Category", "Impact" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsCollisionHandler.h" },
				{ "ToolTip", "Min time between effect/sound being triggered" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ImpactReFireDelay = { UE4CodeGen_Private::EPropertyClass::Float, "ImpactReFireDelay", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UPhysicsCollisionHandler, ImpactReFireDelay), METADATA_PARAMS(NewProp_ImpactReFireDelay_MetaData, ARRAY_COUNT(NewProp_ImpactReFireDelay_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpactThreshold_MetaData[] = {
				{ "Category", "Impact" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsCollisionHandler.h" },
				{ "ToolTip", "How hard an impact must be to trigger effect/sound" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ImpactThreshold = { UE4CodeGen_Private::EPropertyClass::Float, "ImpactThreshold", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UPhysicsCollisionHandler, ImpactThreshold), METADATA_PARAMS(NewProp_ImpactThreshold_MetaData, ARRAY_COUNT(NewProp_ImpactThreshold_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LastImpactSoundTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultImpactSound,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ImpactReFireDelay,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ImpactThreshold,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UPhysicsCollisionHandler>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UPhysicsCollisionHandler::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
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
	IMPLEMENT_CLASS(UPhysicsCollisionHandler, 710628065);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPhysicsCollisionHandler(Z_Construct_UClass_UPhysicsCollisionHandler, &UPhysicsCollisionHandler::StaticClass, TEXT("/Script/Engine"), TEXT("UPhysicsCollisionHandler"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPhysicsCollisionHandler);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
