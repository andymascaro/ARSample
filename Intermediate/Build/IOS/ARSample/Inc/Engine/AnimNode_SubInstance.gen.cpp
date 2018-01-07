// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Animation/AnimNode_SubInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_SubInstance() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SubInstance();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	COREUOBJECT_API UClass* Z_Construct_UClass_UProperty();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
// End Cross Module References
class UScriptStruct* FAnimNode_SubInstance::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_SubInstance_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SubInstance, Z_Construct_UPackage__Script_Engine(), TEXT("AnimNode_SubInstance"), sizeof(FAnimNode_SubInstance), Get_Z_Construct_UScriptStruct_FAnimNode_SubInstance_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_SubInstance(FAnimNode_SubInstance::StaticStruct, TEXT("/Script/Engine"), TEXT("AnimNode_SubInstance"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAnimNode_SubInstance
{
	FScriptStruct_Engine_StaticRegisterNativesFAnimNode_SubInstance()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_SubInstance")),new UScriptStruct::TCppStructOps<FAnimNode_SubInstance>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAnimNode_SubInstance;
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SubInstance()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_SubInstance_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_SubInstance"), sizeof(FAnimNode_SubInstance), Get_Z_Construct_UScriptStruct_FAnimNode_SubInstance_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintInternalUseOnly", "true" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/Animation/AnimNode_SubInstance.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_SubInstance>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestPropertyNames_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimNode_SubInstance.h" },
				{ "ToolTip", "List of destination properties to use, 1-1 with Source names above, built by the compiler" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DestPropertyNames = { UE4CodeGen_Private::EPropertyClass::Array, "DestPropertyNames", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAnimNode_SubInstance, DestPropertyNames), METADATA_PARAMS(NewProp_DestPropertyNames_MetaData, ARRAY_COUNT(NewProp_DestPropertyNames_MetaData)) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_DestPropertyNames_Inner = { UE4CodeGen_Private::EPropertyClass::Name, "DestPropertyNames", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourcePropertyNames_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimNode_SubInstance.h" },
				{ "ToolTip", "List of source properties to use, 1-1 with Dest names below, built by the compiler" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SourcePropertyNames = { UE4CodeGen_Private::EPropertyClass::Array, "SourcePropertyNames", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAnimNode_SubInstance, SourcePropertyNames), METADATA_PARAMS(NewProp_SourcePropertyNames_MetaData, ARRAY_COUNT(NewProp_SourcePropertyNames_MetaData)) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_SourcePropertyNames_Inner = { UE4CodeGen_Private::EPropertyClass::Name, "SourcePropertyNames", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubInstanceProperties_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimNode_SubInstance.h" },
				{ "ToolTip", "List of properties on the sub instance to push to, built from name list when initialised" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SubInstanceProperties = { UE4CodeGen_Private::EPropertyClass::Array, "SubInstanceProperties", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, STRUCT_OFFSET(FAnimNode_SubInstance, SubInstanceProperties), METADATA_PARAMS(NewProp_SubInstanceProperties_MetaData, ARRAY_COUNT(NewProp_SubInstanceProperties_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SubInstanceProperties_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "SubInstanceProperties", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UProperty, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceProperties_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimNode_SubInstance.h" },
				{ "ToolTip", "List of properties on the calling instance to push from" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InstanceProperties = { UE4CodeGen_Private::EPropertyClass::Array, "InstanceProperties", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, STRUCT_OFFSET(FAnimNode_SubInstance, InstanceProperties), METADATA_PARAMS(NewProp_InstanceProperties_MetaData, ARRAY_COUNT(NewProp_InstanceProperties_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstanceProperties_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "InstanceProperties", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UProperty, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceToRun_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimNode_SubInstance.h" },
				{ "ToolTip", "This is the actual instance allocated at runtime that will run" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstanceToRun = { UE4CodeGen_Private::EPropertyClass::Object, "InstanceToRun", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, STRUCT_OFFSET(FAnimNode_SubInstance, InstanceToRun), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(NewProp_InstanceToRun_MetaData, ARRAY_COUNT(NewProp_InstanceToRun_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceClass_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Classes/Animation/AnimNode_SubInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_InstanceClass = { UE4CodeGen_Private::EPropertyClass::Class, "InstanceClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_SubInstance, InstanceClass), Z_Construct_UClass_UAnimInstance_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_InstanceClass_MetaData, ARRAY_COUNT(NewProp_InstanceClass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPose_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimNode_SubInstance.h" },
				{ "ToolTip", "Input pose for the node, intentionally not accessible because if there's no input\nNode in the target class we don't want to show this as a pin" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InPose = { UE4CodeGen_Private::EPropertyClass::Struct, "InPose", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAnimNode_SubInstance, InPose), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(NewProp_InPose_MetaData, ARRAY_COUNT(NewProp_InPose_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DestPropertyNames,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DestPropertyNames_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SourcePropertyNames,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SourcePropertyNames_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SubInstanceProperties,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SubInstanceProperties_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InstanceProperties,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InstanceProperties_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InstanceToRun,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InstanceClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InPose,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				Z_Construct_UScriptStruct_FAnimNode_Base,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AnimNode_SubInstance",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FAnimNode_SubInstance),
				alignof(FAnimNode_SubInstance),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_SubInstance_CRC() { return 3936019821U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
