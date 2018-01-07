// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Components/BoxReflectionCaptureComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoxReflectionCaptureComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBoxReflectionCaptureComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxReflectionCaptureComponent();
	ENGINE_API UClass* Z_Construct_UClass_UReflectionCaptureComponent();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	void UBoxReflectionCaptureComponent::StaticRegisterNativesUBoxReflectionCaptureComponent()
	{
	}
	UClass* Z_Construct_UClass_UBoxReflectionCaptureComponent_NoRegister()
	{
		return UBoxReflectionCaptureComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UBoxReflectionCaptureComponent()
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
				{ "IncludePath", "Components/BoxReflectionCaptureComponent.h" },
				{ "ModuleRelativePath", "Classes/Components/BoxReflectionCaptureComponent.h" },
				{ "ToolTip", "-> will be exported to EngineDecalClasses.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewCaptureBox_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/Components/BoxReflectionCaptureComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviewCaptureBox = { UE4CodeGen_Private::EPropertyClass::Object, "PreviewCaptureBox", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080008, 1, nullptr, STRUCT_OFFSET(UBoxReflectionCaptureComponent, PreviewCaptureBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(NewProp_PreviewCaptureBox_MetaData, ARRAY_COUNT(NewProp_PreviewCaptureBox_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewInfluenceBox_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/Components/BoxReflectionCaptureComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviewInfluenceBox = { UE4CodeGen_Private::EPropertyClass::Object, "PreviewInfluenceBox", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080008, 1, nullptr, STRUCT_OFFSET(UBoxReflectionCaptureComponent, PreviewInfluenceBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(NewProp_PreviewInfluenceBox_MetaData, ARRAY_COUNT(NewProp_PreviewInfluenceBox_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxTransitionDistance_MetaData[] = {
				{ "Category", "ReflectionCapture" },
				{ "ModuleRelativePath", "Classes/Components/BoxReflectionCaptureComponent.h" },
				{ "ToolTip", "Adjust capture transition distance" },
				{ "UIMax", "1000" },
				{ "UIMin", "1" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BoxTransitionDistance = { UE4CodeGen_Private::EPropertyClass::Float, "BoxTransitionDistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBoxReflectionCaptureComponent, BoxTransitionDistance), METADATA_PARAMS(NewProp_BoxTransitionDistance_MetaData, ARRAY_COUNT(NewProp_BoxTransitionDistance_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PreviewCaptureBox,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PreviewInfluenceBox,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoxTransitionDistance,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UBoxReflectionCaptureComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UBoxReflectionCaptureComponent::StaticClass,
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
	IMPLEMENT_CLASS(UBoxReflectionCaptureComponent, 3484699992);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBoxReflectionCaptureComponent(Z_Construct_UClass_UBoxReflectionCaptureComponent, &UBoxReflectionCaptureComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UBoxReflectionCaptureComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBoxReflectionCaptureComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
