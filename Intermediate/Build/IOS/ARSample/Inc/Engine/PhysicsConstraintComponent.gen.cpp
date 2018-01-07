// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/PhysicsEngine/PhysicsConstraintComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicsConstraintComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsConstraintComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsConstraintComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_BreakConstraint();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_GetConstraintForce();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentSwing1();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentSwing2();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentTwist();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_IsBroken();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularBreakable();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAngularDriveMode();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveParams();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationDrive();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationTarget();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing1Limit();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAngularConstraintMotion();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing2Limit();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularTwistLimit();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDrive();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveSLERP();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveTwistAndSwing();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityTarget();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstrainedComponents();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceFrame();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EConstraintFrame();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceOrientation();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferencePosition();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetDisableCollision();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearBreakable();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearDriveParams();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionDrive();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionTarget();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityDrive();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityTarget();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearXLimit();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ELinearConstraintMotion();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearYLimit();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearZLimit();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveSLERP();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveTwistAndSwing();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FConstraintInstance();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_ConstraintBrokenSignature__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsConstraintTemplate_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FConstrainComponentPropName();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void UPhysicsConstraintComponent::StaticRegisterNativesUPhysicsConstraintComponent()
	{
		UClass* Class = UPhysicsConstraintComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BreakConstraint", (Native)&UPhysicsConstraintComponent::execBreakConstraint },
			{ "GetConstraintForce", (Native)&UPhysicsConstraintComponent::execGetConstraintForce },
			{ "GetCurrentSwing1", (Native)&UPhysicsConstraintComponent::execGetCurrentSwing1 },
			{ "GetCurrentSwing2", (Native)&UPhysicsConstraintComponent::execGetCurrentSwing2 },
			{ "GetCurrentTwist", (Native)&UPhysicsConstraintComponent::execGetCurrentTwist },
			{ "IsBroken", (Native)&UPhysicsConstraintComponent::execIsBroken },
			{ "SetAngularBreakable", (Native)&UPhysicsConstraintComponent::execSetAngularBreakable },
			{ "SetAngularDriveMode", (Native)&UPhysicsConstraintComponent::execSetAngularDriveMode },
			{ "SetAngularDriveParams", (Native)&UPhysicsConstraintComponent::execSetAngularDriveParams },
			{ "SetAngularOrientationDrive", (Native)&UPhysicsConstraintComponent::execSetAngularOrientationDrive },
			{ "SetAngularOrientationTarget", (Native)&UPhysicsConstraintComponent::execSetAngularOrientationTarget },
			{ "SetAngularSwing1Limit", (Native)&UPhysicsConstraintComponent::execSetAngularSwing1Limit },
			{ "SetAngularSwing2Limit", (Native)&UPhysicsConstraintComponent::execSetAngularSwing2Limit },
			{ "SetAngularTwistLimit", (Native)&UPhysicsConstraintComponent::execSetAngularTwistLimit },
			{ "SetAngularVelocityDrive", (Native)&UPhysicsConstraintComponent::execSetAngularVelocityDrive },
			{ "SetAngularVelocityDriveSLERP", (Native)&UPhysicsConstraintComponent::execSetAngularVelocityDriveSLERP },
			{ "SetAngularVelocityDriveTwistAndSwing", (Native)&UPhysicsConstraintComponent::execSetAngularVelocityDriveTwistAndSwing },
			{ "SetAngularVelocityTarget", (Native)&UPhysicsConstraintComponent::execSetAngularVelocityTarget },
			{ "SetConstrainedComponents", (Native)&UPhysicsConstraintComponent::execSetConstrainedComponents },
			{ "SetConstraintReferenceFrame", (Native)&UPhysicsConstraintComponent::execSetConstraintReferenceFrame },
			{ "SetConstraintReferenceOrientation", (Native)&UPhysicsConstraintComponent::execSetConstraintReferenceOrientation },
			{ "SetConstraintReferencePosition", (Native)&UPhysicsConstraintComponent::execSetConstraintReferencePosition },
			{ "SetDisableCollision", (Native)&UPhysicsConstraintComponent::execSetDisableCollision },
			{ "SetLinearBreakable", (Native)&UPhysicsConstraintComponent::execSetLinearBreakable },
			{ "SetLinearDriveParams", (Native)&UPhysicsConstraintComponent::execSetLinearDriveParams },
			{ "SetLinearPositionDrive", (Native)&UPhysicsConstraintComponent::execSetLinearPositionDrive },
			{ "SetLinearPositionTarget", (Native)&UPhysicsConstraintComponent::execSetLinearPositionTarget },
			{ "SetLinearVelocityDrive", (Native)&UPhysicsConstraintComponent::execSetLinearVelocityDrive },
			{ "SetLinearVelocityTarget", (Native)&UPhysicsConstraintComponent::execSetLinearVelocityTarget },
			{ "SetLinearXLimit", (Native)&UPhysicsConstraintComponent::execSetLinearXLimit },
			{ "SetLinearYLimit", (Native)&UPhysicsConstraintComponent::execSetLinearYLimit },
			{ "SetLinearZLimit", (Native)&UPhysicsConstraintComponent::execSetLinearZLimit },
			{ "SetOrientationDriveSLERP", (Native)&UPhysicsConstraintComponent::execSetOrientationDriveSLERP },
			{ "SetOrientationDriveTwistAndSwing", (Native)&UPhysicsConstraintComponent::execSetOrientationDriveTwistAndSwing },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_BreakConstraint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Physics|Components|PhysicsConstraint" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
				{ "ToolTip", "Break this constraint" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, "BreakConstraint", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_GetConstraintForce()
	{
		struct PhysicsConstraintComponent_eventGetConstraintForce_Parms
		{
			FVector OutLinearForce;
			FVector OutAngularForce;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutAngularForce = { UE4CodeGen_Private::EPropertyClass::Struct, "OutAngularForce", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(PhysicsConstraintComponent_eventGetConstraintForce_Parms, OutAngularForce), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutLinearForce = { UE4CodeGen_Private::EPropertyClass::Struct, "OutLinearForce", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(PhysicsConstraintComponent_eventGetConstraintForce_Parms, OutLinearForce), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutAngularForce,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutLinearForce,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Physics|Components|PhysicsConstraint" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
				{ "ToolTip", "Retrieve the constraint force most recently applied to maintain this constraint. Returns 0 forces if the constraint is not initialized or broken." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, "GetConstraintForce", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C20401, sizeof(PhysicsConstraintComponent_eventGetConstraintForce_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentSwing1()
	{
		struct PhysicsConstraintComponent_eventGetCurrentSwing1_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(PhysicsConstraintComponent_eventGetCurrentSwing1_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Physics|Components|PhysicsConstraint" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
				{ "ToolTip", "Gets the current Swing1 of the constraint" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, "GetCurrentSwing1", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(PhysicsConstraintComponent_eventGetCurrentSwing1_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentSwing2()
	{
		struct PhysicsConstraintComponent_eventGetCurrentSwing2_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(PhysicsConstraintComponent_eventGetCurrentSwing2_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Physics|Components|PhysicsConstraint" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
				{ "ToolTip", "Gets the current Swing2 of the constraint" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, "GetCurrentSwing2", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(PhysicsConstraintComponent_eventGetCurrentSwing2_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentTwist()
	{
		struct PhysicsConstraintComponent_eventGetCurrentTwist_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(PhysicsConstraintComponent_eventGetCurrentTwist_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Physics|Components|PhysicsConstraint" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
				{ "ToolTip", "Gets the current Angular Twist of the constraint" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, "GetCurrentTwist", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(PhysicsConstraintComponent_eventGetCurrentTwist_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_IsBroken()
	{
		struct PhysicsConstraintComponent_eventIsBroken_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((PhysicsConstraintComponent_eventIsBroken_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(PhysicsConstraintComponent_eventIsBroken_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Physics|Components|PhysicsConstraint" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
				{ "ToolTip", "Retrieve the status of constraint being broken." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, "IsBroken", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PhysicsConstraintComponent_eventIsBroken_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularBreakable()
	{
		struct PhysicsConstraintComponent_eventSetAngularBreakable_Parms
		{
			bool bAngularBreakable;
			float AngularBreakThreshold;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AngularBreakThreshold = { UE4CodeGen_Private::EPropertyClass::Float, "AngularBreakThreshold", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetAngularBreakable_Parms, AngularBreakThreshold), METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bAngularBreakable_SetBit = [](void* Obj){ ((PhysicsConstraintComponent_eventSetAngularBreakable_Parms*)Obj)->bAngularBreakable = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAngularBreakable = { UE4CodeGen_Private::EPropertyClass::Bool, "bAngularBreakable", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(PhysicsConstraintComponent_eventSetAngularBreakable_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAngularBreakable_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AngularBreakThreshold,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAngularBreakable,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Physics|Components|PhysicsConstraint" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
				{ "ToolTip", "Sets the Angular Breakable properties\n     @param bAngularBreakable                Whether it is possible to break the joint with angular force\n     @param AngularBreakThreshold    Torque needed to break the joint" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, "SetAngularBreakable", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PhysicsConstraintComponent_eventSetAngularBreakable_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveMode()
	{
		struct PhysicsConstraintComponent_eventSetAngularDriveMode_Parms
		{
			TEnumAsByte<EAngularDriveMode::Type> DriveMode;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_DriveMode = { UE4CodeGen_Private::EPropertyClass::Byte, "DriveMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetAngularDriveMode_Parms, DriveMode), Z_Construct_UEnum_Engine_EAngularDriveMode, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DriveMode,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Physics|Components|PhysicsConstraint" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
				{ "ToolTip", "Switches the angular drive mode between SLERP and Twist And Swing\n\n     @param DriveMode        The angular drive mode to use. SLERP uses shortest spherical path, but will not work if any angular constraints are locked. Twist and Swing decomposes the path into the different angular degrees of freedom but may experience gimbal lock" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, "SetAngularDriveMode", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PhysicsConstraintComponent_eventSetAngularDriveMode_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveParams()
	{
		struct PhysicsConstraintComponent_eventSetAngularDriveParams_Parms
		{
			float PositionStrength;
			float VelocityStrength;
			float InForceLimit;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InForceLimit = { UE4CodeGen_Private::EPropertyClass::Float, "InForceLimit", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetAngularDriveParams_Parms, InForceLimit), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VelocityStrength = { UE4CodeGen_Private::EPropertyClass::Float, "VelocityStrength", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetAngularDriveParams_Parms, VelocityStrength), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PositionStrength = { UE4CodeGen_Private::EPropertyClass::Float, "PositionStrength", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetAngularDriveParams_Parms, PositionStrength), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InForceLimit,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VelocityStrength,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PositionStrength,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Physics|Components|PhysicsConstraint" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
				{ "ToolTip", "Sets the drive params for the angular drive.\n    @param PositionStrength         Positional strength for the drive (stiffness)\n    @param VelocityStrength         Velocity strength of the drive (damping)\n    @param InForceLimit     Max force applied by the drive" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, "SetAngularDriveParams", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PhysicsConstraintComponent_eventSetAngularDriveParams_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationDrive()
	{
		struct PhysicsConstraintComponent_eventSetAngularOrientationDrive_Parms
		{
			bool bEnableSwingDrive;
			bool bEnableTwistDrive;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bEnableTwistDrive_SetBit = [](void* Obj){ ((PhysicsConstraintComponent_eventSetAngularOrientationDrive_Parms*)Obj)->bEnableTwistDrive = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableTwistDrive = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableTwistDrive", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(PhysicsConstraintComponent_eventSetAngularOrientationDrive_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnableTwistDrive_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bEnableSwingDrive_SetBit = [](void* Obj){ ((PhysicsConstraintComponent_eventSetAngularOrientationDrive_Parms*)Obj)->bEnableSwingDrive = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableSwingDrive = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableSwingDrive", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(PhysicsConstraintComponent_eventSetAngularOrientationDrive_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnableSwingDrive_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnableTwistDrive,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnableSwingDrive,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Physics|Components|PhysicsConstraint" },
				{ "DeprecatedFunction", "" },
				{ "DeprecationMessage", "Use SetOrientationDriveTwistAndSwing instead." },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
				{ "ToolTip", "Enables/Disables angular orientation drive. Only relevant if the AngularDriveMode is set to Twist and Swing\n\n    @param bEnableSwingDrive        Indicates whether the drive for the swing axis should be enabled. Only relevant if the AngularDriveMode is set to Twist and Swing\n    @param bEnableTwistDrive        Indicates whether the drive for the twist axis should be enabled. Only relevant if the AngularDriveMode is set to Twist and Swing" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, "SetAngularOrientationDrive", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PhysicsConstraintComponent_eventSetAngularOrientationDrive_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationTarget()
	{
		struct PhysicsConstraintComponent_eventSetAngularOrientationTarget_Parms
		{
			FRotator InPosTarget;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPosTarget_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InPosTarget = { UE4CodeGen_Private::EPropertyClass::Struct, "InPosTarget", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetAngularOrientationTarget_Parms, InPosTarget), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(NewProp_InPosTarget_MetaData, ARRAY_COUNT(NewProp_InPosTarget_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InPosTarget,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Physics|Components|PhysicsConstraint" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
				{ "ToolTip", "Sets the target orientation for the angular drive.\n    @param InPosTarget              Target orientation" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, "SetAngularOrientationTarget", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C20401, sizeof(PhysicsConstraintComponent_eventSetAngularOrientationTarget_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing1Limit()
	{
		struct PhysicsConstraintComponent_eventSetAngularSwing1Limit_Parms
		{
			TEnumAsByte<EAngularConstraintMotion> MotionType;
			float Swing1LimitAngle;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Swing1LimitAngle = { UE4CodeGen_Private::EPropertyClass::Float, "Swing1LimitAngle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetAngularSwing1Limit_Parms, Swing1LimitAngle), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_MotionType = { UE4CodeGen_Private::EPropertyClass::Byte, "MotionType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetAngularSwing1Limit_Parms, MotionType), Z_Construct_UEnum_Engine_EAngularConstraintMotion, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Swing1LimitAngle,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MotionType,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Physics|Components|PhysicsConstraint" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
				{ "ToolTip", "Sets the Angular Swing1 Motion Type\n     @param ConstraintType   New Constraint Type\n     @param Swing1LimitAngle Size of limit in degrees" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, "SetAngularSwing1Limit", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PhysicsConstraintComponent_eventSetAngularSwing1Limit_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing2Limit()
	{
		struct PhysicsConstraintComponent_eventSetAngularSwing2Limit_Parms
		{
			TEnumAsByte<EAngularConstraintMotion> MotionType;
			float Swing2LimitAngle;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Swing2LimitAngle = { UE4CodeGen_Private::EPropertyClass::Float, "Swing2LimitAngle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetAngularSwing2Limit_Parms, Swing2LimitAngle), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_MotionType = { UE4CodeGen_Private::EPropertyClass::Byte, "MotionType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetAngularSwing2Limit_Parms, MotionType), Z_Construct_UEnum_Engine_EAngularConstraintMotion, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Swing2LimitAngle,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MotionType,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Physics|Components|PhysicsConstraint" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
				{ "ToolTip", "Sets the Angular Swing2 Motion Type\n     @param ConstraintType   New Constraint Type\n     @param Swing2LimitAngle Size of limit in degrees" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, "SetAngularSwing2Limit", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PhysicsConstraintComponent_eventSetAngularSwing2Limit_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularTwistLimit()
	{
		struct PhysicsConstraintComponent_eventSetAngularTwistLimit_Parms
		{
			TEnumAsByte<EAngularConstraintMotion> ConstraintType;
			float TwistLimitAngle;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TwistLimitAngle = { UE4CodeGen_Private::EPropertyClass::Float, "TwistLimitAngle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetAngularTwistLimit_Parms, TwistLimitAngle), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ConstraintType = { UE4CodeGen_Private::EPropertyClass::Byte, "ConstraintType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetAngularTwistLimit_Parms, ConstraintType), Z_Construct_UEnum_Engine_EAngularConstraintMotion, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TwistLimitAngle,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConstraintType,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Physics|Components|PhysicsConstraint" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
				{ "ToolTip", "Sets the Angular Twist Motion Type\n     @param ConstraintType   New Constraint Type\n     @param TwistLimitAngle  Size of limit in degrees" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, "SetAngularTwistLimit", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PhysicsConstraintComponent_eventSetAngularTwistLimit_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDrive()
	{
		struct PhysicsConstraintComponent_eventSetAngularVelocityDrive_Parms
		{
			bool bEnableSwingDrive;
			bool bEnableTwistDrive;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bEnableTwistDrive_SetBit = [](void* Obj){ ((PhysicsConstraintComponent_eventSetAngularVelocityDrive_Parms*)Obj)->bEnableTwistDrive = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableTwistDrive = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableTwistDrive", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(PhysicsConstraintComponent_eventSetAngularVelocityDrive_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnableTwistDrive_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bEnableSwingDrive_SetBit = [](void* Obj){ ((PhysicsConstraintComponent_eventSetAngularVelocityDrive_Parms*)Obj)->bEnableSwingDrive = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableSwingDrive = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableSwingDrive", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(PhysicsConstraintComponent_eventSetAngularVelocityDrive_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnableSwingDrive_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnableTwistDrive,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnableSwingDrive,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Physics|Components|PhysicsConstraint" },
				{ "DeprecatedFunction", "" },
				{ "DeprecationMessage", "Use SetAngularVelocityDriveTwistAndSwing instead." },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, "SetAngularVelocityDrive", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PhysicsConstraintComponent_eventSetAngularVelocityDrive_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveSLERP()
	{
		struct PhysicsConstraintComponent_eventSetAngularVelocityDriveSLERP_Parms
		{
			bool bEnableSLERP;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bEnableSLERP_SetBit = [](void* Obj){ ((PhysicsConstraintComponent_eventSetAngularVelocityDriveSLERP_Parms*)Obj)->bEnableSLERP = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableSLERP = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableSLERP", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(PhysicsConstraintComponent_eventSetAngularVelocityDriveSLERP_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnableSLERP_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnableSLERP,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Physics|Components|PhysicsConstraint" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
				{ "ToolTip", "Enables/Disables the angular velocity slerp drive. Only relevant if the AngularDriveMode is set to SLERP\n\n     @param bEnableSLERP             Indicates whether the SLERP drive should be enabled. Only relevant if the AngularDriveMode is set to SLERP" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, "SetAngularVelocityDriveSLERP", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PhysicsConstraintComponent_eventSetAngularVelocityDriveSLERP_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveTwistAndSwing()
	{
		struct PhysicsConstraintComponent_eventSetAngularVelocityDriveTwistAndSwing_Parms
		{
			bool bEnableTwistDrive;
			bool bEnableSwingDrive;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bEnableSwingDrive_SetBit = [](void* Obj){ ((PhysicsConstraintComponent_eventSetAngularVelocityDriveTwistAndSwing_Parms*)Obj)->bEnableSwingDrive = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableSwingDrive = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableSwingDrive", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(PhysicsConstraintComponent_eventSetAngularVelocityDriveTwistAndSwing_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnableSwingDrive_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bEnableTwistDrive_SetBit = [](void* Obj){ ((PhysicsConstraintComponent_eventSetAngularVelocityDriveTwistAndSwing_Parms*)Obj)->bEnableTwistDrive = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableTwistDrive = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableTwistDrive", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(PhysicsConstraintComponent_eventSetAngularVelocityDriveTwistAndSwing_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnableTwistDrive_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnableSwingDrive,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnableTwistDrive,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Physics|Components|PhysicsConstraint" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
				{ "ToolTip", "Enables/Disables angular velocity twist and swing drive. Only relevant if the AngularDriveMode is set to Twist and Swing\n\n     @param bEnableSwingDrive        Indicates whether the drive for the swing axis should be enabled. Only relevant if the AngularDriveMode is set to Twist and Swing\n     @param bEnableTwistDrive        Indicates whether the drive for the twist axis should be enabled. Only relevant if the AngularDriveMode is set to Twist and Swing" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, "SetAngularVelocityDriveTwistAndSwing", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PhysicsConstraintComponent_eventSetAngularVelocityDriveTwistAndSwing_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityTarget()
	{
		struct PhysicsConstraintComponent_eventSetAngularVelocityTarget_Parms
		{
			FVector InVelTarget;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InVelTarget_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InVelTarget = { UE4CodeGen_Private::EPropertyClass::Struct, "InVelTarget", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetAngularVelocityTarget_Parms, InVelTarget), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_InVelTarget_MetaData, ARRAY_COUNT(NewProp_InVelTarget_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InVelTarget,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Physics|Components|PhysicsConstraint" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
				{ "ToolTip", "Sets the target velocity for the angular drive.\n    @param InVelTarget              Target velocity" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, "SetAngularVelocityTarget", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C20401, sizeof(PhysicsConstraintComponent_eventSetAngularVelocityTarget_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstrainedComponents()
	{
		struct PhysicsConstraintComponent_eventSetConstrainedComponents_Parms
		{
			UPrimitiveComponent* Component1;
			FName BoneName1;
			UPrimitiveComponent* Component2;
			FName BoneName2;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName2 = { UE4CodeGen_Private::EPropertyClass::Name, "BoneName2", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetConstrainedComponents_Parms, BoneName2), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component2_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component2 = { UE4CodeGen_Private::EPropertyClass::Object, "Component2", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetConstrainedComponents_Parms, Component2), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_Component2_MetaData, ARRAY_COUNT(NewProp_Component2_MetaData)) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName1 = { UE4CodeGen_Private::EPropertyClass::Name, "BoneName1", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetConstrainedComponents_Parms, BoneName1), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component1_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component1 = { UE4CodeGen_Private::EPropertyClass::Object, "Component1", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetConstrainedComponents_Parms, Component1), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_Component1_MetaData, ARRAY_COUNT(NewProp_Component1_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoneName2,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Component2,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoneName1,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Component1,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Physics|Components|PhysicsConstraint" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
				{ "ToolTip", "Directly specify component to connect. Will update frames based on current position." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, "SetConstrainedComponents", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PhysicsConstraintComponent_eventSetConstrainedComponents_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceFrame()
	{
		struct PhysicsConstraintComponent_eventSetConstraintReferenceFrame_Parms
		{
			TEnumAsByte<EConstraintFrame::Type> Frame;
			FTransform RefFrame;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RefFrame_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_RefFrame = { UE4CodeGen_Private::EPropertyClass::Struct, "RefFrame", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetConstraintReferenceFrame_Parms, RefFrame), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(NewProp_RefFrame_MetaData, ARRAY_COUNT(NewProp_RefFrame_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Frame = { UE4CodeGen_Private::EPropertyClass::Byte, "Frame", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetConstraintReferenceFrame_Parms, Frame), Z_Construct_UEnum_Engine_EConstraintFrame, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RefFrame,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Frame,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Physics|Components|PhysicsConstraint" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
				{ "ToolTip", "Pass in reference frame in. If the constraint is currently active, this will set its active local pose. Otherwise the change will take affect in InitConstraint." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, "SetConstraintReferenceFrame", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C20401, sizeof(PhysicsConstraintComponent_eventSetConstraintReferenceFrame_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceOrientation()
	{
		struct PhysicsConstraintComponent_eventSetConstraintReferenceOrientation_Parms
		{
			TEnumAsByte<EConstraintFrame::Type> Frame;
			FVector PriAxis;
			FVector SecAxis;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecAxis_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SecAxis = { UE4CodeGen_Private::EPropertyClass::Struct, "SecAxis", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetConstraintReferenceOrientation_Parms, SecAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_SecAxis_MetaData, ARRAY_COUNT(NewProp_SecAxis_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PriAxis_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PriAxis = { UE4CodeGen_Private::EPropertyClass::Struct, "PriAxis", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetConstraintReferenceOrientation_Parms, PriAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_PriAxis_MetaData, ARRAY_COUNT(NewProp_PriAxis_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Frame = { UE4CodeGen_Private::EPropertyClass::Byte, "Frame", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetConstraintReferenceOrientation_Parms, Frame), Z_Construct_UEnum_Engine_EConstraintFrame, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SecAxis,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PriAxis,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Frame,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Physics|Components|PhysicsConstraint" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
				{ "ToolTip", "Pass in reference orientation in (maintains reference position). If the constraint is currently active, this will set its active local pose. Otherwise the change will take affect in InitConstraint." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, "SetConstraintReferenceOrientation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C20401, sizeof(PhysicsConstraintComponent_eventSetConstraintReferenceOrientation_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferencePosition()
	{
		struct PhysicsConstraintComponent_eventSetConstraintReferencePosition_Parms
		{
			TEnumAsByte<EConstraintFrame::Type> Frame;
			FVector RefPosition;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RefPosition_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_RefPosition = { UE4CodeGen_Private::EPropertyClass::Struct, "RefPosition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetConstraintReferencePosition_Parms, RefPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_RefPosition_MetaData, ARRAY_COUNT(NewProp_RefPosition_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Frame = { UE4CodeGen_Private::EPropertyClass::Byte, "Frame", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetConstraintReferencePosition_Parms, Frame), Z_Construct_UEnum_Engine_EConstraintFrame, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RefPosition,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Frame,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Physics|Components|PhysicsConstraint" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
				{ "ToolTip", "Pass in reference position in (maintains reference orientation). If the constraint is currently active, this will set its active local pose. Otherwise the change will take affect in InitConstraint." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, "SetConstraintReferencePosition", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C20401, sizeof(PhysicsConstraintComponent_eventSetConstraintReferencePosition_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetDisableCollision()
	{
		struct PhysicsConstraintComponent_eventSetDisableCollision_Parms
		{
			bool bDisableCollision;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bDisableCollision_SetBit = [](void* Obj){ ((PhysicsConstraintComponent_eventSetDisableCollision_Parms*)Obj)->bDisableCollision = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableCollision = { UE4CodeGen_Private::EPropertyClass::Bool, "bDisableCollision", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(PhysicsConstraintComponent_eventSetDisableCollision_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDisableCollision_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDisableCollision,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Physics|Components|PhysicsConstraint" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
				{ "ToolTip", "If true, the collision between the two rigid bodies of the constraint will be disabled." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, "SetDisableCollision", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PhysicsConstraintComponent_eventSetDisableCollision_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearBreakable()
	{
		struct PhysicsConstraintComponent_eventSetLinearBreakable_Parms
		{
			bool bLinearBreakable;
			float LinearBreakThreshold;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LinearBreakThreshold = { UE4CodeGen_Private::EPropertyClass::Float, "LinearBreakThreshold", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetLinearBreakable_Parms, LinearBreakThreshold), METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bLinearBreakable_SetBit = [](void* Obj){ ((PhysicsConstraintComponent_eventSetLinearBreakable_Parms*)Obj)->bLinearBreakable = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLinearBreakable = { UE4CodeGen_Private::EPropertyClass::Bool, "bLinearBreakable", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(PhysicsConstraintComponent_eventSetLinearBreakable_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bLinearBreakable_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LinearBreakThreshold,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bLinearBreakable,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Physics|Components|PhysicsConstraint" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
				{ "ToolTip", "Sets the Linear Breakable properties\n     @param bLinearBreakable         Whether it is possible to break the joint with linear force\n     @param LinearBreakThreshold     Force needed to break the joint" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, "SetLinearBreakable", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PhysicsConstraintComponent_eventSetLinearBreakable_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearDriveParams()
	{
		struct PhysicsConstraintComponent_eventSetLinearDriveParams_Parms
		{
			float PositionStrength;
			float VelocityStrength;
			float InForceLimit;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InForceLimit = { UE4CodeGen_Private::EPropertyClass::Float, "InForceLimit", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetLinearDriveParams_Parms, InForceLimit), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VelocityStrength = { UE4CodeGen_Private::EPropertyClass::Float, "VelocityStrength", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetLinearDriveParams_Parms, VelocityStrength), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PositionStrength = { UE4CodeGen_Private::EPropertyClass::Float, "PositionStrength", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetLinearDriveParams_Parms, PositionStrength), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InForceLimit,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VelocityStrength,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PositionStrength,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Physics|Components|PhysicsConstraint" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
				{ "ToolTip", "Sets the drive params for the linear drive.\n    @param PositionStrength         Positional strength for the drive (stiffness)\n    @param VelocityStrength         Velocity strength of the drive (damping)\n    @param InForceLimit     Max force applied by the drive" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, "SetLinearDriveParams", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PhysicsConstraintComponent_eventSetLinearDriveParams_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionDrive()
	{
		struct PhysicsConstraintComponent_eventSetLinearPositionDrive_Parms
		{
			bool bEnableDriveX;
			bool bEnableDriveY;
			bool bEnableDriveZ;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bEnableDriveZ_SetBit = [](void* Obj){ ((PhysicsConstraintComponent_eventSetLinearPositionDrive_Parms*)Obj)->bEnableDriveZ = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableDriveZ = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableDriveZ", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(PhysicsConstraintComponent_eventSetLinearPositionDrive_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnableDriveZ_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bEnableDriveY_SetBit = [](void* Obj){ ((PhysicsConstraintComponent_eventSetLinearPositionDrive_Parms*)Obj)->bEnableDriveY = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableDriveY = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableDriveY", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(PhysicsConstraintComponent_eventSetLinearPositionDrive_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnableDriveY_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bEnableDriveX_SetBit = [](void* Obj){ ((PhysicsConstraintComponent_eventSetLinearPositionDrive_Parms*)Obj)->bEnableDriveX = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableDriveX = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableDriveX", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(PhysicsConstraintComponent_eventSetLinearPositionDrive_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnableDriveX_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnableDriveZ,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnableDriveY,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnableDriveX,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Physics|Components|PhysicsConstraint" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
				{ "ToolTip", "Enables/Disables linear position drive\n\n    @param bEnableDriveX    Indicates whether the drive for the X-Axis should be enabled\n    @param bEnableDriveY    Indicates whether the drive for the Y-Axis should be enabled\n    @param bEnableDriveZ    Indicates whether the drive for the Z-Axis should be enabled" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, "SetLinearPositionDrive", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PhysicsConstraintComponent_eventSetLinearPositionDrive_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionTarget()
	{
		struct PhysicsConstraintComponent_eventSetLinearPositionTarget_Parms
		{
			FVector InPosTarget;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPosTarget_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InPosTarget = { UE4CodeGen_Private::EPropertyClass::Struct, "InPosTarget", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetLinearPositionTarget_Parms, InPosTarget), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_InPosTarget_MetaData, ARRAY_COUNT(NewProp_InPosTarget_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InPosTarget,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Physics|Components|PhysicsConstraint" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
				{ "ToolTip", "Sets the target position for the linear drive.\n    @param InPosTarget              Target position" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, "SetLinearPositionTarget", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C20401, sizeof(PhysicsConstraintComponent_eventSetLinearPositionTarget_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityDrive()
	{
		struct PhysicsConstraintComponent_eventSetLinearVelocityDrive_Parms
		{
			bool bEnableDriveX;
			bool bEnableDriveY;
			bool bEnableDriveZ;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bEnableDriveZ_SetBit = [](void* Obj){ ((PhysicsConstraintComponent_eventSetLinearVelocityDrive_Parms*)Obj)->bEnableDriveZ = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableDriveZ = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableDriveZ", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(PhysicsConstraintComponent_eventSetLinearVelocityDrive_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnableDriveZ_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bEnableDriveY_SetBit = [](void* Obj){ ((PhysicsConstraintComponent_eventSetLinearVelocityDrive_Parms*)Obj)->bEnableDriveY = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableDriveY = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableDriveY", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(PhysicsConstraintComponent_eventSetLinearVelocityDrive_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnableDriveY_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bEnableDriveX_SetBit = [](void* Obj){ ((PhysicsConstraintComponent_eventSetLinearVelocityDrive_Parms*)Obj)->bEnableDriveX = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableDriveX = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableDriveX", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(PhysicsConstraintComponent_eventSetLinearVelocityDrive_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnableDriveX_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnableDriveZ,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnableDriveY,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnableDriveX,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Physics|Components|PhysicsConstraint" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
				{ "ToolTip", "Enables/Disables linear position drive\n\n    @param bEnableDriveX    Indicates whether the drive for the X-Axis should be enabled\n    @param bEnableDriveY    Indicates whether the drive for the Y-Axis should be enabled\n    @param bEnableDriveZ    Indicates whether the drive for the Z-Axis should be enabled" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, "SetLinearVelocityDrive", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PhysicsConstraintComponent_eventSetLinearVelocityDrive_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityTarget()
	{
		struct PhysicsConstraintComponent_eventSetLinearVelocityTarget_Parms
		{
			FVector InVelTarget;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InVelTarget_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InVelTarget = { UE4CodeGen_Private::EPropertyClass::Struct, "InVelTarget", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetLinearVelocityTarget_Parms, InVelTarget), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_InVelTarget_MetaData, ARRAY_COUNT(NewProp_InVelTarget_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InVelTarget,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Physics|Components|PhysicsConstraint" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
				{ "ToolTip", "Sets the target velocity for the linear drive.\n    @param InVelTarget              Target velocity" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, "SetLinearVelocityTarget", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C20401, sizeof(PhysicsConstraintComponent_eventSetLinearVelocityTarget_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearXLimit()
	{
		struct PhysicsConstraintComponent_eventSetLinearXLimit_Parms
		{
			TEnumAsByte<ELinearConstraintMotion> ConstraintType;
			float LimitSize;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LimitSize = { UE4CodeGen_Private::EPropertyClass::Float, "LimitSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetLinearXLimit_Parms, LimitSize), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ConstraintType = { UE4CodeGen_Private::EPropertyClass::Byte, "ConstraintType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetLinearXLimit_Parms, ConstraintType), Z_Construct_UEnum_Engine_ELinearConstraintMotion, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LimitSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConstraintType,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Physics|Components|PhysicsConstraint" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
				{ "ToolTip", "Sets the LinearX Motion Type\n     @param ConstraintType   New Constraint Type\n     @param LimitSize                Size of limit" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, "SetLinearXLimit", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PhysicsConstraintComponent_eventSetLinearXLimit_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearYLimit()
	{
		struct PhysicsConstraintComponent_eventSetLinearYLimit_Parms
		{
			TEnumAsByte<ELinearConstraintMotion> ConstraintType;
			float LimitSize;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LimitSize = { UE4CodeGen_Private::EPropertyClass::Float, "LimitSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetLinearYLimit_Parms, LimitSize), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ConstraintType = { UE4CodeGen_Private::EPropertyClass::Byte, "ConstraintType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetLinearYLimit_Parms, ConstraintType), Z_Construct_UEnum_Engine_ELinearConstraintMotion, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LimitSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConstraintType,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Physics|Components|PhysicsConstraint" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
				{ "ToolTip", "Sets the LinearY Motion Type\n     @param ConstraintType   New Constraint Type\n     @param LimitSize                Size of limit" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, "SetLinearYLimit", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PhysicsConstraintComponent_eventSetLinearYLimit_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearZLimit()
	{
		struct PhysicsConstraintComponent_eventSetLinearZLimit_Parms
		{
			TEnumAsByte<ELinearConstraintMotion> ConstraintType;
			float LimitSize;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LimitSize = { UE4CodeGen_Private::EPropertyClass::Float, "LimitSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetLinearZLimit_Parms, LimitSize), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ConstraintType = { UE4CodeGen_Private::EPropertyClass::Byte, "ConstraintType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetLinearZLimit_Parms, ConstraintType), Z_Construct_UEnum_Engine_ELinearConstraintMotion, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LimitSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConstraintType,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Physics|Components|PhysicsConstraint" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
				{ "ToolTip", "Sets the LinearZ Motion Type\n     @param ConstraintType   New Constraint Type\n     @param LimitSize                Size of limit" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, "SetLinearZLimit", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PhysicsConstraintComponent_eventSetLinearZLimit_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveSLERP()
	{
		struct PhysicsConstraintComponent_eventSetOrientationDriveSLERP_Parms
		{
			bool bEnableSLERP;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bEnableSLERP_SetBit = [](void* Obj){ ((PhysicsConstraintComponent_eventSetOrientationDriveSLERP_Parms*)Obj)->bEnableSLERP = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableSLERP = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableSLERP", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(PhysicsConstraintComponent_eventSetOrientationDriveSLERP_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnableSLERP_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnableSLERP,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Physics|Components|PhysicsConstraint" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
				{ "ToolTip", "Enables/Disables the angular orientation slerp drive. Only relevant if the AngularDriveMode is set to SLERP\n\n     @param bEnableSLERP             Indicates whether the SLERP drive should be enabled. Only relevant if the AngularDriveMode is set to SLERP" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, "SetOrientationDriveSLERP", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PhysicsConstraintComponent_eventSetOrientationDriveSLERP_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveTwistAndSwing()
	{
		struct PhysicsConstraintComponent_eventSetOrientationDriveTwistAndSwing_Parms
		{
			bool bEnableTwistDrive;
			bool bEnableSwingDrive;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bEnableSwingDrive_SetBit = [](void* Obj){ ((PhysicsConstraintComponent_eventSetOrientationDriveTwistAndSwing_Parms*)Obj)->bEnableSwingDrive = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableSwingDrive = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableSwingDrive", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(PhysicsConstraintComponent_eventSetOrientationDriveTwistAndSwing_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnableSwingDrive_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bEnableTwistDrive_SetBit = [](void* Obj){ ((PhysicsConstraintComponent_eventSetOrientationDriveTwistAndSwing_Parms*)Obj)->bEnableTwistDrive = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableTwistDrive = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableTwistDrive", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(PhysicsConstraintComponent_eventSetOrientationDriveTwistAndSwing_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnableTwistDrive_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnableSwingDrive,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnableTwistDrive,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Physics|Components|PhysicsConstraint" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
				{ "ToolTip", "Enables/Disables angular orientation drive. Only relevant if the AngularDriveMode is set to Twist and Swing\n\n     @param bEnableSwingDrive        Indicates whether the drive for the swing axis should be enabled. Only relevant if the AngularDriveMode is set to Twist and Swing\n     @param bEnableTwistDrive        Indicates whether the drive for the twist axis should be enabled. Only relevant if the AngularDriveMode is set to Twist and Swing" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, "SetOrientationDriveTwistAndSwing", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PhysicsConstraintComponent_eventSetOrientationDriveTwistAndSwing_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPhysicsConstraintComponent_NoRegister()
	{
		return UPhysicsConstraintComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UPhysicsConstraintComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_USceneComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UPhysicsConstraintComponent_BreakConstraint, "BreakConstraint" }, // 2599958215
				{ &Z_Construct_UFunction_UPhysicsConstraintComponent_GetConstraintForce, "GetConstraintForce" }, // 921315955
				{ &Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentSwing1, "GetCurrentSwing1" }, // 159705955
				{ &Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentSwing2, "GetCurrentSwing2" }, // 28742644
				{ &Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentTwist, "GetCurrentTwist" }, // 3525234449
				{ &Z_Construct_UFunction_UPhysicsConstraintComponent_IsBroken, "IsBroken" }, // 3873930484
				{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularBreakable, "SetAngularBreakable" }, // 280626698
				{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveMode, "SetAngularDriveMode" }, // 1835807710
				{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveParams, "SetAngularDriveParams" }, // 950320463
				{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationDrive, "SetAngularOrientationDrive" }, // 3784260324
				{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationTarget, "SetAngularOrientationTarget" }, // 2158350127
				{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing1Limit, "SetAngularSwing1Limit" }, // 2472753669
				{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing2Limit, "SetAngularSwing2Limit" }, // 1422230905
				{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularTwistLimit, "SetAngularTwistLimit" }, // 823148014
				{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDrive, "SetAngularVelocityDrive" }, // 3592001657
				{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveSLERP, "SetAngularVelocityDriveSLERP" }, // 71778655
				{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveTwistAndSwing, "SetAngularVelocityDriveTwistAndSwing" }, // 2083575550
				{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityTarget, "SetAngularVelocityTarget" }, // 1790598570
				{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstrainedComponents, "SetConstrainedComponents" }, // 2349281457
				{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceFrame, "SetConstraintReferenceFrame" }, // 2470174350
				{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceOrientation, "SetConstraintReferenceOrientation" }, // 1044458280
				{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferencePosition, "SetConstraintReferencePosition" }, // 112923430
				{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetDisableCollision, "SetDisableCollision" }, // 3503643496
				{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearBreakable, "SetLinearBreakable" }, // 2346814518
				{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearDriveParams, "SetLinearDriveParams" }, // 1070267684
				{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionDrive, "SetLinearPositionDrive" }, // 2378465591
				{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionTarget, "SetLinearPositionTarget" }, // 393480027
				{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityDrive, "SetLinearVelocityDrive" }, // 77534649
				{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityTarget, "SetLinearVelocityTarget" }, // 1026565841
				{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearXLimit, "SetLinearXLimit" }, // 2934523197
				{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearYLimit, "SetLinearYLimit" }, // 430969729
				{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearZLimit, "SetLinearZLimit" }, // 3298489842
				{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveSLERP, "SetOrientationDriveSLERP" }, // 3301376887
				{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveTwistAndSwing, "SetOrientationDriveTwistAndSwing" }, // 2939071489
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Physics" },
				{ "HideCategories", "Activation Components|Activation Physics Mobility Trigger PhysicsVolume" },
				{ "IncludePath", "PhysicsEngine/PhysicsConstraintComponent.h" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
				{ "ShowCategories", "Physics|Components|PhysicsConstraint" },
				{ "ToolTip", "This is effectively a joint that allows you to connect 2 rigid bodies together. You can create different types of joints using the various parameters of this component." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstraintInstance_MetaData[] = {
				{ "Category", "ConstraintComponent" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
				{ "ShowOnlyInnerProperties", "" },
				{ "ToolTip", "All constraint settings" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConstraintInstance = { UE4CodeGen_Private::EPropertyClass::Struct, "ConstraintInstance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UPhysicsConstraintComponent, ConstraintInstance), Z_Construct_UScriptStruct_FConstraintInstance, METADATA_PARAMS(NewProp_ConstraintInstance_MetaData, ARRAY_COUNT(NewProp_ConstraintInstance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnConstraintBroken_MetaData[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
				{ "ToolTip", "Notification when constraint is broken." },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnConstraintBroken = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnConstraintBroken", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UPhysicsConstraintComponent, OnConstraintBroken), Z_Construct_UDelegateFunction_Engine_ConstraintBrokenSignature__DelegateSignature, METADATA_PARAMS(NewProp_OnConstraintBroken_MetaData, ARRAY_COUNT(NewProp_OnConstraintBroken_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstraintSetup_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConstraintSetup = { UE4CodeGen_Private::EPropertyClass::Object, "ConstraintSetup", RF_Public|RF_Transient|RF_MarkAsNative, 0x0012000020080008, 1, nullptr, STRUCT_OFFSET(UPhysicsConstraintComponent, ConstraintSetup_DEPRECATED), Z_Construct_UClass_UPhysicsConstraintTemplate_NoRegister, METADATA_PARAMS(NewProp_ConstraintSetup_MetaData, ARRAY_COUNT(NewProp_ConstraintSetup_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentName2_MetaData[] = {
				{ "Category", "Constraint" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
				{ "ToolTip", "Name of second component property to constrain. If Actor2 is NULL, will look within Owner.\nIf this is NULL, will use RootComponent of Actor2" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ComponentName2 = { UE4CodeGen_Private::EPropertyClass::Struct, "ComponentName2", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UPhysicsConstraintComponent, ComponentName2), Z_Construct_UScriptStruct_FConstrainComponentPropName, METADATA_PARAMS(NewProp_ComponentName2_MetaData, ARRAY_COUNT(NewProp_ComponentName2_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstraintActor2_MetaData[] = {
				{ "Category", "Constraint" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
				{ "ToolTip", "Pointer to second Actor to constrain." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConstraintActor2 = { UE4CodeGen_Private::EPropertyClass::Object, "ConstraintActor2", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000801, 1, nullptr, STRUCT_OFFSET(UPhysicsConstraintComponent, ConstraintActor2), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(NewProp_ConstraintActor2_MetaData, ARRAY_COUNT(NewProp_ConstraintActor2_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentName1_MetaData[] = {
				{ "Category", "Constraint" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
				{ "ToolTip", "Name of first component property to constrain. If Actor1 is NULL, will look within Owner.\nIf this is NULL, will use RootComponent of Actor1" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ComponentName1 = { UE4CodeGen_Private::EPropertyClass::Struct, "ComponentName1", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UPhysicsConstraintComponent, ComponentName1), Z_Construct_UScriptStruct_FConstrainComponentPropName, METADATA_PARAMS(NewProp_ComponentName1_MetaData, ARRAY_COUNT(NewProp_ComponentName1_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstraintActor1_MetaData[] = {
				{ "Category", "Constraint" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
				{ "ToolTip", "Pointer to first Actor to constrain." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConstraintActor1 = { UE4CodeGen_Private::EPropertyClass::Object, "ConstraintActor1", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000801, 1, nullptr, STRUCT_OFFSET(UPhysicsConstraintComponent, ConstraintActor1), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(NewProp_ConstraintActor1_MetaData, ARRAY_COUNT(NewProp_ConstraintActor1_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConstraintInstance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnConstraintBroken,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConstraintSetup,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ComponentName2,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConstraintActor2,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ComponentName1,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConstraintActor1,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UPhysicsConstraintComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UPhysicsConstraintComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
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
	IMPLEMENT_CLASS(UPhysicsConstraintComponent, 3824295389);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPhysicsConstraintComponent(Z_Construct_UClass_UPhysicsConstraintComponent, &UPhysicsConstraintComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UPhysicsConstraintComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPhysicsConstraintComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
