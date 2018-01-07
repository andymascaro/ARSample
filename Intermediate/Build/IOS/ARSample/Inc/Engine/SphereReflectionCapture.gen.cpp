// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/SphereReflectionCapture.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSphereReflectionCapture() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ASphereReflectionCapture_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ASphereReflectionCapture();
	ENGINE_API UClass* Z_Construct_UClass_AReflectionCapture();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UDrawSphereComponent_NoRegister();
// End Cross Module References
	void ASphereReflectionCapture::StaticRegisterNativesASphereReflectionCapture()
	{
	}
	UClass* Z_Construct_UClass_ASphereReflectionCapture_NoRegister()
	{
		return ASphereReflectionCapture::StaticClass();
	}
	UClass* Z_Construct_UClass_ASphereReflectionCapture()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AReflectionCapture,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Collision Attachment Actor Collision Attachment Actor" },
				{ "IncludePath", "Engine/SphereReflectionCapture.h" },
				{ "ModuleRelativePath", "Classes/Engine/SphereReflectionCapture.h" },
				{ "ToolTip", "Actor used to capture the scene for reflection in a sphere shape.\n@see https://docs.unrealengine.com/latest/INT/Resources/ContentExamples/Reflections/1_4" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrawCaptureRadius_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/Engine/SphereReflectionCapture.h" },
				{ "ToolTip", "Sphere component used to visualize the capture radius" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DrawCaptureRadius = { UE4CodeGen_Private::EPropertyClass::Object, "DrawCaptureRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000080008, 1, nullptr, STRUCT_OFFSET(ASphereReflectionCapture, DrawCaptureRadius), Z_Construct_UClass_UDrawSphereComponent_NoRegister, METADATA_PARAMS(NewProp_DrawCaptureRadius_MetaData, ARRAY_COUNT(NewProp_DrawCaptureRadius_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DrawCaptureRadius,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ASphereReflectionCapture>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ASphereReflectionCapture::StaticClass,
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
	IMPLEMENT_CLASS(ASphereReflectionCapture, 1384536134);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASphereReflectionCapture(Z_Construct_UClass_ASphereReflectionCapture, &ASphereReflectionCapture::StaticClass, TEXT("/Script/Engine"), TEXT("ASphereReflectionCapture"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASphereReflectionCapture);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
