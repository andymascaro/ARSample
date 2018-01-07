// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/AI/Navigation/NavigationAvoidanceTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavigationAvoidanceTypes() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNavAvoidanceMask();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
class UScriptStruct* FNavAvoidanceMask::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FNavAvoidanceMask_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNavAvoidanceMask, Z_Construct_UPackage__Script_Engine(), TEXT("NavAvoidanceMask"), sizeof(FNavAvoidanceMask), Get_Z_Construct_UScriptStruct_FNavAvoidanceMask_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNavAvoidanceMask(FNavAvoidanceMask::StaticStruct, TEXT("/Script/Engine"), TEXT("NavAvoidanceMask"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFNavAvoidanceMask
{
	FScriptStruct_Engine_StaticRegisterNativesFNavAvoidanceMask()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NavAvoidanceMask")),new UScriptStruct::TCppStructOps<FNavAvoidanceMask>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFNavAvoidanceMask;
	UScriptStruct* Z_Construct_UScriptStruct_FNavAvoidanceMask()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNavAvoidanceMask_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NavAvoidanceMask"), sizeof(FNavAvoidanceMask), Get_Z_Construct_UScriptStruct_FNavAvoidanceMask_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationAvoidanceTypes.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNavAvoidanceMask>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGroup31_MetaData[] = {
				{ "Category", "Group" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationAvoidanceTypes.h" },
			};
#endif
			auto NewProp_bGroup31_SetBit = [](void* Obj){ ((FNavAvoidanceMask*)Obj)->bGroup31 = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGroup31 = { UE4CodeGen_Private::EPropertyClass::Bool, "bGroup31", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FNavAvoidanceMask), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bGroup31_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bGroup31_MetaData, ARRAY_COUNT(NewProp_bGroup31_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGroup30_MetaData[] = {
				{ "Category", "Group" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationAvoidanceTypes.h" },
			};
#endif
			auto NewProp_bGroup30_SetBit = [](void* Obj){ ((FNavAvoidanceMask*)Obj)->bGroup30 = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGroup30 = { UE4CodeGen_Private::EPropertyClass::Bool, "bGroup30", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FNavAvoidanceMask), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bGroup30_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bGroup30_MetaData, ARRAY_COUNT(NewProp_bGroup30_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGroup29_MetaData[] = {
				{ "Category", "Group" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationAvoidanceTypes.h" },
			};
#endif
			auto NewProp_bGroup29_SetBit = [](void* Obj){ ((FNavAvoidanceMask*)Obj)->bGroup29 = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGroup29 = { UE4CodeGen_Private::EPropertyClass::Bool, "bGroup29", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FNavAvoidanceMask), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bGroup29_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bGroup29_MetaData, ARRAY_COUNT(NewProp_bGroup29_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGroup28_MetaData[] = {
				{ "Category", "Group" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationAvoidanceTypes.h" },
			};
#endif
			auto NewProp_bGroup28_SetBit = [](void* Obj){ ((FNavAvoidanceMask*)Obj)->bGroup28 = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGroup28 = { UE4CodeGen_Private::EPropertyClass::Bool, "bGroup28", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FNavAvoidanceMask), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bGroup28_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bGroup28_MetaData, ARRAY_COUNT(NewProp_bGroup28_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGroup27_MetaData[] = {
				{ "Category", "Group" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationAvoidanceTypes.h" },
			};
#endif
			auto NewProp_bGroup27_SetBit = [](void* Obj){ ((FNavAvoidanceMask*)Obj)->bGroup27 = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGroup27 = { UE4CodeGen_Private::EPropertyClass::Bool, "bGroup27", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FNavAvoidanceMask), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bGroup27_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bGroup27_MetaData, ARRAY_COUNT(NewProp_bGroup27_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGroup26_MetaData[] = {
				{ "Category", "Group" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationAvoidanceTypes.h" },
			};
#endif
			auto NewProp_bGroup26_SetBit = [](void* Obj){ ((FNavAvoidanceMask*)Obj)->bGroup26 = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGroup26 = { UE4CodeGen_Private::EPropertyClass::Bool, "bGroup26", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FNavAvoidanceMask), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bGroup26_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bGroup26_MetaData, ARRAY_COUNT(NewProp_bGroup26_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGroup25_MetaData[] = {
				{ "Category", "Group" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationAvoidanceTypes.h" },
			};
#endif
			auto NewProp_bGroup25_SetBit = [](void* Obj){ ((FNavAvoidanceMask*)Obj)->bGroup25 = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGroup25 = { UE4CodeGen_Private::EPropertyClass::Bool, "bGroup25", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FNavAvoidanceMask), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bGroup25_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bGroup25_MetaData, ARRAY_COUNT(NewProp_bGroup25_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGroup24_MetaData[] = {
				{ "Category", "Group" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationAvoidanceTypes.h" },
			};
#endif
			auto NewProp_bGroup24_SetBit = [](void* Obj){ ((FNavAvoidanceMask*)Obj)->bGroup24 = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGroup24 = { UE4CodeGen_Private::EPropertyClass::Bool, "bGroup24", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FNavAvoidanceMask), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bGroup24_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bGroup24_MetaData, ARRAY_COUNT(NewProp_bGroup24_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGroup23_MetaData[] = {
				{ "Category", "Group" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationAvoidanceTypes.h" },
			};
#endif
			auto NewProp_bGroup23_SetBit = [](void* Obj){ ((FNavAvoidanceMask*)Obj)->bGroup23 = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGroup23 = { UE4CodeGen_Private::EPropertyClass::Bool, "bGroup23", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FNavAvoidanceMask), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bGroup23_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bGroup23_MetaData, ARRAY_COUNT(NewProp_bGroup23_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGroup22_MetaData[] = {
				{ "Category", "Group" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationAvoidanceTypes.h" },
			};
#endif
			auto NewProp_bGroup22_SetBit = [](void* Obj){ ((FNavAvoidanceMask*)Obj)->bGroup22 = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGroup22 = { UE4CodeGen_Private::EPropertyClass::Bool, "bGroup22", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FNavAvoidanceMask), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bGroup22_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bGroup22_MetaData, ARRAY_COUNT(NewProp_bGroup22_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGroup21_MetaData[] = {
				{ "Category", "Group" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationAvoidanceTypes.h" },
			};
#endif
			auto NewProp_bGroup21_SetBit = [](void* Obj){ ((FNavAvoidanceMask*)Obj)->bGroup21 = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGroup21 = { UE4CodeGen_Private::EPropertyClass::Bool, "bGroup21", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FNavAvoidanceMask), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bGroup21_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bGroup21_MetaData, ARRAY_COUNT(NewProp_bGroup21_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGroup20_MetaData[] = {
				{ "Category", "Group" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationAvoidanceTypes.h" },
			};
#endif
			auto NewProp_bGroup20_SetBit = [](void* Obj){ ((FNavAvoidanceMask*)Obj)->bGroup20 = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGroup20 = { UE4CodeGen_Private::EPropertyClass::Bool, "bGroup20", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FNavAvoidanceMask), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bGroup20_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bGroup20_MetaData, ARRAY_COUNT(NewProp_bGroup20_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGroup19_MetaData[] = {
				{ "Category", "Group" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationAvoidanceTypes.h" },
			};
#endif
			auto NewProp_bGroup19_SetBit = [](void* Obj){ ((FNavAvoidanceMask*)Obj)->bGroup19 = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGroup19 = { UE4CodeGen_Private::EPropertyClass::Bool, "bGroup19", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FNavAvoidanceMask), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bGroup19_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bGroup19_MetaData, ARRAY_COUNT(NewProp_bGroup19_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGroup18_MetaData[] = {
				{ "Category", "Group" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationAvoidanceTypes.h" },
			};
#endif
			auto NewProp_bGroup18_SetBit = [](void* Obj){ ((FNavAvoidanceMask*)Obj)->bGroup18 = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGroup18 = { UE4CodeGen_Private::EPropertyClass::Bool, "bGroup18", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FNavAvoidanceMask), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bGroup18_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bGroup18_MetaData, ARRAY_COUNT(NewProp_bGroup18_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGroup17_MetaData[] = {
				{ "Category", "Group" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationAvoidanceTypes.h" },
			};
#endif
			auto NewProp_bGroup17_SetBit = [](void* Obj){ ((FNavAvoidanceMask*)Obj)->bGroup17 = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGroup17 = { UE4CodeGen_Private::EPropertyClass::Bool, "bGroup17", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FNavAvoidanceMask), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bGroup17_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bGroup17_MetaData, ARRAY_COUNT(NewProp_bGroup17_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGroup16_MetaData[] = {
				{ "Category", "Group" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationAvoidanceTypes.h" },
			};
#endif
			auto NewProp_bGroup16_SetBit = [](void* Obj){ ((FNavAvoidanceMask*)Obj)->bGroup16 = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGroup16 = { UE4CodeGen_Private::EPropertyClass::Bool, "bGroup16", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FNavAvoidanceMask), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bGroup16_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bGroup16_MetaData, ARRAY_COUNT(NewProp_bGroup16_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGroup15_MetaData[] = {
				{ "Category", "Group" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationAvoidanceTypes.h" },
			};
#endif
			auto NewProp_bGroup15_SetBit = [](void* Obj){ ((FNavAvoidanceMask*)Obj)->bGroup15 = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGroup15 = { UE4CodeGen_Private::EPropertyClass::Bool, "bGroup15", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FNavAvoidanceMask), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bGroup15_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bGroup15_MetaData, ARRAY_COUNT(NewProp_bGroup15_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGroup14_MetaData[] = {
				{ "Category", "Group" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationAvoidanceTypes.h" },
			};
#endif
			auto NewProp_bGroup14_SetBit = [](void* Obj){ ((FNavAvoidanceMask*)Obj)->bGroup14 = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGroup14 = { UE4CodeGen_Private::EPropertyClass::Bool, "bGroup14", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FNavAvoidanceMask), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bGroup14_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bGroup14_MetaData, ARRAY_COUNT(NewProp_bGroup14_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGroup13_MetaData[] = {
				{ "Category", "Group" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationAvoidanceTypes.h" },
			};
#endif
			auto NewProp_bGroup13_SetBit = [](void* Obj){ ((FNavAvoidanceMask*)Obj)->bGroup13 = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGroup13 = { UE4CodeGen_Private::EPropertyClass::Bool, "bGroup13", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FNavAvoidanceMask), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bGroup13_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bGroup13_MetaData, ARRAY_COUNT(NewProp_bGroup13_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGroup12_MetaData[] = {
				{ "Category", "Group" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationAvoidanceTypes.h" },
			};
#endif
			auto NewProp_bGroup12_SetBit = [](void* Obj){ ((FNavAvoidanceMask*)Obj)->bGroup12 = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGroup12 = { UE4CodeGen_Private::EPropertyClass::Bool, "bGroup12", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FNavAvoidanceMask), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bGroup12_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bGroup12_MetaData, ARRAY_COUNT(NewProp_bGroup12_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGroup11_MetaData[] = {
				{ "Category", "Group" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationAvoidanceTypes.h" },
			};
#endif
			auto NewProp_bGroup11_SetBit = [](void* Obj){ ((FNavAvoidanceMask*)Obj)->bGroup11 = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGroup11 = { UE4CodeGen_Private::EPropertyClass::Bool, "bGroup11", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FNavAvoidanceMask), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bGroup11_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bGroup11_MetaData, ARRAY_COUNT(NewProp_bGroup11_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGroup10_MetaData[] = {
				{ "Category", "Group" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationAvoidanceTypes.h" },
			};
#endif
			auto NewProp_bGroup10_SetBit = [](void* Obj){ ((FNavAvoidanceMask*)Obj)->bGroup10 = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGroup10 = { UE4CodeGen_Private::EPropertyClass::Bool, "bGroup10", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FNavAvoidanceMask), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bGroup10_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bGroup10_MetaData, ARRAY_COUNT(NewProp_bGroup10_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGroup9_MetaData[] = {
				{ "Category", "Group" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationAvoidanceTypes.h" },
			};
#endif
			auto NewProp_bGroup9_SetBit = [](void* Obj){ ((FNavAvoidanceMask*)Obj)->bGroup9 = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGroup9 = { UE4CodeGen_Private::EPropertyClass::Bool, "bGroup9", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FNavAvoidanceMask), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bGroup9_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bGroup9_MetaData, ARRAY_COUNT(NewProp_bGroup9_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGroup8_MetaData[] = {
				{ "Category", "Group" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationAvoidanceTypes.h" },
			};
#endif
			auto NewProp_bGroup8_SetBit = [](void* Obj){ ((FNavAvoidanceMask*)Obj)->bGroup8 = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGroup8 = { UE4CodeGen_Private::EPropertyClass::Bool, "bGroup8", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FNavAvoidanceMask), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bGroup8_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bGroup8_MetaData, ARRAY_COUNT(NewProp_bGroup8_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGroup7_MetaData[] = {
				{ "Category", "Group" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationAvoidanceTypes.h" },
			};
#endif
			auto NewProp_bGroup7_SetBit = [](void* Obj){ ((FNavAvoidanceMask*)Obj)->bGroup7 = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGroup7 = { UE4CodeGen_Private::EPropertyClass::Bool, "bGroup7", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FNavAvoidanceMask), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bGroup7_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bGroup7_MetaData, ARRAY_COUNT(NewProp_bGroup7_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGroup6_MetaData[] = {
				{ "Category", "Group" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationAvoidanceTypes.h" },
			};
#endif
			auto NewProp_bGroup6_SetBit = [](void* Obj){ ((FNavAvoidanceMask*)Obj)->bGroup6 = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGroup6 = { UE4CodeGen_Private::EPropertyClass::Bool, "bGroup6", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FNavAvoidanceMask), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bGroup6_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bGroup6_MetaData, ARRAY_COUNT(NewProp_bGroup6_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGroup5_MetaData[] = {
				{ "Category", "Group" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationAvoidanceTypes.h" },
			};
#endif
			auto NewProp_bGroup5_SetBit = [](void* Obj){ ((FNavAvoidanceMask*)Obj)->bGroup5 = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGroup5 = { UE4CodeGen_Private::EPropertyClass::Bool, "bGroup5", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FNavAvoidanceMask), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bGroup5_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bGroup5_MetaData, ARRAY_COUNT(NewProp_bGroup5_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGroup4_MetaData[] = {
				{ "Category", "Group" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationAvoidanceTypes.h" },
			};
#endif
			auto NewProp_bGroup4_SetBit = [](void* Obj){ ((FNavAvoidanceMask*)Obj)->bGroup4 = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGroup4 = { UE4CodeGen_Private::EPropertyClass::Bool, "bGroup4", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FNavAvoidanceMask), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bGroup4_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bGroup4_MetaData, ARRAY_COUNT(NewProp_bGroup4_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGroup3_MetaData[] = {
				{ "Category", "Group" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationAvoidanceTypes.h" },
			};
#endif
			auto NewProp_bGroup3_SetBit = [](void* Obj){ ((FNavAvoidanceMask*)Obj)->bGroup3 = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGroup3 = { UE4CodeGen_Private::EPropertyClass::Bool, "bGroup3", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FNavAvoidanceMask), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bGroup3_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bGroup3_MetaData, ARRAY_COUNT(NewProp_bGroup3_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGroup2_MetaData[] = {
				{ "Category", "Group" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationAvoidanceTypes.h" },
			};
#endif
			auto NewProp_bGroup2_SetBit = [](void* Obj){ ((FNavAvoidanceMask*)Obj)->bGroup2 = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGroup2 = { UE4CodeGen_Private::EPropertyClass::Bool, "bGroup2", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FNavAvoidanceMask), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bGroup2_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bGroup2_MetaData, ARRAY_COUNT(NewProp_bGroup2_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGroup1_MetaData[] = {
				{ "Category", "Group" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationAvoidanceTypes.h" },
			};
#endif
			auto NewProp_bGroup1_SetBit = [](void* Obj){ ((FNavAvoidanceMask*)Obj)->bGroup1 = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGroup1 = { UE4CodeGen_Private::EPropertyClass::Bool, "bGroup1", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FNavAvoidanceMask), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bGroup1_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bGroup1_MetaData, ARRAY_COUNT(NewProp_bGroup1_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGroup0_MetaData[] = {
				{ "Category", "Group" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationAvoidanceTypes.h" },
			};
#endif
			auto NewProp_bGroup0_SetBit = [](void* Obj){ ((FNavAvoidanceMask*)Obj)->bGroup0 = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGroup0 = { UE4CodeGen_Private::EPropertyClass::Bool, "bGroup0", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FNavAvoidanceMask), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bGroup0_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bGroup0_MetaData, ARRAY_COUNT(NewProp_bGroup0_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bGroup31,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bGroup30,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bGroup29,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bGroup28,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bGroup27,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bGroup26,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bGroup25,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bGroup24,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bGroup23,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bGroup22,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bGroup21,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bGroup20,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bGroup19,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bGroup18,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bGroup17,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bGroup16,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bGroup15,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bGroup14,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bGroup13,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bGroup12,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bGroup11,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bGroup10,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bGroup9,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bGroup8,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bGroup7,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bGroup6,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bGroup5,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bGroup4,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bGroup3,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bGroup2,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bGroup1,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bGroup0,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"NavAvoidanceMask",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FNavAvoidanceMask),
				alignof(FNavAvoidanceMask),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNavAvoidanceMask_CRC() { return 179897651U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
