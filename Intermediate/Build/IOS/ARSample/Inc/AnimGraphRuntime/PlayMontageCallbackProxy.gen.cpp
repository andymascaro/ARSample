// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/PlayMontageCallbackProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayMontageCallbackProxy() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UFunction* Z_Construct_UDelegateFunction_AnimGraphRuntime_OnMontagePlayDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
	ANIMGRAPHRUNTIME_API UClass* Z_Construct_UClass_UPlayMontageCallbackProxy_NoRegister();
	ANIMGRAPHRUNTIME_API UClass* Z_Construct_UClass_UPlayMontageCallbackProxy();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ANIMGRAPHRUNTIME_API UFunction* Z_Construct_UFunction_UPlayMontageCallbackProxy_CreateProxyObjectForPlayMontage();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ANIMGRAPHRUNTIME_API UFunction* Z_Construct_UFunction_UPlayMontageCallbackProxy_OnMontageBlendingOut();
	ANIMGRAPHRUNTIME_API UFunction* Z_Construct_UFunction_UPlayMontageCallbackProxy_OnMontageEnded();
	ANIMGRAPHRUNTIME_API UFunction* Z_Construct_UFunction_UPlayMontageCallbackProxy_OnNotifyBeginReceived();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBranchingPointNotifyPayload();
	ANIMGRAPHRUNTIME_API UFunction* Z_Construct_UFunction_UPlayMontageCallbackProxy_OnNotifyEndReceived();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_AnimGraphRuntime_OnMontagePlayDelegate__DelegateSignature()
	{
		struct _Script_AnimGraphRuntime_eventOnMontagePlayDelegate_Parms
		{
			FName NotifyName;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_NotifyName = { UE4CodeGen_Private::EPropertyClass::Name, "NotifyName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_AnimGraphRuntime_eventOnMontagePlayDelegate_Parms, NotifyName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NotifyName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/PlayMontageCallbackProxy.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AnimGraphRuntime, "OnMontagePlayDelegate__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_AnimGraphRuntime_eventOnMontagePlayDelegate_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	void UPlayMontageCallbackProxy::StaticRegisterNativesUPlayMontageCallbackProxy()
	{
		UClass* Class = UPlayMontageCallbackProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateProxyObjectForPlayMontage", (Native)&UPlayMontageCallbackProxy::execCreateProxyObjectForPlayMontage },
			{ "OnMontageBlendingOut", (Native)&UPlayMontageCallbackProxy::execOnMontageBlendingOut },
			{ "OnMontageEnded", (Native)&UPlayMontageCallbackProxy::execOnMontageEnded },
			{ "OnNotifyBeginReceived", (Native)&UPlayMontageCallbackProxy::execOnNotifyBeginReceived },
			{ "OnNotifyEndReceived", (Native)&UPlayMontageCallbackProxy::execOnNotifyEndReceived },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UPlayMontageCallbackProxy_CreateProxyObjectForPlayMontage()
	{
		struct PlayMontageCallbackProxy_eventCreateProxyObjectForPlayMontage_Parms
		{
			USkeletalMeshComponent* InSkeletalMeshComponent;
			UAnimMontage* MontageToPlay;
			float PlayRate;
			float StartingPosition;
			FName StartingSection;
			UPlayMontageCallbackProxy* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(PlayMontageCallbackProxy_eventCreateProxyObjectForPlayMontage_Parms, ReturnValue), Z_Construct_UClass_UPlayMontageCallbackProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_StartingSection = { UE4CodeGen_Private::EPropertyClass::Name, "StartingSection", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PlayMontageCallbackProxy_eventCreateProxyObjectForPlayMontage_Parms, StartingSection), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartingPosition = { UE4CodeGen_Private::EPropertyClass::Float, "StartingPosition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PlayMontageCallbackProxy_eventCreateProxyObjectForPlayMontage_Parms, StartingPosition), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayRate = { UE4CodeGen_Private::EPropertyClass::Float, "PlayRate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PlayMontageCallbackProxy_eventCreateProxyObjectForPlayMontage_Parms, PlayRate), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MontageToPlay = { UE4CodeGen_Private::EPropertyClass::Object, "MontageToPlay", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PlayMontageCallbackProxy_eventCreateProxyObjectForPlayMontage_Parms, MontageToPlay), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InSkeletalMeshComponent_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InSkeletalMeshComponent = { UE4CodeGen_Private::EPropertyClass::Object, "InSkeletalMeshComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(PlayMontageCallbackProxy_eventCreateProxyObjectForPlayMontage_Parms, InSkeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(NewProp_InSkeletalMeshComponent_MetaData, ARRAY_COUNT(NewProp_InSkeletalMeshComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StartingSection,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StartingPosition,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlayRate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MontageToPlay,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InSkeletalMeshComponent,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "BlueprintInternalUseOnly", "true" },
				{ "CPP_Default_PlayRate", "1.000000" },
				{ "CPP_Default_StartingPosition", "0.000000" },
				{ "CPP_Default_StartingSection", "None" },
				{ "ModuleRelativePath", "Public/PlayMontageCallbackProxy.h" },
				{ "ToolTip", "Called to perform the query internally" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayMontageCallbackProxy, "CreateProxyObjectForPlayMontage", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(PlayMontageCallbackProxy_eventCreateProxyObjectForPlayMontage_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPlayMontageCallbackProxy_OnMontageBlendingOut()
	{
		struct PlayMontageCallbackProxy_eventOnMontageBlendingOut_Parms
		{
			UAnimMontage* Montage;
			bool bInterrupted;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bInterrupted_SetBit = [](void* Obj){ ((PlayMontageCallbackProxy_eventOnMontageBlendingOut_Parms*)Obj)->bInterrupted = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInterrupted = { UE4CodeGen_Private::EPropertyClass::Bool, "bInterrupted", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(PlayMontageCallbackProxy_eventOnMontageBlendingOut_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bInterrupted_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Montage = { UE4CodeGen_Private::EPropertyClass::Object, "Montage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PlayMontageCallbackProxy_eventOnMontageBlendingOut_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bInterrupted,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Montage,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/PlayMontageCallbackProxy.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayMontageCallbackProxy, "OnMontageBlendingOut", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, sizeof(PlayMontageCallbackProxy_eventOnMontageBlendingOut_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPlayMontageCallbackProxy_OnMontageEnded()
	{
		struct PlayMontageCallbackProxy_eventOnMontageEnded_Parms
		{
			UAnimMontage* Montage;
			bool bInterrupted;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bInterrupted_SetBit = [](void* Obj){ ((PlayMontageCallbackProxy_eventOnMontageEnded_Parms*)Obj)->bInterrupted = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInterrupted = { UE4CodeGen_Private::EPropertyClass::Bool, "bInterrupted", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(PlayMontageCallbackProxy_eventOnMontageEnded_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bInterrupted_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Montage = { UE4CodeGen_Private::EPropertyClass::Object, "Montage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PlayMontageCallbackProxy_eventOnMontageEnded_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bInterrupted,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Montage,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/PlayMontageCallbackProxy.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayMontageCallbackProxy, "OnMontageEnded", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, sizeof(PlayMontageCallbackProxy_eventOnMontageEnded_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPlayMontageCallbackProxy_OnNotifyBeginReceived()
	{
		struct PlayMontageCallbackProxy_eventOnNotifyBeginReceived_Parms
		{
			FName NotifyName;
			FBranchingPointNotifyPayload BranchingPointNotifyPayload;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BranchingPointNotifyPayload_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BranchingPointNotifyPayload = { UE4CodeGen_Private::EPropertyClass::Struct, "BranchingPointNotifyPayload", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(PlayMontageCallbackProxy_eventOnNotifyBeginReceived_Parms, BranchingPointNotifyPayload), Z_Construct_UScriptStruct_FBranchingPointNotifyPayload, METADATA_PARAMS(NewProp_BranchingPointNotifyPayload_MetaData, ARRAY_COUNT(NewProp_BranchingPointNotifyPayload_MetaData)) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_NotifyName = { UE4CodeGen_Private::EPropertyClass::Name, "NotifyName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PlayMontageCallbackProxy_eventOnNotifyBeginReceived_Parms, NotifyName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BranchingPointNotifyPayload,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NotifyName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/PlayMontageCallbackProxy.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayMontageCallbackProxy, "OnNotifyBeginReceived", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00480401, sizeof(PlayMontageCallbackProxy_eventOnNotifyBeginReceived_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPlayMontageCallbackProxy_OnNotifyEndReceived()
	{
		struct PlayMontageCallbackProxy_eventOnNotifyEndReceived_Parms
		{
			FName NotifyName;
			FBranchingPointNotifyPayload BranchingPointNotifyPayload;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BranchingPointNotifyPayload_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BranchingPointNotifyPayload = { UE4CodeGen_Private::EPropertyClass::Struct, "BranchingPointNotifyPayload", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(PlayMontageCallbackProxy_eventOnNotifyEndReceived_Parms, BranchingPointNotifyPayload), Z_Construct_UScriptStruct_FBranchingPointNotifyPayload, METADATA_PARAMS(NewProp_BranchingPointNotifyPayload_MetaData, ARRAY_COUNT(NewProp_BranchingPointNotifyPayload_MetaData)) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_NotifyName = { UE4CodeGen_Private::EPropertyClass::Name, "NotifyName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PlayMontageCallbackProxy_eventOnNotifyEndReceived_Parms, NotifyName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BranchingPointNotifyPayload,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NotifyName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/PlayMontageCallbackProxy.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayMontageCallbackProxy, "OnNotifyEndReceived", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00480401, sizeof(PlayMontageCallbackProxy_eventOnNotifyEndReceived_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPlayMontageCallbackProxy_NoRegister()
	{
		return UPlayMontageCallbackProxy::StaticClass();
	}
	UClass* Z_Construct_UClass_UPlayMontageCallbackProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UPlayMontageCallbackProxy_CreateProxyObjectForPlayMontage, "CreateProxyObjectForPlayMontage" }, // 72361419
				{ &Z_Construct_UFunction_UPlayMontageCallbackProxy_OnMontageBlendingOut, "OnMontageBlendingOut" }, // 3464725174
				{ &Z_Construct_UFunction_UPlayMontageCallbackProxy_OnMontageEnded, "OnMontageEnded" }, // 3820673697
				{ &Z_Construct_UFunction_UPlayMontageCallbackProxy_OnNotifyBeginReceived, "OnNotifyBeginReceived" }, // 4010789517
				{ &Z_Construct_UFunction_UPlayMontageCallbackProxy_OnNotifyEndReceived, "OnNotifyEndReceived" }, // 4155389030
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "PlayMontageCallbackProxy.h" },
				{ "ModuleRelativePath", "Public/PlayMontageCallbackProxy.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnNotifyEnd_MetaData[] = {
				{ "ModuleRelativePath", "Public/PlayMontageCallbackProxy.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnNotifyEnd = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnNotifyEnd", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UPlayMontageCallbackProxy, OnNotifyEnd), Z_Construct_UDelegateFunction_AnimGraphRuntime_OnMontagePlayDelegate__DelegateSignature, METADATA_PARAMS(NewProp_OnNotifyEnd_MetaData, ARRAY_COUNT(NewProp_OnNotifyEnd_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnNotifyBegin_MetaData[] = {
				{ "ModuleRelativePath", "Public/PlayMontageCallbackProxy.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnNotifyBegin = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnNotifyBegin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UPlayMontageCallbackProxy, OnNotifyBegin), Z_Construct_UDelegateFunction_AnimGraphRuntime_OnMontagePlayDelegate__DelegateSignature, METADATA_PARAMS(NewProp_OnNotifyBegin_MetaData, ARRAY_COUNT(NewProp_OnNotifyBegin_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnInterrupted_MetaData[] = {
				{ "ModuleRelativePath", "Public/PlayMontageCallbackProxy.h" },
				{ "ToolTip", "Called when Montage has been interrupted (or failed to play)" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInterrupted = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnInterrupted", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UPlayMontageCallbackProxy, OnInterrupted), Z_Construct_UDelegateFunction_AnimGraphRuntime_OnMontagePlayDelegate__DelegateSignature, METADATA_PARAMS(NewProp_OnInterrupted_MetaData, ARRAY_COUNT(NewProp_OnInterrupted_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnBlendOut_MetaData[] = {
				{ "ModuleRelativePath", "Public/PlayMontageCallbackProxy.h" },
				{ "ToolTip", "Called when Montage starts blending out and is not interrupted" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBlendOut = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnBlendOut", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UPlayMontageCallbackProxy, OnBlendOut), Z_Construct_UDelegateFunction_AnimGraphRuntime_OnMontagePlayDelegate__DelegateSignature, METADATA_PARAMS(NewProp_OnBlendOut_MetaData, ARRAY_COUNT(NewProp_OnBlendOut_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCompleted_MetaData[] = {
				{ "ModuleRelativePath", "Public/PlayMontageCallbackProxy.h" },
				{ "ToolTip", "Called when Montage finished playing and wasn't interrupted" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCompleted = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnCompleted", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UPlayMontageCallbackProxy, OnCompleted), Z_Construct_UDelegateFunction_AnimGraphRuntime_OnMontagePlayDelegate__DelegateSignature, METADATA_PARAMS(NewProp_OnCompleted_MetaData, ARRAY_COUNT(NewProp_OnCompleted_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnNotifyEnd,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnNotifyBegin,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnInterrupted,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnBlendOut,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnCompleted,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UPlayMontageCallbackProxy>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UPlayMontageCallbackProxy::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880080u,
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
	IMPLEMENT_CLASS(UPlayMontageCallbackProxy, 3209176676);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayMontageCallbackProxy(Z_Construct_UClass_UPlayMontageCallbackProxy, &UPlayMontageCallbackProxy::StaticClass, TEXT("/Script/AnimGraphRuntime"), TEXT("UPlayMontageCallbackProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayMontageCallbackProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
