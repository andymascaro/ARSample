// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Sections/MovieSceneParticleSection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneParticleSection() {}
// Cross Module References
	MOVIESCENETRACKS_API UEnum* Z_Construct_UEnum_MovieSceneTracks_EParticleKey();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneParticleSection_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneParticleSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FIntegralCurve();
// End Cross Module References
	static UEnum* EParticleKey_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MovieSceneTracks_EParticleKey, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("EParticleKey"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EParticleKey(EParticleKey_StaticEnum, TEXT("/Script/MovieSceneTracks"), TEXT("EParticleKey"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MovieSceneTracks_EParticleKey_CRC() { return 1601050369U; }
	UEnum* Z_Construct_UEnum_MovieSceneTracks_EParticleKey()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EParticleKey"), 0, Get_Z_Construct_UEnum_MovieSceneTracks_EParticleKey_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EParticleKey::Activate", (int64)EParticleKey::Activate },
				{ "EParticleKey::Deactivate", (int64)EParticleKey::Deactivate },
				{ "EParticleKey::Trigger", (int64)EParticleKey::Trigger },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Sections/MovieSceneParticleSection.h" },
				{ "ToolTip", "Defines the types of particle keys." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MovieSceneTracks,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EParticleKey",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EParticleKey::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UMovieSceneParticleSection::StaticRegisterNativesUMovieSceneParticleSection()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneParticleSection_NoRegister()
	{
		return UMovieSceneParticleSection::StaticClass();
	}
	UClass* Z_Construct_UClass_UMovieSceneParticleSection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
				(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Sections/MovieSceneParticleSection.h" },
				{ "ModuleRelativePath", "Public/Sections/MovieSceneParticleSection.h" },
				{ "ToolTip", "Particle section, for particle toggling and triggering." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParticleKeys_MetaData[] = {
				{ "ModuleRelativePath", "Public/Sections/MovieSceneParticleSection.h" },
				{ "ToolTip", "Curve containing the particle keys." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParticleKeys = { UE4CodeGen_Private::EPropertyClass::Struct, "ParticleKeys", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMovieSceneParticleSection, ParticleKeys), Z_Construct_UScriptStruct_FIntegralCurve, METADATA_PARAMS(NewProp_ParticleKeys_MetaData, ARRAY_COUNT(NewProp_ParticleKeys_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParticleKeys,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMovieSceneParticleSection>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMovieSceneParticleSection::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00280080u,
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
	IMPLEMENT_CLASS(UMovieSceneParticleSection, 1873635097);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneParticleSection(Z_Construct_UClass_UMovieSceneParticleSection, &UMovieSceneParticleSection::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieSceneParticleSection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneParticleSection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
