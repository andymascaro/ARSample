// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/PhysicsEngine/PhysicsHandleComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicsHandleComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsHandleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsHandleComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsHandleComponent_GetGrabbedComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsHandleComponent_GetTargetLocationAndRotation();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponent();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocation();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocationWithRotation();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsHandleComponent_ReleaseComponent();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsHandleComponent_SetAngularDamping();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsHandleComponent_SetAngularStiffness();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsHandleComponent_SetInterpolationSpeed();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsHandleComponent_SetLinearDamping();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsHandleComponent_SetLinearStiffness();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetLocation();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetLocationAndRotation();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetRotation();
// End Cross Module References
	void UPhysicsHandleComponent::StaticRegisterNativesUPhysicsHandleComponent()
	{
		UClass* Class = UPhysicsHandleComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetGrabbedComponent", (Native)&UPhysicsHandleComponent::execGetGrabbedComponent },
			{ "GetTargetLocationAndRotation", (Native)&UPhysicsHandleComponent::execGetTargetLocationAndRotation },
			{ "GrabComponent", (Native)&UPhysicsHandleComponent::execGrabComponent },
			{ "GrabComponentAtLocation", (Native)&UPhysicsHandleComponent::execGrabComponentAtLocation },
			{ "GrabComponentAtLocationWithRotation", (Native)&UPhysicsHandleComponent::execGrabComponentAtLocationWithRotation },
			{ "ReleaseComponent", (Native)&UPhysicsHandleComponent::execReleaseComponent },
			{ "SetAngularDamping", (Native)&UPhysicsHandleComponent::execSetAngularDamping },
			{ "SetAngularStiffness", (Native)&UPhysicsHandleComponent::execSetAngularStiffness },
			{ "SetInterpolationSpeed", (Native)&UPhysicsHandleComponent::execSetInterpolationSpeed },
			{ "SetLinearDamping", (Native)&UPhysicsHandleComponent::execSetLinearDamping },
			{ "SetLinearStiffness", (Native)&UPhysicsHandleComponent::execSetLinearStiffness },
			{ "SetTargetLocation", (Native)&UPhysicsHandleComponent::execSetTargetLocation },
			{ "SetTargetLocationAndRotation", (Native)&UPhysicsHandleComponent::execSetTargetLocationAndRotation },
			{ "SetTargetRotation", (Native)&UPhysicsHandleComponent::execSetTargetRotation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UPhysicsHandleComponent_GetGrabbedComponent()
	{
		struct PhysicsHandleComponent_eventGetGrabbedComponent_Parms
		{
			UPrimitiveComponent* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080588, 1, nullptr, STRUCT_OFFSET(PhysicsHandleComponent_eventGetGrabbedComponent_Parms, ReturnValue), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_ReturnValue_MetaData, ARRAY_COUNT(NewProp_ReturnValue_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Physics|Components|PhysicsHandle" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsHandleComponent.h" },
				{ "ToolTip", "Returns the currently grabbed component, or null if nothing is grabbed." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsHandleComponent, "GetGrabbedComponent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020403, sizeof(PhysicsHandleComponent_eventGetGrabbedComponent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPhysicsHandleComponent_GetTargetLocationAndRotation()
	{
		struct PhysicsHandleComponent_eventGetTargetLocationAndRotation_Parms
		{
			FVector TargetLocation;
			FRotator TargetRotation;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "TargetRotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(PhysicsHandleComponent_eventGetTargetLocationAndRotation_Parms, TargetRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "TargetLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(PhysicsHandleComponent_eventGetTargetLocationAndRotation_Parms, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetRotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetLocation,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Physics|Components|PhysicsHandle" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsHandleComponent.h" },
				{ "ToolTip", "Get the current location and rotation" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsHandleComponent, "GetTargetLocationAndRotation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54C20403, sizeof(PhysicsHandleComponent_eventGetTargetLocationAndRotation_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponent()
	{
		struct PhysicsHandleComponent_eventGrabComponent_Parms
		{
			UPrimitiveComponent* Component;
			FName InBoneName;
			FVector GrabLocation;
			bool bConstrainRotation;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bConstrainRotation_SetBit = [](void* Obj){ ((PhysicsHandleComponent_eventGrabComponent_Parms*)Obj)->bConstrainRotation = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConstrainRotation = { UE4CodeGen_Private::EPropertyClass::Bool, "bConstrainRotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(PhysicsHandleComponent_eventGrabComponent_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bConstrainRotation_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_GrabLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "GrabLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PhysicsHandleComponent_eventGrabComponent_Parms, GrabLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_InBoneName = { UE4CodeGen_Private::EPropertyClass::Name, "InBoneName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PhysicsHandleComponent_eventGrabComponent_Parms, InBoneName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component = { UE4CodeGen_Private::EPropertyClass::Object, "Component", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(PhysicsHandleComponent_eventGrabComponent_Parms, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_Component_MetaData, ARRAY_COUNT(NewProp_Component_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bConstrainRotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GrabLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InBoneName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Component,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Physics|Components|PhysicsHandle" },
				{ "DeprecatedFunction", "" },
				{ "DeprecationMessage", "Please use GrabComponentAtLocation or GrabComponentAtLocationWithRotation" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsHandleComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsHandleComponent, "GrabComponent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820402, sizeof(PhysicsHandleComponent_eventGrabComponent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocation()
	{
		struct PhysicsHandleComponent_eventGrabComponentAtLocation_Parms
		{
			UPrimitiveComponent* Component;
			FName InBoneName;
			FVector GrabLocation;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_GrabLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "GrabLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PhysicsHandleComponent_eventGrabComponentAtLocation_Parms, GrabLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_InBoneName = { UE4CodeGen_Private::EPropertyClass::Name, "InBoneName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PhysicsHandleComponent_eventGrabComponentAtLocation_Parms, InBoneName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component = { UE4CodeGen_Private::EPropertyClass::Object, "Component", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(PhysicsHandleComponent_eventGrabComponentAtLocation_Parms, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_Component_MetaData, ARRAY_COUNT(NewProp_Component_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GrabLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InBoneName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Component,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Physics|Components|PhysicsHandle" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsHandleComponent.h" },
				{ "ToolTip", "Grab the specified component at a given location. Does NOT constraint rotation which means the handle will pivot about GrabLocation." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsHandleComponent, "GrabComponentAtLocation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820403, sizeof(PhysicsHandleComponent_eventGrabComponentAtLocation_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocationWithRotation()
	{
		struct PhysicsHandleComponent_eventGrabComponentAtLocationWithRotation_Parms
		{
			UPrimitiveComponent* Component;
			FName InBoneName;
			FVector Location;
			FRotator Rotation;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation = { UE4CodeGen_Private::EPropertyClass::Struct, "Rotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PhysicsHandleComponent_eventGrabComponentAtLocationWithRotation_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location = { UE4CodeGen_Private::EPropertyClass::Struct, "Location", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PhysicsHandleComponent_eventGrabComponentAtLocationWithRotation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_InBoneName = { UE4CodeGen_Private::EPropertyClass::Name, "InBoneName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PhysicsHandleComponent_eventGrabComponentAtLocationWithRotation_Parms, InBoneName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component = { UE4CodeGen_Private::EPropertyClass::Object, "Component", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(PhysicsHandleComponent_eventGrabComponentAtLocationWithRotation_Parms, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_Component_MetaData, ARRAY_COUNT(NewProp_Component_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Rotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Location,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InBoneName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Component,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Physics|Components|PhysicsHandle" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsHandleComponent.h" },
				{ "ToolTip", "Grab the specified component at a given location and rotation. Constrains rotation." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsHandleComponent, "GrabComponentAtLocationWithRotation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820403, sizeof(PhysicsHandleComponent_eventGrabComponentAtLocationWithRotation_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPhysicsHandleComponent_ReleaseComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Physics|Components|PhysicsHandle" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsHandleComponent.h" },
				{ "ToolTip", "Release the currently held component" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsHandleComponent, "ReleaseComponent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020402, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPhysicsHandleComponent_SetAngularDamping()
	{
		struct PhysicsHandleComponent_eventSetAngularDamping_Parms
		{
			float NewAngularDamping;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewAngularDamping = { UE4CodeGen_Private::EPropertyClass::Float, "NewAngularDamping", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PhysicsHandleComponent_eventSetAngularDamping_Parms, NewAngularDamping), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewAngularDamping,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Physics|Components|PhysicsHandle" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsHandleComponent.h" },
				{ "ToolTip", "Set angular damping" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsHandleComponent, "SetAngularDamping", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020403, sizeof(PhysicsHandleComponent_eventSetAngularDamping_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPhysicsHandleComponent_SetAngularStiffness()
	{
		struct PhysicsHandleComponent_eventSetAngularStiffness_Parms
		{
			float NewAngularStiffness;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewAngularStiffness = { UE4CodeGen_Private::EPropertyClass::Float, "NewAngularStiffness", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PhysicsHandleComponent_eventSetAngularStiffness_Parms, NewAngularStiffness), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewAngularStiffness,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Physics|Components|PhysicsHandle" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsHandleComponent.h" },
				{ "ToolTip", "Set angular stiffness" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsHandleComponent, "SetAngularStiffness", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020403, sizeof(PhysicsHandleComponent_eventSetAngularStiffness_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPhysicsHandleComponent_SetInterpolationSpeed()
	{
		struct PhysicsHandleComponent_eventSetInterpolationSpeed_Parms
		{
			float NewInterpolationSpeed;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewInterpolationSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "NewInterpolationSpeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PhysicsHandleComponent_eventSetInterpolationSpeed_Parms, NewInterpolationSpeed), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewInterpolationSpeed,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Physics|Components|PhysicsHandle" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsHandleComponent.h" },
				{ "ToolTip", "Set interpolation speed" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsHandleComponent, "SetInterpolationSpeed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020403, sizeof(PhysicsHandleComponent_eventSetInterpolationSpeed_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPhysicsHandleComponent_SetLinearDamping()
	{
		struct PhysicsHandleComponent_eventSetLinearDamping_Parms
		{
			float NewLinearDamping;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewLinearDamping = { UE4CodeGen_Private::EPropertyClass::Float, "NewLinearDamping", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PhysicsHandleComponent_eventSetLinearDamping_Parms, NewLinearDamping), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewLinearDamping,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Physics|Components|PhysicsHandle" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsHandleComponent.h" },
				{ "ToolTip", "Set linear damping" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsHandleComponent, "SetLinearDamping", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020403, sizeof(PhysicsHandleComponent_eventSetLinearDamping_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPhysicsHandleComponent_SetLinearStiffness()
	{
		struct PhysicsHandleComponent_eventSetLinearStiffness_Parms
		{
			float NewLinearStiffness;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewLinearStiffness = { UE4CodeGen_Private::EPropertyClass::Float, "NewLinearStiffness", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PhysicsHandleComponent_eventSetLinearStiffness_Parms, NewLinearStiffness), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewLinearStiffness,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Physics|Components|PhysicsHandle" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsHandleComponent.h" },
				{ "ToolTip", "Set linear stiffness" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsHandleComponent, "SetLinearStiffness", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020403, sizeof(PhysicsHandleComponent_eventSetLinearStiffness_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetLocation()
	{
		struct PhysicsHandleComponent_eventSetTargetLocation_Parms
		{
			FVector NewLocation;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "NewLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PhysicsHandleComponent_eventSetTargetLocation_Parms, NewLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewLocation,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Physics|Components|PhysicsHandle" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsHandleComponent.h" },
				{ "ToolTip", "Set the target location" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsHandleComponent, "SetTargetLocation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820403, sizeof(PhysicsHandleComponent_eventSetTargetLocation_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetLocationAndRotation()
	{
		struct PhysicsHandleComponent_eventSetTargetLocationAndRotation_Parms
		{
			FVector NewLocation;
			FRotator NewRotation;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "NewRotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PhysicsHandleComponent_eventSetTargetLocationAndRotation_Parms, NewRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "NewLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PhysicsHandleComponent_eventSetTargetLocationAndRotation_Parms, NewLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewRotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewLocation,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Physics|Components|PhysicsHandle" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsHandleComponent.h" },
				{ "ToolTip", "Set target location and rotation" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsHandleComponent, "SetTargetLocationAndRotation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820403, sizeof(PhysicsHandleComponent_eventSetTargetLocationAndRotation_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetRotation()
	{
		struct PhysicsHandleComponent_eventSetTargetRotation_Parms
		{
			FRotator NewRotation;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "NewRotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PhysicsHandleComponent_eventSetTargetRotation_Parms, NewRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewRotation,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Physics|Components|PhysicsHandle" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsHandleComponent.h" },
				{ "ToolTip", "Set the target rotation" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsHandleComponent, "SetTargetRotation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820403, sizeof(PhysicsHandleComponent_eventSetTargetRotation_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPhysicsHandleComponent_NoRegister()
	{
		return UPhysicsHandleComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UPhysicsHandleComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UActorComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UPhysicsHandleComponent_GetGrabbedComponent, "GetGrabbedComponent" }, // 2337607984
				{ &Z_Construct_UFunction_UPhysicsHandleComponent_GetTargetLocationAndRotation, "GetTargetLocationAndRotation" }, // 452613600
				{ &Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponent, "GrabComponent" }, // 1424881275
				{ &Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocation, "GrabComponentAtLocation" }, // 718247955
				{ &Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocationWithRotation, "GrabComponentAtLocationWithRotation" }, // 3564581434
				{ &Z_Construct_UFunction_UPhysicsHandleComponent_ReleaseComponent, "ReleaseComponent" }, // 398713483
				{ &Z_Construct_UFunction_UPhysicsHandleComponent_SetAngularDamping, "SetAngularDamping" }, // 738398865
				{ &Z_Construct_UFunction_UPhysicsHandleComponent_SetAngularStiffness, "SetAngularStiffness" }, // 3004184273
				{ &Z_Construct_UFunction_UPhysicsHandleComponent_SetInterpolationSpeed, "SetInterpolationSpeed" }, // 326616426
				{ &Z_Construct_UFunction_UPhysicsHandleComponent_SetLinearDamping, "SetLinearDamping" }, // 1935317819
				{ &Z_Construct_UFunction_UPhysicsHandleComponent_SetLinearStiffness, "SetLinearStiffness" }, // 517693516
				{ &Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetLocation, "SetTargetLocation" }, // 1365443954
				{ &Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetLocationAndRotation, "SetTargetLocationAndRotation" }, // 1880137619
				{ &Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetRotation, "SetTargetRotation" }, // 4083707155
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Physics" },
				{ "HideCategories", "Object" },
				{ "IncludePath", "PhysicsEngine/PhysicsHandleComponent.h" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsHandleComponent.h" },
				{ "ToolTip", "Utility object for moving physics objects around." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpolationSpeed_MetaData[] = {
				{ "Category", "PhysicsHandle" },
				{ "EditCondition", "bInterpolateTarget" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsHandleComponent.h" },
				{ "ToolTip", "How quickly we interpolate the physics target transform" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InterpolationSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "InterpolationSpeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UPhysicsHandleComponent, InterpolationSpeed), METADATA_PARAMS(NewProp_InterpolationSpeed_MetaData, ARRAY_COUNT(NewProp_InterpolationSpeed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngularStiffness_MetaData[] = {
				{ "Category", "PhysicsHandle" },
				{ "EditCondition", "bSoftConstraint" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsHandleComponent.h" },
				{ "ToolTip", "Angular stiffness of the handle spring" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AngularStiffness = { UE4CodeGen_Private::EPropertyClass::Float, "AngularStiffness", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UPhysicsHandleComponent, AngularStiffness), METADATA_PARAMS(NewProp_AngularStiffness_MetaData, ARRAY_COUNT(NewProp_AngularStiffness_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngularDamping_MetaData[] = {
				{ "Category", "PhysicsHandle" },
				{ "EditCondition", "bSoftConstraint" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsHandleComponent.h" },
				{ "ToolTip", "Angular stiffness of the handle spring" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AngularDamping = { UE4CodeGen_Private::EPropertyClass::Float, "AngularDamping", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UPhysicsHandleComponent, AngularDamping), METADATA_PARAMS(NewProp_AngularDamping_MetaData, ARRAY_COUNT(NewProp_AngularDamping_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinearStiffness_MetaData[] = {
				{ "Category", "PhysicsHandle" },
				{ "EditCondition", "bSoftConstraint" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsHandleComponent.h" },
				{ "ToolTip", "Linear stiffness of the handle spring" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LinearStiffness = { UE4CodeGen_Private::EPropertyClass::Float, "LinearStiffness", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UPhysicsHandleComponent, LinearStiffness), METADATA_PARAMS(NewProp_LinearStiffness_MetaData, ARRAY_COUNT(NewProp_LinearStiffness_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinearDamping_MetaData[] = {
				{ "Category", "PhysicsHandle" },
				{ "EditCondition", "bSoftConstraint" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsHandleComponent.h" },
				{ "ToolTip", "Linear damping of the handle spring." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LinearDamping = { UE4CodeGen_Private::EPropertyClass::Float, "LinearDamping", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UPhysicsHandleComponent, LinearDamping), METADATA_PARAMS(NewProp_LinearDamping_MetaData, ARRAY_COUNT(NewProp_LinearDamping_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInterpolateTarget_MetaData[] = {
				{ "Category", "PhysicsHandle" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsHandleComponent.h" },
			};
#endif
			auto NewProp_bInterpolateTarget_SetBit = [](void* Obj){ ((UPhysicsHandleComponent*)Obj)->bInterpolateTarget = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInterpolateTarget = { UE4CodeGen_Private::EPropertyClass::Bool, "bInterpolateTarget", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UPhysicsHandleComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bInterpolateTarget_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bInterpolateTarget_MetaData, ARRAY_COUNT(NewProp_bInterpolateTarget_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSoftLinearConstraint_MetaData[] = {
				{ "Category", "PhysicsHandle" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsHandleComponent.h" },
			};
#endif
			auto NewProp_bSoftLinearConstraint_SetBit = [](void* Obj){ ((UPhysicsHandleComponent*)Obj)->bSoftLinearConstraint = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSoftLinearConstraint = { UE4CodeGen_Private::EPropertyClass::Bool, "bSoftLinearConstraint", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UPhysicsHandleComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSoftLinearConstraint_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSoftLinearConstraint_MetaData, ARRAY_COUNT(NewProp_bSoftLinearConstraint_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSoftAngularConstraint_MetaData[] = {
				{ "Category", "PhysicsHandle" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsHandleComponent.h" },
			};
#endif
			auto NewProp_bSoftAngularConstraint_SetBit = [](void* Obj){ ((UPhysicsHandleComponent*)Obj)->bSoftAngularConstraint = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSoftAngularConstraint = { UE4CodeGen_Private::EPropertyClass::Bool, "bSoftAngularConstraint", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UPhysicsHandleComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSoftAngularConstraint_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSoftAngularConstraint_MetaData, ARRAY_COUNT(NewProp_bSoftAngularConstraint_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrabbedComponent_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsHandleComponent.h" },
				{ "ToolTip", "Component we are currently holding" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GrabbedComponent = { UE4CodeGen_Private::EPropertyClass::Object, "GrabbedComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080008, 1, nullptr, STRUCT_OFFSET(UPhysicsHandleComponent, GrabbedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_GrabbedComponent_MetaData, ARRAY_COUNT(NewProp_GrabbedComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InterpolationSpeed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AngularStiffness,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AngularDamping,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LinearStiffness,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LinearDamping,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bInterpolateTarget,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSoftLinearConstraint,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSoftAngularConstraint,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GrabbedComponent,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UPhysicsHandleComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UPhysicsHandleComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00A82080u,
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
	IMPLEMENT_CLASS(UPhysicsHandleComponent, 1623006025);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPhysicsHandleComponent(Z_Construct_UClass_UPhysicsHandleComponent, &UPhysicsHandleComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UPhysicsHandleComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPhysicsHandleComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
