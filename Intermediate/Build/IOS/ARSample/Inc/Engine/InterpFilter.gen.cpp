// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Matinee/InterpFilter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpFilter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterpFilter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpFilter();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UInterpFilter::StaticRegisterNativesUInterpFilter()
	{
	}
	UClass* Z_Construct_UClass_UInterpFilter_NoRegister()
	{
		return UInterpFilter::StaticClass();
	}
	UClass* Z_Construct_UClass_UInterpFilter()
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
				{ "IncludePath", "Matinee/InterpFilter.h" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpFilter.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Caption_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpFilter.h" },
				{ "ToolTip", "Caption for this filter." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Caption = { UE4CodeGen_Private::EPropertyClass::Str, "Caption", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UInterpFilter, Caption), METADATA_PARAMS(NewProp_Caption_MetaData, ARRAY_COUNT(NewProp_Caption_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Caption,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UInterpFilter>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UInterpFilter::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00000080u,
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
	IMPLEMENT_CLASS(UInterpFilter, 220673809);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpFilter(Z_Construct_UClass_UInterpFilter, &UInterpFilter::StaticClass, TEXT("/Script/Engine"), TEXT("UInterpFilter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpFilter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
