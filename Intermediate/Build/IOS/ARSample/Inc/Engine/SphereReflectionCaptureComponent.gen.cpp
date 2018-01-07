// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Components/SphereReflectionCaptureComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSphereReflectionCaptureComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USphereReflectionCaptureComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereReflectionCaptureComponent();
	ENGINE_API UClass* Z_Construct_UClass_UReflectionCaptureComponent();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UDrawSphereComponent_NoRegister();
// End Cross Module References
	void USphereReflectionCaptureComponent::StaticRegisterNativesUSphereReflectionCaptureComponent()
	{
	}
	UClass* Z_Construct_UClass_USphereReflectionCaptureComponent_NoRegister()
	{
		return USphereReflectionCaptureComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_USphereReflectionCaptureComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UReflectionCaptureComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Collision Object Physics SceneComponent Collision Object Physics SceneComponent Activation Components|Activation Mobility Trigger PhysicsVolume" },
				{ "IncludePath", "Components/SphereReflectionCaptureComponent.h" },
				{ "ModuleRelativePath", "Classes/Components/SphereReflectionCaptureComponent.h" },
				{ "ToolTip", "-> will be exported to EngineDecalClasses.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewInfluenceRadius_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/Components/SphereReflectionCaptureComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviewInfluenceRadius = { UE4CodeGen_Private::EPropertyClass::Object, "PreviewInfluenceRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080008, 1, nullptr, STRUCT_OFFSET(USphereReflectionCaptureComponent, PreviewInfluenceRadius), Z_Construct_UClass_UDrawSphereComponent_NoRegister, METADATA_PARAMS(NewProp_PreviewInfluenceRadius_MetaData, ARRAY_COUNT(NewProp_PreviewInfluenceRadius_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CaptureDistanceScale_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/SphereReflectionCaptureComponent.h" },
				{ "ToolTip", "Not needed anymore, not yet removed in case the artist setup values are needed in the future" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CaptureDistanceScale = { UE4CodeGen_Private::EPropertyClass::Float, "CaptureDistanceScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(USphereReflectionCaptureComponent, CaptureDistanceScale), METADATA_PARAMS(NewProp_CaptureDistanceScale_MetaData, ARRAY_COUNT(NewProp_CaptureDistanceScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InfluenceRadius_MetaData[] = {
				{ "Category", "ReflectionCapture" },
				{ "ModuleRelativePath", "Classes/Components/SphereReflectionCaptureComponent.h" },
				{ "ToolTip", "Radius of the area that can receive reflections from this capture." },
				{ "UIMax", "16384.0" },
				{ "UIMin", "8.0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InfluenceRadius = { UE4CodeGen_Private::EPropertyClass::Float, "InfluenceRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(USphereReflectionCaptureComponent, InfluenceRadius), METADATA_PARAMS(NewProp_InfluenceRadius_MetaData, ARRAY_COUNT(NewProp_InfluenceRadius_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PreviewInfluenceRadius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CaptureDistanceScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InfluenceRadius,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USphereReflectionCaptureComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USphereReflectionCaptureComponent::StaticClass,
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
	IMPLEMENT_CLASS(USphereReflectionCaptureComponent, 1786212122);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USphereReflectionCaptureComponent(Z_Construct_UClass_USphereReflectionCaptureComponent, &USphereReflectionCaptureComponent::StaticClass, TEXT("/Script/Engine"), TEXT("USphereReflectionCaptureComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USphereReflectionCaptureComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
