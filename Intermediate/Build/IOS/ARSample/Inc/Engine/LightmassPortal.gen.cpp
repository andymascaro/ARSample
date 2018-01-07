// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Lightmass/LightmassPortal.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLightmassPortal() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ALightmassPortal_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ALightmassPortal();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULightmassPortalComponent_NoRegister();
// End Cross Module References
	void ALightmassPortal::StaticRegisterNativesALightmassPortal()
	{
	}
	UClass* Z_Construct_UClass_ALightmassPortal_NoRegister()
	{
		return ALightmassPortal::StaticClass();
	}
	UClass* Z_Construct_UClass_ALightmassPortal()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Collision Attachment Actor" },
				{ "IncludePath", "Lightmass/LightmassPortal.h" },
				{ "ModuleRelativePath", "Classes/Lightmass/LightmassPortal.h" },
			};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpriteComponent_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/Lightmass/LightmassPortal.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpriteComponent = { UE4CodeGen_Private::EPropertyClass::Object, "SpriteComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000800080008, 1, nullptr, STRUCT_OFFSET(ALightmassPortal, SpriteComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(NewProp_SpriteComponent_MetaData, ARRAY_COUNT(NewProp_SpriteComponent_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PortalComponent_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "Portal" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/Lightmass/LightmassPortal.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PortalComponent = { UE4CodeGen_Private::EPropertyClass::Object, "PortalComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(ALightmassPortal, PortalComponent), Z_Construct_UClass_ULightmassPortalComponent_NoRegister, METADATA_PARAMS(NewProp_PortalComponent_MetaData, ARRAY_COUNT(NewProp_PortalComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpriteComponent,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PortalComponent,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ALightmassPortal>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ALightmassPortal::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880080u,
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
	IMPLEMENT_CLASS(ALightmassPortal, 2196674390);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALightmassPortal(Z_Construct_UClass_ALightmassPortal, &ALightmassPortal::StaticClass, TEXT("/Script/Engine"), TEXT("ALightmassPortal"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALightmassPortal);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
