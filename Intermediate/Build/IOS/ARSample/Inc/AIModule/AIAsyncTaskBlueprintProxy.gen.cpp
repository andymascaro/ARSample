// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Blueprint/AIAsyncTaskBlueprintProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIAsyncTaskBlueprintProxy() {}
// Cross Module References
	AIMODULE_API UFunction* Z_Construct_UDelegateFunction_AIModule_OAISimpleDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EPathFollowingResult();
	AIMODULE_API UClass* Z_Construct_UClass_UAIAsyncTaskBlueprintProxy_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAIAsyncTaskBlueprintProxy();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	AIMODULE_API UFunction* Z_Construct_UFunction_UAIAsyncTaskBlueprintProxy_OnMoveCompleted();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIRequestID();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_AIModule_OAISimpleDelegate__DelegateSignature()
	{
		struct _Script_AIModule_eventOAISimpleDelegate_Parms
		{
			TEnumAsByte<EPathFollowingResult::Type> MovementResult;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_MovementResult = { UE4CodeGen_Private::EPropertyClass::Byte, "MovementResult", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_AIModule_eventOAISimpleDelegate_Parms, MovementResult), Z_Construct_UEnum_AIModule_EPathFollowingResult, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MovementResult,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Blueprint/AIAsyncTaskBlueprintProxy.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AIModule, "OAISimpleDelegate__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_AIModule_eventOAISimpleDelegate_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	void UAIAsyncTaskBlueprintProxy::StaticRegisterNativesUAIAsyncTaskBlueprintProxy()
	{
		UClass* Class = UAIAsyncTaskBlueprintProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnMoveCompleted", (Native)&UAIAsyncTaskBlueprintProxy::execOnMoveCompleted },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UAIAsyncTaskBlueprintProxy_OnMoveCompleted()
	{
		struct AIAsyncTaskBlueprintProxy_eventOnMoveCompleted_Parms
		{
			FAIRequestID RequestID;
			TEnumAsByte<EPathFollowingResult::Type> MovementResult;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_MovementResult = { UE4CodeGen_Private::EPropertyClass::Byte, "MovementResult", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AIAsyncTaskBlueprintProxy_eventOnMoveCompleted_Parms, MovementResult), Z_Construct_UEnum_AIModule_EPathFollowingResult, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_RequestID = { UE4CodeGen_Private::EPropertyClass::Struct, "RequestID", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AIAsyncTaskBlueprintProxy_eventOnMoveCompleted_Parms, RequestID), Z_Construct_UScriptStruct_FAIRequestID, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MovementResult,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RequestID,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Blueprint/AIAsyncTaskBlueprintProxy.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIAsyncTaskBlueprintProxy, "OnMoveCompleted", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(AIAsyncTaskBlueprintProxy_eventOnMoveCompleted_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAIAsyncTaskBlueprintProxy_NoRegister()
	{
		return UAIAsyncTaskBlueprintProxy::StaticClass();
	}
	UClass* Z_Construct_UClass_UAIAsyncTaskBlueprintProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UAIAsyncTaskBlueprintProxy_OnMoveCompleted, "OnMoveCompleted" }, // 3950553935
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Blueprint/AIAsyncTaskBlueprintProxy.h" },
				{ "ModuleRelativePath", "Classes/Blueprint/AIAsyncTaskBlueprintProxy.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFail_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Blueprint/AIAsyncTaskBlueprintProxy.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFail = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnFail", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UAIAsyncTaskBlueprintProxy, OnFail), Z_Construct_UDelegateFunction_AIModule_OAISimpleDelegate__DelegateSignature, METADATA_PARAMS(NewProp_OnFail_MetaData, ARRAY_COUNT(NewProp_OnFail_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Blueprint/AIAsyncTaskBlueprintProxy.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnSuccess", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UAIAsyncTaskBlueprintProxy, OnSuccess), Z_Construct_UDelegateFunction_AIModule_OAISimpleDelegate__DelegateSignature, METADATA_PARAMS(NewProp_OnSuccess_MetaData, ARRAY_COUNT(NewProp_OnSuccess_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnFail,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnSuccess,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAIAsyncTaskBlueprintProxy>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAIAsyncTaskBlueprintProxy::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880080u,
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
	IMPLEMENT_CLASS(UAIAsyncTaskBlueprintProxy, 4031108827);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAIAsyncTaskBlueprintProxy(Z_Construct_UClass_UAIAsyncTaskBlueprintProxy, &UAIAsyncTaskBlueprintProxy::StaticClass, TEXT("/Script/AIModule"), TEXT("UAIAsyncTaskBlueprintProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAIAsyncTaskBlueprintProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
