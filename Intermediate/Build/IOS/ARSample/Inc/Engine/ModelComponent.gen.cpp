// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Components/ModelComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModelComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UModelComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UModelComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UBodySetup_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterface_CollisionDataProvider_NoRegister();
// End Cross Module References
	void UModelComponent::StaticRegisterNativesUModelComponent()
	{
	}
	UClass* Z_Construct_UClass_UModelComponent_NoRegister()
	{
		return UModelComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UModelComponent()
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
				{ "HideCategories", "Mobility Trigger" },
				{ "IncludePath", "Components/ModelComponent.h" },
				{ "ModuleRelativePath", "Classes/Components/ModelComponent.h" },
				{ "ToolTip", "ModelComponents are PrimitiveComponents that represent elements of BSP geometry in a ULevel object.\nThey are used exclusively by ULevel and are not intended as general-purpose components.\n\n@see ULevel" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModelBodySetup_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/ModelComponent.h" },
				{ "ToolTip", "Description of collision" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ModelBodySetup = { UE4CodeGen_Private::EPropertyClass::Object, "ModelBodySetup", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UModelComponent, ModelBodySetup), Z_Construct_UClass_UBodySetup_NoRegister, METADATA_PARAMS(NewProp_ModelBodySetup_MetaData, ARRAY_COUNT(NewProp_ModelBodySetup_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ModelBodySetup,
			};
			static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[] = {
				{ Z_Construct_UClass_UInterface_CollisionDataProvider_NoRegister, (int32)VTABLE_OFFSET(UModelComponent, IInterface_CollisionDataProvider), false },
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UModelComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UModelComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00A80080u,
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
	IMPLEMENT_CLASS(UModelComponent, 4147592215);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UModelComponent(Z_Construct_UClass_UModelComponent, &UModelComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UModelComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UModelComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
