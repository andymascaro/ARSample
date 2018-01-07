// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/GameFramework/PlayerInput.h"
#include "Classes/GameFramework/PlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerInput() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputAxisKeyMapping();
	UPackage* Z_Construct_UPackage__Script_Engine();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionKeyMapping();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputAxisConfigEntry();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputAxisProperties();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FKeyBind();
	ENGINE_API UClass* Z_Construct_UClass_UPlayerInput_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPlayerInput();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UFunction* Z_Construct_UFunction_UPlayerInput_ClearSmoothing();
	ENGINE_API UFunction* Z_Construct_UFunction_UPlayerInput_InvertAxis();
	ENGINE_API UFunction* Z_Construct_UFunction_UPlayerInput_InvertAxisKey();
	ENGINE_API UFunction* Z_Construct_UFunction_UPlayerInput_SetBind();
	ENGINE_API UFunction* Z_Construct_UFunction_UPlayerInput_SetMouseSensitivity();
// End Cross Module References
class UScriptStruct* FInputAxisKeyMapping::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FInputAxisKeyMapping_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputAxisKeyMapping, Z_Construct_UPackage__Script_Engine(), TEXT("InputAxisKeyMapping"), sizeof(FInputAxisKeyMapping), Get_Z_Construct_UScriptStruct_FInputAxisKeyMapping_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInputAxisKeyMapping(FInputAxisKeyMapping::StaticStruct, TEXT("/Script/Engine"), TEXT("InputAxisKeyMapping"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFInputAxisKeyMapping
{
	FScriptStruct_Engine_StaticRegisterNativesFInputAxisKeyMapping()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InputAxisKeyMapping")),new UScriptStruct::TCppStructOps<FInputAxisKeyMapping>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFInputAxisKeyMapping;
	UScriptStruct* Z_Construct_UScriptStruct_FInputAxisKeyMapping()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInputAxisKeyMapping_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InputAxisKeyMapping"), sizeof(FInputAxisKeyMapping), Get_Z_Construct_UScriptStruct_FInputAxisKeyMapping_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
				{ "ToolTip", "Defines a mapping between an axis and key\n\n@see https://docs.unrealengine.com/latest/INT/Gameplay/Input/index.html" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputAxisKeyMapping>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
				{ "Category", "Input" },
				{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
				{ "ToolTip", "Multiplier to use for the mapping when accumulating the axis value" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scale = { UE4CodeGen_Private::EPropertyClass::Float, "Scale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FInputAxisKeyMapping, Scale), METADATA_PARAMS(NewProp_Scale_MetaData, ARRAY_COUNT(NewProp_Scale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
				{ "Category", "Input" },
				{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
				{ "ToolTip", "Key to bind it to." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Struct, "Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FInputAxisKeyMapping, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(NewProp_Key_MetaData, ARRAY_COUNT(NewProp_Key_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AxisName_MetaData[] = {
				{ "Category", "Input" },
				{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
				{ "ToolTip", "Friendly name of axis, e.g \"MoveForward\"" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_AxisName = { UE4CodeGen_Private::EPropertyClass::Name, "AxisName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FInputAxisKeyMapping, AxisName), METADATA_PARAMS(NewProp_AxisName_MetaData, ARRAY_COUNT(NewProp_AxisName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Scale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Key,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AxisName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"InputAxisKeyMapping",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FInputAxisKeyMapping),
				alignof(FInputAxisKeyMapping),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInputAxisKeyMapping_CRC() { return 2237611046U; }
class UScriptStruct* FInputActionKeyMapping::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FInputActionKeyMapping_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputActionKeyMapping, Z_Construct_UPackage__Script_Engine(), TEXT("InputActionKeyMapping"), sizeof(FInputActionKeyMapping), Get_Z_Construct_UScriptStruct_FInputActionKeyMapping_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInputActionKeyMapping(FInputActionKeyMapping::StaticStruct, TEXT("/Script/Engine"), TEXT("InputActionKeyMapping"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFInputActionKeyMapping
{
	FScriptStruct_Engine_StaticRegisterNativesFInputActionKeyMapping()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InputActionKeyMapping")),new UScriptStruct::TCppStructOps<FInputActionKeyMapping>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFInputActionKeyMapping;
	UScriptStruct* Z_Construct_UScriptStruct_FInputActionKeyMapping()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInputActionKeyMapping_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InputActionKeyMapping"), sizeof(FInputActionKeyMapping), Get_Z_Construct_UScriptStruct_FInputActionKeyMapping_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
				{ "ToolTip", "Defines a mapping between an action and key\n\n@see https://docs.unrealengine.com/latest/INT/Gameplay/Input/index.html" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputActionKeyMapping>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCmd_MetaData[] = {
				{ "Category", "Input" },
				{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
				{ "ToolTip", "true if one of the Cmd keys must be down when the KeyEvent is received to be acknowledged" },
			};
#endif
			auto NewProp_bCmd_SetBit = [](void* Obj){ ((FInputActionKeyMapping*)Obj)->bCmd = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCmd = { UE4CodeGen_Private::EPropertyClass::Bool, "bCmd", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FInputActionKeyMapping), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCmd_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCmd_MetaData, ARRAY_COUNT(NewProp_bCmd_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAlt_MetaData[] = {
				{ "Category", "Input" },
				{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
				{ "ToolTip", "true if one of the Alt keys must be down when the KeyEvent is received to be acknowledged" },
			};
#endif
			auto NewProp_bAlt_SetBit = [](void* Obj){ ((FInputActionKeyMapping*)Obj)->bAlt = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAlt = { UE4CodeGen_Private::EPropertyClass::Bool, "bAlt", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FInputActionKeyMapping), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAlt_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAlt_MetaData, ARRAY_COUNT(NewProp_bAlt_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCtrl_MetaData[] = {
				{ "Category", "Input" },
				{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
				{ "ToolTip", "true if one of the Ctrl keys must be down when the KeyEvent is received to be acknowledged" },
			};
#endif
			auto NewProp_bCtrl_SetBit = [](void* Obj){ ((FInputActionKeyMapping*)Obj)->bCtrl = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCtrl = { UE4CodeGen_Private::EPropertyClass::Bool, "bCtrl", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FInputActionKeyMapping), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCtrl_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCtrl_MetaData, ARRAY_COUNT(NewProp_bCtrl_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShift_MetaData[] = {
				{ "Category", "Input" },
				{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
				{ "ToolTip", "true if one of the Shift keys must be down when the KeyEvent is received to be acknowledged" },
			};
#endif
			auto NewProp_bShift_SetBit = [](void* Obj){ ((FInputActionKeyMapping*)Obj)->bShift = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShift = { UE4CodeGen_Private::EPropertyClass::Bool, "bShift", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FInputActionKeyMapping), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bShift_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bShift_MetaData, ARRAY_COUNT(NewProp_bShift_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
				{ "Category", "Input" },
				{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
				{ "ToolTip", "Key to bind it to." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Struct, "Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FInputActionKeyMapping, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(NewProp_Key_MetaData, ARRAY_COUNT(NewProp_Key_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionName_MetaData[] = {
				{ "Category", "Input" },
				{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
				{ "ToolTip", "Friendly name of action, e.g \"jump\"" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ActionName = { UE4CodeGen_Private::EPropertyClass::Name, "ActionName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FInputActionKeyMapping, ActionName), METADATA_PARAMS(NewProp_ActionName_MetaData, ARRAY_COUNT(NewProp_ActionName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCmd,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAlt,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCtrl,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bShift,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Key,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ActionName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"InputActionKeyMapping",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FInputActionKeyMapping),
				alignof(FInputActionKeyMapping),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInputActionKeyMapping_CRC() { return 214996133U; }
class UScriptStruct* FInputAxisConfigEntry::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FInputAxisConfigEntry_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputAxisConfigEntry, Z_Construct_UPackage__Script_Engine(), TEXT("InputAxisConfigEntry"), sizeof(FInputAxisConfigEntry), Get_Z_Construct_UScriptStruct_FInputAxisConfigEntry_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInputAxisConfigEntry(FInputAxisConfigEntry::StaticStruct, TEXT("/Script/Engine"), TEXT("InputAxisConfigEntry"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFInputAxisConfigEntry
{
	FScriptStruct_Engine_StaticRegisterNativesFInputAxisConfigEntry()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InputAxisConfigEntry")),new UScriptStruct::TCppStructOps<FInputAxisConfigEntry>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFInputAxisConfigEntry;
	UScriptStruct* Z_Construct_UScriptStruct_FInputAxisConfigEntry()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInputAxisConfigEntry_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InputAxisConfigEntry"), sizeof(FInputAxisConfigEntry), Get_Z_Construct_UScriptStruct_FInputAxisConfigEntry_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
				{ "ToolTip", "Configurable properties for control axes." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputAxisConfigEntry>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AxisProperties_MetaData[] = {
				{ "Category", "Input" },
				{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
				{ "ToolTip", "Properties for the Axis Key" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AxisProperties = { UE4CodeGen_Private::EPropertyClass::Struct, "AxisProperties", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FInputAxisConfigEntry, AxisProperties), Z_Construct_UScriptStruct_FInputAxisProperties, METADATA_PARAMS(NewProp_AxisProperties_MetaData, ARRAY_COUNT(NewProp_AxisProperties_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AxisKeyName_MetaData[] = {
				{ "Category", "Input" },
				{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
				{ "ToolTip", "Axis Key these properties apply to" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_AxisKeyName = { UE4CodeGen_Private::EPropertyClass::Name, "AxisKeyName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020001, 1, nullptr, STRUCT_OFFSET(FInputAxisConfigEntry, AxisKeyName), METADATA_PARAMS(NewProp_AxisKeyName_MetaData, ARRAY_COUNT(NewProp_AxisKeyName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AxisProperties,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AxisKeyName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"InputAxisConfigEntry",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FInputAxisConfigEntry),
				alignof(FInputAxisConfigEntry),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInputAxisConfigEntry_CRC() { return 1764201646U; }
class UScriptStruct* FInputAxisProperties::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FInputAxisProperties_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputAxisProperties, Z_Construct_UPackage__Script_Engine(), TEXT("InputAxisProperties"), sizeof(FInputAxisProperties), Get_Z_Construct_UScriptStruct_FInputAxisProperties_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInputAxisProperties(FInputAxisProperties::StaticStruct, TEXT("/Script/Engine"), TEXT("InputAxisProperties"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFInputAxisProperties
{
	FScriptStruct_Engine_StaticRegisterNativesFInputAxisProperties()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InputAxisProperties")),new UScriptStruct::TCppStructOps<FInputAxisProperties>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFInputAxisProperties;
	UScriptStruct* Z_Construct_UScriptStruct_FInputAxisProperties()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInputAxisProperties_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InputAxisProperties"), sizeof(FInputAxisProperties), Get_Z_Construct_UScriptStruct_FInputAxisProperties_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
				{ "ToolTip", "Configurable properties for control axes, used to transform raw input into game ready values." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputAxisProperties>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInvert_MetaData[] = {
				{ "Category", "Input" },
				{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
				{ "ToolTip", "Inverts reported values for this axis" },
			};
#endif
			auto NewProp_bInvert_SetBit = [](void* Obj){ ((FInputAxisProperties*)Obj)->bInvert = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInvert = { UE4CodeGen_Private::EPropertyClass::Bool, "bInvert", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FInputAxisProperties), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bInvert_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bInvert_MetaData, ARRAY_COUNT(NewProp_bInvert_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Exponent_MetaData[] = {
				{ "Category", "Input" },
				{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
				{ "ToolTip", "For applying curves to [0..1] axes, e.g. analog sticks" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Exponent = { UE4CodeGen_Private::EPropertyClass::Float, "Exponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FInputAxisProperties, Exponent), METADATA_PARAMS(NewProp_Exponent_MetaData, ARRAY_COUNT(NewProp_Exponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sensitivity_MetaData[] = {
				{ "Category", "Input" },
				{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
				{ "ToolTip", "Scaling factor to multiply raw value by." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Sensitivity = { UE4CodeGen_Private::EPropertyClass::Float, "Sensitivity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FInputAxisProperties, Sensitivity), METADATA_PARAMS(NewProp_Sensitivity_MetaData, ARRAY_COUNT(NewProp_Sensitivity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeadZone_MetaData[] = {
				{ "Category", "Input" },
				{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
				{ "ToolTip", "What the dead zone of the axis is.  For control axes such as analog sticks." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeadZone = { UE4CodeGen_Private::EPropertyClass::Float, "DeadZone", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FInputAxisProperties, DeadZone), METADATA_PARAMS(NewProp_DeadZone_MetaData, ARRAY_COUNT(NewProp_DeadZone_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bInvert,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Exponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Sensitivity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DeadZone,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"InputAxisProperties",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FInputAxisProperties),
				alignof(FInputAxisProperties),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInputAxisProperties_CRC() { return 3018081684U; }
class UScriptStruct* FKeyBind::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FKeyBind_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FKeyBind, Z_Construct_UPackage__Script_Engine(), TEXT("KeyBind"), sizeof(FKeyBind), Get_Z_Construct_UScriptStruct_FKeyBind_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FKeyBind(FKeyBind::StaticStruct, TEXT("/Script/Engine"), TEXT("KeyBind"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFKeyBind
{
	FScriptStruct_Engine_StaticRegisterNativesFKeyBind()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("KeyBind")),new UScriptStruct::TCppStructOps<FKeyBind>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFKeyBind;
	UScriptStruct* Z_Construct_UScriptStruct_FKeyBind()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FKeyBind_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("KeyBind"), sizeof(FKeyBind), Get_Z_Construct_UScriptStruct_FKeyBind_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
				{ "ToolTip", "Struct containing mappings for legacy method of binding keys to exec commands." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKeyBind>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisabled_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
			};
#endif
			auto NewProp_bDisabled_SetBit = [](void* Obj){ ((FKeyBind*)Obj)->bDisabled = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisabled = { UE4CodeGen_Private::EPropertyClass::Bool, "bDisabled", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FKeyBind), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDisabled_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDisabled_MetaData, ARRAY_COUNT(NewProp_bDisabled_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnoreCmd_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
				{ "ToolTip", "Whether the command key must not be held when the key event occurs" },
			};
#endif
			auto NewProp_bIgnoreCmd_SetBit = [](void* Obj){ ((FKeyBind*)Obj)->bIgnoreCmd = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreCmd = { UE4CodeGen_Private::EPropertyClass::Bool, "bIgnoreCmd", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FKeyBind), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIgnoreCmd_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIgnoreCmd_MetaData, ARRAY_COUNT(NewProp_bIgnoreCmd_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnoreAlt_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
				{ "ToolTip", "Whether the alt key must not be held when the key event occurs" },
			};
#endif
			auto NewProp_bIgnoreAlt_SetBit = [](void* Obj){ ((FKeyBind*)Obj)->bIgnoreAlt = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreAlt = { UE4CodeGen_Private::EPropertyClass::Bool, "bIgnoreAlt", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FKeyBind), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIgnoreAlt_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIgnoreAlt_MetaData, ARRAY_COUNT(NewProp_bIgnoreAlt_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnoreShift_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
				{ "ToolTip", "Whether the shift key must not be held when the key event occurs" },
			};
#endif
			auto NewProp_bIgnoreShift_SetBit = [](void* Obj){ ((FKeyBind*)Obj)->bIgnoreShift = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreShift = { UE4CodeGen_Private::EPropertyClass::Bool, "bIgnoreShift", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FKeyBind), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIgnoreShift_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIgnoreShift_MetaData, ARRAY_COUNT(NewProp_bIgnoreShift_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnoreCtrl_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
				{ "ToolTip", "Whether the control key must not be held when the key event occurs" },
			};
#endif
			auto NewProp_bIgnoreCtrl_SetBit = [](void* Obj){ ((FKeyBind*)Obj)->bIgnoreCtrl = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreCtrl = { UE4CodeGen_Private::EPropertyClass::Bool, "bIgnoreCtrl", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FKeyBind), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIgnoreCtrl_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIgnoreCtrl_MetaData, ARRAY_COUNT(NewProp_bIgnoreCtrl_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cmd_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
				{ "ToolTip", "Whether the command key needs to be held when the key event occurs" },
			};
#endif
			auto NewProp_Cmd_SetBit = [](void* Obj){ ((FKeyBind*)Obj)->Cmd = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Cmd = { UE4CodeGen_Private::EPropertyClass::Bool, "Cmd", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FKeyBind), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_Cmd_SetBit)>::SetBit, METADATA_PARAMS(NewProp_Cmd_MetaData, ARRAY_COUNT(NewProp_Cmd_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Alt_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
				{ "ToolTip", "Whether the alt key needs to be held when the key event occurs" },
			};
#endif
			auto NewProp_Alt_SetBit = [](void* Obj){ ((FKeyBind*)Obj)->Alt = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Alt = { UE4CodeGen_Private::EPropertyClass::Bool, "Alt", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FKeyBind), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_Alt_SetBit)>::SetBit, METADATA_PARAMS(NewProp_Alt_MetaData, ARRAY_COUNT(NewProp_Alt_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Shift_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
				{ "ToolTip", "Whether the shift key needs to be held when the key event occurs" },
			};
#endif
			auto NewProp_Shift_SetBit = [](void* Obj){ ((FKeyBind*)Obj)->Shift = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Shift = { UE4CodeGen_Private::EPropertyClass::Bool, "Shift", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FKeyBind), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_Shift_SetBit)>::SetBit, METADATA_PARAMS(NewProp_Shift_MetaData, ARRAY_COUNT(NewProp_Shift_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Control_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
				{ "ToolTip", "Whether the control key needs to be held when the key event occurs" },
			};
#endif
			auto NewProp_Control_SetBit = [](void* Obj){ ((FKeyBind*)Obj)->Control = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Control = { UE4CodeGen_Private::EPropertyClass::Bool, "Control", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FKeyBind), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_Control_SetBit)>::SetBit, METADATA_PARAMS(NewProp_Control_MetaData, ARRAY_COUNT(NewProp_Control_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Command_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
				{ "ToolTip", "The command to execute when the key is pressed/released" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Command = { UE4CodeGen_Private::EPropertyClass::Str, "Command", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004000, 1, nullptr, STRUCT_OFFSET(FKeyBind, Command), METADATA_PARAMS(NewProp_Command_MetaData, ARRAY_COUNT(NewProp_Command_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
				{ "ToolTip", "The key to be bound to the command" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Struct, "Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004000, 1, nullptr, STRUCT_OFFSET(FKeyBind, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(NewProp_Key_MetaData, ARRAY_COUNT(NewProp_Key_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDisabled,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIgnoreCmd,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIgnoreAlt,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIgnoreShift,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIgnoreCtrl,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Cmd,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Alt,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Shift,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Control,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Command,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Key,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"KeyBind",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FKeyBind),
				alignof(FKeyBind),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FKeyBind_CRC() { return 1915715172U; }
	void UPlayerInput::StaticRegisterNativesUPlayerInput()
	{
		UClass* Class = UPlayerInput::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearSmoothing", (Native)&UPlayerInput::execClearSmoothing },
			{ "InvertAxis", (Native)&UPlayerInput::execInvertAxis },
			{ "InvertAxisKey", (Native)&UPlayerInput::execInvertAxisKey },
			{ "SetBind", (Native)&UPlayerInput::execSetBind },
			{ "SetMouseSensitivity", (Native)&UPlayerInput::execSetMouseSensitivity },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UPlayerInput_ClearSmoothing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
				{ "ToolTip", "Exec function to reset mouse smoothing values" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInput, "ClearSmoothing", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020601, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPlayerInput_InvertAxis()
	{
		struct PlayerInput_eventInvertAxis_Parms
		{
			FName AxisName;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AxisName_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_AxisName = { UE4CodeGen_Private::EPropertyClass::Name, "AxisName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(PlayerInput_eventInvertAxis_Parms, AxisName), METADATA_PARAMS(NewProp_AxisName_MetaData, ARRAY_COUNT(NewProp_AxisName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AxisName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
				{ "ToolTip", "Exec function to invert an axis mapping" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInput, "InvertAxis", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020601, sizeof(PlayerInput_eventInvertAxis_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPlayerInput_InvertAxisKey()
	{
		struct PlayerInput_eventInvertAxisKey_Parms
		{
			FKey AxisKey;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AxisKey_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AxisKey = { UE4CodeGen_Private::EPropertyClass::Struct, "AxisKey", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(PlayerInput_eventInvertAxisKey_Parms, AxisKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(NewProp_AxisKey_MetaData, ARRAY_COUNT(NewProp_AxisKey_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AxisKey,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
				{ "ToolTip", "Exec function to invert an axis key" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInput, "InvertAxisKey", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020601, sizeof(PlayerInput_eventInvertAxisKey_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPlayerInput_SetBind()
	{
		struct PlayerInput_eventSetBind_Parms
		{
			FName BindName;
			FString Command;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Command_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Command = { UE4CodeGen_Private::EPropertyClass::Str, "Command", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PlayerInput_eventSetBind_Parms, Command), METADATA_PARAMS(NewProp_Command_MetaData, ARRAY_COUNT(NewProp_Command_MetaData)) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_BindName = { UE4CodeGen_Private::EPropertyClass::Name, "BindName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PlayerInput_eventSetBind_Parms, BindName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Command,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BindName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
				{ "ToolTip", "Exec function to add a debug exec command" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInput, "SetBind", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020601, sizeof(PlayerInput_eventSetBind_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPlayerInput_SetMouseSensitivity()
	{
		struct PlayerInput_eventSetMouseSensitivity_Parms
		{
			float Sensitivity;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sensitivity_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Sensitivity = { UE4CodeGen_Private::EPropertyClass::Float, "Sensitivity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(PlayerInput_eventSetMouseSensitivity_Parms, Sensitivity), METADATA_PARAMS(NewProp_Sensitivity_MetaData, ARRAY_COUNT(NewProp_Sensitivity_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Sensitivity,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
				{ "ToolTip", "Exec function to change the mouse sensitivity" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInput, "SetMouseSensitivity", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020601, sizeof(PlayerInput_eventSetMouseSensitivity_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPlayerInput_NoRegister()
	{
		return UPlayerInput::StaticClass();
	}
	UClass* Z_Construct_UClass_UPlayerInput()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UPlayerInput_ClearSmoothing, "ClearSmoothing" }, // 2098195539
				{ &Z_Construct_UFunction_UPlayerInput_InvertAxis, "InvertAxis" }, // 2360569073
				{ &Z_Construct_UFunction_UPlayerInput_InvertAxisKey, "InvertAxisKey" }, // 3054867693
				{ &Z_Construct_UFunction_UPlayerInput_SetBind, "SetBind" }, // 1186604745
				{ &Z_Construct_UFunction_UPlayerInput_SetMouseSensitivity, "SetMouseSensitivity" }, // 1674725673
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "GameFramework/PlayerInput.h" },
				{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
				{ "ToolTip", "Object within PlayerController that processes player input.\nOnly exists on the client in network games.\n\n@see https://docs.unrealengine.com/latest/INT/Gameplay/Input/index.html" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InvertedAxis_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
				{ "ToolTip", "List of Axis Mappings that have been inverted" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InvertedAxis = { UE4CodeGen_Private::EPropertyClass::Array, "InvertedAxis", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004000, 1, nullptr, STRUCT_OFFSET(UPlayerInput, InvertedAxis), METADATA_PARAMS(NewProp_InvertedAxis_MetaData, ARRAY_COUNT(NewProp_InvertedAxis_MetaData)) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_InvertedAxis_Inner = { UE4CodeGen_Private::EPropertyClass::Name, "InvertedAxis", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000004000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugExecBindings_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
				{ "ToolTip", "Generic bindings of keys to Exec()-compatible strings for development purposes only" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DebugExecBindings = { UE4CodeGen_Private::EPropertyClass::Array, "DebugExecBindings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004000, 1, nullptr, STRUCT_OFFSET(UPlayerInput, DebugExecBindings), METADATA_PARAMS(NewProp_DebugExecBindings_MetaData, ARRAY_COUNT(NewProp_DebugExecBindings_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_DebugExecBindings_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "DebugExecBindings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000004000, 1, nullptr, 0, Z_Construct_UScriptStruct_FKeyBind, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InvertedAxis,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InvertedAxis_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DebugExecBindings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DebugExecBindings_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UPlayerInput>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UPlayerInput::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x0010008Cu,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				"Input",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayerInput, 2179435459);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayerInput(Z_Construct_UClass_UPlayerInput, &UPlayerInput::StaticClass, TEXT("/Script/Engine"), TEXT("UPlayerInput"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerInput);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
