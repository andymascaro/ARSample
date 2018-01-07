// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Matinee/InterpGroupInstCamera.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpGroupInstCamera() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterpGroupInstCamera_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpGroupInstCamera();
	ENGINE_API UClass* Z_Construct_UClass_UInterpGroupInst();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UInterpGroupInstCamera::StaticRegisterNativesUInterpGroupInstCamera()
	{
	}
	UClass* Z_Construct_UClass_UInterpGroupInstCamera_NoRegister()
	{
		return UInterpGroupInstCamera::StaticClass();
	}
	UClass* Z_Construct_UClass_UInterpGroupInstCamera()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UInterpGroupInst,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Matinee/InterpGroupInstCamera.h" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpGroupInstCamera.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UInterpGroupInstCamera>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UInterpGroupInstCamera::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00000080u,
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
	IMPLEMENT_CLASS(UInterpGroupInstCamera, 3978904770);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpGroupInstCamera(Z_Construct_UClass_UInterpGroupInstCamera, &UInterpGroupInstCamera::StaticClass, TEXT("/Script/Engine"), TEXT("UInterpGroupInstCamera"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpGroupInstCamera);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
