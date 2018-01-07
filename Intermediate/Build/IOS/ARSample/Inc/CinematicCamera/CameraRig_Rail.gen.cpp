// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/CameraRig_Rail.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraRig_Rail() {}
// Cross Module References
	CINEMATICCAMERA_API UClass* Z_Construct_UClass_ACameraRig_Rail_NoRegister();
	CINEMATICCAMERA_API UClass* Z_Construct_UClass_ACameraRig_Rail();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CinematicCamera();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
// End Cross Module References
	void ACameraRig_Rail::StaticRegisterNativesACameraRig_Rail()
	{
	}
	UClass* Z_Construct_UClass_ACameraRig_Rail_NoRegister()
	{
		return ACameraRig_Rail::StaticClass();
	}
	UClass* Z_Construct_UClass_ACameraRig_Rail()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_CinematicCamera,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "CameraRig_Rail.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/CameraRig_Rail.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
			};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewMesh_Mount_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/CameraRig_Rail.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviewMesh_Mount = { UE4CodeGen_Private::EPropertyClass::Object, "PreviewMesh_Mount", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000800080008, 1, nullptr, STRUCT_OFFSET(ACameraRig_Rail, PreviewMesh_Mount), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_PreviewMesh_Mount_MetaData, ARRAY_COUNT(NewProp_PreviewMesh_Mount_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewRailStaticMesh_MetaData[] = {
				{ "ModuleRelativePath", "Public/CameraRig_Rail.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviewRailStaticMesh = { UE4CodeGen_Private::EPropertyClass::Object, "PreviewRailStaticMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000800000000, 1, nullptr, STRUCT_OFFSET(ACameraRig_Rail, PreviewRailStaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(NewProp_PreviewRailStaticMesh_MetaData, ARRAY_COUNT(NewProp_PreviewRailStaticMesh_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewRailMeshSegments_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/CameraRig_Rail.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PreviewRailMeshSegments = { UE4CodeGen_Private::EPropertyClass::Array, "PreviewRailMeshSegments", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040008800000008, 1, nullptr, STRUCT_OFFSET(ACameraRig_Rail, PreviewRailMeshSegments), METADATA_PARAMS(NewProp_PreviewRailMeshSegments_MetaData, ARRAY_COUNT(NewProp_PreviewRailMeshSegments_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviewRailMeshSegments_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "PreviewRailMeshSegments", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000800080008, 1, nullptr, 0, Z_Construct_UClass_USplineMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewMesh_Rail_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/CameraRig_Rail.h" },
				{ "ToolTip", "Preview meshes for visualization" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviewMesh_Rail = { UE4CodeGen_Private::EPropertyClass::Object, "PreviewMesh_Rail", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000800080008, 1, nullptr, STRUCT_OFFSET(ACameraRig_Rail, PreviewMesh_Rail), Z_Construct_UClass_USplineMeshComponent_NoRegister, METADATA_PARAMS(NewProp_PreviewMesh_Rail_MetaData, ARRAY_COUNT(NewProp_PreviewMesh_Rail_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RailCameraMount_MetaData[] = {
				{ "Category", "Rail Components" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/CameraRig_Rail.h" },
				{ "ToolTip", "Component to define the attach point for cameras. Moves along the rail." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RailCameraMount = { UE4CodeGen_Private::EPropertyClass::Object, "RailCameraMount", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000090009, 1, nullptr, STRUCT_OFFSET(ACameraRig_Rail, RailCameraMount), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_RailCameraMount_MetaData, ARRAY_COUNT(NewProp_RailCameraMount_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RailSplineComponent_MetaData[] = {
				{ "Category", "Rail Components" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/CameraRig_Rail.h" },
				{ "ToolTip", "Spline component to define the rail path." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RailSplineComponent = { UE4CodeGen_Private::EPropertyClass::Object, "RailSplineComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000090009, 1, nullptr, STRUCT_OFFSET(ACameraRig_Rail, RailSplineComponent), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(NewProp_RailSplineComponent_MetaData, ARRAY_COUNT(NewProp_RailSplineComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransformComponent_MetaData[] = {
				{ "Category", "Rail Components" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/CameraRig_Rail.h" },
				{ "ToolTip", "Root component to give the whole actor a transform." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TransformComponent = { UE4CodeGen_Private::EPropertyClass::Object, "TransformComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000090009, 1, nullptr, STRUCT_OFFSET(ACameraRig_Rail, TransformComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_TransformComponent_MetaData, ARRAY_COUNT(NewProp_TransformComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentPositionOnRail_MetaData[] = {
				{ "Category", "Rail Controls" },
				{ "ClampMax", "1.0" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Public/CameraRig_Rail.h" },
				{ "ToolTip", "Defines current position of the mount point along the rail, in terms of normalized distance from the beginning of the rail." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentPositionOnRail = { UE4CodeGen_Private::EPropertyClass::Float, "CurrentPositionOnRail", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000200000005, 1, nullptr, STRUCT_OFFSET(ACameraRig_Rail, CurrentPositionOnRail), METADATA_PARAMS(NewProp_CurrentPositionOnRail_MetaData, ARRAY_COUNT(NewProp_CurrentPositionOnRail_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PreviewMesh_Mount,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PreviewRailStaticMesh,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PreviewRailMeshSegments,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PreviewRailMeshSegments_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PreviewMesh_Rail,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RailCameraMount,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RailSplineComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TransformComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurrentPositionOnRail,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ACameraRig_Rail>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ACameraRig_Rail::StaticClass,
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
	IMPLEMENT_CLASS(ACameraRig_Rail, 4261318412);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACameraRig_Rail(Z_Construct_UClass_ACameraRig_Rail, &ACameraRig_Rail::StaticClass, TEXT("/Script/CinematicCamera"), TEXT("ACameraRig_Rail"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACameraRig_Rail);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
