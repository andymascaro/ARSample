// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Matinee/InterpTrackLinearColorProp.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackLinearColorProp() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackLinearColorProp_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackLinearColorProp();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackLinearColorBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UInterpTrackLinearColorProp::StaticRegisterNativesUInterpTrackLinearColorProp()
	{
	}
	UClass* Z_Construct_UClass_UInterpTrackLinearColorProp_NoRegister()
	{
		return UInterpTrackLinearColorProp::StaticClass();
	}
	UClass* Z_Construct_UClass_UInterpTrackLinearColorProp()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UInterpTrackLinearColorBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "LinearColor Property Track" },
				{ "HideCategories", "Object" },
				{ "IncludePath", "Matinee/InterpTrackLinearColorProp.h" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackLinearColorProp.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[] = {
				{ "Category", "InterpTrackLinearColorProp" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackLinearColorProp.h" },
				{ "ToolTip", "Name of property in Group  AActor  which this track mill modify over time." },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_PropertyName = { UE4CodeGen_Private::EPropertyClass::Name, "PropertyName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020001, 1, nullptr, STRUCT_OFFSET(UInterpTrackLinearColorProp, PropertyName), METADATA_PARAMS(NewProp_PropertyName_MetaData, ARRAY_COUNT(NewProp_PropertyName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PropertyName,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UInterpTrackLinearColorProp>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UInterpTrackLinearColorProp::StaticClass,
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
	IMPLEMENT_CLASS(UInterpTrackLinearColorProp, 1084344318);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpTrackLinearColorProp(Z_Construct_UClass_UInterpTrackLinearColorProp, &UInterpTrackLinearColorProp::StaticClass, TEXT("/Script/Engine"), TEXT("UInterpTrackLinearColorProp"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackLinearColorProp);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
