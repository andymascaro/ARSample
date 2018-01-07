// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/InteractiveFoliageComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractiveFoliageComponent() {}
// Cross Module References
	FOLIAGE_API UClass* Z_Construct_UClass_UInteractiveFoliageComponent_NoRegister();
	FOLIAGE_API UClass* Z_Construct_UClass_UInteractiveFoliageComponent();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
	UPackage* Z_Construct_UPackage__Script_Foliage();
// End Cross Module References
	void UInteractiveFoliageComponent::StaticRegisterNativesUInteractiveFoliageComponent()
	{
	}
	UClass* Z_Construct_UClass_UInteractiveFoliageComponent_NoRegister()
	{
		return UInteractiveFoliageComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UInteractiveFoliageComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UStaticMeshComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_Foliage,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Object Object Activation Components|Activation Trigger" },
				{ "IncludePath", "InteractiveFoliageComponent.h" },
				{ "ModuleRelativePath", "Private/InteractiveFoliageComponent.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UInteractiveFoliageComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UInteractiveFoliageComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00A01080u,
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
	IMPLEMENT_CLASS(UInteractiveFoliageComponent, 2999898814);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInteractiveFoliageComponent(Z_Construct_UClass_UInteractiveFoliageComponent, &UInteractiveFoliageComponent::StaticClass, TEXT("/Script/Foliage"), TEXT("UInteractiveFoliageComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractiveFoliageComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
