// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Slate/SlateBrushAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlateBrushAsset() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USlateBrushAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USlateBrushAsset();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
// End Cross Module References
	void USlateBrushAsset::StaticRegisterNativesUSlateBrushAsset()
	{
	}
	UClass* Z_Construct_UClass_USlateBrushAsset_NoRegister()
	{
		return USlateBrushAsset::StaticClass();
	}
	UClass* Z_Construct_UClass_USlateBrushAsset()
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
				{ "BlueprintType", "true" },
				{ "HideCategories", "Object" },
				{ "IncludePath", "Slate/SlateBrushAsset.h" },
				{ "ModuleRelativePath", "Classes/Slate/SlateBrushAsset.h" },
				{ "ToolTip", "An asset describing how a texture can exist in slate's DPI-aware environment\nand how this texture responds to resizing. e.g. Scale9-stretching? Tiling?" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Brush_MetaData[] = {
				{ "Category", "Brush" },
				{ "ModuleRelativePath", "Classes/Slate/SlateBrushAsset.h" },
				{ "ShowOnlyInnerProperties", "" },
				{ "ToolTip", "The slate brush resource describing the texture's behavior." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Brush = { UE4CodeGen_Private::EPropertyClass::Struct, "Brush", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(USlateBrushAsset, Brush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_Brush_MetaData, ARRAY_COUNT(NewProp_Brush_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Brush,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USlateBrushAsset>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USlateBrushAsset::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00080080u,
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
	IMPLEMENT_CLASS(USlateBrushAsset, 3590340077);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USlateBrushAsset(Z_Construct_UClass_USlateBrushAsset, &USlateBrushAsset::StaticClass, TEXT("/Script/Engine"), TEXT("USlateBrushAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USlateBrushAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
