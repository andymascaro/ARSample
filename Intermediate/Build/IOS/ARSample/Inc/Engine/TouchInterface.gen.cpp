// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/GameFramework/TouchInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTouchInterface() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTouchInputControl();
	UPackage* Z_Construct_UPackage__Script_Engine();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTouchInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTouchInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FTouchInputControl::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FTouchInputControl_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTouchInputControl, Z_Construct_UPackage__Script_Engine(), TEXT("TouchInputControl"), sizeof(FTouchInputControl), Get_Z_Construct_UScriptStruct_FTouchInputControl_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTouchInputControl(FTouchInputControl::StaticStruct, TEXT("/Script/Engine"), TEXT("TouchInputControl"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFTouchInputControl
{
	FScriptStruct_Engine_StaticRegisterNativesFTouchInputControl()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TouchInputControl")),new UScriptStruct::TCppStructOps<FTouchInputControl>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFTouchInputControl;
	UScriptStruct* Z_Construct_UScriptStruct_FTouchInputControl()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTouchInputControl_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TouchInputControl"), sizeof(FTouchInputControl), Get_Z_Construct_UScriptStruct_FTouchInputControl_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/TouchInterface.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTouchInputControl>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AltInputKey_MetaData[] = {
				{ "Category", "Control" },
				{ "ModuleRelativePath", "Classes/GameFramework/TouchInterface.h" },
				{ "ToolTip", "The alternate input to send from this control (for sticks, this is the vertical axis)" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AltInputKey = { UE4CodeGen_Private::EPropertyClass::Struct, "AltInputKey", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FTouchInputControl, AltInputKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(NewProp_AltInputKey_MetaData, ARRAY_COUNT(NewProp_AltInputKey_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainInputKey_MetaData[] = {
				{ "Category", "Control" },
				{ "ModuleRelativePath", "Classes/GameFramework/TouchInterface.h" },
				{ "ToolTip", "The main input to send from this control (for sticks, this is the horizontal axis)" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_MainInputKey = { UE4CodeGen_Private::EPropertyClass::Struct, "MainInputKey", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FTouchInputControl, MainInputKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(NewProp_MainInputKey_MetaData, ARRAY_COUNT(NewProp_MainInputKey_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputScale_MetaData[] = {
				{ "Category", "Control" },
				{ "ModuleRelativePath", "Classes/GameFramework/TouchInterface.h" },
				{ "ToolTip", "The scale for control input" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputScale = { UE4CodeGen_Private::EPropertyClass::Struct, "InputScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FTouchInputControl, InputScale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(NewProp_InputScale_MetaData, ARRAY_COUNT(NewProp_InputScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionSize_MetaData[] = {
				{ "Category", "Control" },
				{ "ModuleRelativePath", "Classes/GameFramework/TouchInterface.h" },
				{ "ToolTip", "The interactive size of the control (if <= 1.0, it's relative to screen, > 1.0 is absolute)" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InteractionSize = { UE4CodeGen_Private::EPropertyClass::Struct, "InteractionSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FTouchInputControl, InteractionSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(NewProp_InteractionSize_MetaData, ARRAY_COUNT(NewProp_InteractionSize_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThumbSize_MetaData[] = {
				{ "Category", "Control" },
				{ "ModuleRelativePath", "Classes/GameFramework/TouchInterface.h" },
				{ "ToolTip", "For sticks, the size of the thumb (if <= 1.0, it's relative to screen, > 1.0 is absolute)" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ThumbSize = { UE4CodeGen_Private::EPropertyClass::Struct, "ThumbSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FTouchInputControl, ThumbSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(NewProp_ThumbSize_MetaData, ARRAY_COUNT(NewProp_ThumbSize_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisualSize_MetaData[] = {
				{ "Category", "Control" },
				{ "ModuleRelativePath", "Classes/GameFramework/TouchInterface.h" },
				{ "ToolTip", "The size of the control (if <= 1.0, it's relative to screen, > 1.0 is absolute)" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_VisualSize = { UE4CodeGen_Private::EPropertyClass::Struct, "VisualSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FTouchInputControl, VisualSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(NewProp_VisualSize_MetaData, ARRAY_COUNT(NewProp_VisualSize_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[] = {
				{ "Category", "Control" },
				{ "ModuleRelativePath", "Classes/GameFramework/TouchInterface.h" },
				{ "ToolTip", "The center point of the control (if <= 1.0, it's relative to screen, > 1.0 is absolute)" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Center = { UE4CodeGen_Private::EPropertyClass::Struct, "Center", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FTouchInputControl, Center), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(NewProp_Center_MetaData, ARRAY_COUNT(NewProp_Center_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Image2_MetaData[] = {
				{ "Category", "Control" },
				{ "ModuleRelativePath", "Classes/GameFramework/TouchInterface.h" },
				{ "ToolTip", "For sticks, this is the Background" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Image2 = { UE4CodeGen_Private::EPropertyClass::Object, "Image2", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FTouchInputControl, Image2), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(NewProp_Image2_MetaData, ARRAY_COUNT(NewProp_Image2_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Image1_MetaData[] = {
				{ "Category", "Control" },
				{ "ModuleRelativePath", "Classes/GameFramework/TouchInterface.h" },
				{ "ToolTip", "For sticks, this is the Thumb" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Image1 = { UE4CodeGen_Private::EPropertyClass::Object, "Image1", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FTouchInputControl, Image1), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(NewProp_Image1_MetaData, ARRAY_COUNT(NewProp_Image1_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AltInputKey,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MainInputKey,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InputScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InteractionSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ThumbSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VisualSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Center,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Image2,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Image1,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"TouchInputControl",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FTouchInputControl),
				alignof(FTouchInputControl),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTouchInputControl_CRC() { return 1397720237U; }
	void UTouchInterface::StaticRegisterNativesUTouchInterface()
	{
	}
	UClass* Z_Construct_UClass_UTouchInterface_NoRegister()
	{
		return UTouchInterface::StaticClass();
	}
	UClass* Z_Construct_UClass_UTouchInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "GameFramework/TouchInterface.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Classes/GameFramework/TouchInterface.h" },
				{ "ToolTip", "Defines an interface by which touch input can be controlled using any number of buttons and virtual joysticks" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartupDelay_MetaData[] = {
				{ "Category", "TouchInterface" },
				{ "ModuleRelativePath", "Classes/GameFramework/TouchInterface.h" },
				{ "ToolTip", "Delay at startup before virtual joystick is drawn" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartupDelay = { UE4CodeGen_Private::EPropertyClass::Float, "StartupDelay", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UTouchInterface, StartupDelay), METADATA_PARAMS(NewProp_StartupDelay_MetaData, ARRAY_COUNT(NewProp_StartupDelay_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPreventRecenter_MetaData[] = {
				{ "Category", "TouchInterface" },
				{ "ModuleRelativePath", "Classes/GameFramework/TouchInterface.h" },
				{ "ToolTip", "Whether to prevent joystick re-center" },
			};
#endif
			auto NewProp_bPreventRecenter_SetBit = [](void* Obj){ ((UTouchInterface*)Obj)->bPreventRecenter = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPreventRecenter = { UE4CodeGen_Private::EPropertyClass::Bool, "bPreventRecenter", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UTouchInterface), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bPreventRecenter_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bPreventRecenter_MetaData, ARRAY_COUNT(NewProp_bPreventRecenter_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivationDelay_MetaData[] = {
				{ "Category", "TouchInterface" },
				{ "ModuleRelativePath", "Classes/GameFramework/TouchInterface.h" },
				{ "ToolTip", "How long after joystick enabled for touch (0.0 will disable this feature)" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ActivationDelay = { UE4CodeGen_Private::EPropertyClass::Float, "ActivationDelay", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UTouchInterface, ActivationDelay), METADATA_PARAMS(NewProp_ActivationDelay_MetaData, ARRAY_COUNT(NewProp_ActivationDelay_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeUntilReset_MetaData[] = {
				{ "Category", "TouchInterface" },
				{ "ModuleRelativePath", "Classes/GameFramework/TouchInterface.h" },
				{ "ToolTip", "How long after going inactive will controls reset/recenter themselves (0.0 will disable this feature)" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeUntilReset = { UE4CodeGen_Private::EPropertyClass::Float, "TimeUntilReset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UTouchInterface, TimeUntilReset), METADATA_PARAMS(NewProp_TimeUntilReset_MetaData, ARRAY_COUNT(NewProp_TimeUntilReset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeUntilDeactive_MetaData[] = {
				{ "Category", "TouchInterface" },
				{ "ModuleRelativePath", "Classes/GameFramework/TouchInterface.h" },
				{ "ToolTip", "How long after user interaction will all controls fade out to Inactive Opacity" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeUntilDeactive = { UE4CodeGen_Private::EPropertyClass::Float, "TimeUntilDeactive", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UTouchInterface, TimeUntilDeactive), METADATA_PARAMS(NewProp_TimeUntilDeactive_MetaData, ARRAY_COUNT(NewProp_TimeUntilDeactive_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InactiveOpacity_MetaData[] = {
				{ "Category", "TouchInterface" },
				{ "ModuleRelativePath", "Classes/GameFramework/TouchInterface.h" },
				{ "ToolTip", "Opacity (0.0 - 1.0) of all controls while no controls are active" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InactiveOpacity = { UE4CodeGen_Private::EPropertyClass::Float, "InactiveOpacity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UTouchInterface, InactiveOpacity), METADATA_PARAMS(NewProp_InactiveOpacity_MetaData, ARRAY_COUNT(NewProp_InactiveOpacity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveOpacity_MetaData[] = {
				{ "Category", "TouchInterface" },
				{ "ModuleRelativePath", "Classes/GameFramework/TouchInterface.h" },
				{ "ToolTip", "Opacity (0.0 - 1.0) of all controls while any control is active" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ActiveOpacity = { UE4CodeGen_Private::EPropertyClass::Float, "ActiveOpacity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UTouchInterface, ActiveOpacity), METADATA_PARAMS(NewProp_ActiveOpacity_MetaData, ARRAY_COUNT(NewProp_ActiveOpacity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Controls_MetaData[] = {
				{ "Category", "TouchInterface" },
				{ "ModuleRelativePath", "Classes/GameFramework/TouchInterface.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Controls = { UE4CodeGen_Private::EPropertyClass::Array, "Controls", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UTouchInterface, Controls), METADATA_PARAMS(NewProp_Controls_MetaData, ARRAY_COUNT(NewProp_Controls_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Controls_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Controls", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FTouchInputControl, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StartupDelay,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bPreventRecenter,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ActivationDelay,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TimeUntilReset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TimeUntilDeactive,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InactiveOpacity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ActiveOpacity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Controls,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Controls_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UTouchInterface>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UTouchInterface::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
				nullptr, 0,
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
	IMPLEMENT_CLASS(UTouchInterface, 2987561776);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTouchInterface(Z_Construct_UClass_UTouchInterface, &UTouchInterface::StaticClass, TEXT("/Script/Engine"), TEXT("UTouchInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTouchInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
