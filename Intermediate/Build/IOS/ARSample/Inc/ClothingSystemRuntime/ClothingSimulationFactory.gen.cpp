// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/ClothingSimulationFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClothingSimulationFactory() {}
// Cross Module References
	CLOTHINGSYSTEMRUNTIME_API UClass* Z_Construct_UClass_UClothingSimulationFactoryNv_NoRegister();
	CLOTHINGSYSTEMRUNTIME_API UClass* Z_Construct_UClass_UClothingSimulationFactoryNv();
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* Z_Construct_UClass_UClothingSimulationFactory();
	UPackage* Z_Construct_UPackage__Script_ClothingSystemRuntime();
// End Cross Module References
	void UClothingSimulationFactoryNv::StaticRegisterNativesUClothingSimulationFactoryNv()
	{
	}
	UClass* Z_Construct_UClass_UClothingSimulationFactoryNv_NoRegister()
	{
		return UClothingSimulationFactoryNv::StaticClass();
	}
	UClass* Z_Construct_UClass_UClothingSimulationFactoryNv()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UClothingSimulationFactory,
				(UObject* (*)())Z_Construct_UPackage__Script_ClothingSystemRuntime,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "ClothingSimulationFactory.h" },
				{ "ModuleRelativePath", "Public/ClothingSimulationFactory.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UClothingSimulationFactoryNv>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UClothingSimulationFactoryNv::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
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
	IMPLEMENT_CLASS(UClothingSimulationFactoryNv, 3293945949);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UClothingSimulationFactoryNv(Z_Construct_UClass_UClothingSimulationFactoryNv, &UClothingSimulationFactoryNv::StaticClass, TEXT("/Script/ClothingSystemRuntime"), TEXT("UClothingSimulationFactoryNv"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClothingSimulationFactoryNv);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
