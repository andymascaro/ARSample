// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Matinee/InterpTrackFloatProp.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackFloatProp() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackFloatProp_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackFloatProp();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackFloatBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UInterpTrackFloatProp::StaticRegisterNativesUInterpTrackFloatProp()
	{
	}
	UClass* Z_Construct_UClass_UInterpTrackFloatProp_NoRegister()
	{
		return UInterpTrackFloatProp::StaticClass();
	}
	UClass* Z_Construct_UClass_UInterpTrackFloatProp()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UInterpTrackFloatBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "Float Property Track" },
				{ "HideCategories", "Object" },
				{ "IncludePath", "Matinee/InterpTrackFloatProp.h" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackFloatProp.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[] = {
				{ "Category", "InterpTrackFloatProp" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackFloatProp.h" },
				{ "ToolTip", "Name of property in Group  AActor  which this track mill modify over time." },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_PropertyName = { UE4CodeGen_Private::EPropertyClass::Name, "PropertyName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020001, 1, nullptr, STRUCT_OFFSET(UInterpTrackFloatProp, PropertyName), METADATA_PARAMS(NewProp_PropertyName_MetaData, ARRAY_COUNT(NewProp_PropertyName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PropertyName,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UInterpTrackFloatProp>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UInterpTrackFloatProp::StaticClass,
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
	IMPLEMENT_CLASS(UInterpTrackFloatProp, 2370207992);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpTrackFloatProp(Z_Construct_UClass_UInterpTrackFloatProp, &UInterpTrackFloatProp::StaticClass, TEXT("/Script/Engine"), TEXT("UInterpTrackFloatProp"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackFloatProp);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
