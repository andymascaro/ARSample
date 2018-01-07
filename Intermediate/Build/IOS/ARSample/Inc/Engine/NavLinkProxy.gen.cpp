// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/AI/Navigation/NavLinkProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavLinkProxy() {}
// Cross Module References
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_SmartLinkReachedSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ANavLinkProxy_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ANavLinkProxy();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UFunction* Z_Construct_UFunction_ANavLinkProxy_HasMovingAgents();
	ENGINE_API UFunction* Z_Construct_UFunction_ANavLinkProxy_IsSmartLinkEnabled();
	ENGINE_API UFunction* Z_Construct_UFunction_ANavLinkProxy_ReceiveSmartLinkReached();
	ENGINE_API UFunction* Z_Construct_UFunction_ANavLinkProxy_ResumePathFollowing();
	ENGINE_API UFunction* Z_Construct_UFunction_ANavLinkProxy_SetSmartLinkEnabled();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNavLinkRenderingComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNavLinkCustomComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNavigationSegmentLink();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNavigationLink();
	ENGINE_API UClass* Z_Construct_UClass_UNavLinkHostInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNavRelevantInterface_NoRegister();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_Engine_SmartLinkReachedSignature__DelegateSignature()
	{
		struct _Script_Engine_eventSmartLinkReachedSignature_Parms
		{
			AActor* MovingActor;
			FVector DestinationPoint;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestinationPoint_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_DestinationPoint = { UE4CodeGen_Private::EPropertyClass::Struct, "DestinationPoint", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(_Script_Engine_eventSmartLinkReachedSignature_Parms, DestinationPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_DestinationPoint_MetaData, ARRAY_COUNT(NewProp_DestinationPoint_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MovingActor = { UE4CodeGen_Private::EPropertyClass::Object, "MovingActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_Engine_eventSmartLinkReachedSignature_Parms, MovingActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DestinationPoint,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MovingActor,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkProxy.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, "SmartLinkReachedSignature__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_Engine_eventSmartLinkReachedSignature_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	static FName NAME_ANavLinkProxy_ReceiveSmartLinkReached = FName(TEXT("ReceiveSmartLinkReached"));
	void ANavLinkProxy::ReceiveSmartLinkReached(AActor* Agent, FVector const& Destination)
	{
		NavLinkProxy_eventReceiveSmartLinkReached_Parms Parms;
		Parms.Agent=Agent;
		Parms.Destination=Destination;
		ProcessEvent(FindFunctionChecked(NAME_ANavLinkProxy_ReceiveSmartLinkReached),&Parms);
	}
	void ANavLinkProxy::StaticRegisterNativesANavLinkProxy()
	{
		UClass* Class = ANavLinkProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HasMovingAgents", (Native)&ANavLinkProxy::execHasMovingAgents },
			{ "IsSmartLinkEnabled", (Native)&ANavLinkProxy::execIsSmartLinkEnabled },
			{ "ResumePathFollowing", (Native)&ANavLinkProxy::execResumePathFollowing },
			{ "SetSmartLinkEnabled", (Native)&ANavLinkProxy::execSetSmartLinkEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ANavLinkProxy_HasMovingAgents()
	{
		struct NavLinkProxy_eventHasMovingAgents_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((NavLinkProxy_eventHasMovingAgents_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(NavLinkProxy_eventHasMovingAgents_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|Navigation" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkProxy.h" },
				{ "ToolTip", "check if any agent is moving through smart link right now" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ANavLinkProxy, "HasMovingAgents", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(NavLinkProxy_eventHasMovingAgents_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ANavLinkProxy_IsSmartLinkEnabled()
	{
		struct NavLinkProxy_eventIsSmartLinkEnabled_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((NavLinkProxy_eventIsSmartLinkEnabled_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(NavLinkProxy_eventIsSmartLinkEnabled_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|Navigation" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkProxy.h" },
				{ "ToolTip", "check if smart link is enabled" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ANavLinkProxy, "IsSmartLinkEnabled", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(NavLinkProxy_eventIsSmartLinkEnabled_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ANavLinkProxy_ReceiveSmartLinkReached()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Destination_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Destination = { UE4CodeGen_Private::EPropertyClass::Struct, "Destination", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(NavLinkProxy_eventReceiveSmartLinkReached_Parms, Destination), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_Destination_MetaData, ARRAY_COUNT(NewProp_Destination_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Agent = { UE4CodeGen_Private::EPropertyClass::Object, "Agent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavLinkProxy_eventReceiveSmartLinkReached_Parms, Agent), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Destination,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Agent,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkProxy.h" },
				{ "ToolTip", "called when agent reaches smart link during path following, use ResumePathFollowing() to give control back" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ANavLinkProxy, "ReceiveSmartLinkReached", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08C20800, sizeof(NavLinkProxy_eventReceiveSmartLinkReached_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ANavLinkProxy_ResumePathFollowing()
	{
		struct NavLinkProxy_eventResumePathFollowing_Parms
		{
			AActor* Agent;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Agent = { UE4CodeGen_Private::EPropertyClass::Object, "Agent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavLinkProxy_eventResumePathFollowing_Parms, Agent), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Agent,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|Navigation" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkProxy.h" },
				{ "ToolTip", "resume normal path following" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ANavLinkProxy, "ResumePathFollowing", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(NavLinkProxy_eventResumePathFollowing_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ANavLinkProxy_SetSmartLinkEnabled()
	{
		struct NavLinkProxy_eventSetSmartLinkEnabled_Parms
		{
			bool bEnabled;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bEnabled_SetBit = [](void* Obj){ ((NavLinkProxy_eventSetSmartLinkEnabled_Parms*)Obj)->bEnabled = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnabled", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(NavLinkProxy_eventSetSmartLinkEnabled_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnabled_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnabled,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|Navigation" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkProxy.h" },
				{ "ToolTip", "change state of smart link" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ANavLinkProxy, "SetSmartLinkEnabled", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(NavLinkProxy_eventSetSmartLinkEnabled_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ANavLinkProxy_NoRegister()
	{
		return ANavLinkProxy::StaticClass();
	}
	UClass* Z_Construct_UClass_ANavLinkProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ANavLinkProxy_HasMovingAgents, "HasMovingAgents" }, // 3403799687
				{ &Z_Construct_UFunction_ANavLinkProxy_IsSmartLinkEnabled, "IsSmartLinkEnabled" }, // 1874104284
				{ &Z_Construct_UFunction_ANavLinkProxy_ReceiveSmartLinkReached, "ReceiveSmartLinkReached" }, // 2296514892
				{ &Z_Construct_UFunction_ANavLinkProxy_ResumePathFollowing, "ResumePathFollowing" }, // 4282984506
				{ &Z_Construct_UFunction_ANavLinkProxy_SetSmartLinkEnabled, "SetSmartLinkEnabled" }, // 3040129669
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "AutoCollapseCategories", "SmartLink Actor" },
				{ "BlueprintType", "true" },
				{ "HideCategories", "Input" },
				{ "IncludePath", "AI/Navigation/NavLinkProxy.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkProxy.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSmartLinkReached_MetaData[] = {
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkProxy.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSmartLinkReached = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnSmartLinkReached", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080010080000, 1, nullptr, STRUCT_OFFSET(ANavLinkProxy, OnSmartLinkReached), Z_Construct_UDelegateFunction_Engine_SmartLinkReachedSignature__DelegateSignature, METADATA_PARAMS(NewProp_OnSmartLinkReached_MetaData, ARRAY_COUNT(NewProp_OnSmartLinkReached_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpriteComponent_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkProxy.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpriteComponent = { UE4CodeGen_Private::EPropertyClass::Object, "SpriteComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000800080008, 1, nullptr, STRUCT_OFFSET(ANavLinkProxy, SpriteComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(NewProp_SpriteComponent_MetaData, ARRAY_COUNT(NewProp_SpriteComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EdRenderComp_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkProxy.h" },
				{ "ToolTip", "Editor Preview" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EdRenderComp = { UE4CodeGen_Private::EPropertyClass::Object, "EdRenderComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000800080008, 1, nullptr, STRUCT_OFFSET(ANavLinkProxy, EdRenderComp), Z_Construct_UClass_UNavLinkRenderingComponent_NoRegister, METADATA_PARAMS(NewProp_EdRenderComp_MetaData, ARRAY_COUNT(NewProp_EdRenderComp_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSmartLinkIsRelevant_MetaData[] = {
				{ "Category", "SmartLink" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkProxy.h" },
				{ "ToolTip", "Smart link: toggle relevancy" },
			};
#endif
			auto NewProp_bSmartLinkIsRelevant_SetBit = [](void* Obj){ ((ANavLinkProxy*)Obj)->bSmartLinkIsRelevant = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSmartLinkIsRelevant = { UE4CodeGen_Private::EPropertyClass::Bool, "bSmartLinkIsRelevant", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ANavLinkProxy), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSmartLinkIsRelevant_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSmartLinkIsRelevant_MetaData, ARRAY_COUNT(NewProp_bSmartLinkIsRelevant_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SmartLinkComp_MetaData[] = {
				{ "Category", "SmartLink" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkProxy.h" },
				{ "ToolTip", "Smart link: can affect path following" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SmartLinkComp = { UE4CodeGen_Private::EPropertyClass::Object, "SmartLinkComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000a0009, 1, nullptr, STRUCT_OFFSET(ANavLinkProxy, SmartLinkComp), Z_Construct_UClass_UNavLinkCustomComponent_NoRegister, METADATA_PARAMS(NewProp_SmartLinkComp_MetaData, ARRAY_COUNT(NewProp_SmartLinkComp_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SegmentLinks_MetaData[] = {
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkProxy.h" },
				{ "ToolTip", "Navigation links (segment to segment) added to navigation data\n     @todo hidden from use until we fix segment links. Not really working now" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SegmentLinks = { UE4CodeGen_Private::EPropertyClass::Array, "SegmentLinks", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(ANavLinkProxy, SegmentLinks), METADATA_PARAMS(NewProp_SegmentLinks_MetaData, ARRAY_COUNT(NewProp_SegmentLinks_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SegmentLinks_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "SegmentLinks", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FNavigationSegmentLink, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointLinks_MetaData[] = {
				{ "Category", "SimpleLink" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkProxy.h" },
				{ "ToolTip", "Navigation links (point to point) added to navigation data" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PointLinks = { UE4CodeGen_Private::EPropertyClass::Array, "PointLinks", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ANavLinkProxy, PointLinks), METADATA_PARAMS(NewProp_PointLinks_MetaData, ARRAY_COUNT(NewProp_PointLinks_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PointLinks_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "PointLinks", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FNavigationLink, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnSmartLinkReached,
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpriteComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EdRenderComp,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSmartLinkIsRelevant,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SmartLinkComp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SegmentLinks,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SegmentLinks_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PointLinks,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PointLinks_Inner,
			};
			static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[] = {
				{ Z_Construct_UClass_UNavLinkHostInterface_NoRegister, (int32)VTABLE_OFFSET(ANavLinkProxy, INavLinkHostInterface), false },
				{ Z_Construct_UClass_UNavRelevantInterface_NoRegister, (int32)VTABLE_OFFSET(ANavLinkProxy, INavRelevantInterface), false },
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ANavLinkProxy>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ANavLinkProxy::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
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
	IMPLEMENT_CLASS(ANavLinkProxy, 1103714830);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANavLinkProxy(Z_Construct_UClass_ANavLinkProxy, &ANavLinkProxy::StaticClass, TEXT("/Script/Engine"), TEXT("ANavLinkProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANavLinkProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
