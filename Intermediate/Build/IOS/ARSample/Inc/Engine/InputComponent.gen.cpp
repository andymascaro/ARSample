// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Components/InputComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputComponent() {}
// Cross Module References
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_InputGestureHandlerDynamicSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_InputVectorAxisHandlerDynamicSignature__DelegateSignature();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_InputAxisHandlerDynamicSignature__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_InputTouchHandlerDynamicSignature__DelegateSignature();
	INPUTCORE_API UEnum* Z_Construct_UEnum_InputCore_ETouchIndex();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_InputActionHandlerDynamicSignature__DelegateSignature();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EControllerAnalogStick();
	ENGINE_API UClass* Z_Construct_UClass_UInputComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInputComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UFunction* Z_Construct_UFunction_UInputComponent_GetControllerAnalogKeyState();
	ENGINE_API UFunction* Z_Construct_UFunction_UInputComponent_GetControllerAnalogStickState();
	ENGINE_API UFunction* Z_Construct_UFunction_UInputComponent_GetControllerKeyTimeDown();
	ENGINE_API UFunction* Z_Construct_UFunction_UInputComponent_GetControllerMouseDelta();
	ENGINE_API UFunction* Z_Construct_UFunction_UInputComponent_GetControllerVectorKeyState();
	ENGINE_API UFunction* Z_Construct_UFunction_UInputComponent_GetTouchState();
	ENGINE_API UFunction* Z_Construct_UFunction_UInputComponent_IsControllerKeyDown();
	ENGINE_API UFunction* Z_Construct_UFunction_UInputComponent_WasControllerKeyJustPressed();
	ENGINE_API UFunction* Z_Construct_UFunction_UInputComponent_WasControllerKeyJustReleased();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_Engine_InputGestureHandlerDynamicSignature__DelegateSignature()
	{
		struct _Script_Engine_eventInputGestureHandlerDynamicSignature_Parms
		{
			float Value;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Float, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_Engine_eventInputGestureHandlerDynamicSignature_Parms, Value), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Components/InputComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, "InputGestureHandlerDynamicSignature__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00120000, sizeof(_Script_Engine_eventInputGestureHandlerDynamicSignature_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_Engine_InputVectorAxisHandlerDynamicSignature__DelegateSignature()
	{
		struct _Script_Engine_eventInputVectorAxisHandlerDynamicSignature_Parms
		{
			FVector AxisValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AxisValue = { UE4CodeGen_Private::EPropertyClass::Struct, "AxisValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_Engine_eventInputVectorAxisHandlerDynamicSignature_Parms, AxisValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AxisValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Components/InputComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, "InputVectorAxisHandlerDynamicSignature__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00120000, sizeof(_Script_Engine_eventInputVectorAxisHandlerDynamicSignature_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_Engine_InputAxisHandlerDynamicSignature__DelegateSignature()
	{
		struct _Script_Engine_eventInputAxisHandlerDynamicSignature_Parms
		{
			float AxisValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AxisValue = { UE4CodeGen_Private::EPropertyClass::Float, "AxisValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_Engine_eventInputAxisHandlerDynamicSignature_Parms, AxisValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AxisValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Components/InputComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, "InputAxisHandlerDynamicSignature__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00120000, sizeof(_Script_Engine_eventInputAxisHandlerDynamicSignature_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_Engine_InputTouchHandlerDynamicSignature__DelegateSignature()
	{
		struct _Script_Engine_eventInputTouchHandlerDynamicSignature_Parms
		{
			TEnumAsByte<ETouchIndex::Type> FingerIndex;
			FVector Location;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location = { UE4CodeGen_Private::EPropertyClass::Struct, "Location", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_Engine_eventInputTouchHandlerDynamicSignature_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_FingerIndex = { UE4CodeGen_Private::EPropertyClass::Byte, "FingerIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_Engine_eventInputTouchHandlerDynamicSignature_Parms, FingerIndex), Z_Construct_UEnum_InputCore_ETouchIndex, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Location,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FingerIndex,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Components/InputComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, "InputTouchHandlerDynamicSignature__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00120000, sizeof(_Script_Engine_eventInputTouchHandlerDynamicSignature_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_Engine_InputActionHandlerDynamicSignature__DelegateSignature()
	{
		struct _Script_Engine_eventInputActionHandlerDynamicSignature_Parms
		{
			FKey Key;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Struct, "Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_Engine_eventInputActionHandlerDynamicSignature_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Key,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Components/InputComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, "InputActionHandlerDynamicSignature__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00120000, sizeof(_Script_Engine_eventInputActionHandlerDynamicSignature_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EControllerAnalogStick_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EControllerAnalogStick, Z_Construct_UPackage__Script_Engine(), TEXT("EControllerAnalogStick"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EControllerAnalogStick(EControllerAnalogStick_StaticEnum, TEXT("/Script/Engine"), TEXT("EControllerAnalogStick"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EControllerAnalogStick_CRC() { return 2007145215U; }
	UEnum* Z_Construct_UEnum_Engine_EControllerAnalogStick()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EControllerAnalogStick"), 0, Get_Z_Construct_UEnum_Engine_EControllerAnalogStick_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EControllerAnalogStick::CAS_LeftStick", (int64)EControllerAnalogStick::CAS_LeftStick },
				{ "EControllerAnalogStick::CAS_RightStick", (int64)EControllerAnalogStick::CAS_RightStick },
				{ "EControllerAnalogStick::CAS_MAX", (int64)EControllerAnalogStick::CAS_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Components/InputComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EControllerAnalogStick",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EControllerAnalogStick::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UInputComponent::StaticRegisterNativesUInputComponent()
	{
		UClass* Class = UInputComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetControllerAnalogKeyState", (Native)&UInputComponent::execGetControllerAnalogKeyState },
			{ "GetControllerAnalogStickState", (Native)&UInputComponent::execGetControllerAnalogStickState },
			{ "GetControllerKeyTimeDown", (Native)&UInputComponent::execGetControllerKeyTimeDown },
			{ "GetControllerMouseDelta", (Native)&UInputComponent::execGetControllerMouseDelta },
			{ "GetControllerVectorKeyState", (Native)&UInputComponent::execGetControllerVectorKeyState },
			{ "GetTouchState", (Native)&UInputComponent::execGetTouchState },
			{ "IsControllerKeyDown", (Native)&UInputComponent::execIsControllerKeyDown },
			{ "WasControllerKeyJustPressed", (Native)&UInputComponent::execWasControllerKeyJustPressed },
			{ "WasControllerKeyJustReleased", (Native)&UInputComponent::execWasControllerKeyJustReleased },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UInputComponent_GetControllerAnalogKeyState()
	{
		struct InputComponent_eventGetControllerAnalogKeyState_Parms
		{
			FKey Key;
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(InputComponent_eventGetControllerAnalogKeyState_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Struct, "Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(InputComponent_eventGetControllerAnalogKeyState_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Key,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "DeprecatedFunction", "" },
				{ "DeprecationMessage", "Use PlayerController.GetInputAnalogKeyState instead." },
				{ "ModuleRelativePath", "Classes/Components/InputComponent.h" },
				{ "ToolTip", "Returns the analog value for the given key/button.  If analog isn't supported, returns 1 for down and 0 for up." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputComponent, "GetControllerAnalogKeyState", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54040401, sizeof(InputComponent_eventGetControllerAnalogKeyState_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UInputComponent_GetControllerAnalogStickState()
	{
		struct InputComponent_eventGetControllerAnalogStickState_Parms
		{
			TEnumAsByte<EControllerAnalogStick::Type> WhichStick;
			float StickX;
			float StickY;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StickY = { UE4CodeGen_Private::EPropertyClass::Float, "StickY", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(InputComponent_eventGetControllerAnalogStickState_Parms, StickY), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StickX = { UE4CodeGen_Private::EPropertyClass::Float, "StickX", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(InputComponent_eventGetControllerAnalogStickState_Parms, StickX), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_WhichStick = { UE4CodeGen_Private::EPropertyClass::Byte, "WhichStick", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(InputComponent_eventGetControllerAnalogStickState_Parms, WhichStick), Z_Construct_UEnum_Engine_EControllerAnalogStick, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StickY,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StickX,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WhichStick,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "DeprecatedFunction", "" },
				{ "DeprecationMessage", "Use PlayerController.GetInputAnalogStickState instead." },
				{ "ModuleRelativePath", "Classes/Components/InputComponent.h" },
				{ "ToolTip", "Retrieves the X and Y displacement of the given analog stick.  For WhickStick, 0 = left, 1 = right." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputComponent, "GetControllerAnalogStickState", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54440401, sizeof(InputComponent_eventGetControllerAnalogStickState_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UInputComponent_GetControllerKeyTimeDown()
	{
		struct InputComponent_eventGetControllerKeyTimeDown_Parms
		{
			FKey Key;
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(InputComponent_eventGetControllerKeyTimeDown_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Struct, "Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(InputComponent_eventGetControllerKeyTimeDown_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Key,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "DeprecatedFunction", "" },
				{ "DeprecationMessage", "Use PlayerController.GetInputKeyTimeDown instead." },
				{ "ModuleRelativePath", "Classes/Components/InputComponent.h" },
				{ "ToolTip", "Returns how long the given key/button has been down.  Returns 0 if it's up or it just went down this frame." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputComponent, "GetControllerKeyTimeDown", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54040401, sizeof(InputComponent_eventGetControllerKeyTimeDown_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UInputComponent_GetControllerMouseDelta()
	{
		struct InputComponent_eventGetControllerMouseDelta_Parms
		{
			float DeltaX;
			float DeltaY;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaY = { UE4CodeGen_Private::EPropertyClass::Float, "DeltaY", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(InputComponent_eventGetControllerMouseDelta_Parms, DeltaY), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaX = { UE4CodeGen_Private::EPropertyClass::Float, "DeltaX", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(InputComponent_eventGetControllerMouseDelta_Parms, DeltaX), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DeltaY,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DeltaX,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "DeprecatedFunction", "" },
				{ "DeprecationMessage", "Use PlayerController.GetInputMouseDelta instead." },
				{ "ModuleRelativePath", "Classes/Components/InputComponent.h" },
				{ "ToolTip", "Retrieves how far the mouse moved this frame." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputComponent, "GetControllerMouseDelta", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54440401, sizeof(InputComponent_eventGetControllerMouseDelta_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UInputComponent_GetControllerVectorKeyState()
	{
		struct InputComponent_eventGetControllerVectorKeyState_Parms
		{
			FKey Key;
			FVector ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(InputComponent_eventGetControllerVectorKeyState_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Struct, "Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(InputComponent_eventGetControllerVectorKeyState_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Key,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "DeprecatedFunction", "" },
				{ "DeprecationMessage", "Use PlayerController.GetInputVectorKeyState instead." },
				{ "ModuleRelativePath", "Classes/Components/InputComponent.h" },
				{ "ToolTip", "Returns the vector value for the given key/button." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputComponent, "GetControllerVectorKeyState", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54840401, sizeof(InputComponent_eventGetControllerVectorKeyState_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UInputComponent_GetTouchState()
	{
		struct InputComponent_eventGetTouchState_Parms
		{
			int32 FingerIndex;
			float LocationX;
			float LocationY;
			bool bIsCurrentlyPressed;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bIsCurrentlyPressed_SetBit = [](void* Obj){ ((InputComponent_eventGetTouchState_Parms*)Obj)->bIsCurrentlyPressed = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsCurrentlyPressed = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsCurrentlyPressed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(InputComponent_eventGetTouchState_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsCurrentlyPressed_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LocationY = { UE4CodeGen_Private::EPropertyClass::Float, "LocationY", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(InputComponent_eventGetTouchState_Parms, LocationY), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LocationX = { UE4CodeGen_Private::EPropertyClass::Float, "LocationX", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(InputComponent_eventGetTouchState_Parms, LocationX), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_FingerIndex = { UE4CodeGen_Private::EPropertyClass::Int, "FingerIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(InputComponent_eventGetTouchState_Parms, FingerIndex), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsCurrentlyPressed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LocationY,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LocationX,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FingerIndex,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "DeprecatedFunction", "" },
				{ "DeprecationMessage", "Use PlayerController.GetInputTouchState instead." },
				{ "ModuleRelativePath", "Classes/Components/InputComponent.h" },
				{ "ToolTip", "Returns the location of a touch, and if it's held down" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputComponent, "GetTouchState", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54440401, sizeof(InputComponent_eventGetTouchState_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UInputComponent_IsControllerKeyDown()
	{
		struct InputComponent_eventIsControllerKeyDown_Parms
		{
			FKey Key;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((InputComponent_eventIsControllerKeyDown_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(InputComponent_eventIsControllerKeyDown_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Struct, "Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(InputComponent_eventIsControllerKeyDown_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Key,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "DeprecatedFunction", "" },
				{ "DeprecationMessage", "Use PlayerController.IsInputKeyDown instead." },
				{ "ModuleRelativePath", "Classes/Components/InputComponent.h" },
				{ "ToolTip", "Returns true if the given key/button is pressed on the input of the controller (if present)" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputComponent, "IsControllerKeyDown", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54040401, sizeof(InputComponent_eventIsControllerKeyDown_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UInputComponent_WasControllerKeyJustPressed()
	{
		struct InputComponent_eventWasControllerKeyJustPressed_Parms
		{
			FKey Key;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((InputComponent_eventWasControllerKeyJustPressed_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(InputComponent_eventWasControllerKeyJustPressed_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Struct, "Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(InputComponent_eventWasControllerKeyJustPressed_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Key,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "DeprecatedFunction", "" },
				{ "DeprecationMessage", "Use PlayerController.WasInputKeyJustPressed instead." },
				{ "ModuleRelativePath", "Classes/Components/InputComponent.h" },
				{ "ToolTip", "Returns true if the given key/button was up last frame and down this frame." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputComponent, "WasControllerKeyJustPressed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54040401, sizeof(InputComponent_eventWasControllerKeyJustPressed_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UInputComponent_WasControllerKeyJustReleased()
	{
		struct InputComponent_eventWasControllerKeyJustReleased_Parms
		{
			FKey Key;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((InputComponent_eventWasControllerKeyJustReleased_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(InputComponent_eventWasControllerKeyJustReleased_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Struct, "Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(InputComponent_eventWasControllerKeyJustReleased_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Key,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "DeprecatedFunction", "" },
				{ "DeprecationMessage", "Use PlayerController.WasInputKeyJustReleased instead." },
				{ "ModuleRelativePath", "Classes/Components/InputComponent.h" },
				{ "ToolTip", "Returns true if the given key/button was down last frame and up this frame." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputComponent, "WasControllerKeyJustReleased", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54040401, sizeof(InputComponent_eventWasControllerKeyJustReleased_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInputComponent_NoRegister()
	{
		return UInputComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UInputComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UActorComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UInputComponent_GetControllerAnalogKeyState, "GetControllerAnalogKeyState" }, // 2645713470
				{ &Z_Construct_UFunction_UInputComponent_GetControllerAnalogStickState, "GetControllerAnalogStickState" }, // 3852729325
				{ &Z_Construct_UFunction_UInputComponent_GetControllerKeyTimeDown, "GetControllerKeyTimeDown" }, // 4176264049
				{ &Z_Construct_UFunction_UInputComponent_GetControllerMouseDelta, "GetControllerMouseDelta" }, // 2503264962
				{ &Z_Construct_UFunction_UInputComponent_GetControllerVectorKeyState, "GetControllerVectorKeyState" }, // 1977378660
				{ &Z_Construct_UFunction_UInputComponent_GetTouchState, "GetTouchState" }, // 2641007850
				{ &Z_Construct_UFunction_UInputComponent_IsControllerKeyDown, "IsControllerKeyDown" }, // 2316567557
				{ &Z_Construct_UFunction_UInputComponent_WasControllerKeyJustPressed, "WasControllerKeyJustPressed" }, // 2250163528
				{ &Z_Construct_UFunction_UInputComponent_WasControllerKeyJustReleased, "WasControllerKeyJustReleased" }, // 4030302374
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Activation Components|Activation" },
				{ "IncludePath", "Components/InputComponent.h" },
				{ "ModuleRelativePath", "Classes/Components/InputComponent.h" },
				{ "ToolTip", "Implement an Actor component for input bindings.\n\nAn Input Component is a transient component that enables an Actor to bind various forms of input events to delegate functions.\nInput components are processed from a stack managed by the PlayerController and processed by the PlayerInput.\nEach binding can consume the input event preventing other components on the input stack from processing the input.\n\n@see https://docs.unrealengine.com/latest/INT/Gameplay/Input/index.html" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UInputComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UInputComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00088u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				nullptr, 0,
				"Input",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInputComponent, 2384557490);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInputComponent(Z_Construct_UClass_UInputComponent, &UInputComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UInputComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInputComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
