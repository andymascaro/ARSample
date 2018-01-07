// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/BrushBuilder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBrushBuilder() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBuilderPoly();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UBrushBuilder_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBrushBuilder();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
class UScriptStruct* FBuilderPoly::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FBuilderPoly_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBuilderPoly, Z_Construct_UPackage__Script_Engine(), TEXT("BuilderPoly"), sizeof(FBuilderPoly), Get_Z_Construct_UScriptStruct_FBuilderPoly_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBuilderPoly(FBuilderPoly::StaticStruct, TEXT("/Script/Engine"), TEXT("BuilderPoly"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFBuilderPoly
{
	FScriptStruct_Engine_StaticRegisterNativesFBuilderPoly()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BuilderPoly")),new UScriptStruct::TCppStructOps<FBuilderPoly>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFBuilderPoly;
	UScriptStruct* Z_Construct_UScriptStruct_FBuilderPoly()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBuilderPoly_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BuilderPoly"), sizeof(FBuilderPoly), Get_Z_Construct_UScriptStruct_FBuilderPoly_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/BrushBuilder.h" },
				{ "ToolTip", "Internal state, not accessible to script." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBuilderPoly>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PolyFlags_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/BrushBuilder.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_PolyFlags = { UE4CodeGen_Private::EPropertyClass::Int, "PolyFlags", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FBuilderPoly, PolyFlags), METADATA_PARAMS(NewProp_PolyFlags_MetaData, ARRAY_COUNT(NewProp_PolyFlags_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/BrushBuilder.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ItemName = { UE4CodeGen_Private::EPropertyClass::Name, "ItemName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FBuilderPoly, ItemName), METADATA_PARAMS(NewProp_ItemName_MetaData, ARRAY_COUNT(NewProp_ItemName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/BrushBuilder.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Direction = { UE4CodeGen_Private::EPropertyClass::Int, "Direction", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FBuilderPoly, Direction), METADATA_PARAMS(NewProp_Direction_MetaData, ARRAY_COUNT(NewProp_Direction_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexIndices_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/BrushBuilder.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VertexIndices = { UE4CodeGen_Private::EPropertyClass::Array, "VertexIndices", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FBuilderPoly, VertexIndices), METADATA_PARAMS(NewProp_VertexIndices_MetaData, ARRAY_COUNT(NewProp_VertexIndices_MetaData)) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_VertexIndices_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "VertexIndices", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PolyFlags,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ItemName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Direction,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VertexIndices,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VertexIndices_Inner,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"BuilderPoly",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FBuilderPoly),
				alignof(FBuilderPoly),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBuilderPoly_CRC() { return 2771700680U; }
	void UBrushBuilder::StaticRegisterNativesUBrushBuilder()
	{
	}
	UClass* Z_Construct_UClass_UBrushBuilder_NoRegister()
	{
		return UBrushBuilder::StaticClass();
	}
	UClass* Z_Construct_UClass_UBrushBuilder()
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
				{ "HideCategories", "Object" },
				{ "IncludePath", "Engine/BrushBuilder.h" },
				{ "ModuleRelativePath", "Classes/Engine/BrushBuilder.h" },
				{ "ToolTip", "Base class of UnrealEd brush builders.\n\n\nTips for writing brush builders:\n\n- Always validate the user-specified and call BadParameters function\n  if anything is wrong, instead of actually building geometry.\n  If you build an invalid brush due to bad user parameters, you'll\n  cause an extraordinary amount of pain for the poor user.\n\n- When generating polygons with more than 3 vertices, BE SURE all the\n  polygon's vertices are coplanar!  Out-of-plane polygons will cause\n  geometry to be corrupted." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MergeCoplanars_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/BrushBuilder.h" },
			};
#endif
			auto NewProp_MergeCoplanars_SetBit = [](void* Obj){ ((UBrushBuilder*)Obj)->MergeCoplanars = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_MergeCoplanars = { UE4CodeGen_Private::EPropertyClass::Bool, "MergeCoplanars", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UBrushBuilder), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_MergeCoplanars_SetBit)>::SetBit, METADATA_PARAMS(NewProp_MergeCoplanars_MetaData, ARRAY_COUNT(NewProp_MergeCoplanars_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Layer_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/BrushBuilder.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_Layer = { UE4CodeGen_Private::EPropertyClass::Name, "Layer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UBrushBuilder, Layer), METADATA_PARAMS(NewProp_Layer_MetaData, ARRAY_COUNT(NewProp_Layer_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Polys_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/BrushBuilder.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Polys = { UE4CodeGen_Private::EPropertyClass::Array, "Polys", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UBrushBuilder, Polys), METADATA_PARAMS(NewProp_Polys_MetaData, ARRAY_COUNT(NewProp_Polys_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Polys_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Polys", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FBuilderPoly, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vertices_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/BrushBuilder.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Vertices = { UE4CodeGen_Private::EPropertyClass::Array, "Vertices", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UBrushBuilder, Vertices), METADATA_PARAMS(NewProp_Vertices_MetaData, ARRAY_COUNT(NewProp_Vertices_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Vertices", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NotifyBadParams_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/BrushBuilder.h" },
				{ "ToolTip", "If false, disabled the bad param notifications" },
			};
#endif
			auto NewProp_NotifyBadParams_SetBit = [](void* Obj){ ((UBrushBuilder*)Obj)->NotifyBadParams = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NotifyBadParams = { UE4CodeGen_Private::EPropertyClass::Bool, "NotifyBadParams", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UBrushBuilder), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_NotifyBadParams_SetBit)>::SetBit, METADATA_PARAMS(NewProp_NotifyBadParams_MetaData, ARRAY_COUNT(NewProp_NotifyBadParams_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToolTip_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/BrushBuilder.h" },
				{ "ToolTip", "localized FString that will be displayed as the name of this brush builder in the editor" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ToolTip = { UE4CodeGen_Private::EPropertyClass::Str, "ToolTip", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UBrushBuilder, ToolTip), METADATA_PARAMS(NewProp_ToolTip_MetaData, ARRAY_COUNT(NewProp_ToolTip_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BitmapFilename_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/BrushBuilder.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_BitmapFilename = { UE4CodeGen_Private::EPropertyClass::Str, "BitmapFilename", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UBrushBuilder, BitmapFilename), METADATA_PARAMS(NewProp_BitmapFilename_MetaData, ARRAY_COUNT(NewProp_BitmapFilename_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MergeCoplanars,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Layer,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Polys,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Polys_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Vertices,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Vertices_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NotifyBadParams,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ToolTip,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BitmapFilename,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UBrushBuilder>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UBrushBuilder::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00080081u,
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
	IMPLEMENT_CLASS(UBrushBuilder, 2861865075);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBrushBuilder(Z_Construct_UClass_UBrushBuilder, &UBrushBuilder::StaticClass, TEXT("/Script/Engine"), TEXT("UBrushBuilder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBrushBuilder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
