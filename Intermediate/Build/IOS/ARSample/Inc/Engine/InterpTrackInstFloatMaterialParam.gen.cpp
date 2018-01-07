// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Matinee/InterpTrackInstFloatMaterialParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackInstFloatMaterialParam() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstFloatMaterialParam_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstFloatMaterialParam();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInst();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackFloatMaterialParam_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPrimitiveMaterialRef();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
// End Cross Module References
	void UInterpTrackInstFloatMaterialParam::StaticRegisterNativesUInterpTrackInstFloatMaterialParam()
	{
	}
	UClass* Z_Construct_UClass_UInterpTrackInstFloatMaterialParam_NoRegister()
	{
		return UInterpTrackInstFloatMaterialParam::StaticClass();
	}
	UClass* Z_Construct_UClass_UInterpTrackInstFloatMaterialParam()
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
				{ "IncludePath", "Matinee/InterpTrackInstFloatMaterialParam.h" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstFloatMaterialParam.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstancedTrack_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstFloatMaterialParam.h" },
				{ "ToolTip", "track we are an instance of - used in the editor to propagate changes to the track's Materials array immediately" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstancedTrack = { UE4CodeGen_Private::EPropertyClass::Object, "InstancedTrack", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UInterpTrackInstFloatMaterialParam, InstancedTrack), Z_Construct_UClass_UInterpTrackFloatMaterialParam_NoRegister, METADATA_PARAMS(NewProp_InstancedTrack_MetaData, ARRAY_COUNT(NewProp_InstancedTrack_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimitiveMaterialRefs_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstFloatMaterialParam.h" },
				{ "ToolTip", "Primitive components on which materials have been overridden." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PrimitiveMaterialRefs = { UE4CodeGen_Private::EPropertyClass::Array, "PrimitiveMaterialRefs", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000000, 1, nullptr, STRUCT_OFFSET(UInterpTrackInstFloatMaterialParam, PrimitiveMaterialRefs), METADATA_PARAMS(NewProp_PrimitiveMaterialRefs_MetaData, ARRAY_COUNT(NewProp_PrimitiveMaterialRefs_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PrimitiveMaterialRefs_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "PrimitiveMaterialRefs", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000008000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FPrimitiveMaterialRef, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResetFloats_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstFloatMaterialParam.h" },
				{ "ToolTip", "Saved values for restoring state when exiting Matinee." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ResetFloats = { UE4CodeGen_Private::EPropertyClass::Array, "ResetFloats", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UInterpTrackInstFloatMaterialParam, ResetFloats), METADATA_PARAMS(NewProp_ResetFloats_MetaData, ARRAY_COUNT(NewProp_ResetFloats_MetaData)) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ResetFloats_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "ResetFloats", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialInstances_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstFloatMaterialParam.h" },
				{ "ToolTip", "MIDs we're using to set the desired parameter." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MaterialInstances = { UE4CodeGen_Private::EPropertyClass::Array, "MaterialInstances", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UInterpTrackInstFloatMaterialParam, MaterialInstances), METADATA_PARAMS(NewProp_MaterialInstances_MetaData, ARRAY_COUNT(NewProp_MaterialInstances_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaterialInstances_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "MaterialInstances", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InstancedTrack,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PrimitiveMaterialRefs,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PrimitiveMaterialRefs_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ResetFloats,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ResetFloats_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaterialInstances,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaterialInstances_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UInterpTrackInstFloatMaterialParam>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UInterpTrackInstFloatMaterialParam::StaticClass,
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
	IMPLEMENT_CLASS(UInterpTrackInstFloatMaterialParam, 3839202867);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpTrackInstFloatMaterialParam(Z_Construct_UClass_UInterpTrackInstFloatMaterialParam, &UInterpTrackInstFloatMaterialParam::StaticClass, TEXT("/Script/Engine"), TEXT("UInterpTrackInstFloatMaterialParam"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackInstFloatMaterialParam);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
