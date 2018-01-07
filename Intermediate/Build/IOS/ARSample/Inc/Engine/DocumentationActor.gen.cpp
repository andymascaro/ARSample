// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/DocumentationActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDocumentationActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ADocumentationActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ADocumentationActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialBillboardComponent_NoRegister();
// End Cross Module References
	void ADocumentationActor::StaticRegisterNativesADocumentationActor()
	{
	}
	UClass* Z_Construct_UClass_ADocumentationActor_NoRegister()
	{
		return ADocumentationActor::StaticClass();
	}
	UClass* Z_Construct_UClass_ADocumentationActor()
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
				{ "HideCategories", "Sprite MaterialSprite Actor Transform Tags Materials Rendering Components Blueprint bject Collision Display Physics Input Lighting Layers" },
				{ "IncludePath", "Engine/DocumentationActor.h" },
				{ "ModuleRelativePath", "Classes/Engine/DocumentationActor.h" },
			};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Billboard_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "Sprite" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/Engine/DocumentationActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Billboard = { UE4CodeGen_Private::EPropertyClass::Object, "Billboard", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400008000a001d, 1, nullptr, STRUCT_OFFSET(ADocumentationActor, Billboard), Z_Construct_UClass_UMaterialBillboardComponent_NoRegister, METADATA_PARAMS(NewProp_Billboard_MetaData, ARRAY_COUNT(NewProp_Billboard_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DocumentLink_MetaData[] = {
				{ "Category", "HelpDocumentation" },
				{ "ModuleRelativePath", "Classes/Engine/DocumentationActor.h" },
				{ "ToolTip", "Link to a help document." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_DocumentLink = { UE4CodeGen_Private::EPropertyClass::Str, "DocumentLink", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040800000005, 1, nullptr, STRUCT_OFFSET(ADocumentationActor, DocumentLink), METADATA_PARAMS(NewProp_DocumentLink_MetaData, ARRAY_COUNT(NewProp_DocumentLink_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Billboard,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DocumentLink,
			};
#endif // WITH_EDITORONLY_DATA
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ADocumentationActor>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ADocumentationActor::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
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
	IMPLEMENT_CLASS(ADocumentationActor, 3903387195);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADocumentationActor(Z_Construct_UClass_ADocumentationActor, &ADocumentationActor::StaticClass, TEXT("/Script/Engine"), TEXT("ADocumentationActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADocumentationActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
