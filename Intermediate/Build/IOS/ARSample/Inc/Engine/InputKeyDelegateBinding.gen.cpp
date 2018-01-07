// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/InputKeyDelegateBinding.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputKeyDelegateBinding() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintInputKeyDelegateBinding();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EInputEvent();
	SLATE_API UScriptStruct* Z_Construct_UScriptStruct_FInputChord();
	ENGINE_API UClass* Z_Construct_UClass_UInputKeyDelegateBinding_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInputKeyDelegateBinding();
	ENGINE_API UClass* Z_Construct_UClass_UInputDelegateBinding();
// End Cross Module References
class UScriptStruct* FBlueprintInputKeyDelegateBinding::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FBlueprintInputKeyDelegateBinding_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlueprintInputKeyDelegateBinding, Z_Construct_UPackage__Script_Engine(), TEXT("BlueprintInputKeyDelegateBinding"), sizeof(FBlueprintInputKeyDelegateBinding), Get_Z_Construct_UScriptStruct_FBlueprintInputKeyDelegateBinding_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBlueprintInputKeyDelegateBinding(FBlueprintInputKeyDelegateBinding::StaticStruct, TEXT("/Script/Engine"), TEXT("BlueprintInputKeyDelegateBinding"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFBlueprintInputKeyDelegateBinding
{
	FScriptStruct_Engine_StaticRegisterNativesFBlueprintInputKeyDelegateBinding()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BlueprintInputKeyDelegateBinding")),new UScriptStruct::TCppStructOps<FBlueprintInputKeyDelegateBinding>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFBlueprintInputKeyDelegateBinding;
	UScriptStruct* Z_Construct_UScriptStruct_FBlueprintInputKeyDelegateBinding()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBlueprintInputKeyDelegateBinding_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BlueprintInputKeyDelegateBinding"), sizeof(FBlueprintInputKeyDelegateBinding), Get_Z_Construct_UScriptStruct_FBlueprintInputKeyDelegateBinding_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/InputKeyDelegateBinding.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlueprintInputKeyDelegateBinding>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FunctionNameToBind_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/InputKeyDelegateBinding.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_FunctionNameToBind = { UE4CodeGen_Private::EPropertyClass::Name, "FunctionNameToBind", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FBlueprintInputKeyDelegateBinding, FunctionNameToBind), METADATA_PARAMS(NewProp_FunctionNameToBind_MetaData, ARRAY_COUNT(NewProp_FunctionNameToBind_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputKeyEvent_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/InputKeyDelegateBinding.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_InputKeyEvent = { UE4CodeGen_Private::EPropertyClass::Byte, "InputKeyEvent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FBlueprintInputKeyDelegateBinding, InputKeyEvent), Z_Construct_UEnum_Engine_EInputEvent, METADATA_PARAMS(NewProp_InputKeyEvent_MetaData, ARRAY_COUNT(NewProp_InputKeyEvent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputChord_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/InputKeyDelegateBinding.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputChord = { UE4CodeGen_Private::EPropertyClass::Struct, "InputChord", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FBlueprintInputKeyDelegateBinding, InputChord), Z_Construct_UScriptStruct_FInputChord, METADATA_PARAMS(NewProp_InputChord_MetaData, ARRAY_COUNT(NewProp_InputChord_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FunctionNameToBind,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InputKeyEvent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InputChord,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"BlueprintInputKeyDelegateBinding",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FBlueprintInputKeyDelegateBinding),
				alignof(FBlueprintInputKeyDelegateBinding),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBlueprintInputKeyDelegateBinding_CRC() { return 1493842026U; }
	void UInputKeyDelegateBinding::StaticRegisterNativesUInputKeyDelegateBinding()
	{
	}
	UClass* Z_Construct_UClass_UInputKeyDelegateBinding_NoRegister()
	{
		return UInputKeyDelegateBinding::StaticClass();
	}
	UClass* Z_Construct_UClass_UInputKeyDelegateBinding()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UInputDelegateBinding,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Engine/InputKeyDelegateBinding.h" },
				{ "ModuleRelativePath", "Classes/Engine/InputKeyDelegateBinding.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputKeyDelegateBindings_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/InputKeyDelegateBinding.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InputKeyDelegateBindings = { UE4CodeGen_Private::EPropertyClass::Array, "InputKeyDelegateBindings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UInputKeyDelegateBinding, InputKeyDelegateBindings), METADATA_PARAMS(NewProp_InputKeyDelegateBindings_MetaData, ARRAY_COUNT(NewProp_InputKeyDelegateBindings_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputKeyDelegateBindings_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "InputKeyDelegateBindings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FBlueprintInputKeyDelegateBinding, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InputKeyDelegateBindings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InputKeyDelegateBindings_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UInputKeyDelegateBinding>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UInputKeyDelegateBinding::StaticClass,
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
	IMPLEMENT_CLASS(UInputKeyDelegateBinding, 943479496);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInputKeyDelegateBinding(Z_Construct_UClass_UInputKeyDelegateBinding, &UInputKeyDelegateBinding::StaticClass, TEXT("/Script/Engine"), TEXT("UInputKeyDelegateBinding"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInputKeyDelegateBinding);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
