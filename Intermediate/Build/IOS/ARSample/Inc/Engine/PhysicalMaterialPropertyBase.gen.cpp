// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/PhysicalMaterials/PhysicalMaterialPropertyBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicalMaterialPropertyBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDEPRECATED_PhysicalMaterialPropertyBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDEPRECATED_PhysicalMaterialPropertyBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UDEPRECATED_PhysicalMaterialPropertyBase::StaticRegisterNativesUDEPRECATED_PhysicalMaterialPropertyBase()
	{
	}
	UClass* Z_Construct_UClass_UDEPRECATED_PhysicalMaterialPropertyBase_NoRegister()
	{
		return UDEPRECATED_PhysicalMaterialPropertyBase::StaticClass();
	}
	UClass* Z_Construct_UClass_UDEPRECATED_PhysicalMaterialPropertyBase()
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
				{ "HideCategories", "Object" },
				{ "IncludePath", "PhysicalMaterials/PhysicalMaterialPropertyBase.h" },
				{ "ModuleRelativePath", "Classes/PhysicalMaterials/PhysicalMaterialPropertyBase.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UDEPRECATED_PhysicalMaterialPropertyBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UDEPRECATED_PhysicalMaterialPropertyBase::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x02083281u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDEPRECATED_PhysicalMaterialPropertyBase, 2122570305);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDEPRECATED_PhysicalMaterialPropertyBase(Z_Construct_UClass_UDEPRECATED_PhysicalMaterialPropertyBase, &UDEPRECATED_PhysicalMaterialPropertyBase::StaticClass, TEXT("/Script/Engine"), TEXT("UDEPRECATED_PhysicalMaterialPropertyBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDEPRECATED_PhysicalMaterialPropertyBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
