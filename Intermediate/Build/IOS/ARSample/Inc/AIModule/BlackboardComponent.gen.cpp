// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/BehaviorTree/BlackboardComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlackboardComponent() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBlackboardComponent_ClearValue();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBlackboardComponent_GetLocationFromEntry();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBlackboardComponent_GetRotationFromEntry();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBlackboardComponent_GetValueAsBool();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBlackboardComponent_GetValueAsClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBlackboardComponent_GetValueAsEnum();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBlackboardComponent_GetValueAsFloat();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBlackboardComponent_GetValueAsInt();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBlackboardComponent_GetValueAsName();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBlackboardComponent_GetValueAsObject();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBlackboardComponent_GetValueAsRotator();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBlackboardComponent_GetValueAsString();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBlackboardComponent_GetValueAsVector();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBlackboardComponent_IsVectorValueSet();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBlackboardComponent_SetValueAsBool();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBlackboardComponent_SetValueAsClass();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBlackboardComponent_SetValueAsEnum();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBlackboardComponent_SetValueAsFloat();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBlackboardComponent_SetValueAsInt();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBlackboardComponent_SetValueAsName();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBlackboardComponent_SetValueAsObject();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBlackboardComponent_SetValueAsRotator();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBlackboardComponent_SetValueAsString();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBlackboardComponent_SetValueAsVector();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardKeyType_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardData_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBrainComponent_NoRegister();
// End Cross Module References
	void UBlackboardComponent::StaticRegisterNativesUBlackboardComponent()
	{
		UClass* Class = UBlackboardComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearValue", (Native)&UBlackboardComponent::execClearValue },
			{ "GetLocationFromEntry", (Native)&UBlackboardComponent::execGetLocationFromEntry },
			{ "GetRotationFromEntry", (Native)&UBlackboardComponent::execGetRotationFromEntry },
			{ "GetValueAsBool", (Native)&UBlackboardComponent::execGetValueAsBool },
			{ "GetValueAsClass", (Native)&UBlackboardComponent::execGetValueAsClass },
			{ "GetValueAsEnum", (Native)&UBlackboardComponent::execGetValueAsEnum },
			{ "GetValueAsFloat", (Native)&UBlackboardComponent::execGetValueAsFloat },
			{ "GetValueAsInt", (Native)&UBlackboardComponent::execGetValueAsInt },
			{ "GetValueAsName", (Native)&UBlackboardComponent::execGetValueAsName },
			{ "GetValueAsObject", (Native)&UBlackboardComponent::execGetValueAsObject },
			{ "GetValueAsRotator", (Native)&UBlackboardComponent::execGetValueAsRotator },
			{ "GetValueAsString", (Native)&UBlackboardComponent::execGetValueAsString },
			{ "GetValueAsVector", (Native)&UBlackboardComponent::execGetValueAsVector },
			{ "IsVectorValueSet", (Native)&UBlackboardComponent::execIsVectorValueSet },
			{ "SetValueAsBool", (Native)&UBlackboardComponent::execSetValueAsBool },
			{ "SetValueAsClass", (Native)&UBlackboardComponent::execSetValueAsClass },
			{ "SetValueAsEnum", (Native)&UBlackboardComponent::execSetValueAsEnum },
			{ "SetValueAsFloat", (Native)&UBlackboardComponent::execSetValueAsFloat },
			{ "SetValueAsInt", (Native)&UBlackboardComponent::execSetValueAsInt },
			{ "SetValueAsName", (Native)&UBlackboardComponent::execSetValueAsName },
			{ "SetValueAsObject", (Native)&UBlackboardComponent::execSetValueAsObject },
			{ "SetValueAsRotator", (Native)&UBlackboardComponent::execSetValueAsRotator },
			{ "SetValueAsString", (Native)&UBlackboardComponent::execSetValueAsString },
			{ "SetValueAsVector", (Native)&UBlackboardComponent::execSetValueAsVector },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UBlackboardComponent_ClearValue()
	{
		struct BlackboardComponent_eventClearValue_Parms
		{
			FName KeyName;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_KeyName = { UE4CodeGen_Private::EPropertyClass::Name, "KeyName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlackboardComponent_eventClearValue_Parms, KeyName), METADATA_PARAMS(NewProp_KeyName_MetaData, ARRAY_COUNT(NewProp_KeyName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_KeyName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|Components|Blackboard" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardComponent, "ClearValue", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(BlackboardComponent_eventClearValue_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBlackboardComponent_GetLocationFromEntry()
	{
		struct BlackboardComponent_eventGetLocationFromEntry_Parms
		{
			FName KeyName;
			FVector ResultLocation;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((BlackboardComponent_eventGetLocationFromEntry_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(BlackboardComponent_eventGetLocationFromEntry_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResultLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "ResultLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(BlackboardComponent_eventGetLocationFromEntry_Parms, ResultLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_KeyName = { UE4CodeGen_Private::EPropertyClass::Name, "KeyName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlackboardComponent_eventGetLocationFromEntry_Parms, KeyName), METADATA_PARAMS(NewProp_KeyName_MetaData, ARRAY_COUNT(NewProp_KeyName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ResultLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_KeyName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|Components|Blackboard" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
				{ "ToolTip", "return false if call failed (most probably no such entry in BB)" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardComponent, "GetLocationFromEntry", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54C20401, sizeof(BlackboardComponent_eventGetLocationFromEntry_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBlackboardComponent_GetRotationFromEntry()
	{
		struct BlackboardComponent_eventGetRotationFromEntry_Parms
		{
			FName KeyName;
			FRotator ResultRotation;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((BlackboardComponent_eventGetRotationFromEntry_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(BlackboardComponent_eventGetRotationFromEntry_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResultRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "ResultRotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(BlackboardComponent_eventGetRotationFromEntry_Parms, ResultRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_KeyName = { UE4CodeGen_Private::EPropertyClass::Name, "KeyName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlackboardComponent_eventGetRotationFromEntry_Parms, KeyName), METADATA_PARAMS(NewProp_KeyName_MetaData, ARRAY_COUNT(NewProp_KeyName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ResultRotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_KeyName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|Components|Blackboard" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
				{ "ToolTip", "return false if call failed (most probably no such entry in BB)" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardComponent, "GetRotationFromEntry", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54C20401, sizeof(BlackboardComponent_eventGetRotationFromEntry_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBlackboardComponent_GetValueAsBool()
	{
		struct BlackboardComponent_eventGetValueAsBool_Parms
		{
			FName KeyName;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((BlackboardComponent_eventGetValueAsBool_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(BlackboardComponent_eventGetValueAsBool_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_KeyName = { UE4CodeGen_Private::EPropertyClass::Name, "KeyName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlackboardComponent_eventGetValueAsBool_Parms, KeyName), METADATA_PARAMS(NewProp_KeyName_MetaData, ARRAY_COUNT(NewProp_KeyName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_KeyName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|Components|Blackboard" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardComponent, "GetValueAsBool", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54420401, sizeof(BlackboardComponent_eventGetValueAsBool_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBlackboardComponent_GetValueAsClass()
	{
		struct BlackboardComponent_eventGetValueAsClass_Parms
		{
			FName KeyName;
			UClass* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Class, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BlackboardComponent_eventGetValueAsClass_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_KeyName = { UE4CodeGen_Private::EPropertyClass::Name, "KeyName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlackboardComponent_eventGetValueAsClass_Parms, KeyName), METADATA_PARAMS(NewProp_KeyName_MetaData, ARRAY_COUNT(NewProp_KeyName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_KeyName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|Components|Blackboard" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardComponent, "GetValueAsClass", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54420401, sizeof(BlackboardComponent_eventGetValueAsClass_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBlackboardComponent_GetValueAsEnum()
	{
		struct BlackboardComponent_eventGetValueAsEnum_Parms
		{
			FName KeyName;
			uint8 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Byte, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BlackboardComponent_eventGetValueAsEnum_Parms, ReturnValue), nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_KeyName = { UE4CodeGen_Private::EPropertyClass::Name, "KeyName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlackboardComponent_eventGetValueAsEnum_Parms, KeyName), METADATA_PARAMS(NewProp_KeyName_MetaData, ARRAY_COUNT(NewProp_KeyName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_KeyName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|Components|Blackboard" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardComponent, "GetValueAsEnum", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54420401, sizeof(BlackboardComponent_eventGetValueAsEnum_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBlackboardComponent_GetValueAsFloat()
	{
		struct BlackboardComponent_eventGetValueAsFloat_Parms
		{
			FName KeyName;
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BlackboardComponent_eventGetValueAsFloat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_KeyName = { UE4CodeGen_Private::EPropertyClass::Name, "KeyName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlackboardComponent_eventGetValueAsFloat_Parms, KeyName), METADATA_PARAMS(NewProp_KeyName_MetaData, ARRAY_COUNT(NewProp_KeyName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_KeyName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|Components|Blackboard" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardComponent, "GetValueAsFloat", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54420401, sizeof(BlackboardComponent_eventGetValueAsFloat_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBlackboardComponent_GetValueAsInt()
	{
		struct BlackboardComponent_eventGetValueAsInt_Parms
		{
			FName KeyName;
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BlackboardComponent_eventGetValueAsInt_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_KeyName = { UE4CodeGen_Private::EPropertyClass::Name, "KeyName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlackboardComponent_eventGetValueAsInt_Parms, KeyName), METADATA_PARAMS(NewProp_KeyName_MetaData, ARRAY_COUNT(NewProp_KeyName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_KeyName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|Components|Blackboard" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardComponent, "GetValueAsInt", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54420401, sizeof(BlackboardComponent_eventGetValueAsInt_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBlackboardComponent_GetValueAsName()
	{
		struct BlackboardComponent_eventGetValueAsName_Parms
		{
			FName KeyName;
			FName ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Name, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BlackboardComponent_eventGetValueAsName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_KeyName = { UE4CodeGen_Private::EPropertyClass::Name, "KeyName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlackboardComponent_eventGetValueAsName_Parms, KeyName), METADATA_PARAMS(NewProp_KeyName_MetaData, ARRAY_COUNT(NewProp_KeyName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_KeyName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|Components|Blackboard" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardComponent, "GetValueAsName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54420401, sizeof(BlackboardComponent_eventGetValueAsName_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBlackboardComponent_GetValueAsObject()
	{
		struct BlackboardComponent_eventGetValueAsObject_Parms
		{
			FName KeyName;
			UObject* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BlackboardComponent_eventGetValueAsObject_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_KeyName = { UE4CodeGen_Private::EPropertyClass::Name, "KeyName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlackboardComponent_eventGetValueAsObject_Parms, KeyName), METADATA_PARAMS(NewProp_KeyName_MetaData, ARRAY_COUNT(NewProp_KeyName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_KeyName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|Components|Blackboard" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardComponent, "GetValueAsObject", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54420401, sizeof(BlackboardComponent_eventGetValueAsObject_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBlackboardComponent_GetValueAsRotator()
	{
		struct BlackboardComponent_eventGetValueAsRotator_Parms
		{
			FName KeyName;
			FRotator ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BlackboardComponent_eventGetValueAsRotator_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_KeyName = { UE4CodeGen_Private::EPropertyClass::Name, "KeyName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlackboardComponent_eventGetValueAsRotator_Parms, KeyName), METADATA_PARAMS(NewProp_KeyName_MetaData, ARRAY_COUNT(NewProp_KeyName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_KeyName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|Components|Blackboard" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardComponent, "GetValueAsRotator", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54C20401, sizeof(BlackboardComponent_eventGetValueAsRotator_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBlackboardComponent_GetValueAsString()
	{
		struct BlackboardComponent_eventGetValueAsString_Parms
		{
			FName KeyName;
			FString ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BlackboardComponent_eventGetValueAsString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_KeyName = { UE4CodeGen_Private::EPropertyClass::Name, "KeyName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlackboardComponent_eventGetValueAsString_Parms, KeyName), METADATA_PARAMS(NewProp_KeyName_MetaData, ARRAY_COUNT(NewProp_KeyName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_KeyName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|Components|Blackboard" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardComponent, "GetValueAsString", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54420401, sizeof(BlackboardComponent_eventGetValueAsString_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBlackboardComponent_GetValueAsVector()
	{
		struct BlackboardComponent_eventGetValueAsVector_Parms
		{
			FName KeyName;
			FVector ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BlackboardComponent_eventGetValueAsVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_KeyName = { UE4CodeGen_Private::EPropertyClass::Name, "KeyName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlackboardComponent_eventGetValueAsVector_Parms, KeyName), METADATA_PARAMS(NewProp_KeyName_MetaData, ARRAY_COUNT(NewProp_KeyName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_KeyName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|Components|Blackboard" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardComponent, "GetValueAsVector", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54C20401, sizeof(BlackboardComponent_eventGetValueAsVector_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBlackboardComponent_IsVectorValueSet()
	{
		struct BlackboardComponent_eventIsVectorValueSet_Parms
		{
			FName KeyName;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((BlackboardComponent_eventIsVectorValueSet_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(BlackboardComponent_eventIsVectorValueSet_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_KeyName = { UE4CodeGen_Private::EPropertyClass::Name, "KeyName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlackboardComponent_eventIsVectorValueSet_Parms, KeyName), METADATA_PARAMS(NewProp_KeyName_MetaData, ARRAY_COUNT(NewProp_KeyName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_KeyName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|Components|Blackboard" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
				{ "Tooltip", "If the vector value has been set (and not cleared), this function returns true (indicating that the value should be valid).  If it's not set, the vector value is invalid and this function will return false.  (Also returns false if the key specified does not hold a vector.)" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardComponent, "IsVectorValueSet", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54420401, sizeof(BlackboardComponent_eventIsVectorValueSet_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBlackboardComponent_SetValueAsBool()
	{
		struct BlackboardComponent_eventSetValueAsBool_Parms
		{
			FName KeyName;
			bool BoolValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_BoolValue_SetBit = [](void* Obj){ ((BlackboardComponent_eventSetValueAsBool_Parms*)Obj)->BoolValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_BoolValue = { UE4CodeGen_Private::EPropertyClass::Bool, "BoolValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(BlackboardComponent_eventSetValueAsBool_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_BoolValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_KeyName = { UE4CodeGen_Private::EPropertyClass::Name, "KeyName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlackboardComponent_eventSetValueAsBool_Parms, KeyName), METADATA_PARAMS(NewProp_KeyName_MetaData, ARRAY_COUNT(NewProp_KeyName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoolValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_KeyName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|Components|Blackboard" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardComponent, "SetValueAsBool", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(BlackboardComponent_eventSetValueAsBool_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBlackboardComponent_SetValueAsClass()
	{
		struct BlackboardComponent_eventSetValueAsClass_Parms
		{
			FName KeyName;
			UClass* ClassValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_ClassValue = { UE4CodeGen_Private::EPropertyClass::Class, "ClassValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BlackboardComponent_eventSetValueAsClass_Parms, ClassValue), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_KeyName = { UE4CodeGen_Private::EPropertyClass::Name, "KeyName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlackboardComponent_eventSetValueAsClass_Parms, KeyName), METADATA_PARAMS(NewProp_KeyName_MetaData, ARRAY_COUNT(NewProp_KeyName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClassValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_KeyName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|Components|Blackboard" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardComponent, "SetValueAsClass", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(BlackboardComponent_eventSetValueAsClass_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBlackboardComponent_SetValueAsEnum()
	{
		struct BlackboardComponent_eventSetValueAsEnum_Parms
		{
			FName KeyName;
			uint8 EnumValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_EnumValue = { UE4CodeGen_Private::EPropertyClass::Byte, "EnumValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BlackboardComponent_eventSetValueAsEnum_Parms, EnumValue), nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_KeyName = { UE4CodeGen_Private::EPropertyClass::Name, "KeyName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlackboardComponent_eventSetValueAsEnum_Parms, KeyName), METADATA_PARAMS(NewProp_KeyName_MetaData, ARRAY_COUNT(NewProp_KeyName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EnumValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_KeyName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|Components|Blackboard" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardComponent, "SetValueAsEnum", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(BlackboardComponent_eventSetValueAsEnum_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBlackboardComponent_SetValueAsFloat()
	{
		struct BlackboardComponent_eventSetValueAsFloat_Parms
		{
			FName KeyName;
			float FloatValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FloatValue = { UE4CodeGen_Private::EPropertyClass::Float, "FloatValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BlackboardComponent_eventSetValueAsFloat_Parms, FloatValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_KeyName = { UE4CodeGen_Private::EPropertyClass::Name, "KeyName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlackboardComponent_eventSetValueAsFloat_Parms, KeyName), METADATA_PARAMS(NewProp_KeyName_MetaData, ARRAY_COUNT(NewProp_KeyName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FloatValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_KeyName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|Components|Blackboard" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardComponent, "SetValueAsFloat", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(BlackboardComponent_eventSetValueAsFloat_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBlackboardComponent_SetValueAsInt()
	{
		struct BlackboardComponent_eventSetValueAsInt_Parms
		{
			FName KeyName;
			int32 IntValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_IntValue = { UE4CodeGen_Private::EPropertyClass::Int, "IntValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BlackboardComponent_eventSetValueAsInt_Parms, IntValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_KeyName = { UE4CodeGen_Private::EPropertyClass::Name, "KeyName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlackboardComponent_eventSetValueAsInt_Parms, KeyName), METADATA_PARAMS(NewProp_KeyName_MetaData, ARRAY_COUNT(NewProp_KeyName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IntValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_KeyName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|Components|Blackboard" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardComponent, "SetValueAsInt", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(BlackboardComponent_eventSetValueAsInt_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBlackboardComponent_SetValueAsName()
	{
		struct BlackboardComponent_eventSetValueAsName_Parms
		{
			FName KeyName;
			FName NameValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_NameValue = { UE4CodeGen_Private::EPropertyClass::Name, "NameValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BlackboardComponent_eventSetValueAsName_Parms, NameValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_KeyName = { UE4CodeGen_Private::EPropertyClass::Name, "KeyName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlackboardComponent_eventSetValueAsName_Parms, KeyName), METADATA_PARAMS(NewProp_KeyName_MetaData, ARRAY_COUNT(NewProp_KeyName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NameValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_KeyName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|Components|Blackboard" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardComponent, "SetValueAsName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(BlackboardComponent_eventSetValueAsName_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBlackboardComponent_SetValueAsObject()
	{
		struct BlackboardComponent_eventSetValueAsObject_Parms
		{
			FName KeyName;
			UObject* ObjectValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObjectValue = { UE4CodeGen_Private::EPropertyClass::Object, "ObjectValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BlackboardComponent_eventSetValueAsObject_Parms, ObjectValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_KeyName = { UE4CodeGen_Private::EPropertyClass::Name, "KeyName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlackboardComponent_eventSetValueAsObject_Parms, KeyName), METADATA_PARAMS(NewProp_KeyName_MetaData, ARRAY_COUNT(NewProp_KeyName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ObjectValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_KeyName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|Components|Blackboard" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardComponent, "SetValueAsObject", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(BlackboardComponent_eventSetValueAsObject_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBlackboardComponent_SetValueAsRotator()
	{
		struct BlackboardComponent_eventSetValueAsRotator_Parms
		{
			FName KeyName;
			FRotator VectorValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_VectorValue = { UE4CodeGen_Private::EPropertyClass::Struct, "VectorValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BlackboardComponent_eventSetValueAsRotator_Parms, VectorValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_KeyName = { UE4CodeGen_Private::EPropertyClass::Name, "KeyName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlackboardComponent_eventSetValueAsRotator_Parms, KeyName), METADATA_PARAMS(NewProp_KeyName_MetaData, ARRAY_COUNT(NewProp_KeyName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VectorValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_KeyName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|Components|Blackboard" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardComponent, "SetValueAsRotator", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C20401, sizeof(BlackboardComponent_eventSetValueAsRotator_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBlackboardComponent_SetValueAsString()
	{
		struct BlackboardComponent_eventSetValueAsString_Parms
		{
			FName KeyName;
			FString StringValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_StringValue = { UE4CodeGen_Private::EPropertyClass::Str, "StringValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BlackboardComponent_eventSetValueAsString_Parms, StringValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_KeyName = { UE4CodeGen_Private::EPropertyClass::Name, "KeyName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlackboardComponent_eventSetValueAsString_Parms, KeyName), METADATA_PARAMS(NewProp_KeyName_MetaData, ARRAY_COUNT(NewProp_KeyName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StringValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_KeyName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|Components|Blackboard" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardComponent, "SetValueAsString", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(BlackboardComponent_eventSetValueAsString_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBlackboardComponent_SetValueAsVector()
	{
		struct BlackboardComponent_eventSetValueAsVector_Parms
		{
			FName KeyName;
			FVector VectorValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_VectorValue = { UE4CodeGen_Private::EPropertyClass::Struct, "VectorValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BlackboardComponent_eventSetValueAsVector_Parms, VectorValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_KeyName = { UE4CodeGen_Private::EPropertyClass::Name, "KeyName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlackboardComponent_eventSetValueAsVector_Parms, KeyName), METADATA_PARAMS(NewProp_KeyName_MetaData, ARRAY_COUNT(NewProp_KeyName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VectorValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_KeyName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|Components|Blackboard" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardComponent, "SetValueAsVector", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C20401, sizeof(BlackboardComponent_eventSetValueAsVector_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBlackboardComponent_NoRegister()
	{
		return UBlackboardComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UBlackboardComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UActorComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UBlackboardComponent_ClearValue, "ClearValue" }, // 3659584969
				{ &Z_Construct_UFunction_UBlackboardComponent_GetLocationFromEntry, "GetLocationFromEntry" }, // 2706232381
				{ &Z_Construct_UFunction_UBlackboardComponent_GetRotationFromEntry, "GetRotationFromEntry" }, // 3202914621
				{ &Z_Construct_UFunction_UBlackboardComponent_GetValueAsBool, "GetValueAsBool" }, // 430902920
				{ &Z_Construct_UFunction_UBlackboardComponent_GetValueAsClass, "GetValueAsClass" }, // 1334506576
				{ &Z_Construct_UFunction_UBlackboardComponent_GetValueAsEnum, "GetValueAsEnum" }, // 1707044113
				{ &Z_Construct_UFunction_UBlackboardComponent_GetValueAsFloat, "GetValueAsFloat" }, // 632630612
				{ &Z_Construct_UFunction_UBlackboardComponent_GetValueAsInt, "GetValueAsInt" }, // 208399889
				{ &Z_Construct_UFunction_UBlackboardComponent_GetValueAsName, "GetValueAsName" }, // 469898926
				{ &Z_Construct_UFunction_UBlackboardComponent_GetValueAsObject, "GetValueAsObject" }, // 3802496608
				{ &Z_Construct_UFunction_UBlackboardComponent_GetValueAsRotator, "GetValueAsRotator" }, // 843631664
				{ &Z_Construct_UFunction_UBlackboardComponent_GetValueAsString, "GetValueAsString" }, // 1459074598
				{ &Z_Construct_UFunction_UBlackboardComponent_GetValueAsVector, "GetValueAsVector" }, // 4031568310
				{ &Z_Construct_UFunction_UBlackboardComponent_IsVectorValueSet, "IsVectorValueSet" }, // 554380178
				{ &Z_Construct_UFunction_UBlackboardComponent_SetValueAsBool, "SetValueAsBool" }, // 1204149168
				{ &Z_Construct_UFunction_UBlackboardComponent_SetValueAsClass, "SetValueAsClass" }, // 1506737286
				{ &Z_Construct_UFunction_UBlackboardComponent_SetValueAsEnum, "SetValueAsEnum" }, // 2756711371
				{ &Z_Construct_UFunction_UBlackboardComponent_SetValueAsFloat, "SetValueAsFloat" }, // 4199528023
				{ &Z_Construct_UFunction_UBlackboardComponent_SetValueAsInt, "SetValueAsInt" }, // 2410654511
				{ &Z_Construct_UFunction_UBlackboardComponent_SetValueAsName, "SetValueAsName" }, // 3620857553
				{ &Z_Construct_UFunction_UBlackboardComponent_SetValueAsObject, "SetValueAsObject" }, // 3395512827
				{ &Z_Construct_UFunction_UBlackboardComponent_SetValueAsRotator, "SetValueAsRotator" }, // 284897727
				{ &Z_Construct_UFunction_UBlackboardComponent_SetValueAsString, "SetValueAsString" }, // 3243340401
				{ &Z_Construct_UFunction_UBlackboardComponent_SetValueAsVector, "SetValueAsVector" }, // 2983922663
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "AI" },
				{ "IncludePath", "BehaviorTree/BlackboardComponent.h" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyInstances_MetaData[] = {
				{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
				{ "ToolTip", "instanced keys with custom data allocations" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_KeyInstances = { UE4CodeGen_Private::EPropertyClass::Array, "KeyInstances", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000002000, 1, nullptr, STRUCT_OFFSET(UBlackboardComponent, KeyInstances), METADATA_PARAMS(NewProp_KeyInstances_MetaData, ARRAY_COUNT(NewProp_KeyInstances_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_KeyInstances_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "KeyInstances", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UBlackboardKeyType_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlackboardAsset_MetaData[] = {
				{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
				{ "ToolTip", "data asset defining entries" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlackboardAsset = { UE4CodeGen_Private::EPropertyClass::Object, "BlackboardAsset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000002000, 1, nullptr, STRUCT_OFFSET(UBlackboardComponent, BlackboardAsset), Z_Construct_UClass_UBlackboardData_NoRegister, METADATA_PARAMS(NewProp_BlackboardAsset_MetaData, ARRAY_COUNT(NewProp_BlackboardAsset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BrainComp_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
				{ "ToolTip", "cached behavior tree component" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BrainComp = { UE4CodeGen_Private::EPropertyClass::Object, "BrainComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000082008, 1, nullptr, STRUCT_OFFSET(UBlackboardComponent, BrainComp), Z_Construct_UClass_UBrainComponent_NoRegister, METADATA_PARAMS(NewProp_BrainComp_MetaData, ARRAY_COUNT(NewProp_BrainComp_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_KeyInstances,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_KeyInstances_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlackboardAsset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BrainComp,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UBlackboardComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UBlackboardComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
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
	IMPLEMENT_CLASS(UBlackboardComponent, 2748551160);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlackboardComponent(Z_Construct_UClass_UBlackboardComponent, &UBlackboardComponent::StaticClass, TEXT("/Script/AIModule"), TEXT("UBlackboardComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlackboardComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
