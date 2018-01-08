// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_BlueprintBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryGenerator_BlueprintBase() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator_BlueprintBase_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator_BlueprintBase();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UFunction* Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_AddGeneratedActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	AIMODULE_API UFunction* Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_AddGeneratedVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	AIMODULE_API UFunction* Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_DoItemGeneration();
	AIMODULE_API UFunction* Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_GetQuerier();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryItemType_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext_NoRegister();
// End Cross Module References
	static FName NAME_UEnvQueryGenerator_BlueprintBase_DoItemGeneration = FName(TEXT("DoItemGeneration"));
	void UEnvQueryGenerator_BlueprintBase::DoItemGeneration(TArray<FVector> const& ContextLocations) const
	{
		EnvQueryGenerator_BlueprintBase_eventDoItemGeneration_Parms Parms;
		Parms.ContextLocations=ContextLocations;
		const_cast<UEnvQueryGenerator_BlueprintBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_UEnvQueryGenerator_BlueprintBase_DoItemGeneration),&Parms);
	}
	void UEnvQueryGenerator_BlueprintBase::StaticRegisterNativesUEnvQueryGenerator_BlueprintBase()
	{
		UClass* Class = UEnvQueryGenerator_BlueprintBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddGeneratedActor", (Native)&UEnvQueryGenerator_BlueprintBase::execAddGeneratedActor },
			{ "AddGeneratedVector", (Native)&UEnvQueryGenerator_BlueprintBase::execAddGeneratedVector },
			{ "GetQuerier", (Native)&UEnvQueryGenerator_BlueprintBase::execGetQuerier },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_AddGeneratedActor()
	{
		struct EnvQueryGenerator_BlueprintBase_eventAddGeneratedActor_Parms
		{
			AActor* GeneratedActor;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GeneratedActor = { UE4CodeGen_Private::EPropertyClass::Object, "GeneratedActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EnvQueryGenerator_BlueprintBase_eventAddGeneratedActor_Parms, GeneratedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GeneratedActor,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "EQS" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_BlueprintBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnvQueryGenerator_BlueprintBase, "AddGeneratedActor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x44020401, sizeof(EnvQueryGenerator_BlueprintBase_eventAddGeneratedActor_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_AddGeneratedVector()
	{
		struct EnvQueryGenerator_BlueprintBase_eventAddGeneratedVector_Parms
		{
			FVector GeneratedVector;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_GeneratedVector = { UE4CodeGen_Private::EPropertyClass::Struct, "GeneratedVector", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EnvQueryGenerator_BlueprintBase_eventAddGeneratedVector_Parms, GeneratedVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GeneratedVector,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "EQS" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_BlueprintBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnvQueryGenerator_BlueprintBase, "AddGeneratedVector", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x44820401, sizeof(EnvQueryGenerator_BlueprintBase_eventAddGeneratedVector_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_DoItemGeneration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContextLocations_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ContextLocations = { UE4CodeGen_Private::EPropertyClass::Array, "ContextLocations", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(EnvQueryGenerator_BlueprintBase_eventDoItemGeneration_Parms, ContextLocations), METADATA_PARAMS(NewProp_ContextLocations_MetaData, ARRAY_COUNT(NewProp_ContextLocations_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ContextLocations_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ContextLocations", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ContextLocations,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ContextLocations_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Generator" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_BlueprintBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnvQueryGenerator_BlueprintBase, "DoItemGeneration", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x48420800, sizeof(EnvQueryGenerator_BlueprintBase_eventDoItemGeneration_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_GetQuerier()
	{
		struct EnvQueryGenerator_BlueprintBase_eventGetQuerier_Parms
		{
			UObject* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(EnvQueryGenerator_BlueprintBase_eventGetQuerier_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "EQS" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_BlueprintBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnvQueryGenerator_BlueprintBase, "GetQuerier", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(EnvQueryGenerator_BlueprintBase_eventGetQuerier_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEnvQueryGenerator_BlueprintBase_NoRegister()
	{
		return UEnvQueryGenerator_BlueprintBase::StaticClass();
	}
	UClass* Z_Construct_UClass_UEnvQueryGenerator_BlueprintBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UEnvQueryGenerator,
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_AddGeneratedActor, "AddGeneratedActor" }, // 3205777132
				{ &Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_AddGeneratedVector, "AddGeneratedVector" }, // 1130432887
				{ &Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_DoItemGeneration, "DoItemGeneration" }, // 1227192521
				{ &Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_GetQuerier, "GetQuerier" }, // 2926237026
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "EnvironmentQuery/Generators/EnvQueryGenerator_BlueprintBase.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_BlueprintBase.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeneratedItemType_MetaData[] = {
				{ "Category", "Generator" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_BlueprintBase.h" },
				{ "ToolTip", "@todo this should show up only in the generator's BP, but\n    due to the way EQS editor is generating widgets it's there as well\n    It's a bug and we'll fix it" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_GeneratedItemType = { UE4CodeGen_Private::EPropertyClass::Class, "GeneratedItemType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000010001, 1, nullptr, STRUCT_OFFSET(UEnvQueryGenerator_BlueprintBase, GeneratedItemType), Z_Construct_UClass_UEnvQueryItemType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_GeneratedItemType_MetaData, ARRAY_COUNT(NewProp_GeneratedItemType_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[] = {
				{ "Category", "Generator" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_BlueprintBase.h" },
				{ "ToolTip", "context" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_Context = { UE4CodeGen_Private::EPropertyClass::Class, "Context", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000001, 1, nullptr, STRUCT_OFFSET(UEnvQueryGenerator_BlueprintBase, Context), Z_Construct_UClass_UEnvQueryContext_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_Context_MetaData, ARRAY_COUNT(NewProp_Context_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeneratorsActionDescription_MetaData[] = {
				{ "Category", "Generator" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_BlueprintBase.h" },
				{ "ToolTip", "A short description of what test does, like \"Generate pawn named Joe\"" },
			};
#endif
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_GeneratorsActionDescription = { UE4CodeGen_Private::EPropertyClass::Text, "GeneratorsActionDescription", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UEnvQueryGenerator_BlueprintBase, GeneratorsActionDescription), METADATA_PARAMS(NewProp_GeneratorsActionDescription_MetaData, ARRAY_COUNT(NewProp_GeneratorsActionDescription_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GeneratedItemType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Context,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GeneratorsActionDescription,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UEnvQueryGenerator_BlueprintBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UEnvQueryGenerator_BlueprintBase::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00101081u,
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
	IMPLEMENT_CLASS(UEnvQueryGenerator_BlueprintBase, 1660568308);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnvQueryGenerator_BlueprintBase(Z_Construct_UClass_UEnvQueryGenerator_BlueprintBase, &UEnvQueryGenerator_BlueprintBase::StaticClass, TEXT("/Script/AIModule"), TEXT("UEnvQueryGenerator_BlueprintBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryGenerator_BlueprintBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
