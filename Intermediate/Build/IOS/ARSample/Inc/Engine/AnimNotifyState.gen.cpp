// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Animation/AnimNotifies/AnimNotifyState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotifyState() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_UAnimNotifyState_GetNotifyName();
	ENGINE_API UFunction* Z_Construct_UFunction_UAnimNotifyState_Received_NotifyBegin();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_UAnimNotifyState_Received_NotifyEnd();
	ENGINE_API UFunction* Z_Construct_UFunction_UAnimNotifyState_Received_NotifyTick();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
// End Cross Module References
	static FName NAME_UAnimNotifyState_GetNotifyName = FName(TEXT("GetNotifyName"));
	FString UAnimNotifyState::GetNotifyName() const
	{
		AnimNotifyState_eventGetNotifyName_Parms Parms;
		const_cast<UAnimNotifyState*>(this)->ProcessEvent(FindFunctionChecked(NAME_UAnimNotifyState_GetNotifyName),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UAnimNotifyState_Received_NotifyBegin = FName(TEXT("Received_NotifyBegin"));
	bool UAnimNotifyState::Received_NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration) const
	{
		AnimNotifyState_eventReceived_NotifyBegin_Parms Parms;
		Parms.MeshComp=MeshComp;
		Parms.Animation=Animation;
		Parms.TotalDuration=TotalDuration;
		const_cast<UAnimNotifyState*>(this)->ProcessEvent(FindFunctionChecked(NAME_UAnimNotifyState_Received_NotifyBegin),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UAnimNotifyState_Received_NotifyEnd = FName(TEXT("Received_NotifyEnd"));
	bool UAnimNotifyState::Received_NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) const
	{
		AnimNotifyState_eventReceived_NotifyEnd_Parms Parms;
		Parms.MeshComp=MeshComp;
		Parms.Animation=Animation;
		const_cast<UAnimNotifyState*>(this)->ProcessEvent(FindFunctionChecked(NAME_UAnimNotifyState_Received_NotifyEnd),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UAnimNotifyState_Received_NotifyTick = FName(TEXT("Received_NotifyTick"));
	bool UAnimNotifyState::Received_NotifyTick(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float FrameDeltaTime) const
	{
		AnimNotifyState_eventReceived_NotifyTick_Parms Parms;
		Parms.MeshComp=MeshComp;
		Parms.Animation=Animation;
		Parms.FrameDeltaTime=FrameDeltaTime;
		const_cast<UAnimNotifyState*>(this)->ProcessEvent(FindFunctionChecked(NAME_UAnimNotifyState_Received_NotifyTick),&Parms);
		return !!Parms.ReturnValue;
	}
	void UAnimNotifyState::StaticRegisterNativesUAnimNotifyState()
	{
		UClass* Class = UAnimNotifyState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetNotifyName", (Native)&UAnimNotifyState::execGetNotifyName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UAnimNotifyState_GetNotifyName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AnimNotifyState_eventGetNotifyName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotifyState.h" },
				{ "ToolTip", "Implementable event to get a custom name for the notify" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimNotifyState, "GetNotifyName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x48020C00, sizeof(AnimNotifyState_eventGetNotifyName_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAnimNotifyState_Received_NotifyBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((AnimNotifyState_eventReceived_NotifyBegin_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AnimNotifyState_eventReceived_NotifyBegin_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TotalDuration = { UE4CodeGen_Private::EPropertyClass::Float, "TotalDuration", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AnimNotifyState_eventReceived_NotifyBegin_Parms, TotalDuration), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Animation = { UE4CodeGen_Private::EPropertyClass::Object, "Animation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AnimNotifyState_eventReceived_NotifyBegin_Parms, Animation), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComp = { UE4CodeGen_Private::EPropertyClass::Object, "MeshComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(AnimNotifyState_eventReceived_NotifyBegin_Parms, MeshComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(NewProp_MeshComp_MetaData, ARRAY_COUNT(NewProp_MeshComp_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TotalDuration,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Animation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MeshComp,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotifyState.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimNotifyState, "Received_NotifyBegin", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x48020800, sizeof(AnimNotifyState_eventReceived_NotifyBegin_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAnimNotifyState_Received_NotifyEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((AnimNotifyState_eventReceived_NotifyEnd_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AnimNotifyState_eventReceived_NotifyEnd_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Animation = { UE4CodeGen_Private::EPropertyClass::Object, "Animation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AnimNotifyState_eventReceived_NotifyEnd_Parms, Animation), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComp = { UE4CodeGen_Private::EPropertyClass::Object, "MeshComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(AnimNotifyState_eventReceived_NotifyEnd_Parms, MeshComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(NewProp_MeshComp_MetaData, ARRAY_COUNT(NewProp_MeshComp_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Animation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MeshComp,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotifyState.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimNotifyState, "Received_NotifyEnd", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x48020800, sizeof(AnimNotifyState_eventReceived_NotifyEnd_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAnimNotifyState_Received_NotifyTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((AnimNotifyState_eventReceived_NotifyTick_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AnimNotifyState_eventReceived_NotifyTick_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FrameDeltaTime = { UE4CodeGen_Private::EPropertyClass::Float, "FrameDeltaTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AnimNotifyState_eventReceived_NotifyTick_Parms, FrameDeltaTime), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Animation = { UE4CodeGen_Private::EPropertyClass::Object, "Animation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AnimNotifyState_eventReceived_NotifyTick_Parms, Animation), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComp = { UE4CodeGen_Private::EPropertyClass::Object, "MeshComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(AnimNotifyState_eventReceived_NotifyTick_Parms, MeshComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(NewProp_MeshComp_MetaData, ARRAY_COUNT(NewProp_MeshComp_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FrameDeltaTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Animation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MeshComp,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotifyState.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimNotifyState, "Received_NotifyTick", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x48020800, sizeof(AnimNotifyState_eventReceived_NotifyTick_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAnimNotifyState_NoRegister()
	{
		return UAnimNotifyState::StaticClass();
	}
	UClass* Z_Construct_UClass_UAnimNotifyState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UAnimNotifyState_GetNotifyName, "GetNotifyName" }, // 792223023
				{ &Z_Construct_UFunction_UAnimNotifyState_Received_NotifyBegin, "Received_NotifyBegin" }, // 3351187570
				{ &Z_Construct_UFunction_UAnimNotifyState_Received_NotifyEnd, "Received_NotifyEnd" }, // 338213791
				{ &Z_Construct_UFunction_UAnimNotifyState_Received_NotifyTick, "Received_NotifyTick" }, // 338805344
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HideCategories", "Object" },
				{ "IncludePath", "Animation/AnimNotifies/AnimNotifyState.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotifyState.h" },
				{ "ShowWorldContextPin", "" },
			};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NotifyColor_MetaData[] = {
				{ "Category", "AnimNotify" },
				{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotifyState.h" },
				{ "ToolTip", "Color of Notify in editor" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NotifyColor = { UE4CodeGen_Private::EPropertyClass::Struct, "NotifyColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000015, 1, nullptr, STRUCT_OFFSET(UAnimNotifyState, NotifyColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(NewProp_NotifyColor_MetaData, ARRAY_COUNT(NewProp_NotifyColor_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NotifyColor,
			};
#endif // WITH_EDITORONLY_DATA
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAnimNotifyState>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAnimNotifyState::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00113081u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				IF_WITH_EDITORONLY_DATA(PropPointers, nullptr), IF_WITH_EDITORONLY_DATA(ARRAY_COUNT(PropPointers), 0),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimNotifyState, 1905589001);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimNotifyState(Z_Construct_UClass_UAnimNotifyState, &UAnimNotifyState::StaticClass, TEXT("/Script/Engine"), TEXT("UAnimNotifyState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotifyState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
