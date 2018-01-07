// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/InputActionDelegateBinding.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputActionDelegateBinding() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintInputActionDelegateBinding();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EInputEvent();
	ENGINE_API UClass* Z_Construct_UClass_UInputActionDelegateBinding_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInputActionDelegateBinding();
	ENGINE_API UClass* Z_Construct_UClass_UInputDelegateBinding();
// End Cross Module References
class UScriptStruct* FBlueprintInputActionDelegateBinding::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FBlueprintInputActionDelegateBinding_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlueprintInputActionDelegateBinding, Z_Construct_UPackage__Script_Engine(), TEXT("BlueprintInputActionDelegateBinding"), sizeof(FBlueprintInputActionDelegateBinding), Get_Z_Construct_UScriptStruct_FBlueprintInputActionDelegateBinding_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBlueprintInputActionDelegateBinding(FBlueprintInputActionDelegateBinding::StaticStruct, TEXT("/Script/Engine"), TEXT("BlueprintInputActionDelegateBinding"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFBlueprintInputActionDelegateBinding
{
	FScriptStruct_Engine_StaticRegisterNativesFBlueprintInputActionDelegateBinding()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BlueprintInputActionDelegateBinding")),new UScriptStruct::TCppStructOps<FBlueprintInputActionDelegateBinding>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFBlueprintInputActionDelegateBinding;
	UScriptStruct* Z_Construct_UScriptStruct_FBlueprintInputActionDelegateBinding()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBlueprintInputActionDelegateBinding_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BlueprintInputActionDelegateBinding"), sizeof(FBlueprintInputActionDelegateBinding), Get_Z_Construct_UScriptStruct_FBlueprintInputActionDelegateBinding_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/InputActionDelegateBinding.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlueprintInputActionDelegateBinding>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FunctionNameToBind_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/InputActionDelegateBinding.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_FunctionNameToBind = { UE4CodeGen_Private::EPropertyClass::Name, "FunctionNameToBind", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FBlueprintInputActionDelegateBinding, FunctionNameToBind), METADATA_PARAMS(NewProp_FunctionNameToBind_MetaData, ARRAY_COUNT(NewProp_FunctionNameToBind_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputKeyEvent_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/InputActionDelegateBinding.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_InputKeyEvent = { UE4CodeGen_Private::EPropertyClass::Byte, "InputKeyEvent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FBlueprintInputActionDelegateBinding, InputKeyEvent), Z_Construct_UEnum_Engine_EInputEvent, METADATA_PARAMS(NewProp_InputKeyEvent_MetaData, ARRAY_COUNT(NewProp_InputKeyEvent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputActionName_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/InputActionDelegateBinding.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_InputActionName = { UE4CodeGen_Private::EPropertyClass::Name, "InputActionName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FBlueprintInputActionDelegateBinding, InputActionName), METADATA_PARAMS(NewProp_InputActionName_MetaData, ARRAY_COUNT(NewProp_InputActionName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FunctionNameToBind,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InputKeyEvent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InputActionName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"BlueprintInputActionDelegateBinding",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FBlueprintInputActionDelegateBinding),
				alignof(FBlueprintInputActionDelegateBinding),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBlueprintInputActionDelegateBinding_CRC() { return 2452539759U; }
	void UInputActionDelegateBinding::StaticRegisterNativesUInputActionDelegateBinding()
	{
	}
	UClass* Z_Construct_UClass_UInputActionDelegateBinding_NoRegister()
	{
		return UInputActionDelegateBinding::StaticClass();
	}
	UClass* Z_Construct_UClass_UInputActionDelegateBinding()
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
				{ "IncludePath", "Engine/InputActionDelegateBinding.h" },
				{ "ModuleRelativePath", "Classes/Engine/InputActionDelegateBinding.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputActionDelegateBindings_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/InputActionDelegateBinding.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InputActionDelegateBindings = { UE4CodeGen_Private::EPropertyClass::Array, "InputActionDelegateBindings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UInputActionDelegateBinding, InputActionDelegateBindings), METADATA_PARAMS(NewProp_InputActionDelegateBindings_MetaData, ARRAY_COUNT(NewProp_InputActionDelegateBindings_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputActionDelegateBindings_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "InputActionDelegateBindings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FBlueprintInputActionDelegateBinding, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InputActionDelegateBindings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InputActionDelegateBindings_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UInputActionDelegateBinding>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UInputActionDelegateBinding::StaticClass,
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
	IMPLEMENT_CLASS(UInputActionDelegateBinding, 1649160324);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInputActionDelegateBinding(Z_Construct_UClass_UInputActionDelegateBinding, &UInputActionDelegateBinding::StaticClass, TEXT("/Script/Engine"), TEXT("UInputActionDelegateBinding"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInputActionDelegateBinding);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
