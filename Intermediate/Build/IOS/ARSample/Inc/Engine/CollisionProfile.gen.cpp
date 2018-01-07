// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/CollisionProfile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCollisionProfile() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCustomProfile();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FResponseChannel();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCustomChannelSetup();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionResponse();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCollisionResponseTemplate();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionEnabled();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCollisionProfileName();
	ENGINE_API UClass* Z_Construct_UClass_UCollisionProfile_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCollisionProfile();
	ENGINE_API UClass* Z_Construct_UClass_UDeveloperSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRedirector();
// End Cross Module References
class UScriptStruct* FCustomProfile::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FCustomProfile_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomProfile, Z_Construct_UPackage__Script_Engine(), TEXT("CustomProfile"), sizeof(FCustomProfile), Get_Z_Construct_UScriptStruct_FCustomProfile_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCustomProfile(FCustomProfile::StaticStruct, TEXT("/Script/Engine"), TEXT("CustomProfile"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFCustomProfile
{
	FScriptStruct_Engine_StaticRegisterNativesFCustomProfile()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CustomProfile")),new UScriptStruct::TCppStructOps<FCustomProfile>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFCustomProfile;
	UScriptStruct* Z_Construct_UScriptStruct_FCustomProfile()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCustomProfile_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CustomProfile"), sizeof(FCustomProfile), Get_Z_Construct_UScriptStruct_FCustomProfile_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/CollisionProfile.h" },
				{ "ToolTip", "Structure for custom profiles.\n\nif you'd like to just add custom channels, not changing anything else engine defined\nif you'd like to override all about profile, please use\n+Profiles=(Name=NameOfProfileYouLikeToOverwrite,....)" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomProfile>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomResponses_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/CollisionProfile.h" },
				{ "ToolTip", "Types of objects that this physics objects will collide with." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CustomResponses = { UE4CodeGen_Private::EPropertyClass::Array, "CustomResponses", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FCustomProfile, CustomResponses), METADATA_PARAMS(NewProp_CustomResponses_MetaData, ARRAY_COUNT(NewProp_CustomResponses_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomResponses_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "CustomResponses", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FResponseChannel, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/CollisionProfile.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name = { UE4CodeGen_Private::EPropertyClass::Name, "Name", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FCustomProfile, Name), METADATA_PARAMS(NewProp_Name_MetaData, ARRAY_COUNT(NewProp_Name_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CustomResponses,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CustomResponses_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Name,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"CustomProfile",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FCustomProfile),
				alignof(FCustomProfile),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCustomProfile_CRC() { return 1448482435U; }
class UScriptStruct* FCustomChannelSetup::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FCustomChannelSetup_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomChannelSetup, Z_Construct_UPackage__Script_Engine(), TEXT("CustomChannelSetup"), sizeof(FCustomChannelSetup), Get_Z_Construct_UScriptStruct_FCustomChannelSetup_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCustomChannelSetup(FCustomChannelSetup::StaticStruct, TEXT("/Script/Engine"), TEXT("CustomChannelSetup"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFCustomChannelSetup
{
	FScriptStruct_Engine_StaticRegisterNativesFCustomChannelSetup()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CustomChannelSetup")),new UScriptStruct::TCppStructOps<FCustomChannelSetup>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFCustomChannelSetup;
	UScriptStruct* Z_Construct_UScriptStruct_FCustomChannelSetup()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCustomChannelSetup_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CustomChannelSetup"), sizeof(FCustomChannelSetup), Get_Z_Construct_UScriptStruct_FCustomChannelSetup_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/CollisionProfile.h" },
				{ "ToolTip", "Structure for custom channel setup information." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomChannelSetup>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStaticObject_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/CollisionProfile.h" },
				{ "ToolTip", "Specifies if this is static object. Otherwise it will be dynamic object. This is used for query all objects vs all static objects vs all dynamic objects *" },
			};
#endif
			auto NewProp_bStaticObject_SetBit = [](void* Obj){ ((FCustomChannelSetup*)Obj)->bStaticObject = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStaticObject = { UE4CodeGen_Private::EPropertyClass::Bool, "bStaticObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FCustomChannelSetup), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bStaticObject_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bStaticObject_MetaData, ARRAY_COUNT(NewProp_bStaticObject_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTraceType_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/CollisionProfile.h" },
				{ "ToolTip", "Sets meta data TraceType=\"1\" for the enum entry if true. Otherwise, this channel will be treated as object query channel, so you can query object types*" },
			};
#endif
			auto NewProp_bTraceType_SetBit = [](void* Obj){ ((FCustomChannelSetup*)Obj)->bTraceType = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTraceType = { UE4CodeGen_Private::EPropertyClass::Bool, "bTraceType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FCustomChannelSetup), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bTraceType_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bTraceType_MetaData, ARRAY_COUNT(NewProp_bTraceType_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultResponse_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/CollisionProfile.h" },
				{ "ToolTip", "Default Response for the channel" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_DefaultResponse = { UE4CodeGen_Private::EPropertyClass::Byte, "DefaultResponse", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FCustomChannelSetup, DefaultResponse), Z_Construct_UEnum_Engine_ECollisionResponse, METADATA_PARAMS(NewProp_DefaultResponse_MetaData, ARRAY_COUNT(NewProp_DefaultResponse_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/CollisionProfile.h" },
				{ "ToolTip", "Name of channel you'd like to show up *" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name = { UE4CodeGen_Private::EPropertyClass::Name, "Name", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FCustomChannelSetup, Name), METADATA_PARAMS(NewProp_Name_MetaData, ARRAY_COUNT(NewProp_Name_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Channel_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/CollisionProfile.h" },
				{ "ToolTip", "Which channel you'd like to customize *" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Channel = { UE4CodeGen_Private::EPropertyClass::Byte, "Channel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FCustomChannelSetup, Channel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(NewProp_Channel_MetaData, ARRAY_COUNT(NewProp_Channel_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bStaticObject,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bTraceType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultResponse,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Name,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Channel,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"CustomChannelSetup",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FCustomChannelSetup),
				alignof(FCustomChannelSetup),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCustomChannelSetup_CRC() { return 215142754U; }
class UScriptStruct* FCollisionResponseTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FCollisionResponseTemplate_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCollisionResponseTemplate, Z_Construct_UPackage__Script_Engine(), TEXT("CollisionResponseTemplate"), sizeof(FCollisionResponseTemplate), Get_Z_Construct_UScriptStruct_FCollisionResponseTemplate_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCollisionResponseTemplate(FCollisionResponseTemplate::StaticStruct, TEXT("/Script/Engine"), TEXT("CollisionResponseTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFCollisionResponseTemplate
{
	FScriptStruct_Engine_StaticRegisterNativesFCollisionResponseTemplate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CollisionResponseTemplate")),new UScriptStruct::TCppStructOps<FCollisionResponseTemplate>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFCollisionResponseTemplate;
	UScriptStruct* Z_Construct_UScriptStruct_FCollisionResponseTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCollisionResponseTemplate_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CollisionResponseTemplate"), sizeof(FCollisionResponseTemplate), Get_Z_Construct_UScriptStruct_FCollisionResponseTemplate_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/CollisionProfile.h" },
				{ "ToolTip", "Structure for collision response templates." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCollisionResponseTemplate>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanModify_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/CollisionProfile.h" },
				{ "ToolTip", "Help message for collision profile *" },
			};
#endif
			auto NewProp_bCanModify_SetBit = [](void* Obj){ ((FCollisionResponseTemplate*)Obj)->bCanModify = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanModify = { UE4CodeGen_Private::EPropertyClass::Bool, "bCanModify", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FCollisionResponseTemplate), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCanModify_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCanModify_MetaData, ARRAY_COUNT(NewProp_bCanModify_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HelpMessage_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/CollisionProfile.h" },
				{ "ToolTip", "Help message for collision profile *" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_HelpMessage = { UE4CodeGen_Private::EPropertyClass::Str, "HelpMessage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FCollisionResponseTemplate, HelpMessage), METADATA_PARAMS(NewProp_HelpMessage_MetaData, ARRAY_COUNT(NewProp_HelpMessage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomResponses_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/CollisionProfile.h" },
				{ "ToolTip", "Types of objects that this physics objects will collide with." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CustomResponses = { UE4CodeGen_Private::EPropertyClass::Array, "CustomResponses", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FCollisionResponseTemplate, CustomResponses), METADATA_PARAMS(NewProp_CustomResponses_MetaData, ARRAY_COUNT(NewProp_CustomResponses_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomResponses_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "CustomResponses", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FResponseChannel, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectTypeName_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/CollisionProfile.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ObjectTypeName = { UE4CodeGen_Private::EPropertyClass::Name, "ObjectTypeName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FCollisionResponseTemplate, ObjectTypeName), METADATA_PARAMS(NewProp_ObjectTypeName_MetaData, ARRAY_COUNT(NewProp_ObjectTypeName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionEnabled_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/CollisionProfile.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_CollisionEnabled = { UE4CodeGen_Private::EPropertyClass::Byte, "CollisionEnabled", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FCollisionResponseTemplate, CollisionEnabled), Z_Construct_UEnum_Engine_ECollisionEnabled, METADATA_PARAMS(NewProp_CollisionEnabled_MetaData, ARRAY_COUNT(NewProp_CollisionEnabled_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/CollisionProfile.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name = { UE4CodeGen_Private::EPropertyClass::Name, "Name", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FCollisionResponseTemplate, Name), METADATA_PARAMS(NewProp_Name_MetaData, ARRAY_COUNT(NewProp_Name_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCanModify,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HelpMessage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CustomResponses,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CustomResponses_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ObjectTypeName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CollisionEnabled,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Name,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"CollisionResponseTemplate",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FCollisionResponseTemplate),
				alignof(FCollisionResponseTemplate),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCollisionResponseTemplate_CRC() { return 1311725825U; }
class UScriptStruct* FCollisionProfileName::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FCollisionProfileName_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCollisionProfileName, Z_Construct_UPackage__Script_Engine(), TEXT("CollisionProfileName"), sizeof(FCollisionProfileName), Get_Z_Construct_UScriptStruct_FCollisionProfileName_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCollisionProfileName(FCollisionProfileName::StaticStruct, TEXT("/Script/Engine"), TEXT("CollisionProfileName"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFCollisionProfileName
{
	FScriptStruct_Engine_StaticRegisterNativesFCollisionProfileName()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CollisionProfileName")),new UScriptStruct::TCppStructOps<FCollisionProfileName>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFCollisionProfileName;
	UScriptStruct* Z_Construct_UScriptStruct_FCollisionProfileName()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCollisionProfileName_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CollisionProfileName"), sizeof(FCollisionProfileName), Get_Z_Construct_UScriptStruct_FCollisionProfileName_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/Engine/CollisionProfile.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCollisionProfileName>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
				{ "Category", "Collision" },
				{ "ModuleRelativePath", "Classes/Engine/CollisionProfile.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name = { UE4CodeGen_Private::EPropertyClass::Name, "Name", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FCollisionProfileName, Name), METADATA_PARAMS(NewProp_Name_MetaData, ARRAY_COUNT(NewProp_Name_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Name,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"CollisionProfileName",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FCollisionProfileName),
				alignof(FCollisionProfileName),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCollisionProfileName_CRC() { return 2602605765U; }
	void UCollisionProfile::StaticRegisterNativesUCollisionProfile()
	{
	}
	UClass* Z_Construct_UClass_UCollisionProfile_NoRegister()
	{
		return UCollisionProfile::StaticClass();
	}
	UClass* Z_Construct_UClass_UCollisionProfile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "Collision" },
				{ "IncludePath", "Engine/CollisionProfile.h" },
				{ "ModuleRelativePath", "Classes/Engine/CollisionProfile.h" },
				{ "ToolTip", "Set up and modify collision settings." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionChannelRedirects_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/CollisionProfile.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CollisionChannelRedirects = { UE4CodeGen_Private::EPropertyClass::Array, "CollisionChannelRedirects", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000044000, 1, nullptr, STRUCT_OFFSET(UCollisionProfile, CollisionChannelRedirects), METADATA_PARAMS(NewProp_CollisionChannelRedirects_MetaData, ARRAY_COUNT(NewProp_CollisionChannelRedirects_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CollisionChannelRedirects_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "CollisionChannelRedirects", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000004000, 1, nullptr, 0, Z_Construct_UScriptStruct_FRedirector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProfileRedirects_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/CollisionProfile.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ProfileRedirects = { UE4CodeGen_Private::EPropertyClass::Array, "ProfileRedirects", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000044000, 1, nullptr, STRUCT_OFFSET(UCollisionProfile, ProfileRedirects), METADATA_PARAMS(NewProp_ProfileRedirects_MetaData, ARRAY_COUNT(NewProp_ProfileRedirects_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProfileRedirects_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ProfileRedirects", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000004000, 1, nullptr, 0, Z_Construct_UScriptStruct_FRedirector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditProfiles_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/CollisionProfile.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EditProfiles = { UE4CodeGen_Private::EPropertyClass::Array, "EditProfiles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000044000, 1, nullptr, STRUCT_OFFSET(UCollisionProfile, EditProfiles), METADATA_PARAMS(NewProp_EditProfiles_MetaData, ARRAY_COUNT(NewProp_EditProfiles_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_EditProfiles_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "EditProfiles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000004000, 1, nullptr, 0, Z_Construct_UScriptStruct_FCustomProfile, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultChannelResponses_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/CollisionProfile.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DefaultChannelResponses = { UE4CodeGen_Private::EPropertyClass::Array, "DefaultChannelResponses", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000044000, 1, nullptr, STRUCT_OFFSET(UCollisionProfile, DefaultChannelResponses), METADATA_PARAMS(NewProp_DefaultChannelResponses_MetaData, ARRAY_COUNT(NewProp_DefaultChannelResponses_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultChannelResponses_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "DefaultChannelResponses", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000004000, 1, nullptr, 0, Z_Construct_UScriptStruct_FCustomChannelSetup, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Profiles_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/CollisionProfile.h" },
				{ "ToolTip", "This is hacky, but without this edit tag, we can't get valid property handle\nand we can't save them properly to config, so we need this tag." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Profiles = { UE4CodeGen_Private::EPropertyClass::Array, "Profiles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000044000, 1, nullptr, STRUCT_OFFSET(UCollisionProfile, Profiles), METADATA_PARAMS(NewProp_Profiles_MetaData, ARRAY_COUNT(NewProp_Profiles_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Profiles_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Profiles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000004000, 1, nullptr, 0, Z_Construct_UScriptStruct_FCollisionResponseTemplate, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CollisionChannelRedirects,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CollisionChannelRedirects_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ProfileRedirects,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ProfileRedirects_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EditProfiles,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EditProfiles_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultChannelResponses,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultChannelResponses_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Profiles,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Profiles_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UCollisionProfile>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UCollisionProfile::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00080086u,
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
	IMPLEMENT_CLASS(UCollisionProfile, 2704583420);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCollisionProfile(Z_Construct_UClass_UCollisionProfile, &UCollisionProfile::StaticClass, TEXT("/Script/Engine"), TEXT("UCollisionProfile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCollisionProfile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
