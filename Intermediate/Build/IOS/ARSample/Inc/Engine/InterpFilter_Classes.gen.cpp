// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Matinee/InterpFilter_Classes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpFilter_Classes() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterpFilter_Classes_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpFilter_Classes();
	ENGINE_API UClass* Z_Construct_UClass_UInterpFilter();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	void UInterpFilter_Classes::StaticRegisterNativesUInterpFilter_Classes()
	{
	}
	UClass* Z_Construct_UClass_UInterpFilter_Classes_NoRegister()
	{
		return UInterpFilter_Classes::StaticClass();
	}
	UClass* Z_Construct_UClass_UInterpFilter_Classes()
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
				{ "IncludePath", "Matinee/InterpFilter_Classes.h" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpFilter_Classes.h" },
			};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackClasses_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpFilter_Classes.h" },
				{ "ToolTip", "List of allowed track classes.  If empty, then all track classes will be included.  Only groups that\n              contain at least one of these types of tracks will be displayed." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TrackClasses = { UE4CodeGen_Private::EPropertyClass::Array, "TrackClasses", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000800000000, 1, nullptr, STRUCT_OFFSET(UInterpFilter_Classes, TrackClasses), METADATA_PARAMS(NewProp_TrackClasses_MetaData, ARRAY_COUNT(NewProp_TrackClasses_MetaData)) };
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_TrackClasses_Inner = { UE4CodeGen_Private::EPropertyClass::Class, "TrackClasses", RF_Public|RF_Transient|RF_MarkAsNative, 0x0004000800000000, 1, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClassToFilterBy_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpFilter_Classes.h" },
				{ "ToolTip", "Which class to filter groups by." },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_ClassToFilterBy = { UE4CodeGen_Private::EPropertyClass::Class, "ClassToFilterBy", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000800000000, 1, nullptr, STRUCT_OFFSET(UInterpFilter_Classes, ClassToFilterBy), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_ClassToFilterBy_MetaData, ARRAY_COUNT(NewProp_ClassToFilterBy_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TrackClasses,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TrackClasses_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClassToFilterBy,
			};
#endif // WITH_EDITORONLY_DATA
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UInterpFilter_Classes>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UInterpFilter_Classes::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00000080u,
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
	IMPLEMENT_CLASS(UInterpFilter_Classes, 4164915773);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpFilter_Classes(Z_Construct_UClass_UInterpFilter_Classes, &UInterpFilter_Classes::StaticClass, TEXT("/Script/Engine"), TEXT("UInterpFilter_Classes"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpFilter_Classes);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
