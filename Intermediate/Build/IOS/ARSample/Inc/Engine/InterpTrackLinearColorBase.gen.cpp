// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Matinee/InterpTrackLinearColorBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackLinearColorBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackLinearColorBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackLinearColorBase();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrack();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInterpCurveLinearColor();
// End Cross Module References
	void UInterpTrackLinearColorBase::StaticRegisterNativesUInterpTrackLinearColorBase()
	{
	}
	UClass* Z_Construct_UClass_UInterpTrackLinearColorBase_NoRegister()
	{
		return UInterpTrackLinearColorBase::StaticClass();
	}
	UClass* Z_Construct_UClass_UInterpTrackLinearColorBase()
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
				{ "IncludePath", "Matinee/InterpTrackLinearColorBase.h" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackLinearColorBase.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurveTension_MetaData[] = {
				{ "Category", "InterpTrackLinearColorBase" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackLinearColorBase.h" },
				{ "ToolTip", "Tension of curve, used for keypoints using automatic tangents." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurveTension = { UE4CodeGen_Private::EPropertyClass::Float, "CurveTension", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UInterpTrackLinearColorBase, CurveTension), METADATA_PARAMS(NewProp_CurveTension_MetaData, ARRAY_COUNT(NewProp_CurveTension_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinearColorTrack_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackLinearColorBase.h" },
				{ "ToolTip", "Actually track data containing keyframes of a FVector as it varies over time." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LinearColorTrack = { UE4CodeGen_Private::EPropertyClass::Struct, "LinearColorTrack", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UInterpTrackLinearColorBase, LinearColorTrack), Z_Construct_UScriptStruct_FInterpCurveLinearColor, METADATA_PARAMS(NewProp_LinearColorTrack_MetaData, ARRAY_COUNT(NewProp_LinearColorTrack_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurveTension,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LinearColorTrack,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UInterpTrackLinearColorBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UInterpTrackLinearColorBase::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00082081u,
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
	IMPLEMENT_CLASS(UInterpTrackLinearColorBase, 264751263);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpTrackLinearColorBase(Z_Construct_UClass_UInterpTrackLinearColorBase, &UInterpTrackLinearColorBase::StaticClass, TEXT("/Script/Engine"), TEXT("UInterpTrackLinearColorBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackLinearColorBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
