// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/BlueprintGeneratedClass.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintGeneratedClass() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo();
	COREUOBJECT_API UClass* Z_Construct_UClass_UStruct();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEventGraphFastCallPair();
	COREUOBJECT_API UClass* Z_Construct_UClass_UFunction();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintDebugData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPointerToUberGraphFrame();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDebuggingInfoForSingleFunction();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNodeToCodeAssociation();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintGeneratedClass_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintGeneratedClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UStructProperty();
	ENGINE_API UClass* Z_Construct_UClass_UInheritableComponentHandler_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USimpleConstructionScript_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTimelineTemplate_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDynamicBlueprintBinding_NoRegister();
// End Cross Module References
class UScriptStruct* FBlueprintCookedComponentInstancingData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData, Z_Construct_UPackage__Script_Engine(), TEXT("BlueprintCookedComponentInstancingData"), sizeof(FBlueprintCookedComponentInstancingData), Get_Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBlueprintCookedComponentInstancingData(FBlueprintCookedComponentInstancingData::StaticStruct, TEXT("/Script/Engine"), TEXT("BlueprintCookedComponentInstancingData"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFBlueprintCookedComponentInstancingData
{
	FScriptStruct_Engine_StaticRegisterNativesFBlueprintCookedComponentInstancingData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BlueprintCookedComponentInstancingData")),new UScriptStruct::TCppStructOps<FBlueprintCookedComponentInstancingData>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFBlueprintCookedComponentInstancingData;
	UScriptStruct* Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BlueprintCookedComponentInstancingData"), sizeof(FBlueprintCookedComponentInstancingData), Get_Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
				{ "ToolTip", "Cooked data for a Blueprint component template." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlueprintCookedComponentInstancingData>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChangedPropertyList_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
				{ "ToolTip", "List of property info records with values that differ between the template and the component class CDO. This list will be generated at cook time." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ChangedPropertyList = { UE4CodeGen_Private::EPropertyClass::Array, "ChangedPropertyList", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FBlueprintCookedComponentInstancingData, ChangedPropertyList), METADATA_PARAMS(NewProp_ChangedPropertyList_MetaData, ARRAY_COUNT(NewProp_ChangedPropertyList_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChangedPropertyList_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ChangedPropertyList", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsValid_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
				{ "ToolTip", "Flag indicating whether or not this contains valid cooked data. Note that an empty changed property list can also be a valid template data context." },
			};
#endif
			auto NewProp_bIsValid_SetBit = [](void* Obj){ ((FBlueprintCookedComponentInstancingData*)Obj)->bIsValid = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsValid = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsValid", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FBlueprintCookedComponentInstancingData), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsValid_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsValid_MetaData, ARRAY_COUNT(NewProp_bIsValid_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ChangedPropertyList,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ChangedPropertyList_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsValid,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"BlueprintCookedComponentInstancingData",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FBlueprintCookedComponentInstancingData),
				alignof(FBlueprintCookedComponentInstancingData),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_CRC() { return 1134375024U; }
class UScriptStruct* FBlueprintComponentChangedPropertyInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo, Z_Construct_UPackage__Script_Engine(), TEXT("BlueprintComponentChangedPropertyInfo"), sizeof(FBlueprintComponentChangedPropertyInfo), Get_Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBlueprintComponentChangedPropertyInfo(FBlueprintComponentChangedPropertyInfo::StaticStruct, TEXT("/Script/Engine"), TEXT("BlueprintComponentChangedPropertyInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFBlueprintComponentChangedPropertyInfo
{
	FScriptStruct_Engine_StaticRegisterNativesFBlueprintComponentChangedPropertyInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BlueprintComponentChangedPropertyInfo")),new UScriptStruct::TCppStructOps<FBlueprintComponentChangedPropertyInfo>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFBlueprintComponentChangedPropertyInfo;
	UScriptStruct* Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BlueprintComponentChangedPropertyInfo"), sizeof(FBlueprintComponentChangedPropertyInfo), Get_Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
				{ "ToolTip", "A single changed Blueprint component property." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlueprintComponentChangedPropertyInfo>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropertyScope_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
				{ "ToolTip", "The parent struct (owner) of the changed property." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PropertyScope = { UE4CodeGen_Private::EPropertyClass::Object, "PropertyScope", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FBlueprintComponentChangedPropertyInfo, PropertyScope), Z_Construct_UClass_UStruct, METADATA_PARAMS(NewProp_PropertyScope_MetaData, ARRAY_COUNT(NewProp_PropertyScope_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArrayIndex_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
				{ "ToolTip", "The array index of the changed property." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ArrayIndex = { UE4CodeGen_Private::EPropertyClass::Int, "ArrayIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FBlueprintComponentChangedPropertyInfo, ArrayIndex), METADATA_PARAMS(NewProp_ArrayIndex_MetaData, ARRAY_COUNT(NewProp_ArrayIndex_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
				{ "ToolTip", "The name of the changed property." },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_PropertyName = { UE4CodeGen_Private::EPropertyClass::Name, "PropertyName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FBlueprintComponentChangedPropertyInfo, PropertyName), METADATA_PARAMS(NewProp_PropertyName_MetaData, ARRAY_COUNT(NewProp_PropertyName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PropertyScope,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ArrayIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PropertyName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"BlueprintComponentChangedPropertyInfo",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FBlueprintComponentChangedPropertyInfo),
				alignof(FBlueprintComponentChangedPropertyInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_CRC() { return 1084481019U; }
class UScriptStruct* FEventGraphFastCallPair::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FEventGraphFastCallPair_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEventGraphFastCallPair, Z_Construct_UPackage__Script_Engine(), TEXT("EventGraphFastCallPair"), sizeof(FEventGraphFastCallPair), Get_Z_Construct_UScriptStruct_FEventGraphFastCallPair_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEventGraphFastCallPair(FEventGraphFastCallPair::StaticStruct, TEXT("/Script/Engine"), TEXT("EventGraphFastCallPair"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFEventGraphFastCallPair
{
	FScriptStruct_Engine_StaticRegisterNativesFEventGraphFastCallPair()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EventGraphFastCallPair")),new UScriptStruct::TCppStructOps<FEventGraphFastCallPair>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFEventGraphFastCallPair;
	UScriptStruct* Z_Construct_UScriptStruct_FEventGraphFastCallPair()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEventGraphFastCallPair_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EventGraphFastCallPair"), sizeof(FEventGraphFastCallPair), Get_Z_Construct_UScriptStruct_FEventGraphFastCallPair_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEventGraphFastCallPair>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventGraphCallOffset_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_EventGraphCallOffset = { UE4CodeGen_Private::EPropertyClass::Int, "EventGraphCallOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FEventGraphFastCallPair, EventGraphCallOffset), METADATA_PARAMS(NewProp_EventGraphCallOffset_MetaData, ARRAY_COUNT(NewProp_EventGraphCallOffset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FunctionToPatch_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FunctionToPatch = { UE4CodeGen_Private::EPropertyClass::Object, "FunctionToPatch", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FEventGraphFastCallPair, FunctionToPatch), Z_Construct_UClass_UFunction, METADATA_PARAMS(NewProp_FunctionToPatch_MetaData, ARRAY_COUNT(NewProp_FunctionToPatch_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EventGraphCallOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FunctionToPatch,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"EventGraphFastCallPair",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FEventGraphFastCallPair),
				alignof(FEventGraphFastCallPair),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEventGraphFastCallPair_CRC() { return 1310730545U; }
class UScriptStruct* FBlueprintDebugData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FBlueprintDebugData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlueprintDebugData, Z_Construct_UPackage__Script_Engine(), TEXT("BlueprintDebugData"), sizeof(FBlueprintDebugData), Get_Z_Construct_UScriptStruct_FBlueprintDebugData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBlueprintDebugData(FBlueprintDebugData::StaticStruct, TEXT("/Script/Engine"), TEXT("BlueprintDebugData"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFBlueprintDebugData
{
	FScriptStruct_Engine_StaticRegisterNativesFBlueprintDebugData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BlueprintDebugData")),new UScriptStruct::TCppStructOps<FBlueprintDebugData>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFBlueprintDebugData;
	UScriptStruct* Z_Construct_UScriptStruct_FBlueprintDebugData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBlueprintDebugData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BlueprintDebugData"), sizeof(FBlueprintDebugData), Get_Z_Construct_UScriptStruct_FBlueprintDebugData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlueprintDebugData>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"BlueprintDebugData",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FBlueprintDebugData),
				alignof(FBlueprintDebugData),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBlueprintDebugData_CRC() { return 1844560541U; }
class UScriptStruct* FPointerToUberGraphFrame::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FPointerToUberGraphFrame_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPointerToUberGraphFrame, Z_Construct_UPackage__Script_Engine(), TEXT("PointerToUberGraphFrame"), sizeof(FPointerToUberGraphFrame), Get_Z_Construct_UScriptStruct_FPointerToUberGraphFrame_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPointerToUberGraphFrame(FPointerToUberGraphFrame::StaticStruct, TEXT("/Script/Engine"), TEXT("PointerToUberGraphFrame"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFPointerToUberGraphFrame
{
	FScriptStruct_Engine_StaticRegisterNativesFPointerToUberGraphFrame()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PointerToUberGraphFrame")),new UScriptStruct::TCppStructOps<FPointerToUberGraphFrame>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFPointerToUberGraphFrame;
	UScriptStruct* Z_Construct_UScriptStruct_FPointerToUberGraphFrame()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPointerToUberGraphFrame_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PointerToUberGraphFrame"), sizeof(FPointerToUberGraphFrame), Get_Z_Construct_UScriptStruct_FPointerToUberGraphFrame_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPointerToUberGraphFrame>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"PointerToUberGraphFrame",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FPointerToUberGraphFrame),
				alignof(FPointerToUberGraphFrame),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPointerToUberGraphFrame_CRC() { return 3036163400U; }
class UScriptStruct* FDebuggingInfoForSingleFunction::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FDebuggingInfoForSingleFunction_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDebuggingInfoForSingleFunction, Z_Construct_UPackage__Script_Engine(), TEXT("DebuggingInfoForSingleFunction"), sizeof(FDebuggingInfoForSingleFunction), Get_Z_Construct_UScriptStruct_FDebuggingInfoForSingleFunction_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDebuggingInfoForSingleFunction(FDebuggingInfoForSingleFunction::StaticStruct, TEXT("/Script/Engine"), TEXT("DebuggingInfoForSingleFunction"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFDebuggingInfoForSingleFunction
{
	FScriptStruct_Engine_StaticRegisterNativesFDebuggingInfoForSingleFunction()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DebuggingInfoForSingleFunction")),new UScriptStruct::TCppStructOps<FDebuggingInfoForSingleFunction>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFDebuggingInfoForSingleFunction;
	UScriptStruct* Z_Construct_UScriptStruct_FDebuggingInfoForSingleFunction()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDebuggingInfoForSingleFunction_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DebuggingInfoForSingleFunction"), sizeof(FDebuggingInfoForSingleFunction), Get_Z_Construct_UScriptStruct_FDebuggingInfoForSingleFunction_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDebuggingInfoForSingleFunction>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"DebuggingInfoForSingleFunction",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FDebuggingInfoForSingleFunction),
				alignof(FDebuggingInfoForSingleFunction),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDebuggingInfoForSingleFunction_CRC() { return 2658114119U; }
class UScriptStruct* FNodeToCodeAssociation::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FNodeToCodeAssociation_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNodeToCodeAssociation, Z_Construct_UPackage__Script_Engine(), TEXT("NodeToCodeAssociation"), sizeof(FNodeToCodeAssociation), Get_Z_Construct_UScriptStruct_FNodeToCodeAssociation_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNodeToCodeAssociation(FNodeToCodeAssociation::StaticStruct, TEXT("/Script/Engine"), TEXT("NodeToCodeAssociation"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFNodeToCodeAssociation
{
	FScriptStruct_Engine_StaticRegisterNativesFNodeToCodeAssociation()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NodeToCodeAssociation")),new UScriptStruct::TCppStructOps<FNodeToCodeAssociation>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFNodeToCodeAssociation;
	UScriptStruct* Z_Construct_UScriptStruct_FNodeToCodeAssociation()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNodeToCodeAssociation_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NodeToCodeAssociation"), sizeof(FNodeToCodeAssociation), Get_Z_Construct_UScriptStruct_FNodeToCodeAssociation_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNodeToCodeAssociation>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"NodeToCodeAssociation",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FNodeToCodeAssociation),
				alignof(FNodeToCodeAssociation),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNodeToCodeAssociation_CRC() { return 3900173704U; }
	void UBlueprintGeneratedClass::StaticRegisterNativesUBlueprintGeneratedClass()
	{
	}
	UClass* Z_Construct_UClass_UBlueprintGeneratedClass_NoRegister()
	{
		return UBlueprintGeneratedClass::StaticClass();
	}
	UClass* Z_Construct_UClass_UBlueprintGeneratedClass()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UClass,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Engine/BlueprintGeneratedClass.h" },
				{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CookedComponentInstancingData_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
				{ "ToolTip", "Mapping of changed properties & data to apply when instancing components in a cooked build (one entry per named AddComponent node template for fast lookup at runtime).\nNote: This is not currently utilized by the editor; it is a runtime optimization for cooked builds only. It assumes that the component class structure does not change." },
			};
#endif
			static const UE4CodeGen_Private::FMapPropertyParams NewProp_CookedComponentInstancingData = { UE4CodeGen_Private::EPropertyClass::Map, "CookedComponentInstancingData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UBlueprintGeneratedClass, CookedComponentInstancingData), METADATA_PARAMS(NewProp_CookedComponentInstancingData_MetaData, ARRAY_COUNT(NewProp_CookedComponentInstancingData_MetaData)) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_CookedComponentInstancingData_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Name, "CookedComponentInstancingData_Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CookedComponentInstancingData_ValueProp = { UE4CodeGen_Private::EPropertyClass::Struct, "CookedComponentInstancingData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 1, Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData, METADATA_PARAMS(nullptr, 0) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropertyGuids_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
				{ "ToolTip", "Property guid map" },
			};
#endif
			static const UE4CodeGen_Private::FMapPropertyParams NewProp_PropertyGuids = { UE4CodeGen_Private::EPropertyClass::Map, "PropertyGuids", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(UBlueprintGeneratedClass, PropertyGuids), METADATA_PARAMS(NewProp_PropertyGuids_MetaData, ARRAY_COUNT(NewProp_PropertyGuids_MetaData)) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_PropertyGuids_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Name, "PropertyGuids_Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000800000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PropertyGuids_ValueProp = { UE4CodeGen_Private::EPropertyClass::Struct, "PropertyGuids", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000800000000, 1, nullptr, 1, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverridenArchetypeForCDO_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverridenArchetypeForCDO = { UE4CodeGen_Private::EPropertyClass::Object, "OverridenArchetypeForCDO", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800002000, 1, nullptr, STRUCT_OFFSET(UBlueprintGeneratedClass, OverridenArchetypeForCDO), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(NewProp_OverridenArchetypeForCDO_MetaData, ARRAY_COUNT(NewProp_OverridenArchetypeForCDO_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FastCallPairs_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
				{ "ToolTip", "This is a list of event graph call function nodes that are simple (no argument) thunks into the event graph (typically used for animation delegates, etc...)\nIt is a deprecated list only used for backwards compatibility prior to VER_UE4_SERIALIZE_BLUEPRINT_EVENTGRAPH_FASTCALLS_IN_UFUNCTION." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FastCallPairs = { UE4CodeGen_Private::EPropertyClass::Array, "FastCallPairs", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000820000000, 1, nullptr, STRUCT_OFFSET(UBlueprintGeneratedClass, FastCallPairs_DEPRECATED), METADATA_PARAMS(NewProp_FastCallPairs_MetaData, ARRAY_COUNT(NewProp_FastCallPairs_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_FastCallPairs_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "FastCallPairs", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000820000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FEventGraphFastCallPair, METADATA_PARAMS(nullptr, 0) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UberGraphFunction_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UberGraphFunction = { UE4CodeGen_Private::EPropertyClass::Object, "UberGraphFunction", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UBlueprintGeneratedClass, UberGraphFunction), Z_Construct_UClass_UFunction, METADATA_PARAMS(NewProp_UberGraphFunction_MetaData, ARRAY_COUNT(NewProp_UberGraphFunction_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UberGraphFramePointerProperty_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UberGraphFramePointerProperty = { UE4CodeGen_Private::EPropertyClass::Object, "UberGraphFramePointerProperty", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UBlueprintGeneratedClass, UberGraphFramePointerProperty), Z_Construct_UClass_UStructProperty, METADATA_PARAMS(NewProp_UberGraphFramePointerProperty_MetaData, ARRAY_COUNT(NewProp_UberGraphFramePointerProperty_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InheritableComponentHandler_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
				{ "ToolTip", "Stores data to override (in children classes) components (created by SCS) from parent classes" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InheritableComponentHandler = { UE4CodeGen_Private::EPropertyClass::Object, "InheritableComponentHandler", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UBlueprintGeneratedClass, InheritableComponentHandler), Z_Construct_UClass_UInheritableComponentHandler_NoRegister, METADATA_PARAMS(NewProp_InheritableComponentHandler_MetaData, ARRAY_COUNT(NewProp_InheritableComponentHandler_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SimpleConstructionScript_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
				{ "ToolTip", "'Simple' construction script - graph of components to instance" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SimpleConstructionScript = { UE4CodeGen_Private::EPropertyClass::Object, "SimpleConstructionScript", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UBlueprintGeneratedClass, SimpleConstructionScript), Z_Construct_UClass_USimpleConstructionScript_NoRegister, METADATA_PARAMS(NewProp_SimpleConstructionScript_MetaData, ARRAY_COUNT(NewProp_SimpleConstructionScript_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Timelines_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
				{ "ToolTip", "Array of templates for timelines that should be created" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Timelines = { UE4CodeGen_Private::EPropertyClass::Array, "Timelines", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UBlueprintGeneratedClass, Timelines), METADATA_PARAMS(NewProp_Timelines_MetaData, ARRAY_COUNT(NewProp_Timelines_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Timelines_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Timelines", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UTimelineTemplate_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentTemplates_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
				{ "ToolTip", "Array of component template objects, used by AddComponent function" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ComponentTemplates = { UE4CodeGen_Private::EPropertyClass::Array, "ComponentTemplates", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000008, 1, nullptr, STRUCT_OFFSET(UBlueprintGeneratedClass, ComponentTemplates), METADATA_PARAMS(NewProp_ComponentTemplates_MetaData, ARRAY_COUNT(NewProp_ComponentTemplates_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ComponentTemplates_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ComponentTemplates", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000080008, 1, nullptr, 0, Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DynamicBindingObjects_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
				{ "ToolTip", "Array of objects containing information for dynamically binding delegates to functions in this blueprint" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DynamicBindingObjects = { UE4CodeGen_Private::EPropertyClass::Array, "DynamicBindingObjects", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UBlueprintGeneratedClass, DynamicBindingObjects), METADATA_PARAMS(NewProp_DynamicBindingObjects_MetaData, ARRAY_COUNT(NewProp_DynamicBindingObjects_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DynamicBindingObjects_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "DynamicBindingObjects", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UDynamicBlueprintBinding_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasNativizedParent_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
				{ "ToolTip", "Flag used to indicate if this class has a nativized parent in a cooked build." },
			};
#endif
			auto NewProp_bHasNativizedParent_SetBit = [](void* Obj){ ((UBlueprintGeneratedClass*)Obj)->bHasNativizedParent = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasNativizedParent = { UE4CodeGen_Private::EPropertyClass::Bool, "bHasNativizedParent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UBlueprintGeneratedClass), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bHasNativizedParent_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bHasNativizedParent_MetaData, ARRAY_COUNT(NewProp_bHasNativizedParent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumReplicatedProperties_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumReplicatedProperties = { UE4CodeGen_Private::EPropertyClass::Int, "NumReplicatedProperties", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010010000000000, 1, nullptr, STRUCT_OFFSET(UBlueprintGeneratedClass, NumReplicatedProperties), METADATA_PARAMS(NewProp_NumReplicatedProperties_MetaData, ARRAY_COUNT(NewProp_NumReplicatedProperties_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CookedComponentInstancingData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CookedComponentInstancingData_Key_KeyProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CookedComponentInstancingData_ValueProp,
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PropertyGuids,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PropertyGuids_Key_KeyProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PropertyGuids_ValueProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OverridenArchetypeForCDO,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FastCallPairs,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FastCallPairs_Inner,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UberGraphFunction,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UberGraphFramePointerProperty,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InheritableComponentHandler,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SimpleConstructionScript,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Timelines,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Timelines_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ComponentTemplates,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ComponentTemplates_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DynamicBindingObjects,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DynamicBindingObjects_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bHasNativizedParent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NumReplicatedProperties,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UBlueprintGeneratedClass>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UBlueprintGeneratedClass::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
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
	IMPLEMENT_CLASS(UBlueprintGeneratedClass, 1283442746);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlueprintGeneratedClass(Z_Construct_UClass_UBlueprintGeneratedClass, &UBlueprintGeneratedClass::StaticClass, TEXT("/Script/Engine"), TEXT("UBlueprintGeneratedClass"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintGeneratedClass);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
