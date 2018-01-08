// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Perception/AIPerceptionStimuliSourceComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIPerceptionStimuliSourceComponent() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionStimuliSourceComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionStimuliSourceComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UFunction* Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_RegisterForSense();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	AIMODULE_API UClass* Z_Construct_UClass_UAISense_NoRegister();
	AIMODULE_API UFunction* Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_RegisterWithPerceptionSystem();
	AIMODULE_API UFunction* Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_UnregisterFromPerceptionSystem();
	AIMODULE_API UFunction* Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_UnregisterFromSense();
// End Cross Module References
	void UAIPerceptionStimuliSourceComponent::StaticRegisterNativesUAIPerceptionStimuliSourceComponent()
	{
		UClass* Class = UAIPerceptionStimuliSourceComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RegisterForSense", (Native)&UAIPerceptionStimuliSourceComponent::execRegisterForSense },
			{ "RegisterWithPerceptionSystem", (Native)&UAIPerceptionStimuliSourceComponent::execRegisterWithPerceptionSystem },
			{ "UnregisterFromPerceptionSystem", (Native)&UAIPerceptionStimuliSourceComponent::execUnregisterFromPerceptionSystem },
			{ "UnregisterFromSense", (Native)&UAIPerceptionStimuliSourceComponent::execUnregisterFromSense },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_RegisterForSense()
	{
		struct AIPerceptionStimuliSourceComponent_eventRegisterForSense_Parms
		{
			TSubclassOf<UAISense>  SenseClass;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_SenseClass = { UE4CodeGen_Private::EPropertyClass::Class, "SenseClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000080, 1, nullptr, STRUCT_OFFSET(AIPerceptionStimuliSourceComponent_eventRegisterForSense_Parms, SenseClass), Z_Construct_UClass_UAISense_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SenseClass,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|Perception" },
				{ "ModuleRelativePath", "Classes/Perception/AIPerceptionStimuliSourceComponent.h" },
				{ "ToolTip", "Registers owning actor as source for specified sense class" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIPerceptionStimuliSourceComponent, "RegisterForSense", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(AIPerceptionStimuliSourceComponent_eventRegisterForSense_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_RegisterWithPerceptionSystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|Perception" },
				{ "ModuleRelativePath", "Classes/Perception/AIPerceptionStimuliSourceComponent.h" },
				{ "ToolTip", "Registers owning actor as source of stimuli for senses specified in RegisterAsSourceForSenses.\n    Note that you don't have to do it if bAutoRegisterAsSource == true" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIPerceptionStimuliSourceComponent, "RegisterWithPerceptionSystem", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_UnregisterFromPerceptionSystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|Perception" },
				{ "ModuleRelativePath", "Classes/Perception/AIPerceptionStimuliSourceComponent.h" },
				{ "ToolTip", "Unregister owning actor from being a source of sense stimuli" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIPerceptionStimuliSourceComponent, "UnregisterFromPerceptionSystem", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_UnregisterFromSense()
	{
		struct AIPerceptionStimuliSourceComponent_eventUnregisterFromSense_Parms
		{
			TSubclassOf<UAISense>  SenseClass;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_SenseClass = { UE4CodeGen_Private::EPropertyClass::Class, "SenseClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000080, 1, nullptr, STRUCT_OFFSET(AIPerceptionStimuliSourceComponent_eventUnregisterFromSense_Parms, SenseClass), Z_Construct_UClass_UAISense_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SenseClass,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|Perception" },
				{ "ModuleRelativePath", "Classes/Perception/AIPerceptionStimuliSourceComponent.h" },
				{ "ToolTip", "Unregisters owning actor from sources list of a specified sense class" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIPerceptionStimuliSourceComponent, "UnregisterFromSense", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(AIPerceptionStimuliSourceComponent_eventUnregisterFromSense_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAIPerceptionStimuliSourceComponent_NoRegister()
	{
		return UAIPerceptionStimuliSourceComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UAIPerceptionStimuliSourceComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UActorComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_RegisterForSense, "RegisterForSense" }, // 4077903351
				{ &Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_RegisterWithPerceptionSystem, "RegisterWithPerceptionSystem" }, // 1525154869
				{ &Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_UnregisterFromPerceptionSystem, "UnregisterFromPerceptionSystem" }, // 1302266202
				{ &Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_UnregisterFromSense, "UnregisterFromSense" }, // 1306343095
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "AI" },
				{ "HideCategories", "Activation Collision" },
				{ "IncludePath", "Perception/AIPerceptionStimuliSourceComponent.h" },
				{ "ModuleRelativePath", "Classes/Perception/AIPerceptionStimuliSourceComponent.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
				{ "ToolTip", "Gives owning actor a way to auto-register as perception system's sense stimuli source" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RegisterAsSourceForSenses_MetaData[] = {
				{ "Category", "AI Perception" },
				{ "ModuleRelativePath", "Classes/Perception/AIPerceptionStimuliSourceComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RegisterAsSourceForSenses = { UE4CodeGen_Private::EPropertyClass::Array, "RegisterAsSourceForSenses", RF_Public|RF_Transient|RF_MarkAsNative, 0x0024080000000015, 1, nullptr, STRUCT_OFFSET(UAIPerceptionStimuliSourceComponent, RegisterAsSourceForSenses), METADATA_PARAMS(NewProp_RegisterAsSourceForSenses_MetaData, ARRAY_COUNT(NewProp_RegisterAsSourceForSenses_MetaData)) };
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_RegisterAsSourceForSenses_Inner = { UE4CodeGen_Private::EPropertyClass::Class, "RegisterAsSourceForSenses", RF_Public|RF_Transient|RF_MarkAsNative, 0x0004000000000000, 1, nullptr, 0, Z_Construct_UClass_UAISense_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoRegisterAsSource_MetaData[] = {
				{ "Category", "AI Perception" },
				{ "ModuleRelativePath", "Classes/Perception/AIPerceptionStimuliSourceComponent.h" },
			};
#endif
			auto NewProp_bAutoRegisterAsSource_SetBit = [](void* Obj){ ((UAIPerceptionStimuliSourceComponent*)Obj)->bAutoRegisterAsSource = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoRegisterAsSource = { UE4CodeGen_Private::EPropertyClass::Bool, "bAutoRegisterAsSource", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000004015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UAIPerceptionStimuliSourceComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAutoRegisterAsSource_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAutoRegisterAsSource_MetaData, ARRAY_COUNT(NewProp_bAutoRegisterAsSource_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RegisterAsSourceForSenses,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RegisterAsSourceForSenses_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAutoRegisterAsSource,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAIPerceptionStimuliSourceComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAIPerceptionStimuliSourceComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00084u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAIPerceptionStimuliSourceComponent, 1955112183);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAIPerceptionStimuliSourceComponent(Z_Construct_UClass_UAIPerceptionStimuliSourceComponent, &UAIPerceptionStimuliSourceComponent::StaticClass, TEXT("/Script/AIModule"), TEXT("UAIPerceptionStimuliSourceComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAIPerceptionStimuliSourceComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
