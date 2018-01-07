// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Slate/SlateVectorArtData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlateVectorArtData() {}
// Cross Module References
	UMG_API UScriptStruct* Z_Construct_UScriptStruct_FSlateMeshVertex();
	UPackage* Z_Construct_UPackage__Script_UMG();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	UMG_API UClass* Z_Construct_UClass_USlateVectorArtData_NoRegister();
	UMG_API UClass* Z_Construct_UClass_USlateVectorArtData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
// End Cross Module References
class UScriptStruct* FSlateMeshVertex::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UMG_API uint32 Get_Z_Construct_UScriptStruct_FSlateMeshVertex_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSlateMeshVertex, Z_Construct_UPackage__Script_UMG(), TEXT("SlateMeshVertex"), sizeof(FSlateMeshVertex), Get_Z_Construct_UScriptStruct_FSlateMeshVertex_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSlateMeshVertex(FSlateMeshVertex::StaticStruct, TEXT("/Script/UMG"), TEXT("SlateMeshVertex"), false, nullptr, nullptr);
static struct FScriptStruct_UMG_StaticRegisterNativesFSlateMeshVertex
{
	FScriptStruct_UMG_StaticRegisterNativesFSlateMeshVertex()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SlateMeshVertex")),new UScriptStruct::TCppStructOps<FSlateMeshVertex>);
	}
} ScriptStruct_UMG_StaticRegisterNativesFSlateMeshVertex;
	UScriptStruct* Z_Construct_UScriptStruct_FSlateMeshVertex()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSlateMeshVertex_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_UMG();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SlateMeshVertex"), sizeof(FSlateMeshVertex), Get_Z_Construct_UScriptStruct_FSlateMeshVertex_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Slate/SlateVectorArtData.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSlateMeshVertex>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UV5_MetaData[] = {
				{ "ModuleRelativePath", "Public/Slate/SlateVectorArtData.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_UV5 = { UE4CodeGen_Private::EPropertyClass::Struct, "UV5", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FSlateMeshVertex, UV5), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(NewProp_UV5_MetaData, ARRAY_COUNT(NewProp_UV5_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UV4_MetaData[] = {
				{ "ModuleRelativePath", "Public/Slate/SlateVectorArtData.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_UV4 = { UE4CodeGen_Private::EPropertyClass::Struct, "UV4", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FSlateMeshVertex, UV4), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(NewProp_UV4_MetaData, ARRAY_COUNT(NewProp_UV4_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UV3_MetaData[] = {
				{ "ModuleRelativePath", "Public/Slate/SlateVectorArtData.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_UV3 = { UE4CodeGen_Private::EPropertyClass::Struct, "UV3", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FSlateMeshVertex, UV3), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(NewProp_UV3_MetaData, ARRAY_COUNT(NewProp_UV3_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UV2_MetaData[] = {
				{ "ModuleRelativePath", "Public/Slate/SlateVectorArtData.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_UV2 = { UE4CodeGen_Private::EPropertyClass::Struct, "UV2", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FSlateMeshVertex, UV2), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(NewProp_UV2_MetaData, ARRAY_COUNT(NewProp_UV2_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UV1_MetaData[] = {
				{ "ModuleRelativePath", "Public/Slate/SlateVectorArtData.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_UV1 = { UE4CodeGen_Private::EPropertyClass::Struct, "UV1", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FSlateMeshVertex, UV1), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(NewProp_UV1_MetaData, ARRAY_COUNT(NewProp_UV1_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UV0_MetaData[] = {
				{ "ModuleRelativePath", "Public/Slate/SlateVectorArtData.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_UV0 = { UE4CodeGen_Private::EPropertyClass::Struct, "UV0", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FSlateMeshVertex, UV0), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(NewProp_UV0_MetaData, ARRAY_COUNT(NewProp_UV0_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
				{ "ModuleRelativePath", "Public/Slate/SlateVectorArtData.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color = { UE4CodeGen_Private::EPropertyClass::Struct, "Color", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FSlateMeshVertex, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(NewProp_Color_MetaData, ARRAY_COUNT(NewProp_Color_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
				{ "ModuleRelativePath", "Public/Slate/SlateVectorArtData.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position = { UE4CodeGen_Private::EPropertyClass::Struct, "Position", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FSlateMeshVertex, Position), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(NewProp_Position_MetaData, ARRAY_COUNT(NewProp_Position_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UV5,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UV4,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UV3,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UV2,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UV1,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UV0,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Color,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Position,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_UMG,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"SlateMeshVertex",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FSlateMeshVertex),
				alignof(FSlateMeshVertex),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSlateMeshVertex_CRC() { return 3808441299U; }
	void USlateVectorArtData::StaticRegisterNativesUSlateVectorArtData()
	{
	}
	UClass* Z_Construct_UClass_USlateVectorArtData_NoRegister()
	{
		return USlateVectorArtData::StaticClass();
	}
	UClass* Z_Construct_UClass_USlateVectorArtData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_UMG,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Slate/SlateVectorArtData.h" },
				{ "ModuleRelativePath", "Public/Slate/SlateVectorArtData.h" },
				{ "ToolTip", "Turn static mesh data into Slate's simple vector art format." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtentMax_MetaData[] = {
				{ "ModuleRelativePath", "Public/Slate/SlateVectorArtData.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExtentMax = { UE4CodeGen_Private::EPropertyClass::Struct, "ExtentMax", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(USlateVectorArtData, ExtentMax), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(NewProp_ExtentMax_MetaData, ARRAY_COUNT(NewProp_ExtentMax_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtentMin_MetaData[] = {
				{ "ModuleRelativePath", "Public/Slate/SlateVectorArtData.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExtentMin = { UE4CodeGen_Private::EPropertyClass::Struct, "ExtentMin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(USlateVectorArtData, ExtentMin), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(NewProp_ExtentMin_MetaData, ARRAY_COUNT(NewProp_ExtentMin_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[] = {
				{ "ModuleRelativePath", "Public/Slate/SlateVectorArtData.h" },
				{ "ToolTip", "@see GetMaterial()" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material = { UE4CodeGen_Private::EPropertyClass::Object, "Material", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(USlateVectorArtData, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(NewProp_Material_MetaData, ARRAY_COUNT(NewProp_Material_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IndexData_MetaData[] = {
				{ "ModuleRelativePath", "Public/Slate/SlateVectorArtData.h" },
				{ "ToolTip", "@see GetIndexData()" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_IndexData = { UE4CodeGen_Private::EPropertyClass::Array, "IndexData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(USlateVectorArtData, IndexData), METADATA_PARAMS(NewProp_IndexData_MetaData, ARRAY_COUNT(NewProp_IndexData_MetaData)) };
			static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_IndexData_Inner = { UE4CodeGen_Private::EPropertyClass::UInt32, "IndexData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexData_MetaData[] = {
				{ "ModuleRelativePath", "Public/Slate/SlateVectorArtData.h" },
				{ "ToolTip", "@see GetVertexData()" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VertexData = { UE4CodeGen_Private::EPropertyClass::Array, "VertexData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(USlateVectorArtData, VertexData), METADATA_PARAMS(NewProp_VertexData_MetaData, ARRAY_COUNT(NewProp_VertexData_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexData_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "VertexData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FSlateMeshVertex, METADATA_PARAMS(nullptr, 0) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceMaterial_MetaData[] = {
				{ "ModuleRelativePath", "Public/Slate/SlateVectorArtData.h" },
				{ "ToolTip", "The material which we are using, or the material from with the MIC was constructed." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SourceMaterial = { UE4CodeGen_Private::EPropertyClass::Object, "SourceMaterial", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000800002000, 1, nullptr, STRUCT_OFFSET(USlateVectorArtData, SourceMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(NewProp_SourceMaterial_MetaData, ARRAY_COUNT(NewProp_SourceMaterial_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshAsset_MetaData[] = {
				{ "Category", "Vector Art" },
				{ "ModuleRelativePath", "Public/Slate/SlateVectorArtData.h" },
				{ "ToolTip", "The mesh data asset from which the vector art is sourced" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshAsset = { UE4CodeGen_Private::EPropertyClass::Object, "MeshAsset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000800000001, 1, nullptr, STRUCT_OFFSET(USlateVectorArtData, MeshAsset), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(NewProp_MeshAsset_MetaData, ARRAY_COUNT(NewProp_MeshAsset_MetaData)) };
#endif // WITH_EDITORONLY_DATA
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ExtentMax,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ExtentMin,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Material,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IndexData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IndexData_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VertexData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VertexData_Inner,
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SourceMaterial,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MeshAsset,
#endif // WITH_EDITORONLY_DATA
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USlateVectorArtData>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USlateVectorArtData::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
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
	IMPLEMENT_CLASS(USlateVectorArtData, 2914255349);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USlateVectorArtData(Z_Construct_UClass_USlateVectorArtData, &USlateVectorArtData::StaticClass, TEXT("/Script/UMG"), TEXT("USlateVectorArtData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USlateVectorArtData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
