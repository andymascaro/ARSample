// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/ProceduralFoliageComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProceduralFoliageComponent() {}
// Cross Module References
	FOLIAGE_API UClass* Z_Construct_UClass_UProceduralFoliageComponent_NoRegister();
	FOLIAGE_API UClass* Z_Construct_UClass_UProceduralFoliageComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Foliage();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_AVolume_NoRegister();
	FOLIAGE_API UClass* Z_Construct_UClass_UProceduralFoliageSpawner_NoRegister();
// End Cross Module References
	void UProceduralFoliageComponent::StaticRegisterNativesUProceduralFoliageComponent()
	{
	}
	UClass* Z_Construct_UClass_UProceduralFoliageComponent_NoRegister()
	{
		return UProceduralFoliageComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UProceduralFoliageComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UActorComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_Foliage,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "ProceduralFoliageComponent.h" },
				{ "ModuleRelativePath", "Public/ProceduralFoliageComponent.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProceduralGuid_MetaData[] = {
				{ "ModuleRelativePath", "Public/ProceduralFoliageComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProceduralGuid = { UE4CodeGen_Private::EPropertyClass::Struct, "ProceduralGuid", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UProceduralFoliageComponent, ProceduralGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_ProceduralGuid_MetaData, ARRAY_COUNT(NewProp_ProceduralGuid_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawningVolume_MetaData[] = {
				{ "ModuleRelativePath", "Public/ProceduralFoliageComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawningVolume = { UE4CodeGen_Private::EPropertyClass::Object, "SpawningVolume", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UProceduralFoliageComponent, SpawningVolume), Z_Construct_UClass_AVolume_NoRegister, METADATA_PARAMS(NewProp_SpawningVolume_MetaData, ARRAY_COUNT(NewProp_SpawningVolume_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowDebugTiles_MetaData[] = {
				{ "Category", "ProceduralFoliage" },
				{ "ModuleRelativePath", "Public/ProceduralFoliageComponent.h" },
				{ "ToolTip", "Whether to visualize the tiles used for the foliage spawner simulation" },
			};
#endif
			auto NewProp_bShowDebugTiles_SetBit = [](void* Obj){ ((UProceduralFoliageComponent*)Obj)->bShowDebugTiles = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowDebugTiles = { UE4CodeGen_Private::EPropertyClass::Bool, "bShowDebugTiles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UProceduralFoliageComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bShowDebugTiles_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bShowDebugTiles_MetaData, ARRAY_COUNT(NewProp_bShowDebugTiles_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowFoliage_MetaData[] = {
				{ "Category", "ProceduralFoliage" },
				{ "ModuleRelativePath", "Public/ProceduralFoliageComponent.h" },
				{ "ToolTip", "Whether to place foliage on other blocking foliage geometry" },
			};
#endif
			auto NewProp_bAllowFoliage_SetBit = [](void* Obj){ ((UProceduralFoliageComponent*)Obj)->bAllowFoliage = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowFoliage = { UE4CodeGen_Private::EPropertyClass::Bool, "bAllowFoliage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UProceduralFoliageComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAllowFoliage_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAllowFoliage_MetaData, ARRAY_COUNT(NewProp_bAllowFoliage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowTranslucent_MetaData[] = {
				{ "Category", "ProceduralFoliage" },
				{ "ModuleRelativePath", "Public/ProceduralFoliageComponent.h" },
				{ "ToolTip", "Whether to place foliage on translucent geometry" },
			};
#endif
			auto NewProp_bAllowTranslucent_SetBit = [](void* Obj){ ((UProceduralFoliageComponent*)Obj)->bAllowTranslucent = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowTranslucent = { UE4CodeGen_Private::EPropertyClass::Bool, "bAllowTranslucent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UProceduralFoliageComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAllowTranslucent_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAllowTranslucent_MetaData, ARRAY_COUNT(NewProp_bAllowTranslucent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowStaticMesh_MetaData[] = {
				{ "Category", "ProceduralFoliage" },
				{ "ModuleRelativePath", "Public/ProceduralFoliageComponent.h" },
				{ "ToolTip", "Whether to place foliage on StaticMesh" },
			};
#endif
			auto NewProp_bAllowStaticMesh_SetBit = [](void* Obj){ ((UProceduralFoliageComponent*)Obj)->bAllowStaticMesh = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowStaticMesh = { UE4CodeGen_Private::EPropertyClass::Bool, "bAllowStaticMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UProceduralFoliageComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAllowStaticMesh_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAllowStaticMesh_MetaData, ARRAY_COUNT(NewProp_bAllowStaticMesh_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowBSP_MetaData[] = {
				{ "Category", "ProceduralFoliage" },
				{ "ModuleRelativePath", "Public/ProceduralFoliageComponent.h" },
				{ "ToolTip", "Whether to place foliage on BSP" },
			};
#endif
			auto NewProp_bAllowBSP_SetBit = [](void* Obj){ ((UProceduralFoliageComponent*)Obj)->bAllowBSP = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowBSP = { UE4CodeGen_Private::EPropertyClass::Bool, "bAllowBSP", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UProceduralFoliageComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAllowBSP_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAllowBSP_MetaData, ARRAY_COUNT(NewProp_bAllowBSP_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowLandscape_MetaData[] = {
				{ "Category", "ProceduralFoliage" },
				{ "ModuleRelativePath", "Public/ProceduralFoliageComponent.h" },
				{ "ToolTip", "Whether to place foliage on landscape" },
			};
#endif
			auto NewProp_bAllowLandscape_SetBit = [](void* Obj){ ((UProceduralFoliageComponent*)Obj)->bAllowLandscape = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowLandscape = { UE4CodeGen_Private::EPropertyClass::Bool, "bAllowLandscape", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UProceduralFoliageComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAllowLandscape_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAllowLandscape_MetaData, ARRAY_COUNT(NewProp_bAllowLandscape_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileOverlap_MetaData[] = {
				{ "Category", "ProceduralFoliage" },
				{ "ModuleRelativePath", "Public/ProceduralFoliageComponent.h" },
				{ "ToolTip", "The amount of overlap between simulation tiles (in cm)." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TileOverlap = { UE4CodeGen_Private::EPropertyClass::Float, "TileOverlap", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UProceduralFoliageComponent, TileOverlap), METADATA_PARAMS(NewProp_TileOverlap_MetaData, ARRAY_COUNT(NewProp_TileOverlap_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FoliageSpawner_MetaData[] = {
				{ "Category", "ProceduralFoliage" },
				{ "ModuleRelativePath", "Public/ProceduralFoliageComponent.h" },
				{ "ToolTip", "The procedural foliage spawner used to generate foliage instances within this volume." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FoliageSpawner = { UE4CodeGen_Private::EPropertyClass::Object, "FoliageSpawner", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UProceduralFoliageComponent, FoliageSpawner), Z_Construct_UClass_UProceduralFoliageSpawner_NoRegister, METADATA_PARAMS(NewProp_FoliageSpawner_MetaData, ARRAY_COUNT(NewProp_FoliageSpawner_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ProceduralGuid,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpawningVolume,
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bShowDebugTiles,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAllowFoliage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAllowTranslucent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAllowStaticMesh,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAllowBSP,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAllowLandscape,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TileOverlap,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FoliageSpawner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UProceduralFoliageComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UProceduralFoliageComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
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
	IMPLEMENT_CLASS(UProceduralFoliageComponent, 1974301312);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UProceduralFoliageComponent(Z_Construct_UClass_UProceduralFoliageComponent, &UProceduralFoliageComponent::StaticClass, TEXT("/Script/Foliage"), TEXT("UProceduralFoliageComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProceduralFoliageComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
