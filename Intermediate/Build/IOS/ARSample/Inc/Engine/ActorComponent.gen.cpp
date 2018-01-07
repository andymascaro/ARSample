// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Components/ActorComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorComponent() {}
// Cross Module References
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_ActorComponentDeactivateSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_ActorComponentActivatedSignature__DelegateSignature();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EComponentCreationMethod();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UFunction* Z_Construct_UFunction_UActorComponent_Activate();
	ENGINE_API UFunction* Z_Construct_UFunction_UActorComponent_AddTickPrerequisiteActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_UActorComponent_AddTickPrerequisiteComponent();
	ENGINE_API UFunction* Z_Construct_UFunction_UActorComponent_ComponentHasTag();
	ENGINE_API UFunction* Z_Construct_UFunction_UActorComponent_Deactivate();
	ENGINE_API UFunction* Z_Construct_UFunction_UActorComponent_GetComponentTickInterval();
	ENGINE_API UFunction* Z_Construct_UFunction_UActorComponent_GetOwner();
	ENGINE_API UFunction* Z_Construct_UFunction_UActorComponent_IsActive();
	ENGINE_API UFunction* Z_Construct_UFunction_UActorComponent_IsBeingDestroyed();
	ENGINE_API UFunction* Z_Construct_UFunction_UActorComponent_IsComponentTickEnabled();
	ENGINE_API UFunction* Z_Construct_UFunction_UActorComponent_K2_DestroyComponent();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_UActorComponent_OnRep_IsActive();
	ENGINE_API UFunction* Z_Construct_UFunction_UActorComponent_ReceiveBeginPlay();
	ENGINE_API UFunction* Z_Construct_UFunction_UActorComponent_ReceiveEndPlay();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EEndPlayReason();
	ENGINE_API UFunction* Z_Construct_UFunction_UActorComponent_ReceiveTick();
	ENGINE_API UFunction* Z_Construct_UFunction_UActorComponent_RemoveTickPrerequisiteActor();
	ENGINE_API UFunction* Z_Construct_UFunction_UActorComponent_RemoveTickPrerequisiteComponent();
	ENGINE_API UFunction* Z_Construct_UFunction_UActorComponent_SetActive();
	ENGINE_API UFunction* Z_Construct_UFunction_UActorComponent_SetAutoActivate();
	ENGINE_API UFunction* Z_Construct_UFunction_UActorComponent_SetComponentTickEnabled();
	ENGINE_API UFunction* Z_Construct_UFunction_UActorComponent_SetComponentTickInterval();
	ENGINE_API UFunction* Z_Construct_UFunction_UActorComponent_SetIsReplicated();
	ENGINE_API UFunction* Z_Construct_UFunction_UActorComponent_SetTickableWhenPaused();
	ENGINE_API UFunction* Z_Construct_UFunction_UActorComponent_SetTickGroup();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETickingGroup();
	ENGINE_API UFunction* Z_Construct_UFunction_UActorComponent_ToggleActive();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSimpleMemberReference();
	ENGINE_API UClass* Z_Construct_UClass_UAssetUserData_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FActorComponentTickFunction();
	ENGINE_API UClass* Z_Construct_UClass_UInterface_AssetUserData_NoRegister();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_Engine_ActorComponentDeactivateSignature__DelegateSignature()
	{
		struct _Script_Engine_eventActorComponentDeactivateSignature_Parms
		{
			UActorComponent* Component;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component = { UE4CodeGen_Private::EPropertyClass::Object, "Component", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(_Script_Engine_eventActorComponentDeactivateSignature_Parms, Component), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(NewProp_Component_MetaData, ARRAY_COUNT(NewProp_Component_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Component,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Components/ActorComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, "ActorComponentDeactivateSignature__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_Engine_eventActorComponentDeactivateSignature_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_Engine_ActorComponentActivatedSignature__DelegateSignature()
	{
		struct _Script_Engine_eventActorComponentActivatedSignature_Parms
		{
			UActorComponent* Component;
			bool bReset;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bReset_SetBit = [](void* Obj){ ((_Script_Engine_eventActorComponentActivatedSignature_Parms*)Obj)->bReset = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReset = { UE4CodeGen_Private::EPropertyClass::Bool, "bReset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(_Script_Engine_eventActorComponentActivatedSignature_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bReset_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component = { UE4CodeGen_Private::EPropertyClass::Object, "Component", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(_Script_Engine_eventActorComponentActivatedSignature_Parms, Component), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(NewProp_Component_MetaData, ARRAY_COUNT(NewProp_Component_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bReset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Component,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Components/ActorComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, "ActorComponentActivatedSignature__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_Engine_eventActorComponentActivatedSignature_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EComponentCreationMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EComponentCreationMethod, Z_Construct_UPackage__Script_Engine(), TEXT("EComponentCreationMethod"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EComponentCreationMethod(EComponentCreationMethod_StaticEnum, TEXT("/Script/Engine"), TEXT("EComponentCreationMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EComponentCreationMethod_CRC() { return 684539944U; }
	UEnum* Z_Construct_UEnum_Engine_EComponentCreationMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EComponentCreationMethod"), 0, Get_Z_Construct_UEnum_Engine_EComponentCreationMethod_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EComponentCreationMethod::Native", (int64)EComponentCreationMethod::Native },
				{ "EComponentCreationMethod::SimpleConstructionScript", (int64)EComponentCreationMethod::SimpleConstructionScript },
				{ "EComponentCreationMethod::UserConstructionScript", (int64)EComponentCreationMethod::UserConstructionScript },
				{ "EComponentCreationMethod::Instance", (int64)EComponentCreationMethod::Instance },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Instance.ToolTip", "A component added to a single Actor instance via the Component section of the Actor's details panel." },
				{ "ModuleRelativePath", "Classes/Components/ActorComponent.h" },
				{ "Native.ToolTip", "A component that is part of a native class." },
				{ "SimpleConstructionScript.ToolTip", "A component that is created from a template defined in the Components section of the Blueprint." },
				{ "UserConstructionScript.ToolTip", "A dynamically created component, either from the UserConstructionScript or from a Add Component node in a Blueprint event graph." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EComponentCreationMethod",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EComponentCreationMethod",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static FName NAME_UActorComponent_ReceiveBeginPlay = FName(TEXT("ReceiveBeginPlay"));
	void UActorComponent::ReceiveBeginPlay()
	{
		ProcessEvent(FindFunctionChecked(NAME_UActorComponent_ReceiveBeginPlay),NULL);
	}
	static FName NAME_UActorComponent_ReceiveEndPlay = FName(TEXT("ReceiveEndPlay"));
	void UActorComponent::ReceiveEndPlay(EEndPlayReason::Type EndPlayReason)
	{
		ActorComponent_eventReceiveEndPlay_Parms Parms;
		Parms.EndPlayReason=EndPlayReason;
		ProcessEvent(FindFunctionChecked(NAME_UActorComponent_ReceiveEndPlay),&Parms);
	}
	static FName NAME_UActorComponent_ReceiveTick = FName(TEXT("ReceiveTick"));
	void UActorComponent::ReceiveTick(float DeltaSeconds)
	{
		ActorComponent_eventReceiveTick_Parms Parms;
		Parms.DeltaSeconds=DeltaSeconds;
		ProcessEvent(FindFunctionChecked(NAME_UActorComponent_ReceiveTick),&Parms);
	}
	void UActorComponent::StaticRegisterNativesUActorComponent()
	{
		UClass* Class = UActorComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Activate", (Native)&UActorComponent::execActivate },
			{ "AddTickPrerequisiteActor", (Native)&UActorComponent::execAddTickPrerequisiteActor },
			{ "AddTickPrerequisiteComponent", (Native)&UActorComponent::execAddTickPrerequisiteComponent },
			{ "ComponentHasTag", (Native)&UActorComponent::execComponentHasTag },
			{ "Deactivate", (Native)&UActorComponent::execDeactivate },
			{ "GetComponentTickInterval", (Native)&UActorComponent::execGetComponentTickInterval },
			{ "GetOwner", (Native)&UActorComponent::execGetOwner },
			{ "IsActive", (Native)&UActorComponent::execIsActive },
			{ "IsBeingDestroyed", (Native)&UActorComponent::execIsBeingDestroyed },
			{ "IsComponentTickEnabled", (Native)&UActorComponent::execIsComponentTickEnabled },
			{ "K2_DestroyComponent", (Native)&UActorComponent::execK2_DestroyComponent },
			{ "OnRep_IsActive", (Native)&UActorComponent::execOnRep_IsActive },
			{ "RemoveTickPrerequisiteActor", (Native)&UActorComponent::execRemoveTickPrerequisiteActor },
			{ "RemoveTickPrerequisiteComponent", (Native)&UActorComponent::execRemoveTickPrerequisiteComponent },
			{ "SetActive", (Native)&UActorComponent::execSetActive },
			{ "SetAutoActivate", (Native)&UActorComponent::execSetAutoActivate },
			{ "SetComponentTickEnabled", (Native)&UActorComponent::execSetComponentTickEnabled },
			{ "SetComponentTickInterval", (Native)&UActorComponent::execSetComponentTickInterval },
			{ "SetIsReplicated", (Native)&UActorComponent::execSetIsReplicated },
			{ "SetTickableWhenPaused", (Native)&UActorComponent::execSetTickableWhenPaused },
			{ "SetTickGroup", (Native)&UActorComponent::execSetTickGroup },
			{ "ToggleActive", (Native)&UActorComponent::execToggleActive },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UActorComponent_Activate()
	{
		struct ActorComponent_eventActivate_Parms
		{
			bool bReset;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bReset_SetBit = [](void* Obj){ ((ActorComponent_eventActivate_Parms*)Obj)->bReset = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReset = { UE4CodeGen_Private::EPropertyClass::Bool, "bReset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ActorComponent_eventActivate_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bReset_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bReset,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|Activation" },
				{ "CPP_Default_bReset", "false" },
				{ "ModuleRelativePath", "Classes/Components/ActorComponent.h" },
				{ "ToolTip", "Activates the SceneComponent\n@param bReset - The value to assign to HiddenGame." },
				{ "UnsafeDuringActorConstruction", "true" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorComponent, "Activate", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(ActorComponent_eventActivate_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UActorComponent_AddTickPrerequisiteActor()
	{
		struct ActorComponent_eventAddTickPrerequisiteActor_Parms
		{
			AActor* PrerequisiteActor;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PrerequisiteActor = { UE4CodeGen_Private::EPropertyClass::Object, "PrerequisiteActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ActorComponent_eventAddTickPrerequisiteActor_Parms, PrerequisiteActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PrerequisiteActor,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Utilities" },
				{ "Keywords", "dependency" },
				{ "ModuleRelativePath", "Classes/Components/ActorComponent.h" },
				{ "ToolTip", "Make this component tick after PrerequisiteActor" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorComponent, "AddTickPrerequisiteActor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(ActorComponent_eventAddTickPrerequisiteActor_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UActorComponent_AddTickPrerequisiteComponent()
	{
		struct ActorComponent_eventAddTickPrerequisiteComponent_Parms
		{
			UActorComponent* PrerequisiteComponent;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrerequisiteComponent_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PrerequisiteComponent = { UE4CodeGen_Private::EPropertyClass::Object, "PrerequisiteComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(ActorComponent_eventAddTickPrerequisiteComponent_Parms, PrerequisiteComponent), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(NewProp_PrerequisiteComponent_MetaData, ARRAY_COUNT(NewProp_PrerequisiteComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PrerequisiteComponent,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Utilities" },
				{ "Keywords", "dependency" },
				{ "ModuleRelativePath", "Classes/Components/ActorComponent.h" },
				{ "ToolTip", "Make this component tick after PrerequisiteComponent." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorComponent, "AddTickPrerequisiteComponent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(ActorComponent_eventAddTickPrerequisiteComponent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UActorComponent_ComponentHasTag()
	{
		struct ActorComponent_eventComponentHasTag_Parms
		{
			FName Tag;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((ActorComponent_eventComponentHasTag_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ActorComponent_eventComponentHasTag_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_Tag = { UE4CodeGen_Private::EPropertyClass::Name, "Tag", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ActorComponent_eventComponentHasTag_Parms, Tag), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Tag,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components" },
				{ "ModuleRelativePath", "Classes/Components/ActorComponent.h" },
				{ "ToolTip", "See if this component contains the supplied tag" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorComponent, "ComponentHasTag", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(ActorComponent_eventComponentHasTag_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UActorComponent_Deactivate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|Activation" },
				{ "ModuleRelativePath", "Classes/Components/ActorComponent.h" },
				{ "ToolTip", "Deactivates the SceneComponent." },
				{ "UnsafeDuringActorConstruction", "true" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorComponent, "Deactivate", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UActorComponent_GetComponentTickInterval()
	{
		struct ActorComponent_eventGetComponentTickInterval_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ActorComponent_eventGetComponentTickInterval_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Utilities" },
				{ "ModuleRelativePath", "Classes/Components/ActorComponent.h" },
				{ "ToolTip", "Returns whether this component has tick enabled or not" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorComponent, "GetComponentTickInterval", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(ActorComponent_eventGetComponentTickInterval_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UActorComponent_GetOwner()
	{
		struct ActorComponent_eventGetOwner_Parms
		{
			AActor* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ActorComponent_eventGetOwner_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components" },
				{ "Keywords", "Actor Owning Parent" },
				{ "ModuleRelativePath", "Classes/Components/ActorComponent.h" },
				{ "ToolTip", "Follow the Outer chain to get the  AActor  that 'Owns' this component" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorComponent, "GetOwner", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(ActorComponent_eventGetOwner_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UActorComponent_IsActive()
	{
		struct ActorComponent_eventIsActive_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((ActorComponent_eventIsActive_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ActorComponent_eventIsActive_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|Activation" },
				{ "ModuleRelativePath", "Classes/Components/ActorComponent.h" },
				{ "ToolTip", "Returns whether the component is active or not\n@return - The active state of the component." },
				{ "UnsafeDuringActorConstruction", "true" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorComponent, "IsActive", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020400, sizeof(ActorComponent_eventIsActive_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UActorComponent_IsBeingDestroyed()
	{
		struct ActorComponent_eventIsBeingDestroyed_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((ActorComponent_eventIsBeingDestroyed_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ActorComponent_eventIsBeingDestroyed_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components" },
				{ "DisplayName", "Is Component Being Destroyed" },
				{ "ModuleRelativePath", "Classes/Components/ActorComponent.h" },
				{ "ToolTip", "Returns whether the component is in the process of being destroyed." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorComponent, "IsBeingDestroyed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(ActorComponent_eventIsBeingDestroyed_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UActorComponent_IsComponentTickEnabled()
	{
		struct ActorComponent_eventIsComponentTickEnabled_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((ActorComponent_eventIsComponentTickEnabled_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ActorComponent_eventIsComponentTickEnabled_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Utilities" },
				{ "ModuleRelativePath", "Classes/Components/ActorComponent.h" },
				{ "ToolTip", "Returns whether this component has tick enabled or not" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorComponent, "IsComponentTickEnabled", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(ActorComponent_eventIsComponentTickEnabled_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UActorComponent_K2_DestroyComponent()
	{
		struct ActorComponent_eventK2_DestroyComponent_Parms
		{
			UObject* Object;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object = { UE4CodeGen_Private::EPropertyClass::Object, "Object", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ActorComponent_eventK2_DestroyComponent_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Object,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components" },
				{ "DefaultToSelf", "Object" },
				{ "DisplayName", "DestroyComponent" },
				{ "HidePin", "Object" },
				{ "Keywords", "Delete" },
				{ "ModuleRelativePath", "Classes/Components/ActorComponent.h" },
				{ "ToolTip", "Unregister and mark for pending kill a component.  This may not be used to destroy a component that is owned by an actor unless the owning actor is calling the function." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorComponent, "K2_DestroyComponent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ActorComponent_eventK2_DestroyComponent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UActorComponent_OnRep_IsActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Components/ActorComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorComponent, "OnRep_IsActive", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UActorComponent_ReceiveBeginPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "DisplayName", "Begin Play" },
				{ "ModuleRelativePath", "Classes/Components/ActorComponent.h" },
				{ "ToolTip", "Blueprint implementable event for when the component is beginning play, called before its Owner's BeginPlay on Actor BeginPlay\nor when the component is dynamically created if the Actor has already BegunPlay." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorComponent, "ReceiveBeginPlay", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UActorComponent_ReceiveEndPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_EndPlayReason = { UE4CodeGen_Private::EPropertyClass::Byte, "EndPlayReason", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ActorComponent_eventReceiveEndPlay_Parms, EndPlayReason), Z_Construct_UEnum_Engine_EEndPlayReason, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EndPlayReason,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "DisplayName", "End Play" },
				{ "Keywords", "delete" },
				{ "ModuleRelativePath", "Classes/Components/ActorComponent.h" },
				{ "ToolTip", "Blueprint implementable event for when the component ends play, generally via destruction or its Actor's EndPlay." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorComponent, "ReceiveEndPlay", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, sizeof(ActorComponent_eventReceiveEndPlay_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UActorComponent_ReceiveTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds = { UE4CodeGen_Private::EPropertyClass::Float, "DeltaSeconds", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ActorComponent_eventReceiveTick_Parms, DeltaSeconds), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DeltaSeconds,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "DisplayName", "Tick" },
				{ "ModuleRelativePath", "Classes/Components/ActorComponent.h" },
				{ "ToolTip", "Event called every frame" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorComponent, "ReceiveTick", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, sizeof(ActorComponent_eventReceiveTick_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UActorComponent_RemoveTickPrerequisiteActor()
	{
		struct ActorComponent_eventRemoveTickPrerequisiteActor_Parms
		{
			AActor* PrerequisiteActor;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PrerequisiteActor = { UE4CodeGen_Private::EPropertyClass::Object, "PrerequisiteActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ActorComponent_eventRemoveTickPrerequisiteActor_Parms, PrerequisiteActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PrerequisiteActor,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Utilities" },
				{ "Keywords", "dependency" },
				{ "ModuleRelativePath", "Classes/Components/ActorComponent.h" },
				{ "ToolTip", "Remove tick dependency on PrerequisiteActor." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorComponent, "RemoveTickPrerequisiteActor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(ActorComponent_eventRemoveTickPrerequisiteActor_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UActorComponent_RemoveTickPrerequisiteComponent()
	{
		struct ActorComponent_eventRemoveTickPrerequisiteComponent_Parms
		{
			UActorComponent* PrerequisiteComponent;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrerequisiteComponent_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PrerequisiteComponent = { UE4CodeGen_Private::EPropertyClass::Object, "PrerequisiteComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(ActorComponent_eventRemoveTickPrerequisiteComponent_Parms, PrerequisiteComponent), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(NewProp_PrerequisiteComponent_MetaData, ARRAY_COUNT(NewProp_PrerequisiteComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PrerequisiteComponent,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Utilities" },
				{ "Keywords", "dependency" },
				{ "ModuleRelativePath", "Classes/Components/ActorComponent.h" },
				{ "ToolTip", "Remove tick dependency on PrerequisiteComponent." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorComponent, "RemoveTickPrerequisiteComponent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(ActorComponent_eventRemoveTickPrerequisiteComponent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UActorComponent_SetActive()
	{
		struct ActorComponent_eventSetActive_Parms
		{
			bool bNewActive;
			bool bReset;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bReset_SetBit = [](void* Obj){ ((ActorComponent_eventSetActive_Parms*)Obj)->bReset = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReset = { UE4CodeGen_Private::EPropertyClass::Bool, "bReset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ActorComponent_eventSetActive_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bReset_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bNewActive_SetBit = [](void* Obj){ ((ActorComponent_eventSetActive_Parms*)Obj)->bNewActive = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewActive = { UE4CodeGen_Private::EPropertyClass::Bool, "bNewActive", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ActorComponent_eventSetActive_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bNewActive_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bReset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bNewActive,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|Activation" },
				{ "CPP_Default_bReset", "false" },
				{ "ModuleRelativePath", "Classes/Components/ActorComponent.h" },
				{ "ToolTip", "Sets whether the component is active or not\n@param bNewActive - The new active state of the component" },
				{ "UnsafeDuringActorConstruction", "true" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorComponent, "SetActive", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(ActorComponent_eventSetActive_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UActorComponent_SetAutoActivate()
	{
		struct ActorComponent_eventSetAutoActivate_Parms
		{
			bool bNewAutoActivate;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bNewAutoActivate_SetBit = [](void* Obj){ ((ActorComponent_eventSetAutoActivate_Parms*)Obj)->bNewAutoActivate = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewAutoActivate = { UE4CodeGen_Private::EPropertyClass::Bool, "bNewAutoActivate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ActorComponent_eventSetAutoActivate_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bNewAutoActivate_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bNewAutoActivate,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|Activation" },
				{ "ModuleRelativePath", "Classes/Components/ActorComponent.h" },
				{ "ToolTip", "Sets whether the component should be auto activate or not. Only safe during construction scripts.\n@param bNewAutoActivate - The new auto activate state of the component" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorComponent, "SetAutoActivate", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(ActorComponent_eventSetAutoActivate_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UActorComponent_SetComponentTickEnabled()
	{
		struct ActorComponent_eventSetComponentTickEnabled_Parms
		{
			bool bEnabled;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bEnabled_SetBit = [](void* Obj){ ((ActorComponent_eventSetComponentTickEnabled_Parms*)Obj)->bEnabled = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnabled", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ActorComponent_eventSetComponentTickEnabled_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnabled_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnabled,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Utilities" },
				{ "ModuleRelativePath", "Classes/Components/ActorComponent.h" },
				{ "ToolTip", "Set this component's tick functions to be enabled or disabled. Only has an effect if the function is registered\n\n@param       bEnabled - Whether it should be enabled or not" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorComponent, "SetComponentTickEnabled", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(ActorComponent_eventSetComponentTickEnabled_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UActorComponent_SetComponentTickInterval()
	{
		struct ActorComponent_eventSetComponentTickInterval_Parms
		{
			float TickInterval;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TickInterval = { UE4CodeGen_Private::EPropertyClass::Float, "TickInterval", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ActorComponent_eventSetComponentTickInterval_Parms, TickInterval), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TickInterval,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Utilities" },
				{ "ModuleRelativePath", "Classes/Components/ActorComponent.h" },
				{ "ToolTip", "Sets the tick interval for this component's primary tick function. Does not enable the tick interval. Takes effect on next tick.\n@param TickInterval   The duration between ticks for this component's primary tick function" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorComponent, "SetComponentTickInterval", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ActorComponent_eventSetComponentTickInterval_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UActorComponent_SetIsReplicated()
	{
		struct ActorComponent_eventSetIsReplicated_Parms
		{
			bool ShouldReplicate;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ShouldReplicate_SetBit = [](void* Obj){ ((ActorComponent_eventSetIsReplicated_Parms*)Obj)->ShouldReplicate = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShouldReplicate = { UE4CodeGen_Private::EPropertyClass::Bool, "ShouldReplicate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ActorComponent_eventSetIsReplicated_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ShouldReplicate_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ShouldReplicate,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components" },
				{ "ModuleRelativePath", "Classes/Components/ActorComponent.h" },
				{ "ToolTip", "Enable or disable replication. This is the equivalent of RemoteRole for actors (only a bool is required for components)" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorComponent, "SetIsReplicated", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ActorComponent_eventSetIsReplicated_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UActorComponent_SetTickableWhenPaused()
	{
		struct ActorComponent_eventSetTickableWhenPaused_Parms
		{
			bool bTickableWhenPaused;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bTickableWhenPaused_SetBit = [](void* Obj){ ((ActorComponent_eventSetTickableWhenPaused_Parms*)Obj)->bTickableWhenPaused = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTickableWhenPaused = { UE4CodeGen_Private::EPropertyClass::Bool, "bTickableWhenPaused", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ActorComponent_eventSetTickableWhenPaused_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bTickableWhenPaused_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bTickableWhenPaused,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Utilities" },
				{ "ModuleRelativePath", "Classes/Components/ActorComponent.h" },
				{ "ToolTip", "Sets whether this component can tick when paused." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorComponent, "SetTickableWhenPaused", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ActorComponent_eventSetTickableWhenPaused_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UActorComponent_SetTickGroup()
	{
		struct ActorComponent_eventSetTickGroup_Parms
		{
			TEnumAsByte<ETickingGroup> NewTickGroup;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewTickGroup = { UE4CodeGen_Private::EPropertyClass::Byte, "NewTickGroup", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ActorComponent_eventSetTickGroup_Parms, NewTickGroup), Z_Construct_UEnum_Engine_ETickingGroup, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewTickGroup,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Utilities" },
				{ "Keywords", "dependency" },
				{ "ModuleRelativePath", "Classes/Components/ActorComponent.h" },
				{ "ToolTip", "Changes the ticking group for this component" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorComponent, "SetTickGroup", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ActorComponent_eventSetTickGroup_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UActorComponent_ToggleActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|Activation" },
				{ "ModuleRelativePath", "Classes/Components/ActorComponent.h" },
				{ "ToolTip", "Toggles the active state of the component" },
				{ "UnsafeDuringActorConstruction", "true" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorComponent, "ToggleActive", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UActorComponent_NoRegister()
	{
		return UActorComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UActorComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UActorComponent_Activate, "Activate" }, // 2050778852
				{ &Z_Construct_UFunction_UActorComponent_AddTickPrerequisiteActor, "AddTickPrerequisiteActor" }, // 2588184243
				{ &Z_Construct_UFunction_UActorComponent_AddTickPrerequisiteComponent, "AddTickPrerequisiteComponent" }, // 2544245926
				{ &Z_Construct_UFunction_UActorComponent_ComponentHasTag, "ComponentHasTag" }, // 843253857
				{ &Z_Construct_UFunction_UActorComponent_Deactivate, "Deactivate" }, // 2623316749
				{ &Z_Construct_UFunction_UActorComponent_GetComponentTickInterval, "GetComponentTickInterval" }, // 2777310175
				{ &Z_Construct_UFunction_UActorComponent_GetOwner, "GetOwner" }, // 184321583
				{ &Z_Construct_UFunction_UActorComponent_IsActive, "IsActive" }, // 380075913
				{ &Z_Construct_UFunction_UActorComponent_IsBeingDestroyed, "IsBeingDestroyed" }, // 2203130080
				{ &Z_Construct_UFunction_UActorComponent_IsComponentTickEnabled, "IsComponentTickEnabled" }, // 16927369
				{ &Z_Construct_UFunction_UActorComponent_K2_DestroyComponent, "K2_DestroyComponent" }, // 910777009
				{ &Z_Construct_UFunction_UActorComponent_OnRep_IsActive, "OnRep_IsActive" }, // 1727236300
				{ &Z_Construct_UFunction_UActorComponent_ReceiveBeginPlay, "ReceiveBeginPlay" }, // 1490184913
				{ &Z_Construct_UFunction_UActorComponent_ReceiveEndPlay, "ReceiveEndPlay" }, // 2642190327
				{ &Z_Construct_UFunction_UActorComponent_ReceiveTick, "ReceiveTick" }, // 2308362782
				{ &Z_Construct_UFunction_UActorComponent_RemoveTickPrerequisiteActor, "RemoveTickPrerequisiteActor" }, // 1234367723
				{ &Z_Construct_UFunction_UActorComponent_RemoveTickPrerequisiteComponent, "RemoveTickPrerequisiteComponent" }, // 2094045601
				{ &Z_Construct_UFunction_UActorComponent_SetActive, "SetActive" }, // 2303051292
				{ &Z_Construct_UFunction_UActorComponent_SetAutoActivate, "SetAutoActivate" }, // 3724055129
				{ &Z_Construct_UFunction_UActorComponent_SetComponentTickEnabled, "SetComponentTickEnabled" }, // 2764824485
				{ &Z_Construct_UFunction_UActorComponent_SetComponentTickInterval, "SetComponentTickInterval" }, // 4225672072
				{ &Z_Construct_UFunction_UActorComponent_SetIsReplicated, "SetIsReplicated" }, // 1932543783
				{ &Z_Construct_UFunction_UActorComponent_SetTickableWhenPaused, "SetTickableWhenPaused" }, // 2187589841
				{ &Z_Construct_UFunction_UActorComponent_SetTickGroup, "SetTickGroup" }, // 1797624672
				{ &Z_Construct_UFunction_UActorComponent_ToggleActive, "ToggleActive" }, // 2713404622
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "Components/ActorComponent.h" },
				{ "ModuleRelativePath", "Classes/Components/ActorComponent.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
				{ "ShortTooltip", "An ActorComponent is a reusable component that can be added to any actor." },
				{ "ToolTip", "ActorComponent is the base class for components that define reusable behavior that can be added to different types of Actors.\nActorComponents that have a transform are known as SceneComponents and those that can be rendered are PrimitiveComponents.\n\n@see [ActorComponent](https://docs.unrealengine.com/latest/INT/Programming/UnrealArchitecture/Actors/Components/index.html#actorcomponents)\n@see USceneComponent\n@see UPrimitiveComponent" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnComponentDeactivated_MetaData[] = {
				{ "Category", "Components|Activation" },
				{ "ModuleRelativePath", "Classes/Components/ActorComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnComponentDeactivated = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnComponentDeactivated", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UActorComponent, OnComponentDeactivated), Z_Construct_UDelegateFunction_Engine_ActorComponentDeactivateSignature__DelegateSignature, METADATA_PARAMS(NewProp_OnComponentDeactivated_MetaData, ARRAY_COUNT(NewProp_OnComponentDeactivated_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnComponentActivated_MetaData[] = {
				{ "Category", "Components|Activation" },
				{ "ModuleRelativePath", "Classes/Components/ActorComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnComponentActivated = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnComponentActivated", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UActorComponent, OnComponentActivated), Z_Construct_UDelegateFunction_Engine_ActorComponentActivatedSignature__DelegateSignature, METADATA_PARAMS(NewProp_OnComponentActivated_MetaData, ARRAY_COUNT(NewProp_OnComponentActivated_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UCSModifiedProperties_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/ActorComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UCSModifiedProperties = { UE4CodeGen_Private::EPropertyClass::Array, "UCSModifiedProperties", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UActorComponent, UCSModifiedProperties), METADATA_PARAMS(NewProp_UCSModifiedProperties_MetaData, ARRAY_COUNT(NewProp_UCSModifiedProperties_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_UCSModifiedProperties_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "UCSModifiedProperties", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FSimpleMemberReference, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CreationMethod_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/ActorComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CreationMethod = { UE4CodeGen_Private::EPropertyClass::Enum, "CreationMethod", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UActorComponent, CreationMethod), Z_Construct_UEnum_Engine_EComponentCreationMethod, METADATA_PARAMS(NewProp_CreationMethod_MetaData, ARRAY_COUNT(NewProp_CreationMethod_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_CreationMethod_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsEditorOnly_MetaData[] = {
				{ "Category", "Cooking" },
				{ "ModuleRelativePath", "Classes/Components/ActorComponent.h" },
				{ "ToolTip", "If true, the component will be excluded from non-editor builds" },
			};
#endif
			auto NewProp_bIsEditorOnly_SetBit = [](void* Obj){ ((UActorComponent*)Obj)->bIsEditorOnly = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsEditorOnly = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsEditorOnly", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UActorComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsEditorOnly_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsEditorOnly_MetaData, ARRAY_COUNT(NewProp_bIsEditorOnly_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanEverAffectNavigation_MetaData[] = {
				{ "Category", "Collision" },
				{ "ModuleRelativePath", "Classes/Components/ActorComponent.h" },
				{ "ToolTip", "Whether this component can potentially influence navigation" },
			};
#endif
			auto NewProp_bCanEverAffectNavigation_SetBit = [](void* Obj){ ((UActorComponent*)Obj)->bCanEverAffectNavigation = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanEverAffectNavigation = { UE4CodeGen_Private::EPropertyClass::Bool, "bCanEverAffectNavigation", RF_Public|RF_Transient|RF_MarkAsNative, 0x00200c0000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UActorComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCanEverAffectNavigation_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCanEverAffectNavigation_MetaData, ARRAY_COUNT(NewProp_bCanEverAffectNavigation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEditableWhenInherited_MetaData[] = {
				{ "Category", "Variable" },
				{ "ModuleRelativePath", "Classes/Components/ActorComponent.h" },
			};
#endif
			auto NewProp_bEditableWhenInherited_SetBit = [](void* Obj){ ((UActorComponent*)Obj)->bEditableWhenInherited = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEditableWhenInherited = { UE4CodeGen_Private::EPropertyClass::Bool, "bEditableWhenInherited", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UActorComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEditableWhenInherited_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEditableWhenInherited_MetaData, ARRAY_COUNT(NewProp_bEditableWhenInherited_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsActive_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/ActorComponent.h" },
				{ "ToolTip", "Whether the component is currently active." },
			};
#endif
			auto NewProp_bIsActive_SetBit = [](void* Obj){ ((UActorComponent*)Obj)->bIsActive = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsActive = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsActive", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000100002020, 1, "OnRep_IsActive", sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UActorComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsActive_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsActive_MetaData, ARRAY_COUNT(NewProp_bIsActive_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoActivate_MetaData[] = {
				{ "Category", "Activation" },
				{ "ModuleRelativePath", "Classes/Components/ActorComponent.h" },
				{ "ToolTip", "Whether the component is activated at creation or must be explicitly activated." },
			};
#endif
			auto NewProp_bAutoActivate_SetBit = [](void* Obj){ ((UActorComponent*)Obj)->bAutoActivate = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoActivate = { UE4CodeGen_Private::EPropertyClass::Bool, "bAutoActivate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UActorComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAutoActivate_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAutoActivate_MetaData, ARRAY_COUNT(NewProp_bAutoActivate_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInstanceComponent_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/ActorComponent.h" },
				{ "ToolTip", "True if this component was created as an instance component" },
			};
#endif
			auto NewProp_bInstanceComponent_SetBit = [](void* Obj){ ((UActorComponent*)Obj)->bInstanceComponent_DEPRECATED = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInstanceComponent = { UE4CodeGen_Private::EPropertyClass::Bool, "bInstanceComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000820000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UActorComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bInstanceComponent_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bInstanceComponent_MetaData, ARRAY_COUNT(NewProp_bInstanceComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCreatedByConstructionScript_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/ActorComponent.h" },
				{ "ToolTip", "True if this component was created by a construction script, and will be destroyed by DestroyConstructedComponents" },
			};
#endif
			auto NewProp_bCreatedByConstructionScript_SetBit = [](void* Obj){ ((UActorComponent*)Obj)->bCreatedByConstructionScript_DEPRECATED = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCreatedByConstructionScript = { UE4CodeGen_Private::EPropertyClass::Bool, "bCreatedByConstructionScript", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000820000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UActorComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCreatedByConstructionScript_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCreatedByConstructionScript_MetaData, ARRAY_COUNT(NewProp_bCreatedByConstructionScript_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNetAddressable_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/ActorComponent.h" },
				{ "ToolTip", "Is this component safe to ID over the network by name?" },
			};
#endif
			auto NewProp_bNetAddressable_SetBit = [](void* Obj){ ((UActorComponent*)Obj)->bNetAddressable = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNetAddressable = { UE4CodeGen_Private::EPropertyClass::Bool, "bNetAddressable", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UActorComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bNetAddressable_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bNetAddressable_MetaData, ARRAY_COUNT(NewProp_bNetAddressable_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReplicates_MetaData[] = {
				{ "Category", "ComponentReplication" },
				{ "DisplayName", "Component Replicates" },
				{ "ModuleRelativePath", "Classes/Components/ActorComponent.h" },
				{ "ToolTip", "Is this component currently replicating? Should the network code consider it for replication? Owning Actor must be replicating first!" },
			};
#endif
			auto NewProp_bReplicates_SetBit = [](void* Obj){ ((UActorComponent*)Obj)->bReplicates = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReplicates = { UE4CodeGen_Private::EPropertyClass::Bool, "bReplicates", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010035, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UActorComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bReplicates_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bReplicates_MetaData, ARRAY_COUNT(NewProp_bReplicates_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetUserData_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/Components/ActorComponent.h" },
				{ "ToolTip", "Array of user data stored with the component" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AssetUserData = { UE4CodeGen_Private::EPropertyClass::Array, "AssetUserData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020088000000008, 1, nullptr, STRUCT_OFFSET(UActorComponent, AssetUserData), METADATA_PARAMS(NewProp_AssetUserData_MetaData, ARRAY_COUNT(NewProp_AssetUserData_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetUserData_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "AssetUserData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000080008, 1, nullptr, 0, Z_Construct_UClass_UAssetUserData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentTags_MetaData[] = {
				{ "Category", "Tags" },
				{ "ModuleRelativePath", "Classes/Components/ActorComponent.h" },
				{ "ToolTip", "Array of tags that can be used for grouping and categorizing. Can also be accessed from scripting." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ComponentTags = { UE4CodeGen_Private::EPropertyClass::Array, "ComponentTags", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UActorComponent, ComponentTags), METADATA_PARAMS(NewProp_ComponentTags_MetaData, ARRAY_COUNT(NewProp_ComponentTags_MetaData)) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ComponentTags_Inner = { UE4CodeGen_Private::EPropertyClass::Name, "ComponentTags", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimaryComponentTick_MetaData[] = {
				{ "Category", "ComponentTick" },
				{ "ModuleRelativePath", "Classes/Components/ActorComponent.h" },
				{ "ToolTip", "Main tick function for the Actor" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PrimaryComponentTick = { UE4CodeGen_Private::EPropertyClass::Struct, "PrimaryComponentTick", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010001, 1, nullptr, STRUCT_OFFSET(UActorComponent, PrimaryComponentTick), Z_Construct_UScriptStruct_FActorComponentTickFunction, METADATA_PARAMS(NewProp_PrimaryComponentTick_MetaData, ARRAY_COUNT(NewProp_PrimaryComponentTick_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnComponentDeactivated,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnComponentActivated,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UCSModifiedProperties,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UCSModifiedProperties_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CreationMethod,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CreationMethod_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsEditorOnly,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCanEverAffectNavigation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEditableWhenInherited,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsActive,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAutoActivate,
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bInstanceComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCreatedByConstructionScript,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bNetAddressable,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bReplicates,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AssetUserData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AssetUserData_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ComponentTags,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ComponentTags_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PrimaryComponentTick,
			};
			static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[] = {
				{ Z_Construct_UClass_UInterface_AssetUserData_NoRegister, (int32)VTABLE_OFFSET(UActorComponent, IInterface_AssetUserData), false },
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UActorComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UActorComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00081u,
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
	IMPLEMENT_CLASS(UActorComponent, 3723902235);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UActorComponent(Z_Construct_UClass_UActorComponent, &UActorComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UActorComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
