// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Animation/AnimNotifies/AnimNotify.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotify() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBranchingPointNotifyPayload();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UFunction* Z_Construct_UFunction_UAnimNotify_GetNotifyName();
	ENGINE_API UFunction* Z_Construct_UFunction_UAnimNotify_Received_Notify();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
// End Cross Module References
class UScriptStruct* FBranchingPointNotifyPayload::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FBranchingPointNotifyPayload_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBranchingPointNotifyPayload, Z_Construct_UPackage__Script_Engine(), TEXT("BranchingPointNotifyPayload"), sizeof(FBranchingPointNotifyPayload), Get_Z_Construct_UScriptStruct_FBranchingPointNotifyPayload_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBranchingPointNotifyPayload(FBranchingPointNotifyPayload::StaticStruct, TEXT("/Script/Engine"), TEXT("BranchingPointNotifyPayload"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFBranchingPointNotifyPayload
{
	FScriptStruct_Engine_StaticRegisterNativesFBranchingPointNotifyPayload()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BranchingPointNotifyPayload")),new UScriptStruct::TCppStructOps<FBranchingPointNotifyPayload>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFBranchingPointNotifyPayload;
	UScriptStruct* Z_Construct_UScriptStruct_FBranchingPointNotifyPayload()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBranchingPointNotifyPayload_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BranchingPointNotifyPayload"), sizeof(FBranchingPointNotifyPayload), Get_Z_Construct_UScriptStruct_FBranchingPointNotifyPayload_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotify.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBranchingPointNotifyPayload>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"BranchingPointNotifyPayload",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FBranchingPointNotifyPayload),
				alignof(FBranchingPointNotifyPayload),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBranchingPointNotifyPayload_CRC() { return 597317497U; }
	static FName NAME_UAnimNotify_GetNotifyName = FName(TEXT("GetNotifyName"));
	FString UAnimNotify::GetNotifyName() const
	{
		AnimNotify_eventGetNotifyName_Parms Parms;
		const_cast<UAnimNotify*>(this)->ProcessEvent(FindFunctionChecked(NAME_UAnimNotify_GetNotifyName),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UAnimNotify_Received_Notify = FName(TEXT("Received_Notify"));
	bool UAnimNotify::Received_Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) const
	{
		AnimNotify_eventReceived_Notify_Parms Parms;
		Parms.MeshComp=MeshComp;
		Parms.Animation=Animation;
		const_cast<UAnimNotify*>(this)->ProcessEvent(FindFunctionChecked(NAME_UAnimNotify_Received_Notify),&Parms);
		return !!Parms.ReturnValue;
	}
	void UAnimNotify::StaticRegisterNativesUAnimNotify()
	{
		UClass* Class = UAnimNotify::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetNotifyName", (Native)&UAnimNotify::execGetNotifyName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UAnimNotify_GetNotifyName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AnimNotify_eventGetNotifyName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotify.h" },
				{ "ToolTip", "Implementable event to get a custom name for the notify" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimNotify, "GetNotifyName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x48020C00, sizeof(AnimNotify_eventGetNotifyName_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAnimNotify_Received_Notify()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((AnimNotify_eventReceived_Notify_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AnimNotify_eventReceived_Notify_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Animation = { UE4CodeGen_Private::EPropertyClass::Object, "Animation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AnimNotify_eventReceived_Notify_Parms, Animation), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComp = { UE4CodeGen_Private::EPropertyClass::Object, "MeshComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(AnimNotify_eventReceived_Notify_Parms, MeshComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(NewProp_MeshComp_MetaData, ARRAY_COUNT(NewProp_MeshComp_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Animation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MeshComp,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotify.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimNotify, "Received_Notify", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x48020800, sizeof(AnimNotify_eventReceived_Notify_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAnimNotify_NoRegister()
	{
		return UAnimNotify::StaticClass();
	}
	UClass* Z_Construct_UClass_UAnimNotify()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UAnimNotify_GetNotifyName, "GetNotifyName" }, // 298742319
				{ &Z_Construct_UFunction_UAnimNotify_Received_Notify, "Received_Notify" }, // 813535023
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HideCategories", "Object" },
				{ "IncludePath", "Animation/AnimNotifies/AnimNotify.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotify.h" },
			};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NotifyColor_MetaData[] = {
				{ "Category", "AnimNotify" },
				{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotify.h" },
				{ "ToolTip", "Color of Notify in editor" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NotifyColor = { UE4CodeGen_Private::EPropertyClass::Struct, "NotifyColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000015, 1, nullptr, STRUCT_OFFSET(UAnimNotify, NotifyColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(NewProp_NotifyColor_MetaData, ARRAY_COUNT(NewProp_NotifyColor_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NotifyColor,
			};
#endif // WITH_EDITORONLY_DATA
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAnimNotify>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAnimNotify::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00112081u,
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
	IMPLEMENT_CLASS(UAnimNotify, 2067460767);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimNotify(Z_Construct_UClass_UAnimNotify, &UAnimNotify::StaticClass, TEXT("/Script/Engine"), TEXT("UAnimNotify"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotify);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
