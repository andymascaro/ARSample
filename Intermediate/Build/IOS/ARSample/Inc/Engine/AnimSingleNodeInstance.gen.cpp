// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Animation/AnimSingleNodeInstance.h"
#include "Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimSingleNodeInstance() {}
// Cross Module References
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_PostEvaluateAnimEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSingleNodeInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSingleNodeInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	ENGINE_API UFunction* Z_Construct_UFunction_UAnimSingleNodeInstance_GetAnimationAsset();
	ENGINE_API UClass* Z_Construct_UClass_UAnimationAsset_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_UAnimSingleNodeInstance_GetLength();
	ENGINE_API UFunction* Z_Construct_UFunction_UAnimSingleNodeInstance_PlayAnim();
	ENGINE_API UFunction* Z_Construct_UFunction_UAnimSingleNodeInstance_SetAnimationAsset();
	ENGINE_API UFunction* Z_Construct_UFunction_UAnimSingleNodeInstance_SetBlendSpaceInput();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UFunction* Z_Construct_UFunction_UAnimSingleNodeInstance_SetLooping();
	ENGINE_API UFunction* Z_Construct_UFunction_UAnimSingleNodeInstance_SetPlaying();
	ENGINE_API UFunction* Z_Construct_UFunction_UAnimSingleNodeInstance_SetPlayRate();
	ENGINE_API UFunction* Z_Construct_UFunction_UAnimSingleNodeInstance_SetPosition();
	ENGINE_API UFunction* Z_Construct_UFunction_UAnimSingleNodeInstance_SetPositionWithPreviousTime();
	ENGINE_API UFunction* Z_Construct_UFunction_UAnimSingleNodeInstance_SetPreviewCurveOverride();
	ENGINE_API UFunction* Z_Construct_UFunction_UAnimSingleNodeInstance_SetReverse();
	ENGINE_API UFunction* Z_Construct_UFunction_UAnimSingleNodeInstance_StopAnim();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_Engine_PostEvaluateAnimEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimSingleNodeInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, "PostEvaluateAnimEvent__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00120000, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	void UAnimSingleNodeInstance::StaticRegisterNativesUAnimSingleNodeInstance()
	{
		UClass* Class = UAnimSingleNodeInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAnimationAsset", (Native)&UAnimSingleNodeInstance::execGetAnimationAsset },
			{ "GetLength", (Native)&UAnimSingleNodeInstance::execGetLength },
			{ "PlayAnim", (Native)&UAnimSingleNodeInstance::execPlayAnim },
			{ "SetAnimationAsset", (Native)&UAnimSingleNodeInstance::execSetAnimationAsset },
			{ "SetBlendSpaceInput", (Native)&UAnimSingleNodeInstance::execSetBlendSpaceInput },
			{ "SetLooping", (Native)&UAnimSingleNodeInstance::execSetLooping },
			{ "SetPlaying", (Native)&UAnimSingleNodeInstance::execSetPlaying },
			{ "SetPlayRate", (Native)&UAnimSingleNodeInstance::execSetPlayRate },
			{ "SetPosition", (Native)&UAnimSingleNodeInstance::execSetPosition },
			{ "SetPositionWithPreviousTime", (Native)&UAnimSingleNodeInstance::execSetPositionWithPreviousTime },
			{ "SetPreviewCurveOverride", (Native)&UAnimSingleNodeInstance::execSetPreviewCurveOverride },
			{ "SetReverse", (Native)&UAnimSingleNodeInstance::execSetReverse },
			{ "StopAnim", (Native)&UAnimSingleNodeInstance::execStopAnim },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UAnimSingleNodeInstance_GetAnimationAsset()
	{
		struct AnimSingleNodeInstance_eventGetAnimationAsset_Parms
		{
			UAnimationAsset* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AnimSingleNodeInstance_eventGetAnimationAsset_Parms, ReturnValue), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Animation" },
				{ "ModuleRelativePath", "Classes/Animation/AnimSingleNodeInstance.h" },
				{ "ToolTip", "Get the currently used asset" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimSingleNodeInstance, "GetAnimationAsset", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020400, sizeof(AnimSingleNodeInstance_eventGetAnimationAsset_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAnimSingleNodeInstance_GetLength()
	{
		struct AnimSingleNodeInstance_eventGetLength_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AnimSingleNodeInstance_eventGetLength_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Animation" },
				{ "ModuleRelativePath", "Classes/Animation/AnimSingleNodeInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimSingleNodeInstance, "GetLength", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(AnimSingleNodeInstance_eventGetLength_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAnimSingleNodeInstance_PlayAnim()
	{
		struct AnimSingleNodeInstance_eventPlayAnim_Parms
		{
			bool bIsLooping;
			float InPlayRate;
			float InStartPosition;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InStartPosition = { UE4CodeGen_Private::EPropertyClass::Float, "InStartPosition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AnimSingleNodeInstance_eventPlayAnim_Parms, InStartPosition), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InPlayRate = { UE4CodeGen_Private::EPropertyClass::Float, "InPlayRate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AnimSingleNodeInstance_eventPlayAnim_Parms, InPlayRate), METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bIsLooping_SetBit = [](void* Obj){ ((AnimSingleNodeInstance_eventPlayAnim_Parms*)Obj)->bIsLooping = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLooping = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsLooping", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AnimSingleNodeInstance_eventPlayAnim_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsLooping_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InStartPosition,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InPlayRate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsLooping,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Animation" },
				{ "CPP_Default_bIsLooping", "false" },
				{ "CPP_Default_InPlayRate", "1.000000" },
				{ "CPP_Default_InStartPosition", "0.000000" },
				{ "ModuleRelativePath", "Classes/Animation/AnimSingleNodeInstance.h" },
				{ "ToolTip", "For AnimSequence specific *" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimSingleNodeInstance, "PlayAnim", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(AnimSingleNodeInstance_eventPlayAnim_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAnimSingleNodeInstance_SetAnimationAsset()
	{
		struct AnimSingleNodeInstance_eventSetAnimationAsset_Parms
		{
			UAnimationAsset* NewAsset;
			bool bIsLooping;
			float InPlayRate;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InPlayRate = { UE4CodeGen_Private::EPropertyClass::Float, "InPlayRate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AnimSingleNodeInstance_eventSetAnimationAsset_Parms, InPlayRate), METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bIsLooping_SetBit = [](void* Obj){ ((AnimSingleNodeInstance_eventSetAnimationAsset_Parms*)Obj)->bIsLooping = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLooping = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsLooping", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AnimSingleNodeInstance_eventSetAnimationAsset_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsLooping_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewAsset = { UE4CodeGen_Private::EPropertyClass::Object, "NewAsset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AnimSingleNodeInstance_eventSetAnimationAsset_Parms, NewAsset), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InPlayRate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsLooping,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewAsset,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Animation" },
				{ "CPP_Default_bIsLooping", "true" },
				{ "CPP_Default_InPlayRate", "1.000000" },
				{ "ModuleRelativePath", "Classes/Animation/AnimSingleNodeInstance.h" },
				{ "ToolTip", "Set New Asset - calls InitializeAnimation, for now we need MeshComponent *" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimSingleNodeInstance, "SetAnimationAsset", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(AnimSingleNodeInstance_eventSetAnimationAsset_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAnimSingleNodeInstance_SetBlendSpaceInput()
	{
		struct AnimSingleNodeInstance_eventSetBlendSpaceInput_Parms
		{
			FVector InBlendInput;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InBlendInput_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InBlendInput = { UE4CodeGen_Private::EPropertyClass::Struct, "InBlendInput", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AnimSingleNodeInstance_eventSetBlendSpaceInput_Parms, InBlendInput), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_InBlendInput_MetaData, ARRAY_COUNT(NewProp_InBlendInput_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InBlendInput,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Animation" },
				{ "ModuleRelativePath", "Classes/Animation/AnimSingleNodeInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimSingleNodeInstance, "SetBlendSpaceInput", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C20401, sizeof(AnimSingleNodeInstance_eventSetBlendSpaceInput_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAnimSingleNodeInstance_SetLooping()
	{
		struct AnimSingleNodeInstance_eventSetLooping_Parms
		{
			bool bIsLooping;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bIsLooping_SetBit = [](void* Obj){ ((AnimSingleNodeInstance_eventSetLooping_Parms*)Obj)->bIsLooping = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLooping = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsLooping", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AnimSingleNodeInstance_eventSetLooping_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsLooping_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsLooping,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Animation" },
				{ "ModuleRelativePath", "Classes/Animation/AnimSingleNodeInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimSingleNodeInstance, "SetLooping", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(AnimSingleNodeInstance_eventSetLooping_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAnimSingleNodeInstance_SetPlaying()
	{
		struct AnimSingleNodeInstance_eventSetPlaying_Parms
		{
			bool bIsPlaying;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bIsPlaying_SetBit = [](void* Obj){ ((AnimSingleNodeInstance_eventSetPlaying_Parms*)Obj)->bIsPlaying = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPlaying = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsPlaying", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AnimSingleNodeInstance_eventSetPlaying_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsPlaying_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsPlaying,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Animation" },
				{ "ModuleRelativePath", "Classes/Animation/AnimSingleNodeInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimSingleNodeInstance, "SetPlaying", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(AnimSingleNodeInstance_eventSetPlaying_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAnimSingleNodeInstance_SetPlayRate()
	{
		struct AnimSingleNodeInstance_eventSetPlayRate_Parms
		{
			float InPlayRate;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InPlayRate = { UE4CodeGen_Private::EPropertyClass::Float, "InPlayRate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AnimSingleNodeInstance_eventSetPlayRate_Parms, InPlayRate), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InPlayRate,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Animation" },
				{ "ModuleRelativePath", "Classes/Animation/AnimSingleNodeInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimSingleNodeInstance, "SetPlayRate", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(AnimSingleNodeInstance_eventSetPlayRate_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAnimSingleNodeInstance_SetPosition()
	{
		struct AnimSingleNodeInstance_eventSetPosition_Parms
		{
			float InPosition;
			bool bFireNotifies;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bFireNotifies_SetBit = [](void* Obj){ ((AnimSingleNodeInstance_eventSetPosition_Parms*)Obj)->bFireNotifies = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFireNotifies = { UE4CodeGen_Private::EPropertyClass::Bool, "bFireNotifies", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AnimSingleNodeInstance_eventSetPosition_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bFireNotifies_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InPosition = { UE4CodeGen_Private::EPropertyClass::Float, "InPosition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AnimSingleNodeInstance_eventSetPosition_Parms, InPosition), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bFireNotifies,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InPosition,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Animation" },
				{ "CPP_Default_bFireNotifies", "true" },
				{ "ModuleRelativePath", "Classes/Animation/AnimSingleNodeInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimSingleNodeInstance, "SetPosition", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(AnimSingleNodeInstance_eventSetPosition_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAnimSingleNodeInstance_SetPositionWithPreviousTime()
	{
		struct AnimSingleNodeInstance_eventSetPositionWithPreviousTime_Parms
		{
			float InPosition;
			float InPreviousTime;
			bool bFireNotifies;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bFireNotifies_SetBit = [](void* Obj){ ((AnimSingleNodeInstance_eventSetPositionWithPreviousTime_Parms*)Obj)->bFireNotifies = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFireNotifies = { UE4CodeGen_Private::EPropertyClass::Bool, "bFireNotifies", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AnimSingleNodeInstance_eventSetPositionWithPreviousTime_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bFireNotifies_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InPreviousTime = { UE4CodeGen_Private::EPropertyClass::Float, "InPreviousTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AnimSingleNodeInstance_eventSetPositionWithPreviousTime_Parms, InPreviousTime), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InPosition = { UE4CodeGen_Private::EPropertyClass::Float, "InPosition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AnimSingleNodeInstance_eventSetPositionWithPreviousTime_Parms, InPosition), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bFireNotifies,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InPreviousTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InPosition,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Animation" },
				{ "CPP_Default_bFireNotifies", "true" },
				{ "ModuleRelativePath", "Classes/Animation/AnimSingleNodeInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimSingleNodeInstance, "SetPositionWithPreviousTime", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(AnimSingleNodeInstance_eventSetPositionWithPreviousTime_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAnimSingleNodeInstance_SetPreviewCurveOverride()
	{
		struct AnimSingleNodeInstance_eventSetPreviewCurveOverride_Parms
		{
			FName PoseName;
			float Value;
			bool bRemoveIfZero;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bRemoveIfZero_SetBit = [](void* Obj){ ((AnimSingleNodeInstance_eventSetPreviewCurveOverride_Parms*)Obj)->bRemoveIfZero = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRemoveIfZero = { UE4CodeGen_Private::EPropertyClass::Bool, "bRemoveIfZero", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AnimSingleNodeInstance_eventSetPreviewCurveOverride_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bRemoveIfZero_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Float, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AnimSingleNodeInstance_eventSetPreviewCurveOverride_Parms, Value), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PoseName_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_PoseName = { UE4CodeGen_Private::EPropertyClass::Name, "PoseName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AnimSingleNodeInstance_eventSetPreviewCurveOverride_Parms, PoseName), METADATA_PARAMS(NewProp_PoseName_MetaData, ARRAY_COUNT(NewProp_PoseName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bRemoveIfZero,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PoseName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Animation" },
				{ "ModuleRelativePath", "Classes/Animation/AnimSingleNodeInstance.h" },
				{ "ToolTip", "Set pose value" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimSingleNodeInstance, "SetPreviewCurveOverride", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(AnimSingleNodeInstance_eventSetPreviewCurveOverride_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAnimSingleNodeInstance_SetReverse()
	{
		struct AnimSingleNodeInstance_eventSetReverse_Parms
		{
			bool bInReverse;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bInReverse_SetBit = [](void* Obj){ ((AnimSingleNodeInstance_eventSetReverse_Parms*)Obj)->bInReverse = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInReverse = { UE4CodeGen_Private::EPropertyClass::Bool, "bInReverse", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AnimSingleNodeInstance_eventSetReverse_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bInReverse_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bInReverse,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Animation" },
				{ "ModuleRelativePath", "Classes/Animation/AnimSingleNodeInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimSingleNodeInstance, "SetReverse", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(AnimSingleNodeInstance_eventSetReverse_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAnimSingleNodeInstance_StopAnim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Animation" },
				{ "ModuleRelativePath", "Classes/Animation/AnimSingleNodeInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimSingleNodeInstance, "StopAnim", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAnimSingleNodeInstance_NoRegister()
	{
		return UAnimSingleNodeInstance::StaticClass();
	}
	UClass* Z_Construct_UClass_UAnimSingleNodeInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UAnimInstance,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UAnimSingleNodeInstance_GetAnimationAsset, "GetAnimationAsset" }, // 2546244829
				{ &Z_Construct_UFunction_UAnimSingleNodeInstance_GetLength, "GetLength" }, // 1166169476
				{ &Z_Construct_UFunction_UAnimSingleNodeInstance_PlayAnim, "PlayAnim" }, // 1192343219
				{ &Z_Construct_UFunction_UAnimSingleNodeInstance_SetAnimationAsset, "SetAnimationAsset" }, // 2535046418
				{ &Z_Construct_UFunction_UAnimSingleNodeInstance_SetBlendSpaceInput, "SetBlendSpaceInput" }, // 2968904077
				{ &Z_Construct_UFunction_UAnimSingleNodeInstance_SetLooping, "SetLooping" }, // 4185318803
				{ &Z_Construct_UFunction_UAnimSingleNodeInstance_SetPlaying, "SetPlaying" }, // 1211288716
				{ &Z_Construct_UFunction_UAnimSingleNodeInstance_SetPlayRate, "SetPlayRate" }, // 11015980
				{ &Z_Construct_UFunction_UAnimSingleNodeInstance_SetPosition, "SetPosition" }, // 3803074853
				{ &Z_Construct_UFunction_UAnimSingleNodeInstance_SetPositionWithPreviousTime, "SetPositionWithPreviousTime" }, // 2782650197
				{ &Z_Construct_UFunction_UAnimSingleNodeInstance_SetPreviewCurveOverride, "SetPreviewCurveOverride" }, // 1573349842
				{ &Z_Construct_UFunction_UAnimSingleNodeInstance_SetReverse, "SetReverse" }, // 2343750796
				{ &Z_Construct_UFunction_UAnimSingleNodeInstance_StopAnim, "StopAnim" }, // 1151043435
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "AnimInstance" },
				{ "IncludePath", "Animation/AnimSingleNodeInstance.h" },
				{ "IsBlueprintBase", "false" },
				{ "ModuleRelativePath", "Classes/Animation/AnimSingleNodeInstance.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostEvaluateAnimEvent_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimSingleNodeInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_PostEvaluateAnimEvent = { UE4CodeGen_Private::EPropertyClass::Delegate, "PostEvaluateAnimEvent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000082000, 1, nullptr, STRUCT_OFFSET(UAnimSingleNodeInstance, PostEvaluateAnimEvent), Z_Construct_UDelegateFunction_Engine_PostEvaluateAnimEvent__DelegateSignature, METADATA_PARAMS(NewProp_PostEvaluateAnimEvent_MetaData, ARRAY_COUNT(NewProp_PostEvaluateAnimEvent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentAsset_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimSingleNodeInstance.h" },
				{ "ToolTip", "Current Asset being played *" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentAsset = { UE4CodeGen_Private::EPropertyClass::Object, "CurrentAsset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, STRUCT_OFFSET(UAnimSingleNodeInstance, CurrentAsset), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(NewProp_CurrentAsset_MetaData, ARRAY_COUNT(NewProp_CurrentAsset_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PostEvaluateAnimEvent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurrentAsset,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAnimSingleNodeInstance>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAnimSingleNodeInstance::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900088u,
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
	IMPLEMENT_CLASS(UAnimSingleNodeInstance, 1357959119);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimSingleNodeInstance(Z_Construct_UClass_UAnimSingleNodeInstance, &UAnimSingleNodeInstance::StaticClass, TEXT("/Script/Engine"), TEXT("UAnimSingleNodeInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimSingleNodeInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
