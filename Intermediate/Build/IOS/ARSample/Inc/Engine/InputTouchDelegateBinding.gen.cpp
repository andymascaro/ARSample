// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/InputTouchDelegateBinding.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputTouchDelegateBinding() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintInputTouchDelegateBinding();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EInputEvent();
	ENGINE_API UClass* Z_Construct_UClass_UInputTouchDelegateBinding_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInputTouchDelegateBinding();
	ENGINE_API UClass* Z_Construct_UClass_UInputDelegateBinding();
// End Cross Module References
class UScriptStruct* FBlueprintInputTouchDelegateBinding::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FBlueprintInputTouchDelegateBinding_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlueprintInputTouchDelegateBinding, Z_Construct_UPackage__Script_Engine(), TEXT("BlueprintInputTouchDelegateBinding"), sizeof(FBlueprintInputTouchDelegateBinding), Get_Z_Construct_UScriptStruct_FBlueprintInputTouchDelegateBinding_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBlueprintInputTouchDelegateBinding(FBlueprintInputTouchDelegateBinding::StaticStruct, TEXT("/Script/Engine"), TEXT("BlueprintInputTouchDelegateBinding"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFBlueprintInputTouchDelegateBinding
{
	FScriptStruct_Engine_StaticRegisterNativesFBlueprintInputTouchDelegateBinding()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BlueprintInputTouchDelegateBinding")),new UScriptStruct::TCppStructOps<FBlueprintInputTouchDelegateBinding>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFBlueprintInputTouchDelegateBinding;
	UScriptStruct* Z_Construct_UScriptStruct_FBlueprintInputTouchDelegateBinding()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBlueprintInputTouchDelegateBinding_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BlueprintInputTouchDelegateBinding"), sizeof(FBlueprintInputTouchDelegateBinding), Get_Z_Construct_UScriptStruct_FBlueprintInputTouchDelegateBinding_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/InputTouchDelegateBinding.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlueprintInputTouchDelegateBinding>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FunctionNameToBind_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/InputTouchDelegateBinding.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_FunctionNameToBind = { UE4CodeGen_Private::EPropertyClass::Name, "FunctionNameToBind", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FBlueprintInputTouchDelegateBinding, FunctionNameToBind), METADATA_PARAMS(NewProp_FunctionNameToBind_MetaData, ARRAY_COUNT(NewProp_FunctionNameToBind_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputKeyEvent_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/InputTouchDelegateBinding.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_InputKeyEvent = { UE4CodeGen_Private::EPropertyClass::Byte, "InputKeyEvent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FBlueprintInputTouchDelegateBinding, InputKeyEvent), Z_Construct_UEnum_Engine_EInputEvent, METADATA_PARAMS(NewProp_InputKeyEvent_MetaData, ARRAY_COUNT(NewProp_InputKeyEvent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FunctionNameToBind,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InputKeyEvent,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"BlueprintInputTouchDelegateBinding",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FBlueprintInputTouchDelegateBinding),
				alignof(FBlueprintInputTouchDelegateBinding),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBlueprintInputTouchDelegateBinding_CRC() { return 1859097589U; }
	void UInputTouchDelegateBinding::StaticRegisterNativesUInputTouchDelegateBinding()
	{
	}
	UClass* Z_Construct_UClass_UInputTouchDelegateBinding_NoRegister()
	{
		return UInputTouchDelegateBinding::StaticClass();
	}
	UClass* Z_Construct_UClass_UInputTouchDelegateBinding()
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
				{ "IncludePath", "Engine/InputTouchDelegateBinding.h" },
				{ "ModuleRelativePath", "Classes/Engine/InputTouchDelegateBinding.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputTouchDelegateBindings_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/InputTouchDelegateBinding.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InputTouchDelegateBindings = { UE4CodeGen_Private::EPropertyClass::Array, "InputTouchDelegateBindings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UInputTouchDelegateBinding, InputTouchDelegateBindings), METADATA_PARAMS(NewProp_InputTouchDelegateBindings_MetaData, ARRAY_COUNT(NewProp_InputTouchDelegateBindings_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputTouchDelegateBindings_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "InputTouchDelegateBindings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FBlueprintInputTouchDelegateBinding, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InputTouchDelegateBindings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InputTouchDelegateBindings_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UInputTouchDelegateBinding>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UInputTouchDelegateBinding::StaticClass,
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
	IMPLEMENT_CLASS(UInputTouchDelegateBinding, 1662379146);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInputTouchDelegateBinding(Z_Construct_UClass_UInputTouchDelegateBinding, &UInputTouchDelegateBinding::StaticClass, TEXT("/Script/Engine"), TEXT("UInputTouchDelegateBinding"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInputTouchDelegateBinding);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
