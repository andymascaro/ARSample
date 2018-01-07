// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Sound/SoundSubmix.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundSubmix() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundSubmixSendInfo();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_USoundSubmix_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundSubmix();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectSubmixPreset_NoRegister();
// End Cross Module References
class UScriptStruct* FSoundSubmixSendInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FSoundSubmixSendInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundSubmixSendInfo, Z_Construct_UPackage__Script_Engine(), TEXT("SoundSubmixSendInfo"), sizeof(FSoundSubmixSendInfo), Get_Z_Construct_UScriptStruct_FSoundSubmixSendInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSoundSubmixSendInfo(FSoundSubmixSendInfo::StaticStruct, TEXT("/Script/Engine"), TEXT("SoundSubmixSendInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFSoundSubmixSendInfo
{
	FScriptStruct_Engine_StaticRegisterNativesFSoundSubmixSendInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SoundSubmixSendInfo")),new UScriptStruct::TCppStructOps<FSoundSubmixSendInfo>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFSoundSubmixSendInfo;
	UScriptStruct* Z_Construct_UScriptStruct_FSoundSubmixSendInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSoundSubmixSendInfo_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SoundSubmixSendInfo"), sizeof(FSoundSubmixSendInfo), Get_Z_Construct_UScriptStruct_FSoundSubmixSendInfo_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
				{ "ToolTip", "Class used to send audio to submixes from USoundBase" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundSubmixSendInfo>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundSubmix_MetaData[] = {
				{ "Category", "SubmixSend" },
				{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
				{ "ToolTip", "The submix to send the audio to" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundSubmix = { UE4CodeGen_Private::EPropertyClass::Object, "SoundSubmix", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FSoundSubmixSendInfo, SoundSubmix), Z_Construct_UClass_USoundSubmix_NoRegister, METADATA_PARAMS(NewProp_SoundSubmix_MetaData, ARRAY_COUNT(NewProp_SoundSubmix_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SendLevel_MetaData[] = {
				{ "Category", "SubmixSend" },
				{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
				{ "ToolTip", "The amount of audio to send" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SendLevel = { UE4CodeGen_Private::EPropertyClass::Float, "SendLevel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FSoundSubmixSendInfo, SendLevel), METADATA_PARAMS(NewProp_SendLevel_MetaData, ARRAY_COUNT(NewProp_SendLevel_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SoundSubmix,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SendLevel,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"SoundSubmixSendInfo",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FSoundSubmixSendInfo),
				alignof(FSoundSubmixSendInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSoundSubmixSendInfo_CRC() { return 3647879735U; }
	void USoundSubmix::StaticRegisterNativesUSoundSubmix()
	{
	}
	UClass* Z_Construct_UClass_USoundSubmix_NoRegister()
	{
		return USoundSubmix::StaticClass();
	}
	UClass* Z_Construct_UClass_USoundSubmix()
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
				{ "IncludePath", "Sound/SoundSubmix.h" },
				{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubmixEffectChain_MetaData[] = {
				{ "Category", "SoundSubmix" },
				{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SubmixEffectChain = { UE4CodeGen_Private::EPropertyClass::Array, "SubmixEffectChain", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(USoundSubmix, SubmixEffectChain), METADATA_PARAMS(NewProp_SubmixEffectChain_MetaData, ARRAY_COUNT(NewProp_SubmixEffectChain_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SubmixEffectChain_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "SubmixEffectChain", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_USoundEffectSubmixPreset_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentSubmix_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParentSubmix = { UE4CodeGen_Private::EPropertyClass::Object, "ParentSubmix", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(USoundSubmix, ParentSubmix), Z_Construct_UClass_USoundSubmix_NoRegister, METADATA_PARAMS(NewProp_ParentSubmix_MetaData, ARRAY_COUNT(NewProp_ParentSubmix_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChildSubmixes_MetaData[] = {
				{ "Category", "SoundSubmix" },
				{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
				{ "ToolTip", "Child submixes to this sound mix" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ChildSubmixes = { UE4CodeGen_Private::EPropertyClass::Array, "ChildSubmixes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(USoundSubmix, ChildSubmixes), METADATA_PARAMS(NewProp_ChildSubmixes_MetaData, ARRAY_COUNT(NewProp_ChildSubmixes_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChildSubmixes_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ChildSubmixes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_USoundSubmix_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SubmixEffectChain,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SubmixEffectChain_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParentSubmix,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ChildSubmixes,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ChildSubmixes_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USoundSubmix>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USoundSubmix::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
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
	IMPLEMENT_CLASS(USoundSubmix, 3053222869);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundSubmix(Z_Construct_UClass_USoundSubmix, &USoundSubmix::StaticClass, TEXT("/Script/Engine"), TEXT("USoundSubmix"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundSubmix);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
