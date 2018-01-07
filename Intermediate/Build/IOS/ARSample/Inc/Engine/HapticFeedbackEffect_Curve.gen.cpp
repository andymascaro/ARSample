// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Haptics/HapticFeedbackEffect_Curve.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHapticFeedbackEffect_Curve() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHapticFeedbackDetails_Curve();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
	ENGINE_API UClass* Z_Construct_UClass_UHapticFeedbackEffect_Curve_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UHapticFeedbackEffect_Curve();
	ENGINE_API UClass* Z_Construct_UClass_UHapticFeedbackEffect_Base();
// End Cross Module References
class UScriptStruct* FHapticFeedbackDetails_Curve::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FHapticFeedbackDetails_Curve_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHapticFeedbackDetails_Curve, Z_Construct_UPackage__Script_Engine(), TEXT("HapticFeedbackDetails_Curve"), sizeof(FHapticFeedbackDetails_Curve), Get_Z_Construct_UScriptStruct_FHapticFeedbackDetails_Curve_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHapticFeedbackDetails_Curve(FHapticFeedbackDetails_Curve::StaticStruct, TEXT("/Script/Engine"), TEXT("HapticFeedbackDetails_Curve"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFHapticFeedbackDetails_Curve
{
	FScriptStruct_Engine_StaticRegisterNativesFHapticFeedbackDetails_Curve()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("HapticFeedbackDetails_Curve")),new UScriptStruct::TCppStructOps<FHapticFeedbackDetails_Curve>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFHapticFeedbackDetails_Curve;
	UScriptStruct* Z_Construct_UScriptStruct_FHapticFeedbackDetails_Curve()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHapticFeedbackDetails_Curve_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HapticFeedbackDetails_Curve"), sizeof(FHapticFeedbackDetails_Curve), Get_Z_Construct_UScriptStruct_FHapticFeedbackDetails_Curve_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Haptics/HapticFeedbackEffect_Curve.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHapticFeedbackDetails_Curve>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Amplitude_MetaData[] = {
				{ "Category", "HapticDetails" },
				{ "ModuleRelativePath", "Classes/Haptics/HapticFeedbackEffect_Curve.h" },
				{ "ToolTip", "The amplitude to vibrate the haptic device at.  Amplitudes are normalized over the range [0.0, 1.0], with 1.0 being the max setting of the device" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Amplitude = { UE4CodeGen_Private::EPropertyClass::Struct, "Amplitude", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FHapticFeedbackDetails_Curve, Amplitude), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(NewProp_Amplitude_MetaData, ARRAY_COUNT(NewProp_Amplitude_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Frequency_MetaData[] = {
				{ "Category", "HapticDetails" },
				{ "ModuleRelativePath", "Classes/Haptics/HapticFeedbackEffect_Curve.h" },
				{ "ToolTip", "The frequency to vibrate the haptic device at.  Frequency ranges vary by device!" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Frequency = { UE4CodeGen_Private::EPropertyClass::Struct, "Frequency", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FHapticFeedbackDetails_Curve, Frequency), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(NewProp_Frequency_MetaData, ARRAY_COUNT(NewProp_Frequency_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Amplitude,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Frequency,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"HapticFeedbackDetails_Curve",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FHapticFeedbackDetails_Curve),
				alignof(FHapticFeedbackDetails_Curve),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHapticFeedbackDetails_Curve_CRC() { return 2902944789U; }
	void UHapticFeedbackEffect_Curve::StaticRegisterNativesUHapticFeedbackEffect_Curve()
	{
	}
	UClass* Z_Construct_UClass_UHapticFeedbackEffect_Curve_NoRegister()
	{
		return UHapticFeedbackEffect_Curve::StaticClass();
	}
	UClass* Z_Construct_UClass_UHapticFeedbackEffect_Curve()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UHapticFeedbackEffect_Base,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "Haptics/HapticFeedbackEffect_Curve.h" },
				{ "ModuleRelativePath", "Classes/Haptics/HapticFeedbackEffect_Curve.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HapticDetails_MetaData[] = {
				{ "Category", "HapticFeedbackEffect" },
				{ "ModuleRelativePath", "Classes/Haptics/HapticFeedbackEffect_Curve.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_HapticDetails = { UE4CodeGen_Private::EPropertyClass::Struct, "HapticDetails", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UHapticFeedbackEffect_Curve, HapticDetails), Z_Construct_UScriptStruct_FHapticFeedbackDetails_Curve, METADATA_PARAMS(NewProp_HapticDetails_MetaData, ARRAY_COUNT(NewProp_HapticDetails_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HapticDetails,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UHapticFeedbackEffect_Curve>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UHapticFeedbackEffect_Curve::StaticClass,
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
	IMPLEMENT_CLASS(UHapticFeedbackEffect_Curve, 1751732677);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHapticFeedbackEffect_Curve(Z_Construct_UClass_UHapticFeedbackEffect_Curve, &UHapticFeedbackEffect_Curve::StaticClass, TEXT("/Script/Engine"), TEXT("UHapticFeedbackEffect_Curve"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHapticFeedbackEffect_Curve);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
