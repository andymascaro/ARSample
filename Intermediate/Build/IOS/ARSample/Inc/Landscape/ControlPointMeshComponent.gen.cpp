// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/ControlPointMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControlPointMeshComponent() {}
// Cross Module References
	LANDSCAPE_API UClass* Z_Construct_UClass_UControlPointMeshComponent_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_UControlPointMeshComponent();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
	UPackage* Z_Construct_UPackage__Script_Landscape();
// End Cross Module References
	void UControlPointMeshComponent::StaticRegisterNativesUControlPointMeshComponent()
	{
	}
	UClass* Z_Construct_UClass_UControlPointMeshComponent_NoRegister()
	{
		return UControlPointMeshComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UControlPointMeshComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UStaticMeshComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Object Activation Components|Activation Trigger" },
				{ "IncludePath", "ControlPointMeshComponent.h" },
				{ "ModuleRelativePath", "Classes/ControlPointMeshComponent.h" },
			};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSelected_MetaData[] = {
				{ "ModuleRelativePath", "Classes/ControlPointMeshComponent.h" },
			};
#endif
			auto NewProp_bSelected_SetBit = [](void* Obj){ ((UControlPointMeshComponent*)Obj)->bSelected = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSelected = { UE4CodeGen_Private::EPropertyClass::Bool, "bSelected", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800002000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UControlPointMeshComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSelected_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSelected_MetaData, ARRAY_COUNT(NewProp_bSelected_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSelected,
			};
#endif // WITH_EDITORONLY_DATA
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UControlPointMeshComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UControlPointMeshComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00A81080u,
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
	IMPLEMENT_CLASS(UControlPointMeshComponent, 1848007843);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UControlPointMeshComponent(Z_Construct_UClass_UControlPointMeshComponent, &UControlPointMeshComponent::StaticClass, TEXT("/Script/Landscape"), TEXT("UControlPointMeshComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UControlPointMeshComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
