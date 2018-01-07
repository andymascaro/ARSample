// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/ARTrackingQuality.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARTrackingQuality() {}
// Cross Module References
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARTrackingQuality();
	UPackage* Z_Construct_UPackage__Script_AugmentedReality();
// End Cross Module References
	static UEnum* EARTrackingQuality_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARTrackingQuality, Z_Construct_UPackage__Script_AugmentedReality(), TEXT("EARTrackingQuality"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EARTrackingQuality(EARTrackingQuality_StaticEnum, TEXT("/Script/AugmentedReality"), TEXT("EARTrackingQuality"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AugmentedReality_EARTrackingQuality_CRC() { return 2482920421U; }
	UEnum* Z_Construct_UEnum_AugmentedReality_EARTrackingQuality()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AugmentedReality();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EARTrackingQuality"), 0, Get_Z_Construct_UEnum_AugmentedReality_EARTrackingQuality_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EARTrackingQuality::NotAvailable", (int64)EARTrackingQuality::NotAvailable },
				{ "EARTrackingQuality::Limited", (int64)EARTrackingQuality::Limited },
				{ "EARTrackingQuality::Normal", (int64)EARTrackingQuality::Normal },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Category", "AR" },
				{ "Experimental", "" },
				{ "Limited.ToolTip", "The tracking quality is limited, relying only on the device's motion." },
				{ "ModuleRelativePath", "Public/ARTrackingQuality.h" },
				{ "Normal.ToolTip", "The tracking quality is good." },
				{ "NotAvailable.ToolTip", "The tracking quality is not available." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EARTrackingQuality",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EARTrackingQuality",
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
