// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/ReflectionCapture.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReflectionCapture() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AReflectionCapture_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AReflectionCapture();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UReflectionCaptureComponent_NoRegister();
// End Cross Module References
	void AReflectionCapture::StaticRegisterNativesAReflectionCapture()
	{
	}
	UClass* Z_Construct_UClass_AReflectionCapture_NoRegister()
	{
		return AReflectionCapture::StaticClass();
	}
	UClass* Z_Construct_UClass_AReflectionCapture()
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
				{ "IncludePath", "Engine/ReflectionCapture.h" },
				{ "ModuleRelativePath", "Classes/Engine/ReflectionCapture.h" },
			};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CaptureOffsetComponent_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/Engine/ReflectionCapture.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CaptureOffsetComponent = { UE4CodeGen_Private::EPropertyClass::Object, "CaptureOffsetComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000800080008, 1, nullptr, STRUCT_OFFSET(AReflectionCapture, CaptureOffsetComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(NewProp_CaptureOffsetComponent_MetaData, ARRAY_COUNT(NewProp_CaptureOffsetComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpriteComponent_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/Engine/ReflectionCapture.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpriteComponent = { UE4CodeGen_Private::EPropertyClass::Object, "SpriteComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000800080008, 1, nullptr, STRUCT_OFFSET(AReflectionCapture, SpriteComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(NewProp_SpriteComponent_MetaData, ARRAY_COUNT(NewProp_SpriteComponent_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CaptureComponent_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "DecalActor" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/Engine/ReflectionCapture.h" },
				{ "ToolTip", "Reflection capture component." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CaptureComponent = { UE4CodeGen_Private::EPropertyClass::Object, "CaptureComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(AReflectionCapture, CaptureComponent), Z_Construct_UClass_UReflectionCaptureComponent_NoRegister, METADATA_PARAMS(NewProp_CaptureComponent_MetaData, ARRAY_COUNT(NewProp_CaptureComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CaptureOffsetComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpriteComponent,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CaptureComponent,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AReflectionCapture>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AReflectionCapture::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880081u,
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
	IMPLEMENT_CLASS(AReflectionCapture, 1292144049);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AReflectionCapture(Z_Construct_UClass_AReflectionCapture, &AReflectionCapture::StaticClass, TEXT("/Script/Engine"), TEXT("AReflectionCapture"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AReflectionCapture);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
