// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/AI/Navigation/NavLinkRenderingComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavLinkRenderingComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UNavLinkRenderingComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNavLinkRenderingComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UNavLinkRenderingComponent::StaticRegisterNativesUNavLinkRenderingComponent()
	{
	}
	UClass* Z_Construct_UClass_UNavLinkRenderingComponent_NoRegister()
	{
		return UNavLinkRenderingComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UNavLinkRenderingComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Object Mobility Trigger" },
				{ "IncludePath", "AI/Navigation/NavLinkRenderingComponent.h" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkRenderingComponent.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UNavLinkRenderingComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UNavLinkRenderingComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B01080u,
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
	IMPLEMENT_CLASS(UNavLinkRenderingComponent, 2398026376);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNavLinkRenderingComponent(Z_Construct_UClass_UNavLinkRenderingComponent, &UNavLinkRenderingComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UNavLinkRenderingComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNavLinkRenderingComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
