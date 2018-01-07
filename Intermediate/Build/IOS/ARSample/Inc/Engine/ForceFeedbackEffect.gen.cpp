// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/GameFramework/ForceFeedbackEffect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeForceFeedbackEffect() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FActiveForceFeedbackEffect();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UForceFeedbackEffect_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FForceFeedbackChannelDetails();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
	ENGINE_API UClass* Z_Construct_UClass_UForceFeedbackEffect();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FActiveForceFeedbackEffect::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FActiveForceFeedbackEffect_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FActiveForceFeedbackEffect, Z_Construct_UPackage__Script_Engine(), TEXT("ActiveForceFeedbackEffect"), sizeof(FActiveForceFeedbackEffect), Get_Z_Construct_UScriptStruct_FActiveForceFeedbackEffect_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FActiveForceFeedbackEffect(FActiveForceFeedbackEffect::StaticStruct, TEXT("/Script/Engine"), TEXT("ActiveForceFeedbackEffect"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFActiveForceFeedbackEffect
{
	FScriptStruct_Engine_StaticRegisterNativesFActiveForceFeedbackEffect()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ActiveForceFeedbackEffect")),new UScriptStruct::TCppStructOps<FActiveForceFeedbackEffect>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFActiveForceFeedbackEffect;
	UScriptStruct* Z_Construct_UScriptStruct_FActiveForceFeedbackEffect()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FActiveForceFeedbackEffect_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ActiveForceFeedbackEffect"), sizeof(FActiveForceFeedbackEffect), Get_Z_Construct_UScriptStruct_FActiveForceFeedbackEffect_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/ForceFeedbackEffect.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActiveForceFeedbackEffect>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForceFeedbackEffect_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/ForceFeedbackEffect.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ForceFeedbackEffect = { UE4CodeGen_Private::EPropertyClass::Object, "ForceFeedbackEffect", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FActiveForceFeedbackEffect, ForceFeedbackEffect), Z_Construct_UClass_UForceFeedbackEffect_NoRegister, METADATA_PARAMS(NewProp_ForceFeedbackEffect_MetaData, ARRAY_COUNT(NewProp_ForceFeedbackEffect_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ForceFeedbackEffect,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"ActiveForceFeedbackEffect",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FActiveForceFeedbackEffect),
				alignof(FActiveForceFeedbackEffect),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FActiveForceFeedbackEffect_CRC() { return 2359127628U; }
class UScriptStruct* FForceFeedbackChannelDetails::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FForceFeedbackChannelDetails, Z_Construct_UPackage__Script_Engine(), TEXT("ForceFeedbackChannelDetails"), sizeof(FForceFeedbackChannelDetails), Get_Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FForceFeedbackChannelDetails(FForceFeedbackChannelDetails::StaticStruct, TEXT("/Script/Engine"), TEXT("ForceFeedbackChannelDetails"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFForceFeedbackChannelDetails
{
	FScriptStruct_Engine_StaticRegisterNativesFForceFeedbackChannelDetails()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ForceFeedbackChannelDetails")),new UScriptStruct::TCppStructOps<FForceFeedbackChannelDetails>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFForceFeedbackChannelDetails;
	UScriptStruct* Z_Construct_UScriptStruct_FForceFeedbackChannelDetails()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ForceFeedbackChannelDetails"), sizeof(FForceFeedbackChannelDetails), Get_Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/ForceFeedbackEffect.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FForceFeedbackChannelDetails>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Curve_MetaData[] = {
				{ "Category", "ChannelDetails" },
				{ "ModuleRelativePath", "Classes/GameFramework/ForceFeedbackEffect.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Curve = { UE4CodeGen_Private::EPropertyClass::Struct, "Curve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FForceFeedbackChannelDetails, Curve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(NewProp_Curve_MetaData, ARRAY_COUNT(NewProp_Curve_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAffectsRightSmall_MetaData[] = {
				{ "Category", "ChannelDetails" },
				{ "ModuleRelativePath", "Classes/GameFramework/ForceFeedbackEffect.h" },
			};
#endif
			auto NewProp_bAffectsRightSmall_SetBit = [](void* Obj){ ((FForceFeedbackChannelDetails*)Obj)->bAffectsRightSmall = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAffectsRightSmall = { UE4CodeGen_Private::EPropertyClass::Bool, "bAffectsRightSmall", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FForceFeedbackChannelDetails), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAffectsRightSmall_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAffectsRightSmall_MetaData, ARRAY_COUNT(NewProp_bAffectsRightSmall_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAffectsRightLarge_MetaData[] = {
				{ "Category", "ChannelDetails" },
				{ "ModuleRelativePath", "Classes/GameFramework/ForceFeedbackEffect.h" },
			};
#endif
			auto NewProp_bAffectsRightLarge_SetBit = [](void* Obj){ ((FForceFeedbackChannelDetails*)Obj)->bAffectsRightLarge = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAffectsRightLarge = { UE4CodeGen_Private::EPropertyClass::Bool, "bAffectsRightLarge", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FForceFeedbackChannelDetails), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAffectsRightLarge_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAffectsRightLarge_MetaData, ARRAY_COUNT(NewProp_bAffectsRightLarge_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAffectsLeftSmall_MetaData[] = {
				{ "Category", "ChannelDetails" },
				{ "ModuleRelativePath", "Classes/GameFramework/ForceFeedbackEffect.h" },
			};
#endif
			auto NewProp_bAffectsLeftSmall_SetBit = [](void* Obj){ ((FForceFeedbackChannelDetails*)Obj)->bAffectsLeftSmall = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAffectsLeftSmall = { UE4CodeGen_Private::EPropertyClass::Bool, "bAffectsLeftSmall", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FForceFeedbackChannelDetails), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAffectsLeftSmall_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAffectsLeftSmall_MetaData, ARRAY_COUNT(NewProp_bAffectsLeftSmall_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAffectsLeftLarge_MetaData[] = {
				{ "Category", "ChannelDetails" },
				{ "ModuleRelativePath", "Classes/GameFramework/ForceFeedbackEffect.h" },
			};
#endif
			auto NewProp_bAffectsLeftLarge_SetBit = [](void* Obj){ ((FForceFeedbackChannelDetails*)Obj)->bAffectsLeftLarge = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAffectsLeftLarge = { UE4CodeGen_Private::EPropertyClass::Bool, "bAffectsLeftLarge", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FForceFeedbackChannelDetails), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAffectsLeftLarge_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAffectsLeftLarge_MetaData, ARRAY_COUNT(NewProp_bAffectsLeftLarge_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Curve,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAffectsRightSmall,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAffectsRightLarge,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAffectsLeftSmall,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAffectsLeftLarge,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"ForceFeedbackChannelDetails",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FForceFeedbackChannelDetails),
				alignof(FForceFeedbackChannelDetails),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_CRC() { return 1678045258U; }
	void UForceFeedbackEffect::StaticRegisterNativesUForceFeedbackEffect()
	{
	}
	UClass* Z_Construct_UClass_UForceFeedbackEffect_NoRegister()
	{
		return UForceFeedbackEffect::StaticClass();
	}
	UClass* Z_Construct_UClass_UForceFeedbackEffect()
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
				{ "IncludePath", "GameFramework/ForceFeedbackEffect.h" },
				{ "ModuleRelativePath", "Classes/GameFramework/ForceFeedbackEffect.h" },
				{ "ToolTip", "A predefined force-feedback effect to be played on a controller" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[] = {
				{ "Category", "Info" },
				{ "ModuleRelativePath", "Classes/GameFramework/ForceFeedbackEffect.h" },
				{ "ToolTip", "Duration of force feedback pattern in seconds." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration = { UE4CodeGen_Private::EPropertyClass::Float, "Duration", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010010000020015, 1, nullptr, STRUCT_OFFSET(UForceFeedbackEffect, Duration), METADATA_PARAMS(NewProp_Duration_MetaData, ARRAY_COUNT(NewProp_Duration_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChannelDetails_MetaData[] = {
				{ "Category", "ForceFeedbackEffect" },
				{ "ModuleRelativePath", "Classes/GameFramework/ForceFeedbackEffect.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ChannelDetails = { UE4CodeGen_Private::EPropertyClass::Array, "ChannelDetails", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UForceFeedbackEffect, ChannelDetails), METADATA_PARAMS(NewProp_ChannelDetails_MetaData, ARRAY_COUNT(NewProp_ChannelDetails_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChannelDetails_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ChannelDetails", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FForceFeedbackChannelDetails, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Duration,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ChannelDetails,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ChannelDetails_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UForceFeedbackEffect>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UForceFeedbackEffect::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00080080u,
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
	IMPLEMENT_CLASS(UForceFeedbackEffect, 2410931828);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UForceFeedbackEffect(Z_Construct_UClass_UForceFeedbackEffect, &UForceFeedbackEffect::StaticClass, TEXT("/Script/Engine"), TEXT("UForceFeedbackEffect"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UForceFeedbackEffect);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
