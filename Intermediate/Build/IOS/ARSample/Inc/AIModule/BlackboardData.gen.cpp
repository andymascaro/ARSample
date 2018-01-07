// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/BehaviorTree/BlackboardData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlackboardData() {}
// Cross Module References
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardEntry();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardKeyType_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardData_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardData();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
// End Cross Module References
class UScriptStruct* FBlackboardEntry::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AIMODULE_API uint32 Get_Z_Construct_UScriptStruct_FBlackboardEntry_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlackboardEntry, Z_Construct_UPackage__Script_AIModule(), TEXT("BlackboardEntry"), sizeof(FBlackboardEntry), Get_Z_Construct_UScriptStruct_FBlackboardEntry_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBlackboardEntry(FBlackboardEntry::StaticStruct, TEXT("/Script/AIModule"), TEXT("BlackboardEntry"), false, nullptr, nullptr);
static struct FScriptStruct_AIModule_StaticRegisterNativesFBlackboardEntry
{
	FScriptStruct_AIModule_StaticRegisterNativesFBlackboardEntry()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BlackboardEntry")),new UScriptStruct::TCppStructOps<FBlackboardEntry>);
	}
} ScriptStruct_AIModule_StaticRegisterNativesFBlackboardEntry;
	UScriptStruct* Z_Construct_UScriptStruct_FBlackboardEntry()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBlackboardEntry_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BlackboardEntry"), sizeof(FBlackboardEntry), Get_Z_Construct_UScriptStruct_FBlackboardEntry_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardData.h" },
				{ "ToolTip", "blackboard entry definition" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlackboardEntry>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInstanceSynced_MetaData[] = {
				{ "Category", "Blackboard" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardData.h" },
				{ "ToolTip", "if set to true then this field will be synchronized across all instances of this blackboard" },
			};
#endif
			auto NewProp_bInstanceSynced_SetBit = [](void* Obj){ ((FBlackboardEntry*)Obj)->bInstanceSynced = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInstanceSynced = { UE4CodeGen_Private::EPropertyClass::Bool, "bInstanceSynced", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FBlackboardEntry), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bInstanceSynced_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bInstanceSynced_MetaData, ARRAY_COUNT(NewProp_bInstanceSynced_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyType_MetaData[] = {
				{ "Category", "Blackboard" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardData.h" },
				{ "ToolTip", "key type and additional properties" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_KeyType = { UE4CodeGen_Private::EPropertyClass::Object, "KeyType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0012000000080009, 1, nullptr, STRUCT_OFFSET(FBlackboardEntry, KeyType), Z_Construct_UClass_UBlackboardKeyType_NoRegister, METADATA_PARAMS(NewProp_KeyType_MetaData, ARRAY_COUNT(NewProp_KeyType_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntryDescription_MetaData[] = {
				{ "Category", "Blackboard" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardData.h" },
				{ "ToolTip", "Optional description to explain what this blackboard entry does." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_EntryDescription = { UE4CodeGen_Private::EPropertyClass::Str, "EntryDescription", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000001, 1, nullptr, STRUCT_OFFSET(FBlackboardEntry, EntryDescription), METADATA_PARAMS(NewProp_EntryDescription_MetaData, ARRAY_COUNT(NewProp_EntryDescription_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntryName_MetaData[] = {
				{ "Category", "Blackboard" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardData.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_EntryName = { UE4CodeGen_Private::EPropertyClass::Name, "EntryName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FBlackboardEntry, EntryName), METADATA_PARAMS(NewProp_EntryName_MetaData, ARRAY_COUNT(NewProp_EntryName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bInstanceSynced,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_KeyType,
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EntryDescription,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EntryName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"BlackboardEntry",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000005),
				sizeof(FBlackboardEntry),
				alignof(FBlackboardEntry),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBlackboardEntry_CRC() { return 3247080085U; }
	void UBlackboardData::StaticRegisterNativesUBlackboardData()
	{
	}
	UClass* Z_Construct_UClass_UBlackboardData_NoRegister()
	{
		return UBlackboardData::StaticClass();
	}
	UClass* Z_Construct_UClass_UBlackboardData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UDataAsset,
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "AutoExpandCategories", "Blackboard" },
				{ "BlueprintType", "true" },
				{ "IncludePath", "BehaviorTree/BlackboardData.h" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardData.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasSynchronizedKeys_MetaData[] = {
				{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardData.h" },
			};
#endif
			auto NewProp_bHasSynchronizedKeys_SetBit = [](void* Obj){ ((UBlackboardData*)Obj)->bHasSynchronizedKeys = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasSynchronizedKeys = { UE4CodeGen_Private::EPropertyClass::Bool, "bHasSynchronizedKeys", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UBlackboardData), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bHasSynchronizedKeys_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bHasSynchronizedKeys_MetaData, ARRAY_COUNT(NewProp_bHasSynchronizedKeys_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Keys_MetaData[] = {
				{ "Category", "Blackboard" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardData.h" },
				{ "ToolTip", "blackboard keys" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Keys = { UE4CodeGen_Private::EPropertyClass::Array, "Keys", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000001, 1, nullptr, STRUCT_OFFSET(UBlackboardData, Keys), METADATA_PARAMS(NewProp_Keys_MetaData, ARRAY_COUNT(NewProp_Keys_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Keys_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Keys", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000008000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FBlackboardEntry, METADATA_PARAMS(nullptr, 0) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentKeys_MetaData[] = {
				{ "Category", "Parent" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardData.h" },
				{ "ToolTip", "all keys inherited from parent chain" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ParentKeys = { UE4CodeGen_Private::EPropertyClass::Array, "ParentKeys", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008800032001, 1, nullptr, STRUCT_OFFSET(UBlackboardData, ParentKeys), METADATA_PARAMS(NewProp_ParentKeys_MetaData, ARRAY_COUNT(NewProp_ParentKeys_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParentKeys_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ParentKeys", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000008800020000, 1, nullptr, 0, Z_Construct_UScriptStruct_FBlackboardEntry, METADATA_PARAMS(nullptr, 0) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[] = {
				{ "Category", "Parent" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardData.h" },
				{ "ToolTip", "parent blackboard (keys can be overridden)" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Parent = { UE4CodeGen_Private::EPropertyClass::Object, "Parent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UBlackboardData, Parent), Z_Construct_UClass_UBlackboardData_NoRegister, METADATA_PARAMS(NewProp_Parent_MetaData, ARRAY_COUNT(NewProp_Parent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bHasSynchronizedKeys,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Keys,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Keys_Inner,
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParentKeys,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParentKeys_Inner,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Parent,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UBlackboardData>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UBlackboardData::StaticClass,
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
	IMPLEMENT_CLASS(UBlackboardData, 4090923331);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlackboardData(Z_Construct_UClass_UBlackboardData, &UBlackboardData::StaticClass, TEXT("/Script/AIModule"), TEXT("UBlackboardData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlackboardData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
