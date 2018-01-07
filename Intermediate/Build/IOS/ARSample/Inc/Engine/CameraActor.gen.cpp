// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Camera/CameraActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACameraActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACameraActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_ACameraActor_GetAutoActivatePlayerIndex();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPostProcessSettings();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAutoReceiveInput();
// End Cross Module References
	void ACameraActor::StaticRegisterNativesACameraActor()
	{
		UClass* Class = ACameraActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAutoActivatePlayerIndex", (Native)&ACameraActor::execGetAutoActivatePlayerIndex },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ACameraActor_GetAutoActivatePlayerIndex()
	{
		struct CameraActor_eventGetAutoActivatePlayerIndex_Parms
		{
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CameraActor_eventGetAutoActivatePlayerIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AutoPlayerActivation" },
				{ "ModuleRelativePath", "Classes/Camera/CameraActor.h" },
				{ "ToolTip", "Returns index of the player for whom we auto-activate, or INDEX_NONE (-1) if disabled." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ACameraActor, "GetAutoActivatePlayerIndex", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(CameraActor_eventGetAutoActivatePlayerIndex_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACameraActor_NoRegister()
	{
		return ACameraActor::StaticClass();
	}
	UClass* Z_Construct_UClass_ACameraActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ACameraActor_GetAutoActivatePlayerIndex, "GetAutoActivatePlayerIndex" }, // 2331079648
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ClassGroupNames", "Common" },
				{ "HideCategories", "Input Rendering" },
				{ "IncludePath", "Camera/CameraActor.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Classes/Camera/CameraActor.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
				{ "ToolTip", "A CameraActor is a camera viewpoint that can be placed in a level." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostProcessSettings_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Camera/CameraActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PostProcessSettings = { UE4CodeGen_Private::EPropertyClass::Struct, "PostProcessSettings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000020000000, 1, nullptr, STRUCT_OFFSET(ACameraActor, PostProcessSettings_DEPRECATED), Z_Construct_UScriptStruct_FPostProcessSettings, METADATA_PARAMS(NewProp_PostProcessSettings_MetaData, ARRAY_COUNT(NewProp_PostProcessSettings_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostProcessBlendWeight_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Camera/CameraActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PostProcessBlendWeight = { UE4CodeGen_Private::EPropertyClass::Float, "PostProcessBlendWeight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000020000000, 1, nullptr, STRUCT_OFFSET(ACameraActor, PostProcessBlendWeight_DEPRECATED), METADATA_PARAMS(NewProp_PostProcessBlendWeight_MetaData, ARRAY_COUNT(NewProp_PostProcessBlendWeight_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FOVAngle_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Camera/CameraActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FOVAngle = { UE4CodeGen_Private::EPropertyClass::Float, "FOVAngle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000020000000, 1, nullptr, STRUCT_OFFSET(ACameraActor, FOVAngle_DEPRECATED), METADATA_PARAMS(NewProp_FOVAngle_MetaData, ARRAY_COUNT(NewProp_FOVAngle_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AspectRatio_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Camera/CameraActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AspectRatio = { UE4CodeGen_Private::EPropertyClass::Float, "AspectRatio", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000020000000, 1, nullptr, STRUCT_OFFSET(ACameraActor, AspectRatio_DEPRECATED), METADATA_PARAMS(NewProp_AspectRatio_MetaData, ARRAY_COUNT(NewProp_AspectRatio_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bConstrainAspectRatio_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Camera/CameraActor.h" },
			};
#endif
			auto NewProp_bConstrainAspectRatio_SetBit = [](void* Obj){ ((ACameraActor*)Obj)->bConstrainAspectRatio_DEPRECATED = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConstrainAspectRatio = { UE4CodeGen_Private::EPropertyClass::Bool, "bConstrainAspectRatio", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000020000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ACameraActor), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bConstrainAspectRatio_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bConstrainAspectRatio_MetaData, ARRAY_COUNT(NewProp_bConstrainAspectRatio_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SceneComponent_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "CameraActor" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/Camera/CameraActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SceneComponent = { UE4CodeGen_Private::EPropertyClass::Object, "SceneComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(ACameraActor, SceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_SceneComponent_MetaData, ARRAY_COUNT(NewProp_SceneComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "CameraActor" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/Camera/CameraActor.h" },
				{ "ToolTip", "The camera component for this camera" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraComponent = { UE4CodeGen_Private::EPropertyClass::Object, "CameraComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(ACameraActor, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(NewProp_CameraComponent_MetaData, ARRAY_COUNT(NewProp_CameraComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoActivateForPlayer_MetaData[] = {
				{ "Category", "AutoPlayerActivation" },
				{ "ModuleRelativePath", "Classes/Camera/CameraActor.h" },
				{ "ToolTip", "Specifies which player controller, if any, should automatically use this Camera when the controller is active." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_AutoActivateForPlayer = { UE4CodeGen_Private::EPropertyClass::Byte, "AutoActivateForPlayer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(ACameraActor, AutoActivateForPlayer), Z_Construct_UEnum_Engine_EAutoReceiveInput, METADATA_PARAMS(NewProp_AutoActivateForPlayer_MetaData, ARRAY_COUNT(NewProp_AutoActivateForPlayer_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PostProcessSettings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PostProcessBlendWeight,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FOVAngle,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AspectRatio,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bConstrainAspectRatio,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SceneComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CameraComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AutoActivateForPlayer,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ACameraActor>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ACameraActor::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
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
	IMPLEMENT_CLASS(ACameraActor, 284834428);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACameraActor(Z_Construct_UClass_ACameraActor, &ACameraActor::StaticClass, TEXT("/Script/Engine"), TEXT("ACameraActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACameraActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
