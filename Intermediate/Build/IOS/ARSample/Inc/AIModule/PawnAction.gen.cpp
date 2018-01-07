// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Actions/PawnAction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePawnAction() {}
// Cross Module References
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EPawnActionFailHandling();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EPawnSubActionTriggeringPolicy();
	AIMODULE_API UClass* Z_Construct_UClass_UPawnAction_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UPawnAction();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	AIMODULE_API UFunction* Z_Construct_UFunction_UPawnAction_CreateActionInstance();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	AIMODULE_API UFunction* Z_Construct_UFunction_UPawnAction_Finish();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EPawnActionResult();
	AIMODULE_API UFunction* Z_Construct_UFunction_UPawnAction_GetActionPriority();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EAIRequestPriority();
	AIMODULE_API UClass* Z_Construct_UClass_UBrainComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UPawnActionsComponent_NoRegister();
// End Cross Module References
	static UEnum* EPawnActionFailHandling_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EPawnActionFailHandling, Z_Construct_UPackage__Script_AIModule(), TEXT("EPawnActionFailHandling"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPawnActionFailHandling(EPawnActionFailHandling_StaticEnum, TEXT("/Script/AIModule"), TEXT("EPawnActionFailHandling"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AIModule_EPawnActionFailHandling_CRC() { return 264655867U; }
	UEnum* Z_Construct_UEnum_AIModule_EPawnActionFailHandling()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPawnActionFailHandling"), 0, Get_Z_Construct_UEnum_AIModule_EPawnActionFailHandling_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPawnActionFailHandling::RequireSuccess", (int64)EPawnActionFailHandling::RequireSuccess },
				{ "EPawnActionFailHandling::IgnoreFailure", (int64)EPawnActionFailHandling::IgnoreFailure },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Actions/PawnAction.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EPawnActionFailHandling",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EPawnActionFailHandling::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EPawnSubActionTriggeringPolicy_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EPawnSubActionTriggeringPolicy, Z_Construct_UPackage__Script_AIModule(), TEXT("EPawnSubActionTriggeringPolicy"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPawnSubActionTriggeringPolicy(EPawnSubActionTriggeringPolicy_StaticEnum, TEXT("/Script/AIModule"), TEXT("EPawnSubActionTriggeringPolicy"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AIModule_EPawnSubActionTriggeringPolicy_CRC() { return 3385301003U; }
	UEnum* Z_Construct_UEnum_AIModule_EPawnSubActionTriggeringPolicy()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPawnSubActionTriggeringPolicy"), 0, Get_Z_Construct_UEnum_AIModule_EPawnSubActionTriggeringPolicy_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPawnSubActionTriggeringPolicy::CopyBeforeTriggering", (int64)EPawnSubActionTriggeringPolicy::CopyBeforeTriggering },
				{ "EPawnSubActionTriggeringPolicy::ReuseInstances", (int64)EPawnSubActionTriggeringPolicy::ReuseInstances },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Actions/PawnAction.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EPawnSubActionTriggeringPolicy",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EPawnSubActionTriggeringPolicy::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UPawnAction::StaticRegisterNativesUPawnAction()
	{
		UClass* Class = UPawnAction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateActionInstance", (Native)&UPawnAction::execCreateActionInstance },
			{ "Finish", (Native)&UPawnAction::execFinish },
			{ "GetActionPriority", (Native)&UPawnAction::execGetActionPriority },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UPawnAction_CreateActionInstance()
	{
		struct PawnAction_eventCreateActionInstance_Parms
		{
			UObject* WorldContextObject;
			TSubclassOf<UPawnAction>  ActionClass;
			UPawnAction* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(PawnAction_eventCreateActionInstance_Parms, ReturnValue), Z_Construct_UClass_UPawnAction_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_ActionClass = { UE4CodeGen_Private::EPropertyClass::Class, "ActionClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000080, 1, nullptr, STRUCT_OFFSET(PawnAction_eventCreateActionInstance_Parms, ActionClass), Z_Construct_UClass_UPawnAction_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PawnAction_eventCreateActionInstance_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ActionClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|PawnActions" },
				{ "ModuleRelativePath", "Classes/Actions/PawnAction.h" },
				{ "WorldContext", "WorldContextObject" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPawnAction, "CreateActionInstance", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(PawnAction_eventCreateActionInstance_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPawnAction_Finish()
	{
		struct PawnAction_eventFinish_Parms
		{
			TEnumAsByte<EPawnActionResult::Type> WithResult;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_WithResult = { UE4CodeGen_Private::EPropertyClass::Byte, "WithResult", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PawnAction_eventFinish_Parms, WithResult), Z_Construct_UEnum_AIModule_EPawnActionResult, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WithResult,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|PawnActions" },
				{ "ModuleRelativePath", "Classes/Actions/PawnAction.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPawnAction, "Finish", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04080400, sizeof(PawnAction_eventFinish_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPawnAction_GetActionPriority()
	{
		struct PawnAction_eventGetActionPriority_Parms
		{
			TEnumAsByte<EAIRequestPriority::Type> ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Byte, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(PawnAction_eventGetActionPriority_Parms, ReturnValue), Z_Construct_UEnum_AIModule_EAIRequestPriority, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|PawnActions" },
				{ "ModuleRelativePath", "Classes/Actions/PawnAction.h" },
				{ "ToolTip", "Blueprint interface" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPawnAction, "GetActionPriority", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(PawnAction_eventGetActionPriority_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPawnAction_NoRegister()
	{
		return UPawnAction::StaticClass();
	}
	UClass* Z_Construct_UClass_UPawnAction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UPawnAction_CreateActionInstance, "CreateActionInstance" }, // 225664049
				{ &Z_Construct_UFunction_UPawnAction_Finish, "Finish" }, // 617506572
				{ &Z_Construct_UFunction_UPawnAction_GetActionPriority, "GetActionPriority" }, // 2255708840
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Actions/PawnAction.h" },
				{ "ModuleRelativePath", "Classes/Actions/PawnAction.h" },
				{ "ToolTip", "Things to remember:\n* Actions are created paused" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAlwaysNotifyOnFinished_MetaData[] = {
				{ "Category", "PawnAction" },
				{ "ModuleRelativePath", "Classes/Actions/PawnAction.h" },
				{ "ToolTip", "if set, action will call OnFinished notify even when ending as FailedToStart" },
			};
#endif
			auto NewProp_bAlwaysNotifyOnFinished_SetBit = [](void* Obj){ ((UPawnAction*)Obj)->bAlwaysNotifyOnFinished = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAlwaysNotifyOnFinished = { UE4CodeGen_Private::EPropertyClass::Bool, "bAlwaysNotifyOnFinished", RF_Public|RF_Transient|RF_MarkAsNative, 0x00200c0000010005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UPawnAction), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAlwaysNotifyOnFinished_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAlwaysNotifyOnFinished_MetaData, ARRAY_COUNT(NewProp_bAlwaysNotifyOnFinished_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldPauseMovement_MetaData[] = {
				{ "Category", "PawnAction" },
				{ "ModuleRelativePath", "Classes/Actions/PawnAction.h" },
				{ "ToolTip", "this is a temporary solution to allow having movement action running in background while there's\n    another action on top doing its thing\n    @note should go away once AI resource locking comes on-line" },
			};
#endif
			auto NewProp_bShouldPauseMovement_SetBit = [](void* Obj){ ((UPawnAction*)Obj)->bShouldPauseMovement = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldPauseMovement = { UE4CodeGen_Private::EPropertyClass::Bool, "bShouldPauseMovement", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UPawnAction), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bShouldPauseMovement_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bShouldPauseMovement_MetaData, ARRAY_COUNT(NewProp_bShouldPauseMovement_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReplaceActiveSameClassInstance_MetaData[] = {
				{ "Category", "PawnAction" },
				{ "ModuleRelativePath", "Classes/Actions/PawnAction.h" },
				{ "ToolTip", "if this is TRUE, when we try to push a new instance of an action who has the\n    same class as the action on the top of the stack, pop the one on the stack, and push the new one\n    NOTE: This trumps bAllowNewClassInstance (e.g. if this is true and bAllowNewClassInstance\n    is false the active instance will still be replaced)" },
			};
#endif
			auto NewProp_bReplaceActiveSameClassInstance_SetBit = [](void* Obj){ ((UPawnAction*)Obj)->bReplaceActiveSameClassInstance = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReplaceActiveSameClassInstance = { UE4CodeGen_Private::EPropertyClass::Bool, "bReplaceActiveSameClassInstance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UPawnAction), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bReplaceActiveSameClassInstance_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bReplaceActiveSameClassInstance_MetaData, ARRAY_COUNT(NewProp_bReplaceActiveSameClassInstance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowNewSameClassInstance_MetaData[] = {
				{ "Category", "PawnAction" },
				{ "ModuleRelativePath", "Classes/Actions/PawnAction.h" },
				{ "ToolTip", "if this is FALSE and we're trying to push a new instance of a given class,\n    but the top of the stack is already an instance of that class ignore the attempted push" },
			};
#endif
			auto NewProp_bAllowNewSameClassInstance_SetBit = [](void* Obj){ ((UPawnAction*)Obj)->bAllowNewSameClassInstance = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowNewSameClassInstance = { UE4CodeGen_Private::EPropertyClass::Bool, "bAllowNewSameClassInstance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UPawnAction), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAllowNewSameClassInstance_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAllowNewSameClassInstance_MetaData, ARRAY_COUNT(NewProp_bAllowNewSameClassInstance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BrainComp_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/Actions/PawnAction.h" },
				{ "ToolTip", "@Note: THIS IS HERE _ONLY_ BECAUSE OF THE WAY AI MESSAGING IS CURRENTLY IMPLEMENTED. WILL GO AWAY!" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BrainComp = { UE4CodeGen_Private::EPropertyClass::Object, "BrainComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000082008, 1, nullptr, STRUCT_OFFSET(UPawnAction, BrainComp), Z_Construct_UClass_UBrainComponent_NoRegister, METADATA_PARAMS(NewProp_BrainComp_MetaData, ARRAY_COUNT(NewProp_BrainComp_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Instigator_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Actions/PawnAction.h" },
				{ "ToolTip", "indicates an object that caused this action. Used for mass removal of actions\n    by specific object" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Instigator = { UE4CodeGen_Private::EPropertyClass::Object, "Instigator", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000002000, 1, nullptr, STRUCT_OFFSET(UPawnAction, Instigator), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(NewProp_Instigator_MetaData, ARRAY_COUNT(NewProp_Instigator_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnerComponent_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/Actions/PawnAction.h" },
				{ "ToolTip", "Extra reference to the component this action is being governed by" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerComponent = { UE4CodeGen_Private::EPropertyClass::Object, "OwnerComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000082008, 1, nullptr, STRUCT_OFFSET(UPawnAction, OwnerComponent), Z_Construct_UClass_UPawnActionsComponent_NoRegister, METADATA_PARAMS(NewProp_OwnerComponent_MetaData, ARRAY_COUNT(NewProp_OwnerComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentAction_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Actions/PawnAction.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParentAction = { UE4CodeGen_Private::EPropertyClass::Object, "ParentAction", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000002000, 1, nullptr, STRUCT_OFFSET(UPawnAction, ParentAction), Z_Construct_UClass_UPawnAction_NoRegister, METADATA_PARAMS(NewProp_ParentAction_MetaData, ARRAY_COUNT(NewProp_ParentAction_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChildAction_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Actions/PawnAction.h" },
				{ "ToolTip", "Current child node executing on top of this Action" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChildAction = { UE4CodeGen_Private::EPropertyClass::Object, "ChildAction", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000002000, 1, nullptr, STRUCT_OFFSET(UPawnAction, ChildAction), Z_Construct_UClass_UPawnAction_NoRegister, METADATA_PARAMS(NewProp_ChildAction_MetaData, ARRAY_COUNT(NewProp_ChildAction_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAlwaysNotifyOnFinished,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bShouldPauseMovement,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bReplaceActiveSameClassInstance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAllowNewSameClassInstance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BrainComp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Instigator,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OwnerComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParentAction,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ChildAction,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UPawnAction>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UPawnAction::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00901081u,
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
	IMPLEMENT_CLASS(UPawnAction, 798319730);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPawnAction(Z_Construct_UClass_UPawnAction, &UPawnAction::StaticClass, TEXT("/Script/AIModule"), TEXT("UPawnAction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPawnAction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
