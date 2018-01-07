// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/VectorField/VectorFieldVolume.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVectorFieldVolume() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AVectorFieldVolume_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AVectorFieldVolume();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UVectorFieldComponent_NoRegister();
// End Cross Module References
	void AVectorFieldVolume::StaticRegisterNativesAVectorFieldVolume()
	{
	}
	UClass* Z_Construct_UClass_AVectorFieldVolume_NoRegister()
	{
		return AVectorFieldVolume::StaticClass();
	}
	UClass* Z_Construct_UClass_AVectorFieldVolume()
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
				{ "HideCategories", "Object Advanced Collision" },
				{ "IncludePath", "VectorField/VectorFieldVolume.h" },
				{ "ModuleRelativePath", "Classes/VectorField/VectorFieldVolume.h" },
			};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpriteComponent_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/VectorField/VectorFieldVolume.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpriteComponent = { UE4CodeGen_Private::EPropertyClass::Object, "SpriteComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000800080008, 1, nullptr, STRUCT_OFFSET(AVectorFieldVolume, SpriteComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(NewProp_SpriteComponent_MetaData, ARRAY_COUNT(NewProp_SpriteComponent_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VectorFieldComponent_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "VectorFieldVolume" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/VectorField/VectorFieldVolume.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VectorFieldComponent = { UE4CodeGen_Private::EPropertyClass::Object, "VectorFieldComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(AVectorFieldVolume, VectorFieldComponent), Z_Construct_UClass_UVectorFieldComponent_NoRegister, METADATA_PARAMS(NewProp_VectorFieldComponent_MetaData, ARRAY_COUNT(NewProp_VectorFieldComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpriteComponent,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VectorFieldComponent,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AVectorFieldVolume>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AVectorFieldVolume::StaticClass,
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
	IMPLEMENT_CLASS(AVectorFieldVolume, 929873890);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVectorFieldVolume(Z_Construct_UClass_AVectorFieldVolume, &AVectorFieldVolume::StaticClass, TEXT("/Script/Engine"), TEXT("AVectorFieldVolume"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVectorFieldVolume);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
