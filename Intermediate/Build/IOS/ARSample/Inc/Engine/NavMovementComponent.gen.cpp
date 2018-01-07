// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/GameFramework/NavMovementComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavMovementComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UNavMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNavMovementComponent();
	ENGINE_API UClass* Z_Construct_UClass_UMovementComponent();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_UNavMovementComponent_IsCrouching();
	ENGINE_API UFunction* Z_Construct_UFunction_UNavMovementComponent_IsFalling();
	ENGINE_API UFunction* Z_Construct_UFunction_UNavMovementComponent_IsFlying();
	ENGINE_API UFunction* Z_Construct_UFunction_UNavMovementComponent_IsMovingOnGround();
	ENGINE_API UFunction* Z_Construct_UFunction_UNavMovementComponent_IsSwimming();
	ENGINE_API UFunction* Z_Construct_UFunction_UNavMovementComponent_StopActiveMovement();
	ENGINE_API UFunction* Z_Construct_UFunction_UNavMovementComponent_StopMovementKeepPathing();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMovementProperties();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNavAgentProperties();
// End Cross Module References
	void UNavMovementComponent::StaticRegisterNativesUNavMovementComponent()
	{
		UClass* Class = UNavMovementComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsCrouching", (Native)&UNavMovementComponent::execIsCrouching },
			{ "IsFalling", (Native)&UNavMovementComponent::execIsFalling },
			{ "IsFlying", (Native)&UNavMovementComponent::execIsFlying },
			{ "IsMovingOnGround", (Native)&UNavMovementComponent::execIsMovingOnGround },
			{ "IsSwimming", (Native)&UNavMovementComponent::execIsSwimming },
			{ "StopActiveMovement", (Native)&UNavMovementComponent::execStopActiveMovement },
			{ "StopMovementKeepPathing", (Native)&UNavMovementComponent::execStopMovementKeepPathing },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UNavMovementComponent_IsCrouching()
	{
		struct NavMovementComponent_eventIsCrouching_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((NavMovementComponent_eventIsCrouching_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(NavMovementComponent_eventIsCrouching_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|Components|NavMovement" },
				{ "ModuleRelativePath", "Classes/GameFramework/NavMovementComponent.h" },
				{ "ToolTip", "@return true if currently crouching" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavMovementComponent, "IsCrouching", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020400, sizeof(NavMovementComponent_eventIsCrouching_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UNavMovementComponent_IsFalling()
	{
		struct NavMovementComponent_eventIsFalling_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((NavMovementComponent_eventIsFalling_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(NavMovementComponent_eventIsFalling_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|Components|NavMovement" },
				{ "ModuleRelativePath", "Classes/GameFramework/NavMovementComponent.h" },
				{ "ToolTip", "@return true if currently falling (not flying, in a non-fluid volume, and not on the ground)" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavMovementComponent, "IsFalling", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020400, sizeof(NavMovementComponent_eventIsFalling_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UNavMovementComponent_IsFlying()
	{
		struct NavMovementComponent_eventIsFlying_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((NavMovementComponent_eventIsFlying_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(NavMovementComponent_eventIsFlying_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|Components|NavMovement" },
				{ "ModuleRelativePath", "Classes/GameFramework/NavMovementComponent.h" },
				{ "ToolTip", "@return true if currently flying (moving through a non-fluid volume without resting on the ground)" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavMovementComponent, "IsFlying", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020400, sizeof(NavMovementComponent_eventIsFlying_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UNavMovementComponent_IsMovingOnGround()
	{
		struct NavMovementComponent_eventIsMovingOnGround_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((NavMovementComponent_eventIsMovingOnGround_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(NavMovementComponent_eventIsMovingOnGround_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|Components|NavMovement" },
				{ "ModuleRelativePath", "Classes/GameFramework/NavMovementComponent.h" },
				{ "ToolTip", "@return true if currently moving on the ground (e.g. walking or driving)" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavMovementComponent, "IsMovingOnGround", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020400, sizeof(NavMovementComponent_eventIsMovingOnGround_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UNavMovementComponent_IsSwimming()
	{
		struct NavMovementComponent_eventIsSwimming_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((NavMovementComponent_eventIsSwimming_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(NavMovementComponent_eventIsSwimming_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|Components|NavMovement" },
				{ "ModuleRelativePath", "Classes/GameFramework/NavMovementComponent.h" },
				{ "ToolTip", "@return true if currently swimming (moving through a fluid volume)" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavMovementComponent, "IsSwimming", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020400, sizeof(NavMovementComponent_eventIsSwimming_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UNavMovementComponent_StopActiveMovement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Pawn|Components|PawnMovement" },
				{ "ModuleRelativePath", "Classes/GameFramework/NavMovementComponent.h" },
				{ "ToolTip", "Stops applying further movement (usually zeros acceleration)." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavMovementComponent, "StopActiveMovement", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UNavMovementComponent_StopMovementKeepPathing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|Movement" },
				{ "ModuleRelativePath", "Classes/GameFramework/NavMovementComponent.h" },
				{ "ToolTip", "Stops movement immediately (reset velocity) but keeps following current path" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavMovementComponent, "StopMovementKeepPathing", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UNavMovementComponent_NoRegister()
	{
		return UNavMovementComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UNavMovementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UMovementComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UNavMovementComponent_IsCrouching, "IsCrouching" }, // 1855059281
				{ &Z_Construct_UFunction_UNavMovementComponent_IsFalling, "IsFalling" }, // 723159453
				{ &Z_Construct_UFunction_UNavMovementComponent_IsFlying, "IsFlying" }, // 227562934
				{ &Z_Construct_UFunction_UNavMovementComponent_IsMovingOnGround, "IsMovingOnGround" }, // 527260596
				{ &Z_Construct_UFunction_UNavMovementComponent_IsSwimming, "IsSwimming" }, // 3046960194
				{ &Z_Construct_UFunction_UNavMovementComponent_StopActiveMovement, "StopActiveMovement" }, // 416710413
				{ &Z_Construct_UFunction_UNavMovementComponent_StopMovementKeepPathing, "StopMovementKeepPathing" }, // 860881374
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "GameFramework/NavMovementComponent.h" },
				{ "ModuleRelativePath", "Classes/GameFramework/NavMovementComponent.h" },
				{ "ToolTip", "NavMovementComponent defines base functionality for MovementComponents that move any 'agent' that may be involved in AI pathfinding." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementState_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/NavMovementComponent.h" },
				{ "ToolTip", "Expresses runtime state of character's movement. Put all temporal changes to movement properties here" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_MovementState = { UE4CodeGen_Private::EPropertyClass::Struct, "MovementState", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UNavMovementComponent, MovementState), Z_Construct_UScriptStruct_FMovementProperties, METADATA_PARAMS(NewProp_MovementState_MetaData, ARRAY_COUNT(NewProp_MovementState_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseFixedBrakingDistanceForPaths_MetaData[] = {
				{ "Category", "NavMovement" },
				{ "EditCondition", "bUseAccelerationForPaths" },
				{ "ModuleRelativePath", "Classes/GameFramework/NavMovementComponent.h" },
				{ "ToolTip", "If set, FixedPathBrakingDistance will be used for path following deceleration" },
			};
#endif
			auto NewProp_bUseFixedBrakingDistanceForPaths_SetBit = [](void* Obj){ ((UNavMovementComponent*)Obj)->bUseFixedBrakingDistanceForPaths = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseFixedBrakingDistanceForPaths = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseFixedBrakingDistanceForPaths", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UNavMovementComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseFixedBrakingDistanceForPaths_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseFixedBrakingDistanceForPaths_MetaData, ARRAY_COUNT(NewProp_bUseFixedBrakingDistanceForPaths_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseAccelerationForPaths_MetaData[] = {
				{ "Category", "NavMovement" },
				{ "ModuleRelativePath", "Classes/GameFramework/NavMovementComponent.h" },
				{ "ToolTip", "If set, pathfollowing will control character movement via acceleration values. If false, it will set velocities directly." },
			};
#endif
			auto NewProp_bUseAccelerationForPaths_SetBit = [](void* Obj){ ((UNavMovementComponent*)Obj)->bUseAccelerationForPaths = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseAccelerationForPaths = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseAccelerationForPaths", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000044001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UNavMovementComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseAccelerationForPaths_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseAccelerationForPaths_MetaData, ARRAY_COUNT(NewProp_bUseAccelerationForPaths_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUpdateNavAgentWithOwnersCollision_MetaData[] = {
				{ "Category", "NavMovement" },
				{ "ModuleRelativePath", "Classes/GameFramework/NavMovementComponent.h" },
				{ "ToolTip", "If set to true NavAgentProps' radius and height will be updated with Owner's collision capsule size" },
			};
#endif
			auto NewProp_bUpdateNavAgentWithOwnersCollision_SetBit = [](void* Obj){ ((UNavMovementComponent*)Obj)->bUpdateNavAgentWithOwnersCollision = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateNavAgentWithOwnersCollision = { UE4CodeGen_Private::EPropertyClass::Bool, "bUpdateNavAgentWithOwnersCollision", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UNavMovementComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUpdateNavAgentWithOwnersCollision_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUpdateNavAgentWithOwnersCollision_MetaData, ARRAY_COUNT(NewProp_bUpdateNavAgentWithOwnersCollision_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FixedPathBrakingDistance_MetaData[] = {
				{ "Category", "NavMovement" },
				{ "EditCondition", "bUseFixedBrakingDistanceForPaths" },
				{ "ModuleRelativePath", "Classes/GameFramework/NavMovementComponent.h" },
				{ "ToolTip", "Braking distance override used with acceleration driven path following (bUseAccelerationForPaths)" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FixedPathBrakingDistance = { UE4CodeGen_Private::EPropertyClass::Float, "FixedPathBrakingDistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UNavMovementComponent, FixedPathBrakingDistance), METADATA_PARAMS(NewProp_FixedPathBrakingDistance_MetaData, ARRAY_COUNT(NewProp_FixedPathBrakingDistance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavAgentProps_MetaData[] = {
				{ "Category", "NavMovement" },
				{ "DisplayName", "Movement Capabilities" },
				{ "Keywords", "Nav Agent" },
				{ "ModuleRelativePath", "Classes/GameFramework/NavMovementComponent.h" },
				{ "ToolTip", "Properties that define how the component can move." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NavAgentProps = { UE4CodeGen_Private::EPropertyClass::Struct, "NavAgentProps", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UNavMovementComponent, NavAgentProps), Z_Construct_UScriptStruct_FNavAgentProperties, METADATA_PARAMS(NewProp_NavAgentProps_MetaData, ARRAY_COUNT(NewProp_NavAgentProps_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MovementState,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseFixedBrakingDistanceForPaths,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseAccelerationForPaths,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUpdateNavAgentWithOwnersCollision,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FixedPathBrakingDistance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NavAgentProps,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UNavMovementComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UNavMovementComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00085u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				"Engine",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNavMovementComponent, 2562311804);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNavMovementComponent(Z_Construct_UClass_UNavMovementComponent, &UNavMovementComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UNavMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNavMovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
