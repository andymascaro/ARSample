// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/WorldComposition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldComposition() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UWorldComposition_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorldComposition();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_ULevelStreaming_NoRegister();
// End Cross Module References
	void UWorldComposition::StaticRegisterNativesUWorldComposition()
	{
	}
	UClass* Z_Construct_UClass_UWorldComposition_NoRegister()
	{
		return UWorldComposition::StaticClass();
	}
	UClass* Z_Construct_UClass_UWorldComposition()
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
				{ "IncludePath", "Engine/WorldComposition.h" },
				{ "ModuleRelativePath", "Classes/Engine/WorldComposition.h" },
				{ "ToolTip", "WorldComposition represents world structure:\n    - Holds list of all level packages participating in this world and theirs base parameters (bounding boxes, offset from origin)\n    - Holds list of streaming level objects to stream in and out based on distance from current view point\n - Handles properly levels repositioning during level loading and saving" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RebaseOriginDistance_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/WorldComposition.h" },
				{ "ToolTip", "Maximum distance to current view point where we should initiate origin rebasing" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RebaseOriginDistance = { UE4CodeGen_Private::EPropertyClass::Float, "RebaseOriginDistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004000, 1, nullptr, STRUCT_OFFSET(UWorldComposition, RebaseOriginDistance), METADATA_PARAMS(NewProp_RebaseOriginDistance_MetaData, ARRAY_COUNT(NewProp_RebaseOriginDistance_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLockTilesLocation_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/WorldComposition.h" },
				{ "ToolTip", "Whether all tiles locations are locked" },
			};
#endif
			auto NewProp_bLockTilesLocation_SetBit = [](void* Obj){ ((UWorldComposition*)Obj)->bLockTilesLocation = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLockTilesLocation = { UE4CodeGen_Private::EPropertyClass::Bool, "bLockTilesLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UWorldComposition), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bLockTilesLocation_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bLockTilesLocation_MetaData, ARRAY_COUNT(NewProp_bLockTilesLocation_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRebaseOriginIn3DSpace_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/WorldComposition.h" },
				{ "ToolTip", "Whether to rebase origin in 3D space, otherwise only on XY plane" },
			};
#endif
			auto NewProp_bRebaseOriginIn3DSpace_SetBit = [](void* Obj){ ((UWorldComposition*)Obj)->bRebaseOriginIn3DSpace = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRebaseOriginIn3DSpace = { UE4CodeGen_Private::EPropertyClass::Bool, "bRebaseOriginIn3DSpace", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UWorldComposition), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bRebaseOriginIn3DSpace_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bRebaseOriginIn3DSpace_MetaData, ARRAY_COUNT(NewProp_bRebaseOriginIn3DSpace_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLoadAllTilesDuringCinematic_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/WorldComposition.h" },
				{ "ToolTip", "Whether all distance dependent tiles should be loaded and visible during cinematic" },
			};
#endif
			auto NewProp_bLoadAllTilesDuringCinematic_SetBit = [](void* Obj){ ((UWorldComposition*)Obj)->bLoadAllTilesDuringCinematic = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLoadAllTilesDuringCinematic = { UE4CodeGen_Private::EPropertyClass::Bool, "bLoadAllTilesDuringCinematic", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UWorldComposition), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bLoadAllTilesDuringCinematic_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bLoadAllTilesDuringCinematic_MetaData, ARRAY_COUNT(NewProp_bLoadAllTilesDuringCinematic_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TilesStreamingTimeThreshold_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/WorldComposition.h" },
				{ "ToolTip", "Time threshold between tile streaming state changes" },
			};
#endif
			static const UE4CodeGen_Private::FDoublePropertyParams NewProp_TilesStreamingTimeThreshold = { UE4CodeGen_Private::EPropertyClass::Double, "TilesStreamingTimeThreshold", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004000, 1, nullptr, STRUCT_OFFSET(UWorldComposition, TilesStreamingTimeThreshold), METADATA_PARAMS(NewProp_TilesStreamingTimeThreshold_MetaData, ARRAY_COUNT(NewProp_TilesStreamingTimeThreshold_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TilesStreaming_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/WorldComposition.h" },
				{ "ToolTip", "Streaming level objects for each tile" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TilesStreaming = { UE4CodeGen_Private::EPropertyClass::Array, "TilesStreaming", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, STRUCT_OFFSET(UWorldComposition, TilesStreaming), METADATA_PARAMS(NewProp_TilesStreaming_MetaData, ARRAY_COUNT(NewProp_TilesStreaming_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TilesStreaming_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "TilesStreaming", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_ULevelStreaming_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RebaseOriginDistance,
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bLockTilesLocation,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bRebaseOriginIn3DSpace,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bLoadAllTilesDuringCinematic,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TilesStreamingTimeThreshold,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TilesStreaming,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TilesStreaming_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UWorldComposition>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UWorldComposition::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100084u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				"Engine",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWorldComposition, 3389212274);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWorldComposition(Z_Construct_UClass_UWorldComposition, &UWorldComposition::StaticClass, TEXT("/Script/Engine"), TEXT("UWorldComposition"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldComposition);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
