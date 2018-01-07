// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/SplineMeshActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSplineMeshActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ASplineMeshActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ASplineMeshActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_USplineMeshComponent_NoRegister();
// End Cross Module References
	void ASplineMeshActor::StaticRegisterNativesASplineMeshActor()
	{
	}
	UClass* Z_Construct_UClass_ASplineMeshActor_NoRegister()
	{
		return ASplineMeshActor::StaticClass();
	}
	UClass* Z_Construct_UClass_ASplineMeshActor()
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
				{ "ChildCanTick", "" },
				{ "HideCategories", "Input" },
				{ "IgnoreCategoryKeywordsInSubclasses", "true" },
				{ "IncludePath", "Engine/SplineMeshActor.h" },
				{ "IsConversionRoot", "true" },
				{ "ModuleRelativePath", "Classes/Engine/SplineMeshActor.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
				{ "ToolTip", "SplineMeshActor is an actor with a SplineMeshComponent.\n\n@see USplineMeshComponent" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineMeshComponent_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "SplineMeshActor" },
				{ "EditInline", "true" },
				{ "ExposeFunctionCategories", "Mesh,Rendering,Physics,Components|StaticMesh,Components|SplineMesh" },
				{ "ModuleRelativePath", "Classes/Engine/SplineMeshActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SplineMeshComponent = { UE4CodeGen_Private::EPropertyClass::Object, "SplineMeshComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(ASplineMeshActor, SplineMeshComponent), Z_Construct_UClass_USplineMeshComponent_NoRegister, METADATA_PARAMS(NewProp_SplineMeshComponent_MetaData, ARRAY_COUNT(NewProp_SplineMeshComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SplineMeshComponent,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ASplineMeshActor>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ASplineMeshActor::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
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
	IMPLEMENT_CLASS(ASplineMeshActor, 3451140927);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASplineMeshActor(Z_Construct_UClass_ASplineMeshActor, &ASplineMeshActor::StaticClass, TEXT("/Script/Engine"), TEXT("ASplineMeshActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASplineMeshActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
