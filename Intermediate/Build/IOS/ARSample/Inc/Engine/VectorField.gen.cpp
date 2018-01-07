// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/VectorField/VectorField.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVectorField() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UVectorField_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UVectorField();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
// End Cross Module References
	void UVectorField::StaticRegisterNativesUVectorField()
	{
	}
	UClass* Z_Construct_UClass_UVectorField_NoRegister()
	{
		return UVectorField::StaticClass();
	}
	UClass* Z_Construct_UClass_UVectorField()
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
				{ "IncludePath", "VectorField/VectorField.h" },
				{ "ModuleRelativePath", "Classes/VectorField/VectorField.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Intensity_MetaData[] = {
				{ "Category", "VectorField" },
				{ "ModuleRelativePath", "Classes/VectorField/VectorField.h" },
				{ "ToolTip", "The intensity with which to multiplie vectors in this field." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Intensity = { UE4CodeGen_Private::EPropertyClass::Float, "Intensity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UVectorField, Intensity), METADATA_PARAMS(NewProp_Intensity_MetaData, ARRAY_COUNT(NewProp_Intensity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bounds_MetaData[] = {
				{ "Category", "VectorFieldBounds" },
				{ "ModuleRelativePath", "Classes/VectorField/VectorField.h" },
				{ "ToolTip", "Bounds of the volume in local space." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bounds = { UE4CodeGen_Private::EPropertyClass::Struct, "Bounds", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UVectorField, Bounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(NewProp_Bounds_MetaData, ARRAY_COUNT(NewProp_Bounds_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Intensity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Bounds,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UVectorField>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UVectorField::StaticClass,
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
	IMPLEMENT_CLASS(UVectorField, 1855495272);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVectorField(Z_Construct_UClass_UVectorField, &UVectorField::StaticClass, TEXT("/Script/Engine"), TEXT("UVectorField"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVectorField);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
