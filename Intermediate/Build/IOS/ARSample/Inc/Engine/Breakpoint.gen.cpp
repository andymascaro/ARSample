// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/Breakpoint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBreakpoint() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBreakpoint_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBreakpoint();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode_NoRegister();
// End Cross Module References
	void UBreakpoint::StaticRegisterNativesUBreakpoint()
	{
	}
	UClass* Z_Construct_UClass_UBreakpoint_NoRegister()
	{
		return UBreakpoint::StaticClass();
	}
	UClass* Z_Construct_UClass_UBreakpoint()
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
				{ "IncludePath", "Engine/Breakpoint.h" },
				{ "ModuleRelativePath", "Classes/Engine/Breakpoint.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStepOnce_RemoveAfterHit_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Breakpoint.h" },
			};
#endif
			auto NewProp_bStepOnce_RemoveAfterHit_SetBit = [](void* Obj){ ((UBreakpoint*)Obj)->bStepOnce_RemoveAfterHit = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStepOnce_RemoveAfterHit = { UE4CodeGen_Private::EPropertyClass::Bool, "bStepOnce_RemoveAfterHit", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UBreakpoint), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bStepOnce_RemoveAfterHit_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bStepOnce_RemoveAfterHit_MetaData, ARRAY_COUNT(NewProp_bStepOnce_RemoveAfterHit_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStepOnce_WasPreviouslyDisabled_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Breakpoint.h" },
			};
#endif
			auto NewProp_bStepOnce_WasPreviouslyDisabled_SetBit = [](void* Obj){ ((UBreakpoint*)Obj)->bStepOnce_WasPreviouslyDisabled = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStepOnce_WasPreviouslyDisabled = { UE4CodeGen_Private::EPropertyClass::Bool, "bStepOnce_WasPreviouslyDisabled", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UBreakpoint), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bStepOnce_WasPreviouslyDisabled_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bStepOnce_WasPreviouslyDisabled_MetaData, ARRAY_COUNT(NewProp_bStepOnce_WasPreviouslyDisabled_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStepOnce_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Breakpoint.h" },
				{ "ToolTip", "Is this breakpoint auto-generated, and should be removed when next hit?" },
			};
#endif
			auto NewProp_bStepOnce_SetBit = [](void* Obj){ ((UBreakpoint*)Obj)->bStepOnce = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStepOnce = { UE4CodeGen_Private::EPropertyClass::Bool, "bStepOnce", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UBreakpoint), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bStepOnce_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bStepOnce_MetaData, ARRAY_COUNT(NewProp_bStepOnce_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Breakpoint.h" },
				{ "ToolTip", "Node that the breakpoint is placed on" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Node = { UE4CodeGen_Private::EPropertyClass::Object, "Node", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UBreakpoint, Node), Z_Construct_UClass_UEdGraphNode_NoRegister, METADATA_PARAMS(NewProp_Node_MetaData, ARRAY_COUNT(NewProp_Node_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Breakpoint.h" },
				{ "ToolTip", "Is the breakpoint currently enabled?" },
			};
#endif
			auto NewProp_bEnabled_SetBit = [](void* Obj){ ((UBreakpoint*)Obj)->bEnabled = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnabled", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000002000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UBreakpoint), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnabled_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnabled_MetaData, ARRAY_COUNT(NewProp_bEnabled_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bStepOnce_RemoveAfterHit,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bStepOnce_WasPreviouslyDisabled,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bStepOnce,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Node,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnabled,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UBreakpoint>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UBreakpoint::StaticClass,
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
	IMPLEMENT_CLASS(UBreakpoint, 1767428434);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBreakpoint(Z_Construct_UClass_UBreakpoint, &UBreakpoint::StaticClass, TEXT("/Script/Engine"), TEXT("UBreakpoint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBreakpoint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
