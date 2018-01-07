// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/KismetAnimationLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKismetAnimationLibrary() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UClass* Z_Construct_UClass_UKismetAnimationLibrary_NoRegister();
	ANIMGRAPHRUNTIME_API UClass* Z_Construct_UClass_UKismetAnimationLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
	ANIMGRAPHRUNTIME_API UFunction* Z_Construct_UFunction_UKismetAnimationLibrary_K2_LookAt();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ANIMGRAPHRUNTIME_API UFunction* Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK();
// End Cross Module References
	void UKismetAnimationLibrary::StaticRegisterNativesUKismetAnimationLibrary()
	{
		UClass* Class = UKismetAnimationLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "K2_LookAt", (Native)&UKismetAnimationLibrary::execK2_LookAt },
			{ "K2_TwoBoneIK", (Native)&UKismetAnimationLibrary::execK2_TwoBoneIK },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UKismetAnimationLibrary_K2_LookAt()
	{
		struct KismetAnimationLibrary_eventK2_LookAt_Parms
		{
			FTransform CurrentTransform;
			FVector TargetPosition;
			FVector LookAtVector;
			bool bUseUpVector;
			FVector UpVector;
			float ClampConeInDegree;
			FTransform ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_LookAt_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ClampConeInDegree = { UE4CodeGen_Private::EPropertyClass::Float, "ClampConeInDegree", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_LookAt_Parms, ClampConeInDegree), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_UpVector = { UE4CodeGen_Private::EPropertyClass::Struct, "UpVector", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_LookAt_Parms, UpVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bUseUpVector_SetBit = [](void* Obj){ ((KismetAnimationLibrary_eventK2_LookAt_Parms*)Obj)->bUseUpVector = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseUpVector = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseUpVector", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KismetAnimationLibrary_eventK2_LookAt_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseUpVector_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LookAtVector = { UE4CodeGen_Private::EPropertyClass::Struct, "LookAtVector", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_LookAt_Parms, LookAtVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetPosition_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetPosition = { UE4CodeGen_Private::EPropertyClass::Struct, "TargetPosition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_LookAt_Parms, TargetPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_TargetPosition_MetaData, ARRAY_COUNT(NewProp_TargetPosition_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentTransform_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentTransform = { UE4CodeGen_Private::EPropertyClass::Struct, "CurrentTransform", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_LookAt_Parms, CurrentTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(NewProp_CurrentTransform_MetaData, ARRAY_COUNT(NewProp_CurrentTransform_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClampConeInDegree,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UpVector,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseUpVector,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LookAtVector,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetPosition,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurrentTransform,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "bUseUpVector", "false" },
				{ "Category", "Utilities|Animation" },
				{ "DisplayName", "Look At Function" },
				{ "ModuleRelativePath", "Public/KismetAnimationLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetAnimationLibrary, "K2_LookAt", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C22401, sizeof(KismetAnimationLibrary_eventK2_LookAt_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK()
	{
		struct KismetAnimationLibrary_eventK2_TwoBoneIK_Parms
		{
			FVector RootPos;
			FVector JointPos;
			FVector EndPos;
			FVector JointTarget;
			FVector Effector;
			FVector OutJointPos;
			FVector OutEndPos;
			bool bAllowStretching;
			float StartStretchRatio;
			float MaxStretchScale;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxStretchScale = { UE4CodeGen_Private::EPropertyClass::Float, "MaxStretchScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_TwoBoneIK_Parms, MaxStretchScale), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartStretchRatio = { UE4CodeGen_Private::EPropertyClass::Float, "StartStretchRatio", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_TwoBoneIK_Parms, StartStretchRatio), METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bAllowStretching_SetBit = [](void* Obj){ ((KismetAnimationLibrary_eventK2_TwoBoneIK_Parms*)Obj)->bAllowStretching = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowStretching = { UE4CodeGen_Private::EPropertyClass::Bool, "bAllowStretching", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KismetAnimationLibrary_eventK2_TwoBoneIK_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAllowStretching_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutEndPos = { UE4CodeGen_Private::EPropertyClass::Struct, "OutEndPos", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_TwoBoneIK_Parms, OutEndPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutJointPos = { UE4CodeGen_Private::EPropertyClass::Struct, "OutJointPos", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_TwoBoneIK_Parms, OutJointPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Effector_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Effector = { UE4CodeGen_Private::EPropertyClass::Struct, "Effector", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_TwoBoneIK_Parms, Effector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_Effector_MetaData, ARRAY_COUNT(NewProp_Effector_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JointTarget_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_JointTarget = { UE4CodeGen_Private::EPropertyClass::Struct, "JointTarget", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_TwoBoneIK_Parms, JointTarget), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_JointTarget_MetaData, ARRAY_COUNT(NewProp_JointTarget_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndPos_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndPos = { UE4CodeGen_Private::EPropertyClass::Struct, "EndPos", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_TwoBoneIK_Parms, EndPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_EndPos_MetaData, ARRAY_COUNT(NewProp_EndPos_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JointPos_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_JointPos = { UE4CodeGen_Private::EPropertyClass::Struct, "JointPos", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_TwoBoneIK_Parms, JointPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_JointPos_MetaData, ARRAY_COUNT(NewProp_JointPos_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootPos_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_RootPos = { UE4CodeGen_Private::EPropertyClass::Struct, "RootPos", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_TwoBoneIK_Parms, RootPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_RootPos_MetaData, ARRAY_COUNT(NewProp_RootPos_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxStretchScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StartStretchRatio,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAllowStretching,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutEndPos,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutJointPos,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Effector,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_JointTarget,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EndPos,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_JointPos,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RootPos,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "bAllowStretching", "false" },
				{ "Category", "Utilities|Animation" },
				{ "DisplayName", "Two Bone IK Function" },
				{ "MaxStretchScale", "1.2" },
				{ "ModuleRelativePath", "Public/KismetAnimationLibrary.h" },
				{ "StartStretchRatio", "1.0" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetAnimationLibrary, "K2_TwoBoneIK", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C22401, sizeof(KismetAnimationLibrary_eventK2_TwoBoneIK_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UKismetAnimationLibrary_NoRegister()
	{
		return UKismetAnimationLibrary::StaticClass();
	}
	UClass* Z_Construct_UClass_UKismetAnimationLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
				(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UKismetAnimationLibrary_K2_LookAt, "K2_LookAt" }, // 452615569
				{ &Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK, "K2_TwoBoneIK" }, // 3059203764
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "KismetAnimationLibrary.h" },
				{ "ModuleRelativePath", "Public/KismetAnimationLibrary.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UKismetAnimationLibrary>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UKismetAnimationLibrary::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKismetAnimationLibrary, 1969181383);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKismetAnimationLibrary(Z_Construct_UClass_UKismetAnimationLibrary, &UKismetAnimationLibrary::StaticClass, TEXT("/Script/AnimGraphRuntime"), TEXT("UKismetAnimationLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKismetAnimationLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
