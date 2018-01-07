// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/LandscapeHeightfieldCollisionComponent.h"
#include "Classes/LandscapeProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeHeightfieldCollisionComponent() {}
// Cross Module References
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	UPackage* Z_Construct_UPackage__Script_Landscape();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeLayerInfoObject_NoRegister();
// End Cross Module References
	void ULandscapeHeightfieldCollisionComponent::StaticRegisterNativesULandscapeHeightfieldCollisionComponent()
	{
	}
	UClass* Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_NoRegister()
	{
		return ULandscapeHeightfieldCollisionComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Mobility Trigger" },
				{ "IncludePath", "LandscapeHeightfieldCollisionComponent.h" },
				{ "ModuleRelativePath", "Classes/LandscapeHeightfieldCollisionComponent.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CookedPhysicalMaterials_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeHeightfieldCollisionComponent.h" },
				{ "ToolTip", "This is a list of physical materials that is actually used by a cooked HeightField" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CookedPhysicalMaterials = { UE4CodeGen_Private::EPropertyClass::Array, "CookedPhysicalMaterials", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(ULandscapeHeightfieldCollisionComponent, CookedPhysicalMaterials), METADATA_PARAMS(NewProp_CookedPhysicalMaterials_MetaData, ARRAY_COUNT(NewProp_CookedPhysicalMaterials_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CookedPhysicalMaterials_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "CookedPhysicalMaterials", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenderComponent_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeHeightfieldCollisionComponent.h" },
				{ "ToolTip", "Reference to render component" },
			};
#endif
			static const UE4CodeGen_Private::FLazyObjectPropertyParams NewProp_RenderComponent = { UE4CodeGen_Private::EPropertyClass::LazyObject, "RenderComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000080008, 1, nullptr, STRUCT_OFFSET(ULandscapeHeightfieldCollisionComponent, RenderComponent), Z_Construct_UClass_ULandscapeComponent_NoRegister, METADATA_PARAMS(NewProp_RenderComponent_MetaData, ARRAY_COUNT(NewProp_RenderComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedLocalBox_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeHeightfieldCollisionComponent.h" },
				{ "ToolTip", "Cached local-space bounding box, created at heightmap update time" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CachedLocalBox = { UE4CodeGen_Private::EPropertyClass::Struct, "CachedLocalBox", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(ULandscapeHeightfieldCollisionComponent, CachedLocalBox), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(NewProp_CachedLocalBox_MetaData, ARRAY_COUNT(NewProp_CachedLocalBox_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeightfieldGuid_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeHeightfieldCollisionComponent.h" },
				{ "ToolTip", "Guid used to share PhysX heightfield objects in the editor" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_HeightfieldGuid = { UE4CodeGen_Private::EPropertyClass::Struct, "HeightfieldGuid", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(ULandscapeHeightfieldCollisionComponent, HeightfieldGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_HeightfieldGuid_MetaData, ARRAY_COUNT(NewProp_HeightfieldGuid_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionQuadFlags_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeHeightfieldCollisionComponent.h" },
				{ "ToolTip", "The flags for each collision quad. See ECollisionQuadFlags." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CollisionQuadFlags = { UE4CodeGen_Private::EPropertyClass::Array, "CollisionQuadFlags", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(ULandscapeHeightfieldCollisionComponent, CollisionQuadFlags), METADATA_PARAMS(NewProp_CollisionQuadFlags_MetaData, ARRAY_COUNT(NewProp_CollisionQuadFlags_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_CollisionQuadFlags_Inner = { UE4CodeGen_Private::EPropertyClass::Byte, "CollisionQuadFlags", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SimpleCollisionSizeQuads_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeHeightfieldCollisionComponent.h" },
				{ "ToolTip", "Size of component's \"simple collision\" in collision quads" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_SimpleCollisionSizeQuads = { UE4CodeGen_Private::EPropertyClass::Int, "SimpleCollisionSizeQuads", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(ULandscapeHeightfieldCollisionComponent, SimpleCollisionSizeQuads), METADATA_PARAMS(NewProp_SimpleCollisionSizeQuads_MetaData, ARRAY_COUNT(NewProp_SimpleCollisionSizeQuads_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionScale_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeHeightfieldCollisionComponent.h" },
				{ "ToolTip", "Collision scale: (ComponentSizeQuads) / (CollisionSizeQuads)" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CollisionScale = { UE4CodeGen_Private::EPropertyClass::Float, "CollisionScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(ULandscapeHeightfieldCollisionComponent, CollisionScale), METADATA_PARAMS(NewProp_CollisionScale_MetaData, ARRAY_COUNT(NewProp_CollisionScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionSizeQuads_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeHeightfieldCollisionComponent.h" },
				{ "ToolTip", "Size of component in collision quads" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_CollisionSizeQuads = { UE4CodeGen_Private::EPropertyClass::Int, "CollisionSizeQuads", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(ULandscapeHeightfieldCollisionComponent, CollisionSizeQuads), METADATA_PARAMS(NewProp_CollisionSizeQuads_MetaData, ARRAY_COUNT(NewProp_CollisionSizeQuads_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SectionBaseY_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeHeightfieldCollisionComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_SectionBaseY = { UE4CodeGen_Private::EPropertyClass::Int, "SectionBaseY", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(ULandscapeHeightfieldCollisionComponent, SectionBaseY), METADATA_PARAMS(NewProp_SectionBaseY_MetaData, ARRAY_COUNT(NewProp_SectionBaseY_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SectionBaseX_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeHeightfieldCollisionComponent.h" },
				{ "ToolTip", "Offset of component in landscape quads" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_SectionBaseX = { UE4CodeGen_Private::EPropertyClass::Int, "SectionBaseX", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(ULandscapeHeightfieldCollisionComponent, SectionBaseX), METADATA_PARAMS(NewProp_SectionBaseX_MetaData, ARRAY_COUNT(NewProp_SectionBaseX_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentLayerInfos_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeHeightfieldCollisionComponent.h" },
				{ "ToolTip", "List of layers painted on this component. Matches the WeightmapLayerAllocations array in the LandscapeComponent." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ComponentLayerInfos = { UE4CodeGen_Private::EPropertyClass::Array, "ComponentLayerInfos", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(ULandscapeHeightfieldCollisionComponent, ComponentLayerInfos), METADATA_PARAMS(NewProp_ComponentLayerInfos_MetaData, ARRAY_COUNT(NewProp_ComponentLayerInfos_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ComponentLayerInfos_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ComponentLayerInfos", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_ULandscapeLayerInfoObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CookedPhysicalMaterials,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CookedPhysicalMaterials_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RenderComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CachedLocalBox,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HeightfieldGuid,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CollisionQuadFlags,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CollisionQuadFlags_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SimpleCollisionSizeQuads,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CollisionScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CollisionSizeQuads,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SectionBaseY,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SectionBaseX,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ComponentLayerInfos,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ComponentLayerInfos_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ULandscapeHeightfieldCollisionComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ULandscapeHeightfieldCollisionComponent::StaticClass,
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
	IMPLEMENT_CLASS(ULandscapeHeightfieldCollisionComponent, 3977205842);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULandscapeHeightfieldCollisionComponent(Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent, &ULandscapeHeightfieldCollisionComponent::StaticClass, TEXT("/Script/Landscape"), TEXT("ULandscapeHeightfieldCollisionComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULandscapeHeightfieldCollisionComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
