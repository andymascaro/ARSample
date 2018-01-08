// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/EnvironmentQuery/EnvQueryInstanceBlueprintWrapper.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryInstanceBlueprintWrapper() {}
// Cross Module References
	AIMODULE_API UFunction* Z_Construct_UDelegateFunction_UEnvQueryInstanceBlueprintWrapper_EQSQueryDoneSignature__DelegateSignature();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EEnvQueryStatus();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UFunction* Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetItemScore();
	AIMODULE_API UFunction* Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetResultsAsActors();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	AIMODULE_API UFunction* Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetResultsAsLocations();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	AIMODULE_API UFunction* Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_SetNamedParam();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryItemType_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UEQSQueryResultSourceInterface_NoRegister();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_UEnvQueryInstanceBlueprintWrapper_EQSQueryDoneSignature__DelegateSignature()
	{
		struct EnvQueryInstanceBlueprintWrapper_eventEQSQueryDoneSignature_Parms
		{
			UEnvQueryInstanceBlueprintWrapper* QueryInstance;
			TEnumAsByte<EEnvQueryStatus::Type> QueryStatus;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_QueryStatus = { UE4CodeGen_Private::EPropertyClass::Byte, "QueryStatus", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EnvQueryInstanceBlueprintWrapper_eventEQSQueryDoneSignature_Parms, QueryStatus), Z_Construct_UEnum_AIModule_EEnvQueryStatus, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_QueryInstance = { UE4CodeGen_Private::EPropertyClass::Object, "QueryInstance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EnvQueryInstanceBlueprintWrapper_eventEQSQueryDoneSignature_Parms, QueryInstance), Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_QueryStatus,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_QueryInstance,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryInstanceBlueprintWrapper.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper, "EQSQueryDoneSignature__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(EnvQueryInstanceBlueprintWrapper_eventEQSQueryDoneSignature_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	void UEnvQueryInstanceBlueprintWrapper::StaticRegisterNativesUEnvQueryInstanceBlueprintWrapper()
	{
		UClass* Class = UEnvQueryInstanceBlueprintWrapper::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetItemScore", (Native)&UEnvQueryInstanceBlueprintWrapper::execGetItemScore },
			{ "GetResultsAsActors", (Native)&UEnvQueryInstanceBlueprintWrapper::execGetResultsAsActors },
			{ "GetResultsAsLocations", (Native)&UEnvQueryInstanceBlueprintWrapper::execGetResultsAsLocations },
			{ "SetNamedParam", (Native)&UEnvQueryInstanceBlueprintWrapper::execSetNamedParam },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetItemScore()
	{
		struct EnvQueryInstanceBlueprintWrapper_eventGetItemScore_Parms
		{
			int32 ItemIndex;
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(EnvQueryInstanceBlueprintWrapper_eventGetItemScore_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ItemIndex = { UE4CodeGen_Private::EPropertyClass::Int, "ItemIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EnvQueryInstanceBlueprintWrapper_eventGetItemScore_Parms, ItemIndex), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ItemIndex,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|EQS" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryInstanceBlueprintWrapper.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper, "GetItemScore", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(EnvQueryInstanceBlueprintWrapper_eventGetItemScore_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetResultsAsActors()
	{
		struct EnvQueryInstanceBlueprintWrapper_eventGetResultsAsActors_Parms
		{
			TArray<AActor*> ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(EnvQueryInstanceBlueprintWrapper_eventGetResultsAsActors_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|EQS" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryInstanceBlueprintWrapper.h" },
				{ "ToolTip", "return an array filled with resulting actors. Note that it makes sense only if ItemType is a EnvQueryItemType_ActorBase-derived type" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper, "GetResultsAsActors", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(EnvQueryInstanceBlueprintWrapper_eventGetResultsAsActors_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetResultsAsLocations()
	{
		struct EnvQueryInstanceBlueprintWrapper_eventGetResultsAsLocations_Parms
		{
			TArray<FVector> ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(EnvQueryInstanceBlueprintWrapper_eventGetResultsAsLocations_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|EQS" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryInstanceBlueprintWrapper.h" },
				{ "ToolTip", "returns an array of locations generated by the query. If the query generated Actors the the array is filled with their locations" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper, "GetResultsAsLocations", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(EnvQueryInstanceBlueprintWrapper_eventGetResultsAsLocations_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_SetNamedParam()
	{
		struct EnvQueryInstanceBlueprintWrapper_eventSetNamedParam_Parms
		{
			FName ParamName;
			float Value;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Float, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EnvQueryInstanceBlueprintWrapper_eventSetNamedParam_Parms, Value), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParamName = { UE4CodeGen_Private::EPropertyClass::Name, "ParamName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EnvQueryInstanceBlueprintWrapper_eventSetNamedParam_Parms, ParamName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParamName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|EQS" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryInstanceBlueprintWrapper.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper, "SetNamedParam", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(EnvQueryInstanceBlueprintWrapper_eventSetNamedParam_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_NoRegister()
	{
		return UEnvQueryInstanceBlueprintWrapper::StaticClass();
	}
	UClass* Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UDelegateFunction_UEnvQueryInstanceBlueprintWrapper_EQSQueryDoneSignature__DelegateSignature, "EQSQueryDoneSignature__DelegateSignature" }, // 1725429149
				{ &Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetItemScore, "GetItemScore" }, // 3262795637
				{ &Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetResultsAsActors, "GetResultsAsActors" }, // 751497953
				{ &Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetResultsAsLocations, "GetResultsAsLocations" }, // 1365608616
				{ &Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_SetNamedParam, "SetNamedParam" }, // 2168349320
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "DisplayName", "EQS Query Instance" },
				{ "IncludePath", "EnvironmentQuery/EnvQueryInstanceBlueprintWrapper.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryInstanceBlueprintWrapper.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnQueryFinishedEvent_MetaData[] = {
				{ "Category", "AI|EQS" },
				{ "DisplayName", "OnQueryFinished" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryInstanceBlueprintWrapper.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnQueryFinishedEvent = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnQueryFinishedEvent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080010080000, 1, nullptr, STRUCT_OFFSET(UEnvQueryInstanceBlueprintWrapper, OnQueryFinishedEvent), Z_Construct_UDelegateFunction_UEnvQueryInstanceBlueprintWrapper_EQSQueryDoneSignature__DelegateSignature, METADATA_PARAMS(NewProp_OnQueryFinishedEvent_MetaData, ARRAY_COUNT(NewProp_OnQueryFinishedEvent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OptionIndex_MetaData[] = {
				{ "Category", "EQS" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryInstanceBlueprintWrapper.h" },
				{ "ToolTip", "index of query option, that generated items" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_OptionIndex = { UE4CodeGen_Private::EPropertyClass::Int, "OptionIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000014, 1, nullptr, STRUCT_OFFSET(UEnvQueryInstanceBlueprintWrapper, OptionIndex), METADATA_PARAMS(NewProp_OptionIndex_MetaData, ARRAY_COUNT(NewProp_OptionIndex_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemType_MetaData[] = {
				{ "Category", "EQS" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryInstanceBlueprintWrapper.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_ItemType = { UE4CodeGen_Private::EPropertyClass::Class, "ItemType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0024080000000014, 1, nullptr, STRUCT_OFFSET(UEnvQueryInstanceBlueprintWrapper, ItemType), Z_Construct_UClass_UEnvQueryItemType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_ItemType_MetaData, ARRAY_COUNT(NewProp_ItemType_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueryID_MetaData[] = {
				{ "Category", "EQS" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryInstanceBlueprintWrapper.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_QueryID = { UE4CodeGen_Private::EPropertyClass::Int, "QueryID", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000014, 1, nullptr, STRUCT_OFFSET(UEnvQueryInstanceBlueprintWrapper, QueryID), METADATA_PARAMS(NewProp_QueryID_MetaData, ARRAY_COUNT(NewProp_QueryID_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnQueryFinishedEvent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OptionIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ItemType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_QueryID,
			};
			static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[] = {
				{ Z_Construct_UClass_UEQSQueryResultSourceInterface_NoRegister, (int32)VTABLE_OFFSET(UEnvQueryInstanceBlueprintWrapper, IEQSQueryResultSourceInterface), false },
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UEnvQueryInstanceBlueprintWrapper>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UEnvQueryInstanceBlueprintWrapper::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				InterfaceParams, ARRAY_COUNT(InterfaceParams),
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEnvQueryInstanceBlueprintWrapper, 271745927);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnvQueryInstanceBlueprintWrapper(Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper, &UEnvQueryInstanceBlueprintWrapper::StaticClass, TEXT("/Script/AIModule"), TEXT("UEnvQueryInstanceBlueprintWrapper"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryInstanceBlueprintWrapper);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
