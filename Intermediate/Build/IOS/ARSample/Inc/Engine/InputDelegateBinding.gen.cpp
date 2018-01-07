// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/InputDelegateBinding.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputDelegateBinding() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UInputDelegateBinding_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInputDelegateBinding();
	ENGINE_API UClass* Z_Construct_UClass_UDynamicBlueprintBinding();
// End Cross Module References
class UScriptStruct* FBlueprintInputDelegateBinding::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding, Z_Construct_UPackage__Script_Engine(), TEXT("BlueprintInputDelegateBinding"), sizeof(FBlueprintInputDelegateBinding), Get_Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBlueprintInputDelegateBinding(FBlueprintInputDelegateBinding::StaticStruct, TEXT("/Script/Engine"), TEXT("BlueprintInputDelegateBinding"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFBlueprintInputDelegateBinding
{
	FScriptStruct_Engine_StaticRegisterNativesFBlueprintInputDelegateBinding()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BlueprintInputDelegateBinding")),new UScriptStruct::TCppStructOps<FBlueprintInputDelegateBinding>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFBlueprintInputDelegateBinding;
	UScriptStruct* Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BlueprintInputDelegateBinding"), sizeof(FBlueprintInputDelegateBinding), Get_Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/InputDelegateBinding.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlueprintInputDelegateBinding>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideParentBinding_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/InputDelegateBinding.h" },
			};
#endif
			auto NewProp_bOverrideParentBinding_SetBit = [](void* Obj){ ((FBlueprintInputDelegateBinding*)Obj)->bOverrideParentBinding = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideParentBinding = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverrideParentBinding", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FBlueprintInputDelegateBinding), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bOverrideParentBinding_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bOverrideParentBinding_MetaData, ARRAY_COUNT(NewProp_bOverrideParentBinding_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bExecuteWhenPaused_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/InputDelegateBinding.h" },
			};
#endif
			auto NewProp_bExecuteWhenPaused_SetBit = [](void* Obj){ ((FBlueprintInputDelegateBinding*)Obj)->bExecuteWhenPaused = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExecuteWhenPaused = { UE4CodeGen_Private::EPropertyClass::Bool, "bExecuteWhenPaused", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FBlueprintInputDelegateBinding), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bExecuteWhenPaused_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bExecuteWhenPaused_MetaData, ARRAY_COUNT(NewProp_bExecuteWhenPaused_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bConsumeInput_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/InputDelegateBinding.h" },
			};
#endif
			auto NewProp_bConsumeInput_SetBit = [](void* Obj){ ((FBlueprintInputDelegateBinding*)Obj)->bConsumeInput = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConsumeInput = { UE4CodeGen_Private::EPropertyClass::Bool, "bConsumeInput", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FBlueprintInputDelegateBinding), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bConsumeInput_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bConsumeInput_MetaData, ARRAY_COUNT(NewProp_bConsumeInput_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bOverrideParentBinding,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bExecuteWhenPaused,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bConsumeInput,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"BlueprintInputDelegateBinding",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FBlueprintInputDelegateBinding),
				alignof(FBlueprintInputDelegateBinding),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding_CRC() { return 637403762U; }
	void UInputDelegateBinding::StaticRegisterNativesUInputDelegateBinding()
	{
	}
	UClass* Z_Construct_UClass_UInputDelegateBinding_NoRegister()
	{
		return UInputDelegateBinding::StaticClass();
	}
	UClass* Z_Construct_UClass_UInputDelegateBinding()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UDynamicBlueprintBinding,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Engine/InputDelegateBinding.h" },
				{ "ModuleRelativePath", "Classes/Engine/InputDelegateBinding.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UInputDelegateBinding>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UInputDelegateBinding::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100081u,
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
	IMPLEMENT_CLASS(UInputDelegateBinding, 491237552);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInputDelegateBinding(Z_Construct_UClass_UInputDelegateBinding, &UInputDelegateBinding::StaticClass, TEXT("/Script/Engine"), TEXT("UInputDelegateBinding"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInputDelegateBinding);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
