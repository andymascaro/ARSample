// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/DebugDisplayProperty.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDebugDisplayProperty() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDebugDisplayProperty();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
class UScriptStruct* FDebugDisplayProperty::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FDebugDisplayProperty_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDebugDisplayProperty, Z_Construct_UPackage__Script_Engine(), TEXT("DebugDisplayProperty"), sizeof(FDebugDisplayProperty), Get_Z_Construct_UScriptStruct_FDebugDisplayProperty_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDebugDisplayProperty(FDebugDisplayProperty::StaticStruct, TEXT("/Script/Engine"), TEXT("DebugDisplayProperty"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFDebugDisplayProperty
{
	FScriptStruct_Engine_StaticRegisterNativesFDebugDisplayProperty()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DebugDisplayProperty")),new UScriptStruct::TCppStructOps<FDebugDisplayProperty>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFDebugDisplayProperty;
	UScriptStruct* Z_Construct_UScriptStruct_FDebugDisplayProperty()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDebugDisplayProperty_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DebugDisplayProperty"), sizeof(FDebugDisplayProperty), Get_Z_Construct_UScriptStruct_FDebugDisplayProperty_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/DebugDisplayProperty.h" },
				{ "ToolTip", "Debug property display functionality to interact with this, use \"display\", \"displayall\", \"displayclear\"\n\n@see UGameViewportClient\n@see FDebugDisplayProperty\n@see DrawStatsHUD" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDebugDisplayProperty>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WithinClass_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/DebugDisplayProperty.h" },
				{ "ToolTip", "if Obj is a class and WithinClass is not nullptr, further limit the display to objects that have an Outer of WithinClass" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_WithinClass = { UE4CodeGen_Private::EPropertyClass::Class, "WithinClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000000, 1, nullptr, STRUCT_OFFSET(FDebugDisplayProperty, WithinClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_WithinClass_MetaData, ARRAY_COUNT(NewProp_WithinClass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Obj_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/DebugDisplayProperty.h" },
				{ "ToolTip", "the object whose property to display. If this is a class, all objects of that class are drawn." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Obj = { UE4CodeGen_Private::EPropertyClass::Object, "Obj", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FDebugDisplayProperty, Obj), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(NewProp_Obj_MetaData, ARRAY_COUNT(NewProp_Obj_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WithinClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Obj,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"DebugDisplayProperty",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FDebugDisplayProperty),
				alignof(FDebugDisplayProperty),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDebugDisplayProperty_CRC() { return 3922743071U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
