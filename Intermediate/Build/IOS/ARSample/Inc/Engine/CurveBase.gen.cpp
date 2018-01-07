// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Curves/CurveBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCurveBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCurveBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_UCurveBase_GetTimeRange();
	ENGINE_API UFunction* Z_Construct_UFunction_UCurveBase_GetValueRange();
	ENGINE_API UClass* Z_Construct_UClass_UAssetImportData_NoRegister();
// End Cross Module References
	void UCurveBase::StaticRegisterNativesUCurveBase()
	{
		UClass* Class = UCurveBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTimeRange", (Native)&UCurveBase::execGetTimeRange },
			{ "GetValueRange", (Native)&UCurveBase::execGetValueRange },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UCurveBase_GetTimeRange()
	{
		struct CurveBase_eventGetTimeRange_Parms
		{
			float MinTime;
			float MaxTime;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxTime = { UE4CodeGen_Private::EPropertyClass::Float, "MaxTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(CurveBase_eventGetTimeRange_Parms, MaxTime), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinTime = { UE4CodeGen_Private::EPropertyClass::Float, "MinTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(CurveBase_eventGetTimeRange_Parms, MinTime), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MinTime,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Math|Curves" },
				{ "ModuleRelativePath", "Classes/Curves/CurveBase.h" },
				{ "ToolTip", "Get the time range across all curves" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCurveBase, "GetTimeRange", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54420401, sizeof(CurveBase_eventGetTimeRange_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCurveBase_GetValueRange()
	{
		struct CurveBase_eventGetValueRange_Parms
		{
			float MinValue;
			float MaxValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxValue = { UE4CodeGen_Private::EPropertyClass::Float, "MaxValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(CurveBase_eventGetValueRange_Parms, MaxValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinValue = { UE4CodeGen_Private::EPropertyClass::Float, "MinValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(CurveBase_eventGetValueRange_Parms, MinValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MinValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Math|Curves" },
				{ "ModuleRelativePath", "Classes/Curves/CurveBase.h" },
				{ "ToolTip", "Get the value range across all curves" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCurveBase, "GetValueRange", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54420401, sizeof(CurveBase_eventGetValueRange_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCurveBase_NoRegister()
	{
		return UCurveBase::StaticClass();
	}
	UClass* Z_Construct_UClass_UCurveBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UCurveBase_GetTimeRange, "GetTimeRange" }, // 1069817261
				{ &Z_Construct_UFunction_UCurveBase_GetValueRange, "GetValueRange" }, // 2334040104
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Curves/CurveBase.h" },
				{ "ModuleRelativePath", "Classes/Curves/CurveBase.h" },
				{ "ToolTip", "Defines a curve of interpolated points to evaluate over a given range" },
			};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImportPath_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Curves/CurveBase.h" },
				{ "ToolTip", "The filename imported to create this object. Relative to this object's package, BaseDir() or absolute" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ImportPath = { UE4CodeGen_Private::EPropertyClass::Str, "ImportPath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000820000000, 1, nullptr, STRUCT_OFFSET(UCurveBase, ImportPath_DEPRECATED), METADATA_PARAMS(NewProp_ImportPath_MetaData, ARRAY_COUNT(NewProp_ImportPath_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetImportData_MetaData[] = {
				{ "Category", "ImportSettings" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/Curves/CurveBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetImportData = { UE4CodeGen_Private::EPropertyClass::Object, "AssetImportData", RF_Public|RF_Transient|RF_MarkAsNative, 0x00120008000a0009, 1, nullptr, STRUCT_OFFSET(UCurveBase, AssetImportData), Z_Construct_UClass_UAssetImportData_NoRegister, METADATA_PARAMS(NewProp_AssetImportData_MetaData, ARRAY_COUNT(NewProp_AssetImportData_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ImportPath,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AssetImportData,
			};
#endif // WITH_EDITORONLY_DATA
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UCurveBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UCurveBase::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900081u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				IF_WITH_EDITORONLY_DATA(PropPointers, nullptr), IF_WITH_EDITORONLY_DATA(ARRAY_COUNT(PropPointers), 0),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCurveBase, 4031754903);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCurveBase(Z_Construct_UClass_UCurveBase, &UCurveBase::StaticClass, TEXT("/Script/Engine"), TEXT("UCurveBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCurveBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
