// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Navigation/CrowdFollowingComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCrowdFollowingComponent() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UCrowdFollowingComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UCrowdFollowingComponent();
	AIMODULE_API UClass* Z_Construct_UClass_UPathFollowingComponent();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UFunction* Z_Construct_UFunction_UCrowdFollowingComponent_SuspendCrowdSteering();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNavAvoidanceMask();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	AIMODULE_API UClass* Z_Construct_UClass_UCrowdAgentInterface_NoRegister();
// End Cross Module References
	void UCrowdFollowingComponent::StaticRegisterNativesUCrowdFollowingComponent()
	{
		UClass* Class = UCrowdFollowingComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SuspendCrowdSteering", (Native)&UCrowdFollowingComponent::execSuspendCrowdSteering },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UCrowdFollowingComponent_SuspendCrowdSteering()
	{
		struct CrowdFollowingComponent_eventSuspendCrowdSteering_Parms
		{
			bool bSuspend;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bSuspend_SetBit = [](void* Obj){ ((CrowdFollowingComponent_eventSuspendCrowdSteering_Parms*)Obj)->bSuspend = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSuspend = { UE4CodeGen_Private::EPropertyClass::Bool, "bSuspend", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(CrowdFollowingComponent_eventSuspendCrowdSteering_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSuspend_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSuspend,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Crowd" },
				{ "ModuleRelativePath", "Classes/Navigation/CrowdFollowingComponent.h" },
				{ "ToolTip", "master switch for crowd steering & avoidance" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCrowdFollowingComponent, "SuspendCrowdSteering", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(CrowdFollowingComponent_eventSuspendCrowdSteering_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCrowdFollowingComponent_NoRegister()
	{
		return UCrowdFollowingComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UCrowdFollowingComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UPathFollowingComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UCrowdFollowingComponent_SuspendCrowdSteering, "SuspendCrowdSteering" }, // 4209579991
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "Navigation/CrowdFollowingComponent.h" },
				{ "ModuleRelativePath", "Classes/Navigation/CrowdFollowingComponent.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupsToIgnore_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Navigation/CrowdFollowingComponent.h" },
				{ "ToolTip", "DEPRECATED: Will NOT avoid other agents if they are in one of specified groups, higher priority than GroupsToAvoid - use property from CharacterMovementComponent instead" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_GroupsToIgnore = { UE4CodeGen_Private::EPropertyClass::Struct, "GroupsToIgnore", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080020000000, 1, nullptr, STRUCT_OFFSET(UCrowdFollowingComponent, GroupsToIgnore_DEPRECATED), Z_Construct_UScriptStruct_FNavAvoidanceMask, METADATA_PARAMS(NewProp_GroupsToIgnore_MetaData, ARRAY_COUNT(NewProp_GroupsToIgnore_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupsToAvoid_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Navigation/CrowdFollowingComponent.h" },
				{ "ToolTip", "DEPRECATED: Will avoid other agents if they are in one of specified groups - use property from CharacterMovementComponent instead" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_GroupsToAvoid = { UE4CodeGen_Private::EPropertyClass::Struct, "GroupsToAvoid", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080020000000, 1, nullptr, STRUCT_OFFSET(UCrowdFollowingComponent, GroupsToAvoid_DEPRECATED), Z_Construct_UScriptStruct_FNavAvoidanceMask, METADATA_PARAMS(NewProp_GroupsToAvoid_MetaData, ARRAY_COUNT(NewProp_GroupsToAvoid_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AvoidanceGroup_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Navigation/CrowdFollowingComponent.h" },
				{ "ToolTip", "DEPRECATED: Group mask for this agent - use property from CharacterMovementComponent instead" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AvoidanceGroup = { UE4CodeGen_Private::EPropertyClass::Struct, "AvoidanceGroup", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080020000000, 1, nullptr, STRUCT_OFFSET(UCrowdFollowingComponent, AvoidanceGroup_DEPRECATED), Z_Construct_UScriptStruct_FNavAvoidanceMask, METADATA_PARAMS(NewProp_AvoidanceGroup_MetaData, ARRAY_COUNT(NewProp_AvoidanceGroup_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterMovement_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/Navigation/CrowdFollowingComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CharacterMovement = { UE4CodeGen_Private::EPropertyClass::Object, "CharacterMovement", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000082008, 1, nullptr, STRUCT_OFFSET(UCrowdFollowingComponent, CharacterMovement), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(NewProp_CharacterMovement_MetaData, ARRAY_COUNT(NewProp_CharacterMovement_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrowdAgentMoveDirection_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Navigation/CrowdFollowingComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CrowdAgentMoveDirection = { UE4CodeGen_Private::EPropertyClass::Struct, "CrowdAgentMoveDirection", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UCrowdFollowingComponent, CrowdAgentMoveDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_CrowdAgentMoveDirection_MetaData, ARRAY_COUNT(NewProp_CrowdAgentMoveDirection_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GroupsToIgnore,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GroupsToAvoid,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AvoidanceGroup,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CharacterMovement,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CrowdAgentMoveDirection,
			};
			static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[] = {
				{ Z_Construct_UClass_UCrowdAgentInterface_NoRegister, (int32)VTABLE_OFFSET(UCrowdFollowingComponent, ICrowdAgentInterface), false },
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UCrowdFollowingComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UCrowdFollowingComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
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
	IMPLEMENT_CLASS(UCrowdFollowingComponent, 3786817353);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCrowdFollowingComponent(Z_Construct_UClass_UCrowdFollowingComponent, &UCrowdFollowingComponent::StaticClass, TEXT("/Script/AIModule"), TEXT("UCrowdFollowingComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCrowdFollowingComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
