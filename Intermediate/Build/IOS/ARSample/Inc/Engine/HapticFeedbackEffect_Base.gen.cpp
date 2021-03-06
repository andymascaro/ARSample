// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Haptics/HapticFeedbackEffect_Base.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHapticFeedbackEffect_Base() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FActiveHapticFeedbackEffect();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UHapticFeedbackEffect_Base_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UHapticFeedbackEffect_Base();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FActiveHapticFeedbackEffect::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FActiveHapticFeedbackEffect_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FActiveHapticFeedbackEffect, Z_Construct_UPackage__Script_Engine(), TEXT("ActiveHapticFeedbackEffect"), sizeof(FActiveHapticFeedbackEffect), Get_Z_Construct_UScriptStruct_FActiveHapticFeedbackEffect_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FActiveHapticFeedbackEffect(FActiveHapticFeedbackEffect::StaticStruct, TEXT("/Script/Engine"), TEXT("ActiveHapticFeedbackEffect"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFActiveHapticFeedbackEffect
{
	FScriptStruct_Engine_StaticRegisterNativesFActiveHapticFeedbackEffect()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ActiveHapticFeedbackEffect")),new UScriptStruct::TCppStructOps<FActiveHapticFeedbackEffect>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFActiveHapticFeedbackEffect;
	UScriptStruct* Z_Construct_UScriptStruct_FActiveHapticFeedbackEffect()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FActiveHapticFeedbackEffect_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ActiveHapticFeedbackEffect"), sizeof(FActiveHapticFeedbackEffect), Get_Z_Construct_UScriptStruct_FActiveHapticFeedbackEffect_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Haptics/HapticFeedbackEffect_Base.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActiveHapticFeedbackEffect>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HapticEffect_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Haptics/HapticFeedbackEffect_Base.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HapticEffect = { UE4CodeGen_Private::EPropertyClass::Object, "HapticEffect", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FActiveHapticFeedbackEffect, HapticEffect), Z_Construct_UClass_UHapticFeedbackEffect_Base_NoRegister, METADATA_PARAMS(NewProp_HapticEffect_MetaData, ARRAY_COUNT(NewProp_HapticEffect_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HapticEffect,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"ActiveHapticFeedbackEffect",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FActiveHapticFeedbackEffect),
				alignof(FActiveHapticFeedbackEffect),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FActiveHapticFeedbackEffect_CRC() { return 4057840498U; }
	void UHapticFeedbackEffect_Base::StaticRegisterNativesUHapticFeedbackEffect_Base()
	{
	}
	UClass* Z_Construct_UClass_UHapticFeedbackEffect_Base_NoRegister()
	{
		return UHapticFeedbackEffect_Base::StaticClass();
	}
	UClass* Z_Construct_UClass_UHapticFeedbackEffect_Base()
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
				{ "BlueprintType", "true" },
				{ "IncludePath", "Haptics/HapticFeedbackEffect_Base.h" },
				{ "ModuleRelativePath", "Classes/Haptics/HapticFeedbackEffect_Base.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UHapticFeedbackEffect_Base>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UHapticFeedbackEffect_Base::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00080080u,
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
	IMPLEMENT_CLASS(UHapticFeedbackEffect_Base, 119654649);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHapticFeedbackEffect_Base(Z_Construct_UClass_UHapticFeedbackEffect_Base, &UHapticFeedbackEffect_Base::StaticClass, TEXT("/Script/Engine"), TEXT("UHapticFeedbackEffect_Base"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHapticFeedbackEffect_Base);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
