// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Animation/AnimBlueprintGeneratedClass.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimBlueprintGeneratedClass() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimBlueprintDebugData();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationFrameSnapshot();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStateMachineDebugData();
	ENGINE_API UClass* Z_Construct_UClass_UAnimBlueprintGeneratedClass_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimBlueprintGeneratedClass();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintGeneratedClass();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNotifyEvent();
	ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBakedAnimationStateMachine();
	ENGINE_API UClass* Z_Construct_UClass_UAnimClassInterface_NoRegister();
// End Cross Module References
class UScriptStruct* FAnimBlueprintDebugData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAnimBlueprintDebugData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimBlueprintDebugData, Z_Construct_UPackage__Script_Engine(), TEXT("AnimBlueprintDebugData"), sizeof(FAnimBlueprintDebugData), Get_Z_Construct_UScriptStruct_FAnimBlueprintDebugData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimBlueprintDebugData(FAnimBlueprintDebugData::StaticStruct, TEXT("/Script/Engine"), TEXT("AnimBlueprintDebugData"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAnimBlueprintDebugData
{
	FScriptStruct_Engine_StaticRegisterNativesFAnimBlueprintDebugData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimBlueprintDebugData")),new UScriptStruct::TCppStructOps<FAnimBlueprintDebugData>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAnimBlueprintDebugData;
	UScriptStruct* Z_Construct_UScriptStruct_FAnimBlueprintDebugData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimBlueprintDebugData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimBlueprintDebugData"), sizeof(FAnimBlueprintDebugData), Get_Z_Construct_UScriptStruct_FAnimBlueprintDebugData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimBlueprintGeneratedClass.h" },
				{ "ToolTip", "This structure represents animation-related debugging information for an entire AnimBlueprint\n(general debug information for the event graph, etc... is still contained in a FBlueprintDebugData structure)" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimBlueprintDebugData>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AnimBlueprintDebugData",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FAnimBlueprintDebugData),
				alignof(FAnimBlueprintDebugData),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimBlueprintDebugData_CRC() { return 2453340073U; }
class UScriptStruct* FAnimationFrameSnapshot::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAnimationFrameSnapshot_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimationFrameSnapshot, Z_Construct_UPackage__Script_Engine(), TEXT("AnimationFrameSnapshot"), sizeof(FAnimationFrameSnapshot), Get_Z_Construct_UScriptStruct_FAnimationFrameSnapshot_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimationFrameSnapshot(FAnimationFrameSnapshot::StaticStruct, TEXT("/Script/Engine"), TEXT("AnimationFrameSnapshot"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAnimationFrameSnapshot
{
	FScriptStruct_Engine_StaticRegisterNativesFAnimationFrameSnapshot()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimationFrameSnapshot")),new UScriptStruct::TCppStructOps<FAnimationFrameSnapshot>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAnimationFrameSnapshot;
	UScriptStruct* Z_Construct_UScriptStruct_FAnimationFrameSnapshot()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimationFrameSnapshot_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimationFrameSnapshot"), sizeof(FAnimationFrameSnapshot), Get_Z_Construct_UScriptStruct_FAnimationFrameSnapshot_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimBlueprintGeneratedClass.h" },
				{ "ToolTip", "This structure represents debugging information for a frame snapshot" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimationFrameSnapshot>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AnimationFrameSnapshot",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FAnimationFrameSnapshot),
				alignof(FAnimationFrameSnapshot),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimationFrameSnapshot_CRC() { return 3862469957U; }
class UScriptStruct* FStateMachineDebugData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FStateMachineDebugData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateMachineDebugData, Z_Construct_UPackage__Script_Engine(), TEXT("StateMachineDebugData"), sizeof(FStateMachineDebugData), Get_Z_Construct_UScriptStruct_FStateMachineDebugData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStateMachineDebugData(FStateMachineDebugData::StaticStruct, TEXT("/Script/Engine"), TEXT("StateMachineDebugData"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFStateMachineDebugData
{
	FScriptStruct_Engine_StaticRegisterNativesFStateMachineDebugData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StateMachineDebugData")),new UScriptStruct::TCppStructOps<FStateMachineDebugData>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFStateMachineDebugData;
	UScriptStruct* Z_Construct_UScriptStruct_FStateMachineDebugData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStateMachineDebugData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StateMachineDebugData"), sizeof(FStateMachineDebugData), Get_Z_Construct_UScriptStruct_FStateMachineDebugData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimBlueprintGeneratedClass.h" },
				{ "ToolTip", "This structure represents debugging information for a single state machine" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateMachineDebugData>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"StateMachineDebugData",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FStateMachineDebugData),
				alignof(FStateMachineDebugData),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStateMachineDebugData_CRC() { return 2520147383U; }
	void UAnimBlueprintGeneratedClass::StaticRegisterNativesUAnimBlueprintGeneratedClass()
	{
	}
	UClass* Z_Construct_UClass_UAnimBlueprintGeneratedClass_NoRegister()
	{
		return UAnimBlueprintGeneratedClass::StaticClass();
	}
	UClass* Z_Construct_UClass_UAnimBlueprintGeneratedClass()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlueprintGeneratedClass,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Animation/AnimBlueprintGeneratedClass.h" },
				{ "ModuleRelativePath", "Classes/Animation/AnimBlueprintGeneratedClass.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SyncGroupNames_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimBlueprintGeneratedClass.h" },
				{ "ToolTip", "Array of sync group names in the order that they are requested during compile" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SyncGroupNames = { UE4CodeGen_Private::EPropertyClass::Array, "SyncGroupNames", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UAnimBlueprintGeneratedClass, SyncGroupNames), METADATA_PARAMS(NewProp_SyncGroupNames_MetaData, ARRAY_COUNT(NewProp_SyncGroupNames_MetaData)) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_SyncGroupNames_Inner = { UE4CodeGen_Private::EPropertyClass::Name, "SyncGroupNames", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrderedSavedPoseIndices_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimBlueprintGeneratedClass.h" },
				{ "ToolTip", "Indices for each of the saved pose nodes that require updating, in the order they need to get updates." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OrderedSavedPoseIndices = { UE4CodeGen_Private::EPropertyClass::Array, "OrderedSavedPoseIndices", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UAnimBlueprintGeneratedClass, OrderedSavedPoseIndices), METADATA_PARAMS(NewProp_OrderedSavedPoseIndices_MetaData, ARRAY_COUNT(NewProp_OrderedSavedPoseIndices_MetaData)) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_OrderedSavedPoseIndices_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "OrderedSavedPoseIndices", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootAnimNodeIndex_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimBlueprintGeneratedClass.h" },
				{ "ToolTip", "The index of the root node in the animation tree" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_RootAnimNodeIndex = { UE4CodeGen_Private::EPropertyClass::Int, "RootAnimNodeIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UAnimBlueprintGeneratedClass, RootAnimNodeIndex), METADATA_PARAMS(NewProp_RootAnimNodeIndex_MetaData, ARRAY_COUNT(NewProp_RootAnimNodeIndex_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimNotifies_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimBlueprintGeneratedClass.h" },
				{ "ToolTip", "A list of anim notifies that state machines (or anything else) may reference" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AnimNotifies = { UE4CodeGen_Private::EPropertyClass::Array, "AnimNotifies", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000000, 1, nullptr, STRUCT_OFFSET(UAnimBlueprintGeneratedClass, AnimNotifies), METADATA_PARAMS(NewProp_AnimNotifies_MetaData, ARRAY_COUNT(NewProp_AnimNotifies_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AnimNotifies_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "AnimNotifies", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000008000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FAnimNotifyEvent, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetSkeleton_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimBlueprintGeneratedClass.h" },
				{ "ToolTip", "Target skeleton for this blueprint class" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetSkeleton = { UE4CodeGen_Private::EPropertyClass::Object, "TargetSkeleton", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UAnimBlueprintGeneratedClass, TargetSkeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(NewProp_TargetSkeleton_MetaData, ARRAY_COUNT(NewProp_TargetSkeleton_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BakedStateMachines_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimBlueprintGeneratedClass.h" },
				{ "ToolTip", "List of state machines present in this blueprint class" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BakedStateMachines = { UE4CodeGen_Private::EPropertyClass::Array, "BakedStateMachines", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UAnimBlueprintGeneratedClass, BakedStateMachines), METADATA_PARAMS(NewProp_BakedStateMachines_MetaData, ARRAY_COUNT(NewProp_BakedStateMachines_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BakedStateMachines_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "BakedStateMachines", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FBakedAnimationStateMachine, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SyncGroupNames,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SyncGroupNames_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OrderedSavedPoseIndices,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OrderedSavedPoseIndices_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RootAnimNodeIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AnimNotifies,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AnimNotifies_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetSkeleton,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BakedStateMachines,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BakedStateMachines_Inner,
			};
			static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[] = {
				{ Z_Construct_UClass_UAnimClassInterface_NoRegister, (int32)VTABLE_OFFSET(UAnimBlueprintGeneratedClass, IAnimClassInterface), false },
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAnimBlueprintGeneratedClass>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAnimBlueprintGeneratedClass::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				InterfaceParams, ARRAY_COUNT(InterfaceParams),
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimBlueprintGeneratedClass, 3349448904);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimBlueprintGeneratedClass(Z_Construct_UClass_UAnimBlueprintGeneratedClass, &UAnimBlueprintGeneratedClass::StaticClass, TEXT("/Script/Engine"), TEXT("UAnimBlueprintGeneratedClass"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimBlueprintGeneratedClass);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
