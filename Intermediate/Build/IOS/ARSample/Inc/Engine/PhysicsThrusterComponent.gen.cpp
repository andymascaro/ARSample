// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/PhysicsEngine/PhysicsThrusterComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicsThrusterComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsThrusterComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsThrusterComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UPhysicsThrusterComponent::StaticRegisterNativesUPhysicsThrusterComponent()
	{
	}
	UClass* Z_Construct_UClass_UPhysicsThrusterComponent_NoRegister()
	{
		return UPhysicsThrusterComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UPhysicsThrusterComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_USceneComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Physics" },
				{ "HideCategories", "Object Mobility LOD PhysicsVolume" },
				{ "IncludePath", "PhysicsEngine/PhysicsThrusterComponent.h" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsThrusterComponent.h" },
				{ "ToolTip", "Used with objects that have physics to apply a force down the negative-X direction\nie. point X in the direction you want the thrust in." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThrustStrength_MetaData[] = {
				{ "Category", "Physics" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsThrusterComponent.h" },
				{ "ToolTip", "Strength of thrust force applied to the base object." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ThrustStrength = { UE4CodeGen_Private::EPropertyClass::Float, "ThrustStrength", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000200000005, 1, nullptr, STRUCT_OFFSET(UPhysicsThrusterComponent, ThrustStrength), METADATA_PARAMS(NewProp_ThrustStrength_MetaData, ARRAY_COUNT(NewProp_ThrustStrength_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ThrustStrength,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UPhysicsThrusterComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UPhysicsThrusterComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00A80080u,
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
	IMPLEMENT_CLASS(UPhysicsThrusterComponent, 2439788782);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPhysicsThrusterComponent(Z_Construct_UClass_UPhysicsThrusterComponent, &UPhysicsThrusterComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UPhysicsThrusterComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPhysicsThrusterComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
