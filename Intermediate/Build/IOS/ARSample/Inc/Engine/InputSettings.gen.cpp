// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/GameFramework/InputSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputSettings() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInputSettings_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInputSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_UInputSettings_AddActionMapping();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionKeyMapping();
	ENGINE_API UFunction* Z_Construct_UFunction_UInputSettings_AddAxisMapping();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputAxisKeyMapping();
	ENGINE_API UFunction* Z_Construct_UFunction_UInputSettings_ForceRebuildKeymaps();
	ENGINE_API UFunction* Z_Construct_UFunction_UInputSettings_GetActionMappingByName();
	ENGINE_API UFunction* Z_Construct_UFunction_UInputSettings_GetActionNames();
	ENGINE_API UFunction* Z_Construct_UFunction_UInputSettings_GetAxisMappingByName();
	ENGINE_API UFunction* Z_Construct_UFunction_UInputSettings_GetAxisNames();
	ENGINE_API UFunction* Z_Construct_UFunction_UInputSettings_GetInputSettings();
	ENGINE_API UFunction* Z_Construct_UFunction_UInputSettings_RemoveActionMapping();
	ENGINE_API UFunction* Z_Construct_UFunction_UInputSettings_RemoveAxisMapping();
	ENGINE_API UFunction* Z_Construct_UFunction_UInputSettings_SaveKeyMappings();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMouseLockMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMouseCaptureMode();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputAxisConfigEntry();
// End Cross Module References
	void UInputSettings::StaticRegisterNativesUInputSettings()
	{
		UClass* Class = UInputSettings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddActionMapping", (Native)&UInputSettings::execAddActionMapping },
			{ "AddAxisMapping", (Native)&UInputSettings::execAddAxisMapping },
			{ "ForceRebuildKeymaps", (Native)&UInputSettings::execForceRebuildKeymaps },
			{ "GetActionMappingByName", (Native)&UInputSettings::execGetActionMappingByName },
			{ "GetActionNames", (Native)&UInputSettings::execGetActionNames },
			{ "GetAxisMappingByName", (Native)&UInputSettings::execGetAxisMappingByName },
			{ "GetAxisNames", (Native)&UInputSettings::execGetAxisNames },
			{ "GetInputSettings", (Native)&UInputSettings::execGetInputSettings },
			{ "RemoveActionMapping", (Native)&UInputSettings::execRemoveActionMapping },
			{ "RemoveAxisMapping", (Native)&UInputSettings::execRemoveAxisMapping },
			{ "SaveKeyMappings", (Native)&UInputSettings::execSaveKeyMappings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UInputSettings_AddActionMapping()
	{
		struct InputSettings_eventAddActionMapping_Parms
		{
			FInputActionKeyMapping KeyMapping;
			bool bForceRebuildKeymaps;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bForceRebuildKeymaps_SetBit = [](void* Obj){ ((InputSettings_eventAddActionMapping_Parms*)Obj)->bForceRebuildKeymaps = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceRebuildKeymaps = { UE4CodeGen_Private::EPropertyClass::Bool, "bForceRebuildKeymaps", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(InputSettings_eventAddActionMapping_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bForceRebuildKeymaps_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyMapping_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_KeyMapping = { UE4CodeGen_Private::EPropertyClass::Struct, "KeyMapping", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(InputSettings_eventAddActionMapping_Parms, KeyMapping), Z_Construct_UScriptStruct_FInputActionKeyMapping, METADATA_PARAMS(NewProp_KeyMapping_MetaData, ARRAY_COUNT(NewProp_KeyMapping_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bForceRebuildKeymaps,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_KeyMapping,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Settings" },
				{ "CPP_Default_bForceRebuildKeymaps", "true" },
				{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
				{ "ToolTip", "Programmatically add an action mapping to the project defaults" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputSettings, "AddActionMapping", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(InputSettings_eventAddActionMapping_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UInputSettings_AddAxisMapping()
	{
		struct InputSettings_eventAddAxisMapping_Parms
		{
			FInputAxisKeyMapping KeyMapping;
			bool bForceRebuildKeymaps;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bForceRebuildKeymaps_SetBit = [](void* Obj){ ((InputSettings_eventAddAxisMapping_Parms*)Obj)->bForceRebuildKeymaps = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceRebuildKeymaps = { UE4CodeGen_Private::EPropertyClass::Bool, "bForceRebuildKeymaps", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(InputSettings_eventAddAxisMapping_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bForceRebuildKeymaps_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyMapping_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_KeyMapping = { UE4CodeGen_Private::EPropertyClass::Struct, "KeyMapping", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(InputSettings_eventAddAxisMapping_Parms, KeyMapping), Z_Construct_UScriptStruct_FInputAxisKeyMapping, METADATA_PARAMS(NewProp_KeyMapping_MetaData, ARRAY_COUNT(NewProp_KeyMapping_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bForceRebuildKeymaps,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_KeyMapping,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Settings" },
				{ "CPP_Default_bForceRebuildKeymaps", "true" },
				{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
				{ "ToolTip", "Programmatically add an axis mapping to the project defaults" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputSettings, "AddAxisMapping", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(InputSettings_eventAddAxisMapping_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UInputSettings_ForceRebuildKeymaps()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
				{ "ToolTip", "When changes are made to the default mappings, push those changes out to PlayerInput key maps" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputSettings, "ForceRebuildKeymaps", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UInputSettings_GetActionMappingByName()
	{
		struct InputSettings_eventGetActionMappingByName_Parms
		{
			FName InActionName;
			TArray<FInputActionKeyMapping> OutMappings;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutMappings = { UE4CodeGen_Private::EPropertyClass::Array, "OutMappings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(InputSettings_eventGetActionMappingByName_Parms, OutMappings), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutMappings_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "OutMappings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FInputActionKeyMapping, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InActionName_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_InActionName = { UE4CodeGen_Private::EPropertyClass::Name, "InActionName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(InputSettings_eventGetActionMappingByName_Parms, InActionName), METADATA_PARAMS(NewProp_InActionName_MetaData, ARRAY_COUNT(NewProp_InActionName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutMappings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutMappings_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InActionName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputSettings, "GetActionMappingByName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54420401, sizeof(InputSettings_eventGetActionMappingByName_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UInputSettings_GetActionNames()
	{
		struct InputSettings_eventGetActionNames_Parms
		{
			TArray<FName> ActionNames;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActionNames = { UE4CodeGen_Private::EPropertyClass::Array, "ActionNames", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(InputSettings_eventGetActionNames_Parms, ActionNames), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ActionNames_Inner = { UE4CodeGen_Private::EPropertyClass::Name, "ActionNames", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ActionNames,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ActionNames_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
				{ "ToolTip", "Populate a list of all defined action names" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputSettings, "GetActionNames", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54420401, sizeof(InputSettings_eventGetActionNames_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UInputSettings_GetAxisMappingByName()
	{
		struct InputSettings_eventGetAxisMappingByName_Parms
		{
			FName InAxisName;
			TArray<FInputAxisKeyMapping> OutMappings;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutMappings = { UE4CodeGen_Private::EPropertyClass::Array, "OutMappings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(InputSettings_eventGetAxisMappingByName_Parms, OutMappings), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutMappings_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "OutMappings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FInputAxisKeyMapping, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InAxisName_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_InAxisName = { UE4CodeGen_Private::EPropertyClass::Name, "InAxisName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(InputSettings_eventGetAxisMappingByName_Parms, InAxisName), METADATA_PARAMS(NewProp_InAxisName_MetaData, ARRAY_COUNT(NewProp_InAxisName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutMappings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutMappings_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InAxisName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
				{ "ToolTip", "Retrieve all axis mappings by a certain name." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputSettings, "GetAxisMappingByName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54420401, sizeof(InputSettings_eventGetAxisMappingByName_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UInputSettings_GetAxisNames()
	{
		struct InputSettings_eventGetAxisNames_Parms
		{
			TArray<FName> AxisNames;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AxisNames = { UE4CodeGen_Private::EPropertyClass::Array, "AxisNames", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(InputSettings_eventGetAxisNames_Parms, AxisNames), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_AxisNames_Inner = { UE4CodeGen_Private::EPropertyClass::Name, "AxisNames", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AxisNames,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AxisNames_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
				{ "ToolTip", "Populate a list of all defined axis names" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputSettings, "GetAxisNames", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54420401, sizeof(InputSettings_eventGetAxisNames_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UInputSettings_GetInputSettings()
	{
		struct InputSettings_eventGetInputSettings_Parms
		{
			UInputSettings* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(InputSettings_eventGetInputSettings_Parms, ReturnValue), Z_Construct_UClass_UInputSettings_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
				{ "ToolTip", "Returns the game local input settings (action mappings, axis mappings, etc...)" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputSettings, "GetInputSettings", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(InputSettings_eventGetInputSettings_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UInputSettings_RemoveActionMapping()
	{
		struct InputSettings_eventRemoveActionMapping_Parms
		{
			FInputActionKeyMapping KeyMapping;
			bool bForceRebuildKeymaps;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bForceRebuildKeymaps_SetBit = [](void* Obj){ ((InputSettings_eventRemoveActionMapping_Parms*)Obj)->bForceRebuildKeymaps = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceRebuildKeymaps = { UE4CodeGen_Private::EPropertyClass::Bool, "bForceRebuildKeymaps", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(InputSettings_eventRemoveActionMapping_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bForceRebuildKeymaps_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyMapping_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_KeyMapping = { UE4CodeGen_Private::EPropertyClass::Struct, "KeyMapping", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(InputSettings_eventRemoveActionMapping_Parms, KeyMapping), Z_Construct_UScriptStruct_FInputActionKeyMapping, METADATA_PARAMS(NewProp_KeyMapping_MetaData, ARRAY_COUNT(NewProp_KeyMapping_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bForceRebuildKeymaps,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_KeyMapping,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Settings" },
				{ "CPP_Default_bForceRebuildKeymaps", "true" },
				{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
				{ "ToolTip", "Programmatically remove an action mapping to the project defaults" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputSettings, "RemoveActionMapping", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(InputSettings_eventRemoveActionMapping_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UInputSettings_RemoveAxisMapping()
	{
		struct InputSettings_eventRemoveAxisMapping_Parms
		{
			FInputAxisKeyMapping KeyMapping;
			bool bForceRebuildKeymaps;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bForceRebuildKeymaps_SetBit = [](void* Obj){ ((InputSettings_eventRemoveAxisMapping_Parms*)Obj)->bForceRebuildKeymaps = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceRebuildKeymaps = { UE4CodeGen_Private::EPropertyClass::Bool, "bForceRebuildKeymaps", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(InputSettings_eventRemoveAxisMapping_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bForceRebuildKeymaps_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyMapping_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_KeyMapping = { UE4CodeGen_Private::EPropertyClass::Struct, "KeyMapping", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(InputSettings_eventRemoveAxisMapping_Parms, KeyMapping), Z_Construct_UScriptStruct_FInputAxisKeyMapping, METADATA_PARAMS(NewProp_KeyMapping_MetaData, ARRAY_COUNT(NewProp_KeyMapping_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bForceRebuildKeymaps,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_KeyMapping,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Settings" },
				{ "CPP_Default_bForceRebuildKeymaps", "true" },
				{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
				{ "ToolTip", "Programmatically remove an axis mapping to the project defaults" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputSettings, "RemoveAxisMapping", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(InputSettings_eventRemoveAxisMapping_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UInputSettings_SaveKeyMappings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
				{ "ToolTip", "Flush the current mapping values to the config file" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputSettings, "SaveKeyMappings", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInputSettings_NoRegister()
	{
		return UInputSettings::StaticClass();
	}
	UClass* Z_Construct_UClass_UInputSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UInputSettings_AddActionMapping, "AddActionMapping" }, // 3262466659
				{ &Z_Construct_UFunction_UInputSettings_AddAxisMapping, "AddAxisMapping" }, // 1278901849
				{ &Z_Construct_UFunction_UInputSettings_ForceRebuildKeymaps, "ForceRebuildKeymaps" }, // 3959933306
				{ &Z_Construct_UFunction_UInputSettings_GetActionMappingByName, "GetActionMappingByName" }, // 2472229877
				{ &Z_Construct_UFunction_UInputSettings_GetActionNames, "GetActionNames" }, // 425473815
				{ &Z_Construct_UFunction_UInputSettings_GetAxisMappingByName, "GetAxisMappingByName" }, // 2575727045
				{ &Z_Construct_UFunction_UInputSettings_GetAxisNames, "GetAxisNames" }, // 831510568
				{ &Z_Construct_UFunction_UInputSettings_GetInputSettings, "GetInputSettings" }, // 2676871278
				{ &Z_Construct_UFunction_UInputSettings_RemoveActionMapping, "RemoveActionMapping" }, // 1613213175
				{ &Z_Construct_UFunction_UInputSettings_RemoveAxisMapping, "RemoveAxisMapping" }, // 404586308
				{ &Z_Construct_UFunction_UInputSettings_SaveKeyMappings, "SaveKeyMappings" }, // 599200453
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "GameFramework/InputSettings.h" },
				{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
				{ "ToolTip", "Project wide settings for input handling\n\n@see https://docs.unrealengine.com/latest/INT/Gameplay/Input/index.html" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConsoleKeys_MetaData[] = {
				{ "Category", "Console" },
				{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
				{ "ToolTip", "The keys which open the console." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ConsoleKeys = { UE4CodeGen_Private::EPropertyClass::Array, "ConsoleKeys", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UInputSettings, ConsoleKeys), METADATA_PARAMS(NewProp_ConsoleKeys_MetaData, ARRAY_COUNT(NewProp_ConsoleKeys_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConsoleKeys_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ConsoleKeys", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000004000, 1, nullptr, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConsoleKey_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
				{ "ToolTip", "The key which opens the console." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConsoleKey = { UE4CodeGen_Private::EPropertyClass::Struct, "ConsoleKey", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020004000, 1, nullptr, STRUCT_OFFSET(UInputSettings, ConsoleKey_DEPRECATED), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(NewProp_ConsoleKey_MetaData, ARRAY_COUNT(NewProp_ConsoleKey_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultTouchInterface_MetaData[] = {
				{ "AllowedClasses", "TouchInterface" },
				{ "Category", "Mobile" },
				{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
				{ "ToolTip", "The default on-screen touch input interface for the game (can be null to disable the onscreen interface)" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultTouchInterface = { UE4CodeGen_Private::EPropertyClass::Struct, "DefaultTouchInterface", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UInputSettings, DefaultTouchInterface), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(NewProp_DefaultTouchInterface_MetaData, ARRAY_COUNT(NewProp_DefaultTouchInterface_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowConsoleOnFourFingerTap_MetaData[] = {
				{ "Category", "Mobile" },
				{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
				{ "ToolTip", "Whether or not to show the console on 4 finger tap, on mobile platforms" },
			};
#endif
			auto NewProp_bShowConsoleOnFourFingerTap_SetBit = [](void* Obj){ ((UInputSettings*)Obj)->bShowConsoleOnFourFingerTap = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowConsoleOnFourFingerTap = { UE4CodeGen_Private::EPropertyClass::Bool, "bShowConsoleOnFourFingerTap", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UInputSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bShowConsoleOnFourFingerTap_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bShowConsoleOnFourFingerTap_MetaData, ARRAY_COUNT(NewProp_bShowConsoleOnFourFingerTap_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAlwaysShowTouchInterface_MetaData[] = {
				{ "Category", "Mobile" },
				{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
				{ "ToolTip", "Should the touch input interface be shown always, or only when the platform has a touch screen?" },
			};
#endif
			auto NewProp_bAlwaysShowTouchInterface_SetBit = [](void* Obj){ ((UInputSettings*)Obj)->bAlwaysShowTouchInterface = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAlwaysShowTouchInterface = { UE4CodeGen_Private::EPropertyClass::Bool, "bAlwaysShowTouchInterface", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UInputSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAlwaysShowTouchInterface_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAlwaysShowTouchInterface_MetaData, ARRAY_COUNT(NewProp_bAlwaysShowTouchInterface_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AxisMappings_MetaData[] = {
				{ "Category", "Bindings" },
				{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
				{ "ToolTip", "List of Axis Mappings" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AxisMappings = { UE4CodeGen_Private::EPropertyClass::Array, "AxisMappings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UInputSettings, AxisMappings), METADATA_PARAMS(NewProp_AxisMappings_MetaData, ARRAY_COUNT(NewProp_AxisMappings_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AxisMappings_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "AxisMappings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000004000, 1, nullptr, 0, Z_Construct_UScriptStruct_FInputAxisKeyMapping, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionMappings_MetaData[] = {
				{ "Category", "Bindings" },
				{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
				{ "ToolTip", "List of Action Mappings" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActionMappings = { UE4CodeGen_Private::EPropertyClass::Array, "ActionMappings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UInputSettings, ActionMappings), METADATA_PARAMS(NewProp_ActionMappings_MetaData, ARRAY_COUNT(NewProp_ActionMappings_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActionMappings_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ActionMappings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000004000, 1, nullptr, 0, Z_Construct_UScriptStruct_FInputActionKeyMapping, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultViewportMouseLockMode_MetaData[] = {
				{ "Category", "ViewportProperties" },
				{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
				{ "ToolTip", "The default mouse lock state behavior when the viewport acquires capture" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DefaultViewportMouseLockMode = { UE4CodeGen_Private::EPropertyClass::Enum, "DefaultViewportMouseLockMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UInputSettings, DefaultViewportMouseLockMode), Z_Construct_UEnum_Engine_EMouseLockMode, METADATA_PARAMS(NewProp_DefaultViewportMouseLockMode_MetaData, ARRAY_COUNT(NewProp_DefaultViewportMouseLockMode_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_DefaultViewportMouseLockMode_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDefaultViewportMouseLock_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
				{ "ToolTip", "The default mouse lock state when the viewport acquires capture" },
			};
#endif
			auto NewProp_bDefaultViewportMouseLock_SetBit = [](void* Obj){ ((UInputSettings*)Obj)->bDefaultViewportMouseLock_DEPRECATED = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDefaultViewportMouseLock = { UE4CodeGen_Private::EPropertyClass::Bool, "bDefaultViewportMouseLock", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020004000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UInputSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDefaultViewportMouseLock_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDefaultViewportMouseLock_MetaData, ARRAY_COUNT(NewProp_bDefaultViewportMouseLock_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultViewportMouseCaptureMode_MetaData[] = {
				{ "Category", "ViewportProperties" },
				{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
				{ "ToolTip", "The default mouse capture mode for the game viewport" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DefaultViewportMouseCaptureMode = { UE4CodeGen_Private::EPropertyClass::Enum, "DefaultViewportMouseCaptureMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UInputSettings, DefaultViewportMouseCaptureMode), Z_Construct_UEnum_Engine_EMouseCaptureMode, METADATA_PARAMS(NewProp_DefaultViewportMouseCaptureMode_MetaData, ARRAY_COUNT(NewProp_DefaultViewportMouseCaptureMode_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_DefaultViewportMouseCaptureMode_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCaptureMouseOnLaunch_MetaData[] = {
				{ "Category", "ViewportProperties" },
				{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
				{ "ToolTip", "Controls if the viewport will capture the mouse on Launch of the application" },
			};
#endif
			auto NewProp_bCaptureMouseOnLaunch_SetBit = [](void* Obj){ ((UInputSettings*)Obj)->bCaptureMouseOnLaunch = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCaptureMouseOnLaunch = { UE4CodeGen_Private::EPropertyClass::Bool, "bCaptureMouseOnLaunch", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UInputSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCaptureMouseOnLaunch_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCaptureMouseOnLaunch_MetaData, ARRAY_COUNT(NewProp_bCaptureMouseOnLaunch_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoubleClickTime_MetaData[] = {
				{ "Category", "MouseProperties" },
				{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
				{ "ToolTip", "If a key is pressed twice in this amount of time it is considered a \"double click\"" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DoubleClickTime = { UE4CodeGen_Private::EPropertyClass::Float, "DoubleClickTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000004001, 1, nullptr, STRUCT_OFFSET(UInputSettings, DoubleClickTime), METADATA_PARAMS(NewProp_DoubleClickTime_MetaData, ARRAY_COUNT(NewProp_DoubleClickTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FOVScale_MetaData[] = {
				{ "Category", "MouseProperties" },
				{ "editcondition", "bEnableFOVScaling" },
				{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
				{ "ToolTip", "The scaling value to multiply the field of view by" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FOVScale = { UE4CodeGen_Private::EPropertyClass::Float, "FOVScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000004001, 1, nullptr, STRUCT_OFFSET(UInputSettings, FOVScale), METADATA_PARAMS(NewProp_FOVScale_MetaData, ARRAY_COUNT(NewProp_FOVScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableFOVScaling_MetaData[] = {
				{ "Category", "MouseProperties" },
				{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
				{ "ToolTip", "Scale the mouse based on the player camera manager's field of view" },
			};
#endif
			auto NewProp_bEnableFOVScaling_SetBit = [](void* Obj){ ((UInputSettings*)Obj)->bEnableFOVScaling = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableFOVScaling = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableFOVScaling", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UInputSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnableFOVScaling_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnableFOVScaling_MetaData, ARRAY_COUNT(NewProp_bEnableFOVScaling_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableMouseSmoothing_MetaData[] = {
				{ "Category", "MouseProperties" },
				{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
				{ "ToolTip", "Mouse smoothing control" },
			};
#endif
			auto NewProp_bEnableMouseSmoothing_SetBit = [](void* Obj){ ((UInputSettings*)Obj)->bEnableMouseSmoothing = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableMouseSmoothing = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableMouseSmoothing", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UInputSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnableMouseSmoothing_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnableMouseSmoothing_MetaData, ARRAY_COUNT(NewProp_bEnableMouseSmoothing_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseMouseForTouch_MetaData[] = {
				{ "Category", "MouseProperties" },
				{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
				{ "ToolTip", "Allow mouse to be used for touch" },
			};
#endif
			auto NewProp_bUseMouseForTouch_SetBit = [](void* Obj){ ((UInputSettings*)Obj)->bUseMouseForTouch = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseMouseForTouch = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseMouseForTouch", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UInputSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseMouseForTouch_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseMouseForTouch_MetaData, ARRAY_COUNT(NewProp_bUseMouseForTouch_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bF11TogglesFullscreen_MetaData[] = {
				{ "Category", "Bindings" },
				{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
			};
#endif
			auto NewProp_bF11TogglesFullscreen_SetBit = [](void* Obj){ ((UInputSettings*)Obj)->bF11TogglesFullscreen = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bF11TogglesFullscreen = { UE4CodeGen_Private::EPropertyClass::Bool, "bF11TogglesFullscreen", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UInputSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bF11TogglesFullscreen_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bF11TogglesFullscreen_MetaData, ARRAY_COUNT(NewProp_bF11TogglesFullscreen_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAltEnterTogglesFullscreen_MetaData[] = {
				{ "Category", "Bindings" },
				{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
			};
#endif
			auto NewProp_bAltEnterTogglesFullscreen_SetBit = [](void* Obj){ ((UInputSettings*)Obj)->bAltEnterTogglesFullscreen = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAltEnterTogglesFullscreen = { UE4CodeGen_Private::EPropertyClass::Bool, "bAltEnterTogglesFullscreen", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UInputSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAltEnterTogglesFullscreen_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAltEnterTogglesFullscreen_MetaData, ARRAY_COUNT(NewProp_bAltEnterTogglesFullscreen_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AxisConfig_MetaData[] = {
				{ "Category", "Bindings" },
				{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
				{ "ToolTip", "List of Axis Properties" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AxisConfig = { UE4CodeGen_Private::EPropertyClass::Array, "AxisConfig", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000004041, 1, nullptr, STRUCT_OFFSET(UInputSettings, AxisConfig), METADATA_PARAMS(NewProp_AxisConfig_MetaData, ARRAY_COUNT(NewProp_AxisConfig_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AxisConfig_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "AxisConfig", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000004000, 1, nullptr, 0, Z_Construct_UScriptStruct_FInputAxisConfigEntry, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConsoleKeys,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConsoleKeys_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConsoleKey,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultTouchInterface,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bShowConsoleOnFourFingerTap,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAlwaysShowTouchInterface,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AxisMappings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AxisMappings_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ActionMappings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ActionMappings_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultViewportMouseLockMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultViewportMouseLockMode_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDefaultViewportMouseLock,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultViewportMouseCaptureMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultViewportMouseCaptureMode_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCaptureMouseOnLaunch,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DoubleClickTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FOVScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnableFOVScaling,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnableMouseSmoothing,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseMouseForTouch,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bF11TogglesFullscreen,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAltEnterTogglesFullscreen,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AxisConfig,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AxisConfig_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UInputSettings>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UInputSettings::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100086u,
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
	IMPLEMENT_CLASS(UInputSettings, 3358859500);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInputSettings(Z_Construct_UClass_UInputSettings, &UInputSettings::StaticClass, TEXT("/Script/Engine"), TEXT("UInputSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInputSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
