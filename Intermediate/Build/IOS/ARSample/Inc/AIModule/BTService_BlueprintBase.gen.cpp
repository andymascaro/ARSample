// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/BehaviorTree/Services/BTService_BlueprintBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTService_BlueprintBase() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTService_BlueprintBase_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService_BlueprintBase();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTService_BlueprintBase_IsServiceActive();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveActivation();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveActivationAI();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveDeactivation();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveDeactivationAI();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveSearchStart();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveSearchStartAI();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveTick();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveTickAI();
// End Cross Module References
	static FName NAME_UBTService_BlueprintBase_ReceiveActivation = FName(TEXT("ReceiveActivation"));
	void UBTService_BlueprintBase::ReceiveActivation(AActor* OwnerActor)
	{
		BTService_BlueprintBase_eventReceiveActivation_Parms Parms;
		Parms.OwnerActor=OwnerActor;
		ProcessEvent(FindFunctionChecked(NAME_UBTService_BlueprintBase_ReceiveActivation),&Parms);
	}
	static FName NAME_UBTService_BlueprintBase_ReceiveActivationAI = FName(TEXT("ReceiveActivationAI"));
	void UBTService_BlueprintBase::ReceiveActivationAI(AAIController* OwnerController, APawn* ControlledPawn)
	{
		BTService_BlueprintBase_eventReceiveActivationAI_Parms Parms;
		Parms.OwnerController=OwnerController;
		Parms.ControlledPawn=ControlledPawn;
		ProcessEvent(FindFunctionChecked(NAME_UBTService_BlueprintBase_ReceiveActivationAI),&Parms);
	}
	static FName NAME_UBTService_BlueprintBase_ReceiveDeactivation = FName(TEXT("ReceiveDeactivation"));
	void UBTService_BlueprintBase::ReceiveDeactivation(AActor* OwnerActor)
	{
		BTService_BlueprintBase_eventReceiveDeactivation_Parms Parms;
		Parms.OwnerActor=OwnerActor;
		ProcessEvent(FindFunctionChecked(NAME_UBTService_BlueprintBase_ReceiveDeactivation),&Parms);
	}
	static FName NAME_UBTService_BlueprintBase_ReceiveDeactivationAI = FName(TEXT("ReceiveDeactivationAI"));
	void UBTService_BlueprintBase::ReceiveDeactivationAI(AAIController* OwnerController, APawn* ControlledPawn)
	{
		BTService_BlueprintBase_eventReceiveDeactivationAI_Parms Parms;
		Parms.OwnerController=OwnerController;
		Parms.ControlledPawn=ControlledPawn;
		ProcessEvent(FindFunctionChecked(NAME_UBTService_BlueprintBase_ReceiveDeactivationAI),&Parms);
	}
	static FName NAME_UBTService_BlueprintBase_ReceiveSearchStart = FName(TEXT("ReceiveSearchStart"));
	void UBTService_BlueprintBase::ReceiveSearchStart(AActor* OwnerActor)
	{
		BTService_BlueprintBase_eventReceiveSearchStart_Parms Parms;
		Parms.OwnerActor=OwnerActor;
		ProcessEvent(FindFunctionChecked(NAME_UBTService_BlueprintBase_ReceiveSearchStart),&Parms);
	}
	static FName NAME_UBTService_BlueprintBase_ReceiveSearchStartAI = FName(TEXT("ReceiveSearchStartAI"));
	void UBTService_BlueprintBase::ReceiveSearchStartAI(AAIController* OwnerController, APawn* ControlledPawn)
	{
		BTService_BlueprintBase_eventReceiveSearchStartAI_Parms Parms;
		Parms.OwnerController=OwnerController;
		Parms.ControlledPawn=ControlledPawn;
		ProcessEvent(FindFunctionChecked(NAME_UBTService_BlueprintBase_ReceiveSearchStartAI),&Parms);
	}
	static FName NAME_UBTService_BlueprintBase_ReceiveTick = FName(TEXT("ReceiveTick"));
	void UBTService_BlueprintBase::ReceiveTick(AActor* OwnerActor, float DeltaSeconds)
	{
		BTService_BlueprintBase_eventReceiveTick_Parms Parms;
		Parms.OwnerActor=OwnerActor;
		Parms.DeltaSeconds=DeltaSeconds;
		ProcessEvent(FindFunctionChecked(NAME_UBTService_BlueprintBase_ReceiveTick),&Parms);
	}
	static FName NAME_UBTService_BlueprintBase_ReceiveTickAI = FName(TEXT("ReceiveTickAI"));
	void UBTService_BlueprintBase::ReceiveTickAI(AAIController* OwnerController, APawn* ControlledPawn, float DeltaSeconds)
	{
		BTService_BlueprintBase_eventReceiveTickAI_Parms Parms;
		Parms.OwnerController=OwnerController;
		Parms.ControlledPawn=ControlledPawn;
		Parms.DeltaSeconds=DeltaSeconds;
		ProcessEvent(FindFunctionChecked(NAME_UBTService_BlueprintBase_ReceiveTickAI),&Parms);
	}
	void UBTService_BlueprintBase::StaticRegisterNativesUBTService_BlueprintBase()
	{
		UClass* Class = UBTService_BlueprintBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsServiceActive", (Native)&UBTService_BlueprintBase::execIsServiceActive },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UBTService_BlueprintBase_IsServiceActive()
	{
		struct BTService_BlueprintBase_eventIsServiceActive_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((BTService_BlueprintBase_eventIsServiceActive_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(BTService_BlueprintBase_eventIsServiceActive_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|BehaviorTree" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Services/BTService_BlueprintBase.h" },
				{ "ToolTip", "check if service is currently being active" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTService_BlueprintBase, "IsServiceActive", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54080401, sizeof(BTService_BlueprintBase_eventIsServiceActive_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveActivation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerActor = { UE4CodeGen_Private::EPropertyClass::Object, "OwnerActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTService_BlueprintBase_eventReceiveActivation_Parms, OwnerActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OwnerActor,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/BehaviorTree/Services/BTService_BlueprintBase.h" },
				{ "ToolTip", "service became active\n    @Note that if both generic and AI event versions are implemented only the more\n    suitable one will be called, meaning the AI version if called for AI, generic one otherwise" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTService_BlueprintBase, "ReceiveActivation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, sizeof(BTService_BlueprintBase_eventReceiveActivation_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveActivationAI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ControlledPawn = { UE4CodeGen_Private::EPropertyClass::Object, "ControlledPawn", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTService_BlueprintBase_eventReceiveActivationAI_Parms, ControlledPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerController = { UE4CodeGen_Private::EPropertyClass::Object, "OwnerController", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTService_BlueprintBase_eventReceiveActivationAI_Parms, OwnerController), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ControlledPawn,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OwnerController,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Services/BTService_BlueprintBase.h" },
				{ "ToolTip", "Alternative AI version of ReceiveActivation function.\n    @see ReceiveActivation for more details\n    @Note that if both generic and AI event versions are implemented only the more\n    suitable one will be called, meaning the AI version if called for AI, generic one otherwise" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTService_BlueprintBase, "ReceiveActivationAI", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, sizeof(BTService_BlueprintBase_eventReceiveActivationAI_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveDeactivation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerActor = { UE4CodeGen_Private::EPropertyClass::Object, "OwnerActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTService_BlueprintBase_eventReceiveDeactivation_Parms, OwnerActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OwnerActor,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/BehaviorTree/Services/BTService_BlueprintBase.h" },
				{ "ToolTip", "service became inactive\n    @Note that if both generic and AI event versions are implemented only the more\n    suitable one will be called, meaning the AI version if called for AI, generic one otherwise" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTService_BlueprintBase, "ReceiveDeactivation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, sizeof(BTService_BlueprintBase_eventReceiveDeactivation_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveDeactivationAI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ControlledPawn = { UE4CodeGen_Private::EPropertyClass::Object, "ControlledPawn", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTService_BlueprintBase_eventReceiveDeactivationAI_Parms, ControlledPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerController = { UE4CodeGen_Private::EPropertyClass::Object, "OwnerController", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTService_BlueprintBase_eventReceiveDeactivationAI_Parms, OwnerController), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ControlledPawn,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OwnerController,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Services/BTService_BlueprintBase.h" },
				{ "ToolTip", "Alternative AI version of ReceiveDeactivation function.\n    @see ReceiveDeactivation for more details\n    @Note that if both generic and AI event versions are implemented only the more\n    suitable one will be called, meaning the AI version if called for AI, generic one otherwise" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTService_BlueprintBase, "ReceiveDeactivationAI", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, sizeof(BTService_BlueprintBase_eventReceiveDeactivationAI_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveSearchStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerActor = { UE4CodeGen_Private::EPropertyClass::Object, "OwnerActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTService_BlueprintBase_eventReceiveSearchStart_Parms, OwnerActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OwnerActor,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/BehaviorTree/Services/BTService_BlueprintBase.h" },
				{ "ToolTip", "task search enters branch of tree\n    @Note that if both generic and AI event versions are implemented only the more\n    suitable one will be called, meaning the AI version if called for AI, generic one otherwise" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTService_BlueprintBase, "ReceiveSearchStart", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, sizeof(BTService_BlueprintBase_eventReceiveSearchStart_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveSearchStartAI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ControlledPawn = { UE4CodeGen_Private::EPropertyClass::Object, "ControlledPawn", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTService_BlueprintBase_eventReceiveSearchStartAI_Parms, ControlledPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerController = { UE4CodeGen_Private::EPropertyClass::Object, "OwnerController", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTService_BlueprintBase_eventReceiveSearchStartAI_Parms, OwnerController), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ControlledPawn,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OwnerController,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Services/BTService_BlueprintBase.h" },
				{ "ToolTip", "Alternative AI version of ReceiveSearchStart function.\n    @see ReceiveSearchStart for more details\n    @Note that if both generic and AI event versions are implemented only the more\n    suitable one will be called, meaning the AI version if called for AI, generic one otherwise" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTService_BlueprintBase, "ReceiveSearchStartAI", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, sizeof(BTService_BlueprintBase_eventReceiveSearchStartAI_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds = { UE4CodeGen_Private::EPropertyClass::Float, "DeltaSeconds", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTService_BlueprintBase_eventReceiveTick_Parms, DeltaSeconds), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerActor = { UE4CodeGen_Private::EPropertyClass::Object, "OwnerActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTService_BlueprintBase_eventReceiveTick_Parms, OwnerActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DeltaSeconds,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OwnerActor,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/BehaviorTree/Services/BTService_BlueprintBase.h" },
				{ "ToolTip", "tick function\n    @Note that if both generic and AI event versions are implemented only the more\n    suitable one will be called, meaning the AI version if called for AI, generic one otherwise" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTService_BlueprintBase, "ReceiveTick", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, sizeof(BTService_BlueprintBase_eventReceiveTick_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveTickAI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds = { UE4CodeGen_Private::EPropertyClass::Float, "DeltaSeconds", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTService_BlueprintBase_eventReceiveTickAI_Parms, DeltaSeconds), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ControlledPawn = { UE4CodeGen_Private::EPropertyClass::Object, "ControlledPawn", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTService_BlueprintBase_eventReceiveTickAI_Parms, ControlledPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerController = { UE4CodeGen_Private::EPropertyClass::Object, "OwnerController", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTService_BlueprintBase_eventReceiveTickAI_Parms, OwnerController), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DeltaSeconds,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ControlledPawn,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OwnerController,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Services/BTService_BlueprintBase.h" },
				{ "ToolTip", "Alternative AI version of ReceiveTick function.\n    @see ReceiveTick for more details\n    @Note that if both generic and AI event versions are implemented only the more\n    suitable one will be called, meaning the AI version if called for AI, generic one otherwise" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTService_BlueprintBase, "ReceiveTickAI", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, sizeof(BTService_BlueprintBase_eventReceiveTickAI_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBTService_BlueprintBase_NoRegister()
	{
		return UBTService_BlueprintBase::StaticClass();
	}
	UClass* Z_Construct_UClass_UBTService_BlueprintBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBTService,
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UBTService_BlueprintBase_IsServiceActive, "IsServiceActive" }, // 1038625668
				{ &Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveActivation, "ReceiveActivation" }, // 2263512233
				{ &Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveActivationAI, "ReceiveActivationAI" }, // 1011027759
				{ &Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveDeactivation, "ReceiveDeactivation" }, // 3151647235
				{ &Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveDeactivationAI, "ReceiveDeactivationAI" }, // 2130695614
				{ &Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveSearchStart, "ReceiveSearchStart" }, // 1769981688
				{ &Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveSearchStartAI, "ReceiveSearchStartAI" }, // 1191737231
				{ &Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveTick, "ReceiveTick" }, // 972441738
				{ &Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveTickAI, "ReceiveTickAI" }, // 540947317
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "BehaviorTree/Services/BTService_BlueprintBase.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Services/BTService_BlueprintBase.h" },
				{ "ToolTip", "Base class for blueprint based service nodes. Do NOT use it for creating native c++ classes!\n\nWhen service receives Deactivation event, all latent actions associated this instance are being removed.\nThis prevents from resuming activity started by Activation, but does not handle external events.\nPlease use them safely (unregister at abort) and call IsServiceActive() when in doubt." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowEventDetails_MetaData[] = {
				{ "Category", "Description" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Services/BTService_BlueprintBase.h" },
				{ "ToolTip", "show detailed information about implemented events" },
			};
#endif
			auto NewProp_bShowEventDetails_SetBit = [](void* Obj){ ((UBTService_BlueprintBase*)Obj)->bShowEventDetails = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowEventDetails = { UE4CodeGen_Private::EPropertyClass::Bool, "bShowEventDetails", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000801, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UBTService_BlueprintBase), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bShowEventDetails_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bShowEventDetails_MetaData, ARRAY_COUNT(NewProp_bShowEventDetails_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowPropertyDetails_MetaData[] = {
				{ "Category", "Description" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Services/BTService_BlueprintBase.h" },
				{ "ToolTip", "show detailed information about properties" },
			};
#endif
			auto NewProp_bShowPropertyDetails_SetBit = [](void* Obj){ ((UBTService_BlueprintBase*)Obj)->bShowPropertyDetails = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowPropertyDetails = { UE4CodeGen_Private::EPropertyClass::Bool, "bShowPropertyDetails", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000801, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UBTService_BlueprintBase), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bShowPropertyDetails_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bShowPropertyDetails_MetaData, ARRAY_COUNT(NewProp_bShowPropertyDetails_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorOwner_MetaData[] = {
				{ "ModuleRelativePath", "Classes/BehaviorTree/Services/BTService_BlueprintBase.h" },
				{ "ToolTip", "Cached actor owner of BehaviorTreeComponent." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorOwner = { UE4CodeGen_Private::EPropertyClass::Object, "ActorOwner", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000002000, 1, nullptr, STRUCT_OFFSET(UBTService_BlueprintBase, ActorOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(NewProp_ActorOwner_MetaData, ARRAY_COUNT(NewProp_ActorOwner_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIOwner_MetaData[] = {
				{ "ModuleRelativePath", "Classes/BehaviorTree/Services/BTService_BlueprintBase.h" },
				{ "ToolTip", "Cached AIController owner of BehaviorTreeComponent." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AIOwner = { UE4CodeGen_Private::EPropertyClass::Object, "AIOwner", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000002000, 1, nullptr, STRUCT_OFFSET(UBTService_BlueprintBase, AIOwner), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(NewProp_AIOwner_MetaData, ARRAY_COUNT(NewProp_AIOwner_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bShowEventDetails,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bShowPropertyDetails,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ActorOwner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AIOwner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UBTService_BlueprintBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UBTService_BlueprintBase::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100081u,
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
	IMPLEMENT_CLASS(UBTService_BlueprintBase, 3350378186);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTService_BlueprintBase(Z_Construct_UClass_UBTService_BlueprintBase, &UBTService_BlueprintBase::StaticClass, TEXT("/Script/AIModule"), TEXT("UBTService_BlueprintBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTService_BlueprintBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
