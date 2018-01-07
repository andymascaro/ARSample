// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Components/ForceFeedbackComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeForceFeedbackComponent() {}
// Cross Module References
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnForceFeedbackFinished__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UForceFeedbackComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UForceFeedbackComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	ENGINE_API UFunction* Z_Construct_UFunction_UForceFeedbackComponent_AdjustAttenuation();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FForceFeedbackAttenuationSettings();
	ENGINE_API UFunction* Z_Construct_UFunction_UForceFeedbackComponent_BP_GetAttenuationSettingsToApply();
	ENGINE_API UFunction* Z_Construct_UFunction_UForceFeedbackComponent_Play();
	ENGINE_API UFunction* Z_Construct_UFunction_UForceFeedbackComponent_SetForceFeedbackEffect();
	ENGINE_API UClass* Z_Construct_UClass_UForceFeedbackEffect_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_UForceFeedbackComponent_SetIntensityMultiplier();
	ENGINE_API UFunction* Z_Construct_UFunction_UForceFeedbackComponent_Stop();
	ENGINE_API UClass* Z_Construct_UClass_UForceFeedbackAttenuation_NoRegister();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_Engine_OnForceFeedbackFinished__DelegateSignature()
	{
		struct _Script_Engine_eventOnForceFeedbackFinished_Parms
		{
			UForceFeedbackComponent* ForceFeedbackComponent;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForceFeedbackComponent_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ForceFeedbackComponent = { UE4CodeGen_Private::EPropertyClass::Object, "ForceFeedbackComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(_Script_Engine_eventOnForceFeedbackFinished_Parms, ForceFeedbackComponent), Z_Construct_UClass_UForceFeedbackComponent_NoRegister, METADATA_PARAMS(NewProp_ForceFeedbackComponent_MetaData, ARRAY_COUNT(NewProp_ForceFeedbackComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ForceFeedbackComponent,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Components/ForceFeedbackComponent.h" },
				{ "ToolTip", "called when we finish playing forcefeedback effect, either because it played to completion or because a Stop() call turned it off early" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, "OnForceFeedbackFinished__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_Engine_eventOnForceFeedbackFinished_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	void UForceFeedbackComponent::StaticRegisterNativesUForceFeedbackComponent()
	{
		UClass* Class = UForceFeedbackComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AdjustAttenuation", (Native)&UForceFeedbackComponent::execAdjustAttenuation },
			{ "BP_GetAttenuationSettingsToApply", (Native)&UForceFeedbackComponent::execBP_GetAttenuationSettingsToApply },
			{ "Play", (Native)&UForceFeedbackComponent::execPlay },
			{ "SetForceFeedbackEffect", (Native)&UForceFeedbackComponent::execSetForceFeedbackEffect },
			{ "SetIntensityMultiplier", (Native)&UForceFeedbackComponent::execSetIntensityMultiplier },
			{ "Stop", (Native)&UForceFeedbackComponent::execStop },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UForceFeedbackComponent_AdjustAttenuation()
	{
		struct ForceFeedbackComponent_eventAdjustAttenuation_Parms
		{
			FForceFeedbackAttenuationSettings InAttenuationSettings;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InAttenuationSettings_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InAttenuationSettings = { UE4CodeGen_Private::EPropertyClass::Struct, "InAttenuationSettings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(ForceFeedbackComponent_eventAdjustAttenuation_Parms, InAttenuationSettings), Z_Construct_UScriptStruct_FForceFeedbackAttenuationSettings, METADATA_PARAMS(NewProp_InAttenuationSettings_MetaData, ARRAY_COUNT(NewProp_InAttenuationSettings_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InAttenuationSettings,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "ForceFeedback" },
				{ "ModuleRelativePath", "Classes/Components/ForceFeedbackComponent.h" },
				{ "ToolTip", "Modify the attenuation settings of the component" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UForceFeedbackComponent, "AdjustAttenuation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(ForceFeedbackComponent_eventAdjustAttenuation_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UForceFeedbackComponent_BP_GetAttenuationSettingsToApply()
	{
		struct ForceFeedbackComponent_eventBP_GetAttenuationSettingsToApply_Parms
		{
			FForceFeedbackAttenuationSettings OutAttenuationSettings;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((ForceFeedbackComponent_eventBP_GetAttenuationSettingsToApply_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ForceFeedbackComponent_eventBP_GetAttenuationSettingsToApply_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutAttenuationSettings = { UE4CodeGen_Private::EPropertyClass::Struct, "OutAttenuationSettings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(ForceFeedbackComponent_eventBP_GetAttenuationSettingsToApply_Parms, OutAttenuationSettings), Z_Construct_UScriptStruct_FForceFeedbackAttenuationSettings, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutAttenuationSettings,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "ForceFeedback" },
				{ "DisplayName", "Get Attenuation Settings To Apply" },
				{ "ModuleRelativePath", "Classes/Components/ForceFeedbackComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UForceFeedbackComponent, "BP_GetAttenuationSettingsToApply", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54420401, sizeof(ForceFeedbackComponent_eventBP_GetAttenuationSettingsToApply_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UForceFeedbackComponent_Play()
	{
		struct ForceFeedbackComponent_eventPlay_Parms
		{
			float StartTime;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartTime = { UE4CodeGen_Private::EPropertyClass::Float, "StartTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ForceFeedbackComponent_eventPlay_Parms, StartTime), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StartTime,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "ForceFeedback" },
				{ "CPP_Default_StartTime", "0.000000" },
				{ "ModuleRelativePath", "Classes/Components/ForceFeedbackComponent.h" },
				{ "ToolTip", "Start a feedback effect playing" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UForceFeedbackComponent, "Play", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(ForceFeedbackComponent_eventPlay_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UForceFeedbackComponent_SetForceFeedbackEffect()
	{
		struct ForceFeedbackComponent_eventSetForceFeedbackEffect_Parms
		{
			UForceFeedbackEffect* NewForceFeedbackEffect;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewForceFeedbackEffect = { UE4CodeGen_Private::EPropertyClass::Object, "NewForceFeedbackEffect", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ForceFeedbackComponent_eventSetForceFeedbackEffect_Parms, NewForceFeedbackEffect), Z_Construct_UClass_UForceFeedbackEffect_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewForceFeedbackEffect,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "ForceFeedback" },
				{ "ModuleRelativePath", "Classes/Components/ForceFeedbackComponent.h" },
				{ "ToolTip", "Set what force feedback effect is played by this component" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UForceFeedbackComponent, "SetForceFeedbackEffect", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ForceFeedbackComponent_eventSetForceFeedbackEffect_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UForceFeedbackComponent_SetIntensityMultiplier()
	{
		struct ForceFeedbackComponent_eventSetIntensityMultiplier_Parms
		{
			float NewIntensityMultiplier;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewIntensityMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "NewIntensityMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ForceFeedbackComponent_eventSetIntensityMultiplier_Parms, NewIntensityMultiplier), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewIntensityMultiplier,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "ForceFeedback" },
				{ "ModuleRelativePath", "Classes/Components/ForceFeedbackComponent.h" },
				{ "ToolTip", "Set a new intensity multiplier" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UForceFeedbackComponent, "SetIntensityMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ForceFeedbackComponent_eventSetIntensityMultiplier_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UForceFeedbackComponent_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "ForceFeedback" },
				{ "ModuleRelativePath", "Classes/Components/ForceFeedbackComponent.h" },
				{ "ToolTip", "Stop playing the feedback effect" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UForceFeedbackComponent, "Stop", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UForceFeedbackComponent_NoRegister()
	{
		return UForceFeedbackComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UForceFeedbackComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_USceneComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UForceFeedbackComponent_AdjustAttenuation, "AdjustAttenuation" }, // 1461295387
				{ &Z_Construct_UFunction_UForceFeedbackComponent_BP_GetAttenuationSettingsToApply, "BP_GetAttenuationSettingsToApply" }, // 3993217808
				{ &Z_Construct_UFunction_UForceFeedbackComponent_Play, "Play" }, // 61581907
				{ &Z_Construct_UFunction_UForceFeedbackComponent_SetForceFeedbackEffect, "SetForceFeedbackEffect" }, // 4016016997
				{ &Z_Construct_UFunction_UForceFeedbackComponent_SetIntensityMultiplier, "SetIntensityMultiplier" }, // 942320357
				{ &Z_Construct_UFunction_UForceFeedbackComponent_Stop, "Stop" }, // 2329973661
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Utility" },
				{ "HideCategories", "Object ActorComponent Physics Rendering Mobility LOD PhysicsVolume" },
				{ "IncludePath", "Components/ForceFeedbackComponent.h" },
				{ "ModuleRelativePath", "Classes/Components/ForceFeedbackComponent.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
				{ "ToolTip", "ForceFeedbackComponent allows placing a rumble effect in to the world and having it apply to player characters who come near it" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnForceFeedbackFinished_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/ForceFeedbackComponent.h" },
				{ "ToolTip", "called when we finish playing audio, either because it played to completion or because a Stop() call turned it off early" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnForceFeedbackFinished = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnForceFeedbackFinished", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UForceFeedbackComponent, OnForceFeedbackFinished), Z_Construct_UDelegateFunction_Engine_OnForceFeedbackFinished__DelegateSignature, METADATA_PARAMS(NewProp_OnForceFeedbackFinished_MetaData, ARRAY_COUNT(NewProp_OnForceFeedbackFinished_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttenuationOverrides_MetaData[] = {
				{ "Category", "Attenuation" },
				{ "EditCondition", "bOverrideAttenuation" },
				{ "ModuleRelativePath", "Classes/Components/ForceFeedbackComponent.h" },
				{ "ToolTip", "If bOverrideSettings is true, the attenuation properties to use for effects generated by this component" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttenuationOverrides = { UE4CodeGen_Private::EPropertyClass::Struct, "AttenuationOverrides", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UForceFeedbackComponent, AttenuationOverrides), Z_Construct_UScriptStruct_FForceFeedbackAttenuationSettings, METADATA_PARAMS(NewProp_AttenuationOverrides_MetaData, ARRAY_COUNT(NewProp_AttenuationOverrides_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttenuationSettings_MetaData[] = {
				{ "Category", "Attenuation" },
				{ "EditCondition", "!bOverrideAttenuation" },
				{ "ModuleRelativePath", "Classes/Components/ForceFeedbackComponent.h" },
				{ "ToolTip", "If bOverrideSettings is false, the asset to use to determine attenuation properties for effects generated by this component" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttenuationSettings = { UE4CodeGen_Private::EPropertyClass::Object, "AttenuationSettings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UForceFeedbackComponent, AttenuationSettings), Z_Construct_UClass_UForceFeedbackAttenuation_NoRegister, METADATA_PARAMS(NewProp_AttenuationSettings_MetaData, ARRAY_COUNT(NewProp_AttenuationSettings_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IntensityMultiplier_MetaData[] = {
				{ "Category", "ForceFeedback" },
				{ "ModuleRelativePath", "Classes/Components/ForceFeedbackComponent.h" },
				{ "ToolTip", "The intensity multiplier to apply to effects generated by this component" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IntensityMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "IntensityMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UForceFeedbackComponent, IntensityMultiplier), METADATA_PARAMS(NewProp_IntensityMultiplier_MetaData, ARRAY_COUNT(NewProp_IntensityMultiplier_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideAttenuation_MetaData[] = {
				{ "Category", "Attenuation" },
				{ "ModuleRelativePath", "Classes/Components/ForceFeedbackComponent.h" },
				{ "ToolTip", "Should the Attenuation Settings asset be used (false) or should the properties set directly on the component be used for attenuation properties" },
			};
#endif
			auto NewProp_bOverrideAttenuation_SetBit = [](void* Obj){ ((UForceFeedbackComponent*)Obj)->bOverrideAttenuation = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideAttenuation = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverrideAttenuation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UForceFeedbackComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bOverrideAttenuation_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bOverrideAttenuation_MetaData, ARRAY_COUNT(NewProp_bOverrideAttenuation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnoreTimeDilation_MetaData[] = {
				{ "Category", "ForceFeedback" },
				{ "ModuleRelativePath", "Classes/Components/ForceFeedbackComponent.h" },
				{ "ToolTip", "Should the playback of the forcefeedback pattern ignore time dilation and use the app's delta time" },
			};
#endif
			auto NewProp_bIgnoreTimeDilation_SetBit = [](void* Obj){ ((UForceFeedbackComponent*)Obj)->bIgnoreTimeDilation = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreTimeDilation = { UE4CodeGen_Private::EPropertyClass::Bool, "bIgnoreTimeDilation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UForceFeedbackComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIgnoreTimeDilation_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIgnoreTimeDilation_MetaData, ARRAY_COUNT(NewProp_bIgnoreTimeDilation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLooping_MetaData[] = {
				{ "Category", "ForceFeedback" },
				{ "ModuleRelativePath", "Classes/Components/ForceFeedbackComponent.h" },
			};
#endif
			auto NewProp_bLooping_SetBit = [](void* Obj){ ((UForceFeedbackComponent*)Obj)->bLooping = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLooping = { UE4CodeGen_Private::EPropertyClass::Bool, "bLooping", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UForceFeedbackComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bLooping_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bLooping_MetaData, ARRAY_COUNT(NewProp_bLooping_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStopWhenOwnerDestroyed_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/ForceFeedbackComponent.h" },
				{ "ToolTip", "Stop effect when owner is destroyed" },
			};
#endif
			auto NewProp_bStopWhenOwnerDestroyed_SetBit = [](void* Obj){ ((UForceFeedbackComponent*)Obj)->bStopWhenOwnerDestroyed = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStopWhenOwnerDestroyed = { UE4CodeGen_Private::EPropertyClass::Bool, "bStopWhenOwnerDestroyed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UForceFeedbackComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bStopWhenOwnerDestroyed_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bStopWhenOwnerDestroyed_MetaData, ARRAY_COUNT(NewProp_bStopWhenOwnerDestroyed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoDestroy_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/ForceFeedbackComponent.h" },
				{ "ToolTip", "Auto destroy this component on completion" },
			};
#endif
			auto NewProp_bAutoDestroy_SetBit = [](void* Obj){ ((UForceFeedbackComponent*)Obj)->bAutoDestroy = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoDestroy = { UE4CodeGen_Private::EPropertyClass::Bool, "bAutoDestroy", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UForceFeedbackComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAutoDestroy_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAutoDestroy_MetaData, ARRAY_COUNT(NewProp_bAutoDestroy_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForceFeedbackEffect_MetaData[] = {
				{ "Category", "ForceFeedback" },
				{ "ModuleRelativePath", "Classes/Components/ForceFeedbackComponent.h" },
				{ "ToolTip", "The feedback effect to be played" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ForceFeedbackEffect = { UE4CodeGen_Private::EPropertyClass::Object, "ForceFeedbackEffect", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UForceFeedbackComponent, ForceFeedbackEffect), Z_Construct_UClass_UForceFeedbackEffect_NoRegister, METADATA_PARAMS(NewProp_ForceFeedbackEffect_MetaData, ARRAY_COUNT(NewProp_ForceFeedbackEffect_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnForceFeedbackFinished,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AttenuationOverrides,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AttenuationSettings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IntensityMultiplier,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bOverrideAttenuation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIgnoreTimeDilation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bLooping,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bStopWhenOwnerDestroyed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAutoDestroy,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ForceFeedbackEffect,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UForceFeedbackComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UForceFeedbackComponent::StaticClass,
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
	IMPLEMENT_CLASS(UForceFeedbackComponent, 3347180240);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UForceFeedbackComponent(Z_Construct_UClass_UForceFeedbackComponent, &UForceFeedbackComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UForceFeedbackComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UForceFeedbackComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
