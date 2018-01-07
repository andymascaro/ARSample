// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Animation/CurveSourceInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCurveSourceInterface() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNamedCurveValue();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UCurveSourceInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveSourceInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	ENGINE_API UFunction* Z_Construct_UFunction_UCurveSourceInterface_GetBindingName();
	ENGINE_API UFunction* Z_Construct_UFunction_UCurveSourceInterface_GetCurves();
	ENGINE_API UFunction* Z_Construct_UFunction_UCurveSourceInterface_GetCurveValue();
// End Cross Module References
class UScriptStruct* FNamedCurveValue::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FNamedCurveValue_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNamedCurveValue, Z_Construct_UPackage__Script_Engine(), TEXT("NamedCurveValue"), sizeof(FNamedCurveValue), Get_Z_Construct_UScriptStruct_FNamedCurveValue_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNamedCurveValue(FNamedCurveValue::StaticStruct, TEXT("/Script/Engine"), TEXT("NamedCurveValue"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFNamedCurveValue
{
	FScriptStruct_Engine_StaticRegisterNativesFNamedCurveValue()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NamedCurveValue")),new UScriptStruct::TCppStructOps<FNamedCurveValue>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFNamedCurveValue;
	UScriptStruct* Z_Construct_UScriptStruct_FNamedCurveValue()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNamedCurveValue_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NamedCurveValue"), sizeof(FNamedCurveValue), Get_Z_Construct_UScriptStruct_FNamedCurveValue_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/Animation/CurveSourceInterface.h" },
				{ "ToolTip", "Name/value pair for retrieving curve values" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNamedCurveValue>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
				{ "Category", "Curve" },
				{ "ModuleRelativePath", "Classes/Animation/CurveSourceInterface.h" },
				{ "ToolTip", "The value of the curve" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Float, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FNamedCurveValue, Value), METADATA_PARAMS(NewProp_Value_MetaData, ARRAY_COUNT(NewProp_Value_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
				{ "Category", "Curve" },
				{ "ModuleRelativePath", "Classes/Animation/CurveSourceInterface.h" },
				{ "ToolTip", "The name of the curve" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name = { UE4CodeGen_Private::EPropertyClass::Name, "Name", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FNamedCurveValue, Name), METADATA_PARAMS(NewProp_Name_MetaData, ARRAY_COUNT(NewProp_Name_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Name,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"NamedCurveValue",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FNamedCurveValue),
				alignof(FNamedCurveValue),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNamedCurveValue_CRC() { return 3236511952U; }
	FName ICurveSourceInterface::GetBindingName() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetBindingName instead.");
		CurveSourceInterface_eventGetBindingName_Parms Parms;
		return Parms.ReturnValue;
	}
	void ICurveSourceInterface::GetCurves(TArray<FNamedCurveValue>& OutValues) const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetCurves instead.");
	}
	float ICurveSourceInterface::GetCurveValue(FName CurveName) const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetCurveValue instead.");
		CurveSourceInterface_eventGetCurveValue_Parms Parms;
		return Parms.ReturnValue;
	}
	void UCurveSourceInterface::StaticRegisterNativesUCurveSourceInterface()
	{
		UClass* Class = UCurveSourceInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBindingName", (Native)&ICurveSourceInterface::execGetBindingName },
			{ "GetCurves", (Native)&ICurveSourceInterface::execGetCurves },
			{ "GetCurveValue", (Native)&ICurveSourceInterface::execGetCurveValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UCurveSourceInterface_GetBindingName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Name, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CurveSourceInterface_eventGetBindingName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Curves" },
				{ "ModuleRelativePath", "Classes/Animation/CurveSourceInterface.h" },
				{ "ToolTip", "Get the name that this curve source can be bound to by.\nClients of this curve source will use this name to identify this source." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCurveSourceInterface, "GetBindingName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x48020C00, sizeof(CurveSourceInterface_eventGetBindingName_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCurveSourceInterface_GetCurves()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutValues = { UE4CodeGen_Private::EPropertyClass::Array, "OutValues", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(CurveSourceInterface_eventGetCurves_Parms, OutValues), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutValues_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "OutValues", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FNamedCurveValue, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutValues,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutValues_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Curves" },
				{ "ModuleRelativePath", "Classes/Animation/CurveSourceInterface.h" },
				{ "ToolTip", "Evaluate all curves that this source provides" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCurveSourceInterface, "GetCurves", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x48420C00, sizeof(CurveSourceInterface_eventGetCurves_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCurveSourceInterface_GetCurveValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CurveSourceInterface_eventGetCurveValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_CurveName = { UE4CodeGen_Private::EPropertyClass::Name, "CurveName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CurveSourceInterface_eventGetCurveValue_Parms, CurveName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurveName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Curves" },
				{ "ModuleRelativePath", "Classes/Animation/CurveSourceInterface.h" },
				{ "ToolTip", "Get the value for a specified curve" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCurveSourceInterface, "GetCurveValue", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x48020C00, sizeof(CurveSourceInterface_eventGetCurveValue_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCurveSourceInterface_NoRegister()
	{
		return UCurveSourceInterface::StaticClass();
	}
	UClass* Z_Construct_UClass_UCurveSourceInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UInterface,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UCurveSourceInterface_GetBindingName, "GetBindingName" }, // 1243358169
				{ &Z_Construct_UFunction_UCurveSourceInterface_GetCurves, "GetCurves" }, // 4215654881
				{ &Z_Construct_UFunction_UCurveSourceInterface_GetCurveValue, "GetCurveValue" }, // 3425641505
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Animation/CurveSourceInterface.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ICurveSourceInterface>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UCurveSourceInterface::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00104081u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(UCurveSourceInterface, 3361000754);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCurveSourceInterface(Z_Construct_UClass_UCurveSourceInterface, &UCurveSourceInterface::StaticClass, TEXT("/Script/Engine"), TEXT("UCurveSourceInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCurveSourceInterface);
	static FName NAME_UCurveSourceInterface_GetBindingName = FName(TEXT("GetBindingName"));
	FName ICurveSourceInterface::Execute_GetBindingName(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UCurveSourceInterface::StaticClass()));
		CurveSourceInterface_eventGetBindingName_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UCurveSourceInterface_GetBindingName);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const ICurveSourceInterface*)(O->GetNativeInterfaceAddress(UCurveSourceInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetBindingName_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UCurveSourceInterface_GetCurves = FName(TEXT("GetCurves"));
	void ICurveSourceInterface::Execute_GetCurves(const UObject* O, TArray<FNamedCurveValue>& OutValues)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UCurveSourceInterface::StaticClass()));
		CurveSourceInterface_eventGetCurves_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UCurveSourceInterface_GetCurves);
		if (Func)
		{
			Parms.OutValues=OutValues;
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
			OutValues=Parms.OutValues;
		}
		else if (auto I = (const ICurveSourceInterface*)(O->GetNativeInterfaceAddress(UCurveSourceInterface::StaticClass())))
		{
			I->GetCurves_Implementation(OutValues);
		}
	}
	static FName NAME_UCurveSourceInterface_GetCurveValue = FName(TEXT("GetCurveValue"));
	float ICurveSourceInterface::Execute_GetCurveValue(const UObject* O, FName CurveName)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UCurveSourceInterface::StaticClass()));
		CurveSourceInterface_eventGetCurveValue_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UCurveSourceInterface_GetCurveValue);
		if (Func)
		{
			Parms.CurveName=CurveName;
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const ICurveSourceInterface*)(O->GetNativeInterfaceAddress(UCurveSourceInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetCurveValue_Implementation(CurveName);
		}
		return Parms.ReturnValue;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
