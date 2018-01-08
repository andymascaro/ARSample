// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/BehaviorTree/BTFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTFunctionLibrary() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTFunctionLibrary_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTFunctionLibrary_ClearBlackboardValue();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
	AIMODULE_API UClass* Z_Construct_UClass_UBTNode_NoRegister();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTFunctionLibrary_ClearBlackboardValueAsVector();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsBool();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsEnum();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsFloat();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsInt();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsName();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsObject();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsString();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTFunctionLibrary_GetOwnerComponent();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTFunctionLibrary_GetOwnersBlackboard();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardComponent_NoRegister();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsBool();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsClass();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsEnum();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsFloat();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsInt();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsName();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsObject();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsRotator();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsString();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsVector();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTFunctionLibrary_StartUsingExternalEvent();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTFunctionLibrary_StopUsingExternalEvent();
// End Cross Module References
	void UBTFunctionLibrary::StaticRegisterNativesUBTFunctionLibrary()
	{
		UClass* Class = UBTFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearBlackboardValue", (Native)&UBTFunctionLibrary::execClearBlackboardValue },
			{ "ClearBlackboardValueAsVector", (Native)&UBTFunctionLibrary::execClearBlackboardValueAsVector },
			{ "GetBlackboardValueAsActor", (Native)&UBTFunctionLibrary::execGetBlackboardValueAsActor },
			{ "GetBlackboardValueAsBool", (Native)&UBTFunctionLibrary::execGetBlackboardValueAsBool },
			{ "GetBlackboardValueAsClass", (Native)&UBTFunctionLibrary::execGetBlackboardValueAsClass },
			{ "GetBlackboardValueAsEnum", (Native)&UBTFunctionLibrary::execGetBlackboardValueAsEnum },
			{ "GetBlackboardValueAsFloat", (Native)&UBTFunctionLibrary::execGetBlackboardValueAsFloat },
			{ "GetBlackboardValueAsInt", (Native)&UBTFunctionLibrary::execGetBlackboardValueAsInt },
			{ "GetBlackboardValueAsName", (Native)&UBTFunctionLibrary::execGetBlackboardValueAsName },
			{ "GetBlackboardValueAsObject", (Native)&UBTFunctionLibrary::execGetBlackboardValueAsObject },
			{ "GetBlackboardValueAsRotator", (Native)&UBTFunctionLibrary::execGetBlackboardValueAsRotator },
			{ "GetBlackboardValueAsString", (Native)&UBTFunctionLibrary::execGetBlackboardValueAsString },
			{ "GetBlackboardValueAsVector", (Native)&UBTFunctionLibrary::execGetBlackboardValueAsVector },
			{ "GetOwnerComponent", (Native)&UBTFunctionLibrary::execGetOwnerComponent },
			{ "GetOwnersBlackboard", (Native)&UBTFunctionLibrary::execGetOwnersBlackboard },
			{ "SetBlackboardValueAsBool", (Native)&UBTFunctionLibrary::execSetBlackboardValueAsBool },
			{ "SetBlackboardValueAsClass", (Native)&UBTFunctionLibrary::execSetBlackboardValueAsClass },
			{ "SetBlackboardValueAsEnum", (Native)&UBTFunctionLibrary::execSetBlackboardValueAsEnum },
			{ "SetBlackboardValueAsFloat", (Native)&UBTFunctionLibrary::execSetBlackboardValueAsFloat },
			{ "SetBlackboardValueAsInt", (Native)&UBTFunctionLibrary::execSetBlackboardValueAsInt },
			{ "SetBlackboardValueAsName", (Native)&UBTFunctionLibrary::execSetBlackboardValueAsName },
			{ "SetBlackboardValueAsObject", (Native)&UBTFunctionLibrary::execSetBlackboardValueAsObject },
			{ "SetBlackboardValueAsRotator", (Native)&UBTFunctionLibrary::execSetBlackboardValueAsRotator },
			{ "SetBlackboardValueAsString", (Native)&UBTFunctionLibrary::execSetBlackboardValueAsString },
			{ "SetBlackboardValueAsVector", (Native)&UBTFunctionLibrary::execSetBlackboardValueAsVector },
			{ "StartUsingExternalEvent", (Native)&UBTFunctionLibrary::execStartUsingExternalEvent },
			{ "StopUsingExternalEvent", (Native)&UBTFunctionLibrary::execStopUsingExternalEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UBTFunctionLibrary_ClearBlackboardValue()
	{
		struct BTFunctionLibrary_eventClearBlackboardValue_Parms
		{
			UBTNode* NodeOwner;
			FBlackboardKeySelector Key;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Struct, "Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventClearBlackboardValue_Parms, Key), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(NewProp_Key_MetaData, ARRAY_COUNT(NewProp_Key_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NodeOwner = { UE4CodeGen_Private::EPropertyClass::Object, "NodeOwner", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventClearBlackboardValue_Parms, NodeOwner), Z_Construct_UClass_UBTNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Key,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NodeOwner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "BehaviorTree" },
				{ "DefaultToSelf", "NodeOwner" },
				{ "HidePin", "NodeOwner" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/BTFunctionLibrary.h" },
				{ "ToolTip", "Resets indicated value to \"not set\" value, based on values type" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTFunctionLibrary, "ClearBlackboardValue", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(BTFunctionLibrary_eventClearBlackboardValue_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBTFunctionLibrary_ClearBlackboardValueAsVector()
	{
		struct BTFunctionLibrary_eventClearBlackboardValueAsVector_Parms
		{
			UBTNode* NodeOwner;
			FBlackboardKeySelector Key;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Struct, "Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventClearBlackboardValueAsVector_Parms, Key), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(NewProp_Key_MetaData, ARRAY_COUNT(NewProp_Key_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NodeOwner = { UE4CodeGen_Private::EPropertyClass::Object, "NodeOwner", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventClearBlackboardValueAsVector_Parms, NodeOwner), Z_Construct_UClass_UBTNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Key,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NodeOwner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "BehaviorTree" },
				{ "DefaultToSelf", "NodeOwner" },
				{ "DeprecatedFunction", "" },
				{ "DeprecationMessage", "Use ClearBlackboardValue instead." },
				{ "HidePin", "NodeOwner" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/BTFunctionLibrary.h" },
				{ "ToolTip", "(DEPRECATED) Use ClearBlackboardValue instead" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTFunctionLibrary, "ClearBlackboardValueAsVector", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(BTFunctionLibrary_eventClearBlackboardValueAsVector_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsActor()
	{
		struct BTFunctionLibrary_eventGetBlackboardValueAsActor_Parms
		{
			UBTNode* NodeOwner;
			FBlackboardKeySelector Key;
			AActor* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventGetBlackboardValueAsActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Struct, "Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventGetBlackboardValueAsActor_Parms, Key), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(NewProp_Key_MetaData, ARRAY_COUNT(NewProp_Key_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NodeOwner = { UE4CodeGen_Private::EPropertyClass::Object, "NodeOwner", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventGetBlackboardValueAsActor_Parms, NodeOwner), Z_Construct_UClass_UBTNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Key,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NodeOwner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|BehaviorTree" },
				{ "DefaultToSelf", "NodeOwner" },
				{ "HidePin", "NodeOwner" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/BTFunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTFunctionLibrary, "GetBlackboardValueAsActor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(BTFunctionLibrary_eventGetBlackboardValueAsActor_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsBool()
	{
		struct BTFunctionLibrary_eventGetBlackboardValueAsBool_Parms
		{
			UBTNode* NodeOwner;
			FBlackboardKeySelector Key;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((BTFunctionLibrary_eventGetBlackboardValueAsBool_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(BTFunctionLibrary_eventGetBlackboardValueAsBool_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Struct, "Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventGetBlackboardValueAsBool_Parms, Key), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(NewProp_Key_MetaData, ARRAY_COUNT(NewProp_Key_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NodeOwner = { UE4CodeGen_Private::EPropertyClass::Object, "NodeOwner", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventGetBlackboardValueAsBool_Parms, NodeOwner), Z_Construct_UClass_UBTNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Key,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NodeOwner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|BehaviorTree" },
				{ "DefaultToSelf", "NodeOwner" },
				{ "HidePin", "NodeOwner" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/BTFunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTFunctionLibrary, "GetBlackboardValueAsBool", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(BTFunctionLibrary_eventGetBlackboardValueAsBool_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsClass()
	{
		struct BTFunctionLibrary_eventGetBlackboardValueAsClass_Parms
		{
			UBTNode* NodeOwner;
			FBlackboardKeySelector Key;
			UClass* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Class, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventGetBlackboardValueAsClass_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Struct, "Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventGetBlackboardValueAsClass_Parms, Key), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(NewProp_Key_MetaData, ARRAY_COUNT(NewProp_Key_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NodeOwner = { UE4CodeGen_Private::EPropertyClass::Object, "NodeOwner", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventGetBlackboardValueAsClass_Parms, NodeOwner), Z_Construct_UClass_UBTNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Key,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NodeOwner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|BehaviorTree" },
				{ "DefaultToSelf", "NodeOwner" },
				{ "HidePin", "NodeOwner" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/BTFunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTFunctionLibrary, "GetBlackboardValueAsClass", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(BTFunctionLibrary_eventGetBlackboardValueAsClass_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsEnum()
	{
		struct BTFunctionLibrary_eventGetBlackboardValueAsEnum_Parms
		{
			UBTNode* NodeOwner;
			FBlackboardKeySelector Key;
			uint8 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Byte, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventGetBlackboardValueAsEnum_Parms, ReturnValue), nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Struct, "Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventGetBlackboardValueAsEnum_Parms, Key), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(NewProp_Key_MetaData, ARRAY_COUNT(NewProp_Key_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NodeOwner = { UE4CodeGen_Private::EPropertyClass::Object, "NodeOwner", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventGetBlackboardValueAsEnum_Parms, NodeOwner), Z_Construct_UClass_UBTNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Key,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NodeOwner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|BehaviorTree" },
				{ "DefaultToSelf", "NodeOwner" },
				{ "HidePin", "NodeOwner" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/BTFunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTFunctionLibrary, "GetBlackboardValueAsEnum", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(BTFunctionLibrary_eventGetBlackboardValueAsEnum_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsFloat()
	{
		struct BTFunctionLibrary_eventGetBlackboardValueAsFloat_Parms
		{
			UBTNode* NodeOwner;
			FBlackboardKeySelector Key;
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventGetBlackboardValueAsFloat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Struct, "Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventGetBlackboardValueAsFloat_Parms, Key), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(NewProp_Key_MetaData, ARRAY_COUNT(NewProp_Key_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NodeOwner = { UE4CodeGen_Private::EPropertyClass::Object, "NodeOwner", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventGetBlackboardValueAsFloat_Parms, NodeOwner), Z_Construct_UClass_UBTNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Key,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NodeOwner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|BehaviorTree" },
				{ "DefaultToSelf", "NodeOwner" },
				{ "HidePin", "NodeOwner" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/BTFunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTFunctionLibrary, "GetBlackboardValueAsFloat", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(BTFunctionLibrary_eventGetBlackboardValueAsFloat_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsInt()
	{
		struct BTFunctionLibrary_eventGetBlackboardValueAsInt_Parms
		{
			UBTNode* NodeOwner;
			FBlackboardKeySelector Key;
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventGetBlackboardValueAsInt_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Struct, "Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventGetBlackboardValueAsInt_Parms, Key), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(NewProp_Key_MetaData, ARRAY_COUNT(NewProp_Key_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NodeOwner = { UE4CodeGen_Private::EPropertyClass::Object, "NodeOwner", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventGetBlackboardValueAsInt_Parms, NodeOwner), Z_Construct_UClass_UBTNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Key,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NodeOwner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|BehaviorTree" },
				{ "DefaultToSelf", "NodeOwner" },
				{ "HidePin", "NodeOwner" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/BTFunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTFunctionLibrary, "GetBlackboardValueAsInt", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(BTFunctionLibrary_eventGetBlackboardValueAsInt_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsName()
	{
		struct BTFunctionLibrary_eventGetBlackboardValueAsName_Parms
		{
			UBTNode* NodeOwner;
			FBlackboardKeySelector Key;
			FName ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Name, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventGetBlackboardValueAsName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Struct, "Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventGetBlackboardValueAsName_Parms, Key), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(NewProp_Key_MetaData, ARRAY_COUNT(NewProp_Key_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NodeOwner = { UE4CodeGen_Private::EPropertyClass::Object, "NodeOwner", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventGetBlackboardValueAsName_Parms, NodeOwner), Z_Construct_UClass_UBTNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Key,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NodeOwner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|BehaviorTree" },
				{ "DefaultToSelf", "NodeOwner" },
				{ "HidePin", "NodeOwner" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/BTFunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTFunctionLibrary, "GetBlackboardValueAsName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(BTFunctionLibrary_eventGetBlackboardValueAsName_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsObject()
	{
		struct BTFunctionLibrary_eventGetBlackboardValueAsObject_Parms
		{
			UBTNode* NodeOwner;
			FBlackboardKeySelector Key;
			UObject* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventGetBlackboardValueAsObject_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Struct, "Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventGetBlackboardValueAsObject_Parms, Key), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(NewProp_Key_MetaData, ARRAY_COUNT(NewProp_Key_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NodeOwner = { UE4CodeGen_Private::EPropertyClass::Object, "NodeOwner", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventGetBlackboardValueAsObject_Parms, NodeOwner), Z_Construct_UClass_UBTNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Key,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NodeOwner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|BehaviorTree" },
				{ "DefaultToSelf", "NodeOwner" },
				{ "HidePin", "NodeOwner" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/BTFunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTFunctionLibrary, "GetBlackboardValueAsObject", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(BTFunctionLibrary_eventGetBlackboardValueAsObject_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsRotator()
	{
		struct BTFunctionLibrary_eventGetBlackboardValueAsRotator_Parms
		{
			UBTNode* NodeOwner;
			FBlackboardKeySelector Key;
			FRotator ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventGetBlackboardValueAsRotator_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Struct, "Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventGetBlackboardValueAsRotator_Parms, Key), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(NewProp_Key_MetaData, ARRAY_COUNT(NewProp_Key_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NodeOwner = { UE4CodeGen_Private::EPropertyClass::Object, "NodeOwner", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventGetBlackboardValueAsRotator_Parms, NodeOwner), Z_Construct_UClass_UBTNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Key,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NodeOwner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|BehaviorTree" },
				{ "DefaultToSelf", "NodeOwner" },
				{ "HidePin", "NodeOwner" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/BTFunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTFunctionLibrary, "GetBlackboardValueAsRotator", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C22401, sizeof(BTFunctionLibrary_eventGetBlackboardValueAsRotator_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsString()
	{
		struct BTFunctionLibrary_eventGetBlackboardValueAsString_Parms
		{
			UBTNode* NodeOwner;
			FBlackboardKeySelector Key;
			FString ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventGetBlackboardValueAsString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Struct, "Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventGetBlackboardValueAsString_Parms, Key), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(NewProp_Key_MetaData, ARRAY_COUNT(NewProp_Key_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NodeOwner = { UE4CodeGen_Private::EPropertyClass::Object, "NodeOwner", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventGetBlackboardValueAsString_Parms, NodeOwner), Z_Construct_UClass_UBTNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Key,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NodeOwner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|BehaviorTree" },
				{ "DefaultToSelf", "NodeOwner" },
				{ "HidePin", "NodeOwner" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/BTFunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTFunctionLibrary, "GetBlackboardValueAsString", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(BTFunctionLibrary_eventGetBlackboardValueAsString_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsVector()
	{
		struct BTFunctionLibrary_eventGetBlackboardValueAsVector_Parms
		{
			UBTNode* NodeOwner;
			FBlackboardKeySelector Key;
			FVector ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventGetBlackboardValueAsVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Struct, "Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventGetBlackboardValueAsVector_Parms, Key), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(NewProp_Key_MetaData, ARRAY_COUNT(NewProp_Key_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NodeOwner = { UE4CodeGen_Private::EPropertyClass::Object, "NodeOwner", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventGetBlackboardValueAsVector_Parms, NodeOwner), Z_Construct_UClass_UBTNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Key,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NodeOwner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|BehaviorTree" },
				{ "DefaultToSelf", "NodeOwner" },
				{ "HidePin", "NodeOwner" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/BTFunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTFunctionLibrary, "GetBlackboardValueAsVector", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C22401, sizeof(BTFunctionLibrary_eventGetBlackboardValueAsVector_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBTFunctionLibrary_GetOwnerComponent()
	{
		struct BTFunctionLibrary_eventGetOwnerComponent_Parms
		{
			UBTNode* NodeOwner;
			UBehaviorTreeComponent* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080588, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventGetOwnerComponent_Parms, ReturnValue), Z_Construct_UClass_UBehaviorTreeComponent_NoRegister, METADATA_PARAMS(NewProp_ReturnValue_MetaData, ARRAY_COUNT(NewProp_ReturnValue_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NodeOwner = { UE4CodeGen_Private::EPropertyClass::Object, "NodeOwner", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventGetOwnerComponent_Parms, NodeOwner), Z_Construct_UClass_UBTNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NodeOwner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|BehaviorTree" },
				{ "DefaultToSelf", "NodeOwner" },
				{ "HidePin", "NodeOwner" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/BTFunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTFunctionLibrary, "GetOwnerComponent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(BTFunctionLibrary_eventGetOwnerComponent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBTFunctionLibrary_GetOwnersBlackboard()
	{
		struct BTFunctionLibrary_eventGetOwnersBlackboard_Parms
		{
			UBTNode* NodeOwner;
			UBlackboardComponent* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080588, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventGetOwnersBlackboard_Parms, ReturnValue), Z_Construct_UClass_UBlackboardComponent_NoRegister, METADATA_PARAMS(NewProp_ReturnValue_MetaData, ARRAY_COUNT(NewProp_ReturnValue_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NodeOwner = { UE4CodeGen_Private::EPropertyClass::Object, "NodeOwner", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventGetOwnersBlackboard_Parms, NodeOwner), Z_Construct_UClass_UBTNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NodeOwner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|BehaviorTree" },
				{ "DefaultToSelf", "NodeOwner" },
				{ "HidePin", "NodeOwner" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/BTFunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTFunctionLibrary, "GetOwnersBlackboard", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(BTFunctionLibrary_eventGetOwnersBlackboard_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsBool()
	{
		struct BTFunctionLibrary_eventSetBlackboardValueAsBool_Parms
		{
			UBTNode* NodeOwner;
			FBlackboardKeySelector Key;
			bool Value;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_Value_SetBit = [](void* Obj){ ((BTFunctionLibrary_eventSetBlackboardValueAsBool_Parms*)Obj)->Value = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Bool, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(BTFunctionLibrary_eventSetBlackboardValueAsBool_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_Value_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Struct, "Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventSetBlackboardValueAsBool_Parms, Key), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(NewProp_Key_MetaData, ARRAY_COUNT(NewProp_Key_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NodeOwner = { UE4CodeGen_Private::EPropertyClass::Object, "NodeOwner", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventSetBlackboardValueAsBool_Parms, NodeOwner), Z_Construct_UClass_UBTNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Key,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NodeOwner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|BehaviorTree" },
				{ "DefaultToSelf", "NodeOwner" },
				{ "HidePin", "NodeOwner" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/BTFunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTFunctionLibrary, "SetBlackboardValueAsBool", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(BTFunctionLibrary_eventSetBlackboardValueAsBool_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsClass()
	{
		struct BTFunctionLibrary_eventSetBlackboardValueAsClass_Parms
		{
			UBTNode* NodeOwner;
			FBlackboardKeySelector Key;
			UClass* Value;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Class, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventSetBlackboardValueAsClass_Parms, Value), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Struct, "Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventSetBlackboardValueAsClass_Parms, Key), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(NewProp_Key_MetaData, ARRAY_COUNT(NewProp_Key_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NodeOwner = { UE4CodeGen_Private::EPropertyClass::Object, "NodeOwner", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventSetBlackboardValueAsClass_Parms, NodeOwner), Z_Construct_UClass_UBTNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Key,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NodeOwner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|BehaviorTree" },
				{ "DefaultToSelf", "NodeOwner" },
				{ "HidePin", "NodeOwner" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/BTFunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTFunctionLibrary, "SetBlackboardValueAsClass", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(BTFunctionLibrary_eventSetBlackboardValueAsClass_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsEnum()
	{
		struct BTFunctionLibrary_eventSetBlackboardValueAsEnum_Parms
		{
			UBTNode* NodeOwner;
			FBlackboardKeySelector Key;
			uint8 Value;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Byte, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventSetBlackboardValueAsEnum_Parms, Value), nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Struct, "Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventSetBlackboardValueAsEnum_Parms, Key), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(NewProp_Key_MetaData, ARRAY_COUNT(NewProp_Key_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NodeOwner = { UE4CodeGen_Private::EPropertyClass::Object, "NodeOwner", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventSetBlackboardValueAsEnum_Parms, NodeOwner), Z_Construct_UClass_UBTNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Key,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NodeOwner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|BehaviorTree" },
				{ "DefaultToSelf", "NodeOwner" },
				{ "HidePin", "NodeOwner" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/BTFunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTFunctionLibrary, "SetBlackboardValueAsEnum", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(BTFunctionLibrary_eventSetBlackboardValueAsEnum_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsFloat()
	{
		struct BTFunctionLibrary_eventSetBlackboardValueAsFloat_Parms
		{
			UBTNode* NodeOwner;
			FBlackboardKeySelector Key;
			float Value;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Float, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventSetBlackboardValueAsFloat_Parms, Value), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Struct, "Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventSetBlackboardValueAsFloat_Parms, Key), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(NewProp_Key_MetaData, ARRAY_COUNT(NewProp_Key_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NodeOwner = { UE4CodeGen_Private::EPropertyClass::Object, "NodeOwner", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventSetBlackboardValueAsFloat_Parms, NodeOwner), Z_Construct_UClass_UBTNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Key,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NodeOwner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|BehaviorTree" },
				{ "DefaultToSelf", "NodeOwner" },
				{ "HidePin", "NodeOwner" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/BTFunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTFunctionLibrary, "SetBlackboardValueAsFloat", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(BTFunctionLibrary_eventSetBlackboardValueAsFloat_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsInt()
	{
		struct BTFunctionLibrary_eventSetBlackboardValueAsInt_Parms
		{
			UBTNode* NodeOwner;
			FBlackboardKeySelector Key;
			int32 Value;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Int, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventSetBlackboardValueAsInt_Parms, Value), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Struct, "Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventSetBlackboardValueAsInt_Parms, Key), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(NewProp_Key_MetaData, ARRAY_COUNT(NewProp_Key_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NodeOwner = { UE4CodeGen_Private::EPropertyClass::Object, "NodeOwner", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventSetBlackboardValueAsInt_Parms, NodeOwner), Z_Construct_UClass_UBTNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Key,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NodeOwner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|BehaviorTree" },
				{ "DefaultToSelf", "NodeOwner" },
				{ "HidePin", "NodeOwner" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/BTFunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTFunctionLibrary, "SetBlackboardValueAsInt", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(BTFunctionLibrary_eventSetBlackboardValueAsInt_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsName()
	{
		struct BTFunctionLibrary_eventSetBlackboardValueAsName_Parms
		{
			UBTNode* NodeOwner;
			FBlackboardKeySelector Key;
			FName Value;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Name, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventSetBlackboardValueAsName_Parms, Value), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Struct, "Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventSetBlackboardValueAsName_Parms, Key), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(NewProp_Key_MetaData, ARRAY_COUNT(NewProp_Key_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NodeOwner = { UE4CodeGen_Private::EPropertyClass::Object, "NodeOwner", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventSetBlackboardValueAsName_Parms, NodeOwner), Z_Construct_UClass_UBTNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Key,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NodeOwner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|BehaviorTree" },
				{ "DefaultToSelf", "NodeOwner" },
				{ "HidePin", "NodeOwner" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/BTFunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTFunctionLibrary, "SetBlackboardValueAsName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(BTFunctionLibrary_eventSetBlackboardValueAsName_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsObject()
	{
		struct BTFunctionLibrary_eventSetBlackboardValueAsObject_Parms
		{
			UBTNode* NodeOwner;
			FBlackboardKeySelector Key;
			UObject* Value;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Object, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventSetBlackboardValueAsObject_Parms, Value), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Struct, "Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventSetBlackboardValueAsObject_Parms, Key), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(NewProp_Key_MetaData, ARRAY_COUNT(NewProp_Key_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NodeOwner = { UE4CodeGen_Private::EPropertyClass::Object, "NodeOwner", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventSetBlackboardValueAsObject_Parms, NodeOwner), Z_Construct_UClass_UBTNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Key,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NodeOwner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|BehaviorTree" },
				{ "DefaultToSelf", "NodeOwner" },
				{ "HidePin", "NodeOwner" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/BTFunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTFunctionLibrary, "SetBlackboardValueAsObject", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(BTFunctionLibrary_eventSetBlackboardValueAsObject_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsRotator()
	{
		struct BTFunctionLibrary_eventSetBlackboardValueAsRotator_Parms
		{
			UBTNode* NodeOwner;
			FBlackboardKeySelector Key;
			FRotator Value;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Struct, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventSetBlackboardValueAsRotator_Parms, Value), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Struct, "Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventSetBlackboardValueAsRotator_Parms, Key), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(NewProp_Key_MetaData, ARRAY_COUNT(NewProp_Key_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NodeOwner = { UE4CodeGen_Private::EPropertyClass::Object, "NodeOwner", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventSetBlackboardValueAsRotator_Parms, NodeOwner), Z_Construct_UClass_UBTNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Key,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NodeOwner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|BehaviorTree" },
				{ "DefaultToSelf", "NodeOwner" },
				{ "HidePin", "NodeOwner" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/BTFunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTFunctionLibrary, "SetBlackboardValueAsRotator", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C22401, sizeof(BTFunctionLibrary_eventSetBlackboardValueAsRotator_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsString()
	{
		struct BTFunctionLibrary_eventSetBlackboardValueAsString_Parms
		{
			UBTNode* NodeOwner;
			FBlackboardKeySelector Key;
			FString Value;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Str, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventSetBlackboardValueAsString_Parms, Value), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Struct, "Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventSetBlackboardValueAsString_Parms, Key), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(NewProp_Key_MetaData, ARRAY_COUNT(NewProp_Key_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NodeOwner = { UE4CodeGen_Private::EPropertyClass::Object, "NodeOwner", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventSetBlackboardValueAsString_Parms, NodeOwner), Z_Construct_UClass_UBTNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Key,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NodeOwner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|BehaviorTree" },
				{ "DefaultToSelf", "NodeOwner" },
				{ "HidePin", "NodeOwner" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/BTFunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTFunctionLibrary, "SetBlackboardValueAsString", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(BTFunctionLibrary_eventSetBlackboardValueAsString_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsVector()
	{
		struct BTFunctionLibrary_eventSetBlackboardValueAsVector_Parms
		{
			UBTNode* NodeOwner;
			FBlackboardKeySelector Key;
			FVector Value;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Struct, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventSetBlackboardValueAsVector_Parms, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Struct, "Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventSetBlackboardValueAsVector_Parms, Key), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(NewProp_Key_MetaData, ARRAY_COUNT(NewProp_Key_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NodeOwner = { UE4CodeGen_Private::EPropertyClass::Object, "NodeOwner", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventSetBlackboardValueAsVector_Parms, NodeOwner), Z_Construct_UClass_UBTNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Key,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NodeOwner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|BehaviorTree" },
				{ "DefaultToSelf", "NodeOwner" },
				{ "HidePin", "NodeOwner" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/BTFunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTFunctionLibrary, "SetBlackboardValueAsVector", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C22401, sizeof(BTFunctionLibrary_eventSetBlackboardValueAsVector_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBTFunctionLibrary_StartUsingExternalEvent()
	{
		struct BTFunctionLibrary_eventStartUsingExternalEvent_Parms
		{
			UBTNode* NodeOwner;
			AActor* OwningActor;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningActor = { UE4CodeGen_Private::EPropertyClass::Object, "OwningActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventStartUsingExternalEvent_Parms, OwningActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NodeOwner = { UE4CodeGen_Private::EPropertyClass::Object, "NodeOwner", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventStartUsingExternalEvent_Parms, NodeOwner), Z_Construct_UClass_UBTNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OwningActor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NodeOwner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|BehaviorTree" },
				{ "DefaultToSelf", "NodeOwner" },
				{ "DeprecatedFunction", "" },
				{ "DeprecationMessage", "No longer needed" },
				{ "HidePin", "NodeOwner" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/BTFunctionLibrary.h" },
				{ "ToolTip", "Initialize variables marked as \"instance memory\" and set owning actor for blackboard operations" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTFunctionLibrary, "StartUsingExternalEvent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(BTFunctionLibrary_eventStartUsingExternalEvent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBTFunctionLibrary_StopUsingExternalEvent()
	{
		struct BTFunctionLibrary_eventStopUsingExternalEvent_Parms
		{
			UBTNode* NodeOwner;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NodeOwner = { UE4CodeGen_Private::EPropertyClass::Object, "NodeOwner", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventStopUsingExternalEvent_Parms, NodeOwner), Z_Construct_UClass_UBTNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NodeOwner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|BehaviorTree" },
				{ "DefaultToSelf", "NodeOwner" },
				{ "DeprecatedFunction", "" },
				{ "DeprecationMessage", "No longer needed" },
				{ "HidePin", "NodeOwner" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/BTFunctionLibrary.h" },
				{ "ToolTip", "Save variables marked as \"instance memory\" and clear owning actor" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTFunctionLibrary, "StopUsingExternalEvent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(BTFunctionLibrary_eventStopUsingExternalEvent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBTFunctionLibrary_NoRegister()
	{
		return UBTFunctionLibrary::StaticClass();
	}
	UClass* Z_Construct_UClass_UBTFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UBTFunctionLibrary_ClearBlackboardValue, "ClearBlackboardValue" }, // 81325414
				{ &Z_Construct_UFunction_UBTFunctionLibrary_ClearBlackboardValueAsVector, "ClearBlackboardValueAsVector" }, // 438316247
				{ &Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsActor, "GetBlackboardValueAsActor" }, // 3792318413
				{ &Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsBool, "GetBlackboardValueAsBool" }, // 2107785791
				{ &Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsClass, "GetBlackboardValueAsClass" }, // 1795263593
				{ &Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsEnum, "GetBlackboardValueAsEnum" }, // 3973039593
				{ &Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsFloat, "GetBlackboardValueAsFloat" }, // 342808896
				{ &Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsInt, "GetBlackboardValueAsInt" }, // 2983343448
				{ &Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsName, "GetBlackboardValueAsName" }, // 1447346885
				{ &Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsObject, "GetBlackboardValueAsObject" }, // 2082347302
				{ &Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsRotator, "GetBlackboardValueAsRotator" }, // 3074646555
				{ &Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsString, "GetBlackboardValueAsString" }, // 450788593
				{ &Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsVector, "GetBlackboardValueAsVector" }, // 2788722177
				{ &Z_Construct_UFunction_UBTFunctionLibrary_GetOwnerComponent, "GetOwnerComponent" }, // 2744906012
				{ &Z_Construct_UFunction_UBTFunctionLibrary_GetOwnersBlackboard, "GetOwnersBlackboard" }, // 1340633818
				{ &Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsBool, "SetBlackboardValueAsBool" }, // 2356418931
				{ &Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsClass, "SetBlackboardValueAsClass" }, // 1056569891
				{ &Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsEnum, "SetBlackboardValueAsEnum" }, // 3671630758
				{ &Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsFloat, "SetBlackboardValueAsFloat" }, // 694645029
				{ &Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsInt, "SetBlackboardValueAsInt" }, // 3532516768
				{ &Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsName, "SetBlackboardValueAsName" }, // 2415239996
				{ &Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsObject, "SetBlackboardValueAsObject" }, // 3814578977
				{ &Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsRotator, "SetBlackboardValueAsRotator" }, // 765781572
				{ &Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsString, "SetBlackboardValueAsString" }, // 1068259230
				{ &Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsVector, "SetBlackboardValueAsVector" }, // 4164910255
				{ &Z_Construct_UFunction_UBTFunctionLibrary_StartUsingExternalEvent, "StartUsingExternalEvent" }, // 4127789484
				{ &Z_Construct_UFunction_UBTFunctionLibrary_StopUsingExternalEvent, "StopUsingExternalEvent" }, // 2476661270
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "BehaviorTree/BTFunctionLibrary.h" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/BTFunctionLibrary.h" },
				{ "RestrictedToClasses", "BTNode" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UBTFunctionLibrary>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UBTFunctionLibrary::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
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
	IMPLEMENT_CLASS(UBTFunctionLibrary, 4252933421);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTFunctionLibrary(Z_Construct_UClass_UBTFunctionLibrary, &UBTFunctionLibrary::StaticClass, TEXT("/Script/AIModule"), TEXT("UBTFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
