// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Distributions/DistributionFloat.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDistributionFloat() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistribution();
	ENGINE_API UClass* Z_Construct_UClass_UDistributionFloat_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFloatDistribution();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDistributionLookupTable();
	ENGINE_API UClass* Z_Construct_UClass_UDistributionFloat();
	ENGINE_API UClass* Z_Construct_UClass_UDistribution();
// End Cross Module References
class UScriptStruct* FRawDistributionFloat::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FRawDistributionFloat_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRawDistributionFloat, Z_Construct_UPackage__Script_Engine(), TEXT("RawDistributionFloat"), sizeof(FRawDistributionFloat), Get_Z_Construct_UScriptStruct_FRawDistributionFloat_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRawDistributionFloat(FRawDistributionFloat::StaticStruct, TEXT("/Script/Engine"), TEXT("RawDistributionFloat"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFRawDistributionFloat
{
	FScriptStruct_Engine_StaticRegisterNativesFRawDistributionFloat()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RawDistributionFloat")),new UScriptStruct::TCppStructOps<FRawDistributionFloat>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFRawDistributionFloat;
	UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRawDistributionFloat_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RawDistributionFloat"), sizeof(FRawDistributionFloat), Get_Z_Construct_UScriptStruct_FRawDistributionFloat_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Distributions/DistributionFloat.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRawDistributionFloat>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Distribution_MetaData[] = {
				{ "Category", "RawDistributionFloat" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/Distributions/DistributionFloat.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Distribution = { UE4CodeGen_Private::EPropertyClass::Object, "Distribution", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000002080009, 1, nullptr, STRUCT_OFFSET(FRawDistributionFloat, Distribution), Z_Construct_UClass_UDistributionFloat_NoRegister, METADATA_PARAMS(NewProp_Distribution_MetaData, ARRAY_COUNT(NewProp_Distribution_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxValue_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Distributions/DistributionFloat.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxValue = { UE4CodeGen_Private::EPropertyClass::Float, "MaxValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FRawDistributionFloat, MaxValue), METADATA_PARAMS(NewProp_MaxValue_MetaData, ARRAY_COUNT(NewProp_MaxValue_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinValue_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Distributions/DistributionFloat.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinValue = { UE4CodeGen_Private::EPropertyClass::Float, "MinValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FRawDistributionFloat, MinValue), METADATA_PARAMS(NewProp_MinValue_MetaData, ARRAY_COUNT(NewProp_MinValue_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Distribution,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MinValue,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				Z_Construct_UScriptStruct_FRawDistribution,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"RawDistributionFloat",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000205),
				sizeof(FRawDistributionFloat),
				alignof(FRawDistributionFloat),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRawDistributionFloat_CRC() { return 740611658U; }
	UScriptStruct* Z_Construct_UScriptStruct_FFloatDistribution()
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

		struct FFloatDistribution
		{
			FDistributionLookupTable Table;
		};

#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFloatDistribution_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FloatDistribution"), sizeof(FFloatDistribution), Get_Z_Construct_UScriptStruct_FFloatDistribution_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Distributions/DistributionFloat.h" },
				{ "ToolTip", "Type-safe floating point distribution." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Table_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Distributions/DistributionFloat.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Table = { UE4CodeGen_Private::EPropertyClass::Struct, "Table", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FFloatDistribution, Table), Z_Construct_UScriptStruct_FDistributionLookupTable, METADATA_PARAMS(NewProp_Table_MetaData, ARRAY_COUNT(NewProp_Table_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Table,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				nullptr,
				"FloatDistribution",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000008),
				sizeof(FFloatDistribution),
				alignof(FFloatDistribution),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFloatDistribution_CRC() { return 3338078522U; }
	void UDistributionFloat::StaticRegisterNativesUDistributionFloat()
	{
	}
	UClass* Z_Construct_UClass_UDistributionFloat_NoRegister()
	{
		return UDistributionFloat::StaticClass();
	}
	UClass* Z_Construct_UClass_UDistributionFloat()
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
				{ "IncludePath", "Distributions/DistributionFloat.h" },
				{ "ModuleRelativePath", "Classes/Distributions/DistributionFloat.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBakedDataSuccesfully_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Distributions/DistributionFloat.h" },
			};
#endif
			auto NewProp_bBakedDataSuccesfully_SetBit = [](void* Obj){ ((UDistributionFloat*)Obj)->bBakedDataSuccesfully = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBakedDataSuccesfully = { UE4CodeGen_Private::EPropertyClass::Bool, "bBakedDataSuccesfully", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UDistributionFloat), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bBakedDataSuccesfully_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bBakedDataSuccesfully_MetaData, ARRAY_COUNT(NewProp_bBakedDataSuccesfully_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanBeBaked_MetaData[] = {
				{ "Category", "Baked" },
				{ "ModuleRelativePath", "Classes/Distributions/DistributionFloat.h" },
				{ "ToolTip", "Can this variable be baked out to a FRawDistribution? Should be true 99% of the time" },
			};
#endif
			auto NewProp_bCanBeBaked_SetBit = [](void* Obj){ ((UDistributionFloat*)Obj)->bCanBeBaked = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanBeBaked = { UE4CodeGen_Private::EPropertyClass::Bool, "bCanBeBaked", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UDistributionFloat), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCanBeBaked_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCanBeBaked_MetaData, ARRAY_COUNT(NewProp_bCanBeBaked_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bBakedDataSuccesfully,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCanBeBaked,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UDistributionFloat>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UDistributionFloat::StaticClass,
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
	IMPLEMENT_CLASS(UDistributionFloat, 553916352);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDistributionFloat(Z_Construct_UClass_UDistributionFloat, &UDistributionFloat::StaticClass, TEXT("/Script/Engine"), TEXT("UDistributionFloat"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDistributionFloat);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
