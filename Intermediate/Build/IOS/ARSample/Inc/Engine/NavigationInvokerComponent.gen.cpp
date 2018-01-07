// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/AI/Navigation/NavigationInvokerComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavigationInvokerComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UNavigationInvokerComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNavigationInvokerComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UNavigationInvokerComponent::StaticRegisterNativesUNavigationInvokerComponent()
	{
	}
	UClass* Z_Construct_UClass_UNavigationInvokerComponent_NoRegister()
	{
		return UNavigationInvokerComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UNavigationInvokerComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UActorComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Navigation" },
				{ "HideCategories", "Activation" },
				{ "IncludePath", "AI/Navigation/NavigationInvokerComponent.h" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationInvokerComponent.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileRemovalRadius_MetaData[] = {
				{ "Category", "Navigation" },
				{ "ClampMin", "0.1" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationInvokerComponent.h" },
				{ "UIMin", "0.1" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TileRemovalRadius = { UE4CodeGen_Private::EPropertyClass::Float, "TileRemovalRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UNavigationInvokerComponent, TileRemovalRadius), METADATA_PARAMS(NewProp_TileRemovalRadius_MetaData, ARRAY_COUNT(NewProp_TileRemovalRadius_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileGenerationRadius_MetaData[] = {
				{ "Category", "Navigation" },
				{ "ClampMin", "0.1" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationInvokerComponent.h" },
				{ "UIMin", "0.1" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TileGenerationRadius = { UE4CodeGen_Private::EPropertyClass::Float, "TileGenerationRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UNavigationInvokerComponent, TileGenerationRadius), METADATA_PARAMS(NewProp_TileGenerationRadius_MetaData, ARRAY_COUNT(NewProp_TileGenerationRadius_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TileRemovalRadius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TileGenerationRadius,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UNavigationInvokerComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UNavigationInvokerComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
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
	IMPLEMENT_CLASS(UNavigationInvokerComponent, 2391937793);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNavigationInvokerComponent(Z_Construct_UClass_UNavigationInvokerComponent, &UNavigationInvokerComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UNavigationInvokerComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNavigationInvokerComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
