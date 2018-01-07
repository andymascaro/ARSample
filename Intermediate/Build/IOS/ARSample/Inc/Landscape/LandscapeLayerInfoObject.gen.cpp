// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/LandscapeLayerInfoObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeLayerInfoObject() {}
// Cross Module References
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeLayerInfoObject_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeLayerInfoObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Landscape();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
// End Cross Module References
	void ULandscapeLayerInfoObject::StaticRegisterNativesULandscapeLayerInfoObject()
	{
	}
	UClass* Z_Construct_UClass_ULandscapeLayerInfoObject_NoRegister()
	{
		return ULandscapeLayerInfoObject::StaticClass();
	}
	UClass* Z_Construct_UClass_ULandscapeLayerInfoObject()
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
				{ "IncludePath", "LandscapeLayerInfoObject.h" },
				{ "ModuleRelativePath", "Classes/LandscapeLayerInfoObject.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LayerUsageDebugColor_MetaData[] = {
				{ "Category", "LandscapeLayerInfoObject" },
				{ "ModuleRelativePath", "Classes/LandscapeLayerInfoObject.h" },
				{ "ToolTip", "The color to use for layer usage debug" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LayerUsageDebugColor = { UE4CodeGen_Private::EPropertyClass::Struct, "LayerUsageDebugColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ULandscapeLayerInfoObject, LayerUsageDebugColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(NewProp_LayerUsageDebugColor_MetaData, ARRAY_COUNT(NewProp_LayerUsageDebugColor_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsReferencedFromLoadedData_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeLayerInfoObject.h" },
			};
#endif
			auto NewProp_IsReferencedFromLoadedData_SetBit = [](void* Obj){ ((ULandscapeLayerInfoObject*)Obj)->IsReferencedFromLoadedData = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsReferencedFromLoadedData = { UE4CodeGen_Private::EPropertyClass::Bool, "IsReferencedFromLoadedData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000c00002000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ULandscapeLayerInfoObject), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_IsReferencedFromLoadedData_SetBit)>::SetBit, METADATA_PARAMS(NewProp_IsReferencedFromLoadedData_MetaData, ARRAY_COUNT(NewProp_IsReferencedFromLoadedData_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNoWeightBlend_MetaData[] = {
				{ "Category", "LandscapeLayerInfoObject" },
				{ "ModuleRelativePath", "Classes/LandscapeLayerInfoObject.h" },
			};
#endif
			auto NewProp_bNoWeightBlend_SetBit = [](void* Obj){ ((ULandscapeLayerInfoObject*)Obj)->bNoWeightBlend = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNoWeightBlend = { UE4CodeGen_Private::EPropertyClass::Bool, "bNoWeightBlend", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800020001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ULandscapeLayerInfoObject), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bNoWeightBlend_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bNoWeightBlend_MetaData, ARRAY_COUNT(NewProp_bNoWeightBlend_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hardness_MetaData[] = {
				{ "Category", "LandscapeLayerInfoObject" },
				{ "ModuleRelativePath", "Classes/LandscapeLayerInfoObject.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Hardness = { UE4CodeGen_Private::EPropertyClass::Float, "Hardness", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ULandscapeLayerInfoObject, Hardness), METADATA_PARAMS(NewProp_Hardness_MetaData, ARRAY_COUNT(NewProp_Hardness_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysMaterial_MetaData[] = {
				{ "Category", "LandscapeLayerInfoObject" },
				{ "ModuleRelativePath", "Classes/LandscapeLayerInfoObject.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PhysMaterial = { UE4CodeGen_Private::EPropertyClass::Object, "PhysMaterial", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ULandscapeLayerInfoObject, PhysMaterial), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(NewProp_PhysMaterial_MetaData, ARRAY_COUNT(NewProp_PhysMaterial_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LayerName_MetaData[] = {
				{ "Category", "LandscapeLayerInfoObject" },
				{ "ModuleRelativePath", "Classes/LandscapeLayerInfoObject.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_LayerName = { UE4CodeGen_Private::EPropertyClass::Name, "LayerName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010010000020001, 1, nullptr, STRUCT_OFFSET(ULandscapeLayerInfoObject, LayerName), METADATA_PARAMS(NewProp_LayerName_MetaData, ARRAY_COUNT(NewProp_LayerName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LayerUsageDebugColor,
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IsReferencedFromLoadedData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bNoWeightBlend,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Hardness,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PhysMaterial,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LayerName,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ULandscapeLayerInfoObject>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ULandscapeLayerInfoObject::StaticClass,
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
	IMPLEMENT_CLASS(ULandscapeLayerInfoObject, 3475788181);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULandscapeLayerInfoObject(Z_Construct_UClass_ULandscapeLayerInfoObject, &ULandscapeLayerInfoObject::StaticClass, TEXT("/Script/Landscape"), TEXT("ULandscapeLayerInfoObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULandscapeLayerInfoObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
