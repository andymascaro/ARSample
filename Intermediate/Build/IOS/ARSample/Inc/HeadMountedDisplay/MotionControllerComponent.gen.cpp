// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/MotionControllerComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMotionControllerComponent() {}
// Cross Module References
	HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UMotionControllerComponent_NoRegister();
	HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UMotionControllerComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	UPackage* Z_Construct_UPackage__Script_HeadMountedDisplay();
	HEADMOUNTEDDISPLAY_API UFunction* Z_Construct_UFunction_UMotionControllerComponent_IsTracked();
	HEADMOUNTEDDISPLAY_API UEnum* Z_Construct_UEnum_HeadMountedDisplay_ETrackingStatus();
	INPUTCORE_API UEnum* Z_Construct_UEnum_InputCore_EControllerHand();
// End Cross Module References
	void UMotionControllerComponent::StaticRegisterNativesUMotionControllerComponent()
	{
		UClass* Class = UMotionControllerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsTracked", (Native)&UMotionControllerComponent::execIsTracked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UMotionControllerComponent_IsTracked()
	{
		struct MotionControllerComponent_eventIsTracked_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((MotionControllerComponent_eventIsTracked_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MotionControllerComponent_eventIsTracked_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MotionController" },
				{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
				{ "ToolTip", "Whether or not this component had a valid tracked device this frame" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionControllerComponent, "IsTracked", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(MotionControllerComponent_eventIsTracked_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMotionControllerComponent_NoRegister()
	{
		return UMotionControllerComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UMotionControllerComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_HeadMountedDisplay,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UMotionControllerComponent_IsTracked, "IsTracked" }, // 3661370636
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "BlueprintType", "true" },
				{ "ClassGroupNames", "MotionController" },
				{ "HideCategories", "Mobility Trigger" },
				{ "IncludePath", "MotionControllerComponent.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentTrackingStatus_MetaData[] = {
				{ "Category", "MotionController" },
				{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
				{ "ToolTip", "The tracking status for the device (e.g. full tracking, inertial tracking only, no tracking)" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurrentTrackingStatus = { UE4CodeGen_Private::EPropertyClass::Enum, "CurrentTrackingStatus", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(UMotionControllerComponent, CurrentTrackingStatus), Z_Construct_UEnum_HeadMountedDisplay_ETrackingStatus, METADATA_PARAMS(NewProp_CurrentTrackingStatus_MetaData, ARRAY_COUNT(NewProp_CurrentTrackingStatus_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrentTrackingStatus_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableLowLatencyUpdate_MetaData[] = {
				{ "Category", "MotionController" },
				{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
				{ "ToolTip", "If false, render transforms within the motion controller hierarchy will be updated a second time immediately before rendering." },
			};
#endif
			auto NewProp_bDisableLowLatencyUpdate_SetBit = [](void* Obj){ ((UMotionControllerComponent*)Obj)->bDisableLowLatencyUpdate = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableLowLatencyUpdate = { UE4CodeGen_Private::EPropertyClass::Bool, "bDisableLowLatencyUpdate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMotionControllerComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDisableLowLatencyUpdate_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDisableLowLatencyUpdate_MetaData, ARRAY_COUNT(NewProp_bDisableLowLatencyUpdate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hand_MetaData[] = {
				{ "Category", "MotionController" },
				{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
				{ "ToolTip", "Which hand this component should automatically follow" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Hand = { UE4CodeGen_Private::EPropertyClass::Enum, "Hand", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMotionControllerComponent, Hand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(NewProp_Hand_MetaData, ARRAY_COUNT(NewProp_Hand_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerIndex_MetaData[] = {
				{ "Category", "MotionController" },
				{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
				{ "ToolTip", "Which player index this motion controller should automatically follow" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex = { UE4CodeGen_Private::EPropertyClass::Int, "PlayerIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMotionControllerComponent, PlayerIndex), METADATA_PARAMS(NewProp_PlayerIndex_MetaData, ARRAY_COUNT(NewProp_PlayerIndex_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurrentTrackingStatus,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurrentTrackingStatus_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDisableLowLatencyUpdate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Hand,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Hand_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlayerIndex,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMotionControllerComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMotionControllerComponent::StaticClass,
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
	IMPLEMENT_CLASS(UMotionControllerComponent, 2476999463);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMotionControllerComponent(Z_Construct_UClass_UMotionControllerComponent, &UMotionControllerComponent::StaticClass, TEXT("/Script/HeadMountedDisplay"), TEXT("UMotionControllerComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMotionControllerComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
