// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Curves/CurveFloat.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCurveFloat() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRichCurve();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat();
	ENGINE_API UClass* Z_Construct_UClass_UCurveBase();
	ENGINE_API UFunction* Z_Construct_UFunction_UCurveFloat_GetFloatValue();
// End Cross Module References
class UScriptStruct* FRuntimeFloatCurve::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FRuntimeFloatCurve_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRuntimeFloatCurve, Z_Construct_UPackage__Script_Engine(), TEXT("RuntimeFloatCurve"), sizeof(FRuntimeFloatCurve), Get_Z_Construct_UScriptStruct_FRuntimeFloatCurve_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRuntimeFloatCurve(FRuntimeFloatCurve::StaticStruct, TEXT("/Script/Engine"), TEXT("RuntimeFloatCurve"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFRuntimeFloatCurve
{
	FScriptStruct_Engine_StaticRegisterNativesFRuntimeFloatCurve()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RuntimeFloatCurve")),new UScriptStruct::TCppStructOps<FRuntimeFloatCurve>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFRuntimeFloatCurve;
	UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRuntimeFloatCurve_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RuntimeFloatCurve"), sizeof(FRuntimeFloatCurve), Get_Z_Construct_UScriptStruct_FRuntimeFloatCurve_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/Curves/CurveFloat.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRuntimeFloatCurve>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExternalCurve_MetaData[] = {
				{ "Category", "RuntimeFloatCurve" },
				{ "ModuleRelativePath", "Classes/Curves/CurveFloat.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExternalCurve = { UE4CodeGen_Private::EPropertyClass::Object, "ExternalCurve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FRuntimeFloatCurve, ExternalCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(NewProp_ExternalCurve_MetaData, ARRAY_COUNT(NewProp_ExternalCurve_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditorCurveData_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Curves/CurveFloat.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_EditorCurveData = { UE4CodeGen_Private::EPropertyClass::Struct, "EditorCurveData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FRuntimeFloatCurve, EditorCurveData), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(NewProp_EditorCurveData_MetaData, ARRAY_COUNT(NewProp_EditorCurveData_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ExternalCurve,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EditorCurveData,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"RuntimeFloatCurve",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FRuntimeFloatCurve),
				alignof(FRuntimeFloatCurve),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRuntimeFloatCurve_CRC() { return 489651150U; }
	void UCurveFloat::StaticRegisterNativesUCurveFloat()
	{
		UClass* Class = UCurveFloat::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetFloatValue", (Native)&UCurveFloat::execGetFloatValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UCurveFloat_GetFloatValue()
	{
		struct CurveFloat_eventGetFloatValue_Parms
		{
			float InTime;
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CurveFloat_eventGetFloatValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InTime = { UE4CodeGen_Private::EPropertyClass::Float, "InTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CurveFloat_eventGetFloatValue_Parms, InTime), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InTime,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Math|Curves" },
				{ "ModuleRelativePath", "Classes/Curves/CurveFloat.h" },
				{ "ToolTip", "Evaluate this float curve at the specified time" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCurveFloat, "GetFloatValue", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(CurveFloat_eventGetFloatValue_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCurveFloat_NoRegister()
	{
		return UCurveFloat::StaticClass();
	}
	UClass* Z_Construct_UClass_UCurveFloat()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UCurveBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UCurveFloat_GetFloatValue, "GetFloatValue" }, // 3171863089
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "Curves/CurveFloat.h" },
				{ "ModuleRelativePath", "Classes/Curves/CurveFloat.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsEventCurve_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Curves/CurveFloat.h" },
				{ "ToolTip", "Flag to represent event curve" },
			};
#endif
			auto NewProp_bIsEventCurve_SetBit = [](void* Obj){ ((UCurveFloat*)Obj)->bIsEventCurve = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsEventCurve = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsEventCurve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UCurveFloat), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsEventCurve_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsEventCurve_MetaData, ARRAY_COUNT(NewProp_bIsEventCurve_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatCurve_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Curves/CurveFloat.h" },
				{ "ToolTip", "Keyframe data" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_FloatCurve = { UE4CodeGen_Private::EPropertyClass::Struct, "FloatCurve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UCurveFloat, FloatCurve), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(NewProp_FloatCurve_MetaData, ARRAY_COUNT(NewProp_FloatCurve_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsEventCurve,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FloatCurve,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UCurveFloat>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UCurveFloat::StaticClass,
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
	IMPLEMENT_CLASS(UCurveFloat, 4059089072);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCurveFloat(Z_Construct_UClass_UCurveFloat, &UCurveFloat::StaticClass, TEXT("/Script/Engine"), TEXT("UCurveFloat"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCurveFloat);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
