// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/LandscapeProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeProxy() {}
// Cross Module References
	LANDSCAPE_API UEnum* Z_Construct_UEnum_Landscape_ELandscapeLODFalloff();
	UPackage* Z_Construct_UPackage__Script_Landscape();
	LANDSCAPE_API UEnum* Z_Construct_UEnum_Landscape_ELandscapeLayerDisplayMode();
	LANDSCAPE_API UEnum* Z_Construct_UEnum_Landscape_ELandscapeLayerPaintingRestriction();
	LANDSCAPE_API UEnum* Z_Construct_UEnum_Landscape_ELandscapeImportAlphamapType();
	LANDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FLandscapeImportLayerInfo();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeLayerInfoObject_NoRegister();
	LANDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FLandscapeLayerStruct();
	LANDSCAPE_API UClass* Z_Construct_UClass_ALandscapeProxy_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeMaterialInstanceConstant_NoRegister();
	LANDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FLandscapeEditorLayerSettings();
	LANDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FLandscapeWeightmapUsage();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeComponent_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_ALandscapeProxy();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	LANDSCAPE_API UFunction* Z_Construct_UFunction_ALandscapeProxy_ChangeLODDistanceFactor();
	LANDSCAPE_API UFunction* Z_Construct_UFunction_ALandscapeProxy_EditorApplySpline();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ENavDataGatheringMode();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBodyInstance();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLightmassPrimitiveSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLightingChannels();
	ENGINE_API UClass* Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeSplinesComponent_NoRegister();
// End Cross Module References
	static UEnum* ELandscapeLODFalloff_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Landscape_ELandscapeLODFalloff, Z_Construct_UPackage__Script_Landscape(), TEXT("ELandscapeLODFalloff"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELandscapeLODFalloff(ELandscapeLODFalloff_StaticEnum, TEXT("/Script/Landscape"), TEXT("ELandscapeLODFalloff"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Landscape_ELandscapeLODFalloff_CRC() { return 2971368533U; }
	UEnum* Z_Construct_UEnum_Landscape_ELandscapeLODFalloff()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Landscape();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELandscapeLODFalloff"), 0, Get_Z_Construct_UEnum_Landscape_ELandscapeLODFalloff_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELandscapeLODFalloff::Linear", (int64)ELandscapeLODFalloff::Linear },
				{ "ELandscapeLODFalloff::SquareRoot", (int64)ELandscapeLODFalloff::SquareRoot },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Linear.DisplayName", "Linear" },
				{ "Linear.ToolTip", "Default mode." },
				{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
				{ "SquareRoot.DisplayName", "Square Root" },
				{ "SquareRoot.ToolTip", "Square Root give more natural transition, and also keep the same LOD." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Landscape,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ELandscapeLODFalloff",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"ELandscapeLODFalloff::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ELandscapeLayerDisplayMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Landscape_ELandscapeLayerDisplayMode, Z_Construct_UPackage__Script_Landscape(), TEXT("ELandscapeLayerDisplayMode"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELandscapeLayerDisplayMode(ELandscapeLayerDisplayMode_StaticEnum, TEXT("/Script/Landscape"), TEXT("ELandscapeLayerDisplayMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Landscape_ELandscapeLayerDisplayMode_CRC() { return 4010845918U; }
	UEnum* Z_Construct_UEnum_Landscape_ELandscapeLayerDisplayMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Landscape();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELandscapeLayerDisplayMode"), 0, Get_Z_Construct_UEnum_Landscape_ELandscapeLayerDisplayMode_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELandscapeLayerDisplayMode::Default", (int64)ELandscapeLayerDisplayMode::Default },
				{ "ELandscapeLayerDisplayMode::Alphabetical", (int64)ELandscapeLayerDisplayMode::Alphabetical },
				{ "ELandscapeLayerDisplayMode::UserSpecific", (int64)ELandscapeLayerDisplayMode::UserSpecific },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Alphabetical.ToolTip", "Alphabetical sorting display mode" },
				{ "Default.ToolTip", "Material sorting display mode" },
				{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
				{ "UserSpecific.ToolTip", "User specific sorting display mode" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Landscape,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ELandscapeLayerDisplayMode",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ELandscapeLayerDisplayMode",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ELandscapeLayerPaintingRestriction_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Landscape_ELandscapeLayerPaintingRestriction, Z_Construct_UPackage__Script_Landscape(), TEXT("ELandscapeLayerPaintingRestriction"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELandscapeLayerPaintingRestriction(ELandscapeLayerPaintingRestriction_StaticEnum, TEXT("/Script/Landscape"), TEXT("ELandscapeLayerPaintingRestriction"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Landscape_ELandscapeLayerPaintingRestriction_CRC() { return 1788266566U; }
	UEnum* Z_Construct_UEnum_Landscape_ELandscapeLayerPaintingRestriction()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Landscape();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELandscapeLayerPaintingRestriction"), 0, Get_Z_Construct_UEnum_Landscape_ELandscapeLayerPaintingRestriction_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELandscapeLayerPaintingRestriction::None", (int64)ELandscapeLayerPaintingRestriction::None },
				{ "ELandscapeLayerPaintingRestriction::UseMaxLayers", (int64)ELandscapeLayerPaintingRestriction::UseMaxLayers },
				{ "ELandscapeLayerPaintingRestriction::ExistingOnly", (int64)ELandscapeLayerPaintingRestriction::ExistingOnly },
				{ "ELandscapeLayerPaintingRestriction::UseComponentWhitelist", (int64)ELandscapeLayerPaintingRestriction::UseComponentWhitelist },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ExistingOnly.DisplayName", "Existing Layers Only" },
				{ "ExistingOnly.ToolTip", "Restricts painting to only components that already have this layer." },
				{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
				{ "None.DisplayName", "None" },
				{ "None.ToolTip", "No restriction, can paint anywhere (default)." },
				{ "ToolTip", "this is only here because putting it in LandscapeEditorObject.h (where it belongs)\nresults in Engine being dependent on LandscapeEditor, as the actual landscape editing\ncode (e.g. LandscapeEdit.h) is in /Engine/ for some reason..." },
				{ "UseComponentWhitelist.DisplayName", "Component Whitelist" },
				{ "UseComponentWhitelist.ToolTip", "Restricts painting to only components that have this layer in their whitelist." },
				{ "UseMaxLayers.DisplayName", "Limit Layer Count" },
				{ "UseMaxLayers.ToolTip", "Uses the MaxPaintedLayersPerComponent setting from the LandscapeProxy." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Landscape,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ELandscapeLayerPaintingRestriction",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ELandscapeLayerPaintingRestriction",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ELandscapeImportAlphamapType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Landscape_ELandscapeImportAlphamapType, Z_Construct_UPackage__Script_Landscape(), TEXT("ELandscapeImportAlphamapType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELandscapeImportAlphamapType(ELandscapeImportAlphamapType_StaticEnum, TEXT("/Script/Landscape"), TEXT("ELandscapeImportAlphamapType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Landscape_ELandscapeImportAlphamapType_CRC() { return 1204315293U; }
	UEnum* Z_Construct_UEnum_Landscape_ELandscapeImportAlphamapType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Landscape();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELandscapeImportAlphamapType"), 0, Get_Z_Construct_UEnum_Landscape_ELandscapeImportAlphamapType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELandscapeImportAlphamapType::Additive", (int64)ELandscapeImportAlphamapType::Additive },
				{ "ELandscapeImportAlphamapType::Layered", (int64)ELandscapeImportAlphamapType::Layered },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Additive.ToolTip", "Three layers blended 50/30/20 represented as 0.5, 0.3, and 0.2 in the alpha maps\nAll alpha maps for blended layers total to 1.0\nThis is the style used by UE4 internally for blended layers" },
				{ "Layered.ToolTip", "Three layers blended 50/30/20 represented as 0.5, 0.6, and 1.0 in the alpha maps\nEach alpha map only specifies the remainder from previous layers, so the last layer used will always be 1.0\nSome other tools use this format" },
				{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Landscape,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ELandscapeImportAlphamapType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ELandscapeImportAlphamapType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FLandscapeImportLayerInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LANDSCAPE_API uint32 Get_Z_Construct_UScriptStruct_FLandscapeImportLayerInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLandscapeImportLayerInfo, Z_Construct_UPackage__Script_Landscape(), TEXT("LandscapeImportLayerInfo"), sizeof(FLandscapeImportLayerInfo), Get_Z_Construct_UScriptStruct_FLandscapeImportLayerInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLandscapeImportLayerInfo(FLandscapeImportLayerInfo::StaticStruct, TEXT("/Script/Landscape"), TEXT("LandscapeImportLayerInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Landscape_StaticRegisterNativesFLandscapeImportLayerInfo
{
	FScriptStruct_Landscape_StaticRegisterNativesFLandscapeImportLayerInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LandscapeImportLayerInfo")),new UScriptStruct::TCppStructOps<FLandscapeImportLayerInfo>);
	}
} ScriptStruct_Landscape_StaticRegisterNativesFLandscapeImportLayerInfo;
	UScriptStruct* Z_Construct_UScriptStruct_FLandscapeImportLayerInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLandscapeImportLayerInfo_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Landscape();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LandscapeImportLayerInfo"), sizeof(FLandscapeImportLayerInfo), Get_Z_Construct_UScriptStruct_FLandscapeImportLayerInfo_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
				{ "ToolTip", "Structure storing Layer Data for import" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLandscapeImportLayerInfo>(); };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceFilePath_MetaData[] = {
				{ "Category", "Import" },
				{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_SourceFilePath = { UE4CodeGen_Private::EPropertyClass::Str, "SourceFilePath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000001, 1, nullptr, STRUCT_OFFSET(FLandscapeImportLayerInfo, SourceFilePath), METADATA_PARAMS(NewProp_SourceFilePath_MetaData, ARRAY_COUNT(NewProp_SourceFilePath_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LayerInfo_MetaData[] = {
				{ "Category", "Import" },
				{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LayerInfo = { UE4CodeGen_Private::EPropertyClass::Object, "LayerInfo", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000001, 1, nullptr, STRUCT_OFFSET(FLandscapeImportLayerInfo, LayerInfo), Z_Construct_UClass_ULandscapeLayerInfoObject_NoRegister, METADATA_PARAMS(NewProp_LayerInfo_MetaData, ARRAY_COUNT(NewProp_LayerInfo_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LayerName_MetaData[] = {
				{ "Category", "Import" },
				{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_LayerName = { UE4CodeGen_Private::EPropertyClass::Name, "LayerName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800020001, 1, nullptr, STRUCT_OFFSET(FLandscapeImportLayerInfo, LayerName), METADATA_PARAMS(NewProp_LayerName_MetaData, ARRAY_COUNT(NewProp_LayerName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SourceFilePath,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LayerInfo,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LayerName,
			};
#endif // WITH_EDITORONLY_DATA
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"LandscapeImportLayerInfo",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FLandscapeImportLayerInfo),
				alignof(FLandscapeImportLayerInfo),
				IF_WITH_EDITORONLY_DATA(PropPointers, nullptr), IF_WITH_EDITORONLY_DATA(ARRAY_COUNT(PropPointers), 0),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLandscapeImportLayerInfo_CRC() { return 2081214361U; }
class UScriptStruct* FLandscapeLayerStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LANDSCAPE_API uint32 Get_Z_Construct_UScriptStruct_FLandscapeLayerStruct_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLandscapeLayerStruct, Z_Construct_UPackage__Script_Landscape(), TEXT("LandscapeLayerStruct"), sizeof(FLandscapeLayerStruct), Get_Z_Construct_UScriptStruct_FLandscapeLayerStruct_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLandscapeLayerStruct(FLandscapeLayerStruct::StaticStruct, TEXT("/Script/Landscape"), TEXT("LandscapeLayerStruct"), false, nullptr, nullptr);
static struct FScriptStruct_Landscape_StaticRegisterNativesFLandscapeLayerStruct
{
	FScriptStruct_Landscape_StaticRegisterNativesFLandscapeLayerStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LandscapeLayerStruct")),new UScriptStruct::TCppStructOps<FLandscapeLayerStruct>);
	}
} ScriptStruct_Landscape_StaticRegisterNativesFLandscapeLayerStruct;
	UScriptStruct* Z_Construct_UScriptStruct_FLandscapeLayerStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLandscapeLayerStruct_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Landscape();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LandscapeLayerStruct"), sizeof(FLandscapeLayerStruct), Get_Z_Construct_UScriptStruct_FLandscapeLayerStruct_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLandscapeLayerStruct>(); };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceFilePath_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_SourceFilePath = { UE4CodeGen_Private::EPropertyClass::Str, "SourceFilePath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(FLandscapeLayerStruct, SourceFilePath), METADATA_PARAMS(NewProp_SourceFilePath_MetaData, ARRAY_COUNT(NewProp_SourceFilePath_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSelected_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
			};
#endif
			auto NewProp_bSelected_SetBit = [](void* Obj){ ((FLandscapeLayerStruct*)Obj)->bSelected = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSelected = { UE4CodeGen_Private::EPropertyClass::Bool, "bSelected", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800002000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FLandscapeLayerStruct), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSelected_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSelected_MetaData, ARRAY_COUNT(NewProp_bSelected_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugColorChannel_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_DebugColorChannel = { UE4CodeGen_Private::EPropertyClass::Int, "DebugColorChannel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800002000, 1, nullptr, STRUCT_OFFSET(FLandscapeLayerStruct, DebugColorChannel), METADATA_PARAMS(NewProp_DebugColorChannel_MetaData, ARRAY_COUNT(NewProp_DebugColorChannel_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Owner = { UE4CodeGen_Private::EPropertyClass::Object, "Owner", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(FLandscapeLayerStruct, Owner), Z_Construct_UClass_ALandscapeProxy_NoRegister, METADATA_PARAMS(NewProp_Owner_MetaData, ARRAY_COUNT(NewProp_Owner_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThumbnailMIC_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ThumbnailMIC = { UE4CodeGen_Private::EPropertyClass::Object, "ThumbnailMIC", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800002000, 1, nullptr, STRUCT_OFFSET(FLandscapeLayerStruct, ThumbnailMIC), Z_Construct_UClass_ULandscapeMaterialInstanceConstant_NoRegister, METADATA_PARAMS(NewProp_ThumbnailMIC_MetaData, ARRAY_COUNT(NewProp_ThumbnailMIC_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LayerInfoObj_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LayerInfoObj = { UE4CodeGen_Private::EPropertyClass::Object, "LayerInfoObj", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FLandscapeLayerStruct, LayerInfoObj), Z_Construct_UClass_ULandscapeLayerInfoObject_NoRegister, METADATA_PARAMS(NewProp_LayerInfoObj_MetaData, ARRAY_COUNT(NewProp_LayerInfoObj_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SourceFilePath,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSelected,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DebugColorChannel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Owner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ThumbnailMIC,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LayerInfoObj,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"LandscapeLayerStruct",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FLandscapeLayerStruct),
				alignof(FLandscapeLayerStruct),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLandscapeLayerStruct_CRC() { return 2790940364U; }
class UScriptStruct* FLandscapeEditorLayerSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LANDSCAPE_API uint32 Get_Z_Construct_UScriptStruct_FLandscapeEditorLayerSettings_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLandscapeEditorLayerSettings, Z_Construct_UPackage__Script_Landscape(), TEXT("LandscapeEditorLayerSettings"), sizeof(FLandscapeEditorLayerSettings), Get_Z_Construct_UScriptStruct_FLandscapeEditorLayerSettings_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLandscapeEditorLayerSettings(FLandscapeEditorLayerSettings::StaticStruct, TEXT("/Script/Landscape"), TEXT("LandscapeEditorLayerSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Landscape_StaticRegisterNativesFLandscapeEditorLayerSettings
{
	FScriptStruct_Landscape_StaticRegisterNativesFLandscapeEditorLayerSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LandscapeEditorLayerSettings")),new UScriptStruct::TCppStructOps<FLandscapeEditorLayerSettings>);
	}
} ScriptStruct_Landscape_StaticRegisterNativesFLandscapeEditorLayerSettings;
	UScriptStruct* Z_Construct_UScriptStruct_FLandscapeEditorLayerSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLandscapeEditorLayerSettings_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Landscape();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LandscapeEditorLayerSettings"), sizeof(FLandscapeEditorLayerSettings), Get_Z_Construct_UScriptStruct_FLandscapeEditorLayerSettings_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLandscapeEditorLayerSettings>(); };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReimportLayerFilePath_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReimportLayerFilePath = { UE4CodeGen_Private::EPropertyClass::Str, "ReimportLayerFilePath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(FLandscapeEditorLayerSettings, ReimportLayerFilePath), METADATA_PARAMS(NewProp_ReimportLayerFilePath_MetaData, ARRAY_COUNT(NewProp_ReimportLayerFilePath_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LayerInfoObj_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LayerInfoObj = { UE4CodeGen_Private::EPropertyClass::Object, "LayerInfoObj", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(FLandscapeEditorLayerSettings, LayerInfoObj), Z_Construct_UClass_ULandscapeLayerInfoObject_NoRegister, METADATA_PARAMS(NewProp_LayerInfoObj_MetaData, ARRAY_COUNT(NewProp_LayerInfoObj_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReimportLayerFilePath,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LayerInfoObj,
			};
#endif // WITH_EDITORONLY_DATA
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"LandscapeEditorLayerSettings",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FLandscapeEditorLayerSettings),
				alignof(FLandscapeEditorLayerSettings),
				IF_WITH_EDITORONLY_DATA(PropPointers, nullptr), IF_WITH_EDITORONLY_DATA(ARRAY_COUNT(PropPointers), 0),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLandscapeEditorLayerSettings_CRC() { return 3560463805U; }
class UScriptStruct* FLandscapeWeightmapUsage::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LANDSCAPE_API uint32 Get_Z_Construct_UScriptStruct_FLandscapeWeightmapUsage_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLandscapeWeightmapUsage, Z_Construct_UPackage__Script_Landscape(), TEXT("LandscapeWeightmapUsage"), sizeof(FLandscapeWeightmapUsage), Get_Z_Construct_UScriptStruct_FLandscapeWeightmapUsage_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLandscapeWeightmapUsage(FLandscapeWeightmapUsage::StaticStruct, TEXT("/Script/Landscape"), TEXT("LandscapeWeightmapUsage"), false, nullptr, nullptr);
static struct FScriptStruct_Landscape_StaticRegisterNativesFLandscapeWeightmapUsage
{
	FScriptStruct_Landscape_StaticRegisterNativesFLandscapeWeightmapUsage()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LandscapeWeightmapUsage")),new UScriptStruct::TCppStructOps<FLandscapeWeightmapUsage>);
	}
} ScriptStruct_Landscape_StaticRegisterNativesFLandscapeWeightmapUsage;
	UScriptStruct* Z_Construct_UScriptStruct_FLandscapeWeightmapUsage()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLandscapeWeightmapUsage_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Landscape();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LandscapeWeightmapUsage"), sizeof(FLandscapeWeightmapUsage), Get_Z_Construct_UScriptStruct_FLandscapeWeightmapUsage_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
				{ "ToolTip", "Structure storing channel usage for weightmap textures" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLandscapeWeightmapUsage>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChannelUsage_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChannelUsage = { UE4CodeGen_Private::EPropertyClass::Object, "ChannelUsage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080008, CPP_ARRAY_DIM(ChannelUsage, FLandscapeWeightmapUsage), nullptr, STRUCT_OFFSET(FLandscapeWeightmapUsage, ChannelUsage), Z_Construct_UClass_ULandscapeComponent_NoRegister, METADATA_PARAMS(NewProp_ChannelUsage_MetaData, ARRAY_COUNT(NewProp_ChannelUsage_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ChannelUsage,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"LandscapeWeightmapUsage",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000005),
				sizeof(FLandscapeWeightmapUsage),
				alignof(FLandscapeWeightmapUsage),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLandscapeWeightmapUsage_CRC() { return 3130551896U; }
	void ALandscapeProxy::StaticRegisterNativesALandscapeProxy()
	{
		UClass* Class = ALandscapeProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeLODDistanceFactor", (Native)&ALandscapeProxy::execChangeLODDistanceFactor },
			{ "EditorApplySpline", (Native)&ALandscapeProxy::execEditorApplySpline },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ALandscapeProxy_ChangeLODDistanceFactor()
	{
		struct LandscapeProxy_eventChangeLODDistanceFactor_Parms
		{
			float InLODDistanceFactor;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InLODDistanceFactor = { UE4CodeGen_Private::EPropertyClass::Float, "InLODDistanceFactor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LandscapeProxy_eventChangeLODDistanceFactor_Parms, InLODDistanceFactor), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InLODDistanceFactor,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering" },
				{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
				{ "ToolTip", "Change the Level of Detail distance factor" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ALandscapeProxy, "ChangeLODDistanceFactor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(LandscapeProxy_eventChangeLODDistanceFactor_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ALandscapeProxy_EditorApplySpline()
	{
		struct LandscapeProxy_eventEditorApplySpline_Parms
		{
			USplineComponent* InSplineComponent;
			float StartWidth;
			float EndWidth;
			float StartSideFalloff;
			float EndSideFalloff;
			float StartRoll;
			float EndRoll;
			int32 NumSubdivisions;
			bool bRaiseHeights;
			bool bLowerHeights;
			ULandscapeLayerInfoObject* PaintLayer;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PaintLayer = { UE4CodeGen_Private::EPropertyClass::Object, "PaintLayer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LandscapeProxy_eventEditorApplySpline_Parms, PaintLayer), Z_Construct_UClass_ULandscapeLayerInfoObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bLowerHeights_SetBit = [](void* Obj){ ((LandscapeProxy_eventEditorApplySpline_Parms*)Obj)->bLowerHeights = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLowerHeights = { UE4CodeGen_Private::EPropertyClass::Bool, "bLowerHeights", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(LandscapeProxy_eventEditorApplySpline_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bLowerHeights_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bRaiseHeights_SetBit = [](void* Obj){ ((LandscapeProxy_eventEditorApplySpline_Parms*)Obj)->bRaiseHeights = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRaiseHeights = { UE4CodeGen_Private::EPropertyClass::Bool, "bRaiseHeights", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(LandscapeProxy_eventEditorApplySpline_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bRaiseHeights_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumSubdivisions = { UE4CodeGen_Private::EPropertyClass::Int, "NumSubdivisions", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LandscapeProxy_eventEditorApplySpline_Parms, NumSubdivisions), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EndRoll = { UE4CodeGen_Private::EPropertyClass::Float, "EndRoll", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LandscapeProxy_eventEditorApplySpline_Parms, EndRoll), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartRoll = { UE4CodeGen_Private::EPropertyClass::Float, "StartRoll", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LandscapeProxy_eventEditorApplySpline_Parms, StartRoll), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EndSideFalloff = { UE4CodeGen_Private::EPropertyClass::Float, "EndSideFalloff", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LandscapeProxy_eventEditorApplySpline_Parms, EndSideFalloff), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartSideFalloff = { UE4CodeGen_Private::EPropertyClass::Float, "StartSideFalloff", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LandscapeProxy_eventEditorApplySpline_Parms, StartSideFalloff), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EndWidth = { UE4CodeGen_Private::EPropertyClass::Float, "EndWidth", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LandscapeProxy_eventEditorApplySpline_Parms, EndWidth), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartWidth = { UE4CodeGen_Private::EPropertyClass::Float, "StartWidth", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LandscapeProxy_eventEditorApplySpline_Parms, StartWidth), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InSplineComponent_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InSplineComponent = { UE4CodeGen_Private::EPropertyClass::Object, "InSplineComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(LandscapeProxy_eventEditorApplySpline_Parms, InSplineComponent), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(NewProp_InSplineComponent_MetaData, ARRAY_COUNT(NewProp_InSplineComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PaintLayer,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bLowerHeights,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bRaiseHeights,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NumSubdivisions,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EndRoll,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StartRoll,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EndSideFalloff,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StartSideFalloff,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EndWidth,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StartWidth,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InSplineComponent,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Landscape Editor" },
				{ "CPP_Default_bLowerHeights", "true" },
				{ "CPP_Default_bRaiseHeights", "true" },
				{ "CPP_Default_EndRoll", "0.000000" },
				{ "CPP_Default_EndSideFalloff", "200.000000" },
				{ "CPP_Default_EndWidth", "200.000000" },
				{ "CPP_Default_NumSubdivisions", "20" },
				{ "CPP_Default_StartRoll", "0.000000" },
				{ "CPP_Default_StartSideFalloff", "200.000000" },
				{ "CPP_Default_StartWidth", "200.000000" },
				{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
				{ "ToolTip", "Deform landscape using a given spline\n@param StartWidth - Width of the spline at the start node, in Spline Component local space\n@param EndWidth   - Width of the spline at the end node, in Spline Component local space\n@param StartSideFalloff - Width of the falloff at either side of the spline at the start node, in Spline Component local space\n@param EndSideFalloff - Width of the falloff at either side of the spline at the end node, in Spline Component local space\n@param StartRoll - Roll applied to the spline at the start node, in degrees. 0 is flat\n@param EndRoll - Roll applied to the spline at the end node, in degrees. 0 is flat\n@param NumSubdivisions - Number of triangles to place along the spline when applying it to the landscape. Higher numbers give better results, but setting it too high will be slow and may cause artifacts\n@param bRaiseHeights - Allow the landscape to be raised up to the level of the spline. If both bRaiseHeights and bLowerHeights are false, no height modification of the landscape will be performed\n@param bLowerHeights - Allow the landscape to be lowered down to the level of the spline. If both bRaiseHeights and bLowerHeights are false, no height modification of the landscape will be performed\n@param PaintLayer - LayerInfo to paint, or none to skip painting. The landscape must be configured with the same layer info in one of its layers or this will do nothing!" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ALandscapeProxy, "EditorApplySpline", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(LandscapeProxy_eventEditorApplySpline_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ALandscapeProxy_NoRegister()
	{
		return ALandscapeProxy::StaticClass();
	}
	UClass* Z_Construct_UClass_ALandscapeProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ALandscapeProxy_ChangeLODDistanceFactor, "ChangeLODDistanceFactor" }, // 2351123492
				{ &Z_Construct_UFunction_ALandscapeProxy_EditorApplySpline, "EditorApplySpline" }, // 1436153716
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Display Attachment Physics Debug LOD" },
				{ "IncludePath", "LandscapeProxy.h" },
				{ "IsBlueprintBase", "false" },
				{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseLandscapeForCullingInvisibleHLODVertices_MetaData[] = {
				{ "Category", "HierarchicalLOD" },
				{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
				{ "ToolTip", "Flag whether or not this Landscape's surface can be used for culling hidden triangles *" },
			};
#endif
			auto NewProp_bUseLandscapeForCullingInvisibleHLODVertices_SetBit = [](void* Obj){ ((ALandscapeProxy*)Obj)->bUseLandscapeForCullingInvisibleHLODVertices = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseLandscapeForCullingInvisibleHLODVertices = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseLandscapeForCullingInvisibleHLODVertices", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ALandscapeProxy), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseLandscapeForCullingInvisibleHLODVertices_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseLandscapeForCullingInvisibleHLODVertices_MetaData, ARRAY_COUNT(NewProp_bUseLandscapeForCullingInvisibleHLODVertices_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxPaintedLayersPerComponent_MetaData[] = {
				{ "Category", "Landscape" },
				{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxPaintedLayersPerComponent = { UE4CodeGen_Private::EPropertyClass::Int, "MaxPaintedLayersPerComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000001, 1, nullptr, STRUCT_OFFSET(ALandscapeProxy, MaxPaintedLayersPerComponent), METADATA_PARAMS(NewProp_MaxPaintedLayersPerComponent_MetaData, ARRAY_COUNT(NewProp_MaxPaintedLayersPerComponent_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavigationGeometryGatheringMode_MetaData[] = {
				{ "Category", "Landscape" },
				{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NavigationGeometryGatheringMode = { UE4CodeGen_Private::EPropertyClass::Enum, "NavigationGeometryGatheringMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, STRUCT_OFFSET(ALandscapeProxy, NavigationGeometryGatheringMode), Z_Construct_UEnum_Engine_ENavDataGatheringMode, METADATA_PARAMS(NewProp_NavigationGeometryGatheringMode_MetaData, ARRAY_COUNT(NewProp_NavigationGeometryGatheringMode_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_NavigationGeometryGatheringMode_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsedForNavigation_MetaData[] = {
				{ "Category", "Landscape" },
				{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
				{ "ToolTip", "Hints navigation system whether this landscape will ever be navigated on. true by default, but make sure to set it to false for faraway, background landscapes" },
			};
#endif
			auto NewProp_bUsedForNavigation_SetBit = [](void* Obj){ ((ALandscapeProxy*)Obj)->bUsedForNavigation = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsedForNavigation = { UE4CodeGen_Private::EPropertyClass::Bool, "bUsedForNavigation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ALandscapeProxy), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUsedForNavigation_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUsedForNavigation_MetaData, ARRAY_COUNT(NewProp_bUsedForNavigation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumSubsections_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
				{ "ToolTip", "Number of quads for a subsection of a component. SubsectionSizeQuads+1 must be a power of two." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumSubsections = { UE4CodeGen_Private::EPropertyClass::Int, "NumSubsections", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(ALandscapeProxy, NumSubsections), METADATA_PARAMS(NewProp_NumSubsections_MetaData, ARRAY_COUNT(NewProp_NumSubsections_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubsectionSizeQuads_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
				{ "ToolTip", "Total number of quads in each component" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_SubsectionSizeQuads = { UE4CodeGen_Private::EPropertyClass::Int, "SubsectionSizeQuads", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(ALandscapeProxy, SubsectionSizeQuads), METADATA_PARAMS(NewProp_SubsectionSizeQuads_MetaData, ARRAY_COUNT(NewProp_SubsectionSizeQuads_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentSizeQuads_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
				{ "ToolTip", "Data set at creation time" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ComponentSizeQuads = { UE4CodeGen_Private::EPropertyClass::Int, "ComponentSizeQuads", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(ALandscapeProxy, ComponentSizeQuads), METADATA_PARAMS(NewProp_ComponentSizeQuads_MetaData, ARRAY_COUNT(NewProp_ComponentSizeQuads_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditorLayerSettings_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EditorLayerSettings = { UE4CodeGen_Private::EPropertyClass::Array, "EditorLayerSettings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(ALandscapeProxy, EditorLayerSettings), METADATA_PARAMS(NewProp_EditorLayerSettings_MetaData, ARRAY_COUNT(NewProp_EditorLayerSettings_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_EditorLayerSettings_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "EditorLayerSettings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000800000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FLandscapeEditorLayerSettings, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReimportHeightmapFilePath_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReimportHeightmapFilePath = { UE4CodeGen_Private::EPropertyClass::Str, "ReimportHeightmapFilePath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(ALandscapeProxy, ReimportHeightmapFilePath), METADATA_PARAMS(NewProp_ReimportHeightmapFilePath_MetaData, ARRAY_COUNT(NewProp_ReimportHeightmapFilePath_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditorCachedLayerInfos_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EditorCachedLayerInfos = { UE4CodeGen_Private::EPropertyClass::Array, "EditorCachedLayerInfos", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000820000000, 1, nullptr, STRUCT_OFFSET(ALandscapeProxy, EditorCachedLayerInfos_DEPRECATED), METADATA_PARAMS(NewProp_EditorCachedLayerInfos_MetaData, ARRAY_COUNT(NewProp_EditorCachedLayerInfos_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EditorCachedLayerInfos_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "EditorCachedLayerInfos", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000820000000, 1, nullptr, 0, Z_Construct_UClass_ULandscapeLayerInfoObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBakeMaterialPositionOffsetIntoCollision_MetaData[] = {
				{ "Category", "Collision" },
				{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
				{ "ToolTip", "Whether to bake the landscape material's vertical world position offset into the collision heightfield.\n              Note: Only z (vertical) offset is supported. XY offsets are ignored.\n              Does not work with an XY offset map (mesh collision)" },
			};
#endif
			auto NewProp_bBakeMaterialPositionOffsetIntoCollision_SetBit = [](void* Obj){ ((ALandscapeProxy*)Obj)->bBakeMaterialPositionOffsetIntoCollision = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBakeMaterialPositionOffsetIntoCollision = { UE4CodeGen_Private::EPropertyClass::Bool, "bBakeMaterialPositionOffsetIntoCollision", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ALandscapeProxy), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bBakeMaterialPositionOffsetIntoCollision_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bBakeMaterialPositionOffsetIntoCollision_MetaData, ARRAY_COUNT(NewProp_bBakeMaterialPositionOffsetIntoCollision_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGenerateOverlapEvents_MetaData[] = {
				{ "Category", "Collision" },
				{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
				{ "ToolTip", "If true, Landscape will generate overlap events when other components are overlapping it (eg Begin Overlap).\nBoth the Landscape and the other component must have this flag enabled for overlap events to occur.\n\n@see [Overlap Events](https://docs.unrealengine.com/latest/INT/Engine/Physics/Collision/index.html#overlapandgenerateoverlapevents)\n@see UpdateOverlaps(), BeginComponentOverlap(), EndComponentOverlap()" },
			};
#endif
			auto NewProp_bGenerateOverlapEvents_SetBit = [](void* Obj){ ((ALandscapeProxy*)Obj)->bGenerateOverlapEvents = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGenerateOverlapEvents = { UE4CodeGen_Private::EPropertyClass::Bool, "bGenerateOverlapEvents", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ALandscapeProxy), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bGenerateOverlapEvents_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bGenerateOverlapEvents_MetaData, ARRAY_COUNT(NewProp_bGenerateOverlapEvents_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyInstance_MetaData[] = {
				{ "Category", "Collision" },
				{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
				{ "ShowOnlyInnerProperties", "" },
				{ "ToolTip", "Collision profile settings for this landscape" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BodyInstance = { UE4CodeGen_Private::EPropertyClass::Struct, "BodyInstance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(ALandscapeProxy, BodyInstance), Z_Construct_UScriptStruct_FBodyInstance, METADATA_PARAMS(NewProp_BodyInstance_MetaData, ARRAY_COUNT(NewProp_BodyInstance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionThickness_MetaData[] = {
				{ "Category", "Collision" },
				{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
				{ "ToolTip", "Thickness of the collision surface, in unreal units" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CollisionThickness = { UE4CodeGen_Private::EPropertyClass::Float, "CollisionThickness", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ALandscapeProxy, CollisionThickness), METADATA_PARAMS(NewProp_CollisionThickness_MetaData, ARRAY_COUNT(NewProp_CollisionThickness_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SimpleCollisionMipLevel_MetaData[] = {
				{ "Category", "Collision" },
				{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
				{ "ToolTip", "If set higher than the \"Collision Mip Level\", this specifies the Landscape LOD to use for \"simple collision\" tests, otherwise the \"Collision Mip Level\" is used for both simple and complex collision.\nDoes not work with an XY offset map (mesh collision)" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_SimpleCollisionMipLevel = { UE4CodeGen_Private::EPropertyClass::Int, "SimpleCollisionMipLevel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ALandscapeProxy, SimpleCollisionMipLevel), METADATA_PARAMS(NewProp_SimpleCollisionMipLevel_MetaData, ARRAY_COUNT(NewProp_SimpleCollisionMipLevel_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionMipLevel_MetaData[] = {
				{ "Category", "Collision" },
				{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
				{ "ToolTip", "Landscape LOD to use for collision tests. Higher numbers use less memory and process faster, but are much less accurate" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_CollisionMipLevel = { UE4CodeGen_Private::EPropertyClass::Int, "CollisionMipLevel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ALandscapeProxy, CollisionMipLevel), METADATA_PARAMS(NewProp_CollisionMipLevel_MetaData, ARRAY_COUNT(NewProp_CollisionMipLevel_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightmassSettings_MetaData[] = {
				{ "Category", "Lightmass" },
				{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
				{ "ToolTip", "The Lightmass settings for this object." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LightmassSettings = { UE4CodeGen_Private::EPropertyClass::Struct, "LightmassSettings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ALandscapeProxy, LightmassSettings), Z_Construct_UScriptStruct_FLightmassPrimitiveSettings, METADATA_PARAMS(NewProp_LightmassSettings_MetaData, ARRAY_COUNT(NewProp_LightmassSettings_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsMovingToLevel_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
			};
#endif
			auto NewProp_bIsMovingToLevel_SetBit = [](void* Obj){ ((ALandscapeProxy*)Obj)->bIsMovingToLevel = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsMovingToLevel = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsMovingToLevel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800002000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ALandscapeProxy), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsMovingToLevel_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsMovingToLevel_MetaData, ARRAY_COUNT(NewProp_bIsMovingToLevel_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomDepthStencilValue_MetaData[] = {
				{ "Category", "Rendering" },
				{ "DisplayName", "CustomDepth Stencil Value" },
				{ "editcondition", "bRenderCustomDepth" },
				{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
				{ "ToolTip", "Optionally write this 0-255 value to the stencil buffer in CustomDepth pass (Requires project setting or r.CustomDepth == 3)" },
				{ "UIMax", "255" },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_CustomDepthStencilValue = { UE4CodeGen_Private::EPropertyClass::Int, "CustomDepthStencilValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000015, 1, nullptr, STRUCT_OFFSET(ALandscapeProxy, CustomDepthStencilValue), METADATA_PARAMS(NewProp_CustomDepthStencilValue_MetaData, ARRAY_COUNT(NewProp_CustomDepthStencilValue_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRenderCustomDepth_MetaData[] = {
				{ "Category", "Rendering" },
				{ "DisplayName", "Render CustomDepth Pass" },
				{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
				{ "ToolTip", "If true, the Landscape will be rendered in the CustomDepth pass (usually used for outlines)" },
			};
#endif
			auto NewProp_bRenderCustomDepth_SetBit = [](void* Obj){ ((ALandscapeProxy*)Obj)->bRenderCustomDepth = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRenderCustomDepth = { UE4CodeGen_Private::EPropertyClass::Bool, "bRenderCustomDepth", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ALandscapeProxy), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bRenderCustomDepth_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bRenderCustomDepth_MetaData, ARRAY_COUNT(NewProp_bRenderCustomDepth_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseMaterialPositionOffsetInStaticLighting_MetaData[] = {
				{ "Category", "Lighting" },
				{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
				{ "ToolTip", "Whether to use the landscape material's vertical world position offset when calculating static lighting.\n              Note: Only z (vertical) offset is supported. XY offsets are ignored.\n              Does not work correctly with an XY offset map (mesh collision)" },
			};
#endif
			auto NewProp_bUseMaterialPositionOffsetInStaticLighting_SetBit = [](void* Obj){ ((ALandscapeProxy*)Obj)->bUseMaterialPositionOffsetInStaticLighting = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseMaterialPositionOffsetInStaticLighting = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseMaterialPositionOffsetInStaticLighting", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ALandscapeProxy), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseMaterialPositionOffsetInStaticLighting_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseMaterialPositionOffsetInStaticLighting_MetaData, ARRAY_COUNT(NewProp_bUseMaterialPositionOffsetInStaticLighting_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightingChannels_MetaData[] = {
				{ "Category", "Lighting" },
				{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
				{ "ToolTip", "Channels that this Landscape should be in.  Lights with matching channels will affect the Landscape.\nThese channels only apply to opaque materials, direct lighting, and dynamic lighting and shadowing." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LightingChannels = { UE4CodeGen_Private::EPropertyClass::Struct, "LightingChannels", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000015, 1, nullptr, STRUCT_OFFSET(ALandscapeProxy, LightingChannels), Z_Construct_UScriptStruct_FLightingChannels, METADATA_PARAMS(NewProp_LightingChannels_MetaData, ARRAY_COUNT(NewProp_LightingChannels_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCastFarShadow_MetaData[] = {
				{ "Category", "Lighting" },
				{ "DisplayName", "Far Shadow" },
				{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
				{ "ToolTip", "Whether this primitive should cast shadows in the far shadow cascades." },
			};
#endif
			auto NewProp_bCastFarShadow_SetBit = [](void* Obj){ ((ALandscapeProxy*)Obj)->bCastFarShadow = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCastFarShadow = { UE4CodeGen_Private::EPropertyClass::Bool, "bCastFarShadow", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ALandscapeProxy), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCastFarShadow_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCastFarShadow_MetaData, ARRAY_COUNT(NewProp_bCastFarShadow_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCastShadowAsTwoSided_MetaData[] = {
				{ "Category", "Lighting" },
				{ "DisplayName", "Shadow Two Sided" },
				{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
				{ "ToolTip", "Whether this primitive should cast dynamic shadows as if it were a two sided material." },
			};
#endif
			auto NewProp_bCastShadowAsTwoSided_SetBit = [](void* Obj){ ((ALandscapeProxy*)Obj)->bCastShadowAsTwoSided = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCastShadowAsTwoSided = { UE4CodeGen_Private::EPropertyClass::Bool, "bCastShadowAsTwoSided", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ALandscapeProxy), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCastShadowAsTwoSided_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCastShadowAsTwoSided_MetaData, ARRAY_COUNT(NewProp_bCastShadowAsTwoSided_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCastStaticShadow_MetaData[] = {
				{ "Category", "Lighting" },
				{ "DisplayName", "Static Shadow" },
				{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
			};
#endif
			auto NewProp_bCastStaticShadow_SetBit = [](void* Obj){ ((ALandscapeProxy*)Obj)->bCastStaticShadow = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCastStaticShadow = { UE4CodeGen_Private::EPropertyClass::Bool, "bCastStaticShadow", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ALandscapeProxy), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCastStaticShadow_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCastStaticShadow_MetaData, ARRAY_COUNT(NewProp_bCastStaticShadow_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticLightingResolution_MetaData[] = {
				{ "Category", "Lighting" },
				{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
				{ "ToolTip", "The resolution to cache lighting at, in texels/quad in one axis\nTotal resolution would be changed by StaticLightingResolution*StaticLightingResolution\nAutomatically calculate proper value for removing seams" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StaticLightingResolution = { UE4CodeGen_Private::EPropertyClass::Float, "StaticLightingResolution", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ALandscapeProxy, StaticLightingResolution), METADATA_PARAMS(NewProp_StaticLightingResolution_MetaData, ARRAY_COUNT(NewProp_StaticLightingResolution_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasLandscapeGrass_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
				{ "ToolTip", "Only used outside of the editor (e.g. in cooked builds)\nDisables landscape grass processing entirely if no landscape components have landscape grass configured" },
			};
#endif
			auto NewProp_bHasLandscapeGrass_SetBit = [](void* Obj){ ((ALandscapeProxy*)Obj)->bHasLandscapeGrass = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasLandscapeGrass = { UE4CodeGen_Private::EPropertyClass::Bool, "bHasLandscapeGrass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ALandscapeProxy), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bHasLandscapeGrass_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bHasLandscapeGrass_MetaData, ARRAY_COUNT(NewProp_bHasLandscapeGrass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FoliageComponents_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FoliageComponents = { UE4CodeGen_Private::EPropertyClass::Array, "FoliageComponents", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000202008, 1, nullptr, STRUCT_OFFSET(ALandscapeProxy, FoliageComponents), METADATA_PARAMS(NewProp_FoliageComponents_MetaData, ARRAY_COUNT(NewProp_FoliageComponents_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FoliageComponents_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "FoliageComponents", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000080008, 1, nullptr, 0, Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionComponents_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
				{ "ToolTip", "Array of LandscapeHeightfieldCollisionComponent" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CollisionComponents = { UE4CodeGen_Private::EPropertyClass::Array, "CollisionComponents", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000008, 1, nullptr, STRUCT_OFFSET(ALandscapeProxy, CollisionComponents), METADATA_PARAMS(NewProp_CollisionComponents_MetaData, ARRAY_COUNT(NewProp_CollisionComponents_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CollisionComponents_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "CollisionComponents", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000080008, 1, nullptr, 0, Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LandscapeComponents_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
				{ "ToolTip", "The array of LandscapeComponent that are used by the landscape" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LandscapeComponents = { UE4CodeGen_Private::EPropertyClass::Array, "LandscapeComponents", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000008, 1, nullptr, STRUCT_OFFSET(ALandscapeProxy, LandscapeComponents), METADATA_PARAMS(NewProp_LandscapeComponents_MetaData, ARRAY_COUNT(NewProp_LandscapeComponents_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LandscapeComponents_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "LandscapeComponents", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000080008, 1, nullptr, 0, Z_Construct_UClass_ULandscapeComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PositiveZBoundsExtension_MetaData[] = {
				{ "Category", "Landscape" },
				{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
				{ "ToolTip", "Allows overriding the landscape bounds. This is useful if you distort the landscape with world-position-offset, for example\nExtension value in the positive Z axis, positive value increases bound size\nNote that this can also be overridden per-component when the component is selected with the component select tool" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PositiveZBoundsExtension = { UE4CodeGen_Private::EPropertyClass::Float, "PositiveZBoundsExtension", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ALandscapeProxy, PositiveZBoundsExtension), METADATA_PARAMS(NewProp_PositiveZBoundsExtension_MetaData, ARRAY_COUNT(NewProp_PositiveZBoundsExtension_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NegativeZBoundsExtension_MetaData[] = {
				{ "Category", "Landscape" },
				{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
				{ "ToolTip", "Allows overriding the landscape bounds. This is useful if you distort the landscape with world-position-offset, for example\nExtension value in the negative Z axis, positive value increases bound size\nNote that this can also be overridden per-component when the component is selected with the component select tool" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NegativeZBoundsExtension = { UE4CodeGen_Private::EPropertyClass::Float, "NegativeZBoundsExtension", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ALandscapeProxy, NegativeZBoundsExtension), METADATA_PARAMS(NewProp_NegativeZBoundsExtension_MetaData, ARRAY_COUNT(NewProp_NegativeZBoundsExtension_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LandscapeHoleMaterial_MetaData[] = {
				{ "Category", "Landscape" },
				{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
				{ "ToolTip", "Material used to render landscape components with holes. If not set, LandscapeMaterial will be used (blend mode will be overridden to Masked if it is set to Opaque)" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LandscapeHoleMaterial = { UE4CodeGen_Private::EPropertyClass::Object, "LandscapeHoleMaterial", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, STRUCT_OFFSET(ALandscapeProxy, LandscapeHoleMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(NewProp_LandscapeHoleMaterial_MetaData, ARRAY_COUNT(NewProp_LandscapeHoleMaterial_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LandscapeMaterial_MetaData[] = {
				{ "Category", "Landscape" },
				{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
				{ "ToolTip", "Combined material used to render the landscape" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LandscapeMaterial = { UE4CodeGen_Private::EPropertyClass::Object, "LandscapeMaterial", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ALandscapeProxy, LandscapeMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(NewProp_LandscapeMaterial_MetaData, ARRAY_COUNT(NewProp_LandscapeMaterial_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StreamingDistanceMultiplier_MetaData[] = {
				{ "Category", "Landscape" },
				{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
				{ "ToolTip", "Allows artists to adjust the distance where textures using UV 0 are streamed in/out.\n1.0 is the default, whereas a higher value increases the streamed-in resolution.\nValue can be < 0 (from legcay content, or code changes)" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StreamingDistanceMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "StreamingDistanceMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ALandscapeProxy, StreamingDistanceMultiplier), METADATA_PARAMS(NewProp_StreamingDistanceMultiplier_MetaData, ARRAY_COUNT(NewProp_StreamingDistanceMultiplier_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultPhysMaterial_MetaData[] = {
				{ "Category", "Landscape" },
				{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
				{ "ToolTip", "Default physical material, used when no per-layer values physical materials" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultPhysMaterial = { UE4CodeGen_Private::EPropertyClass::Object, "DefaultPhysMaterial", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ALandscapeProxy, DefaultPhysMaterial), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(NewProp_DefaultPhysMaterial_MetaData, ARRAY_COUNT(NewProp_DefaultPhysMaterial_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticLightingLOD_MetaData[] = {
				{ "Category", "Lighting" },
				{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
				{ "ToolTip", "LOD level to use when running lightmass (increase to 1 or 2 for large landscapes to stop lightmass crashing)" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_StaticLightingLOD = { UE4CodeGen_Private::EPropertyClass::Int, "StaticLightingLOD", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ALandscapeProxy, StaticLightingLOD), METADATA_PARAMS(NewProp_StaticLightingLOD_MetaData, ARRAY_COUNT(NewProp_StaticLightingLOD_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetDisplayOrder_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
				{ "ToolTip", "Display Order mode for the targets" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TargetDisplayOrder = { UE4CodeGen_Private::EPropertyClass::Enum, "TargetDisplayOrder", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000c00000000, 1, nullptr, STRUCT_OFFSET(ALandscapeProxy, TargetDisplayOrder), Z_Construct_UEnum_Landscape_ELandscapeLayerDisplayMode, METADATA_PARAMS(NewProp_TargetDisplayOrder_MetaData, ARRAY_COUNT(NewProp_TargetDisplayOrder_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_TargetDisplayOrder_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetDisplayOrderList_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
				{ "ToolTip", "Display Order of the targets" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TargetDisplayOrderList = { UE4CodeGen_Private::EPropertyClass::Array, "TargetDisplayOrderList", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000c00000000, 1, nullptr, STRUCT_OFFSET(ALandscapeProxy, TargetDisplayOrderList), METADATA_PARAMS(NewProp_TargetDisplayOrderList_MetaData, ARRAY_COUNT(NewProp_TargetDisplayOrderList_MetaData)) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_TargetDisplayOrderList_Inner = { UE4CodeGen_Private::EPropertyClass::Name, "TargetDisplayOrderList", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000800000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExportLOD_MetaData[] = {
				{ "Category", "LOD" },
				{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
				{ "ToolTip", "LOD level to use when exporting the landscape to obj or FBX" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ExportLOD = { UE4CodeGen_Private::EPropertyClass::Int, "ExportLOD", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040800000001, 1, nullptr, STRUCT_OFFSET(ALandscapeProxy, ExportLOD), METADATA_PARAMS(NewProp_ExportLOD_MetaData, ARRAY_COUNT(NewProp_ExportLOD_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODFalloff_MetaData[] = {
				{ "Category", "LOD" },
				{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_LODFalloff = { UE4CodeGen_Private::EPropertyClass::Byte, "LODFalloff", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ALandscapeProxy, LODFalloff), Z_Construct_UEnum_Landscape_ELandscapeLODFalloff, METADATA_PARAMS(NewProp_LODFalloff_MetaData, ARRAY_COUNT(NewProp_LODFalloff_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODDistanceFactor_MetaData[] = {
				{ "Category", "LOD" },
				{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LODDistanceFactor = { UE4CodeGen_Private::EPropertyClass::Float, "LODDistanceFactor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ALandscapeProxy, LODDistanceFactor), METADATA_PARAMS(NewProp_LODDistanceFactor_MetaData, ARRAY_COUNT(NewProp_LODDistanceFactor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxLODLevel_MetaData[] = {
				{ "Category", "LOD" },
				{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
				{ "ToolTip", "Max LOD level to use when rendering, -1 means the max available" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxLODLevel = { UE4CodeGen_Private::EPropertyClass::Int, "MaxLODLevel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ALandscapeProxy, MaxLODLevel), METADATA_PARAMS(NewProp_MaxLODLevel_MetaData, ARRAY_COUNT(NewProp_MaxLODLevel_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LandscapeSectionOffset_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
				{ "ToolTip", "Offset in quads from global components grid origin (in quads) *" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LandscapeSectionOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "LandscapeSectionOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(ALandscapeProxy, LandscapeSectionOffset), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(NewProp_LandscapeSectionOffset_MetaData, ARRAY_COUNT(NewProp_LandscapeSectionOffset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LandscapeGuid_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
				{ "ToolTip", "Guid for LandscapeEditorInfo *" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LandscapeGuid = { UE4CodeGen_Private::EPropertyClass::Struct, "LandscapeGuid", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(ALandscapeProxy, LandscapeGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_LandscapeGuid_MetaData, ARRAY_COUNT(NewProp_LandscapeGuid_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineComponent_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SplineComponent = { UE4CodeGen_Private::EPropertyClass::Object, "SplineComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080008, 1, nullptr, STRUCT_OFFSET(ALandscapeProxy, SplineComponent), Z_Construct_UClass_ULandscapeSplinesComponent_NoRegister, METADATA_PARAMS(NewProp_SplineComponent_MetaData, ARRAY_COUNT(NewProp_SplineComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseLandscapeForCullingInvisibleHLODVertices,
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxPaintedLayersPerComponent,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NavigationGeometryGatheringMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NavigationGeometryGatheringMode_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUsedForNavigation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NumSubsections,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SubsectionSizeQuads,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ComponentSizeQuads,
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EditorLayerSettings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EditorLayerSettings_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReimportHeightmapFilePath,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EditorCachedLayerInfos,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EditorCachedLayerInfos_Inner,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bBakeMaterialPositionOffsetIntoCollision,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bGenerateOverlapEvents,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BodyInstance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CollisionThickness,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SimpleCollisionMipLevel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CollisionMipLevel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LightmassSettings,
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsMovingToLevel,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CustomDepthStencilValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bRenderCustomDepth,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseMaterialPositionOffsetInStaticLighting,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LightingChannels,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCastFarShadow,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCastShadowAsTwoSided,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCastStaticShadow,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StaticLightingResolution,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bHasLandscapeGrass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FoliageComponents,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FoliageComponents_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CollisionComponents,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CollisionComponents_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LandscapeComponents,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LandscapeComponents_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PositiveZBoundsExtension,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NegativeZBoundsExtension,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LandscapeHoleMaterial,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LandscapeMaterial,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StreamingDistanceMultiplier,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultPhysMaterial,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StaticLightingLOD,
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetDisplayOrder,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetDisplayOrder_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetDisplayOrderList,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetDisplayOrderList_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ExportLOD,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LODFalloff,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LODDistanceFactor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxLODLevel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LandscapeSectionOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LandscapeGuid,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SplineComponent,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ALandscapeProxy>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ALandscapeProxy::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880081u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(ALandscapeProxy, 2401152000);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALandscapeProxy(Z_Construct_UClass_ALandscapeProxy, &ALandscapeProxy::StaticClass, TEXT("/Script/Landscape"), TEXT("ALandscapeProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALandscapeProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
