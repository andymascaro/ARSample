// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Matinee/InterpFilter_Custom.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpFilter_Custom() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterpFilter_Custom_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpFilter_Custom();
	ENGINE_API UClass* Z_Construct_UClass_UInterpFilter();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UInterpGroup_NoRegister();
// End Cross Module References
	void UInterpFilter_Custom::StaticRegisterNativesUInterpFilter_Custom()
	{
	}
	UClass* Z_Construct_UClass_UInterpFilter_Custom_NoRegister()
	{
		return UInterpFilter_Custom::StaticClass();
	}
	UClass* Z_Construct_UClass_UInterpFilter_Custom()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UInterpFilter,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Matinee/InterpFilter_Custom.h" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpFilter_Custom.h" },
			};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupsToInclude_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpFilter_Custom.h" },
				{ "ToolTip", "Which groups are included in this filter." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GroupsToInclude = { UE4CodeGen_Private::EPropertyClass::Array, "GroupsToInclude", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(UInterpFilter_Custom, GroupsToInclude), METADATA_PARAMS(NewProp_GroupsToInclude_MetaData, ARRAY_COUNT(NewProp_GroupsToInclude_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GroupsToInclude_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "GroupsToInclude", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000800000000, 1, nullptr, 0, Z_Construct_UClass_UInterpGroup_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GroupsToInclude,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GroupsToInclude_Inner,
			};
#endif // WITH_EDITORONLY_DATA
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UInterpFilter_Custom>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UInterpFilter_Custom::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00080080u,
				nullptr, 0,
				IF_WITH_EDITORONLY_DATA(PropPointers, nullptr), IF_WITH_EDITORONLY_DATA(ARRAY_COUNT(PropPointers), 0),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInterpFilter_Custom, 744849380);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpFilter_Custom(Z_Construct_UClass_UInterpFilter_Custom, &UInterpFilter_Custom::StaticClass, TEXT("/Script/Engine"), TEXT("UInterpFilter_Custom"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpFilter_Custom);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
