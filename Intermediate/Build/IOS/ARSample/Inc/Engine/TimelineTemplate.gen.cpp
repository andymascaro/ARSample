// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/TimelineTemplate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTimelineTemplate() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTTLinearColorTrack();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTTTrackBase();
	ENGINE_API UClass* Z_Construct_UClass_UCurveLinearColor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTTVectorTrack();
	ENGINE_API UClass* Z_Construct_UClass_UCurveVector_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTTFloatTrack();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTTEventTrack();
	ENGINE_API UClass* Z_Construct_UClass_UTimelineTemplate_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTimelineTemplate();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBPVariableMetaDataEntry();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETimelineLengthMode();
// End Cross Module References
class UScriptStruct* FTTLinearColorTrack::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FTTLinearColorTrack_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTTLinearColorTrack, Z_Construct_UPackage__Script_Engine(), TEXT("TTLinearColorTrack"), sizeof(FTTLinearColorTrack), Get_Z_Construct_UScriptStruct_FTTLinearColorTrack_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTTLinearColorTrack(FTTLinearColorTrack::StaticStruct, TEXT("/Script/Engine"), TEXT("TTLinearColorTrack"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFTTLinearColorTrack
{
	FScriptStruct_Engine_StaticRegisterNativesFTTLinearColorTrack()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TTLinearColorTrack")),new UScriptStruct::TCppStructOps<FTTLinearColorTrack>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFTTLinearColorTrack;
	UScriptStruct* Z_Construct_UScriptStruct_FTTLinearColorTrack()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTTLinearColorTrack_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TTLinearColorTrack"), sizeof(FTTLinearColorTrack), Get_Z_Construct_UScriptStruct_FTTLinearColorTrack_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
				{ "ToolTip", "Structure storing information about one color interpolation track" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTTLinearColorTrack>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurveLinearColor_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
				{ "ToolTip", "Curve object used to define color value over time" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurveLinearColor = { UE4CodeGen_Private::EPropertyClass::Object, "CurveLinearColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FTTLinearColorTrack, CurveLinearColor), Z_Construct_UClass_UCurveLinearColor_NoRegister, METADATA_PARAMS(NewProp_CurveLinearColor_MetaData, ARRAY_COUNT(NewProp_CurveLinearColor_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurveLinearColor,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				Z_Construct_UScriptStruct_FTTTrackBase,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"TTLinearColorTrack",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FTTLinearColorTrack),
				alignof(FTTLinearColorTrack),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTTLinearColorTrack_CRC() { return 3673200341U; }
class UScriptStruct* FTTVectorTrack::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FTTVectorTrack_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTTVectorTrack, Z_Construct_UPackage__Script_Engine(), TEXT("TTVectorTrack"), sizeof(FTTVectorTrack), Get_Z_Construct_UScriptStruct_FTTVectorTrack_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTTVectorTrack(FTTVectorTrack::StaticStruct, TEXT("/Script/Engine"), TEXT("TTVectorTrack"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFTTVectorTrack
{
	FScriptStruct_Engine_StaticRegisterNativesFTTVectorTrack()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TTVectorTrack")),new UScriptStruct::TCppStructOps<FTTVectorTrack>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFTTVectorTrack;
	UScriptStruct* Z_Construct_UScriptStruct_FTTVectorTrack()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTTVectorTrack_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TTVectorTrack"), sizeof(FTTVectorTrack), Get_Z_Construct_UScriptStruct_FTTVectorTrack_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
				{ "ToolTip", "Structure storing information about one vector interpolation track" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTTVectorTrack>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurveVector_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
				{ "ToolTip", "Curve object used to define vector value over time" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurveVector = { UE4CodeGen_Private::EPropertyClass::Object, "CurveVector", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FTTVectorTrack, CurveVector), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(NewProp_CurveVector_MetaData, ARRAY_COUNT(NewProp_CurveVector_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurveVector,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				Z_Construct_UScriptStruct_FTTTrackBase,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"TTVectorTrack",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FTTVectorTrack),
				alignof(FTTVectorTrack),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTTVectorTrack_CRC() { return 1978471098U; }
class UScriptStruct* FTTFloatTrack::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FTTFloatTrack_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTTFloatTrack, Z_Construct_UPackage__Script_Engine(), TEXT("TTFloatTrack"), sizeof(FTTFloatTrack), Get_Z_Construct_UScriptStruct_FTTFloatTrack_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTTFloatTrack(FTTFloatTrack::StaticStruct, TEXT("/Script/Engine"), TEXT("TTFloatTrack"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFTTFloatTrack
{
	FScriptStruct_Engine_StaticRegisterNativesFTTFloatTrack()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TTFloatTrack")),new UScriptStruct::TCppStructOps<FTTFloatTrack>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFTTFloatTrack;
	UScriptStruct* Z_Construct_UScriptStruct_FTTFloatTrack()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTTFloatTrack_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TTFloatTrack"), sizeof(FTTFloatTrack), Get_Z_Construct_UScriptStruct_FTTFloatTrack_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
				{ "ToolTip", "Structure storing information about one float interpolation track" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTTFloatTrack>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurveFloat_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
				{ "ToolTip", "Curve object used to define float value over time" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurveFloat = { UE4CodeGen_Private::EPropertyClass::Object, "CurveFloat", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FTTFloatTrack, CurveFloat), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(NewProp_CurveFloat_MetaData, ARRAY_COUNT(NewProp_CurveFloat_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurveFloat,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				Z_Construct_UScriptStruct_FTTTrackBase,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"TTFloatTrack",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FTTFloatTrack),
				alignof(FTTFloatTrack),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTTFloatTrack_CRC() { return 120457603U; }
class UScriptStruct* FTTEventTrack::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FTTEventTrack_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTTEventTrack, Z_Construct_UPackage__Script_Engine(), TEXT("TTEventTrack"), sizeof(FTTEventTrack), Get_Z_Construct_UScriptStruct_FTTEventTrack_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTTEventTrack(FTTEventTrack::StaticStruct, TEXT("/Script/Engine"), TEXT("TTEventTrack"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFTTEventTrack
{
	FScriptStruct_Engine_StaticRegisterNativesFTTEventTrack()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TTEventTrack")),new UScriptStruct::TCppStructOps<FTTEventTrack>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFTTEventTrack;
	UScriptStruct* Z_Construct_UScriptStruct_FTTEventTrack()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTTEventTrack_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TTEventTrack"), sizeof(FTTEventTrack), Get_Z_Construct_UScriptStruct_FTTEventTrack_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
				{ "ToolTip", "Structure storing information about one event track" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTTEventTrack>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurveKeys_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
				{ "ToolTip", "Curve object used to store keys" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurveKeys = { UE4CodeGen_Private::EPropertyClass::Object, "CurveKeys", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FTTEventTrack, CurveKeys), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(NewProp_CurveKeys_MetaData, ARRAY_COUNT(NewProp_CurveKeys_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurveKeys,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				Z_Construct_UScriptStruct_FTTTrackBase,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"TTEventTrack",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FTTEventTrack),
				alignof(FTTEventTrack),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTTEventTrack_CRC() { return 648158323U; }
class UScriptStruct* FTTTrackBase::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FTTTrackBase_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTTTrackBase, Z_Construct_UPackage__Script_Engine(), TEXT("TTTrackBase"), sizeof(FTTTrackBase), Get_Z_Construct_UScriptStruct_FTTTrackBase_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTTTrackBase(FTTTrackBase::StaticStruct, TEXT("/Script/Engine"), TEXT("TTTrackBase"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFTTTrackBase
{
	FScriptStruct_Engine_StaticRegisterNativesFTTTrackBase()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TTTrackBase")),new UScriptStruct::TCppStructOps<FTTTrackBase>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFTTTrackBase;
	UScriptStruct* Z_Construct_UScriptStruct_FTTTrackBase()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTTTrackBase_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TTTrackBase"), sizeof(FTTTrackBase), Get_Z_Construct_UScriptStruct_FTTTrackBase_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTTTrackBase>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsExternalCurve_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
				{ "ToolTip", "Flag to identify internal/external curve" },
			};
#endif
			auto NewProp_bIsExternalCurve_SetBit = [](void* Obj){ ((FTTTrackBase*)Obj)->bIsExternalCurve = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsExternalCurve = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsExternalCurve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FTTTrackBase), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsExternalCurve_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsExternalCurve_MetaData, ARRAY_COUNT(NewProp_bIsExternalCurve_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackName_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
				{ "ToolTip", "Name of this track" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_TrackName = { UE4CodeGen_Private::EPropertyClass::Name, "TrackName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FTTTrackBase, TrackName), METADATA_PARAMS(NewProp_TrackName_MetaData, ARRAY_COUNT(NewProp_TrackName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsExternalCurve,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TrackName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"TTTrackBase",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FTTTrackBase),
				alignof(FTTTrackBase),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTTTrackBase_CRC() { return 2783965755U; }
	void UTimelineTemplate::StaticRegisterNativesUTimelineTemplate()
	{
	}
	UClass* Z_Construct_UClass_UTimelineTemplate_NoRegister()
	{
		return UTimelineTemplate::StaticClass();
	}
	UClass* Z_Construct_UClass_UTimelineTemplate()
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
				{ "IncludePath", "Engine/TimelineTemplate.h" },
				{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimelineGuid_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TimelineGuid = { UE4CodeGen_Private::EPropertyClass::Struct, "TimelineGuid", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000200000, 1, nullptr, STRUCT_OFFSET(UTimelineTemplate, TimelineGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_TimelineGuid_MetaData, ARRAY_COUNT(NewProp_TimelineGuid_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MetaDataArray_MetaData[] = {
				{ "Category", "BPVariableDescription" },
				{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
				{ "ToolTip", "Metadata information for this timeline" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MetaDataArray = { UE4CodeGen_Private::EPropertyClass::Array, "MetaDataArray", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UTimelineTemplate, MetaDataArray), METADATA_PARAMS(NewProp_MetaDataArray_MetaData, ARRAY_COUNT(NewProp_MetaDataArray_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_MetaDataArray_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "MetaDataArray", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FBPVariableMetaDataEntry, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinearColorTracks_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
				{ "ToolTip", "Set of linear color interpolation tracks" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LinearColorTracks = { UE4CodeGen_Private::EPropertyClass::Array, "LinearColorTracks", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UTimelineTemplate, LinearColorTracks), METADATA_PARAMS(NewProp_LinearColorTracks_MetaData, ARRAY_COUNT(NewProp_LinearColorTracks_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LinearColorTracks_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "LinearColorTracks", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FTTLinearColorTrack, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VectorTracks_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
				{ "ToolTip", "Set of vector interpolation tracks" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VectorTracks = { UE4CodeGen_Private::EPropertyClass::Array, "VectorTracks", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UTimelineTemplate, VectorTracks), METADATA_PARAMS(NewProp_VectorTracks_MetaData, ARRAY_COUNT(NewProp_VectorTracks_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_VectorTracks_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "VectorTracks", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FTTVectorTrack, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatTracks_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
				{ "ToolTip", "Set of float interpolation tracks" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FloatTracks = { UE4CodeGen_Private::EPropertyClass::Array, "FloatTracks", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UTimelineTemplate, FloatTracks), METADATA_PARAMS(NewProp_FloatTracks_MetaData, ARRAY_COUNT(NewProp_FloatTracks_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_FloatTracks_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "FloatTracks", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FTTFloatTrack, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventTracks_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
				{ "ToolTip", "Set of event tracks" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EventTracks = { UE4CodeGen_Private::EPropertyClass::Array, "EventTracks", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UTimelineTemplate, EventTracks), METADATA_PARAMS(NewProp_EventTracks_MetaData, ARRAY_COUNT(NewProp_EventTracks_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_EventTracks_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "EventTracks", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FTTEventTrack, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnoreTimeDilation_MetaData[] = {
				{ "Category", "TimelineTemplate" },
				{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
				{ "ToolTip", "If we want the timeline to ignore global time dilation" },
			};
#endif
			auto NewProp_bIgnoreTimeDilation_SetBit = [](void* Obj){ ((UTimelineTemplate*)Obj)->bIgnoreTimeDilation = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreTimeDilation = { UE4CodeGen_Private::EPropertyClass::Bool, "bIgnoreTimeDilation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UTimelineTemplate), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIgnoreTimeDilation_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIgnoreTimeDilation_MetaData, ARRAY_COUNT(NewProp_bIgnoreTimeDilation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bValidatedAsWired_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
				{ "ToolTip", "Compiler Validated As Wired up" },
			};
#endif
			auto NewProp_bValidatedAsWired_SetBit = [](void* Obj){ ((UTimelineTemplate*)Obj)->bValidatedAsWired = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bValidatedAsWired = { UE4CodeGen_Private::EPropertyClass::Bool, "bValidatedAsWired", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UTimelineTemplate), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bValidatedAsWired_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bValidatedAsWired_MetaData, ARRAY_COUNT(NewProp_bValidatedAsWired_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReplicated_MetaData[] = {
				{ "Category", "TimelineTemplate" },
				{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
				{ "ToolTip", "If we want the timeline to loop" },
			};
#endif
			auto NewProp_bReplicated_SetBit = [](void* Obj){ ((UTimelineTemplate*)Obj)->bReplicated = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReplicated = { UE4CodeGen_Private::EPropertyClass::Bool, "bReplicated", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UTimelineTemplate), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bReplicated_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bReplicated_MetaData, ARRAY_COUNT(NewProp_bReplicated_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLoop_MetaData[] = {
				{ "Category", "TimelineTemplate" },
				{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
				{ "ToolTip", "If we want the timeline to loop" },
			};
#endif
			auto NewProp_bLoop_SetBit = [](void* Obj){ ((UTimelineTemplate*)Obj)->bLoop = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLoop = { UE4CodeGen_Private::EPropertyClass::Bool, "bLoop", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UTimelineTemplate), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bLoop_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bLoop_MetaData, ARRAY_COUNT(NewProp_bLoop_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoPlay_MetaData[] = {
				{ "Category", "TimelineTemplate" },
				{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
				{ "ToolTip", "If we want the timeline to auto-play" },
			};
#endif
			auto NewProp_bAutoPlay_SetBit = [](void* Obj){ ((UTimelineTemplate*)Obj)->bAutoPlay = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoPlay = { UE4CodeGen_Private::EPropertyClass::Bool, "bAutoPlay", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UTimelineTemplate), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAutoPlay_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAutoPlay_MetaData, ARRAY_COUNT(NewProp_bAutoPlay_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LengthMode_MetaData[] = {
				{ "Category", "TimelineTemplate" },
				{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
				{ "ToolTip", "How we want the timeline to determine its own length (e.g. specified length, last keyframe)" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_LengthMode = { UE4CodeGen_Private::EPropertyClass::Byte, "LengthMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UTimelineTemplate, LengthMode), Z_Construct_UEnum_Engine_ETimelineLengthMode, METADATA_PARAMS(NewProp_LengthMode_MetaData, ARRAY_COUNT(NewProp_LengthMode_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimelineLength_MetaData[] = {
				{ "Category", "TimelineTemplate" },
				{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
				{ "ToolTip", "Length of this timeline" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimelineLength = { UE4CodeGen_Private::EPropertyClass::Float, "TimelineLength", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UTimelineTemplate, TimelineLength), METADATA_PARAMS(NewProp_TimelineLength_MetaData, ARRAY_COUNT(NewProp_TimelineLength_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TimelineGuid,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MetaDataArray,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MetaDataArray_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LinearColorTracks,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LinearColorTracks_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VectorTracks,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VectorTracks_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FloatTracks,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FloatTracks_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EventTracks,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EventTracks_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIgnoreTimeDilation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bValidatedAsWired,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bReplicated,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bLoop,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAutoPlay,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LengthMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TimelineLength,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UTimelineTemplate>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UTimelineTemplate::StaticClass,
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
	IMPLEMENT_CLASS(UTimelineTemplate, 3622227579);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTimelineTemplate(Z_Construct_UClass_UTimelineTemplate, &UTimelineTemplate::StaticClass, TEXT("/Script/Engine"), TEXT("UTimelineTemplate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTimelineTemplate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
