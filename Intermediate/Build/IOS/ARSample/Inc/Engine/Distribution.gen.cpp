// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Distributions/Distribution.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDistribution() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_DistributionParamMode();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistribution();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDistributionLookupTable();
	ENGINE_API UClass* Z_Construct_UClass_UDistribution_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDistribution();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* DistributionParamMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_DistributionParamMode, Z_Construct_UPackage__Script_Engine(), TEXT("DistributionParamMode"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_DistributionParamMode(DistributionParamMode_StaticEnum, TEXT("/Script/Engine"), TEXT("DistributionParamMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_DistributionParamMode_CRC() { return 171505367U; }
	UEnum* Z_Construct_UEnum_Engine_DistributionParamMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("DistributionParamMode"), 0, Get_Z_Construct_UEnum_Engine_DistributionParamMode_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "DPM_Normal", (int64)DPM_Normal },
				{ "DPM_Abs", (int64)DPM_Abs },
				{ "DPM_Direct", (int64)DPM_Direct },
				{ "DPM_MAX", (int64)DPM_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Distributions/Distribution.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"DistributionParamMode",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"DistributionParamMode",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	UScriptStruct* Z_Construct_UScriptStruct_FRawDistribution()
	{
		struct FDistributionLookupTable
		{
			uint8 Op;
			uint8 EntryCount;
			uint8 EntryStride;
			uint8 SubEntryStride;
			float TimeScale;
			float TimeBias;
			TArray<float> Values;
			uint8 LockFlag;
		};

		struct FRawDistribution
		{
			FDistributionLookupTable Table;
		};

#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRawDistribution_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RawDistribution"), sizeof(FRawDistribution), Get_Z_Construct_UScriptStruct_FRawDistribution_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Distributions/Distribution.h" },
				{ "ToolTip", "Base class for raw (baked out) Distribution type" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Table_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Distributions/Distribution.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Table = { UE4CodeGen_Private::EPropertyClass::Struct, "Table", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FRawDistribution, Table), Z_Construct_UScriptStruct_FDistributionLookupTable, METADATA_PARAMS(NewProp_Table_MetaData, ARRAY_COUNT(NewProp_Table_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Table,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				nullptr,
				"RawDistribution",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000008),
				sizeof(FRawDistribution),
				alignof(FRawDistribution),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRawDistribution_CRC() { return 845005546U; }
	UScriptStruct* Z_Construct_UScriptStruct_FDistributionLookupTable()
	{
		struct FDistributionLookupTable
		{
			uint8 Op;
			uint8 EntryCount;
			uint8 EntryStride;
			uint8 SubEntryStride;
			float TimeScale;
			float TimeBias;
			TArray<float> Values;
			uint8 LockFlag;
		};

#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDistributionLookupTable_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DistributionLookupTable"), sizeof(FDistributionLookupTable), Get_Z_Construct_UScriptStruct_FDistributionLookupTable_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Distributions/Distribution.h" },
				{ "ToolTip", "Lookup table for distributions." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LockFlag_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Distributions/Distribution.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_LockFlag = { UE4CodeGen_Private::EPropertyClass::Byte, "LockFlag", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FDistributionLookupTable, LockFlag), nullptr, METADATA_PARAMS(NewProp_LockFlag_MetaData, ARRAY_COUNT(NewProp_LockFlag_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Distributions/Distribution.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Values = { UE4CodeGen_Private::EPropertyClass::Array, "Values", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FDistributionLookupTable, Values), METADATA_PARAMS(NewProp_Values_MetaData, ARRAY_COUNT(NewProp_Values_MetaData)) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Values_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "Values", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeBias_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Distributions/Distribution.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeBias = { UE4CodeGen_Private::EPropertyClass::Float, "TimeBias", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FDistributionLookupTable, TimeBias), METADATA_PARAMS(NewProp_TimeBias_MetaData, ARRAY_COUNT(NewProp_TimeBias_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeScale_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Distributions/Distribution.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeScale = { UE4CodeGen_Private::EPropertyClass::Float, "TimeScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FDistributionLookupTable, TimeScale), METADATA_PARAMS(NewProp_TimeScale_MetaData, ARRAY_COUNT(NewProp_TimeScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubEntryStride_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Distributions/Distribution.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_SubEntryStride = { UE4CodeGen_Private::EPropertyClass::Byte, "SubEntryStride", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FDistributionLookupTable, SubEntryStride), nullptr, METADATA_PARAMS(NewProp_SubEntryStride_MetaData, ARRAY_COUNT(NewProp_SubEntryStride_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntryStride_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Distributions/Distribution.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_EntryStride = { UE4CodeGen_Private::EPropertyClass::Byte, "EntryStride", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FDistributionLookupTable, EntryStride), nullptr, METADATA_PARAMS(NewProp_EntryStride_MetaData, ARRAY_COUNT(NewProp_EntryStride_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntryCount_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Distributions/Distribution.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_EntryCount = { UE4CodeGen_Private::EPropertyClass::Byte, "EntryCount", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FDistributionLookupTable, EntryCount), nullptr, METADATA_PARAMS(NewProp_EntryCount_MetaData, ARRAY_COUNT(NewProp_EntryCount_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Op_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Distributions/Distribution.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Op = { UE4CodeGen_Private::EPropertyClass::Byte, "Op", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FDistributionLookupTable, Op), nullptr, METADATA_PARAMS(NewProp_Op_MetaData, ARRAY_COUNT(NewProp_Op_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LockFlag,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Values,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Values_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TimeBias,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TimeScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SubEntryStride,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EntryStride,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EntryCount,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Op,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				nullptr,
				"DistributionLookupTable",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000008),
				sizeof(FDistributionLookupTable),
				alignof(FDistributionLookupTable),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDistributionLookupTable_CRC() { return 256932105U; }
	void UDistribution::StaticRegisterNativesUDistribution()
	{
	}
	UClass* Z_Construct_UClass_UDistribution_NoRegister()
	{
		return UDistribution::StaticClass();
	}
	UClass* Z_Construct_UClass_UDistribution()
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
				{ "HideCategories", "Object" },
				{ "IncludePath", "Distributions/Distribution.h" },
				{ "ModuleRelativePath", "Classes/Distributions/Distribution.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UDistribution>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UDistribution::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00283081u,
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
	IMPLEMENT_CLASS(UDistribution, 1754782155);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDistribution(Z_Construct_UClass_UDistribution, &UDistribution::StaticClass, TEXT("/Script/Engine"), TEXT("UDistribution"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDistribution);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
