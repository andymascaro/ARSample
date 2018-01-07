// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/MicroTransactionBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMicroTransactionBase() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMicroTransactionResult();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMicroTransactionDelegate();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPurchaseInfo();
	ENGINE_API UClass* Z_Construct_UClass_UMicroTransactionBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMicroTransactionBase();
	ENGINE_API UClass* Z_Construct_UClass_UPlatformInterfaceBase();
// End Cross Module References
	static UEnum* EMicroTransactionResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMicroTransactionResult, Z_Construct_UPackage__Script_Engine(), TEXT("EMicroTransactionResult"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMicroTransactionResult(EMicroTransactionResult_StaticEnum, TEXT("/Script/Engine"), TEXT("EMicroTransactionResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EMicroTransactionResult_CRC() { return 647898880U; }
	UEnum* Z_Construct_UEnum_Engine_EMicroTransactionResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMicroTransactionResult"), 0, Get_Z_Construct_UEnum_Engine_EMicroTransactionResult_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "MTR_Succeeded", (int64)MTR_Succeeded },
				{ "MTR_Failed", (int64)MTR_Failed },
				{ "MTR_Canceled", (int64)MTR_Canceled },
				{ "MTR_RestoredFromServer", (int64)MTR_RestoredFromServer },
				{ "MTR_MAX", (int64)MTR_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/MicroTransactionBase.h" },
				{ "ToolTip", "Result of a purchase." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EMicroTransactionResult",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EMicroTransactionResult",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EMicroTransactionDelegate_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMicroTransactionDelegate, Z_Construct_UPackage__Script_Engine(), TEXT("EMicroTransactionDelegate"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMicroTransactionDelegate(EMicroTransactionDelegate_StaticEnum, TEXT("/Script/Engine"), TEXT("EMicroTransactionDelegate"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EMicroTransactionDelegate_CRC() { return 2002810711U; }
	UEnum* Z_Construct_UEnum_Engine_EMicroTransactionDelegate()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMicroTransactionDelegate"), 0, Get_Z_Construct_UEnum_Engine_EMicroTransactionDelegate_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "MTD_PurchaseQueryComplete", (int64)MTD_PurchaseQueryComplete },
				{ "MTD_PurchaseComplete", (int64)MTD_PurchaseComplete },
				{ "MTD_MAX", (int64)MTD_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/MicroTransactionBase.h" },
				{ "MTD_PurchaseComplete.ToolTip", "Data:Result code, and identifier of the product that completed.\nType:Custom\nDesc:IntValue will have one of the enums in EMicroTransactionResult, and StringValue\n     will have the Identifier from the PurchaseInfo that was bought with BeginPurchase\n     If MTR_Failed was returned, then LastError and LastErrorSolution should be filled\n             out with the most recent localized and possible resolutions." },
				{ "MTD_PurchaseQueryComplete.ToolTip", "Data:None\nDesc:QueryForAvailablePurchases() is complete and AvailableProducts is ready for use." },
				{ "ToolTip", "All the types of delegate callbacks that a MicroTransaction subclass may receive from C++." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EMicroTransactionDelegate",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EMicroTransactionDelegate",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FPurchaseInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FPurchaseInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPurchaseInfo, Z_Construct_UPackage__Script_Engine(), TEXT("PurchaseInfo"), sizeof(FPurchaseInfo), Get_Z_Construct_UScriptStruct_FPurchaseInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPurchaseInfo(FPurchaseInfo::StaticStruct, TEXT("/Script/Engine"), TEXT("PurchaseInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFPurchaseInfo
{
	FScriptStruct_Engine_StaticRegisterNativesFPurchaseInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PurchaseInfo")),new UScriptStruct::TCppStructOps<FPurchaseInfo>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFPurchaseInfo;
	UScriptStruct* Z_Construct_UScriptStruct_FPurchaseInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPurchaseInfo_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PurchaseInfo"), sizeof(FPurchaseInfo), Get_Z_Construct_UScriptStruct_FPurchaseInfo_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/MicroTransactionBase.h" },
				{ "ToolTip", "Purchase information structure" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPurchaseInfo>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayPrice_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/MicroTransactionBase.h" },
				{ "ToolTip", "Price displayable to the user" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_DisplayPrice = { UE4CodeGen_Private::EPropertyClass::Str, "DisplayPrice", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FPurchaseInfo, DisplayPrice), METADATA_PARAMS(NewProp_DisplayPrice_MetaData, ARRAY_COUNT(NewProp_DisplayPrice_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayDescription_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/MicroTransactionBase.h" },
				{ "ToolTip", "Description displayable to the user" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_DisplayDescription = { UE4CodeGen_Private::EPropertyClass::Str, "DisplayDescription", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FPurchaseInfo, DisplayDescription), METADATA_PARAMS(NewProp_DisplayDescription_MetaData, ARRAY_COUNT(NewProp_DisplayDescription_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/MicroTransactionBase.h" },
				{ "ToolTip", "Name displayable to the user" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_DisplayName = { UE4CodeGen_Private::EPropertyClass::Str, "DisplayName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FPurchaseInfo, DisplayName), METADATA_PARAMS(NewProp_DisplayName_MetaData, ARRAY_COUNT(NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/MicroTransactionBase.h" },
				{ "ToolTip", "Unique identifier for the purchase" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Identifier = { UE4CodeGen_Private::EPropertyClass::Str, "Identifier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FPurchaseInfo, Identifier), METADATA_PARAMS(NewProp_Identifier_MetaData, ARRAY_COUNT(NewProp_Identifier_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DisplayPrice,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DisplayDescription,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DisplayName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Identifier,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"PurchaseInfo",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FPurchaseInfo),
				alignof(FPurchaseInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPurchaseInfo_CRC() { return 2516377597U; }
	void UMicroTransactionBase::StaticRegisterNativesUMicroTransactionBase()
	{
	}
	UClass* Z_Construct_UClass_UMicroTransactionBase_NoRegister()
	{
		return UMicroTransactionBase::StaticClass();
	}
	UClass* Z_Construct_UClass_UMicroTransactionBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UPlatformInterfaceBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Engine/MicroTransactionBase.h" },
				{ "ModuleRelativePath", "Classes/Engine/MicroTransactionBase.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastErrorSolution_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/MicroTransactionBase.h" },
				{ "ToolTip", "In case of errors, this will describe possible solutions (if there are any)" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_LastErrorSolution = { UE4CodeGen_Private::EPropertyClass::Str, "LastErrorSolution", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMicroTransactionBase, LastErrorSolution), METADATA_PARAMS(NewProp_LastErrorSolution_MetaData, ARRAY_COUNT(NewProp_LastErrorSolution_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastError_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/MicroTransactionBase.h" },
				{ "ToolTip", "In case of errors, this will describe the most recent error" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_LastError = { UE4CodeGen_Private::EPropertyClass::Str, "LastError", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMicroTransactionBase, LastError), METADATA_PARAMS(NewProp_LastError_MetaData, ARRAY_COUNT(NewProp_LastError_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AvailableProducts_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/MicroTransactionBase.h" },
				{ "ToolTip", "The list of products available to purchase, filled out by the time a MTD_PurchaseQueryComplete is fired" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AvailableProducts = { UE4CodeGen_Private::EPropertyClass::Array, "AvailableProducts", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMicroTransactionBase, AvailableProducts), METADATA_PARAMS(NewProp_AvailableProducts_MetaData, ARRAY_COUNT(NewProp_AvailableProducts_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AvailableProducts_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "AvailableProducts", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FPurchaseInfo, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LastErrorSolution,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LastError,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AvailableProducts,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AvailableProducts_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMicroTransactionBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMicroTransactionBase::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00800088u,
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
	IMPLEMENT_CLASS(UMicroTransactionBase, 3696365136);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMicroTransactionBase(Z_Construct_UClass_UMicroTransactionBase, &UMicroTransactionBase::StaticClass, TEXT("/Script/Engine"), TEXT("UMicroTransactionBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMicroTransactionBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
