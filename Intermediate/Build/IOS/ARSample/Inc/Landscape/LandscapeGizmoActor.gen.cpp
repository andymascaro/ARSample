// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/LandscapeGizmoActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeGizmoActor() {}
// Cross Module References
	LANDSCAPE_API UClass* Z_Construct_UClass_ALandscapeGizmoActor_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_ALandscapeGizmoActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Landscape();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeInfo_NoRegister();
// End Cross Module References
	void ALandscapeGizmoActor::StaticRegisterNativesALandscapeGizmoActor()
	{
	}
	UClass* Z_Construct_UClass_ALandscapeGizmoActor_NoRegister()
	{
		return ALandscapeGizmoActor::StaticClass();
	}
	UClass* Z_Construct_UClass_ALandscapeGizmoActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "LandscapeGizmoActor.h" },
				{ "IsBlueprintBase", "false" },
				{ "ModuleRelativePath", "Classes/LandscapeGizmoActor.h" },
			};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpriteComponent_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/LandscapeGizmoActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpriteComponent = { UE4CodeGen_Private::EPropertyClass::Object, "SpriteComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000800080008, 1, nullptr, STRUCT_OFFSET(ALandscapeGizmoActor, SpriteComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(NewProp_SpriteComponent_MetaData, ARRAY_COUNT(NewProp_SpriteComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetLandscapeInfo_MetaData[] = {
				{ "Category", "Gizmo" },
				{ "ModuleRelativePath", "Classes/LandscapeGizmoActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetLandscapeInfo = { UE4CodeGen_Private::EPropertyClass::Object, "TargetLandscapeInfo", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800002001, 1, nullptr, STRUCT_OFFSET(ALandscapeGizmoActor, TargetLandscapeInfo), Z_Construct_UClass_ULandscapeInfo_NoRegister, METADATA_PARAMS(NewProp_TargetLandscapeInfo_MetaData, ARRAY_COUNT(NewProp_TargetLandscapeInfo_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RelativeScaleZ_MetaData[] = {
				{ "Category", "Gizmo" },
				{ "ModuleRelativePath", "Classes/LandscapeGizmoActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RelativeScaleZ = { UE4CodeGen_Private::EPropertyClass::Float, "RelativeScaleZ", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000001, 1, nullptr, STRUCT_OFFSET(ALandscapeGizmoActor, RelativeScaleZ), METADATA_PARAMS(NewProp_RelativeScaleZ_MetaData, ARRAY_COUNT(NewProp_RelativeScaleZ_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinRelativeZ_MetaData[] = {
				{ "Category", "Gizmo" },
				{ "ModuleRelativePath", "Classes/LandscapeGizmoActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinRelativeZ = { UE4CodeGen_Private::EPropertyClass::Float, "MinRelativeZ", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000001, 1, nullptr, STRUCT_OFFSET(ALandscapeGizmoActor, MinRelativeZ), METADATA_PARAMS(NewProp_MinRelativeZ_MetaData, ARRAY_COUNT(NewProp_MinRelativeZ_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarginZ_MetaData[] = {
				{ "Category", "Gizmo" },
				{ "ModuleRelativePath", "Classes/LandscapeGizmoActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MarginZ = { UE4CodeGen_Private::EPropertyClass::Float, "MarginZ", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000001, 1, nullptr, STRUCT_OFFSET(ALandscapeGizmoActor, MarginZ), METADATA_PARAMS(NewProp_MarginZ_MetaData, ARRAY_COUNT(NewProp_MarginZ_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LengthZ_MetaData[] = {
				{ "Category", "Gizmo" },
				{ "ModuleRelativePath", "Classes/LandscapeGizmoActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LengthZ = { UE4CodeGen_Private::EPropertyClass::Float, "LengthZ", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000001, 1, nullptr, STRUCT_OFFSET(ALandscapeGizmoActor, LengthZ), METADATA_PARAMS(NewProp_LengthZ_MetaData, ARRAY_COUNT(NewProp_LengthZ_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[] = {
				{ "Category", "Gizmo" },
				{ "ModuleRelativePath", "Classes/LandscapeGizmoActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Height = { UE4CodeGen_Private::EPropertyClass::Float, "Height", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000001, 1, nullptr, STRUCT_OFFSET(ALandscapeGizmoActor, Height), METADATA_PARAMS(NewProp_Height_MetaData, ARRAY_COUNT(NewProp_Height_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[] = {
				{ "Category", "Gizmo" },
				{ "ModuleRelativePath", "Classes/LandscapeGizmoActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Width = { UE4CodeGen_Private::EPropertyClass::Float, "Width", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000001, 1, nullptr, STRUCT_OFFSET(ALandscapeGizmoActor, Width), METADATA_PARAMS(NewProp_Width_MetaData, ARRAY_COUNT(NewProp_Width_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpriteComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetLandscapeInfo,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RelativeScaleZ,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MinRelativeZ,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MarginZ,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LengthZ,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Height,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Width,
			};
#endif // WITH_EDITORONLY_DATA
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ALandscapeGizmoActor>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ALandscapeGizmoActor::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880280u,
				nullptr, 0,
				IF_WITH_EDITORONLY_DATA(PropPointers, nullptr), IF_WITH_EDITORONLY_DATA(ARRAY_COUNT(PropPointers), 0),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALandscapeGizmoActor, 1064215002);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALandscapeGizmoActor(Z_Construct_UClass_ALandscapeGizmoActor, &ALandscapeGizmoActor::StaticClass, TEXT("/Script/Landscape"), TEXT("ALandscapeGizmoActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALandscapeGizmoActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
