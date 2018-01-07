// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Camera/CameraComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_UCameraComponent_AddOrUpdateBlendable();
	ENGINE_API UClass* Z_Construct_UClass_UBlendableInterface_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_UCameraComponent_GetCameraView();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMinimalViewInfo();
	ENGINE_API UFunction* Z_Construct_UFunction_UCameraComponent_RemoveBlendable();
	ENGINE_API UFunction* Z_Construct_UFunction_UCameraComponent_SetAspectRatio();
	ENGINE_API UFunction* Z_Construct_UFunction_UCameraComponent_SetConstraintAspectRatio();
	ENGINE_API UFunction* Z_Construct_UFunction_UCameraComponent_SetFieldOfView();
	ENGINE_API UFunction* Z_Construct_UFunction_UCameraComponent_SetOrthoFarClipPlane();
	ENGINE_API UFunction* Z_Construct_UFunction_UCameraComponent_SetOrthoNearClipPlane();
	ENGINE_API UFunction* Z_Construct_UFunction_UCameraComponent_SetOrthoWidth();
	ENGINE_API UFunction* Z_Construct_UFunction_UCameraComponent_SetPostProcessBlendWeight();
	ENGINE_API UFunction* Z_Construct_UFunction_UCameraComponent_SetProjectionMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECameraProjectionMode();
	ENGINE_API UFunction* Z_Construct_UFunction_UCameraComponent_SetUseFieldOfViewForLOD();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPostProcessSettings();
// End Cross Module References
	void UCameraComponent::StaticRegisterNativesUCameraComponent()
	{
		UClass* Class = UCameraComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddOrUpdateBlendable", (Native)&UCameraComponent::execAddOrUpdateBlendable },
			{ "GetCameraView", (Native)&UCameraComponent::execGetCameraView },
			{ "RemoveBlendable", (Native)&UCameraComponent::execRemoveBlendable },
			{ "SetAspectRatio", (Native)&UCameraComponent::execSetAspectRatio },
			{ "SetConstraintAspectRatio", (Native)&UCameraComponent::execSetConstraintAspectRatio },
			{ "SetFieldOfView", (Native)&UCameraComponent::execSetFieldOfView },
			{ "SetOrthoFarClipPlane", (Native)&UCameraComponent::execSetOrthoFarClipPlane },
			{ "SetOrthoNearClipPlane", (Native)&UCameraComponent::execSetOrthoNearClipPlane },
			{ "SetOrthoWidth", (Native)&UCameraComponent::execSetOrthoWidth },
			{ "SetPostProcessBlendWeight", (Native)&UCameraComponent::execSetPostProcessBlendWeight },
			{ "SetProjectionMode", (Native)&UCameraComponent::execSetProjectionMode },
			{ "SetUseFieldOfViewForLOD", (Native)&UCameraComponent::execSetUseFieldOfViewForLOD },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UCameraComponent_AddOrUpdateBlendable()
	{
		struct CameraComponent_eventAddOrUpdateBlendable_Parms
		{
			TScriptInterface<IBlendableInterface> InBlendableObject;
			float InWeight;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InWeight = { UE4CodeGen_Private::EPropertyClass::Float, "InWeight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CameraComponent_eventAddOrUpdateBlendable_Parms, InWeight), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_InBlendableObject = { UE4CodeGen_Private::EPropertyClass::Interface, "InBlendableObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000080, 1, nullptr, STRUCT_OFFSET(CameraComponent_eventAddOrUpdateBlendable_Parms, InBlendableObject), Z_Construct_UClass_UBlendableInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InWeight,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InBlendableObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering" },
				{ "CPP_Default_InWeight", "1.000000" },
				{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
				{ "ToolTip", "Adds an Blendable (implements IBlendableInterface) to the array of Blendables (if it doesn't exist) and update the weight" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraComponent, "AddOrUpdateBlendable", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CameraComponent_eventAddOrUpdateBlendable_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCameraComponent_GetCameraView()
	{
		struct CameraComponent_eventGetCameraView_Parms
		{
			float DeltaTime;
			FMinimalViewInfo DesiredView;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_DesiredView = { UE4CodeGen_Private::EPropertyClass::Struct, "DesiredView", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(CameraComponent_eventGetCameraView_Parms, DesiredView), Z_Construct_UScriptStruct_FMinimalViewInfo, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime = { UE4CodeGen_Private::EPropertyClass::Float, "DeltaTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CameraComponent_eventGetCameraView_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DesiredView,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DeltaTime,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Camera" },
				{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
				{ "ToolTip", "Returns camera's Point of View.\nCalled by Camera class. Subclass and postprocess to add any effects." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraComponent, "GetCameraView", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420400, sizeof(CameraComponent_eventGetCameraView_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCameraComponent_RemoveBlendable()
	{
		struct CameraComponent_eventRemoveBlendable_Parms
		{
			TScriptInterface<IBlendableInterface> InBlendableObject;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_InBlendableObject = { UE4CodeGen_Private::EPropertyClass::Interface, "InBlendableObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000080, 1, nullptr, STRUCT_OFFSET(CameraComponent_eventRemoveBlendable_Parms, InBlendableObject), Z_Construct_UClass_UBlendableInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InBlendableObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering" },
				{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
				{ "ToolTip", "Removes a blendable." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraComponent, "RemoveBlendable", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CameraComponent_eventRemoveBlendable_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCameraComponent_SetAspectRatio()
	{
		struct CameraComponent_eventSetAspectRatio_Parms
		{
			float InAspectRatio;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InAspectRatio = { UE4CodeGen_Private::EPropertyClass::Float, "InAspectRatio", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CameraComponent_eventSetAspectRatio_Parms, InAspectRatio), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InAspectRatio,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Camera" },
				{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraComponent, "SetAspectRatio", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CameraComponent_eventSetAspectRatio_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCameraComponent_SetConstraintAspectRatio()
	{
		struct CameraComponent_eventSetConstraintAspectRatio_Parms
		{
			bool bInConstrainAspectRatio;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bInConstrainAspectRatio_SetBit = [](void* Obj){ ((CameraComponent_eventSetConstraintAspectRatio_Parms*)Obj)->bInConstrainAspectRatio = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInConstrainAspectRatio = { UE4CodeGen_Private::EPropertyClass::Bool, "bInConstrainAspectRatio", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(CameraComponent_eventSetConstraintAspectRatio_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bInConstrainAspectRatio_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bInConstrainAspectRatio,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Camera" },
				{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraComponent, "SetConstraintAspectRatio", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CameraComponent_eventSetConstraintAspectRatio_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCameraComponent_SetFieldOfView()
	{
		struct CameraComponent_eventSetFieldOfView_Parms
		{
			float InFieldOfView;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InFieldOfView = { UE4CodeGen_Private::EPropertyClass::Float, "InFieldOfView", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CameraComponent_eventSetFieldOfView_Parms, InFieldOfView), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InFieldOfView,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Camera" },
				{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraComponent, "SetFieldOfView", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CameraComponent_eventSetFieldOfView_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCameraComponent_SetOrthoFarClipPlane()
	{
		struct CameraComponent_eventSetOrthoFarClipPlane_Parms
		{
			float InOrthoFarClipPlane;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InOrthoFarClipPlane = { UE4CodeGen_Private::EPropertyClass::Float, "InOrthoFarClipPlane", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CameraComponent_eventSetOrthoFarClipPlane_Parms, InOrthoFarClipPlane), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InOrthoFarClipPlane,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Camera" },
				{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraComponent, "SetOrthoFarClipPlane", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CameraComponent_eventSetOrthoFarClipPlane_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCameraComponent_SetOrthoNearClipPlane()
	{
		struct CameraComponent_eventSetOrthoNearClipPlane_Parms
		{
			float InOrthoNearClipPlane;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InOrthoNearClipPlane = { UE4CodeGen_Private::EPropertyClass::Float, "InOrthoNearClipPlane", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CameraComponent_eventSetOrthoNearClipPlane_Parms, InOrthoNearClipPlane), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InOrthoNearClipPlane,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Camera" },
				{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraComponent, "SetOrthoNearClipPlane", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CameraComponent_eventSetOrthoNearClipPlane_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCameraComponent_SetOrthoWidth()
	{
		struct CameraComponent_eventSetOrthoWidth_Parms
		{
			float InOrthoWidth;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InOrthoWidth = { UE4CodeGen_Private::EPropertyClass::Float, "InOrthoWidth", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CameraComponent_eventSetOrthoWidth_Parms, InOrthoWidth), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InOrthoWidth,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Camera" },
				{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraComponent, "SetOrthoWidth", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CameraComponent_eventSetOrthoWidth_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCameraComponent_SetPostProcessBlendWeight()
	{
		struct CameraComponent_eventSetPostProcessBlendWeight_Parms
		{
			float InPostProcessBlendWeight;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InPostProcessBlendWeight = { UE4CodeGen_Private::EPropertyClass::Float, "InPostProcessBlendWeight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CameraComponent_eventSetPostProcessBlendWeight_Parms, InPostProcessBlendWeight), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InPostProcessBlendWeight,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Camera" },
				{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraComponent, "SetPostProcessBlendWeight", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CameraComponent_eventSetPostProcessBlendWeight_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCameraComponent_SetProjectionMode()
	{
		struct CameraComponent_eventSetProjectionMode_Parms
		{
			TEnumAsByte<ECameraProjectionMode::Type> InProjectionMode;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_InProjectionMode = { UE4CodeGen_Private::EPropertyClass::Byte, "InProjectionMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CameraComponent_eventSetProjectionMode_Parms, InProjectionMode), Z_Construct_UEnum_Engine_ECameraProjectionMode, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InProjectionMode,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Camera" },
				{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraComponent, "SetProjectionMode", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CameraComponent_eventSetProjectionMode_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCameraComponent_SetUseFieldOfViewForLOD()
	{
		struct CameraComponent_eventSetUseFieldOfViewForLOD_Parms
		{
			bool bInUseFieldOfViewForLOD;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bInUseFieldOfViewForLOD_SetBit = [](void* Obj){ ((CameraComponent_eventSetUseFieldOfViewForLOD_Parms*)Obj)->bInUseFieldOfViewForLOD = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInUseFieldOfViewForLOD = { UE4CodeGen_Private::EPropertyClass::Bool, "bInUseFieldOfViewForLOD", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(CameraComponent_eventSetUseFieldOfViewForLOD_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bInUseFieldOfViewForLOD_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bInUseFieldOfViewForLOD,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Camera" },
				{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraComponent, "SetUseFieldOfViewForLOD", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CameraComponent_eventSetUseFieldOfViewForLOD_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCameraComponent_NoRegister()
	{
		return UCameraComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UCameraComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_USceneComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UCameraComponent_AddOrUpdateBlendable, "AddOrUpdateBlendable" }, // 293017930
				{ &Z_Construct_UFunction_UCameraComponent_GetCameraView, "GetCameraView" }, // 2512402785
				{ &Z_Construct_UFunction_UCameraComponent_RemoveBlendable, "RemoveBlendable" }, // 1770960426
				{ &Z_Construct_UFunction_UCameraComponent_SetAspectRatio, "SetAspectRatio" }, // 4072274529
				{ &Z_Construct_UFunction_UCameraComponent_SetConstraintAspectRatio, "SetConstraintAspectRatio" }, // 3285522828
				{ &Z_Construct_UFunction_UCameraComponent_SetFieldOfView, "SetFieldOfView" }, // 2301987537
				{ &Z_Construct_UFunction_UCameraComponent_SetOrthoFarClipPlane, "SetOrthoFarClipPlane" }, // 3682863472
				{ &Z_Construct_UFunction_UCameraComponent_SetOrthoNearClipPlane, "SetOrthoNearClipPlane" }, // 3150748007
				{ &Z_Construct_UFunction_UCameraComponent_SetOrthoWidth, "SetOrthoWidth" }, // 3415179732
				{ &Z_Construct_UFunction_UCameraComponent_SetPostProcessBlendWeight, "SetPostProcessBlendWeight" }, // 1869410403
				{ &Z_Construct_UFunction_UCameraComponent_SetProjectionMode, "SetProjectionMode" }, // 3291397762
				{ &Z_Construct_UFunction_UCameraComponent_SetUseFieldOfViewForLOD, "SetUseFieldOfViewForLOD" }, // 2274364051
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "BlueprintType", "true" },
				{ "ClassGroupNames", "Camera" },
				{ "HideCategories", "Mobility Rendering LOD Trigger PhysicsVolume" },
				{ "IncludePath", "Camera/CameraComponent.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
				{ "ToolTip", "Represents a camera viewpoint and settings, such as projection type, field of view, and post-process overrides.\nThe default behavior for an actor used as the camera view target is to look for an attached camera component and use its location, rotation, and settings." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseControllerViewRotation_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
				{ "ToolTip", "DEPRECATED: use bUsePawnControlRotation instead" },
			};
#endif
			auto NewProp_bUseControllerViewRotation_SetBit = [](void* Obj){ ((UCameraComponent*)Obj)->bUseControllerViewRotation_DEPRECATED = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseControllerViewRotation = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseControllerViewRotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UCameraComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseControllerViewRotation_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseControllerViewRotation_MetaData, ARRAY_COUNT(NewProp_bUseControllerViewRotation_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraMesh_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraMesh = { UE4CodeGen_Private::EPropertyClass::Object, "CameraMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080800002000, 1, nullptr, STRUCT_OFFSET(UCameraComponent, CameraMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(NewProp_CameraMesh_MetaData, ARRAY_COUNT(NewProp_CameraMesh_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostProcessSettings_MetaData[] = {
				{ "Category", "PostProcess" },
				{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
				{ "ToolTip", "Post process settings to use for this camera. Don't forget to check the properties you want to override" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PostProcessSettings = { UE4CodeGen_Private::EPropertyClass::Struct, "PostProcessSettings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000200000005, 1, nullptr, STRUCT_OFFSET(UCameraComponent, PostProcessSettings), Z_Construct_UScriptStruct_FPostProcessSettings, METADATA_PARAMS(NewProp_PostProcessSettings_MetaData, ARRAY_COUNT(NewProp_PostProcessSettings_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostProcessBlendWeight_MetaData[] = {
				{ "Category", "PostProcess" },
				{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
				{ "ToolTip", "Indicates if PostProcessSettings should be used when using this Camera to view through." },
				{ "UIMax", "1.0" },
				{ "UIMin", "0.0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PostProcessBlendWeight = { UE4CodeGen_Private::EPropertyClass::Float, "PostProcessBlendWeight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000200000005, 1, nullptr, STRUCT_OFFSET(UCameraComponent, PostProcessBlendWeight), METADATA_PARAMS(NewProp_PostProcessBlendWeight_MetaData, ARRAY_COUNT(NewProp_PostProcessBlendWeight_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectionMode_MetaData[] = {
				{ "Category", "CameraSettings" },
				{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
				{ "ToolTip", "The type of camera" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ProjectionMode = { UE4CodeGen_Private::EPropertyClass::Byte, "ProjectionMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000200000005, 1, nullptr, STRUCT_OFFSET(UCameraComponent, ProjectionMode), Z_Construct_UEnum_Engine_ECameraProjectionMode, METADATA_PARAMS(NewProp_ProjectionMode_MetaData, ARRAY_COUNT(NewProp_ProjectionMode_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsePawnControlRotation_MetaData[] = {
				{ "Category", "CameraSettings" },
				{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
				{ "ToolTip", "If this camera component is placed on a pawn, should it use the view/control rotation of the pawn where possible?\n@see APawn::GetViewRotation()" },
			};
#endif
			auto NewProp_bUsePawnControlRotation_SetBit = [](void* Obj){ ((UCameraComponent*)Obj)->bUsePawnControlRotation = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsePawnControlRotation = { UE4CodeGen_Private::EPropertyClass::Bool, "bUsePawnControlRotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UCameraComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUsePawnControlRotation_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUsePawnControlRotation_MetaData, ARRAY_COUNT(NewProp_bUsePawnControlRotation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLockToHmd_MetaData[] = {
				{ "Category", "CameraSettings" },
				{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
				{ "ToolTip", "True if the camera's orientation and position should be locked to the HMD" },
			};
#endif
			auto NewProp_bLockToHmd_SetBit = [](void* Obj){ ((UCameraComponent*)Obj)->bLockToHmd = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLockToHmd = { UE4CodeGen_Private::EPropertyClass::Bool, "bLockToHmd", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UCameraComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bLockToHmd_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bLockToHmd_MetaData, ARRAY_COUNT(NewProp_bLockToHmd_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseFieldOfViewForLOD_MetaData[] = {
				{ "Category", "CameraSettings" },
				{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
				{ "ToolTip", "If true, account for the field of view angle when computing which level of detail to use for meshes." },
			};
#endif
			auto NewProp_bUseFieldOfViewForLOD_SetBit = [](void* Obj){ ((UCameraComponent*)Obj)->bUseFieldOfViewForLOD = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseFieldOfViewForLOD = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseFieldOfViewForLOD", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040200000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UCameraComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseFieldOfViewForLOD_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseFieldOfViewForLOD_MetaData, ARRAY_COUNT(NewProp_bUseFieldOfViewForLOD_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bConstrainAspectRatio_MetaData[] = {
				{ "Category", "CameraSettings" },
				{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
				{ "ToolTip", "If bConstrainAspectRatio is true, black bars will be added if the destination view has a different aspect ratio than this camera requested." },
			};
#endif
			auto NewProp_bConstrainAspectRatio_SetBit = [](void* Obj){ ((UCameraComponent*)Obj)->bConstrainAspectRatio = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConstrainAspectRatio = { UE4CodeGen_Private::EPropertyClass::Bool, "bConstrainAspectRatio", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000200000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UCameraComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bConstrainAspectRatio_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bConstrainAspectRatio_MetaData, ARRAY_COUNT(NewProp_bConstrainAspectRatio_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AspectRatio_MetaData[] = {
				{ "Category", "CameraSettings" },
				{ "ClampMax", "100.0" },
				{ "ClampMin", "0.1" },
				{ "EditCondition", "bConstrainAspectRatio" },
				{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
				{ "ToolTip", "Aspect Ratio (Width/Height)" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AspectRatio = { UE4CodeGen_Private::EPropertyClass::Float, "AspectRatio", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000200000005, 1, nullptr, STRUCT_OFFSET(UCameraComponent, AspectRatio), METADATA_PARAMS(NewProp_AspectRatio_MetaData, ARRAY_COUNT(NewProp_AspectRatio_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrthoFarClipPlane_MetaData[] = {
				{ "Category", "CameraSettings" },
				{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
				{ "ToolTip", "The far plane distance of the orthographic view (in world units)" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OrthoFarClipPlane = { UE4CodeGen_Private::EPropertyClass::Float, "OrthoFarClipPlane", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000200000005, 1, nullptr, STRUCT_OFFSET(UCameraComponent, OrthoFarClipPlane), METADATA_PARAMS(NewProp_OrthoFarClipPlane_MetaData, ARRAY_COUNT(NewProp_OrthoFarClipPlane_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrthoNearClipPlane_MetaData[] = {
				{ "Category", "CameraSettings" },
				{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
				{ "ToolTip", "The near plane distance of the orthographic view (in world units)" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OrthoNearClipPlane = { UE4CodeGen_Private::EPropertyClass::Float, "OrthoNearClipPlane", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000200000005, 1, nullptr, STRUCT_OFFSET(UCameraComponent, OrthoNearClipPlane), METADATA_PARAMS(NewProp_OrthoNearClipPlane_MetaData, ARRAY_COUNT(NewProp_OrthoNearClipPlane_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrthoWidth_MetaData[] = {
				{ "Category", "CameraSettings" },
				{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
				{ "ToolTip", "The desired width (in world units) of the orthographic view (ignored in Perspective mode)" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OrthoWidth = { UE4CodeGen_Private::EPropertyClass::Float, "OrthoWidth", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000200000005, 1, nullptr, STRUCT_OFFSET(UCameraComponent, OrthoWidth), METADATA_PARAMS(NewProp_OrthoWidth_MetaData, ARRAY_COUNT(NewProp_OrthoWidth_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldOfView_MetaData[] = {
				{ "Category", "CameraSettings" },
				{ "ClampMax", "360.0" },
				{ "ClampMin", "0.001" },
				{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
				{ "ToolTip", "The horizontal field of view (in degrees) in perspective mode (ignored in Orthographic mode)" },
				{ "UIMax", "170" },
				{ "UIMin", "5.0" },
				{ "Units", "deg" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FieldOfView = { UE4CodeGen_Private::EPropertyClass::Float, "FieldOfView", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000200000005, 1, nullptr, STRUCT_OFFSET(UCameraComponent, FieldOfView), METADATA_PARAMS(NewProp_FieldOfView_MetaData, ARRAY_COUNT(NewProp_FieldOfView_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseControllerViewRotation,
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CameraMesh,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PostProcessSettings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PostProcessBlendWeight,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ProjectionMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUsePawnControlRotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bLockToHmd,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseFieldOfViewForLOD,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bConstrainAspectRatio,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AspectRatio,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OrthoFarClipPlane,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OrthoNearClipPlane,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OrthoWidth,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FieldOfView,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UCameraComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UCameraComponent::StaticClass,
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
	IMPLEMENT_CLASS(UCameraComponent, 3927140094);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCameraComponent(Z_Construct_UClass_UCameraComponent, &UCameraComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UCameraComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCameraComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
