// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/TextRenderActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextRenderActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ATextRenderActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ATextRenderActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
// End Cross Module References
	void ATextRenderActor::StaticRegisterNativesATextRenderActor()
	{
	}
	UClass* Z_Construct_UClass_ATextRenderActor_NoRegister()
	{
		return ATextRenderActor::StaticClass();
	}
	UClass* Z_Construct_UClass_ATextRenderActor()
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
				{ "IgnoreCategoryKeywordsInSubclasses", "true" },
				{ "IncludePath", "Engine/TextRenderActor.h" },
				{ "ModuleRelativePath", "Classes/Engine/TextRenderActor.h" },
			};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpriteComponent_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/Engine/TextRenderActor.h" },
				{ "ToolTip", "Reference to the billboard component" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpriteComponent = { UE4CodeGen_Private::EPropertyClass::Object, "SpriteComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000800080008, 1, nullptr, STRUCT_OFFSET(ATextRenderActor, SpriteComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(NewProp_SpriteComponent_MetaData, ARRAY_COUNT(NewProp_SpriteComponent_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextRender_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "TextRenderActor" },
				{ "EditInline", "true" },
				{ "ExposeFunctionCategories", "Rendering|Components|TextRender" },
				{ "ModuleRelativePath", "Classes/Engine/TextRenderActor.h" },
				{ "ToolTip", "Component to render a text in 3d with a font" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextRender = { UE4CodeGen_Private::EPropertyClass::Object, "TextRender", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(ATextRenderActor, TextRender), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(NewProp_TextRender_MetaData, ARRAY_COUNT(NewProp_TextRender_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpriteComponent,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TextRender,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ATextRenderActor>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ATextRenderActor::StaticClass,
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
	IMPLEMENT_CLASS(ATextRenderActor, 2785109614);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATextRenderActor(Z_Construct_UClass_ATextRenderActor, &ATextRenderActor::StaticClass, TEXT("/Script/Engine"), TEXT("ATextRenderActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATextRenderActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
