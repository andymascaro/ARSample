// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Components/PoseableMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePoseableMeshComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UPoseableMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPoseableMeshComponent();
	ENGINE_API UClass* Z_Construct_UClass_USkinnedMeshComponent();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_UPoseableMeshComponent_CopyPoseFromSkeletalComponent();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_UPoseableMeshComponent_GetBoneLocationByName();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBoneSpaces();
	ENGINE_API UFunction* Z_Construct_UFunction_UPoseableMeshComponent_GetBoneRotationByName();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UFunction* Z_Construct_UFunction_UPoseableMeshComponent_GetBoneScaleByName();
	ENGINE_API UFunction* Z_Construct_UFunction_UPoseableMeshComponent_GetBoneTransformByName();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UFunction* Z_Construct_UFunction_UPoseableMeshComponent_ResetBoneTransformByName();
	ENGINE_API UFunction* Z_Construct_UFunction_UPoseableMeshComponent_SetBoneLocationByName();
	ENGINE_API UFunction* Z_Construct_UFunction_UPoseableMeshComponent_SetBoneRotationByName();
	ENGINE_API UFunction* Z_Construct_UFunction_UPoseableMeshComponent_SetBoneScaleByName();
	ENGINE_API UFunction* Z_Construct_UFunction_UPoseableMeshComponent_SetBoneTransformByName();
// End Cross Module References
	void UPoseableMeshComponent::StaticRegisterNativesUPoseableMeshComponent()
	{
		UClass* Class = UPoseableMeshComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CopyPoseFromSkeletalComponent", (Native)&UPoseableMeshComponent::execCopyPoseFromSkeletalComponent },
			{ "GetBoneLocationByName", (Native)&UPoseableMeshComponent::execGetBoneLocationByName },
			{ "GetBoneRotationByName", (Native)&UPoseableMeshComponent::execGetBoneRotationByName },
			{ "GetBoneScaleByName", (Native)&UPoseableMeshComponent::execGetBoneScaleByName },
			{ "GetBoneTransformByName", (Native)&UPoseableMeshComponent::execGetBoneTransformByName },
			{ "ResetBoneTransformByName", (Native)&UPoseableMeshComponent::execResetBoneTransformByName },
			{ "SetBoneLocationByName", (Native)&UPoseableMeshComponent::execSetBoneLocationByName },
			{ "SetBoneRotationByName", (Native)&UPoseableMeshComponent::execSetBoneRotationByName },
			{ "SetBoneScaleByName", (Native)&UPoseableMeshComponent::execSetBoneScaleByName },
			{ "SetBoneTransformByName", (Native)&UPoseableMeshComponent::execSetBoneTransformByName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UPoseableMeshComponent_CopyPoseFromSkeletalComponent()
	{
		struct PoseableMeshComponent_eventCopyPoseFromSkeletalComponent_Parms
		{
			const USkeletalMeshComponent* InComponentToCopy;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InComponentToCopy_MetaData[] = {
				{ "EditInline", "true" },
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InComponentToCopy = { UE4CodeGen_Private::EPropertyClass::Object, "InComponentToCopy", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080082, 1, nullptr, STRUCT_OFFSET(PoseableMeshComponent_eventCopyPoseFromSkeletalComponent_Parms, InComponentToCopy), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(NewProp_InComponentToCopy_MetaData, ARRAY_COUNT(NewProp_InComponentToCopy_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InComponentToCopy,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|PoseableMesh" },
				{ "ModuleRelativePath", "Classes/Components/PoseableMeshComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPoseableMeshComponent, "CopyPoseFromSkeletalComponent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PoseableMeshComponent_eventCopyPoseFromSkeletalComponent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPoseableMeshComponent_GetBoneLocationByName()
	{
		struct PoseableMeshComponent_eventGetBoneLocationByName_Parms
		{
			FName BoneName;
			TEnumAsByte<EBoneSpaces::Type> BoneSpace;
			FVector ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(PoseableMeshComponent_eventGetBoneLocationByName_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_BoneSpace = { UE4CodeGen_Private::EPropertyClass::Byte, "BoneSpace", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PoseableMeshComponent_eventGetBoneLocationByName_Parms, BoneSpace), Z_Construct_UEnum_Engine_EBoneSpaces, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName = { UE4CodeGen_Private::EPropertyClass::Name, "BoneName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PoseableMeshComponent_eventGetBoneLocationByName_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoneSpace,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoneName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|PoseableMesh" },
				{ "ModuleRelativePath", "Classes/Components/PoseableMeshComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPoseableMeshComponent, "GetBoneLocationByName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(PoseableMeshComponent_eventGetBoneLocationByName_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPoseableMeshComponent_GetBoneRotationByName()
	{
		struct PoseableMeshComponent_eventGetBoneRotationByName_Parms
		{
			FName BoneName;
			TEnumAsByte<EBoneSpaces::Type> BoneSpace;
			FRotator ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(PoseableMeshComponent_eventGetBoneRotationByName_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_BoneSpace = { UE4CodeGen_Private::EPropertyClass::Byte, "BoneSpace", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PoseableMeshComponent_eventGetBoneRotationByName_Parms, BoneSpace), Z_Construct_UEnum_Engine_EBoneSpaces, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName = { UE4CodeGen_Private::EPropertyClass::Name, "BoneName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PoseableMeshComponent_eventGetBoneRotationByName_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoneSpace,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoneName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|PoseableMesh" },
				{ "ModuleRelativePath", "Classes/Components/PoseableMeshComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPoseableMeshComponent, "GetBoneRotationByName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(PoseableMeshComponent_eventGetBoneRotationByName_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPoseableMeshComponent_GetBoneScaleByName()
	{
		struct PoseableMeshComponent_eventGetBoneScaleByName_Parms
		{
			FName BoneName;
			TEnumAsByte<EBoneSpaces::Type> BoneSpace;
			FVector ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(PoseableMeshComponent_eventGetBoneScaleByName_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_BoneSpace = { UE4CodeGen_Private::EPropertyClass::Byte, "BoneSpace", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PoseableMeshComponent_eventGetBoneScaleByName_Parms, BoneSpace), Z_Construct_UEnum_Engine_EBoneSpaces, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName = { UE4CodeGen_Private::EPropertyClass::Name, "BoneName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PoseableMeshComponent_eventGetBoneScaleByName_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoneSpace,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoneName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|PoseableMesh" },
				{ "ModuleRelativePath", "Classes/Components/PoseableMeshComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPoseableMeshComponent, "GetBoneScaleByName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(PoseableMeshComponent_eventGetBoneScaleByName_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPoseableMeshComponent_GetBoneTransformByName()
	{
		struct PoseableMeshComponent_eventGetBoneTransformByName_Parms
		{
			FName BoneName;
			TEnumAsByte<EBoneSpaces::Type> BoneSpace;
			FTransform ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(PoseableMeshComponent_eventGetBoneTransformByName_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_BoneSpace = { UE4CodeGen_Private::EPropertyClass::Byte, "BoneSpace", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PoseableMeshComponent_eventGetBoneTransformByName_Parms, BoneSpace), Z_Construct_UEnum_Engine_EBoneSpaces, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName = { UE4CodeGen_Private::EPropertyClass::Name, "BoneName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PoseableMeshComponent_eventGetBoneTransformByName_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoneSpace,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoneName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|PoseableMesh" },
				{ "ModuleRelativePath", "Classes/Components/PoseableMeshComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPoseableMeshComponent, "GetBoneTransformByName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(PoseableMeshComponent_eventGetBoneTransformByName_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPoseableMeshComponent_ResetBoneTransformByName()
	{
		struct PoseableMeshComponent_eventResetBoneTransformByName_Parms
		{
			FName BoneName;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName = { UE4CodeGen_Private::EPropertyClass::Name, "BoneName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PoseableMeshComponent_eventResetBoneTransformByName_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoneName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|PoseableMesh" },
				{ "ModuleRelativePath", "Classes/Components/PoseableMeshComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPoseableMeshComponent, "ResetBoneTransformByName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PoseableMeshComponent_eventResetBoneTransformByName_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPoseableMeshComponent_SetBoneLocationByName()
	{
		struct PoseableMeshComponent_eventSetBoneLocationByName_Parms
		{
			FName BoneName;
			FVector InLocation;
			TEnumAsByte<EBoneSpaces::Type> BoneSpace;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_BoneSpace = { UE4CodeGen_Private::EPropertyClass::Byte, "BoneSpace", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PoseableMeshComponent_eventSetBoneLocationByName_Parms, BoneSpace), Z_Construct_UEnum_Engine_EBoneSpaces, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "InLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PoseableMeshComponent_eventSetBoneLocationByName_Parms, InLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName = { UE4CodeGen_Private::EPropertyClass::Name, "BoneName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PoseableMeshComponent_eventSetBoneLocationByName_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoneSpace,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoneName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|PoseableMesh" },
				{ "ModuleRelativePath", "Classes/Components/PoseableMeshComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPoseableMeshComponent, "SetBoneLocationByName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(PoseableMeshComponent_eventSetBoneLocationByName_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPoseableMeshComponent_SetBoneRotationByName()
	{
		struct PoseableMeshComponent_eventSetBoneRotationByName_Parms
		{
			FName BoneName;
			FRotator InRotation;
			TEnumAsByte<EBoneSpaces::Type> BoneSpace;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_BoneSpace = { UE4CodeGen_Private::EPropertyClass::Byte, "BoneSpace", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PoseableMeshComponent_eventSetBoneRotationByName_Parms, BoneSpace), Z_Construct_UEnum_Engine_EBoneSpaces, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "InRotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PoseableMeshComponent_eventSetBoneRotationByName_Parms, InRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName = { UE4CodeGen_Private::EPropertyClass::Name, "BoneName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PoseableMeshComponent_eventSetBoneRotationByName_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoneSpace,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InRotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoneName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|PoseableMesh" },
				{ "ModuleRelativePath", "Classes/Components/PoseableMeshComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPoseableMeshComponent, "SetBoneRotationByName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(PoseableMeshComponent_eventSetBoneRotationByName_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPoseableMeshComponent_SetBoneScaleByName()
	{
		struct PoseableMeshComponent_eventSetBoneScaleByName_Parms
		{
			FName BoneName;
			FVector InScale3D;
			TEnumAsByte<EBoneSpaces::Type> BoneSpace;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_BoneSpace = { UE4CodeGen_Private::EPropertyClass::Byte, "BoneSpace", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PoseableMeshComponent_eventSetBoneScaleByName_Parms, BoneSpace), Z_Construct_UEnum_Engine_EBoneSpaces, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InScale3D = { UE4CodeGen_Private::EPropertyClass::Struct, "InScale3D", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PoseableMeshComponent_eventSetBoneScaleByName_Parms, InScale3D), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName = { UE4CodeGen_Private::EPropertyClass::Name, "BoneName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PoseableMeshComponent_eventSetBoneScaleByName_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoneSpace,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InScale3D,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoneName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|PoseableMesh" },
				{ "ModuleRelativePath", "Classes/Components/PoseableMeshComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPoseableMeshComponent, "SetBoneScaleByName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(PoseableMeshComponent_eventSetBoneScaleByName_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPoseableMeshComponent_SetBoneTransformByName()
	{
		struct PoseableMeshComponent_eventSetBoneTransformByName_Parms
		{
			FName BoneName;
			FTransform InTransform;
			TEnumAsByte<EBoneSpaces::Type> BoneSpace;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_BoneSpace = { UE4CodeGen_Private::EPropertyClass::Byte, "BoneSpace", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PoseableMeshComponent_eventSetBoneTransformByName_Parms, BoneSpace), Z_Construct_UEnum_Engine_EBoneSpaces, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InTransform_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InTransform = { UE4CodeGen_Private::EPropertyClass::Struct, "InTransform", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(PoseableMeshComponent_eventSetBoneTransformByName_Parms, InTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(NewProp_InTransform_MetaData, ARRAY_COUNT(NewProp_InTransform_MetaData)) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName = { UE4CodeGen_Private::EPropertyClass::Name, "BoneName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PoseableMeshComponent_eventSetBoneTransformByName_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoneSpace,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InTransform,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoneName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|PoseableMesh" },
				{ "ModuleRelativePath", "Classes/Components/PoseableMeshComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPoseableMeshComponent, "SetBoneTransformByName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C20401, sizeof(PoseableMeshComponent_eventSetBoneTransformByName_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPoseableMeshComponent_NoRegister()
	{
		return UPoseableMeshComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UPoseableMeshComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_USkinnedMeshComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UPoseableMeshComponent_CopyPoseFromSkeletalComponent, "CopyPoseFromSkeletalComponent" }, // 4218857159
				{ &Z_Construct_UFunction_UPoseableMeshComponent_GetBoneLocationByName, "GetBoneLocationByName" }, // 3565489375
				{ &Z_Construct_UFunction_UPoseableMeshComponent_GetBoneRotationByName, "GetBoneRotationByName" }, // 1103913828
				{ &Z_Construct_UFunction_UPoseableMeshComponent_GetBoneScaleByName, "GetBoneScaleByName" }, // 3837954471
				{ &Z_Construct_UFunction_UPoseableMeshComponent_GetBoneTransformByName, "GetBoneTransformByName" }, // 3517201631
				{ &Z_Construct_UFunction_UPoseableMeshComponent_ResetBoneTransformByName, "ResetBoneTransformByName" }, // 3999956441
				{ &Z_Construct_UFunction_UPoseableMeshComponent_SetBoneLocationByName, "SetBoneLocationByName" }, // 3536078860
				{ &Z_Construct_UFunction_UPoseableMeshComponent_SetBoneRotationByName, "SetBoneRotationByName" }, // 618491473
				{ &Z_Construct_UFunction_UPoseableMeshComponent_SetBoneScaleByName, "SetBoneScaleByName" }, // 2810352101
				{ &Z_Construct_UFunction_UPoseableMeshComponent_SetBoneTransformByName, "SetBoneTransformByName" }, // 2997501552
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Rendering" },
				{ "HideCategories", "Object Physics Object Mobility Trigger" },
				{ "IncludePath", "Components/PoseableMeshComponent.h" },
				{ "ModuleRelativePath", "Classes/Components/PoseableMeshComponent.h" },
				{ "ToolTip", "UPoseableMeshComponent that allows bone transforms to be driven by blueprint." },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UPoseableMeshComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UPoseableMeshComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B01080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				nullptr, 0,
				"Engine",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPoseableMeshComponent, 1390855327);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPoseableMeshComponent(Z_Construct_UClass_UPoseableMeshComponent, &UPoseableMeshComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UPoseableMeshComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPoseableMeshComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
