// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Curves/CurveLinearColor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCurveLinearColor() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeCurveLinearColor();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UCurveLinearColor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRichCurve();
	ENGINE_API UClass* Z_Construct_UClass_UCurveLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UCurveBase();
	ENGINE_API UFunction* Z_Construct_UFunction_UCurveLinearColor_GetLinearColorValue();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
class UScriptStruct* FRuntimeCurveLinearColor::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FRuntimeCurveLinearColor_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRuntimeCurveLinearColor, Z_Construct_UPackage__Script_Engine(), TEXT("RuntimeCurveLinearColor"), sizeof(FRuntimeCurveLinearColor), Get_Z_Construct_UScriptStruct_FRuntimeCurveLinearColor_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRuntimeCurveLinearColor(FRuntimeCurveLinearColor::StaticStruct, TEXT("/Script/Engine"), TEXT("RuntimeCurveLinearColor"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFRuntimeCurveLinearColor
{
	FScriptStruct_Engine_StaticRegisterNativesFRuntimeCurveLinearColor()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RuntimeCurveLinearColor")),new UScriptStruct::TCppStructOps<FRuntimeCurveLinearColor>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFRuntimeCurveLinearColor;
	UScriptStruct* Z_Construct_UScriptStruct_FRuntimeCurveLinearColor()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRuntimeCurveLinearColor_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RuntimeCurveLinearColor"), sizeof(FRuntimeCurveLinearColor), Get_Z_Construct_UScriptStruct_FRuntimeCurveLinearColor_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Curves/CurveLinearColor.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRuntimeCurveLinearColor>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExternalCurve_MetaData[] = {
				{ "Category", "RuntimeFloatCurve" },
				{ "ModuleRelativePath", "Classes/Curves/CurveLinearColor.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExternalCurve = { UE4CodeGen_Private::EPropertyClass::Object, "ExternalCurve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FRuntimeCurveLinearColor, ExternalCurve), Z_Construct_UClass_UCurveLinearColor_NoRegister, METADATA_PARAMS(NewProp_ExternalCurve_MetaData, ARRAY_COUNT(NewProp_ExternalCurve_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorCurves_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Curves/CurveLinearColor.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorCurves = { UE4CodeGen_Private::EPropertyClass::Struct, "ColorCurves", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, CPP_ARRAY_DIM(ColorCurves, FRuntimeCurveLinearColor), nullptr, STRUCT_OFFSET(FRuntimeCurveLinearColor, ColorCurves), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(NewProp_ColorCurves_MetaData, ARRAY_COUNT(NewProp_ColorCurves_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ExternalCurve,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ColorCurves,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"RuntimeCurveLinearColor",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FRuntimeCurveLinearColor),
				alignof(FRuntimeCurveLinearColor),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRuntimeCurveLinearColor_CRC() { return 1432552766U; }
	void UCurveLinearColor::StaticRegisterNativesUCurveLinearColor()
	{
		UClass* Class = UCurveLinearColor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLinearColorValue", (Native)&UCurveLinearColor::execGetLinearColorValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UCurveLinearColor_GetLinearColorValue()
	{
		struct CurveLinearColor_eventGetLinearColorValue_Parms
		{
			float InTime;
			FLinearColor ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CurveLinearColor_eventGetLinearColorValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InTime = { UE4CodeGen_Private::EPropertyClass::Float, "InTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CurveLinearColor_eventGetLinearColorValue_Parms, InTime), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InTime,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Math|Curves" },
				{ "ModuleRelativePath", "Classes/Curves/CurveLinearColor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCurveLinearColor, "GetLinearColorValue", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820400, sizeof(CurveLinearColor_eventGetLinearColorValue_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCurveLinearColor_NoRegister()
	{
		return UCurveLinearColor::StaticClass();
	}
	UClass* Z_Construct_UClass_UCurveLinearColor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UCurveBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UCurveLinearColor_GetLinearColorValue, "GetLinearColorValue" }, // 3347624032
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "Curves/CurveLinearColor.h" },
				{ "ModuleRelativePath", "Classes/Curves/CurveLinearColor.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatCurves_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Curves/CurveLinearColor.h" },
				{ "ToolTip", "Keyframe data, one curve for red, green, blue, and alpha" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_FloatCurves = { UE4CodeGen_Private::EPropertyClass::Struct, "FloatCurves", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, CPP_ARRAY_DIM(FloatCurves, UCurveLinearColor), nullptr, STRUCT_OFFSET(UCurveLinearColor, FloatCurves), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(NewProp_FloatCurves_MetaData, ARRAY_COUNT(NewProp_FloatCurves_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FloatCurves,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UCurveLinearColor>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UCurveLinearColor::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(UCurveLinearColor, 1302429215);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCurveLinearColor(Z_Construct_UClass_UCurveLinearColor, &UCurveLinearColor::StaticClass, TEXT("/Script/Engine"), TEXT("UCurveLinearColor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCurveLinearColor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
