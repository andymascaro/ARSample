// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/ComponentDelegateBinding.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComponentDelegateBinding() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintComponentDelegateBinding();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UComponentDelegateBinding_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UComponentDelegateBinding();
	ENGINE_API UClass* Z_Construct_UClass_UDynamicBlueprintBinding();
// End Cross Module References
class UScriptStruct* FBlueprintComponentDelegateBinding::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FBlueprintComponentDelegateBinding_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlueprintComponentDelegateBinding, Z_Construct_UPackage__Script_Engine(), TEXT("BlueprintComponentDelegateBinding"), sizeof(FBlueprintComponentDelegateBinding), Get_Z_Construct_UScriptStruct_FBlueprintComponentDelegateBinding_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBlueprintComponentDelegateBinding(FBlueprintComponentDelegateBinding::StaticStruct, TEXT("/Script/Engine"), TEXT("BlueprintComponentDelegateBinding"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFBlueprintComponentDelegateBinding
{
	FScriptStruct_Engine_StaticRegisterNativesFBlueprintComponentDelegateBinding()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BlueprintComponentDelegateBinding")),new UScriptStruct::TCppStructOps<FBlueprintComponentDelegateBinding>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFBlueprintComponentDelegateBinding;
	UScriptStruct* Z_Construct_UScriptStruct_FBlueprintComponentDelegateBinding()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBlueprintComponentDelegateBinding_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BlueprintComponentDelegateBinding"), sizeof(FBlueprintComponentDelegateBinding), Get_Z_Construct_UScriptStruct_FBlueprintComponentDelegateBinding_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/ComponentDelegateBinding.h" },
				{ "ToolTip", "Entry for a delegate to assign after a blueprint has been instanced" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlueprintComponentDelegateBinding>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FunctionNameToBind_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/ComponentDelegateBinding.h" },
				{ "ToolTip", "Name of function that we want to bind to the delegate." },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_FunctionNameToBind = { UE4CodeGen_Private::EPropertyClass::Name, "FunctionNameToBind", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FBlueprintComponentDelegateBinding, FunctionNameToBind), METADATA_PARAMS(NewProp_FunctionNameToBind_MetaData, ARRAY_COUNT(NewProp_FunctionNameToBind_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DelegatePropertyName_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/ComponentDelegateBinding.h" },
				{ "ToolTip", "Name of property on the component that we want to assign to." },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_DelegatePropertyName = { UE4CodeGen_Private::EPropertyClass::Name, "DelegatePropertyName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FBlueprintComponentDelegateBinding, DelegatePropertyName), METADATA_PARAMS(NewProp_DelegatePropertyName_MetaData, ARRAY_COUNT(NewProp_DelegatePropertyName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentPropertyName_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/ComponentDelegateBinding.h" },
				{ "ToolTip", "Name of component property that contains delegate we want to assign to." },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ComponentPropertyName = { UE4CodeGen_Private::EPropertyClass::Name, "ComponentPropertyName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FBlueprintComponentDelegateBinding, ComponentPropertyName), METADATA_PARAMS(NewProp_ComponentPropertyName_MetaData, ARRAY_COUNT(NewProp_ComponentPropertyName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FunctionNameToBind,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DelegatePropertyName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ComponentPropertyName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"BlueprintComponentDelegateBinding",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FBlueprintComponentDelegateBinding),
				alignof(FBlueprintComponentDelegateBinding),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBlueprintComponentDelegateBinding_CRC() { return 3748944346U; }
	void UComponentDelegateBinding::StaticRegisterNativesUComponentDelegateBinding()
	{
	}
	UClass* Z_Construct_UClass_UComponentDelegateBinding_NoRegister()
	{
		return UComponentDelegateBinding::StaticClass();
	}
	UClass* Z_Construct_UClass_UComponentDelegateBinding()
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
				{ "IncludePath", "Engine/ComponentDelegateBinding.h" },
				{ "ModuleRelativePath", "Classes/Engine/ComponentDelegateBinding.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentDelegateBindings_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/ComponentDelegateBinding.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ComponentDelegateBindings = { UE4CodeGen_Private::EPropertyClass::Array, "ComponentDelegateBindings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UComponentDelegateBinding, ComponentDelegateBindings), METADATA_PARAMS(NewProp_ComponentDelegateBindings_MetaData, ARRAY_COUNT(NewProp_ComponentDelegateBindings_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ComponentDelegateBindings_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ComponentDelegateBindings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FBlueprintComponentDelegateBinding, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ComponentDelegateBindings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ComponentDelegateBindings_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UComponentDelegateBinding>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UComponentDelegateBinding::StaticClass,
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
	IMPLEMENT_CLASS(UComponentDelegateBinding, 2537464048);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UComponentDelegateBinding(Z_Construct_UClass_UComponentDelegateBinding, &UComponentDelegateBinding::StaticClass, TEXT("/Script/Engine"), TEXT("UComponentDelegateBinding"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComponentDelegateBinding);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
