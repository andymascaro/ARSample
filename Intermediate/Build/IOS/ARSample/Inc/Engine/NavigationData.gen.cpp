// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/AI/Navigation/NavigationData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavigationData() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERuntimeGenerationType();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSupportedAreaData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ANavigationData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ANavigationData();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNavDataConfig();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
// End Cross Module References
	static UEnum* ERuntimeGenerationType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ERuntimeGenerationType, Z_Construct_UPackage__Script_Engine(), TEXT("ERuntimeGenerationType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERuntimeGenerationType(ERuntimeGenerationType_StaticEnum, TEXT("/Script/Engine"), TEXT("ERuntimeGenerationType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ERuntimeGenerationType_CRC() { return 2109372827U; }
	UEnum* Z_Construct_UEnum_Engine_ERuntimeGenerationType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERuntimeGenerationType"), 0, Get_Z_Construct_UEnum_Engine_ERuntimeGenerationType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERuntimeGenerationType::Static", (int64)ERuntimeGenerationType::Static },
				{ "ERuntimeGenerationType::DynamicModifiersOnly", (int64)ERuntimeGenerationType::DynamicModifiersOnly },
				{ "ERuntimeGenerationType::Dynamic", (int64)ERuntimeGenerationType::Dynamic },
				{ "ERuntimeGenerationType::LegacyGeneration", (int64)ERuntimeGenerationType::LegacyGeneration },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Dynamic.ToolTip", "Fully dynamic, supports geometry changes along with navigation modifiers" },
				{ "DynamicModifiersOnly.ToolTip", "Supports only navigation modifiers updates" },
				{ "LegacyGeneration.Hidden", "" },
				{ "LegacyGeneration.ToolTip", "Only for legacy loading don't use it!" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationData.h" },
				{ "Static.ToolTip", "No runtime generation, fully static navigation data" },
				{ "ToolTip", "Supported options for runtime navigation data generation" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ERuntimeGenerationType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ERuntimeGenerationType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FSupportedAreaData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FSupportedAreaData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSupportedAreaData, Z_Construct_UPackage__Script_Engine(), TEXT("SupportedAreaData"), sizeof(FSupportedAreaData), Get_Z_Construct_UScriptStruct_FSupportedAreaData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSupportedAreaData(FSupportedAreaData::StaticStruct, TEXT("/Script/Engine"), TEXT("SupportedAreaData"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFSupportedAreaData
{
	FScriptStruct_Engine_StaticRegisterNativesFSupportedAreaData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SupportedAreaData")),new UScriptStruct::TCppStructOps<FSupportedAreaData>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFSupportedAreaData;
	UScriptStruct* Z_Construct_UScriptStruct_FSupportedAreaData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSupportedAreaData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SupportedAreaData"), sizeof(FSupportedAreaData), Get_Z_Construct_UScriptStruct_FSupportedAreaData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationData.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSupportedAreaData>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AreaClass_MetaData[] = {
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationData.h" },
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_AreaClass = { UE4CodeGen_Private::EPropertyClass::Class, "AreaClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, STRUCT_OFFSET(FSupportedAreaData, AreaClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_AreaClass_MetaData, ARRAY_COUNT(NewProp_AreaClass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AreaID_MetaData[] = {
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationData.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_AreaID = { UE4CodeGen_Private::EPropertyClass::Int, "AreaID", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FSupportedAreaData, AreaID), METADATA_PARAMS(NewProp_AreaID_MetaData, ARRAY_COUNT(NewProp_AreaID_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AreaClassName_MetaData[] = {
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationData.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_AreaClassName = { UE4CodeGen_Private::EPropertyClass::Str, "AreaClassName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FSupportedAreaData, AreaClassName), METADATA_PARAMS(NewProp_AreaClassName_MetaData, ARRAY_COUNT(NewProp_AreaClassName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AreaClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AreaID,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AreaClassName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"SupportedAreaData",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FSupportedAreaData),
				alignof(FSupportedAreaData),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSupportedAreaData_CRC() { return 3427485130U; }
	void ANavigationData::StaticRegisterNativesANavigationData()
	{
	}
	UClass* Z_Construct_UClass_ANavigationData_NoRegister()
	{
		return ANavigationData::StaticClass();
	}
	UClass* Z_Construct_UClass_ANavigationData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "AI/Navigation/NavigationData.h" },
				{ "IsBlueprintBase", "false" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationData.h" },
				{ "ToolTip", "Represents abstract Navigation Data (sub-classed as NavMesh, NavGraph, etc)\nUsed as a common interface for all navigation types handled by NavigationSystem" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SupportedAreas_MetaData[] = {
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationData.h" },
				{ "ToolTip", "serialized area class - ID mapping" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SupportedAreas = { UE4CodeGen_Private::EPropertyClass::Array, "SupportedAreas", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(ANavigationData, SupportedAreas), METADATA_PARAMS(NewProp_SupportedAreas_MetaData, ARRAY_COUNT(NewProp_SupportedAreas_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SupportedAreas_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "SupportedAreas", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FSupportedAreaData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataVersion_MetaData[] = {
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationData.h" },
				{ "ToolTip", "Navigation data versioning." },
			};
#endif
			static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_DataVersion = { UE4CodeGen_Private::EPropertyClass::UInt32, "DataVersion", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(ANavigationData, DataVersion), METADATA_PARAMS(NewProp_DataVersion_MetaData, ARRAY_COUNT(NewProp_DataVersion_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObservedPathsTickInterval_MetaData[] = {
				{ "Category", "Runtime" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationData.h" },
				{ "ToolTip", "all observed paths will be processed every ObservedPathsTickInterval seconds" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ObservedPathsTickInterval = { UE4CodeGen_Private::EPropertyClass::Float, "ObservedPathsTickInterval", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000004001, 1, nullptr, STRUCT_OFFSET(ANavigationData, ObservedPathsTickInterval), METADATA_PARAMS(NewProp_ObservedPathsTickInterval_MetaData, ARRAY_COUNT(NewProp_ObservedPathsTickInterval_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RuntimeGeneration_MetaData[] = {
				{ "Category", "Runtime" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationData.h" },
				{ "ToolTip", "Navigation data runtime generation options" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RuntimeGeneration = { UE4CodeGen_Private::EPropertyClass::Enum, "RuntimeGeneration", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000004001, 1, nullptr, STRUCT_OFFSET(ANavigationData, RuntimeGeneration), Z_Construct_UEnum_Engine_ERuntimeGenerationType, METADATA_PARAMS(NewProp_RuntimeGeneration_MetaData, ARRAY_COUNT(NewProp_RuntimeGeneration_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_RuntimeGeneration_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRebuildAtRuntime_MetaData[] = {
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationData.h" },
				{ "ToolTip", "If true, the NavMesh can be dynamically rebuilt at runtime." },
			};
#endif
			auto NewProp_bRebuildAtRuntime_SetBit = [](void* Obj){ ((ANavigationData*)Obj)->bRebuildAtRuntime_DEPRECATED = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRebuildAtRuntime = { UE4CodeGen_Private::EPropertyClass::Bool, "bRebuildAtRuntime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080020004000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ANavigationData), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bRebuildAtRuntime_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bRebuildAtRuntime_MetaData, ARRAY_COUNT(NewProp_bRebuildAtRuntime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanSpawnOnRebuild_MetaData[] = {
				{ "Category", "Runtime" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationData.h" },
				{ "ToolTip", "If set, navigation data will be spawned in persistent level during rebuild if actor doesn't exist" },
			};
#endif
			auto NewProp_bCanSpawnOnRebuild_SetBit = [](void* Obj){ ((ANavigationData*)Obj)->bCanSpawnOnRebuild = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanSpawnOnRebuild = { UE4CodeGen_Private::EPropertyClass::Bool, "bCanSpawnOnRebuild", RF_Public|RF_Transient|RF_MarkAsNative, 0x00200c0000024001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ANavigationData), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCanSpawnOnRebuild_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCanSpawnOnRebuild_MetaData, ARRAY_COUNT(NewProp_bCanSpawnOnRebuild_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanBeMainNavData_MetaData[] = {
				{ "Category", "Runtime" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationData.h" },
				{ "ToolTip", "If set, navigation data can act as default one in navigation system's queries" },
			};
#endif
			auto NewProp_bCanBeMainNavData_SetBit = [](void* Obj){ ((ANavigationData*)Obj)->bCanBeMainNavData = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanBeMainNavData = { UE4CodeGen_Private::EPropertyClass::Bool, "bCanBeMainNavData", RF_Public|RF_Transient|RF_MarkAsNative, 0x00200c0000024001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ANavigationData), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCanBeMainNavData_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCanBeMainNavData_MetaData, ARRAY_COUNT(NewProp_bCanBeMainNavData_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForceRebuildOnLoad_MetaData[] = {
				{ "Category", "Runtime" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationData.h" },
				{ "ToolTip", "By default navigation will skip the first update after being successfully loaded\nsetting bForceRebuildOnLoad to false can override this behavior" },
			};
#endif
			auto NewProp_bForceRebuildOnLoad_SetBit = [](void* Obj){ ((ANavigationData*)Obj)->bForceRebuildOnLoad = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceRebuildOnLoad = { UE4CodeGen_Private::EPropertyClass::Bool, "bForceRebuildOnLoad", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ANavigationData), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bForceRebuildOnLoad_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bForceRebuildOnLoad_MetaData, ARRAY_COUNT(NewProp_bForceRebuildOnLoad_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableDrawing_MetaData[] = {
				{ "Category", "Display" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationData.h" },
				{ "ToolTip", "if set to true then this navigation data will be drawing itself when requested as part of \"show navigation\"" },
			};
#endif
			auto NewProp_bEnableDrawing_SetBit = [](void* Obj){ ((ANavigationData*)Obj)->bEnableDrawing = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableDrawing = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableDrawing", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000002001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ANavigationData), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnableDrawing_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnableDrawing_MetaData, ARRAY_COUNT(NewProp_bEnableDrawing_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavDataConfig_MetaData[] = {
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationData.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NavDataConfig = { UE4CodeGen_Private::EPropertyClass::Struct, "NavDataConfig", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(ANavigationData, NavDataConfig), Z_Construct_UScriptStruct_FNavDataConfig, METADATA_PARAMS(NewProp_NavDataConfig_MetaData, ARRAY_COUNT(NewProp_NavDataConfig_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenderingComp_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationData.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RenderingComp = { UE4CodeGen_Private::EPropertyClass::Object, "RenderingComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000282008, 1, nullptr, STRUCT_OFFSET(ANavigationData, RenderingComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_RenderingComp_MetaData, ARRAY_COUNT(NewProp_RenderingComp_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SupportedAreas,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SupportedAreas_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DataVersion,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ObservedPathsTickInterval,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RuntimeGeneration,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RuntimeGeneration_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bRebuildAtRuntime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCanSpawnOnRebuild,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCanBeMainNavData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bForceRebuildOnLoad,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnableDrawing,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NavDataConfig,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RenderingComp,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ANavigationData>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ANavigationData::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900087u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				"Engine",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANavigationData, 3658500503);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANavigationData(Z_Construct_UClass_ANavigationData, &ANavigationData::StaticClass, TEXT("/Script/Engine"), TEXT("ANavigationData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANavigationData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
