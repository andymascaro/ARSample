// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Matinee/InterpTrackInstSound.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackInstSound() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstSound_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstSound();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInst();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
// End Cross Module References
	void UInterpTrackInstSound::StaticRegisterNativesUInterpTrackInstSound()
	{
	}
	UClass* Z_Construct_UClass_UInterpTrackInstSound_NoRegister()
	{
		return UInterpTrackInstSound::StaticClass();
	}
	UClass* Z_Construct_UClass_UInterpTrackInstSound()
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
				{ "IncludePath", "Matinee/InterpTrackInstSound.h" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstSound.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayAudioComp_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstSound.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayAudioComp = { UE4CodeGen_Private::EPropertyClass::Object, "PlayAudioComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000082008, 1, nullptr, STRUCT_OFFSET(UInterpTrackInstSound, PlayAudioComp), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(NewProp_PlayAudioComp_MetaData, ARRAY_COUNT(NewProp_PlayAudioComp_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastUpdatePosition_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstSound.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LastUpdatePosition = { UE4CodeGen_Private::EPropertyClass::Float, "LastUpdatePosition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UInterpTrackInstSound, LastUpdatePosition), METADATA_PARAMS(NewProp_LastUpdatePosition_MetaData, ARRAY_COUNT(NewProp_LastUpdatePosition_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlayAudioComp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LastUpdatePosition,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UInterpTrackInstSound>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UInterpTrackInstSound::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00800080u,
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
	IMPLEMENT_CLASS(UInterpTrackInstSound, 529674505);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpTrackInstSound(Z_Construct_UClass_UInterpTrackInstSound, &UInterpTrackInstSound::StaticClass, TEXT("/Script/Engine"), TEXT("UInterpTrackInstSound"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackInstSound);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
