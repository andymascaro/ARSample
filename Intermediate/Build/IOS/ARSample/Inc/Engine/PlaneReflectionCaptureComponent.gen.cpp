// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Components/PlaneReflectionCaptureComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlaneReflectionCaptureComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UPlaneReflectionCaptureComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPlaneReflectionCaptureComponent();
	ENGINE_API UClass* Z_Construct_UClass_UReflectionCaptureComponent();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDrawSphereComponent_NoRegister();
// End Cross Module References
	void UPlaneReflectionCaptureComponent::StaticRegisterNativesUPlaneReflectionCaptureComponent()
	{
	}
	UClass* Z_Construct_UClass_UPlaneReflectionCaptureComponent_NoRegister()
	{
		return UPlaneReflectionCaptureComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UPlaneReflectionCaptureComponent()
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
				{ "IncludePath", "Components/PlaneReflectionCaptureComponent.h" },
				{ "ModuleRelativePath", "Classes/Components/PlaneReflectionCaptureComponent.h" },
				{ "ToolTip", "-> will be exported to EngineDecalClasses.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewCaptureBox_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/Components/PlaneReflectionCaptureComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviewCaptureBox = { UE4CodeGen_Private::EPropertyClass::Object, "PreviewCaptureBox", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080008, 1, nullptr, STRUCT_OFFSET(UPlaneReflectionCaptureComponent, PreviewCaptureBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(NewProp_PreviewCaptureBox_MetaData, ARRAY_COUNT(NewProp_PreviewCaptureBox_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewInfluenceRadius_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/Components/PlaneReflectionCaptureComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviewInfluenceRadius = { UE4CodeGen_Private::EPropertyClass::Object, "PreviewInfluenceRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080008, 1, nullptr, STRUCT_OFFSET(UPlaneReflectionCaptureComponent, PreviewInfluenceRadius), Z_Construct_UClass_UDrawSphereComponent_NoRegister, METADATA_PARAMS(NewProp_PreviewInfluenceRadius_MetaData, ARRAY_COUNT(NewProp_PreviewInfluenceRadius_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InfluenceRadiusScale_MetaData[] = {
				{ "Category", "ReflectionCapture" },
				{ "ModuleRelativePath", "Classes/Components/PlaneReflectionCaptureComponent.h" },
				{ "ToolTip", "Radius of the area that can receive reflections from this capture." },
				{ "UIMax", "16384.0" },
				{ "UIMin", "8.0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InfluenceRadiusScale = { UE4CodeGen_Private::EPropertyClass::Float, "InfluenceRadiusScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UPlaneReflectionCaptureComponent, InfluenceRadiusScale), METADATA_PARAMS(NewProp_InfluenceRadiusScale_MetaData, ARRAY_COUNT(NewProp_InfluenceRadiusScale_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PreviewCaptureBox,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PreviewInfluenceRadius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InfluenceRadiusScale,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UPlaneReflectionCaptureComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UPlaneReflectionCaptureComponent::StaticClass,
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
	IMPLEMENT_CLASS(UPlaneReflectionCaptureComponent, 495048656);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlaneReflectionCaptureComponent(Z_Construct_UClass_UPlaneReflectionCaptureComponent, &UPlaneReflectionCaptureComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UPlaneReflectionCaptureComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlaneReflectionCaptureComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
