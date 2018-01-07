// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Matinee/InterpTrackInstAudioMaster.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackInstAudioMaster() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstAudioMaster_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstAudioMaster();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInst();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UInterpTrackInstAudioMaster::StaticRegisterNativesUInterpTrackInstAudioMaster()
	{
	}
	UClass* Z_Construct_UClass_UInterpTrackInstAudioMaster_NoRegister()
	{
		return UInterpTrackInstAudioMaster::StaticClass();
	}
	UClass* Z_Construct_UClass_UInterpTrackInstAudioMaster()
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
				{ "IncludePath", "Matinee/InterpTrackInstAudioMaster.h" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstAudioMaster.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UInterpTrackInstAudioMaster>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UInterpTrackInstAudioMaster::StaticClass,
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
	IMPLEMENT_CLASS(UInterpTrackInstAudioMaster, 412771471);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpTrackInstAudioMaster(Z_Construct_UClass_UInterpTrackInstAudioMaster, &UInterpTrackInstAudioMaster::StaticClass, TEXT("/Script/Engine"), TEXT("UInterpTrackInstAudioMaster"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackInstAudioMaster);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
