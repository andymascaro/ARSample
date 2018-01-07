// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Components/DrawSphereComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDrawSphereComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDrawSphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDrawSphereComponent();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UDrawSphereComponent::StaticRegisterNativesUDrawSphereComponent()
	{
	}
	UClass* Z_Construct_UClass_UDrawSphereComponent_NoRegister()
	{
		return UDrawSphereComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UDrawSphereComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_USphereComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Object Object LOD Lighting TextureStreaming Object LOD Lighting TextureStreaming Activation Components|Activation Trigger" },
				{ "IncludePath", "Components/DrawSphereComponent.h" },
				{ "ModuleRelativePath", "Classes/Components/DrawSphereComponent.h" },
				{ "ToolTip", "A sphere generally used for simple collision. Bounds are rendered as lines in the editor." },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UDrawSphereComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UDrawSphereComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00A83080u,
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
	IMPLEMENT_CLASS(UDrawSphereComponent, 1985021950);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDrawSphereComponent(Z_Construct_UClass_UDrawSphereComponent, &UDrawSphereComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UDrawSphereComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDrawSphereComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
