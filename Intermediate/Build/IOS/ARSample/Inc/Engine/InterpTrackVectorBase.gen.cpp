// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Matinee/InterpTrackVectorBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackVectorBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackVectorBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackVectorBase();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrack();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInterpCurveVector();
// End Cross Module References
	void UInterpTrackVectorBase::StaticRegisterNativesUInterpTrackVectorBase()
	{
	}
	UClass* Z_Construct_UClass_UInterpTrackVectorBase_NoRegister()
	{
		return UInterpTrackVectorBase::StaticClass();
	}
	UClass* Z_Construct_UClass_UInterpTrackVectorBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UInterpTrack,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Object" },
				{ "IncludePath", "Matinee/InterpTrackVectorBase.h" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackVectorBase.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurveTension_MetaData[] = {
				{ "Category", "InterpTrackVectorBase" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackVectorBase.h" },
				{ "ToolTip", "Tension of curve, used for keypoints using automatic tangents." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurveTension = { UE4CodeGen_Private::EPropertyClass::Float, "CurveTension", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UInterpTrackVectorBase, CurveTension), METADATA_PARAMS(NewProp_CurveTension_MetaData, ARRAY_COUNT(NewProp_CurveTension_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VectorTrack_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackVectorBase.h" },
				{ "ToolTip", "Actually track data containing keyframes of a FVector as it varies over time." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_VectorTrack = { UE4CodeGen_Private::EPropertyClass::Struct, "VectorTrack", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UInterpTrackVectorBase, VectorTrack), Z_Construct_UScriptStruct_FInterpCurveVector, METADATA_PARAMS(NewProp_VectorTrack_MetaData, ARRAY_COUNT(NewProp_VectorTrack_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurveTension,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VectorTrack,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UInterpTrackVectorBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UInterpTrackVectorBase::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00102081u,
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
	IMPLEMENT_CLASS(UInterpTrackVectorBase, 1736985206);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpTrackVectorBase(Z_Construct_UClass_UInterpTrackVectorBase, &UInterpTrackVectorBase::StaticClass, TEXT("/Script/Engine"), TEXT("UInterpTrackVectorBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackVectorBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
