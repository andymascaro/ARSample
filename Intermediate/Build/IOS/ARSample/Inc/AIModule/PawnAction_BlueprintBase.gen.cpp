// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Actions/PawnAction_BlueprintBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePawnAction_BlueprintBase() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UPawnAction_BlueprintBase_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UPawnAction_BlueprintBase();
	AIMODULE_API UClass* Z_Construct_UClass_UPawnAction();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UFunction* Z_Construct_UFunction_UPawnAction_BlueprintBase_ActionFinished();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EPawnActionResult();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	AIMODULE_API UFunction* Z_Construct_UFunction_UPawnAction_BlueprintBase_ActionPause();
	AIMODULE_API UFunction* Z_Construct_UFunction_UPawnAction_BlueprintBase_ActionResume();
	AIMODULE_API UFunction* Z_Construct_UFunction_UPawnAction_BlueprintBase_ActionStart();
	AIMODULE_API UFunction* Z_Construct_UFunction_UPawnAction_BlueprintBase_ActionTick();
// End Cross Module References
	static FName NAME_UPawnAction_BlueprintBase_ActionFinished = FName(TEXT("ActionFinished"));
	void UPawnAction_BlueprintBase::ActionFinished(APawn* ControlledPawn, EPawnActionResult::Type WithResult)
	{
		PawnAction_BlueprintBase_eventActionFinished_Parms Parms;
		Parms.ControlledPawn=ControlledPawn;
		Parms.WithResult=WithResult;
		ProcessEvent(FindFunctionChecked(NAME_UPawnAction_BlueprintBase_ActionFinished),&Parms);
	}
	static FName NAME_UPawnAction_BlueprintBase_ActionPause = FName(TEXT("ActionPause"));
	void UPawnAction_BlueprintBase::ActionPause(APawn* ControlledPawn)
	{
		PawnAction_BlueprintBase_eventActionPause_Parms Parms;
		Parms.ControlledPawn=ControlledPawn;
		ProcessEvent(FindFunctionChecked(NAME_UPawnAction_BlueprintBase_ActionPause),&Parms);
	}
	static FName NAME_UPawnAction_BlueprintBase_ActionResume = FName(TEXT("ActionResume"));
	void UPawnAction_BlueprintBase::ActionResume(APawn* ControlledPawn)
	{
		PawnAction_BlueprintBase_eventActionResume_Parms Parms;
		Parms.ControlledPawn=ControlledPawn;
		ProcessEvent(FindFunctionChecked(NAME_UPawnAction_BlueprintBase_ActionResume),&Parms);
	}
	static FName NAME_UPawnAction_BlueprintBase_ActionStart = FName(TEXT("ActionStart"));
	void UPawnAction_BlueprintBase::ActionStart(APawn* ControlledPawn)
	{
		PawnAction_BlueprintBase_eventActionStart_Parms Parms;
		Parms.ControlledPawn=ControlledPawn;
		ProcessEvent(FindFunctionChecked(NAME_UPawnAction_BlueprintBase_ActionStart),&Parms);
	}
	static FName NAME_UPawnAction_BlueprintBase_ActionTick = FName(TEXT("ActionTick"));
	void UPawnAction_BlueprintBase::ActionTick(APawn* ControlledPawn, float DeltaSeconds)
	{
		PawnAction_BlueprintBase_eventActionTick_Parms Parms;
		Parms.ControlledPawn=ControlledPawn;
		Parms.DeltaSeconds=DeltaSeconds;
		ProcessEvent(FindFunctionChecked(NAME_UPawnAction_BlueprintBase_ActionTick),&Parms);
	}
	void UPawnAction_BlueprintBase::StaticRegisterNativesUPawnAction_BlueprintBase()
	{
	}
	UFunction* Z_Construct_UFunction_UPawnAction_BlueprintBase_ActionFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_WithResult = { UE4CodeGen_Private::EPropertyClass::Byte, "WithResult", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PawnAction_BlueprintBase_eventActionFinished_Parms, WithResult), Z_Construct_UEnum_AIModule_EPawnActionResult, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ControlledPawn = { UE4CodeGen_Private::EPropertyClass::Object, "ControlledPawn", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PawnAction_BlueprintBase_eventActionFinished_Parms, ControlledPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WithResult,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ControlledPawn,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|PawnActions" },
				{ "ModuleRelativePath", "Classes/Actions/PawnAction_BlueprintBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPawnAction_BlueprintBase, "ActionFinished", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, sizeof(PawnAction_BlueprintBase_eventActionFinished_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPawnAction_BlueprintBase_ActionPause()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ControlledPawn = { UE4CodeGen_Private::EPropertyClass::Object, "ControlledPawn", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PawnAction_BlueprintBase_eventActionPause_Parms, ControlledPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ControlledPawn,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|PawnActions" },
				{ "ModuleRelativePath", "Classes/Actions/PawnAction_BlueprintBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPawnAction_BlueprintBase, "ActionPause", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, sizeof(PawnAction_BlueprintBase_eventActionPause_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPawnAction_BlueprintBase_ActionResume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ControlledPawn = { UE4CodeGen_Private::EPropertyClass::Object, "ControlledPawn", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PawnAction_BlueprintBase_eventActionResume_Parms, ControlledPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ControlledPawn,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|PawnActions" },
				{ "ModuleRelativePath", "Classes/Actions/PawnAction_BlueprintBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPawnAction_BlueprintBase, "ActionResume", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, sizeof(PawnAction_BlueprintBase_eventActionResume_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPawnAction_BlueprintBase_ActionStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ControlledPawn = { UE4CodeGen_Private::EPropertyClass::Object, "ControlledPawn", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PawnAction_BlueprintBase_eventActionStart_Parms, ControlledPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ControlledPawn,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|PawnActions" },
				{ "ModuleRelativePath", "Classes/Actions/PawnAction_BlueprintBase.h" },
				{ "ToolTip", "Blueprint interface" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPawnAction_BlueprintBase, "ActionStart", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, sizeof(PawnAction_BlueprintBase_eventActionStart_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPawnAction_BlueprintBase_ActionTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds = { UE4CodeGen_Private::EPropertyClass::Float, "DeltaSeconds", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PawnAction_BlueprintBase_eventActionTick_Parms, DeltaSeconds), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ControlledPawn = { UE4CodeGen_Private::EPropertyClass::Object, "ControlledPawn", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PawnAction_BlueprintBase_eventActionTick_Parms, ControlledPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DeltaSeconds,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ControlledPawn,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|PawnActions" },
				{ "ModuleRelativePath", "Classes/Actions/PawnAction_BlueprintBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPawnAction_BlueprintBase, "ActionTick", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, sizeof(PawnAction_BlueprintBase_eventActionTick_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPawnAction_BlueprintBase_NoRegister()
	{
		return UPawnAction_BlueprintBase::StaticClass();
	}
	UClass* Z_Construct_UClass_UPawnAction_BlueprintBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UPawnAction,
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UPawnAction_BlueprintBase_ActionFinished, "ActionFinished" }, // 1829736319
				{ &Z_Construct_UFunction_UPawnAction_BlueprintBase_ActionPause, "ActionPause" }, // 319850847
				{ &Z_Construct_UFunction_UPawnAction_BlueprintBase_ActionResume, "ActionResume" }, // 2994022247
				{ &Z_Construct_UFunction_UPawnAction_BlueprintBase_ActionStart, "ActionStart" }, // 3766050796
				{ &Z_Construct_UFunction_UPawnAction_BlueprintBase_ActionTick, "ActionTick" }, // 2432084996
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "Actions/PawnAction_BlueprintBase.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Classes/Actions/PawnAction_BlueprintBase.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UPawnAction_BlueprintBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UPawnAction_BlueprintBase::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00901081u,
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
	IMPLEMENT_CLASS(UPawnAction_BlueprintBase, 1447356937);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPawnAction_BlueprintBase(Z_Construct_UClass_UPawnAction_BlueprintBase, &UPawnAction_BlueprintBase::StaticClass, TEXT("/Script/AIModule"), TEXT("UPawnAction_BlueprintBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPawnAction_BlueprintBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
