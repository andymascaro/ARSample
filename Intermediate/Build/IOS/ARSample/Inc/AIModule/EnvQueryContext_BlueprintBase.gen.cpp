// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/EnvironmentQuery/Contexts/EnvQueryContext_BlueprintBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryContext_BlueprintBase() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext_BlueprintBase_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext_BlueprintBase();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UFunction* Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideActorsSet();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	AIMODULE_API UFunction* Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideLocationsSet();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	AIMODULE_API UFunction* Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideSingleActor();
	AIMODULE_API UFunction* Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideSingleLocation();
// End Cross Module References
	static FName NAME_UEnvQueryContext_BlueprintBase_ProvideActorsSet = FName(TEXT("ProvideActorsSet"));
	void UEnvQueryContext_BlueprintBase::ProvideActorsSet(UObject* QuerierObject, AActor* QuerierActor, TArray<AActor*>& ResultingActorsSet) const
	{
		EnvQueryContext_BlueprintBase_eventProvideActorsSet_Parms Parms;
		Parms.QuerierObject=QuerierObject;
		Parms.QuerierActor=QuerierActor;
		Parms.ResultingActorsSet=ResultingActorsSet;
		const_cast<UEnvQueryContext_BlueprintBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_UEnvQueryContext_BlueprintBase_ProvideActorsSet),&Parms);
		ResultingActorsSet=Parms.ResultingActorsSet;
	}
	static FName NAME_UEnvQueryContext_BlueprintBase_ProvideLocationsSet = FName(TEXT("ProvideLocationsSet"));
	void UEnvQueryContext_BlueprintBase::ProvideLocationsSet(UObject* QuerierObject, AActor* QuerierActor, TArray<FVector>& ResultingLocationSet) const
	{
		EnvQueryContext_BlueprintBase_eventProvideLocationsSet_Parms Parms;
		Parms.QuerierObject=QuerierObject;
		Parms.QuerierActor=QuerierActor;
		Parms.ResultingLocationSet=ResultingLocationSet;
		const_cast<UEnvQueryContext_BlueprintBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_UEnvQueryContext_BlueprintBase_ProvideLocationsSet),&Parms);
		ResultingLocationSet=Parms.ResultingLocationSet;
	}
	static FName NAME_UEnvQueryContext_BlueprintBase_ProvideSingleActor = FName(TEXT("ProvideSingleActor"));
	void UEnvQueryContext_BlueprintBase::ProvideSingleActor(UObject* QuerierObject, AActor* QuerierActor, AActor*& ResultingActor) const
	{
		EnvQueryContext_BlueprintBase_eventProvideSingleActor_Parms Parms;
		Parms.QuerierObject=QuerierObject;
		Parms.QuerierActor=QuerierActor;
		Parms.ResultingActor=ResultingActor;
		const_cast<UEnvQueryContext_BlueprintBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_UEnvQueryContext_BlueprintBase_ProvideSingleActor),&Parms);
		ResultingActor=Parms.ResultingActor;
	}
	static FName NAME_UEnvQueryContext_BlueprintBase_ProvideSingleLocation = FName(TEXT("ProvideSingleLocation"));
	void UEnvQueryContext_BlueprintBase::ProvideSingleLocation(UObject* QuerierObject, AActor* QuerierActor, FVector& ResultingLocation) const
	{
		EnvQueryContext_BlueprintBase_eventProvideSingleLocation_Parms Parms;
		Parms.QuerierObject=QuerierObject;
		Parms.QuerierActor=QuerierActor;
		Parms.ResultingLocation=ResultingLocation;
		const_cast<UEnvQueryContext_BlueprintBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_UEnvQueryContext_BlueprintBase_ProvideSingleLocation),&Parms);
		ResultingLocation=Parms.ResultingLocation;
	}
	void UEnvQueryContext_BlueprintBase::StaticRegisterNativesUEnvQueryContext_BlueprintBase()
	{
	}
	UFunction* Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideActorsSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ResultingActorsSet = { UE4CodeGen_Private::EPropertyClass::Array, "ResultingActorsSet", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(EnvQueryContext_BlueprintBase_eventProvideActorsSet_Parms, ResultingActorsSet), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ResultingActorsSet_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ResultingActorsSet", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_QuerierActor = { UE4CodeGen_Private::EPropertyClass::Object, "QuerierActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EnvQueryContext_BlueprintBase_eventProvideActorsSet_Parms, QuerierActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_QuerierObject = { UE4CodeGen_Private::EPropertyClass::Object, "QuerierObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EnvQueryContext_BlueprintBase_eventProvideActorsSet_Parms, QuerierObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ResultingActorsSet,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ResultingActorsSet_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_QuerierActor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_QuerierObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/Contexts/EnvQueryContext_BlueprintBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnvQueryContext_BlueprintBase, "ProvideActorsSet", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x48420800, sizeof(EnvQueryContext_BlueprintBase_eventProvideActorsSet_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideLocationsSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ResultingLocationSet = { UE4CodeGen_Private::EPropertyClass::Array, "ResultingLocationSet", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(EnvQueryContext_BlueprintBase_eventProvideLocationsSet_Parms, ResultingLocationSet), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResultingLocationSet_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ResultingLocationSet", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_QuerierActor = { UE4CodeGen_Private::EPropertyClass::Object, "QuerierActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EnvQueryContext_BlueprintBase_eventProvideLocationsSet_Parms, QuerierActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_QuerierObject = { UE4CodeGen_Private::EPropertyClass::Object, "QuerierObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EnvQueryContext_BlueprintBase_eventProvideLocationsSet_Parms, QuerierObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ResultingLocationSet,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ResultingLocationSet_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_QuerierActor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_QuerierObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/Contexts/EnvQueryContext_BlueprintBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnvQueryContext_BlueprintBase, "ProvideLocationsSet", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x48420800, sizeof(EnvQueryContext_BlueprintBase_eventProvideLocationsSet_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideSingleActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ResultingActor = { UE4CodeGen_Private::EPropertyClass::Object, "ResultingActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(EnvQueryContext_BlueprintBase_eventProvideSingleActor_Parms, ResultingActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_QuerierActor = { UE4CodeGen_Private::EPropertyClass::Object, "QuerierActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EnvQueryContext_BlueprintBase_eventProvideSingleActor_Parms, QuerierActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_QuerierObject = { UE4CodeGen_Private::EPropertyClass::Object, "QuerierObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EnvQueryContext_BlueprintBase_eventProvideSingleActor_Parms, QuerierObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ResultingActor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_QuerierActor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_QuerierObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/Contexts/EnvQueryContext_BlueprintBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnvQueryContext_BlueprintBase, "ProvideSingleActor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x48420800, sizeof(EnvQueryContext_BlueprintBase_eventProvideSingleActor_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideSingleLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResultingLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "ResultingLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(EnvQueryContext_BlueprintBase_eventProvideSingleLocation_Parms, ResultingLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_QuerierActor = { UE4CodeGen_Private::EPropertyClass::Object, "QuerierActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EnvQueryContext_BlueprintBase_eventProvideSingleLocation_Parms, QuerierActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_QuerierObject = { UE4CodeGen_Private::EPropertyClass::Object, "QuerierObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EnvQueryContext_BlueprintBase_eventProvideSingleLocation_Parms, QuerierObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ResultingLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_QuerierActor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_QuerierObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/Contexts/EnvQueryContext_BlueprintBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnvQueryContext_BlueprintBase, "ProvideSingleLocation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x48C20800, sizeof(EnvQueryContext_BlueprintBase_eventProvideSingleLocation_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEnvQueryContext_BlueprintBase_NoRegister()
	{
		return UEnvQueryContext_BlueprintBase::StaticClass();
	}
	UClass* Z_Construct_UClass_UEnvQueryContext_BlueprintBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UEnvQueryContext,
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideActorsSet, "ProvideActorsSet" }, // 2328444295
				{ &Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideLocationsSet, "ProvideLocationsSet" }, // 2334731159
				{ &Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideSingleActor, "ProvideSingleActor" }, // 2412352828
				{ &Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideSingleLocation, "ProvideSingleLocation" }, // 259438692
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "EnvironmentQuery/Contexts/EnvQueryContext_BlueprintBase.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/Contexts/EnvQueryContext_BlueprintBase.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UEnvQueryContext_BlueprintBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UEnvQueryContext_BlueprintBase::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00081081u,
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
	IMPLEMENT_CLASS(UEnvQueryContext_BlueprintBase, 1654274565);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnvQueryContext_BlueprintBase(Z_Construct_UClass_UEnvQueryContext_BlueprintBase, &UEnvQueryContext_BlueprintBase::StaticClass, TEXT("/Script/AIModule"), TEXT("UEnvQueryContext_BlueprintBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryContext_BlueprintBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
