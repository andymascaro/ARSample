// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/SceneCapture.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSceneCapture() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ASceneCapture_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ASceneCapture();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ASceneCapture::StaticRegisterNativesASceneCapture()
	{
	}
	UClass* Z_Construct_UClass_ASceneCapture_NoRegister()
	{
		return ASceneCapture::StaticClass();
	}
	UClass* Z_Construct_UClass_ASceneCapture()
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
				{ "IncludePath", "Engine/SceneCapture.h" },
				{ "ModuleRelativePath", "Classes/Engine/SceneCapture.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/Engine/SceneCapture.h" },
				{ "ToolTip", "To display the 3d camera in the editor." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComp = { UE4CodeGen_Private::EPropertyClass::Object, "MeshComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000080008, 1, nullptr, STRUCT_OFFSET(ASceneCapture, MeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_MeshComp_MetaData, ARRAY_COUNT(NewProp_MeshComp_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MeshComp,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ASceneCapture>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ASceneCapture::StaticClass,
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
	IMPLEMENT_CLASS(ASceneCapture, 3027482321);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASceneCapture(Z_Construct_UClass_ASceneCapture, &ASceneCapture::StaticClass, TEXT("/Script/Engine"), TEXT("ASceneCapture"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASceneCapture);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
