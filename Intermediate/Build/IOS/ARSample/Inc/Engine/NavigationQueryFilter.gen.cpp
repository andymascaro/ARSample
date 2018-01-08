// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/AI/Navigation/NavFilters/NavigationQueryFilter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavigationQueryFilter() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNavigationFilterFlags();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNavigationFilterArea();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UNavArea_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNavigationQueryFilter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNavigationQueryFilter();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FNavigationFilterFlags::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FNavigationFilterFlags_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNavigationFilterFlags, Z_Construct_UPackage__Script_Engine(), TEXT("NavigationFilterFlags"), sizeof(FNavigationFilterFlags), Get_Z_Construct_UScriptStruct_FNavigationFilterFlags_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNavigationFilterFlags(FNavigationFilterFlags::StaticStruct, TEXT("/Script/Engine"), TEXT("NavigationFilterFlags"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFNavigationFilterFlags
{
	FScriptStruct_Engine_StaticRegisterNativesFNavigationFilterFlags()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NavigationFilterFlags")),new UScriptStruct::TCppStructOps<FNavigationFilterFlags>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFNavigationFilterFlags;
	UScriptStruct* Z_Construct_UScriptStruct_FNavigationFilterFlags()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNavigationFilterFlags_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NavigationFilterFlags"), sizeof(FNavigationFilterFlags), Get_Z_Construct_UScriptStruct_FNavigationFilterFlags_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavFilters/NavigationQueryFilter.h" },
				{ "ToolTip", "Use UNavigationSystem.DescribeFilterFlags() to setup user friendly names of flags" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNavigationFilterFlags>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNavFlag15_MetaData[] = {
				{ "Category", "Flags" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavFilters/NavigationQueryFilter.h" },
			};
#endif
			auto NewProp_bNavFlag15_SetBit = [](void* Obj){ ((FNavigationFilterFlags*)Obj)->bNavFlag15 = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNavFlag15 = { UE4CodeGen_Private::EPropertyClass::Bool, "bNavFlag15", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FNavigationFilterFlags), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bNavFlag15_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bNavFlag15_MetaData, ARRAY_COUNT(NewProp_bNavFlag15_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNavFlag14_MetaData[] = {
				{ "Category", "Flags" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavFilters/NavigationQueryFilter.h" },
			};
#endif
			auto NewProp_bNavFlag14_SetBit = [](void* Obj){ ((FNavigationFilterFlags*)Obj)->bNavFlag14 = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNavFlag14 = { UE4CodeGen_Private::EPropertyClass::Bool, "bNavFlag14", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FNavigationFilterFlags), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bNavFlag14_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bNavFlag14_MetaData, ARRAY_COUNT(NewProp_bNavFlag14_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNavFlag13_MetaData[] = {
				{ "Category", "Flags" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavFilters/NavigationQueryFilter.h" },
			};
#endif
			auto NewProp_bNavFlag13_SetBit = [](void* Obj){ ((FNavigationFilterFlags*)Obj)->bNavFlag13 = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNavFlag13 = { UE4CodeGen_Private::EPropertyClass::Bool, "bNavFlag13", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FNavigationFilterFlags), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bNavFlag13_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bNavFlag13_MetaData, ARRAY_COUNT(NewProp_bNavFlag13_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNavFlag12_MetaData[] = {
				{ "Category", "Flags" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavFilters/NavigationQueryFilter.h" },
			};
#endif
			auto NewProp_bNavFlag12_SetBit = [](void* Obj){ ((FNavigationFilterFlags*)Obj)->bNavFlag12 = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNavFlag12 = { UE4CodeGen_Private::EPropertyClass::Bool, "bNavFlag12", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FNavigationFilterFlags), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bNavFlag12_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bNavFlag12_MetaData, ARRAY_COUNT(NewProp_bNavFlag12_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNavFlag11_MetaData[] = {
				{ "Category", "Flags" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavFilters/NavigationQueryFilter.h" },
			};
#endif
			auto NewProp_bNavFlag11_SetBit = [](void* Obj){ ((FNavigationFilterFlags*)Obj)->bNavFlag11 = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNavFlag11 = { UE4CodeGen_Private::EPropertyClass::Bool, "bNavFlag11", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FNavigationFilterFlags), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bNavFlag11_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bNavFlag11_MetaData, ARRAY_COUNT(NewProp_bNavFlag11_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNavFlag10_MetaData[] = {
				{ "Category", "Flags" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavFilters/NavigationQueryFilter.h" },
			};
#endif
			auto NewProp_bNavFlag10_SetBit = [](void* Obj){ ((FNavigationFilterFlags*)Obj)->bNavFlag10 = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNavFlag10 = { UE4CodeGen_Private::EPropertyClass::Bool, "bNavFlag10", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FNavigationFilterFlags), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bNavFlag10_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bNavFlag10_MetaData, ARRAY_COUNT(NewProp_bNavFlag10_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNavFlag9_MetaData[] = {
				{ "Category", "Flags" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavFilters/NavigationQueryFilter.h" },
			};
#endif
			auto NewProp_bNavFlag9_SetBit = [](void* Obj){ ((FNavigationFilterFlags*)Obj)->bNavFlag9 = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNavFlag9 = { UE4CodeGen_Private::EPropertyClass::Bool, "bNavFlag9", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FNavigationFilterFlags), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bNavFlag9_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bNavFlag9_MetaData, ARRAY_COUNT(NewProp_bNavFlag9_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNavFlag8_MetaData[] = {
				{ "Category", "Flags" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavFilters/NavigationQueryFilter.h" },
			};
#endif
			auto NewProp_bNavFlag8_SetBit = [](void* Obj){ ((FNavigationFilterFlags*)Obj)->bNavFlag8 = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNavFlag8 = { UE4CodeGen_Private::EPropertyClass::Bool, "bNavFlag8", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FNavigationFilterFlags), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bNavFlag8_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bNavFlag8_MetaData, ARRAY_COUNT(NewProp_bNavFlag8_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNavFlag7_MetaData[] = {
				{ "Category", "Flags" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavFilters/NavigationQueryFilter.h" },
			};
#endif
			auto NewProp_bNavFlag7_SetBit = [](void* Obj){ ((FNavigationFilterFlags*)Obj)->bNavFlag7 = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNavFlag7 = { UE4CodeGen_Private::EPropertyClass::Bool, "bNavFlag7", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FNavigationFilterFlags), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bNavFlag7_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bNavFlag7_MetaData, ARRAY_COUNT(NewProp_bNavFlag7_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNavFlag6_MetaData[] = {
				{ "Category", "Flags" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavFilters/NavigationQueryFilter.h" },
			};
#endif
			auto NewProp_bNavFlag6_SetBit = [](void* Obj){ ((FNavigationFilterFlags*)Obj)->bNavFlag6 = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNavFlag6 = { UE4CodeGen_Private::EPropertyClass::Bool, "bNavFlag6", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FNavigationFilterFlags), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bNavFlag6_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bNavFlag6_MetaData, ARRAY_COUNT(NewProp_bNavFlag6_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNavFlag5_MetaData[] = {
				{ "Category", "Flags" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavFilters/NavigationQueryFilter.h" },
			};
#endif
			auto NewProp_bNavFlag5_SetBit = [](void* Obj){ ((FNavigationFilterFlags*)Obj)->bNavFlag5 = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNavFlag5 = { UE4CodeGen_Private::EPropertyClass::Bool, "bNavFlag5", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FNavigationFilterFlags), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bNavFlag5_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bNavFlag5_MetaData, ARRAY_COUNT(NewProp_bNavFlag5_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNavFlag4_MetaData[] = {
				{ "Category", "Flags" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavFilters/NavigationQueryFilter.h" },
			};
#endif
			auto NewProp_bNavFlag4_SetBit = [](void* Obj){ ((FNavigationFilterFlags*)Obj)->bNavFlag4 = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNavFlag4 = { UE4CodeGen_Private::EPropertyClass::Bool, "bNavFlag4", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FNavigationFilterFlags), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bNavFlag4_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bNavFlag4_MetaData, ARRAY_COUNT(NewProp_bNavFlag4_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNavFlag3_MetaData[] = {
				{ "Category", "Flags" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavFilters/NavigationQueryFilter.h" },
			};
#endif
			auto NewProp_bNavFlag3_SetBit = [](void* Obj){ ((FNavigationFilterFlags*)Obj)->bNavFlag3 = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNavFlag3 = { UE4CodeGen_Private::EPropertyClass::Bool, "bNavFlag3", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FNavigationFilterFlags), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bNavFlag3_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bNavFlag3_MetaData, ARRAY_COUNT(NewProp_bNavFlag3_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNavFlag2_MetaData[] = {
				{ "Category", "Flags" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavFilters/NavigationQueryFilter.h" },
			};
#endif
			auto NewProp_bNavFlag2_SetBit = [](void* Obj){ ((FNavigationFilterFlags*)Obj)->bNavFlag2 = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNavFlag2 = { UE4CodeGen_Private::EPropertyClass::Bool, "bNavFlag2", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FNavigationFilterFlags), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bNavFlag2_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bNavFlag2_MetaData, ARRAY_COUNT(NewProp_bNavFlag2_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNavFlag1_MetaData[] = {
				{ "Category", "Flags" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavFilters/NavigationQueryFilter.h" },
			};
#endif
			auto NewProp_bNavFlag1_SetBit = [](void* Obj){ ((FNavigationFilterFlags*)Obj)->bNavFlag1 = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNavFlag1 = { UE4CodeGen_Private::EPropertyClass::Bool, "bNavFlag1", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FNavigationFilterFlags), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bNavFlag1_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bNavFlag1_MetaData, ARRAY_COUNT(NewProp_bNavFlag1_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNavFlag0_MetaData[] = {
				{ "Category", "Flags" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavFilters/NavigationQueryFilter.h" },
			};
#endif
			auto NewProp_bNavFlag0_SetBit = [](void* Obj){ ((FNavigationFilterFlags*)Obj)->bNavFlag0 = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNavFlag0 = { UE4CodeGen_Private::EPropertyClass::Bool, "bNavFlag0", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FNavigationFilterFlags), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bNavFlag0_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bNavFlag0_MetaData, ARRAY_COUNT(NewProp_bNavFlag0_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bNavFlag15,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bNavFlag14,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bNavFlag13,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bNavFlag12,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bNavFlag11,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bNavFlag10,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bNavFlag9,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bNavFlag8,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bNavFlag7,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bNavFlag6,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bNavFlag5,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bNavFlag4,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bNavFlag3,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bNavFlag2,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bNavFlag1,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bNavFlag0,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"NavigationFilterFlags",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FNavigationFilterFlags),
				alignof(FNavigationFilterFlags),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNavigationFilterFlags_CRC() { return 585344993U; }
class UScriptStruct* FNavigationFilterArea::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FNavigationFilterArea_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNavigationFilterArea, Z_Construct_UPackage__Script_Engine(), TEXT("NavigationFilterArea"), sizeof(FNavigationFilterArea), Get_Z_Construct_UScriptStruct_FNavigationFilterArea_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNavigationFilterArea(FNavigationFilterArea::StaticStruct, TEXT("/Script/Engine"), TEXT("NavigationFilterArea"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFNavigationFilterArea
{
	FScriptStruct_Engine_StaticRegisterNativesFNavigationFilterArea()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NavigationFilterArea")),new UScriptStruct::TCppStructOps<FNavigationFilterArea>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFNavigationFilterArea;
	UScriptStruct* Z_Construct_UScriptStruct_FNavigationFilterArea()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNavigationFilterArea_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NavigationFilterArea"), sizeof(FNavigationFilterArea), Get_Z_Construct_UScriptStruct_FNavigationFilterArea_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavFilters/NavigationQueryFilter.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNavigationFilterArea>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideEnteringCost_MetaData[] = {
				{ "Category", "Area" },
				{ "InlineEditConditionToggle", "" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavFilters/NavigationQueryFilter.h" },
			};
#endif
			auto NewProp_bOverrideEnteringCost_SetBit = [](void* Obj){ ((FNavigationFilterArea*)Obj)->bOverrideEnteringCost = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideEnteringCost = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverrideEnteringCost", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FNavigationFilterArea), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bOverrideEnteringCost_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bOverrideEnteringCost_MetaData, ARRAY_COUNT(NewProp_bOverrideEnteringCost_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideTravelCost_MetaData[] = {
				{ "Category", "Area" },
				{ "InlineEditConditionToggle", "" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavFilters/NavigationQueryFilter.h" },
			};
#endif
			auto NewProp_bOverrideTravelCost_SetBit = [](void* Obj){ ((FNavigationFilterArea*)Obj)->bOverrideTravelCost = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideTravelCost = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverrideTravelCost", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FNavigationFilterArea), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bOverrideTravelCost_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bOverrideTravelCost_MetaData, ARRAY_COUNT(NewProp_bOverrideTravelCost_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsExcluded_MetaData[] = {
				{ "Category", "Area" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavFilters/NavigationQueryFilter.h" },
				{ "ToolTip", "mark as excluded" },
			};
#endif
			auto NewProp_bIsExcluded_SetBit = [](void* Obj){ ((FNavigationFilterArea*)Obj)->bIsExcluded = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsExcluded = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsExcluded", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FNavigationFilterArea), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsExcluded_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsExcluded_MetaData, ARRAY_COUNT(NewProp_bIsExcluded_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnteringCostOverride_MetaData[] = {
				{ "Category", "Area" },
				{ "ClampMin", "0" },
				{ "EditCondition", "bOverrideEnteringCost" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavFilters/NavigationQueryFilter.h" },
				{ "ToolTip", "override for entering cost" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EnteringCostOverride = { UE4CodeGen_Private::EPropertyClass::Float, "EnteringCostOverride", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FNavigationFilterArea, EnteringCostOverride), METADATA_PARAMS(NewProp_EnteringCostOverride_MetaData, ARRAY_COUNT(NewProp_EnteringCostOverride_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TravelCostOverride_MetaData[] = {
				{ "Category", "Area" },
				{ "ClampMin", "0.001000" },
				{ "EditCondition", "bOverrideTravelCost" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavFilters/NavigationQueryFilter.h" },
				{ "ToolTip", "override for travel cost" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TravelCostOverride = { UE4CodeGen_Private::EPropertyClass::Float, "TravelCostOverride", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FNavigationFilterArea, TravelCostOverride), METADATA_PARAMS(NewProp_TravelCostOverride_MetaData, ARRAY_COUNT(NewProp_TravelCostOverride_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AreaClass_MetaData[] = {
				{ "Category", "Area" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavFilters/NavigationQueryFilter.h" },
				{ "ToolTip", "navigation area class" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_AreaClass = { UE4CodeGen_Private::EPropertyClass::Class, "AreaClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000001, 1, nullptr, STRUCT_OFFSET(FNavigationFilterArea, AreaClass), Z_Construct_UClass_UNavArea_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_AreaClass_MetaData, ARRAY_COUNT(NewProp_AreaClass_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bOverrideEnteringCost,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bOverrideTravelCost,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsExcluded,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EnteringCostOverride,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TravelCostOverride,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AreaClass,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"NavigationFilterArea",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FNavigationFilterArea),
				alignof(FNavigationFilterArea),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNavigationFilterArea_CRC() { return 691493912U; }
	void UNavigationQueryFilter::StaticRegisterNativesUNavigationQueryFilter()
	{
	}
	UClass* Z_Construct_UClass_UNavigationQueryFilter_NoRegister()
	{
		return UNavigationQueryFilter::StaticClass();
	}
	UClass* Z_Construct_UClass_UNavigationQueryFilter()
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
				{ "BlueprintType", "true" },
				{ "IncludePath", "AI/Navigation/NavFilters/NavigationQueryFilter.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavFilters/NavigationQueryFilter.h" },
				{ "ToolTip", "Class containing definition of a navigation query filter" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExcludeFlags_MetaData[] = {
				{ "Category", "Filter" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavFilters/NavigationQueryFilter.h" },
				{ "ToolTip", "forbidden flags of navigation nodes" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExcludeFlags = { UE4CodeGen_Private::EPropertyClass::Struct, "ExcludeFlags", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UNavigationQueryFilter, ExcludeFlags), Z_Construct_UScriptStruct_FNavigationFilterFlags, METADATA_PARAMS(NewProp_ExcludeFlags_MetaData, ARRAY_COUNT(NewProp_ExcludeFlags_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IncludeFlags_MetaData[] = {
				{ "Category", "Filter" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavFilters/NavigationQueryFilter.h" },
				{ "ToolTip", "required flags of navigation nodes" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_IncludeFlags = { UE4CodeGen_Private::EPropertyClass::Struct, "IncludeFlags", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UNavigationQueryFilter, IncludeFlags), Z_Construct_UScriptStruct_FNavigationFilterFlags, METADATA_PARAMS(NewProp_IncludeFlags_MetaData, ARRAY_COUNT(NewProp_IncludeFlags_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Areas_MetaData[] = {
				{ "Category", "Filter" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavFilters/NavigationQueryFilter.h" },
				{ "ToolTip", "list of overrides for navigation areas" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Areas = { UE4CodeGen_Private::EPropertyClass::Array, "Areas", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UNavigationQueryFilter, Areas), METADATA_PARAMS(NewProp_Areas_MetaData, ARRAY_COUNT(NewProp_Areas_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Areas_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Areas", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FNavigationFilterArea, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ExcludeFlags,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IncludeFlags,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Areas,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Areas_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UNavigationQueryFilter>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UNavigationQueryFilter::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100081u,
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
	IMPLEMENT_CLASS(UNavigationQueryFilter, 165835678);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNavigationQueryFilter(Z_Construct_UClass_UNavigationQueryFilter, &UNavigationQueryFilter::StaticClass, TEXT("/Script/Engine"), TEXT("UNavigationQueryFilter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNavigationQueryFilter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
