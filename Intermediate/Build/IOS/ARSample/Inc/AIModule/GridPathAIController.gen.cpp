// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/GridPathAIController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridPathAIController() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_AGridPathAIController_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_AGridPathAIController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void AGridPathAIController::StaticRegisterNativesAGridPathAIController()
	{
	}
	UClass* Z_Construct_UClass_AGridPathAIController_NoRegister()
	{
		return AGridPathAIController::StaticClass();
	}
	UClass* Z_Construct_UClass_AGridPathAIController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AAIController,
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DevelopmentStatus", "Experimental" },
				{ "HideCategories", "Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "GridPathAIController.h" },
				{ "ModuleRelativePath", "Classes/GridPathAIController.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AGridPathAIController>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AGridPathAIController::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00800280u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGridPathAIController, 4218393669);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGridPathAIController(Z_Construct_UClass_AGridPathAIController, &AGridPathAIController::StaticClass, TEXT("/Script/AIModule"), TEXT("AGridPathAIController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGridPathAIController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
