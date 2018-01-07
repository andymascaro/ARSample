// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Components/LightmassPortalComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLightmassPortalComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ULightmassPortalComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULightmassPortalComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	void ULightmassPortalComponent::StaticRegisterNativesULightmassPortalComponent()
	{
	}
	UClass* Z_Construct_UClass_ULightmassPortalComponent_NoRegister()
	{
		return ULightmassPortalComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_ULightmassPortalComponent()
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
				{ "HideCategories", "Collision Object Physics SceneComponent Activation Components|Activation Mobility Trigger PhysicsVolume" },
				{ "IncludePath", "Components/LightmassPortalComponent.h" },
				{ "ModuleRelativePath", "Classes/Components/LightmassPortalComponent.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewBox_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/Components/LightmassPortalComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviewBox = { UE4CodeGen_Private::EPropertyClass::Object, "PreviewBox", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080008, 1, nullptr, STRUCT_OFFSET(ULightmassPortalComponent, PreviewBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(NewProp_PreviewBox_MetaData, ARRAY_COUNT(NewProp_PreviewBox_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PreviewBox,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ULightmassPortalComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ULightmassPortalComponent::StaticClass,
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
	IMPLEMENT_CLASS(ULightmassPortalComponent, 1895620851);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULightmassPortalComponent(Z_Construct_UClass_ULightmassPortalComponent, &ULightmassPortalComponent::StaticClass, TEXT("/Script/Engine"), TEXT("ULightmassPortalComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULightmassPortalComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
