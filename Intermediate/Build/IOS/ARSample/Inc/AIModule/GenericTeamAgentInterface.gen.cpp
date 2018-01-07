// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/GenericTeamAgentInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGenericTeamAgentInterface() {}
// Cross Module References
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_ETeamAttitude();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FGenericTeamId();
	AIMODULE_API UClass* Z_Construct_UClass_UGenericTeamAgentInterface_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UGenericTeamAgentInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
// End Cross Module References
	static UEnum* ETeamAttitude_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AIModule_ETeamAttitude, Z_Construct_UPackage__Script_AIModule(), TEXT("ETeamAttitude"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETeamAttitude(ETeamAttitude_StaticEnum, TEXT("/Script/AIModule"), TEXT("ETeamAttitude"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AIModule_ETeamAttitude_CRC() { return 2831836471U; }
	UEnum* Z_Construct_UEnum_AIModule_ETeamAttitude()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETeamAttitude"), 0, Get_Z_Construct_UEnum_AIModule_ETeamAttitude_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETeamAttitude::Friendly", (int64)ETeamAttitude::Friendly },
				{ "ETeamAttitude::Neutral", (int64)ETeamAttitude::Neutral },
				{ "ETeamAttitude::Hostile", (int64)ETeamAttitude::Hostile },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GenericTeamAgentInterface.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ETeamAttitude",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"ETeamAttitude::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FGenericTeamId::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AIMODULE_API uint32 Get_Z_Construct_UScriptStruct_FGenericTeamId_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGenericTeamId, Z_Construct_UPackage__Script_AIModule(), TEXT("GenericTeamId"), sizeof(FGenericTeamId), Get_Z_Construct_UScriptStruct_FGenericTeamId_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGenericTeamId(FGenericTeamId::StaticStruct, TEXT("/Script/AIModule"), TEXT("GenericTeamId"), false, nullptr, nullptr);
static struct FScriptStruct_AIModule_StaticRegisterNativesFGenericTeamId
{
	FScriptStruct_AIModule_StaticRegisterNativesFGenericTeamId()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GenericTeamId")),new UScriptStruct::TCppStructOps<FGenericTeamId>);
	}
} ScriptStruct_AIModule_StaticRegisterNativesFGenericTeamId;
	UScriptStruct* Z_Construct_UScriptStruct_FGenericTeamId()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGenericTeamId_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GenericTeamId"), sizeof(FGenericTeamId), Get_Z_Construct_UScriptStruct_FGenericTeamId_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/GenericTeamAgentInterface.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGenericTeamId>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeamID_MetaData[] = {
				{ "Category", "TeamID" },
				{ "ModuleRelativePath", "Classes/GenericTeamAgentInterface.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_TeamID = { UE4CodeGen_Private::EPropertyClass::Byte, "TeamID", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000005, 1, nullptr, STRUCT_OFFSET(FGenericTeamId, TeamID), nullptr, METADATA_PARAMS(NewProp_TeamID_MetaData, ARRAY_COUNT(NewProp_TeamID_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TeamID,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"GenericTeamId",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FGenericTeamId),
				alignof(FGenericTeamId),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGenericTeamId_CRC() { return 2201143410U; }
	void UGenericTeamAgentInterface::StaticRegisterNativesUGenericTeamAgentInterface()
	{
	}
	UClass* Z_Construct_UClass_UGenericTeamAgentInterface_NoRegister()
	{
		return UGenericTeamAgentInterface::StaticClass();
	}
	UClass* Z_Construct_UClass_UGenericTeamAgentInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UInterface,
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GenericTeamAgentInterface.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<IGenericTeamAgentInterface>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UGenericTeamAgentInterface::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00104081u,
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
	IMPLEMENT_CLASS(UGenericTeamAgentInterface, 3468961198);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGenericTeamAgentInterface(Z_Construct_UClass_UGenericTeamAgentInterface, &UGenericTeamAgentInterface::StaticClass, TEXT("/Script/AIModule"), TEXT("UGenericTeamAgentInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGenericTeamAgentInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
