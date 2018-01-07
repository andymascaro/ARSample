// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/MovieSceneFwd.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneFwd() {}
// Cross Module References
	MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_EMovieScenePlayerStatus();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References
	static UEnum* EMovieScenePlayerStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MovieScene_EMovieScenePlayerStatus, Z_Construct_UPackage__Script_MovieScene(), TEXT("EMovieScenePlayerStatus"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMovieScenePlayerStatus(EMovieScenePlayerStatus_StaticEnum, TEXT("/Script/MovieScene"), TEXT("EMovieScenePlayerStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MovieScene_EMovieScenePlayerStatus_CRC() { return 471276234U; }
	UEnum* Z_Construct_UEnum_MovieScene_EMovieScenePlayerStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMovieScenePlayerStatus"), 0, Get_Z_Construct_UEnum_MovieScene_EMovieScenePlayerStatus_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMovieScenePlayerStatus::Stopped", (int64)EMovieScenePlayerStatus::Stopped },
				{ "EMovieScenePlayerStatus::Playing", (int64)EMovieScenePlayerStatus::Playing },
				{ "EMovieScenePlayerStatus::Recording", (int64)EMovieScenePlayerStatus::Recording },
				{ "EMovieScenePlayerStatus::Scrubbing", (int64)EMovieScenePlayerStatus::Scrubbing },
				{ "EMovieScenePlayerStatus::Jumping", (int64)EMovieScenePlayerStatus::Jumping },
				{ "EMovieScenePlayerStatus::Stepping", (int64)EMovieScenePlayerStatus::Stepping },
				{ "EMovieScenePlayerStatus::Paused", (int64)EMovieScenePlayerStatus::Paused },
				{ "EMovieScenePlayerStatus::MAX", (int64)EMovieScenePlayerStatus::MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/MovieSceneFwd.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MovieScene,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EMovieScenePlayerStatus",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EMovieScenePlayerStatus::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
