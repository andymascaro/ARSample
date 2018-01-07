// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/JsonObjectWrapper.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJsonObjectWrapper() {}
// Cross Module References
	JSONUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FJsonObjectWrapper();
	UPackage* Z_Construct_UPackage__Script_JsonUtilities();
	JSONUTILITIES_API UClass* Z_Construct_UClass_UJsonUtilitiesDummyObject_NoRegister();
	JSONUTILITIES_API UClass* Z_Construct_UClass_UJsonUtilitiesDummyObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FJsonObjectWrapper::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern JSONUTILITIES_API uint32 Get_Z_Construct_UScriptStruct_FJsonObjectWrapper_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FJsonObjectWrapper, Z_Construct_UPackage__Script_JsonUtilities(), TEXT("JsonObjectWrapper"), sizeof(FJsonObjectWrapper), Get_Z_Construct_UScriptStruct_FJsonObjectWrapper_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FJsonObjectWrapper(FJsonObjectWrapper::StaticStruct, TEXT("/Script/JsonUtilities"), TEXT("JsonObjectWrapper"), false, nullptr, nullptr);
static struct FScriptStruct_JsonUtilities_StaticRegisterNativesFJsonObjectWrapper
{
	FScriptStruct_JsonUtilities_StaticRegisterNativesFJsonObjectWrapper()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("JsonObjectWrapper")),new UScriptStruct::TCppStructOps<FJsonObjectWrapper>);
	}
} ScriptStruct_JsonUtilities_StaticRegisterNativesFJsonObjectWrapper;
	UScriptStruct* Z_Construct_UScriptStruct_FJsonObjectWrapper()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FJsonObjectWrapper_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_JsonUtilities();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("JsonObjectWrapper"), sizeof(FJsonObjectWrapper), Get_Z_Construct_UScriptStruct_FJsonObjectWrapper_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/JsonObjectWrapper.h" },
				{ "ToolTip", "UStruct that holds a JsonObject, can be used by structs passed to JsonObjectConverter to pass through JsonObjects directly" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FJsonObjectWrapper>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[] = {
				{ "Category", "JSON" },
				{ "ModuleRelativePath", "Public/JsonObjectWrapper.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_JsonString = { UE4CodeGen_Private::EPropertyClass::Str, "JsonString", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FJsonObjectWrapper, JsonString), METADATA_PARAMS(NewProp_JsonString_MetaData, ARRAY_COUNT(NewProp_JsonString_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_JsonString,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_JsonUtilities,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"JsonObjectWrapper",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FJsonObjectWrapper),
				alignof(FJsonObjectWrapper),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FJsonObjectWrapper_CRC() { return 3148939052U; }
	void UJsonUtilitiesDummyObject::StaticRegisterNativesUJsonUtilitiesDummyObject()
	{
	}
	UClass* Z_Construct_UClass_UJsonUtilitiesDummyObject_NoRegister()
	{
		return UJsonUtilitiesDummyObject::StaticClass();
	}
	UClass* Z_Construct_UClass_UJsonUtilitiesDummyObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_JsonUtilities,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "JsonObjectWrapper.h" },
				{ "ModuleRelativePath", "Public/JsonObjectWrapper.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UJsonUtilitiesDummyObject>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UJsonUtilitiesDummyObject::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00000080u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UJsonUtilitiesDummyObject, 2844260287);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UJsonUtilitiesDummyObject(Z_Construct_UClass_UJsonUtilitiesDummyObject, &UJsonUtilitiesDummyObject::StaticClass, TEXT("/Script/JsonUtilities"), TEXT("UJsonUtilitiesDummyObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UJsonUtilitiesDummyObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
