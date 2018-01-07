// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Matinee/InterpTrackInstVectorMaterialParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackInstVectorMaterialParam() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstVectorMaterialParam_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstVectorMaterialParam();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInst();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackVectorMaterialParam_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPrimitiveMaterialRef();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
// End Cross Module References
	void UInterpTrackInstVectorMaterialParam::StaticRegisterNativesUInterpTrackInstVectorMaterialParam()
	{
	}
	UClass* Z_Construct_UClass_UInterpTrackInstVectorMaterialParam_NoRegister()
	{
		return UInterpTrackInstVectorMaterialParam::StaticClass();
	}
	UClass* Z_Construct_UClass_UInterpTrackInstVectorMaterialParam()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UInterpTrackInst,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Matinee/InterpTrackInstVectorMaterialParam.h" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstVectorMaterialParam.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstancedTrack_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstVectorMaterialParam.h" },
				{ "ToolTip", "Track we are an instance of - used in the editor to propagate changes to the track's Materials array immediately." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstancedTrack = { UE4CodeGen_Private::EPropertyClass::Object, "InstancedTrack", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UInterpTrackInstVectorMaterialParam, InstancedTrack), Z_Construct_UClass_UInterpTrackVectorMaterialParam_NoRegister, METADATA_PARAMS(NewProp_InstancedTrack_MetaData, ARRAY_COUNT(NewProp_InstancedTrack_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimitiveMaterialRefs_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstVectorMaterialParam.h" },
				{ "ToolTip", "Primitive components on which materials have been overridden." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PrimitiveMaterialRefs = { UE4CodeGen_Private::EPropertyClass::Array, "PrimitiveMaterialRefs", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000000, 1, nullptr, STRUCT_OFFSET(UInterpTrackInstVectorMaterialParam, PrimitiveMaterialRefs), METADATA_PARAMS(NewProp_PrimitiveMaterialRefs_MetaData, ARRAY_COUNT(NewProp_PrimitiveMaterialRefs_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PrimitiveMaterialRefs_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "PrimitiveMaterialRefs", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000008000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FPrimitiveMaterialRef, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResetVectors_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstVectorMaterialParam.h" },
				{ "ToolTip", "Saved values for restoring state when exiting Matinee." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ResetVectors = { UE4CodeGen_Private::EPropertyClass::Array, "ResetVectors", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UInterpTrackInstVectorMaterialParam, ResetVectors), METADATA_PARAMS(NewProp_ResetVectors_MetaData, ARRAY_COUNT(NewProp_ResetVectors_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResetVectors_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ResetVectors", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialInstances_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstVectorMaterialParam.h" },
				{ "ToolTip", "MIDs we're using to set the desired parameter." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MaterialInstances = { UE4CodeGen_Private::EPropertyClass::Array, "MaterialInstances", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UInterpTrackInstVectorMaterialParam, MaterialInstances), METADATA_PARAMS(NewProp_MaterialInstances_MetaData, ARRAY_COUNT(NewProp_MaterialInstances_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaterialInstances_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "MaterialInstances", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InstancedTrack,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PrimitiveMaterialRefs,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PrimitiveMaterialRefs_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ResetVectors,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ResetVectors_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaterialInstances,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaterialInstances_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UInterpTrackInstVectorMaterialParam>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UInterpTrackInstVectorMaterialParam::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00800080u,
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
	IMPLEMENT_CLASS(UInterpTrackInstVectorMaterialParam, 1747911337);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpTrackInstVectorMaterialParam(Z_Construct_UClass_UInterpTrackInstVectorMaterialParam, &UInterpTrackInstVectorMaterialParam::StaticClass, TEXT("/Script/Engine"), TEXT("UInterpTrackInstVectorMaterialParam"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackInstVectorMaterialParam);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
