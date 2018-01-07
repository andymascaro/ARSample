// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/GameFramework/LocalMessage.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLocalMessage() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FClientReceiveData();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULocalMessage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULocalMessage();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FClientReceiveData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FClientReceiveData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClientReceiveData, Z_Construct_UPackage__Script_Engine(), TEXT("ClientReceiveData"), sizeof(FClientReceiveData), Get_Z_Construct_UScriptStruct_FClientReceiveData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClientReceiveData(FClientReceiveData::StaticStruct, TEXT("/Script/Engine"), TEXT("ClientReceiveData"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFClientReceiveData
{
	FScriptStruct_Engine_StaticRegisterNativesFClientReceiveData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ClientReceiveData")),new UScriptStruct::TCppStructOps<FClientReceiveData>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFClientReceiveData;
	UScriptStruct* Z_Construct_UScriptStruct_FClientReceiveData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClientReceiveData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClientReceiveData"), sizeof(FClientReceiveData), Get_Z_Construct_UScriptStruct_FClientReceiveData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/LocalMessage.h" },
				{ "ToolTip", "Handles the many pieces of data passed into Client Receive" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClientReceiveData>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OptionalObject_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/LocalMessage.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OptionalObject = { UE4CodeGen_Private::EPropertyClass::Object, "OptionalObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FClientReceiveData, OptionalObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(NewProp_OptionalObject_MetaData, ARRAY_COUNT(NewProp_OptionalObject_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RelatedPlayerState_2_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/LocalMessage.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RelatedPlayerState_2 = { UE4CodeGen_Private::EPropertyClass::Object, "RelatedPlayerState_2", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FClientReceiveData, RelatedPlayerState_2), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(NewProp_RelatedPlayerState_2_MetaData, ARRAY_COUNT(NewProp_RelatedPlayerState_2_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RelatedPlayerState_1_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/LocalMessage.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RelatedPlayerState_1 = { UE4CodeGen_Private::EPropertyClass::Object, "RelatedPlayerState_1", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FClientReceiveData, RelatedPlayerState_1), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(NewProp_RelatedPlayerState_1_MetaData, ARRAY_COUNT(NewProp_RelatedPlayerState_1_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MessageString_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/LocalMessage.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_MessageString = { UE4CodeGen_Private::EPropertyClass::Str, "MessageString", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FClientReceiveData, MessageString), METADATA_PARAMS(NewProp_MessageString_MetaData, ARRAY_COUNT(NewProp_MessageString_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MessageIndex_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/LocalMessage.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MessageIndex = { UE4CodeGen_Private::EPropertyClass::Int, "MessageIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FClientReceiveData, MessageIndex), METADATA_PARAMS(NewProp_MessageIndex_MetaData, ARRAY_COUNT(NewProp_MessageIndex_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MessageType_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/LocalMessage.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_MessageType = { UE4CodeGen_Private::EPropertyClass::Name, "MessageType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FClientReceiveData, MessageType), METADATA_PARAMS(NewProp_MessageType_MetaData, ARRAY_COUNT(NewProp_MessageType_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalPC_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/LocalMessage.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LocalPC = { UE4CodeGen_Private::EPropertyClass::Object, "LocalPC", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FClientReceiveData, LocalPC), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(NewProp_LocalPC_MetaData, ARRAY_COUNT(NewProp_LocalPC_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OptionalObject,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RelatedPlayerState_2,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RelatedPlayerState_1,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MessageString,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MessageIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MessageType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LocalPC,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"ClientReceiveData",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FClientReceiveData),
				alignof(FClientReceiveData),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClientReceiveData_CRC() { return 605208024U; }
	void ULocalMessage::StaticRegisterNativesULocalMessage()
	{
	}
	UClass* Z_Construct_UClass_ULocalMessage_NoRegister()
	{
		return ULocalMessage::StaticClass();
	}
	UClass* Z_Construct_UClass_ULocalMessage()
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
				{ "IncludePath", "GameFramework/LocalMessage.h" },
				{ "ModuleRelativePath", "Classes/GameFramework/LocalMessage.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ULocalMessage>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ULocalMessage::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100081u,
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
	IMPLEMENT_CLASS(ULocalMessage, 1673924880);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULocalMessage(Z_Construct_UClass_ULocalMessage, &ULocalMessage::StaticClass, TEXT("/Script/Engine"), TEXT("ULocalMessage"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULocalMessage);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
