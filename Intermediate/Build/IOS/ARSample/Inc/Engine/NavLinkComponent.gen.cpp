// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/AI/Navigation/NavLinkComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavLinkComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UNavLinkComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNavLinkComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNavigationLink();
	ENGINE_API UClass* Z_Construct_UClass_UNavLinkHostInterface_NoRegister();
// End Cross Module References
	void UNavLinkComponent::StaticRegisterNativesUNavLinkComponent()
	{
	}
	UClass* Z_Construct_UClass_UNavLinkComponent_NoRegister()
	{
		return UNavLinkComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UNavLinkComponent()
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
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Navigation" },
				{ "HideCategories", "Activation Mobility Trigger" },
				{ "IncludePath", "AI/Navigation/NavLinkComponent.h" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkComponent.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Links_MetaData[] = {
				{ "Category", "Navigation" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Links = { UE4CodeGen_Private::EPropertyClass::Array, "Links", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UNavLinkComponent, Links), METADATA_PARAMS(NewProp_Links_MetaData, ARRAY_COUNT(NewProp_Links_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Links_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Links", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FNavigationLink, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Links,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Links_Inner,
			};
			static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[] = {
				{ Z_Construct_UClass_UNavLinkHostInterface_NoRegister, (int32)VTABLE_OFFSET(UNavLinkComponent, INavLinkHostInterface), false },
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UNavLinkComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UNavLinkComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				InterfaceParams, ARRAY_COUNT(InterfaceParams),
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNavLinkComponent, 2343197010);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNavLinkComponent(Z_Construct_UClass_UNavLinkComponent, &UNavLinkComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UNavLinkComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNavLinkComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
