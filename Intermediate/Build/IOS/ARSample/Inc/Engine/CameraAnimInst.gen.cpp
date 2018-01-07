// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Camera/CameraAnimInst.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraAnimInst() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCameraAnimInst_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraAnimInst();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_UCameraAnimInst_SetDuration();
	ENGINE_API UFunction* Z_Construct_UFunction_UCameraAnimInst_SetScale();
	ENGINE_API UFunction* Z_Construct_UFunction_UCameraAnimInst_Stop();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECameraAnimPlaySpace();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstMove_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackMove_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpGroupInst_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraAnim_NoRegister();
// End Cross Module References
	void UCameraAnimInst::StaticRegisterNativesUCameraAnimInst()
	{
		UClass* Class = UCameraAnimInst::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetDuration", (Native)&UCameraAnimInst::execSetDuration },
			{ "SetScale", (Native)&UCameraAnimInst::execSetScale },
			{ "Stop", (Native)&UCameraAnimInst::execStop },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UCameraAnimInst_SetDuration()
	{
		struct CameraAnimInst_eventSetDuration_Parms
		{
			float NewDuration;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewDuration = { UE4CodeGen_Private::EPropertyClass::Float, "NewDuration", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CameraAnimInst_eventSetDuration_Parms, NewDuration), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewDuration,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "CameraAnimInst" },
				{ "ModuleRelativePath", "Classes/Camera/CameraAnimInst.h" },
				{ "ToolTip", "Changes the running duration of this active anim, while maintaining playback position." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraAnimInst, "SetDuration", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CameraAnimInst_eventSetDuration_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCameraAnimInst_SetScale()
	{
		struct CameraAnimInst_eventSetScale_Parms
		{
			float NewDuration;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewDuration = { UE4CodeGen_Private::EPropertyClass::Float, "NewDuration", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CameraAnimInst_eventSetScale_Parms, NewDuration), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewDuration,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "CameraAnimInst" },
				{ "ModuleRelativePath", "Classes/Camera/CameraAnimInst.h" },
				{ "ToolTip", "Changes the scale of the animation while playing." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraAnimInst, "SetScale", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CameraAnimInst_eventSetScale_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCameraAnimInst_Stop()
	{
		struct CameraAnimInst_eventStop_Parms
		{
			bool bImmediate;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bImmediate_SetBit = [](void* Obj){ ((CameraAnimInst_eventStop_Parms*)Obj)->bImmediate = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bImmediate = { UE4CodeGen_Private::EPropertyClass::Bool, "bImmediate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(CameraAnimInst_eventStop_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bImmediate_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bImmediate,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "CameraAnimInst" },
				{ "CPP_Default_bImmediate", "false" },
				{ "ModuleRelativePath", "Classes/Camera/CameraAnimInst.h" },
				{ "ToolTip", "Stops this instance playing whatever animation it is playing." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraAnimInst, "Stop", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CameraAnimInst_eventStop_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCameraAnimInst_NoRegister()
	{
		return UCameraAnimInst::StaticClass();
	}
	UClass* Z_Construct_UClass_UCameraAnimInst()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UCameraAnimInst_SetDuration, "SetDuration" }, // 2864603852
				{ &Z_Construct_UFunction_UCameraAnimInst_SetScale, "SetScale" }, // 2630477575
				{ &Z_Construct_UFunction_UCameraAnimInst_Stop, "Stop" }, // 2451774613
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "Camera/CameraAnimInst.h" },
				{ "ModuleRelativePath", "Classes/Camera/CameraAnimInst.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlaySpace_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Camera/CameraAnimInst.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlaySpace = { UE4CodeGen_Private::EPropertyClass::Byte, "PlaySpace", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UCameraAnimInst, PlaySpace), Z_Construct_UEnum_Engine_ECameraAnimPlaySpace, METADATA_PARAMS(NewProp_PlaySpace_MetaData, ARRAY_COUNT(NewProp_PlaySpace_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveInst_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Camera/CameraAnimInst.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MoveInst = { UE4CodeGen_Private::EPropertyClass::Object, "MoveInst", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, STRUCT_OFFSET(UCameraAnimInst, MoveInst), Z_Construct_UClass_UInterpTrackInstMove_NoRegister, METADATA_PARAMS(NewProp_MoveInst_MetaData, ARRAY_COUNT(NewProp_MoveInst_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveTrack_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Camera/CameraAnimInst.h" },
				{ "ToolTip", "cached movement track from the currently playing anim so we don't have to go find it every frame" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MoveTrack = { UE4CodeGen_Private::EPropertyClass::Object, "MoveTrack", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, STRUCT_OFFSET(UCameraAnimInst, MoveTrack), Z_Construct_UClass_UInterpTrackMove_NoRegister, METADATA_PARAMS(NewProp_MoveTrack_MetaData, ARRAY_COUNT(NewProp_MoveTrack_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[] = {
				{ "Category", "CameraAnimInst" },
				{ "ModuleRelativePath", "Classes/Camera/CameraAnimInst.h" },
				{ "ToolTip", "Multiplier for playback rate.  1.0 = normal." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayRate = { UE4CodeGen_Private::EPropertyClass::Float, "PlayRate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000004, 1, nullptr, STRUCT_OFFSET(UCameraAnimInst, PlayRate), METADATA_PARAMS(NewProp_PlayRate_MetaData, ARRAY_COUNT(NewProp_PlayRate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpGroupInst_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/Camera/CameraAnimInst.h" },
				{ "ToolTip", "the UInterpGroupInst used to do the interpolation" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InterpGroupInst = { UE4CodeGen_Private::EPropertyClass::Object, "InterpGroupInst", RF_Public|RF_Transient|RF_MarkAsNative, 0x0042000000080008, 1, nullptr, STRUCT_OFFSET(UCameraAnimInst, InterpGroupInst), Z_Construct_UClass_UInterpGroupInst_NoRegister, METADATA_PARAMS(NewProp_InterpGroupInst_MetaData, ARRAY_COUNT(NewProp_InterpGroupInst_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CamAnim_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Camera/CameraAnimInst.h" },
				{ "ToolTip", "which CameraAnim this is an instance of" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CamAnim = { UE4CodeGen_Private::EPropertyClass::Object, "CamAnim", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UCameraAnimInst, CamAnim), Z_Construct_UClass_UCameraAnim_NoRegister, METADATA_PARAMS(NewProp_CamAnim_MetaData, ARRAY_COUNT(NewProp_CamAnim_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlaySpace,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MoveInst,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MoveTrack,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlayRate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InterpGroupInst,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CamAnim,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UCameraAnimInst>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UCameraAnimInst::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900288u,
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
	IMPLEMENT_CLASS(UCameraAnimInst, 4124243351);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCameraAnimInst(Z_Construct_UClass_UCameraAnimInst, &UCameraAnimInst::StaticClass, TEXT("/Script/Engine"), TEXT("UCameraAnimInst"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCameraAnimInst);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
