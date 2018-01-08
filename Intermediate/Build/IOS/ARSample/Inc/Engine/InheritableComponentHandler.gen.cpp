// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/InheritableComponentHandler.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInheritableComponentHandler() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FComponentOverrideRecord();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FComponentKey();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_UInheritableComponentHandler_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInheritableComponentHandler();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FComponentOverrideRecord::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FComponentOverrideRecord_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FComponentOverrideRecord, Z_Construct_UPackage__Script_Engine(), TEXT("ComponentOverrideRecord"), sizeof(FComponentOverrideRecord), Get_Z_Construct_UScriptStruct_FComponentOverrideRecord_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FComponentOverrideRecord(FComponentOverrideRecord::StaticStruct, TEXT("/Script/Engine"), TEXT("ComponentOverrideRecord"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFComponentOverrideRecord
{
	FScriptStruct_Engine_StaticRegisterNativesFComponentOverrideRecord()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ComponentOverrideRecord")),new UScriptStruct::TCppStructOps<FComponentOverrideRecord>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFComponentOverrideRecord;
	UScriptStruct* Z_Construct_UScriptStruct_FComponentOverrideRecord()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FComponentOverrideRecord_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ComponentOverrideRecord"), sizeof(FComponentOverrideRecord), Get_Z_Construct_UScriptStruct_FComponentOverrideRecord_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/InheritableComponentHandler.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComponentOverrideRecord>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CookedComponentInstancingData_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/InheritableComponentHandler.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CookedComponentInstancingData = { UE4CodeGen_Private::EPropertyClass::Struct, "CookedComponentInstancingData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FComponentOverrideRecord, CookedComponentInstancingData), Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData, METADATA_PARAMS(NewProp_CookedComponentInstancingData_MetaData, ARRAY_COUNT(NewProp_CookedComponentInstancingData_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentKey_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/InheritableComponentHandler.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ComponentKey = { UE4CodeGen_Private::EPropertyClass::Struct, "ComponentKey", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FComponentOverrideRecord, ComponentKey), Z_Construct_UScriptStruct_FComponentKey, METADATA_PARAMS(NewProp_ComponentKey_MetaData, ARRAY_COUNT(NewProp_ComponentKey_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentTemplate_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/Engine/InheritableComponentHandler.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ComponentTemplate = { UE4CodeGen_Private::EPropertyClass::Object, "ComponentTemplate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080008, 1, nullptr, STRUCT_OFFSET(FComponentOverrideRecord, ComponentTemplate), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(NewProp_ComponentTemplate_MetaData, ARRAY_COUNT(NewProp_ComponentTemplate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentClass_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/InheritableComponentHandler.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_ComponentClass = { UE4CodeGen_Private::EPropertyClass::Class, "ComponentClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FComponentOverrideRecord, ComponentClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_ComponentClass_MetaData, ARRAY_COUNT(NewProp_ComponentClass_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CookedComponentInstancingData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ComponentKey,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ComponentTemplate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ComponentClass,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"ComponentOverrideRecord",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000005),
				sizeof(FComponentOverrideRecord),
				alignof(FComponentOverrideRecord),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FComponentOverrideRecord_CRC() { return 721560426U; }
class UScriptStruct* FComponentKey::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FComponentKey_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FComponentKey, Z_Construct_UPackage__Script_Engine(), TEXT("ComponentKey"), sizeof(FComponentKey), Get_Z_Construct_UScriptStruct_FComponentKey_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FComponentKey(FComponentKey::StaticStruct, TEXT("/Script/Engine"), TEXT("ComponentKey"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFComponentKey
{
	FScriptStruct_Engine_StaticRegisterNativesFComponentKey()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ComponentKey")),new UScriptStruct::TCppStructOps<FComponentKey>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFComponentKey;
	UScriptStruct* Z_Construct_UScriptStruct_FComponentKey()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FComponentKey_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ComponentKey"), sizeof(FComponentKey), Get_Z_Construct_UScriptStruct_FComponentKey_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/InheritableComponentHandler.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComponentKey>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssociatedGuid_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/InheritableComponentHandler.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AssociatedGuid = { UE4CodeGen_Private::EPropertyClass::Struct, "AssociatedGuid", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FComponentKey, AssociatedGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_AssociatedGuid_MetaData, ARRAY_COUNT(NewProp_AssociatedGuid_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SCSVariableName_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/InheritableComponentHandler.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_SCSVariableName = { UE4CodeGen_Private::EPropertyClass::Name, "SCSVariableName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FComponentKey, SCSVariableName), METADATA_PARAMS(NewProp_SCSVariableName_MetaData, ARRAY_COUNT(NewProp_SCSVariableName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnerClass_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/InheritableComponentHandler.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_OwnerClass = { UE4CodeGen_Private::EPropertyClass::Class, "OwnerClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FComponentKey, OwnerClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_OwnerClass_MetaData, ARRAY_COUNT(NewProp_OwnerClass_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AssociatedGuid,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SCSVariableName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OwnerClass,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"ComponentKey",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FComponentKey),
				alignof(FComponentKey),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FComponentKey_CRC() { return 3902585367U; }
	void UInheritableComponentHandler::StaticRegisterNativesUInheritableComponentHandler()
	{
	}
	UClass* Z_Construct_UClass_UInheritableComponentHandler_NoRegister()
	{
		return UInheritableComponentHandler::StaticClass();
	}
	UClass* Z_Construct_UClass_UInheritableComponentHandler()
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
				{ "IncludePath", "Engine/InheritableComponentHandler.h" },
				{ "ModuleRelativePath", "Classes/Engine/InheritableComponentHandler.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnnecessaryComponents_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/Engine/InheritableComponentHandler.h" },
				{ "ToolTip", "List of components that were marked unnecessary, need to keep these around so it doesn't regenerate them when a child asks for one" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UnnecessaryComponents = { UE4CodeGen_Private::EPropertyClass::Array, "UnnecessaryComponents", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040008000002008, 1, nullptr, STRUCT_OFFSET(UInheritableComponentHandler, UnnecessaryComponents), METADATA_PARAMS(NewProp_UnnecessaryComponents_MetaData, ARRAY_COUNT(NewProp_UnnecessaryComponents_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UnnecessaryComponents_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "UnnecessaryComponents", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000080008, 1, nullptr, 0, Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Records_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/InheritableComponentHandler.h" },
				{ "ToolTip", "All component records" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Records = { UE4CodeGen_Private::EPropertyClass::Array, "Records", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040008000000000, 1, nullptr, STRUCT_OFFSET(UInheritableComponentHandler, Records), METADATA_PARAMS(NewProp_Records_MetaData, ARRAY_COUNT(NewProp_Records_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Records_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Records", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000008000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FComponentOverrideRecord, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UnnecessaryComponents,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UnnecessaryComponents_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Records,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Records_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UInheritableComponentHandler>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UInheritableComponentHandler::StaticClass,
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
	IMPLEMENT_CLASS(UInheritableComponentHandler, 3386977230);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInheritableComponentHandler(Z_Construct_UClass_UInheritableComponentHandler, &UInheritableComponentHandler::StaticClass, TEXT("/Script/Engine"), TEXT("UInheritableComponentHandler"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInheritableComponentHandler);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
