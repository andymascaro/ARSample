// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Matinee/InterpTrackFloatBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackFloatBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackFloatBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackFloatBase();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrack();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInterpCurveFloat();
// End Cross Module References
	void UInterpTrackFloatBase::StaticRegisterNativesUInterpTrackFloatBase()
	{
	}
	UClass* Z_Construct_UClass_UInterpTrackFloatBase_NoRegister()
	{
		return UInterpTrackFloatBase::StaticClass();
	}
	UClass* Z_Construct_UClass_UInterpTrackFloatBase()
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
				{ "IncludePath", "Matinee/InterpTrackFloatBase.h" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackFloatBase.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurveTension_MetaData[] = {
				{ "Category", "InterpTrackFloatBase" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackFloatBase.h" },
				{ "ToolTip", "Tension of curve, used for keypoints using automatic tangents." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurveTension = { UE4CodeGen_Private::EPropertyClass::Float, "CurveTension", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UInterpTrackFloatBase, CurveTension), METADATA_PARAMS(NewProp_CurveTension_MetaData, ARRAY_COUNT(NewProp_CurveTension_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatTrack_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackFloatBase.h" },
				{ "ToolTip", "Actually track data containing keyframes of float as it varies over time." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_FloatTrack = { UE4CodeGen_Private::EPropertyClass::Struct, "FloatTrack", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UInterpTrackFloatBase, FloatTrack), Z_Construct_UScriptStruct_FInterpCurveFloat, METADATA_PARAMS(NewProp_FloatTrack_MetaData, ARRAY_COUNT(NewProp_FloatTrack_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurveTension,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FloatTrack,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UInterpTrackFloatBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UInterpTrackFloatBase::StaticClass,
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
	IMPLEMENT_CLASS(UInterpTrackFloatBase, 4122563357);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpTrackFloatBase(Z_Construct_UClass_UInterpTrackFloatBase, &UInterpTrackFloatBase::StaticClass, TEXT("/Script/Engine"), TEXT("UInterpTrackFloatBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackFloatBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
