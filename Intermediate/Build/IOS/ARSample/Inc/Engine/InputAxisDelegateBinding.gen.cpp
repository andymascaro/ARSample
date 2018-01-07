// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/InputAxisDelegateBinding.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputAxisDelegateBinding() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintInputAxisDelegateBinding();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding();
	ENGINE_API UClass* Z_Construct_UClass_UInputAxisDelegateBinding_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInputAxisDelegateBinding();
	ENGINE_API UClass* Z_Construct_UClass_UInputDelegateBinding();
// End Cross Module References
class UScriptStruct* FBlueprintInputAxisDelegateBinding::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FBlueprintInputAxisDelegateBinding_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlueprintInputAxisDelegateBinding, Z_Construct_UPackage__Script_Engine(), TEXT("BlueprintInputAxisDelegateBinding"), sizeof(FBlueprintInputAxisDelegateBinding), Get_Z_Construct_UScriptStruct_FBlueprintInputAxisDelegateBinding_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBlueprintInputAxisDelegateBinding(FBlueprintInputAxisDelegateBinding::StaticStruct, TEXT("/Script/Engine"), TEXT("BlueprintInputAxisDelegateBinding"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFBlueprintInputAxisDelegateBinding
{
	FScriptStruct_Engine_StaticRegisterNativesFBlueprintInputAxisDelegateBinding()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BlueprintInputAxisDelegateBinding")),new UScriptStruct::TCppStructOps<FBlueprintInputAxisDelegateBinding>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFBlueprintInputAxisDelegateBinding;
	UScriptStruct* Z_Construct_UScriptStruct_FBlueprintInputAxisDelegateBinding()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBlueprintInputAxisDelegateBinding_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BlueprintInputAxisDelegateBinding"), sizeof(FBlueprintInputAxisDelegateBinding), Get_Z_Construct_UScriptStruct_FBlueprintInputAxisDelegateBinding_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/InputAxisDelegateBinding.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlueprintInputAxisDelegateBinding>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FunctionNameToBind_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/InputAxisDelegateBinding.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_FunctionNameToBind = { UE4CodeGen_Private::EPropertyClass::Name, "FunctionNameToBind", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FBlueprintInputAxisDelegateBinding, FunctionNameToBind), METADATA_PARAMS(NewProp_FunctionNameToBind_MetaData, ARRAY_COUNT(NewProp_FunctionNameToBind_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputAxisName_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/InputAxisDelegateBinding.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_InputAxisName = { UE4CodeGen_Private::EPropertyClass::Name, "InputAxisName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FBlueprintInputAxisDelegateBinding, InputAxisName), METADATA_PARAMS(NewProp_InputAxisName_MetaData, ARRAY_COUNT(NewProp_InputAxisName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FunctionNameToBind,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InputAxisName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"BlueprintInputAxisDelegateBinding",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FBlueprintInputAxisDelegateBinding),
				alignof(FBlueprintInputAxisDelegateBinding),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBlueprintInputAxisDelegateBinding_CRC() { return 547584746U; }
	void UInputAxisDelegateBinding::StaticRegisterNativesUInputAxisDelegateBinding()
	{
	}
	UClass* Z_Construct_UClass_UInputAxisDelegateBinding_NoRegister()
	{
		return UInputAxisDelegateBinding::StaticClass();
	}
	UClass* Z_Construct_UClass_UInputAxisDelegateBinding()
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
				{ "IncludePath", "Engine/InputAxisDelegateBinding.h" },
				{ "ModuleRelativePath", "Classes/Engine/InputAxisDelegateBinding.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputAxisDelegateBindings_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/InputAxisDelegateBinding.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InputAxisDelegateBindings = { UE4CodeGen_Private::EPropertyClass::Array, "InputAxisDelegateBindings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UInputAxisDelegateBinding, InputAxisDelegateBindings), METADATA_PARAMS(NewProp_InputAxisDelegateBindings_MetaData, ARRAY_COUNT(NewProp_InputAxisDelegateBindings_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputAxisDelegateBindings_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "InputAxisDelegateBindings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FBlueprintInputAxisDelegateBinding, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InputAxisDelegateBindings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InputAxisDelegateBindings_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UInputAxisDelegateBinding>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UInputAxisDelegateBinding::StaticClass,
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
	IMPLEMENT_CLASS(UInputAxisDelegateBinding, 2791220012);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInputAxisDelegateBinding(Z_Construct_UClass_UInputAxisDelegateBinding, &UInputAxisDelegateBinding::StaticClass, TEXT("/Script/Engine"), TEXT("UInputAxisDelegateBinding"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInputAxisDelegateBinding);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
