// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Distributions/DistributionVector.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDistributionVector() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDistributionVectorMirrorFlags();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDistributionVectorLockFlags();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistribution();
	ENGINE_API UClass* Z_Construct_UClass_UDistributionVector_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector4Distribution();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDistributionLookupTable();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVectorDistribution();
	ENGINE_API UClass* Z_Construct_UClass_UDistributionVector();
	ENGINE_API UClass* Z_Construct_UClass_UDistribution();
// End Cross Module References
	static UEnum* EDistributionVectorMirrorFlags_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EDistributionVectorMirrorFlags, Z_Construct_UPackage__Script_Engine(), TEXT("EDistributionVectorMirrorFlags"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDistributionVectorMirrorFlags(EDistributionVectorMirrorFlags_StaticEnum, TEXT("/Script/Engine"), TEXT("EDistributionVectorMirrorFlags"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EDistributionVectorMirrorFlags_CRC() { return 3957884850U; }
	UEnum* Z_Construct_UEnum_Engine_EDistributionVectorMirrorFlags()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDistributionVectorMirrorFlags"), 0, Get_Z_Construct_UEnum_Engine_EDistributionVectorMirrorFlags_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDVMF_Same", (int64)EDVMF_Same },
				{ "EDVMF_Different", (int64)EDVMF_Different },
				{ "EDVMF_Mirror", (int64)EDVMF_Mirror },
				{ "EDVMF_MAX", (int64)EDVMF_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "EDVMF_Different.DisplayName", "Different" },
				{ "EDVMF_Mirror.DisplayName", "Mirror" },
				{ "EDVMF_Same.DisplayName", "Same" },
				{ "ModuleRelativePath", "Classes/Distributions/DistributionVector.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EDistributionVectorMirrorFlags",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EDistributionVectorMirrorFlags",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EDistributionVectorLockFlags_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EDistributionVectorLockFlags, Z_Construct_UPackage__Script_Engine(), TEXT("EDistributionVectorLockFlags"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDistributionVectorLockFlags(EDistributionVectorLockFlags_StaticEnum, TEXT("/Script/Engine"), TEXT("EDistributionVectorLockFlags"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EDistributionVectorLockFlags_CRC() { return 2908579437U; }
	UEnum* Z_Construct_UEnum_Engine_EDistributionVectorLockFlags()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDistributionVectorLockFlags"), 0, Get_Z_Construct_UEnum_Engine_EDistributionVectorLockFlags_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDVLF_None", (int64)EDVLF_None },
				{ "EDVLF_XY", (int64)EDVLF_XY },
				{ "EDVLF_XZ", (int64)EDVLF_XZ },
				{ "EDVLF_YZ", (int64)EDVLF_YZ },
				{ "EDVLF_XYZ", (int64)EDVLF_XYZ },
				{ "EDVLF_MAX", (int64)EDVLF_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "EDVLF_None.DisplayName", "None" },
				{ "EDVLF_XY.DisplayName", "XY" },
				{ "EDVLF_XYZ.DisplayName", "XYZ" },
				{ "EDVLF_XZ.DisplayName", "XZ" },
				{ "EDVLF_YZ.DisplayName", "YZ" },
				{ "ModuleRelativePath", "Classes/Distributions/DistributionVector.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EDistributionVectorLockFlags",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EDistributionVectorLockFlags",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FRawDistributionVector::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FRawDistributionVector_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRawDistributionVector, Z_Construct_UPackage__Script_Engine(), TEXT("RawDistributionVector"), sizeof(FRawDistributionVector), Get_Z_Construct_UScriptStruct_FRawDistributionVector_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRawDistributionVector(FRawDistributionVector::StaticStruct, TEXT("/Script/Engine"), TEXT("RawDistributionVector"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFRawDistributionVector
{
	FScriptStruct_Engine_StaticRegisterNativesFRawDistributionVector()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RawDistributionVector")),new UScriptStruct::TCppStructOps<FRawDistributionVector>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFRawDistributionVector;
	UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRawDistributionVector_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RawDistributionVector"), sizeof(FRawDistributionVector), Get_Z_Construct_UScriptStruct_FRawDistributionVector_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Distributions/DistributionVector.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRawDistributionVector>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Distribution_MetaData[] = {
				{ "Category", "RawDistributionVector" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/Distributions/DistributionVector.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Distribution = { UE4CodeGen_Private::EPropertyClass::Object, "Distribution", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000002080009, 1, nullptr, STRUCT_OFFSET(FRawDistributionVector, Distribution), Z_Construct_UClass_UDistributionVector_NoRegister, METADATA_PARAMS(NewProp_Distribution_MetaData, ARRAY_COUNT(NewProp_Distribution_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxValueVec_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Distributions/DistributionVector.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaxValueVec = { UE4CodeGen_Private::EPropertyClass::Struct, "MaxValueVec", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FRawDistributionVector, MaxValueVec), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_MaxValueVec_MetaData, ARRAY_COUNT(NewProp_MaxValueVec_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinValueVec_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Distributions/DistributionVector.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_MinValueVec = { UE4CodeGen_Private::EPropertyClass::Struct, "MinValueVec", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FRawDistributionVector, MinValueVec), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_MinValueVec_MetaData, ARRAY_COUNT(NewProp_MinValueVec_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxValue_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Distributions/DistributionVector.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxValue = { UE4CodeGen_Private::EPropertyClass::Float, "MaxValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FRawDistributionVector, MaxValue), METADATA_PARAMS(NewProp_MaxValue_MetaData, ARRAY_COUNT(NewProp_MaxValue_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinValue_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Distributions/DistributionVector.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinValue = { UE4CodeGen_Private::EPropertyClass::Float, "MinValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FRawDistributionVector, MinValue), METADATA_PARAMS(NewProp_MinValue_MetaData, ARRAY_COUNT(NewProp_MinValue_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Distribution,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxValueVec,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MinValueVec,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MinValue,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				Z_Construct_UScriptStruct_FRawDistribution,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"RawDistributionVector",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000205),
				sizeof(FRawDistributionVector),
				alignof(FRawDistributionVector),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRawDistributionVector_CRC() { return 2822226849U; }
	UScriptStruct* Z_Construct_UScriptStruct_FVector4Distribution()
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

		struct FVector4Distribution
		{
			FDistributionLookupTable Table;
		};

#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVector4Distribution_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Vector4Distribution"), sizeof(FVector4Distribution), Get_Z_Construct_UScriptStruct_FVector4Distribution_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Distributions/DistributionVector.h" },
				{ "ToolTip", "Type-safe 4-vector distribution." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Table_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Distributions/DistributionVector.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Table = { UE4CodeGen_Private::EPropertyClass::Struct, "Table", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FVector4Distribution, Table), Z_Construct_UScriptStruct_FDistributionLookupTable, METADATA_PARAMS(NewProp_Table_MetaData, ARRAY_COUNT(NewProp_Table_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Table,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				nullptr,
				"Vector4Distribution",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000008),
				sizeof(FVector4Distribution),
				alignof(FVector4Distribution),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVector4Distribution_CRC() { return 1686015007U; }
	UScriptStruct* Z_Construct_UScriptStruct_FVectorDistribution()
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

		struct FVectorDistribution
		{
			FDistributionLookupTable Table;
		};

#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVectorDistribution_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VectorDistribution"), sizeof(FVectorDistribution), Get_Z_Construct_UScriptStruct_FVectorDistribution_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Distributions/DistributionVector.h" },
				{ "ToolTip", "Type-safe vector distribution." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Table_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Distributions/DistributionVector.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Table = { UE4CodeGen_Private::EPropertyClass::Struct, "Table", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FVectorDistribution, Table), Z_Construct_UScriptStruct_FDistributionLookupTable, METADATA_PARAMS(NewProp_Table_MetaData, ARRAY_COUNT(NewProp_Table_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Table,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				nullptr,
				"VectorDistribution",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000008),
				sizeof(FVectorDistribution),
				alignof(FVectorDistribution),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVectorDistribution_CRC() { return 4169873610U; }
	void UDistributionVector::StaticRegisterNativesUDistributionVector()
	{
	}
	UClass* Z_Construct_UClass_UDistributionVector_NoRegister()
	{
		return UDistributionVector::StaticClass();
	}
	UClass* Z_Construct_UClass_UDistributionVector()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UDistribution,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Object" },
				{ "IncludePath", "Distributions/DistributionVector.h" },
				{ "ModuleRelativePath", "Classes/Distributions/DistributionVector.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBakedDataSuccesfully_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Distributions/DistributionVector.h" },
			};
#endif
			auto NewProp_bBakedDataSuccesfully_SetBit = [](void* Obj){ ((UDistributionVector*)Obj)->bBakedDataSuccesfully = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBakedDataSuccesfully = { UE4CodeGen_Private::EPropertyClass::Bool, "bBakedDataSuccesfully", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UDistributionVector), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bBakedDataSuccesfully_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bBakedDataSuccesfully_MetaData, ARRAY_COUNT(NewProp_bBakedDataSuccesfully_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsDirty_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Distributions/DistributionVector.h" },
				{ "ToolTip", "Set internally when the distribution is updated so that that FRawDistribution can know to update itself" },
			};
#endif
			auto NewProp_bIsDirty_SetBit = [](void* Obj){ ((UDistributionVector*)Obj)->bIsDirty = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDirty = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsDirty", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UDistributionVector), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsDirty_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsDirty_MetaData, ARRAY_COUNT(NewProp_bIsDirty_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanBeBaked_MetaData[] = {
				{ "Category", "Baked" },
				{ "ModuleRelativePath", "Classes/Distributions/DistributionVector.h" },
				{ "ToolTip", "Can this variable be baked out to a FRawDistribution? Should be true 99% of the time" },
			};
#endif
			auto NewProp_bCanBeBaked_SetBit = [](void* Obj){ ((UDistributionVector*)Obj)->bCanBeBaked = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanBeBaked = { UE4CodeGen_Private::EPropertyClass::Bool, "bCanBeBaked", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UDistributionVector), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCanBeBaked_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCanBeBaked_MetaData, ARRAY_COUNT(NewProp_bCanBeBaked_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bBakedDataSuccesfully,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsDirty,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCanBeBaked,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UDistributionVector>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UDistributionVector::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00303081u,
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
	IMPLEMENT_CLASS(UDistributionVector, 2583701666);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDistributionVector(Z_Construct_UClass_UDistributionVector, &UDistributionVector::StaticClass, TEXT("/Script/Engine"), TEXT("UDistributionVector"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDistributionVector);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
