// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Matinee/InterpTrackInst.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackInst() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInst_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInst();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UInterpTrackInst::StaticRegisterNativesUInterpTrackInst()
	{
	}
	UClass* Z_Construct_UClass_UInterpTrackInst_NoRegister()
	{
		return UInterpTrackInst::StaticClass();
	}
	UClass* Z_Construct_UClass_UInterpTrackInst()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Matinee/InterpTrackInst.h" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInst.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UInterpTrackInst>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UInterpTrackInst::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00080080u,
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
	IMPLEMENT_CLASS(UInterpTrackInst, 2925607074);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpTrackInst(Z_Construct_UClass_UInterpTrackInst, &UInterpTrackInst::StaticClass, TEXT("/Script/Engine"), TEXT("UInterpTrackInst"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackInst);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
