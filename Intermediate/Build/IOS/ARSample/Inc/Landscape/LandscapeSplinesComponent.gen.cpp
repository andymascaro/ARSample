// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/LandscapeSplinesComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeSplinesComponent() {}
// Cross Module References
	LANDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FForeignWorldSplineData();
	UPackage* Z_Construct_UPackage__Script_Landscape();
	LANDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FForeignSplineSegmentData();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeSplineSegment_NoRegister();
	LANDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FForeignControlPointData();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeSplineControlPoint_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineMeshComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	LANDSCAPE_API UClass* Z_Construct_UClass_UControlPointMeshComponent_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeSplinesComponent_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeSplinesComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
// End Cross Module References
class UScriptStruct* FForeignWorldSplineData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LANDSCAPE_API uint32 Get_Z_Construct_UScriptStruct_FForeignWorldSplineData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FForeignWorldSplineData, Z_Construct_UPackage__Script_Landscape(), TEXT("ForeignWorldSplineData"), sizeof(FForeignWorldSplineData), Get_Z_Construct_UScriptStruct_FForeignWorldSplineData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FForeignWorldSplineData(FForeignWorldSplineData::StaticStruct, TEXT("/Script/Landscape"), TEXT("ForeignWorldSplineData"), false, nullptr, nullptr);
static struct FScriptStruct_Landscape_StaticRegisterNativesFForeignWorldSplineData
{
	FScriptStruct_Landscape_StaticRegisterNativesFForeignWorldSplineData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ForeignWorldSplineData")),new UScriptStruct::TCppStructOps<FForeignWorldSplineData>);
	}
} ScriptStruct_Landscape_StaticRegisterNativesFForeignWorldSplineData;
	UScriptStruct* Z_Construct_UScriptStruct_FForeignWorldSplineData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FForeignWorldSplineData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Landscape();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ForeignWorldSplineData"), sizeof(FForeignWorldSplineData), Get_Z_Construct_UScriptStruct_FForeignWorldSplineData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/LandscapeSplinesComponent.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FForeignWorldSplineData>(); };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForeignSplineSegmentData_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeSplinesComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ForeignSplineSegmentData = { UE4CodeGen_Private::EPropertyClass::Array, "ForeignSplineSegmentData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008800000000, 1, nullptr, STRUCT_OFFSET(FForeignWorldSplineData, ForeignSplineSegmentData), METADATA_PARAMS(NewProp_ForeignSplineSegmentData_MetaData, ARRAY_COUNT(NewProp_ForeignSplineSegmentData_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ForeignSplineSegmentData_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ForeignSplineSegmentData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000008800000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FForeignSplineSegmentData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForeignSplineSegmentDataMap_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeSplinesComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FMapPropertyParams NewProp_ForeignSplineSegmentDataMap = { UE4CodeGen_Private::EPropertyClass::Map, "ForeignSplineSegmentDataMap", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008820000000, 1, nullptr, STRUCT_OFFSET(FForeignWorldSplineData, ForeignSplineSegmentDataMap_DEPRECATED), METADATA_PARAMS(NewProp_ForeignSplineSegmentDataMap_MetaData, ARRAY_COUNT(NewProp_ForeignSplineSegmentDataMap_MetaData)) };
			static const UE4CodeGen_Private::FLazyObjectPropertyParams NewProp_ForeignSplineSegmentDataMap_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::LazyObject, "ForeignSplineSegmentDataMap_Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0004008800000000, 1, nullptr, 0, Z_Construct_UClass_ULandscapeSplineSegment_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ForeignSplineSegmentDataMap_ValueProp = { UE4CodeGen_Private::EPropertyClass::Struct, "ForeignSplineSegmentDataMap", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000008820000000, 1, nullptr, 1, Z_Construct_UScriptStruct_FForeignSplineSegmentData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForeignControlPointData_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeSplinesComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ForeignControlPointData = { UE4CodeGen_Private::EPropertyClass::Array, "ForeignControlPointData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008800000000, 1, nullptr, STRUCT_OFFSET(FForeignWorldSplineData, ForeignControlPointData), METADATA_PARAMS(NewProp_ForeignControlPointData_MetaData, ARRAY_COUNT(NewProp_ForeignControlPointData_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ForeignControlPointData_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ForeignControlPointData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000008800000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FForeignControlPointData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForeignControlPointDataMap_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeSplinesComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FMapPropertyParams NewProp_ForeignControlPointDataMap = { UE4CodeGen_Private::EPropertyClass::Map, "ForeignControlPointDataMap", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008820000000, 1, nullptr, STRUCT_OFFSET(FForeignWorldSplineData, ForeignControlPointDataMap_DEPRECATED), METADATA_PARAMS(NewProp_ForeignControlPointDataMap_MetaData, ARRAY_COUNT(NewProp_ForeignControlPointDataMap_MetaData)) };
			static const UE4CodeGen_Private::FLazyObjectPropertyParams NewProp_ForeignControlPointDataMap_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::LazyObject, "ForeignControlPointDataMap_Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0004008800000000, 1, nullptr, 0, Z_Construct_UClass_ULandscapeSplineControlPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ForeignControlPointDataMap_ValueProp = { UE4CodeGen_Private::EPropertyClass::Struct, "ForeignControlPointDataMap", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000008820000000, 1, nullptr, 1, Z_Construct_UScriptStruct_FForeignControlPointData, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ForeignSplineSegmentData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ForeignSplineSegmentData_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ForeignSplineSegmentDataMap,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ForeignSplineSegmentDataMap_Key_KeyProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ForeignSplineSegmentDataMap_ValueProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ForeignControlPointData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ForeignControlPointData_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ForeignControlPointDataMap,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ForeignControlPointDataMap_Key_KeyProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ForeignControlPointDataMap_ValueProp,
			};
#endif // WITH_EDITORONLY_DATA
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"ForeignWorldSplineData",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000005),
				sizeof(FForeignWorldSplineData),
				alignof(FForeignWorldSplineData),
				IF_WITH_EDITORONLY_DATA(PropPointers, nullptr), IF_WITH_EDITORONLY_DATA(ARRAY_COUNT(PropPointers), 0),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FForeignWorldSplineData_CRC() { return 637097182U; }
class UScriptStruct* FForeignSplineSegmentData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LANDSCAPE_API uint32 Get_Z_Construct_UScriptStruct_FForeignSplineSegmentData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FForeignSplineSegmentData, Z_Construct_UPackage__Script_Landscape(), TEXT("ForeignSplineSegmentData"), sizeof(FForeignSplineSegmentData), Get_Z_Construct_UScriptStruct_FForeignSplineSegmentData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FForeignSplineSegmentData(FForeignSplineSegmentData::StaticStruct, TEXT("/Script/Landscape"), TEXT("ForeignSplineSegmentData"), false, nullptr, nullptr);
static struct FScriptStruct_Landscape_StaticRegisterNativesFForeignSplineSegmentData
{
	FScriptStruct_Landscape_StaticRegisterNativesFForeignSplineSegmentData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ForeignSplineSegmentData")),new UScriptStruct::TCppStructOps<FForeignSplineSegmentData>);
	}
} ScriptStruct_Landscape_StaticRegisterNativesFForeignSplineSegmentData;
	UScriptStruct* Z_Construct_UScriptStruct_FForeignSplineSegmentData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FForeignSplineSegmentData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Landscape();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ForeignSplineSegmentData"), sizeof(FForeignSplineSegmentData), Get_Z_Construct_UScriptStruct_FForeignSplineSegmentData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/LandscapeSplinesComponent.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FForeignSplineSegmentData>(); };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeSplinesComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FLazyObjectPropertyParams NewProp_Identifier = { UE4CodeGen_Private::EPropertyClass::LazyObject, "Identifier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000800000000, 1, nullptr, STRUCT_OFFSET(FForeignSplineSegmentData, Identifier), Z_Construct_UClass_ULandscapeSplineSegment_NoRegister, METADATA_PARAMS(NewProp_Identifier_MetaData, ARRAY_COUNT(NewProp_Identifier_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComponents_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/LandscapeSplinesComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MeshComponents = { UE4CodeGen_Private::EPropertyClass::Array, "MeshComponents", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008800000008, 1, nullptr, STRUCT_OFFSET(FForeignSplineSegmentData, MeshComponents), METADATA_PARAMS(NewProp_MeshComponents_MetaData, ARRAY_COUNT(NewProp_MeshComponents_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComponents_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "MeshComponents", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000800080008, 1, nullptr, 0, Z_Construct_UClass_USplineMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModificationKey_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeSplinesComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ModificationKey = { UE4CodeGen_Private::EPropertyClass::Struct, "ModificationKey", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(FForeignSplineSegmentData, ModificationKey), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_ModificationKey_MetaData, ARRAY_COUNT(NewProp_ModificationKey_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Identifier,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MeshComponents,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MeshComponents_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ModificationKey,
			};
#endif // WITH_EDITORONLY_DATA
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"ForeignSplineSegmentData",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000005),
				sizeof(FForeignSplineSegmentData),
				alignof(FForeignSplineSegmentData),
				IF_WITH_EDITORONLY_DATA(PropPointers, nullptr), IF_WITH_EDITORONLY_DATA(ARRAY_COUNT(PropPointers), 0),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FForeignSplineSegmentData_CRC() { return 1770281460U; }
class UScriptStruct* FForeignControlPointData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LANDSCAPE_API uint32 Get_Z_Construct_UScriptStruct_FForeignControlPointData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FForeignControlPointData, Z_Construct_UPackage__Script_Landscape(), TEXT("ForeignControlPointData"), sizeof(FForeignControlPointData), Get_Z_Construct_UScriptStruct_FForeignControlPointData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FForeignControlPointData(FForeignControlPointData::StaticStruct, TEXT("/Script/Landscape"), TEXT("ForeignControlPointData"), false, nullptr, nullptr);
static struct FScriptStruct_Landscape_StaticRegisterNativesFForeignControlPointData
{
	FScriptStruct_Landscape_StaticRegisterNativesFForeignControlPointData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ForeignControlPointData")),new UScriptStruct::TCppStructOps<FForeignControlPointData>);
	}
} ScriptStruct_Landscape_StaticRegisterNativesFForeignControlPointData;
	UScriptStruct* Z_Construct_UScriptStruct_FForeignControlPointData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FForeignControlPointData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Landscape();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ForeignControlPointData"), sizeof(FForeignControlPointData), Get_Z_Construct_UScriptStruct_FForeignControlPointData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/LandscapeSplinesComponent.h" },
				{ "ToolTip", "structs for ForeignWorldSplineDataMap\nthese are editor-only, but we don't have the concept of an editor-only USTRUCT" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FForeignControlPointData>(); };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeSplinesComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FLazyObjectPropertyParams NewProp_Identifier = { UE4CodeGen_Private::EPropertyClass::LazyObject, "Identifier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000800000000, 1, nullptr, STRUCT_OFFSET(FForeignControlPointData, Identifier), Z_Construct_UClass_ULandscapeSplineControlPoint_NoRegister, METADATA_PARAMS(NewProp_Identifier_MetaData, ARRAY_COUNT(NewProp_Identifier_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/LandscapeSplinesComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComponent = { UE4CodeGen_Private::EPropertyClass::Object, "MeshComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800080008, 1, nullptr, STRUCT_OFFSET(FForeignControlPointData, MeshComponent), Z_Construct_UClass_UControlPointMeshComponent_NoRegister, METADATA_PARAMS(NewProp_MeshComponent_MetaData, ARRAY_COUNT(NewProp_MeshComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModificationKey_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeSplinesComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ModificationKey = { UE4CodeGen_Private::EPropertyClass::Struct, "ModificationKey", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(FForeignControlPointData, ModificationKey), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_ModificationKey_MetaData, ARRAY_COUNT(NewProp_ModificationKey_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Identifier,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MeshComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ModificationKey,
			};
#endif // WITH_EDITORONLY_DATA
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"ForeignControlPointData",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000005),
				sizeof(FForeignControlPointData),
				alignof(FForeignControlPointData),
				IF_WITH_EDITORONLY_DATA(PropPointers, nullptr), IF_WITH_EDITORONLY_DATA(ARRAY_COUNT(PropPointers), 0),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FForeignControlPointData_CRC() { return 3389838102U; }
	void ULandscapeSplinesComponent::StaticRegisterNativesULandscapeSplinesComponent()
	{
	}
	UClass* Z_Construct_UClass_ULandscapeSplinesComponent_NoRegister()
	{
		return ULandscapeSplinesComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_ULandscapeSplinesComponent()
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
				{ "IncludePath", "LandscapeSplinesComponent.h" },
				{ "ModuleRelativePath", "Classes/LandscapeSplinesComponent.h" },
				{ "ToolTip", "ULandscapeSplinesComponent" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CookedForeignMeshComponents_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/LandscapeSplinesComponent.h" },
				{ "ToolTip", "References to components owned by landscape splines in other levels\nfor cooked build (uncooked keeps references via ForeignWorldSplineDataMap)" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CookedForeignMeshComponents = { UE4CodeGen_Private::EPropertyClass::Array, "CookedForeignMeshComponents", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020488000000008, 1, nullptr, STRUCT_OFFSET(ULandscapeSplinesComponent, CookedForeignMeshComponents), METADATA_PARAMS(NewProp_CookedForeignMeshComponents_MetaData, ARRAY_COUNT(NewProp_CookedForeignMeshComponents_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CookedForeignMeshComponents_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "CookedForeignMeshComponents", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000080008, 1, nullptr, 0, Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForeignWorldSplineDataMap_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeSplinesComponent.h" },
				{ "ToolTip", "Serialized" },
			};
#endif
			static const UE4CodeGen_Private::FMapPropertyParams NewProp_ForeignWorldSplineDataMap = { UE4CodeGen_Private::EPropertyClass::Map, "ForeignWorldSplineDataMap", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020488800000000, 1, nullptr, STRUCT_OFFSET(ULandscapeSplinesComponent, ForeignWorldSplineDataMap), METADATA_PARAMS(NewProp_ForeignWorldSplineDataMap_MetaData, ARRAY_COUNT(NewProp_ForeignWorldSplineDataMap_MetaData)) };
			static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_ForeignWorldSplineDataMap_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::SoftObject, "ForeignWorldSplineDataMap_Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0004008800000000, 1, nullptr, 0, Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ForeignWorldSplineDataMap_ValueProp = { UE4CodeGen_Private::EPropertyClass::Struct, "ForeignWorldSplineDataMap", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000008800000000, 1, nullptr, 1, Z_Construct_UScriptStruct_FForeignWorldSplineData, METADATA_PARAMS(nullptr, 0) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Segments_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeSplinesComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Segments = { UE4CodeGen_Private::EPropertyClass::Array, "Segments", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020480000000000, 1, nullptr, STRUCT_OFFSET(ULandscapeSplinesComponent, Segments), METADATA_PARAMS(NewProp_Segments_MetaData, ARRAY_COUNT(NewProp_Segments_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Segments_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Segments", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_ULandscapeSplineSegment_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControlPoints_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeSplinesComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ControlPoints = { UE4CodeGen_Private::EPropertyClass::Array, "ControlPoints", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020480000000000, 1, nullptr, STRUCT_OFFSET(ULandscapeSplinesComponent, ControlPoints), METADATA_PARAMS(NewProp_ControlPoints_MetaData, ARRAY_COUNT(NewProp_ControlPoints_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ControlPoints_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ControlPoints", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_ULandscapeSplineControlPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowSplineEditorMesh_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeSplinesComponent.h" },
				{ "ToolTip", "Whether we are in-editor and showing spline editor meshes" },
			};
#endif
			auto NewProp_bShowSplineEditorMesh_SetBit = [](void* Obj){ ((ULandscapeSplinesComponent*)Obj)->bShowSplineEditorMesh = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowSplineEditorMesh = { UE4CodeGen_Private::EPropertyClass::Bool, "bShowSplineEditorMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000c00002000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ULandscapeSplinesComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bShowSplineEditorMesh_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bShowSplineEditorMesh_MetaData, ARRAY_COUNT(NewProp_bShowSplineEditorMesh_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineEditorMesh_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeSplinesComponent.h" },
				{ "ToolTip", "Mesh used to draw splines that have no mesh" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SplineEditorMesh = { UE4CodeGen_Private::EPropertyClass::Object, "SplineEditorMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(ULandscapeSplinesComponent, SplineEditorMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(NewProp_SplineEditorMesh_MetaData, ARRAY_COUNT(NewProp_SplineEditorMesh_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControlPointSprite_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeSplinesComponent.h" },
				{ "ToolTip", "Sprite used to draw control points" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ControlPointSprite = { UE4CodeGen_Private::EPropertyClass::Object, "ControlPointSprite", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(ULandscapeSplinesComponent, ControlPointSprite), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(NewProp_ControlPointSprite_MetaData, ARRAY_COUNT(NewProp_ControlPointSprite_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineColor_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeSplinesComponent.h" },
				{ "ToolTip", "Color to use to draw the splines" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SplineColor = { UE4CodeGen_Private::EPropertyClass::Struct, "SplineColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(ULandscapeSplinesComponent, SplineColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(NewProp_SplineColor_MetaData, ARRAY_COUNT(NewProp_SplineColor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineResolution_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeSplinesComponent.h" },
				{ "ToolTip", "Resolution of the spline, in distance per point" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SplineResolution = { UE4CodeGen_Private::EPropertyClass::Float, "SplineResolution", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(ULandscapeSplinesComponent, SplineResolution), METADATA_PARAMS(NewProp_SplineResolution_MetaData, ARRAY_COUNT(NewProp_SplineResolution_MetaData)) };
#endif // WITH_EDITORONLY_DATA
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CookedForeignMeshComponents,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CookedForeignMeshComponents_Inner,
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ForeignWorldSplineDataMap,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ForeignWorldSplineDataMap_Key_KeyProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ForeignWorldSplineDataMap_ValueProp,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Segments,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Segments_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ControlPoints,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ControlPoints_Inner,
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bShowSplineEditorMesh,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SplineEditorMesh,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ControlPointSprite,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SplineColor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SplineResolution,
#endif // WITH_EDITORONLY_DATA
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ULandscapeSplinesComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ULandscapeSplinesComponent::StaticClass,
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
	IMPLEMENT_CLASS(ULandscapeSplinesComponent, 1151559868);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULandscapeSplinesComponent(Z_Construct_UClass_ULandscapeSplinesComponent, &ULandscapeSplinesComponent::StaticClass, TEXT("/Script/Landscape"), TEXT("ULandscapeSplinesComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULandscapeSplinesComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
