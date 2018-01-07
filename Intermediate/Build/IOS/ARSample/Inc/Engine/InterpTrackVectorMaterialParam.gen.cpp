// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Matinee/InterpTrackVectorMaterialParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackVectorMaterialParam() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackVectorMaterialParam_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackVectorMaterialParam();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackVectorBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
	void UInterpTrackVectorMaterialParam::StaticRegisterNativesUInterpTrackVectorMaterialParam()
	{
	}
	UClass* Z_Construct_UClass_UInterpTrackVectorMaterialParam_NoRegister()
	{
		return UInterpTrackVectorMaterialParam::StaticClass();
	}
	UClass* Z_Construct_UClass_UInterpTrackVectorMaterialParam()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UInterpTrackVectorBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "Vector Material Parameter Track" },
				{ "HideCategories", "Object" },
				{ "IncludePath", "Matinee/InterpTrackVectorMaterialParam.h" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackVectorMaterialParam.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParamName_MetaData[] = {
				{ "Category", "InterpTrackVectorMaterialParam" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackVectorMaterialParam.h" },
				{ "ToolTip", "Name of parameter in the MaterialInstance which this track will modify over time." },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParamName = { UE4CodeGen_Private::EPropertyClass::Name, "ParamName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UInterpTrackVectorMaterialParam, ParamName), METADATA_PARAMS(NewProp_ParamName_MetaData, ARRAY_COUNT(NewProp_ParamName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetMaterials_MetaData[] = {
				{ "Category", "InterpTrackVectorMaterialParam" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackVectorMaterialParam.h" },
				{ "ToolTip", "Materials whose parameters we want to change and the references to those materials." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TargetMaterials = { UE4CodeGen_Private::EPropertyClass::Array, "TargetMaterials", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UInterpTrackVectorMaterialParam, TargetMaterials), METADATA_PARAMS(NewProp_TargetMaterials_MetaData, ARRAY_COUNT(NewProp_TargetMaterials_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetMaterials_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "TargetMaterials", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParamName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetMaterials,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetMaterials_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UInterpTrackVectorMaterialParam>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UInterpTrackVectorMaterialParam::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00082080u,
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
	IMPLEMENT_CLASS(UInterpTrackVectorMaterialParam, 4061486997);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpTrackVectorMaterialParam(Z_Construct_UClass_UInterpTrackVectorMaterialParam, &UInterpTrackVectorMaterialParam::StaticClass, TEXT("/Script/Engine"), TEXT("UInterpTrackVectorMaterialParam"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackVectorMaterialParam);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
