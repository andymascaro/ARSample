// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/InterpCurveEdSetup.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpCurveEdSetup() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCurveEdTab();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCurveEdEntry();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpCurveEdSetup_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpCurveEdSetup();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FCurveEdTab::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FCurveEdTab_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCurveEdTab, Z_Construct_UPackage__Script_Engine(), TEXT("CurveEdTab"), sizeof(FCurveEdTab), Get_Z_Construct_UScriptStruct_FCurveEdTab_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCurveEdTab(FCurveEdTab::StaticStruct, TEXT("/Script/Engine"), TEXT("CurveEdTab"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFCurveEdTab
{
	FScriptStruct_Engine_StaticRegisterNativesFCurveEdTab()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CurveEdTab")),new UScriptStruct::TCppStructOps<FCurveEdTab>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFCurveEdTab;
	UScriptStruct* Z_Construct_UScriptStruct_FCurveEdTab()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCurveEdTab_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CurveEdTab"), sizeof(FCurveEdTab), Get_Z_Construct_UScriptStruct_FCurveEdTab_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/InterpCurveEdSetup.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCurveEdTab>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViewEndOutput_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/InterpCurveEdSetup.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ViewEndOutput = { UE4CodeGen_Private::EPropertyClass::Float, "ViewEndOutput", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FCurveEdTab, ViewEndOutput), METADATA_PARAMS(NewProp_ViewEndOutput_MetaData, ARRAY_COUNT(NewProp_ViewEndOutput_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViewStartOutput_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/InterpCurveEdSetup.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ViewStartOutput = { UE4CodeGen_Private::EPropertyClass::Float, "ViewStartOutput", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FCurveEdTab, ViewStartOutput), METADATA_PARAMS(NewProp_ViewStartOutput_MetaData, ARRAY_COUNT(NewProp_ViewStartOutput_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViewEndInput_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/InterpCurveEdSetup.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ViewEndInput = { UE4CodeGen_Private::EPropertyClass::Float, "ViewEndInput", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FCurveEdTab, ViewEndInput), METADATA_PARAMS(NewProp_ViewEndInput_MetaData, ARRAY_COUNT(NewProp_ViewEndInput_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViewStartInput_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/InterpCurveEdSetup.h" },
				{ "ToolTip", "Remember the view setting for each tab." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ViewStartInput = { UE4CodeGen_Private::EPropertyClass::Float, "ViewStartInput", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FCurveEdTab, ViewStartInput), METADATA_PARAMS(NewProp_ViewStartInput_MetaData, ARRAY_COUNT(NewProp_ViewStartInput_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Curves_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/InterpCurveEdSetup.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Curves = { UE4CodeGen_Private::EPropertyClass::Array, "Curves", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FCurveEdTab, Curves), METADATA_PARAMS(NewProp_Curves_MetaData, ARRAY_COUNT(NewProp_Curves_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Curves_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Curves", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FCurveEdEntry, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TabName_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/InterpCurveEdSetup.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_TabName = { UE4CodeGen_Private::EPropertyClass::Str, "TabName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FCurveEdTab, TabName), METADATA_PARAMS(NewProp_TabName_MetaData, ARRAY_COUNT(NewProp_TabName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ViewEndOutput,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ViewStartOutput,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ViewEndInput,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ViewStartInput,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Curves,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Curves_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TabName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"CurveEdTab",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FCurveEdTab),
				alignof(FCurveEdTab),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCurveEdTab_CRC() { return 1253654065U; }
class UScriptStruct* FCurveEdEntry::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FCurveEdEntry_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCurveEdEntry, Z_Construct_UPackage__Script_Engine(), TEXT("CurveEdEntry"), sizeof(FCurveEdEntry), Get_Z_Construct_UScriptStruct_FCurveEdEntry_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCurveEdEntry(FCurveEdEntry::StaticStruct, TEXT("/Script/Engine"), TEXT("CurveEdEntry"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFCurveEdEntry
{
	FScriptStruct_Engine_StaticRegisterNativesFCurveEdEntry()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CurveEdEntry")),new UScriptStruct::TCppStructOps<FCurveEdEntry>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFCurveEdEntry;
	UScriptStruct* Z_Construct_UScriptStruct_FCurveEdEntry()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCurveEdEntry_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CurveEdEntry"), sizeof(FCurveEdEntry), Get_Z_Construct_UScriptStruct_FCurveEdEntry_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/InterpCurveEdSetup.h" },
				{ "ToolTip", "Information about a particule curve being viewed.\nProperty could be an FInterpCurve, a DistributionFloat or a DistributionVector" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCurveEdEntry>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClampHigh_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/InterpCurveEdSetup.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ClampHigh = { UE4CodeGen_Private::EPropertyClass::Float, "ClampHigh", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FCurveEdEntry, ClampHigh), METADATA_PARAMS(NewProp_ClampHigh_MetaData, ARRAY_COUNT(NewProp_ClampHigh_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClampLow_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/InterpCurveEdSetup.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ClampLow = { UE4CodeGen_Private::EPropertyClass::Float, "ClampLow", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FCurveEdEntry, ClampLow), METADATA_PARAMS(NewProp_ClampLow_MetaData, ARRAY_COUNT(NewProp_ClampLow_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bClamp_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/InterpCurveEdSetup.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_bClamp = { UE4CodeGen_Private::EPropertyClass::Int, "bClamp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FCurveEdEntry, bClamp), METADATA_PARAMS(NewProp_bClamp_MetaData, ARRAY_COUNT(NewProp_bClamp_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFloatingPointColorCurve_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/InterpCurveEdSetup.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_bFloatingPointColorCurve = { UE4CodeGen_Private::EPropertyClass::Int, "bFloatingPointColorCurve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FCurveEdEntry, bFloatingPointColorCurve), METADATA_PARAMS(NewProp_bFloatingPointColorCurve_MetaData, ARRAY_COUNT(NewProp_bFloatingPointColorCurve_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bColorCurve_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/InterpCurveEdSetup.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_bColorCurve = { UE4CodeGen_Private::EPropertyClass::Int, "bColorCurve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FCurveEdEntry, bColorCurve), METADATA_PARAMS(NewProp_bColorCurve_MetaData, ARRAY_COUNT(NewProp_bColorCurve_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHideCurve_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/InterpCurveEdSetup.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_bHideCurve = { UE4CodeGen_Private::EPropertyClass::Int, "bHideCurve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FCurveEdEntry, bHideCurve), METADATA_PARAMS(NewProp_bHideCurve_MetaData, ARRAY_COUNT(NewProp_bHideCurve_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurveName_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/InterpCurveEdSetup.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_CurveName = { UE4CodeGen_Private::EPropertyClass::Str, "CurveName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FCurveEdEntry, CurveName), METADATA_PARAMS(NewProp_CurveName_MetaData, ARRAY_COUNT(NewProp_CurveName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurveColor_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/InterpCurveEdSetup.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurveColor = { UE4CodeGen_Private::EPropertyClass::Struct, "CurveColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FCurveEdEntry, CurveColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(NewProp_CurveColor_MetaData, ARRAY_COUNT(NewProp_CurveColor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurveObject_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/InterpCurveEdSetup.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurveObject = { UE4CodeGen_Private::EPropertyClass::Object, "CurveObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FCurveEdEntry, CurveObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(NewProp_CurveObject_MetaData, ARRAY_COUNT(NewProp_CurveObject_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClampHigh,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClampLow,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bClamp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bFloatingPointColorCurve,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bColorCurve,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bHideCurve,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurveName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurveColor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurveObject,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"CurveEdEntry",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FCurveEdEntry),
				alignof(FCurveEdEntry),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCurveEdEntry_CRC() { return 1298222570U; }
	void UInterpCurveEdSetup::StaticRegisterNativesUInterpCurveEdSetup()
	{
	}
	UClass* Z_Construct_UClass_UInterpCurveEdSetup_NoRegister()
	{
		return UInterpCurveEdSetup::StaticClass();
	}
	UClass* Z_Construct_UClass_UInterpCurveEdSetup()
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
				{ "IncludePath", "Engine/InterpCurveEdSetup.h" },
				{ "ModuleRelativePath", "Classes/Engine/InterpCurveEdSetup.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveTab_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/InterpCurveEdSetup.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ActiveTab = { UE4CodeGen_Private::EPropertyClass::Int, "ActiveTab", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UInterpCurveEdSetup, ActiveTab), METADATA_PARAMS(NewProp_ActiveTab_MetaData, ARRAY_COUNT(NewProp_ActiveTab_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tabs_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/InterpCurveEdSetup.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Tabs = { UE4CodeGen_Private::EPropertyClass::Array, "Tabs", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UInterpCurveEdSetup, Tabs), METADATA_PARAMS(NewProp_Tabs_MetaData, ARRAY_COUNT(NewProp_Tabs_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tabs_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Tabs", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FCurveEdTab, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ActiveTab,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Tabs,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Tabs_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UInterpCurveEdSetup>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UInterpCurveEdSetup::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00080080u,
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
	IMPLEMENT_CLASS(UInterpCurveEdSetup, 1195027692);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpCurveEdSetup(Z_Construct_UClass_UInterpCurveEdSetup, &UInterpCurveEdSetup::StaticClass, TEXT("/Script/Engine"), TEXT("UInterpCurveEdSetup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpCurveEdSetup);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
