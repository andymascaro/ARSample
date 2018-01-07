// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/LandscapeSplineControlPoint.h"
#include "Classes/LandscapeSplinesComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeSplineControlPoint() {}
// Cross Module References
	LANDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FLandscapeSplineConnection();
	UPackage* Z_Construct_UPackage__Script_Landscape();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeSplineSegment_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeSplineControlPoint_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeSplineControlPoint();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_UControlPointMeshComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	LANDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
class UScriptStruct* FLandscapeSplineConnection::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LANDSCAPE_API uint32 Get_Z_Construct_UScriptStruct_FLandscapeSplineConnection_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLandscapeSplineConnection, Z_Construct_UPackage__Script_Landscape(), TEXT("LandscapeSplineConnection"), sizeof(FLandscapeSplineConnection), Get_Z_Construct_UScriptStruct_FLandscapeSplineConnection_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLandscapeSplineConnection(FLandscapeSplineConnection::StaticStruct, TEXT("/Script/Landscape"), TEXT("LandscapeSplineConnection"), false, nullptr, nullptr);
static struct FScriptStruct_Landscape_StaticRegisterNativesFLandscapeSplineConnection
{
	FScriptStruct_Landscape_StaticRegisterNativesFLandscapeSplineConnection()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LandscapeSplineConnection")),new UScriptStruct::TCppStructOps<FLandscapeSplineConnection>);
	}
} ScriptStruct_Landscape_StaticRegisterNativesFLandscapeSplineConnection;
	UScriptStruct* Z_Construct_UScriptStruct_FLandscapeSplineConnection()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLandscapeSplineConnection_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Landscape();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LandscapeSplineConnection"), sizeof(FLandscapeSplineConnection), Get_Z_Construct_UScriptStruct_FLandscapeSplineConnection_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/LandscapeSplineControlPoint.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLandscapeSplineConnection>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_End_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeSplineControlPoint.h" },
				{ "ToolTip", "Which end of the segment is connected to this control point" },
			};
#endif
			auto NewProp_End_SetBit = [](void* Obj){ ((FLandscapeSplineConnection*)Obj)->End = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_End = { UE4CodeGen_Private::EPropertyClass::Bool, "End", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FLandscapeSplineConnection), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_End_SetBit)>::SetBit, METADATA_PARAMS(NewProp_End_MetaData, ARRAY_COUNT(NewProp_End_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Segment_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeSplineControlPoint.h" },
				{ "ToolTip", "Segment connected to this control point" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Segment = { UE4CodeGen_Private::EPropertyClass::Object, "Segment", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FLandscapeSplineConnection, Segment), Z_Construct_UClass_ULandscapeSplineSegment_NoRegister, METADATA_PARAMS(NewProp_Segment_MetaData, ARRAY_COUNT(NewProp_Segment_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_End,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Segment,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"LandscapeSplineConnection",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FLandscapeSplineConnection),
				alignof(FLandscapeSplineConnection),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLandscapeSplineConnection_CRC() { return 2944988506U; }
	void ULandscapeSplineControlPoint::StaticRegisterNativesULandscapeSplineControlPoint()
	{
	}
	UClass* Z_Construct_UClass_ULandscapeSplineControlPoint_NoRegister()
	{
		return ULandscapeSplineControlPoint::StaticClass();
	}
	UClass* Z_Construct_UClass_ULandscapeSplineControlPoint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "AutoExpandCategories", "LandscapeSplineControlPoint" },
				{ "IncludePath", "LandscapeSplineControlPoint.h" },
				{ "ModuleRelativePath", "Classes/LandscapeSplineControlPoint.h" },
			};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModificationKey_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeSplineControlPoint.h" },
				{ "ToolTip", "Key for tracking whether this segment has been modified relative to the mesh component stored in another streaming level" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ModificationKey = { UE4CodeGen_Private::EPropertyClass::Struct, "ModificationKey", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020c80800000000, 1, nullptr, STRUCT_OFFSET(ULandscapeSplineControlPoint, ModificationKey), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_ModificationKey_MetaData, ARRAY_COUNT(NewProp_ModificationKey_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForeignWorld_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeSplineControlPoint.h" },
				{ "ToolTip", "World reference for if mesh component is stored in another streaming level" },
			};
#endif
			static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_ForeignWorld = { UE4CodeGen_Private::EPropertyClass::SoftObject, "ForeignWorld", RF_Public|RF_Transient|RF_MarkAsNative, 0x0024c80800000000, 1, nullptr, STRUCT_OFFSET(ULandscapeSplineControlPoint, ForeignWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(NewProp_ForeignWorld_MetaData, ARRAY_COUNT(NewProp_ForeignWorld_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalMeshComponent_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/LandscapeSplineControlPoint.h" },
				{ "ToolTip", "Control point mesh" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LocalMeshComponent = { UE4CodeGen_Private::EPropertyClass::Object, "LocalMeshComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020480000080008, 1, nullptr, STRUCT_OFFSET(ULandscapeSplineControlPoint, LocalMeshComponent), Z_Construct_UClass_UControlPointMeshComponent_NoRegister, METADATA_PARAMS(NewProp_LocalMeshComponent_MetaData, ARRAY_COUNT(NewProp_LocalMeshComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bounds_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeSplineControlPoint.h" },
				{ "ToolTip", "Bounds of points" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bounds = { UE4CodeGen_Private::EPropertyClass::Struct, "Bounds", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(ULandscapeSplineControlPoint, Bounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(NewProp_Bounds_MetaData, ARRAY_COUNT(NewProp_Bounds_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeSplineControlPoint.h" },
				{ "ToolTip", "Spline points" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Points = { UE4CodeGen_Private::EPropertyClass::Array, "Points", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(ULandscapeSplineControlPoint, Points), METADATA_PARAMS(NewProp_Points_MetaData, ARRAY_COUNT(NewProp_Points_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Points_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Points", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConnectedSegments_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeSplineControlPoint.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ConnectedSegments = { UE4CodeGen_Private::EPropertyClass::Array, "ConnectedSegments", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010400000000000, 1, nullptr, STRUCT_OFFSET(ULandscapeSplineControlPoint, ConnectedSegments), METADATA_PARAMS(NewProp_ConnectedSegments_MetaData, ARRAY_COUNT(NewProp_ConnectedSegments_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConnectedSegments_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ConnectedSegments", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FLandscapeSplineConnection, METADATA_PARAMS(nullptr, 0) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNavDirty_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeSplineControlPoint.h" },
			};
#endif
			auto NewProp_bNavDirty_SetBit = [](void* Obj){ ((ULandscapeSplineControlPoint*)Obj)->bNavDirty = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNavDirty = { UE4CodeGen_Private::EPropertyClass::Bool, "bNavDirty", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080800002000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ULandscapeSplineControlPoint), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bNavDirty_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bNavDirty_MetaData, ARRAY_COUNT(NewProp_bNavDirty_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSelected_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeSplineControlPoint.h" },
			};
#endif
			auto NewProp_bSelected_SetBit = [](void* Obj){ ((ULandscapeSplineControlPoint*)Obj)->bSelected = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSelected = { UE4CodeGen_Private::EPropertyClass::Bool, "bSelected", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080800002000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ULandscapeSplineControlPoint), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSelected_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSelected_MetaData, ARRAY_COUNT(NewProp_bSelected_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPlaceSplineMeshesInStreamingLevels_MetaData[] = {
				{ "Category", "Mesh" },
				{ "ModuleRelativePath", "Classes/LandscapeSplineControlPoint.h" },
				{ "ToolTip", "Whether control point mesh should be placed in landscape proxy streaming level (true) or the spline's level (false)" },
			};
#endif
			auto NewProp_bPlaceSplineMeshesInStreamingLevels_SetBit = [](void* Obj){ ((ULandscapeSplineControlPoint*)Obj)->bPlaceSplineMeshesInStreamingLevels = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPlaceSplineMeshesInStreamingLevels = { UE4CodeGen_Private::EPropertyClass::Bool, "bPlaceSplineMeshesInStreamingLevels", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040800000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ULandscapeSplineControlPoint), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bPlaceSplineMeshesInStreamingLevels_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bPlaceSplineMeshesInStreamingLevels_MetaData, ARRAY_COUNT(NewProp_bPlaceSplineMeshesInStreamingLevels_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TranslucencySortPriority_MetaData[] = {
				{ "Category", "Mesh" },
				{ "ModuleRelativePath", "Classes/LandscapeSplineControlPoint.h" },
				{ "ToolTip", "Translucent objects with a lower sort priority draw behind objects with a higher priority.\nTranslucent objects with the same priority are rendered from back-to-front based on their bounds origin.\n\nIgnored if the object is not translucent.  The default priority is zero.\nWarning: This should never be set to a non-default value unless you know what you are doing, as it will prevent the renderer from sorting correctly." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_TranslucencySortPriority = { UE4CodeGen_Private::EPropertyClass::Int, "TranslucencySortPriority", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040800000001, 1, nullptr, STRUCT_OFFSET(ULandscapeSplineControlPoint, TranslucencySortPriority), METADATA_PARAMS(NewProp_TranslucencySortPriority_MetaData, ARRAY_COUNT(NewProp_TranslucencySortPriority_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LDMaxDrawDistance_MetaData[] = {
				{ "Category", "Mesh" },
				{ "DisplayName", "Max Draw Distance" },
				{ "ModuleRelativePath", "Classes/LandscapeSplineControlPoint.h" },
				{ "ToolTip", "Max draw distance for the mesh used on this control point" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LDMaxDrawDistance = { UE4CodeGen_Private::EPropertyClass::Float, "LDMaxDrawDistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040800000001, 1, nullptr, STRUCT_OFFSET(ULandscapeSplineControlPoint, LDMaxDrawDistance), METADATA_PARAMS(NewProp_LDMaxDrawDistance_MetaData, ARRAY_COUNT(NewProp_LDMaxDrawDistance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCastShadow_MetaData[] = {
				{ "Category", "Mesh" },
				{ "ModuleRelativePath", "Classes/LandscapeSplineControlPoint.h" },
				{ "ToolTip", "Whether the Control Point Mesh should cast a shadow." },
			};
#endif
			auto NewProp_bCastShadow_SetBit = [](void* Obj){ ((ULandscapeSplineControlPoint*)Obj)->bCastShadow = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCastShadow = { UE4CodeGen_Private::EPropertyClass::Bool, "bCastShadow", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ULandscapeSplineControlPoint), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCastShadow_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCastShadow_MetaData, ARRAY_COUNT(NewProp_bCastShadow_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableCollision_MetaData[] = {
				{ "Category", "Mesh" },
				{ "ModuleRelativePath", "Classes/LandscapeSplineControlPoint.h" },
				{ "ToolTip", "Whether to enable collision for the Control Point Mesh." },
			};
#endif
			auto NewProp_bEnableCollision_SetBit = [](void* Obj){ ((ULandscapeSplineControlPoint*)Obj)->bEnableCollision = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableCollision = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableCollision", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ULandscapeSplineControlPoint), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnableCollision_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnableCollision_MetaData, ARRAY_COUNT(NewProp_bEnableCollision_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshScale_MetaData[] = {
				{ "Category", "Mesh" },
				{ "ModuleRelativePath", "Classes/LandscapeSplineControlPoint.h" },
				{ "ToolTip", "Scale of the control point mesh" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_MeshScale = { UE4CodeGen_Private::EPropertyClass::Struct, "MeshScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000001, 1, nullptr, STRUCT_OFFSET(ULandscapeSplineControlPoint, MeshScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_MeshScale_MetaData, ARRAY_COUNT(NewProp_MeshScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialOverrides_MetaData[] = {
				{ "Category", "Mesh" },
				{ "ModuleRelativePath", "Classes/LandscapeSplineControlPoint.h" },
				{ "ToolTip", "Overrides mesh's materials" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MaterialOverrides = { UE4CodeGen_Private::EPropertyClass::Array, "MaterialOverrides", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000001, 1, nullptr, STRUCT_OFFSET(ULandscapeSplineControlPoint, MaterialOverrides), METADATA_PARAMS(NewProp_MaterialOverrides_MetaData, ARRAY_COUNT(NewProp_MaterialOverrides_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaterialOverrides_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "MaterialOverrides", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000800000000, 1, nullptr, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
				{ "Category", "Mesh" },
				{ "ModuleRelativePath", "Classes/LandscapeSplineControlPoint.h" },
				{ "ToolTip", "Mesh to use on the control point" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh = { UE4CodeGen_Private::EPropertyClass::Object, "Mesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000001, 1, nullptr, STRUCT_OFFSET(ULandscapeSplineControlPoint, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(NewProp_Mesh_MetaData, ARRAY_COUNT(NewProp_Mesh_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLowerTerrain_MetaData[] = {
				{ "Category", "LandscapeDeformation" },
				{ "ModuleRelativePath", "Classes/LandscapeSplineControlPoint.h" },
				{ "ToolTip", "If the spline is below the terrain, whether to lower the terrain down to the level of the spline when applying it to the landscape." },
			};
#endif
			auto NewProp_bLowerTerrain_SetBit = [](void* Obj){ ((ULandscapeSplineControlPoint*)Obj)->bLowerTerrain = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLowerTerrain = { UE4CodeGen_Private::EPropertyClass::Bool, "bLowerTerrain", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ULandscapeSplineControlPoint), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bLowerTerrain_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bLowerTerrain_MetaData, ARRAY_COUNT(NewProp_bLowerTerrain_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRaiseTerrain_MetaData[] = {
				{ "Category", "LandscapeDeformation" },
				{ "ModuleRelativePath", "Classes/LandscapeSplineControlPoint.h" },
				{ "ToolTip", "If the spline is above the terrain, whether to raise the terrain up to the level of the spline when applying it to the landscape." },
			};
#endif
			auto NewProp_bRaiseTerrain_SetBit = [](void* Obj){ ((ULandscapeSplineControlPoint*)Obj)->bRaiseTerrain = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRaiseTerrain = { UE4CodeGen_Private::EPropertyClass::Bool, "bRaiseTerrain", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ULandscapeSplineControlPoint), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bRaiseTerrain_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bRaiseTerrain_MetaData, ARRAY_COUNT(NewProp_bRaiseTerrain_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LayerName_MetaData[] = {
				{ "Category", "LandscapeDeformation" },
				{ "ModuleRelativePath", "Classes/LandscapeSplineControlPoint.h" },
				{ "ToolTip", "Name of blend layer to paint when applying spline to landscape\nIf \"none\", no layer is painted" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_LayerName = { UE4CodeGen_Private::EPropertyClass::Name, "LayerName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000001, 1, nullptr, STRUCT_OFFSET(ULandscapeSplineControlPoint, LayerName), METADATA_PARAMS(NewProp_LayerName_MetaData, ARRAY_COUNT(NewProp_LayerName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SegmentMeshOffset_MetaData[] = {
				{ "Category", "LandscapeSpline" },
				{ "DisplayName", "Mesh Vertical Offset" },
				{ "ModuleRelativePath", "Classes/LandscapeSplineControlPoint.h" },
				{ "ToolTip", "Vertical offset of the spline segment mesh. Useful for a river's surface, among other things." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SegmentMeshOffset = { UE4CodeGen_Private::EPropertyClass::Float, "SegmentMeshOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000001, 1, nullptr, STRUCT_OFFSET(ULandscapeSplineControlPoint, SegmentMeshOffset), METADATA_PARAMS(NewProp_SegmentMeshOffset_MetaData, ARRAY_COUNT(NewProp_SegmentMeshOffset_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndFalloff_MetaData[] = {
				{ "Category", "LandscapeSpline" },
				{ "ModuleRelativePath", "Classes/LandscapeSplineControlPoint.h" },
				{ "ToolTip", "Falloff at the start/end of the spline (if this point is a start or end point, otherwise ignored)." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EndFalloff = { UE4CodeGen_Private::EPropertyClass::Float, "EndFalloff", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ULandscapeSplineControlPoint, EndFalloff), METADATA_PARAMS(NewProp_EndFalloff_MetaData, ARRAY_COUNT(NewProp_EndFalloff_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SideFalloff_MetaData[] = {
				{ "Category", "LandscapeSpline" },
				{ "ModuleRelativePath", "Classes/LandscapeSplineControlPoint.h" },
				{ "ToolTip", "Falloff at the sides of the spline at this point." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SideFalloff = { UE4CodeGen_Private::EPropertyClass::Float, "SideFalloff", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ULandscapeSplineControlPoint, SideFalloff), METADATA_PARAMS(NewProp_SideFalloff_MetaData, ARRAY_COUNT(NewProp_SideFalloff_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[] = {
				{ "Category", "LandscapeSpline" },
				{ "ModuleRelativePath", "Classes/LandscapeSplineControlPoint.h" },
				{ "ToolTip", "Width of the spline at this point." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Width = { UE4CodeGen_Private::EPropertyClass::Float, "Width", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ULandscapeSplineControlPoint, Width), METADATA_PARAMS(NewProp_Width_MetaData, ARRAY_COUNT(NewProp_Width_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
				{ "Category", "LandscapeSpline" },
				{ "ModuleRelativePath", "Classes/LandscapeSplineControlPoint.h" },
				{ "ToolTip", "Rotation of tangent vector at this point (in landscape-space)" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation = { UE4CodeGen_Private::EPropertyClass::Struct, "Rotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ULandscapeSplineControlPoint, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(NewProp_Rotation_MetaData, ARRAY_COUNT(NewProp_Rotation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
				{ "Category", "LandscapeSpline" },
				{ "ModuleRelativePath", "Classes/LandscapeSplineControlPoint.h" },
				{ "ToolTip", "Location in Landscape-space" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location = { UE4CodeGen_Private::EPropertyClass::Struct, "Location", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ULandscapeSplineControlPoint, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_Location_MetaData, ARRAY_COUNT(NewProp_Location_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ModificationKey,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ForeignWorld,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LocalMeshComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Bounds,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Points,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Points_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConnectedSegments,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConnectedSegments_Inner,
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bNavDirty,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSelected,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bPlaceSplineMeshesInStreamingLevels,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TranslucencySortPriority,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LDMaxDrawDistance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCastShadow,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnableCollision,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MeshScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaterialOverrides,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaterialOverrides_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Mesh,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bLowerTerrain,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bRaiseTerrain,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LayerName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SegmentMeshOffset,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EndFalloff,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SideFalloff,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Width,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Rotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Location,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ULandscapeSplineControlPoint>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ULandscapeSplineControlPoint::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880080u,
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
	IMPLEMENT_CLASS(ULandscapeSplineControlPoint, 1908735047);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULandscapeSplineControlPoint(Z_Construct_UClass_ULandscapeSplineControlPoint, &ULandscapeSplineControlPoint::StaticClass, TEXT("/Script/Landscape"), TEXT("ULandscapeSplineControlPoint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULandscapeSplineControlPoint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
