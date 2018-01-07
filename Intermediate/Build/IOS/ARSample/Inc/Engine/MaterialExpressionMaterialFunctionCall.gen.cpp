// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Materials/MaterialExpressionMaterialFunctionCall.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionMaterialFunctionCall() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFunctionExpressionOutput();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionOutput();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionFunctionOutput_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFunctionExpressionInput();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionFunctionInput_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UFunction* Z_Construct_UFunction_UMaterialExpressionMaterialFunctionCall_SetMaterialFunction();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialFunction_NoRegister();
// End Cross Module References
class UScriptStruct* FFunctionExpressionOutput::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FFunctionExpressionOutput_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFunctionExpressionOutput, Z_Construct_UPackage__Script_Engine(), TEXT("FunctionExpressionOutput"), sizeof(FFunctionExpressionOutput), Get_Z_Construct_UScriptStruct_FFunctionExpressionOutput_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFunctionExpressionOutput(FFunctionExpressionOutput::StaticStruct, TEXT("/Script/Engine"), TEXT("FunctionExpressionOutput"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFFunctionExpressionOutput
{
	FScriptStruct_Engine_StaticRegisterNativesFFunctionExpressionOutput()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FunctionExpressionOutput")),new UScriptStruct::TCppStructOps<FFunctionExpressionOutput>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFFunctionExpressionOutput;
	UScriptStruct* Z_Construct_UScriptStruct_FFunctionExpressionOutput()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFunctionExpressionOutput_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FunctionExpressionOutput"), sizeof(FFunctionExpressionOutput), Get_Z_Construct_UScriptStruct_FFunctionExpressionOutput_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMaterialFunctionCall.h" },
				{ "ToolTip", "Struct that stores information about a function output which is needed to maintain connections and implement the function call." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFunctionExpressionOutput>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Output_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMaterialFunctionCall.h" },
				{ "ToolTip", "Actual output struct which stores information about how this output is connected in the material." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Output = { UE4CodeGen_Private::EPropertyClass::Struct, "Output", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FFunctionExpressionOutput, Output), Z_Construct_UScriptStruct_FExpressionOutput, METADATA_PARAMS(NewProp_Output_MetaData, ARRAY_COUNT(NewProp_Output_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpressionOutputId_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMaterialFunctionCall.h" },
				{ "ToolTip", "Id of the FunctionOutput, used to link ExpressionOutput." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExpressionOutputId = { UE4CodeGen_Private::EPropertyClass::Struct, "ExpressionOutputId", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FFunctionExpressionOutput, ExpressionOutputId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_ExpressionOutputId_MetaData, ARRAY_COUNT(NewProp_ExpressionOutputId_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpressionOutput_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMaterialFunctionCall.h" },
				{ "ToolTip", "Reference to the FunctionOutput in the material function.\nThis is a reference to a private object so it can't be saved, and must be generated by UpdateFromFunctionResource or SetMaterialFunction." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExpressionOutput = { UE4CodeGen_Private::EPropertyClass::Object, "ExpressionOutput", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, STRUCT_OFFSET(FFunctionExpressionOutput, ExpressionOutput), Z_Construct_UClass_UMaterialExpressionFunctionOutput_NoRegister, METADATA_PARAMS(NewProp_ExpressionOutput_MetaData, ARRAY_COUNT(NewProp_ExpressionOutput_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Output,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ExpressionOutputId,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ExpressionOutput,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"FunctionExpressionOutput",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FFunctionExpressionOutput),
				alignof(FFunctionExpressionOutput),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFunctionExpressionOutput_CRC() { return 1897376978U; }
class UScriptStruct* FFunctionExpressionInput::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FFunctionExpressionInput_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFunctionExpressionInput, Z_Construct_UPackage__Script_Engine(), TEXT("FunctionExpressionInput"), sizeof(FFunctionExpressionInput), Get_Z_Construct_UScriptStruct_FFunctionExpressionInput_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFunctionExpressionInput(FFunctionExpressionInput::StaticStruct, TEXT("/Script/Engine"), TEXT("FunctionExpressionInput"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFFunctionExpressionInput
{
	FScriptStruct_Engine_StaticRegisterNativesFFunctionExpressionInput()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FunctionExpressionInput")),new UScriptStruct::TCppStructOps<FFunctionExpressionInput>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFFunctionExpressionInput;
	UScriptStruct* Z_Construct_UScriptStruct_FFunctionExpressionInput()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFunctionExpressionInput_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FunctionExpressionInput"), sizeof(FFunctionExpressionInput), Get_Z_Construct_UScriptStruct_FFunctionExpressionInput_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMaterialFunctionCall.h" },
				{ "ToolTip", "Struct that stores information about a function input which is needed to maintain connections and implement the function call." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFunctionExpressionInput>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMaterialFunctionCall.h" },
				{ "ToolTip", "Actual input struct which stores information about how this input is connected in the material." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Input = { UE4CodeGen_Private::EPropertyClass::Struct, "Input", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FFunctionExpressionInput, Input), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_Input_MetaData, ARRAY_COUNT(NewProp_Input_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpressionInputId_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMaterialFunctionCall.h" },
				{ "ToolTip", "Id of the FunctionInput, used to link ExpressionInput." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExpressionInputId = { UE4CodeGen_Private::EPropertyClass::Struct, "ExpressionInputId", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FFunctionExpressionInput, ExpressionInputId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_ExpressionInputId_MetaData, ARRAY_COUNT(NewProp_ExpressionInputId_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpressionInput_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMaterialFunctionCall.h" },
				{ "ToolTip", "Reference to the FunctionInput in the material function.\nThis is a reference to a private object so it can't be saved, and must be generated by UpdateFromFunctionResource or SetMaterialFunction." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExpressionInput = { UE4CodeGen_Private::EPropertyClass::Object, "ExpressionInput", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, STRUCT_OFFSET(FFunctionExpressionInput, ExpressionInput), Z_Construct_UClass_UMaterialExpressionFunctionInput_NoRegister, METADATA_PARAMS(NewProp_ExpressionInput_MetaData, ARRAY_COUNT(NewProp_ExpressionInput_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Input,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ExpressionInputId,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ExpressionInput,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"FunctionExpressionInput",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FFunctionExpressionInput),
				alignof(FFunctionExpressionInput),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFunctionExpressionInput_CRC() { return 3478375039U; }
	void UMaterialExpressionMaterialFunctionCall::StaticRegisterNativesUMaterialExpressionMaterialFunctionCall()
	{
#if WITH_EDITOR
		UClass* Class = UMaterialExpressionMaterialFunctionCall::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetMaterialFunction", (Native)&UMaterialExpressionMaterialFunctionCall::execSetMaterialFunction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
#endif // WITH_EDITOR
	}
#if WITH_EDITOR
	UFunction* Z_Construct_UFunction_UMaterialExpressionMaterialFunctionCall_SetMaterialFunction()
	{
		struct MaterialExpressionMaterialFunctionCall_eventSetMaterialFunction_Parms
		{
			UMaterialFunction* NewMaterialFunction;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((MaterialExpressionMaterialFunctionCall_eventSetMaterialFunction_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MaterialExpressionMaterialFunctionCall_eventSetMaterialFunction_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewMaterialFunction = { UE4CodeGen_Private::EPropertyClass::Object, "NewMaterialFunction", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MaterialExpressionMaterialFunctionCall_eventSetMaterialFunction_Parms, NewMaterialFunction), Z_Construct_UClass_UMaterialFunction_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewMaterialFunction,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MaterialEditing" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMaterialFunctionCall.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall, "SetMaterialFunction", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x24020403, sizeof(MaterialExpressionMaterialFunctionCall_eventSetMaterialFunction_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	UClass* Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall_NoRegister()
	{
		return UMaterialExpressionMaterialFunctionCall::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_EDITOR
			static const FClassFunctionLinkInfo FuncInfo[] = {
#if WITH_EDITOR
				{ &Z_Construct_UFunction_UMaterialExpressionMaterialFunctionCall_SetMaterialFunction, "SetMaterialFunction" }, // 1859779019
#endif //WITH_EDITOR
			};
#endif //WITH_EDITOR
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "object Object" },
				{ "IncludePath", "Materials/MaterialExpressionMaterialFunctionCall.h" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMaterialFunctionCall.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FunctionOutputs_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMaterialFunctionCall.h" },
				{ "ToolTip", "Array of all the function outputs that this function exposes." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FunctionOutputs = { UE4CodeGen_Private::EPropertyClass::Array, "FunctionOutputs", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionMaterialFunctionCall, FunctionOutputs), METADATA_PARAMS(NewProp_FunctionOutputs_MetaData, ARRAY_COUNT(NewProp_FunctionOutputs_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_FunctionOutputs_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "FunctionOutputs", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FFunctionExpressionOutput, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FunctionInputs_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMaterialFunctionCall.h" },
				{ "ToolTip", "Array of all the function inputs that this function exposes." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FunctionInputs = { UE4CodeGen_Private::EPropertyClass::Array, "FunctionInputs", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionMaterialFunctionCall, FunctionInputs), METADATA_PARAMS(NewProp_FunctionInputs_MetaData, ARRAY_COUNT(NewProp_FunctionInputs_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_FunctionInputs_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "FunctionInputs", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FFunctionExpressionInput, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialFunction_MetaData[] = {
				{ "Category", "MaterialExpressionMaterialFunctionCall" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMaterialFunctionCall.h" },
				{ "ToolTip", "The function to call." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaterialFunction = { UE4CodeGen_Private::EPropertyClass::Object, "MaterialFunction", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionMaterialFunctionCall, MaterialFunction), Z_Construct_UClass_UMaterialFunction_NoRegister, METADATA_PARAMS(NewProp_MaterialFunction_MetaData, ARRAY_COUNT(NewProp_MaterialFunction_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FunctionOutputs,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FunctionOutputs_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FunctionInputs,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FunctionInputs_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaterialFunction,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialExpressionMaterialFunctionCall>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialExpressionMaterialFunctionCall::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00080080u,
				IF_WITH_EDITOR(FuncInfo, nullptr), IF_WITH_EDITOR(ARRAY_COUNT(FuncInfo), 0),
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
	IMPLEMENT_CLASS(UMaterialExpressionMaterialFunctionCall, 3647595059);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionMaterialFunctionCall(Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall, &UMaterialExpressionMaterialFunctionCall::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionMaterialFunctionCall"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionMaterialFunctionCall);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
