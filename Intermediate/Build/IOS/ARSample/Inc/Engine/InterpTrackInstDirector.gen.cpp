// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Matinee/InterpTrackInstDirector.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackInstDirector() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstDirector_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstDirector();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInst();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void UInterpTrackInstDirector::StaticRegisterNativesUInterpTrackInstDirector()
	{
	}
	UClass* Z_Construct_UClass_UInterpTrackInstDirector_NoRegister()
	{
		return UInterpTrackInstDirector::StaticClass();
	}
	UClass* Z_Construct_UClass_UInterpTrackInstDirector()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UInterpTrackInst,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Matinee/InterpTrackInstDirector.h" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstDirector.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldViewTarget_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstDirector.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OldViewTarget = { UE4CodeGen_Private::EPropertyClass::Object, "OldViewTarget", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UInterpTrackInstDirector, OldViewTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(NewProp_OldViewTarget_MetaData, ARRAY_COUNT(NewProp_OldViewTarget_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OldViewTarget,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UInterpTrackInstDirector>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UInterpTrackInstDirector::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00080080u,
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
	IMPLEMENT_CLASS(UInterpTrackInstDirector, 3709434747);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpTrackInstDirector(Z_Construct_UClass_UInterpTrackInstDirector, &UInterpTrackInstDirector::StaticClass, TEXT("/Script/Engine"), TEXT("UInterpTrackInstDirector"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackInstDirector);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
