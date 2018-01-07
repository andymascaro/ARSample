// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Kismet/KismetInputLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKismetInputLibrary() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESlateGesture();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UKismetInputLibrary_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UKismetInputLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInputLibrary_CalibrateTilt();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_InputChordInputChord();
	SLATE_API UScriptStruct* Z_Construct_UScriptStruct_FInputChord();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_KeyKey();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInputLibrary_GetAnalogValue();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAnalogInputEvent();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInputLibrary_GetKey();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FKeyEvent();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInputLibrary_GetUserIndex();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsAltDown();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FInputEvent();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsCommandDown();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsControlDown();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftAltDown();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftCommandDown();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftControlDown();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftShiftDown();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRepeat();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightAltDown();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightCommandDown();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightControlDown();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightShiftDown();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsShiftDown();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInputLibrary_Key_GetDisplayName();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInputLibrary_Key_IsFloatAxis();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInputLibrary_Key_IsGamepadKey();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInputLibrary_Key_IsKeyboardKey();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInputLibrary_Key_IsModifierKey();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInputLibrary_Key_IsMouseButton();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInputLibrary_Key_IsVectorAxis();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetCursorDelta();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FPointerEvent();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetEffectingButton();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureDelta();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureType();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetLastScreenSpacePosition();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetPointerIndex();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetScreenSpacePosition();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetTouchpadIndex();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetUserIndex();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetWheelDelta();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsMouseButtonDown();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsTouchEvent();
// End Cross Module References
	static UEnum* ESlateGesture_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ESlateGesture, Z_Construct_UPackage__Script_Engine(), TEXT("ESlateGesture"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESlateGesture(ESlateGesture_StaticEnum, TEXT("/Script/Engine"), TEXT("ESlateGesture"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ESlateGesture_CRC() { return 1821004951U; }
	UEnum* Z_Construct_UEnum_Engine_ESlateGesture()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESlateGesture"), 0, Get_Z_Construct_UEnum_Engine_ESlateGesture_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESlateGesture::None", (int64)ESlateGesture::None },
				{ "ESlateGesture::Scroll", (int64)ESlateGesture::Scroll },
				{ "ESlateGesture::Magnify", (int64)ESlateGesture::Magnify },
				{ "ESlateGesture::Swipe", (int64)ESlateGesture::Swipe },
				{ "ESlateGesture::Rotate", (int64)ESlateGesture::Rotate },
				{ "ESlateGesture::LongPress", (int64)ESlateGesture::LongPress },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ESlateGesture",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ESlateGesture",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UKismetInputLibrary::StaticRegisterNativesUKismetInputLibrary()
	{
		UClass* Class = UKismetInputLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CalibrateTilt", (Native)&UKismetInputLibrary::execCalibrateTilt },
			{ "EqualEqual_InputChordInputChord", (Native)&UKismetInputLibrary::execEqualEqual_InputChordInputChord },
			{ "EqualEqual_KeyKey", (Native)&UKismetInputLibrary::execEqualEqual_KeyKey },
			{ "GetAnalogValue", (Native)&UKismetInputLibrary::execGetAnalogValue },
			{ "GetKey", (Native)&UKismetInputLibrary::execGetKey },
			{ "GetUserIndex", (Native)&UKismetInputLibrary::execGetUserIndex },
			{ "InputEvent_IsAltDown", (Native)&UKismetInputLibrary::execInputEvent_IsAltDown },
			{ "InputEvent_IsCommandDown", (Native)&UKismetInputLibrary::execInputEvent_IsCommandDown },
			{ "InputEvent_IsControlDown", (Native)&UKismetInputLibrary::execInputEvent_IsControlDown },
			{ "InputEvent_IsLeftAltDown", (Native)&UKismetInputLibrary::execInputEvent_IsLeftAltDown },
			{ "InputEvent_IsLeftCommandDown", (Native)&UKismetInputLibrary::execInputEvent_IsLeftCommandDown },
			{ "InputEvent_IsLeftControlDown", (Native)&UKismetInputLibrary::execInputEvent_IsLeftControlDown },
			{ "InputEvent_IsLeftShiftDown", (Native)&UKismetInputLibrary::execInputEvent_IsLeftShiftDown },
			{ "InputEvent_IsRepeat", (Native)&UKismetInputLibrary::execInputEvent_IsRepeat },
			{ "InputEvent_IsRightAltDown", (Native)&UKismetInputLibrary::execInputEvent_IsRightAltDown },
			{ "InputEvent_IsRightCommandDown", (Native)&UKismetInputLibrary::execInputEvent_IsRightCommandDown },
			{ "InputEvent_IsRightControlDown", (Native)&UKismetInputLibrary::execInputEvent_IsRightControlDown },
			{ "InputEvent_IsRightShiftDown", (Native)&UKismetInputLibrary::execInputEvent_IsRightShiftDown },
			{ "InputEvent_IsShiftDown", (Native)&UKismetInputLibrary::execInputEvent_IsShiftDown },
			{ "Key_GetDisplayName", (Native)&UKismetInputLibrary::execKey_GetDisplayName },
			{ "Key_IsFloatAxis", (Native)&UKismetInputLibrary::execKey_IsFloatAxis },
			{ "Key_IsGamepadKey", (Native)&UKismetInputLibrary::execKey_IsGamepadKey },
			{ "Key_IsKeyboardKey", (Native)&UKismetInputLibrary::execKey_IsKeyboardKey },
			{ "Key_IsModifierKey", (Native)&UKismetInputLibrary::execKey_IsModifierKey },
			{ "Key_IsMouseButton", (Native)&UKismetInputLibrary::execKey_IsMouseButton },
			{ "Key_IsVectorAxis", (Native)&UKismetInputLibrary::execKey_IsVectorAxis },
			{ "PointerEvent_GetCursorDelta", (Native)&UKismetInputLibrary::execPointerEvent_GetCursorDelta },
			{ "PointerEvent_GetEffectingButton", (Native)&UKismetInputLibrary::execPointerEvent_GetEffectingButton },
			{ "PointerEvent_GetGestureDelta", (Native)&UKismetInputLibrary::execPointerEvent_GetGestureDelta },
			{ "PointerEvent_GetGestureType", (Native)&UKismetInputLibrary::execPointerEvent_GetGestureType },
			{ "PointerEvent_GetLastScreenSpacePosition", (Native)&UKismetInputLibrary::execPointerEvent_GetLastScreenSpacePosition },
			{ "PointerEvent_GetPointerIndex", (Native)&UKismetInputLibrary::execPointerEvent_GetPointerIndex },
			{ "PointerEvent_GetScreenSpacePosition", (Native)&UKismetInputLibrary::execPointerEvent_GetScreenSpacePosition },
			{ "PointerEvent_GetTouchpadIndex", (Native)&UKismetInputLibrary::execPointerEvent_GetTouchpadIndex },
			{ "PointerEvent_GetUserIndex", (Native)&UKismetInputLibrary::execPointerEvent_GetUserIndex },
			{ "PointerEvent_GetWheelDelta", (Native)&UKismetInputLibrary::execPointerEvent_GetWheelDelta },
			{ "PointerEvent_IsMouseButtonDown", (Native)&UKismetInputLibrary::execPointerEvent_IsMouseButtonDown },
			{ "PointerEvent_IsTouchEvent", (Native)&UKismetInputLibrary::execPointerEvent_IsTouchEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_CalibrateTilt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Input" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
				{ "ToolTip", "Calibrate the tilt for the input device" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, "CalibrateTilt", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_InputChordInputChord()
	{
		struct KismetInputLibrary_eventEqualEqual_InputChordInputChord_Parms
		{
			FInputChord A;
			FInputChord B;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((KismetInputLibrary_eventEqualEqual_InputChordInputChord_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KismetInputLibrary_eventEqualEqual_InputChordInputChord_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_B = { UE4CodeGen_Private::EPropertyClass::Struct, "B", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventEqualEqual_InputChordInputChord_Parms, B), Z_Construct_UScriptStruct_FInputChord, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_A = { UE4CodeGen_Private::EPropertyClass::Struct, "A", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventEqualEqual_InputChordInputChord_Parms, A), Z_Construct_UScriptStruct_FInputChord, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_B,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_A,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Utilities|Key" },
				{ "CompactNodeTitle", "==" },
				{ "DisplayName", "Equal (Input Chord)" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
				{ "ToolTip", "Test if the input chords are equal (A == B)\n@param A - The chord to compare against\n@param B - The chord to compare\n@returns True if the chords are equal, false otherwise" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, "EqualEqual_InputChordInputChord", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(KismetInputLibrary_eventEqualEqual_InputChordInputChord_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_KeyKey()
	{
		struct KismetInputLibrary_eventEqualEqual_KeyKey_Parms
		{
			FKey A;
			FKey B;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((KismetInputLibrary_eventEqualEqual_KeyKey_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KismetInputLibrary_eventEqualEqual_KeyKey_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_B = { UE4CodeGen_Private::EPropertyClass::Struct, "B", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventEqualEqual_KeyKey_Parms, B), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_A = { UE4CodeGen_Private::EPropertyClass::Struct, "A", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventEqualEqual_KeyKey_Parms, A), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_B,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_A,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Utilities|Key" },
				{ "CompactNodeTitle", "==" },
				{ "DisplayName", "Equal (Key)" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
				{ "ToolTip", "Test if the input key are equal (A == B)\n@param A - The key to compare against\n@param B - The key to compare\n@returns True if the key are equal, false otherwise" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, "EqualEqual_KeyKey", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(KismetInputLibrary_eventEqualEqual_KeyKey_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_GetAnalogValue()
	{
		struct KismetInputLibrary_eventGetAnalogValue_Parms
		{
			FAnalogInputEvent Input;
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventGetAnalogValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Input = { UE4CodeGen_Private::EPropertyClass::Struct, "Input", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventGetAnalogValue_Parms, Input), Z_Construct_UScriptStruct_FAnalogInputEvent, METADATA_PARAMS(NewProp_Input_MetaData, ARRAY_COUNT(NewProp_Input_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Input,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Utilities|FAnalogInputEvent" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, "GetAnalogValue", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(KismetInputLibrary_eventGetAnalogValue_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_GetKey()
	{
		struct KismetInputLibrary_eventGetKey_Parms
		{
			FKeyEvent Input;
			FKey ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventGetKey_Parms, ReturnValue), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Input = { UE4CodeGen_Private::EPropertyClass::Struct, "Input", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventGetKey_Parms, Input), Z_Construct_UScriptStruct_FKeyEvent, METADATA_PARAMS(NewProp_Input_MetaData, ARRAY_COUNT(NewProp_Input_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Input,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Utilities|KeyEvent" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
				{ "ToolTip", "Returns the key for this event.\n\n@return  Key name" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, "GetKey", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(KismetInputLibrary_eventGetKey_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_GetUserIndex()
	{
		struct KismetInputLibrary_eventGetUserIndex_Parms
		{
			FKeyEvent Input;
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventGetUserIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Input = { UE4CodeGen_Private::EPropertyClass::Struct, "Input", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventGetUserIndex_Parms, Input), Z_Construct_UScriptStruct_FKeyEvent, METADATA_PARAMS(NewProp_Input_MetaData, ARRAY_COUNT(NewProp_Input_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Input,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Utilities|KeyEvent" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, "GetUserIndex", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(KismetInputLibrary_eventGetUserIndex_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsAltDown()
	{
		struct KismetInputLibrary_eventInputEvent_IsAltDown_Parms
		{
			FInputEvent Input;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((KismetInputLibrary_eventInputEvent_IsAltDown_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KismetInputLibrary_eventInputEvent_IsAltDown_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Input = { UE4CodeGen_Private::EPropertyClass::Struct, "Input", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventInputEvent_IsAltDown_Parms, Input), Z_Construct_UScriptStruct_FInputEvent, METADATA_PARAMS(NewProp_Input_MetaData, ARRAY_COUNT(NewProp_Input_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Input,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Utilities|InputEvent" },
				{ "DisplayName", "Is Alt Down" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
				{ "ToolTip", "Returns true if either alt key was down when this event occurred\n\n@return  True if alt is pressed" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, "InputEvent_IsAltDown", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(KismetInputLibrary_eventInputEvent_IsAltDown_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsCommandDown()
	{
		struct KismetInputLibrary_eventInputEvent_IsCommandDown_Parms
		{
			FInputEvent Input;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((KismetInputLibrary_eventInputEvent_IsCommandDown_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KismetInputLibrary_eventInputEvent_IsCommandDown_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Input = { UE4CodeGen_Private::EPropertyClass::Struct, "Input", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventInputEvent_IsCommandDown_Parms, Input), Z_Construct_UScriptStruct_FInputEvent, METADATA_PARAMS(NewProp_Input_MetaData, ARRAY_COUNT(NewProp_Input_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Input,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Utilities|InputEvent" },
				{ "DisplayName", "Is Command Down" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
				{ "ToolTip", "Returns true if either command key was down when this event occurred\n\n@return  True if command is pressed" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, "InputEvent_IsCommandDown", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(KismetInputLibrary_eventInputEvent_IsCommandDown_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsControlDown()
	{
		struct KismetInputLibrary_eventInputEvent_IsControlDown_Parms
		{
			FInputEvent Input;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((KismetInputLibrary_eventInputEvent_IsControlDown_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KismetInputLibrary_eventInputEvent_IsControlDown_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Input = { UE4CodeGen_Private::EPropertyClass::Struct, "Input", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventInputEvent_IsControlDown_Parms, Input), Z_Construct_UScriptStruct_FInputEvent, METADATA_PARAMS(NewProp_Input_MetaData, ARRAY_COUNT(NewProp_Input_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Input,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Utilities|InputEvent" },
				{ "DisplayName", "Is Control Down" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
				{ "ToolTip", "Returns true if either control key was down when this event occurred\n\n@return  True if control is pressed" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, "InputEvent_IsControlDown", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(KismetInputLibrary_eventInputEvent_IsControlDown_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftAltDown()
	{
		struct KismetInputLibrary_eventInputEvent_IsLeftAltDown_Parms
		{
			FInputEvent Input;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((KismetInputLibrary_eventInputEvent_IsLeftAltDown_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KismetInputLibrary_eventInputEvent_IsLeftAltDown_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Input = { UE4CodeGen_Private::EPropertyClass::Struct, "Input", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventInputEvent_IsLeftAltDown_Parms, Input), Z_Construct_UScriptStruct_FInputEvent, METADATA_PARAMS(NewProp_Input_MetaData, ARRAY_COUNT(NewProp_Input_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Input,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Utilities|InputEvent" },
				{ "DisplayName", "Is Left Alt Down" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
				{ "ToolTip", "Returns true if left alt key was down when this event occurred\n\n@return  True if left alt is pressed" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, "InputEvent_IsLeftAltDown", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(KismetInputLibrary_eventInputEvent_IsLeftAltDown_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftCommandDown()
	{
		struct KismetInputLibrary_eventInputEvent_IsLeftCommandDown_Parms
		{
			FInputEvent Input;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((KismetInputLibrary_eventInputEvent_IsLeftCommandDown_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KismetInputLibrary_eventInputEvent_IsLeftCommandDown_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Input = { UE4CodeGen_Private::EPropertyClass::Struct, "Input", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventInputEvent_IsLeftCommandDown_Parms, Input), Z_Construct_UScriptStruct_FInputEvent, METADATA_PARAMS(NewProp_Input_MetaData, ARRAY_COUNT(NewProp_Input_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Input,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Utilities|InputEvent" },
				{ "DisplayName", "Is Left Command Down" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
				{ "ToolTip", "Returns true if left command key was down when this event occurred\n\n@return  True if left command is pressed" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, "InputEvent_IsLeftCommandDown", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(KismetInputLibrary_eventInputEvent_IsLeftCommandDown_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftControlDown()
	{
		struct KismetInputLibrary_eventInputEvent_IsLeftControlDown_Parms
		{
			FInputEvent Input;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((KismetInputLibrary_eventInputEvent_IsLeftControlDown_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KismetInputLibrary_eventInputEvent_IsLeftControlDown_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Input = { UE4CodeGen_Private::EPropertyClass::Struct, "Input", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventInputEvent_IsLeftControlDown_Parms, Input), Z_Construct_UScriptStruct_FInputEvent, METADATA_PARAMS(NewProp_Input_MetaData, ARRAY_COUNT(NewProp_Input_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Input,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Utilities|InputEvent" },
				{ "DisplayName", "Is Left Control Down" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
				{ "ToolTip", "Returns true if left control key was down when this event occurred\n\n@return  True if left control is pressed" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, "InputEvent_IsLeftControlDown", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(KismetInputLibrary_eventInputEvent_IsLeftControlDown_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftShiftDown()
	{
		struct KismetInputLibrary_eventInputEvent_IsLeftShiftDown_Parms
		{
			FInputEvent Input;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((KismetInputLibrary_eventInputEvent_IsLeftShiftDown_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KismetInputLibrary_eventInputEvent_IsLeftShiftDown_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Input = { UE4CodeGen_Private::EPropertyClass::Struct, "Input", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventInputEvent_IsLeftShiftDown_Parms, Input), Z_Construct_UScriptStruct_FInputEvent, METADATA_PARAMS(NewProp_Input_MetaData, ARRAY_COUNT(NewProp_Input_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Input,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Utilities|InputEvent" },
				{ "DisplayName", "Is Left Shift Down" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
				{ "ToolTip", "Returns true if left shift key was down when this event occurred\n\n@return True if left shift is pressed." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, "InputEvent_IsLeftShiftDown", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(KismetInputLibrary_eventInputEvent_IsLeftShiftDown_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRepeat()
	{
		struct KismetInputLibrary_eventInputEvent_IsRepeat_Parms
		{
			FInputEvent Input;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((KismetInputLibrary_eventInputEvent_IsRepeat_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KismetInputLibrary_eventInputEvent_IsRepeat_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Input = { UE4CodeGen_Private::EPropertyClass::Struct, "Input", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventInputEvent_IsRepeat_Parms, Input), Z_Construct_UScriptStruct_FInputEvent, METADATA_PARAMS(NewProp_Input_MetaData, ARRAY_COUNT(NewProp_Input_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Input,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Utilities|InputEvent" },
				{ "DisplayName", "Is Repeat" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
				{ "ToolTip", "Returns whether or not this character is an auto-repeated keystroke\n\n@return  True if this character is a repeat" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, "InputEvent_IsRepeat", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(KismetInputLibrary_eventInputEvent_IsRepeat_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightAltDown()
	{
		struct KismetInputLibrary_eventInputEvent_IsRightAltDown_Parms
		{
			FInputEvent Input;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((KismetInputLibrary_eventInputEvent_IsRightAltDown_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KismetInputLibrary_eventInputEvent_IsRightAltDown_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Input = { UE4CodeGen_Private::EPropertyClass::Struct, "Input", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventInputEvent_IsRightAltDown_Parms, Input), Z_Construct_UScriptStruct_FInputEvent, METADATA_PARAMS(NewProp_Input_MetaData, ARRAY_COUNT(NewProp_Input_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Input,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Utilities|InputEvent" },
				{ "DisplayName", "Is Right Alt Down" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
				{ "ToolTip", "Returns true if right alt key was down when this event occurred\n\n@return  True if right alt is pressed" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, "InputEvent_IsRightAltDown", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(KismetInputLibrary_eventInputEvent_IsRightAltDown_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightCommandDown()
	{
		struct KismetInputLibrary_eventInputEvent_IsRightCommandDown_Parms
		{
			FInputEvent Input;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((KismetInputLibrary_eventInputEvent_IsRightCommandDown_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KismetInputLibrary_eventInputEvent_IsRightCommandDown_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Input = { UE4CodeGen_Private::EPropertyClass::Struct, "Input", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventInputEvent_IsRightCommandDown_Parms, Input), Z_Construct_UScriptStruct_FInputEvent, METADATA_PARAMS(NewProp_Input_MetaData, ARRAY_COUNT(NewProp_Input_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Input,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Utilities|InputEvent" },
				{ "DisplayName", "Is Right Command Down" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
				{ "ToolTip", "Returns true if right command key was down when this event occurred\n\n@return  True if right command is pressed" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, "InputEvent_IsRightCommandDown", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(KismetInputLibrary_eventInputEvent_IsRightCommandDown_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightControlDown()
	{
		struct KismetInputLibrary_eventInputEvent_IsRightControlDown_Parms
		{
			FInputEvent Input;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((KismetInputLibrary_eventInputEvent_IsRightControlDown_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KismetInputLibrary_eventInputEvent_IsRightControlDown_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Input = { UE4CodeGen_Private::EPropertyClass::Struct, "Input", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventInputEvent_IsRightControlDown_Parms, Input), Z_Construct_UScriptStruct_FInputEvent, METADATA_PARAMS(NewProp_Input_MetaData, ARRAY_COUNT(NewProp_Input_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Input,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Utilities|InputEvent" },
				{ "DisplayName", "Is Right Control Down" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
				{ "ToolTip", "Returns true if left control key was down when this event occurred\n\n@return  True if left control is pressed" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, "InputEvent_IsRightControlDown", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(KismetInputLibrary_eventInputEvent_IsRightControlDown_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightShiftDown()
	{
		struct KismetInputLibrary_eventInputEvent_IsRightShiftDown_Parms
		{
			FInputEvent Input;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((KismetInputLibrary_eventInputEvent_IsRightShiftDown_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KismetInputLibrary_eventInputEvent_IsRightShiftDown_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Input = { UE4CodeGen_Private::EPropertyClass::Struct, "Input", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventInputEvent_IsRightShiftDown_Parms, Input), Z_Construct_UScriptStruct_FInputEvent, METADATA_PARAMS(NewProp_Input_MetaData, ARRAY_COUNT(NewProp_Input_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Input,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Utilities|InputEvent" },
				{ "DisplayName", "Is Right Shift Down" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
				{ "ToolTip", "Returns true if right shift key was down when this event occurred\n\n@return True if right shift is pressed." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, "InputEvent_IsRightShiftDown", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(KismetInputLibrary_eventInputEvent_IsRightShiftDown_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsShiftDown()
	{
		struct KismetInputLibrary_eventInputEvent_IsShiftDown_Parms
		{
			FInputEvent Input;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((KismetInputLibrary_eventInputEvent_IsShiftDown_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KismetInputLibrary_eventInputEvent_IsShiftDown_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Input = { UE4CodeGen_Private::EPropertyClass::Struct, "Input", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventInputEvent_IsShiftDown_Parms, Input), Z_Construct_UScriptStruct_FInputEvent, METADATA_PARAMS(NewProp_Input_MetaData, ARRAY_COUNT(NewProp_Input_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Input,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Utilities|InputEvent" },
				{ "DisplayName", "Is Shift Down" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
				{ "ToolTip", "Returns true if either shift key was down when this event occurred\n\n@return  True if shift is pressed" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, "InputEvent_IsShiftDown", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(KismetInputLibrary_eventInputEvent_IsShiftDown_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_Key_GetDisplayName()
	{
		struct KismetInputLibrary_eventKey_GetDisplayName_Parms
		{
			FKey Key;
			FText ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Text, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventKey_GetDisplayName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Struct, "Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventKey_GetDisplayName_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(NewProp_Key_MetaData, ARRAY_COUNT(NewProp_Key_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Key,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Utilities|Key" },
				{ "DisplayName", "Get Key Display Name" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
				{ "ToolTip", "@returns The display name of the key." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, "Key_GetDisplayName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(KismetInputLibrary_eventKey_GetDisplayName_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_Key_IsFloatAxis()
	{
		struct KismetInputLibrary_eventKey_IsFloatAxis_Parms
		{
			FKey Key;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((KismetInputLibrary_eventKey_IsFloatAxis_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KismetInputLibrary_eventKey_IsFloatAxis_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Struct, "Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventKey_IsFloatAxis_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(NewProp_Key_MetaData, ARRAY_COUNT(NewProp_Key_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Key,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Utilities|Key" },
				{ "DisplayName", "Is Float Axis" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
				{ "ToolTip", "@returns True if the key is a float axis" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, "Key_IsFloatAxis", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(KismetInputLibrary_eventKey_IsFloatAxis_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_Key_IsGamepadKey()
	{
		struct KismetInputLibrary_eventKey_IsGamepadKey_Parms
		{
			FKey Key;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((KismetInputLibrary_eventKey_IsGamepadKey_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KismetInputLibrary_eventKey_IsGamepadKey_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Struct, "Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventKey_IsGamepadKey_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(NewProp_Key_MetaData, ARRAY_COUNT(NewProp_Key_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Key,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Utilities|Key" },
				{ "DisplayName", "Is Gamepad Key" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
				{ "ToolTip", "@returns True if the key is a gamepad button" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, "Key_IsGamepadKey", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(KismetInputLibrary_eventKey_IsGamepadKey_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_Key_IsKeyboardKey()
	{
		struct KismetInputLibrary_eventKey_IsKeyboardKey_Parms
		{
			FKey Key;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((KismetInputLibrary_eventKey_IsKeyboardKey_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KismetInputLibrary_eventKey_IsKeyboardKey_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Struct, "Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventKey_IsKeyboardKey_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(NewProp_Key_MetaData, ARRAY_COUNT(NewProp_Key_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Key,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Utilities|Key" },
				{ "DisplayName", "Is Keyboard Key" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
				{ "ToolTip", "@returns True if the key is a keyboard button" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, "Key_IsKeyboardKey", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(KismetInputLibrary_eventKey_IsKeyboardKey_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_Key_IsModifierKey()
	{
		struct KismetInputLibrary_eventKey_IsModifierKey_Parms
		{
			FKey Key;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((KismetInputLibrary_eventKey_IsModifierKey_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KismetInputLibrary_eventKey_IsModifierKey_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Struct, "Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventKey_IsModifierKey_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(NewProp_Key_MetaData, ARRAY_COUNT(NewProp_Key_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Key,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Utilities|Key" },
				{ "DisplayName", "Is Modifier Key" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
				{ "ToolTip", "@returns True if the key is a modifier key: Ctrl, Command, Alt, Shift" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, "Key_IsModifierKey", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(KismetInputLibrary_eventKey_IsModifierKey_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_Key_IsMouseButton()
	{
		struct KismetInputLibrary_eventKey_IsMouseButton_Parms
		{
			FKey Key;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((KismetInputLibrary_eventKey_IsMouseButton_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KismetInputLibrary_eventKey_IsMouseButton_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Struct, "Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventKey_IsMouseButton_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(NewProp_Key_MetaData, ARRAY_COUNT(NewProp_Key_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Key,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Utilities|Key" },
				{ "DisplayName", "Is Mouse Button" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
				{ "ToolTip", "@returns True if the key is a mouse button" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, "Key_IsMouseButton", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(KismetInputLibrary_eventKey_IsMouseButton_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_Key_IsVectorAxis()
	{
		struct KismetInputLibrary_eventKey_IsVectorAxis_Parms
		{
			FKey Key;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((KismetInputLibrary_eventKey_IsVectorAxis_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KismetInputLibrary_eventKey_IsVectorAxis_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Struct, "Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventKey_IsVectorAxis_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(NewProp_Key_MetaData, ARRAY_COUNT(NewProp_Key_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Key,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Utilities|Key" },
				{ "DisplayName", "Is Vector Axis" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
				{ "ToolTip", "@returns True if the key is a vector axis" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, "Key_IsVectorAxis", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(KismetInputLibrary_eventKey_IsVectorAxis_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetCursorDelta()
	{
		struct KismetInputLibrary_eventPointerEvent_GetCursorDelta_Parms
		{
			FPointerEvent Input;
			FVector2D ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventPointerEvent_GetCursorDelta_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Input = { UE4CodeGen_Private::EPropertyClass::Struct, "Input", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventPointerEvent_GetCursorDelta_Parms, Input), Z_Construct_UScriptStruct_FPointerEvent, METADATA_PARAMS(NewProp_Input_MetaData, ARRAY_COUNT(NewProp_Input_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Input,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Utilities|PointerEvent" },
				{ "DisplayName", "Get Cursor Delta" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
				{ "ToolTip", "@return the distance the mouse traveled since the last event was handled." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, "PointerEvent_GetCursorDelta", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C22401, sizeof(KismetInputLibrary_eventPointerEvent_GetCursorDelta_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetEffectingButton()
	{
		struct KismetInputLibrary_eventPointerEvent_GetEffectingButton_Parms
		{
			FPointerEvent Input;
			FKey ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventPointerEvent_GetEffectingButton_Parms, ReturnValue), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Input = { UE4CodeGen_Private::EPropertyClass::Struct, "Input", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventPointerEvent_GetEffectingButton_Parms, Input), Z_Construct_UScriptStruct_FPointerEvent, METADATA_PARAMS(NewProp_Input_MetaData, ARRAY_COUNT(NewProp_Input_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Input,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Utilities|PointerEvent" },
				{ "DisplayName", "Get Effecting Button" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
				{ "ToolTip", "Mouse button that caused this event to be raised (possibly EB_None)" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, "PointerEvent_GetEffectingButton", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(KismetInputLibrary_eventPointerEvent_GetEffectingButton_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureDelta()
	{
		struct KismetInputLibrary_eventPointerEvent_GetGestureDelta_Parms
		{
			FPointerEvent Input;
			FVector2D ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventPointerEvent_GetGestureDelta_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Input = { UE4CodeGen_Private::EPropertyClass::Struct, "Input", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventPointerEvent_GetGestureDelta_Parms, Input), Z_Construct_UScriptStruct_FPointerEvent, METADATA_PARAMS(NewProp_Input_MetaData, ARRAY_COUNT(NewProp_Input_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Input,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Utilities|PointerEvent" },
				{ "DisplayName", "Get Gesture Delta" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
				{ "ToolTip", "@return The change in gesture value since the last gesture event of the same type." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, "PointerEvent_GetGestureDelta", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C22401, sizeof(KismetInputLibrary_eventPointerEvent_GetGestureDelta_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureType()
	{
		struct KismetInputLibrary_eventPointerEvent_GetGestureType_Parms
		{
			FPointerEvent Input;
			ESlateGesture ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Enum, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventPointerEvent_GetGestureType_Parms, ReturnValue), Z_Construct_UEnum_Engine_ESlateGesture, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Input = { UE4CodeGen_Private::EPropertyClass::Struct, "Input", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventPointerEvent_GetGestureType_Parms, Input), Z_Construct_UScriptStruct_FPointerEvent, METADATA_PARAMS(NewProp_Input_MetaData, ARRAY_COUNT(NewProp_Input_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Input,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Utilities|PointerEvent" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
				{ "ToolTip", "@return The type of touch gesture" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, "PointerEvent_GetGestureType", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(KismetInputLibrary_eventPointerEvent_GetGestureType_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetLastScreenSpacePosition()
	{
		struct KismetInputLibrary_eventPointerEvent_GetLastScreenSpacePosition_Parms
		{
			FPointerEvent Input;
			FVector2D ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventPointerEvent_GetLastScreenSpacePosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Input = { UE4CodeGen_Private::EPropertyClass::Struct, "Input", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventPointerEvent_GetLastScreenSpacePosition_Parms, Input), Z_Construct_UScriptStruct_FPointerEvent, METADATA_PARAMS(NewProp_Input_MetaData, ARRAY_COUNT(NewProp_Input_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Input,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Utilities|PointerEvent" },
				{ "DisplayName", "Get Last Screen Space Position" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
				{ "ToolTip", "@return The position of the cursor in screen space last time we handled an input event" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, "PointerEvent_GetLastScreenSpacePosition", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C22401, sizeof(KismetInputLibrary_eventPointerEvent_GetLastScreenSpacePosition_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetPointerIndex()
	{
		struct KismetInputLibrary_eventPointerEvent_GetPointerIndex_Parms
		{
			FPointerEvent Input;
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventPointerEvent_GetPointerIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Input = { UE4CodeGen_Private::EPropertyClass::Struct, "Input", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventPointerEvent_GetPointerIndex_Parms, Input), Z_Construct_UScriptStruct_FPointerEvent, METADATA_PARAMS(NewProp_Input_MetaData, ARRAY_COUNT(NewProp_Input_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Input,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Utilities|PointerEvent" },
				{ "DisplayName", "Get Pointer Index" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
				{ "ToolTip", "@return The unique identifier of the pointer (e.g., finger index)" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, "PointerEvent_GetPointerIndex", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(KismetInputLibrary_eventPointerEvent_GetPointerIndex_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetScreenSpacePosition()
	{
		struct KismetInputLibrary_eventPointerEvent_GetScreenSpacePosition_Parms
		{
			FPointerEvent Input;
			FVector2D ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventPointerEvent_GetScreenSpacePosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Input = { UE4CodeGen_Private::EPropertyClass::Struct, "Input", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventPointerEvent_GetScreenSpacePosition_Parms, Input), Z_Construct_UScriptStruct_FPointerEvent, METADATA_PARAMS(NewProp_Input_MetaData, ARRAY_COUNT(NewProp_Input_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Input,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Utilities|PointerEvent" },
				{ "DisplayName", "Get Screen Space Position" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
				{ "ToolTip", "@return The position of the cursor in screen space" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, "PointerEvent_GetScreenSpacePosition", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C22401, sizeof(KismetInputLibrary_eventPointerEvent_GetScreenSpacePosition_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetTouchpadIndex()
	{
		struct KismetInputLibrary_eventPointerEvent_GetTouchpadIndex_Parms
		{
			FPointerEvent Input;
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventPointerEvent_GetTouchpadIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Input = { UE4CodeGen_Private::EPropertyClass::Struct, "Input", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventPointerEvent_GetTouchpadIndex_Parms, Input), Z_Construct_UScriptStruct_FPointerEvent, METADATA_PARAMS(NewProp_Input_MetaData, ARRAY_COUNT(NewProp_Input_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Input,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Utilities|PointerEvent" },
				{ "DisplayName", "Get Touchpad Index" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
				{ "ToolTip", "@return The index of the touch pad that generated this event (for platforms with multiple touch pads per user)" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, "PointerEvent_GetTouchpadIndex", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(KismetInputLibrary_eventPointerEvent_GetTouchpadIndex_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetUserIndex()
	{
		struct KismetInputLibrary_eventPointerEvent_GetUserIndex_Parms
		{
			FPointerEvent Input;
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventPointerEvent_GetUserIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Input = { UE4CodeGen_Private::EPropertyClass::Struct, "Input", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventPointerEvent_GetUserIndex_Parms, Input), Z_Construct_UScriptStruct_FPointerEvent, METADATA_PARAMS(NewProp_Input_MetaData, ARRAY_COUNT(NewProp_Input_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Input,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Utilities|PointerEvent" },
				{ "DisplayName", "Get User Index" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
				{ "ToolTip", "@return The index of the user that caused the event" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, "PointerEvent_GetUserIndex", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(KismetInputLibrary_eventPointerEvent_GetUserIndex_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetWheelDelta()
	{
		struct KismetInputLibrary_eventPointerEvent_GetWheelDelta_Parms
		{
			FPointerEvent Input;
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventPointerEvent_GetWheelDelta_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Input = { UE4CodeGen_Private::EPropertyClass::Struct, "Input", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventPointerEvent_GetWheelDelta_Parms, Input), Z_Construct_UScriptStruct_FPointerEvent, METADATA_PARAMS(NewProp_Input_MetaData, ARRAY_COUNT(NewProp_Input_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Input,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Utilities|PointerEvent" },
				{ "DisplayName", "Get Wheel Delta" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
				{ "ToolTip", "How much did the mouse wheel turn since the last mouse event" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, "PointerEvent_GetWheelDelta", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(KismetInputLibrary_eventPointerEvent_GetWheelDelta_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsMouseButtonDown()
	{
		struct KismetInputLibrary_eventPointerEvent_IsMouseButtonDown_Parms
		{
			FPointerEvent Input;
			FKey MouseButton;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((KismetInputLibrary_eventPointerEvent_IsMouseButtonDown_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KismetInputLibrary_eventPointerEvent_IsMouseButtonDown_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_MouseButton = { UE4CodeGen_Private::EPropertyClass::Struct, "MouseButton", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventPointerEvent_IsMouseButtonDown_Parms, MouseButton), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Input = { UE4CodeGen_Private::EPropertyClass::Struct, "Input", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventPointerEvent_IsMouseButtonDown_Parms, Input), Z_Construct_UScriptStruct_FPointerEvent, METADATA_PARAMS(NewProp_Input_MetaData, ARRAY_COUNT(NewProp_Input_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MouseButton,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Input,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Utilities|PointerEvent" },
				{ "DisplayName", "Is Mouse Button Down" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
				{ "ToolTip", "Mouse buttons that are currently pressed" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, "PointerEvent_IsMouseButtonDown", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(KismetInputLibrary_eventPointerEvent_IsMouseButtonDown_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsTouchEvent()
	{
		struct KismetInputLibrary_eventPointerEvent_IsTouchEvent_Parms
		{
			FPointerEvent Input;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((KismetInputLibrary_eventPointerEvent_IsTouchEvent_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KismetInputLibrary_eventPointerEvent_IsTouchEvent_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Input = { UE4CodeGen_Private::EPropertyClass::Struct, "Input", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventPointerEvent_IsTouchEvent_Parms, Input), Z_Construct_UScriptStruct_FPointerEvent, METADATA_PARAMS(NewProp_Input_MetaData, ARRAY_COUNT(NewProp_Input_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Input,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Utilities|PointerEvent" },
				{ "DisplayName", "Is Touch Event" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
				{ "ToolTip", "@return Is this event a result from a touch (as opposed to a mouse)" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, "PointerEvent_IsTouchEvent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(KismetInputLibrary_eventPointerEvent_IsTouchEvent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UKismetInputLibrary_NoRegister()
	{
		return UKismetInputLibrary::StaticClass();
	}
	UClass* Z_Construct_UClass_UKismetInputLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UKismetInputLibrary_CalibrateTilt, "CalibrateTilt" }, // 3837014102
				{ &Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_InputChordInputChord, "EqualEqual_InputChordInputChord" }, // 1947897524
				{ &Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_KeyKey, "EqualEqual_KeyKey" }, // 4240328598
				{ &Z_Construct_UFunction_UKismetInputLibrary_GetAnalogValue, "GetAnalogValue" }, // 491080330
				{ &Z_Construct_UFunction_UKismetInputLibrary_GetKey, "GetKey" }, // 1125888477
				{ &Z_Construct_UFunction_UKismetInputLibrary_GetUserIndex, "GetUserIndex" }, // 3559389645
				{ &Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsAltDown, "InputEvent_IsAltDown" }, // 1559506991
				{ &Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsCommandDown, "InputEvent_IsCommandDown" }, // 1998391067
				{ &Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsControlDown, "InputEvent_IsControlDown" }, // 1746361210
				{ &Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftAltDown, "InputEvent_IsLeftAltDown" }, // 196710468
				{ &Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftCommandDown, "InputEvent_IsLeftCommandDown" }, // 3456864008
				{ &Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftControlDown, "InputEvent_IsLeftControlDown" }, // 1486311482
				{ &Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftShiftDown, "InputEvent_IsLeftShiftDown" }, // 45114059
				{ &Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRepeat, "InputEvent_IsRepeat" }, // 2436925821
				{ &Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightAltDown, "InputEvent_IsRightAltDown" }, // 3284046225
				{ &Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightCommandDown, "InputEvent_IsRightCommandDown" }, // 1260776936
				{ &Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightControlDown, "InputEvent_IsRightControlDown" }, // 2884912925
				{ &Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightShiftDown, "InputEvent_IsRightShiftDown" }, // 2746808954
				{ &Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsShiftDown, "InputEvent_IsShiftDown" }, // 2761407277
				{ &Z_Construct_UFunction_UKismetInputLibrary_Key_GetDisplayName, "Key_GetDisplayName" }, // 938728931
				{ &Z_Construct_UFunction_UKismetInputLibrary_Key_IsFloatAxis, "Key_IsFloatAxis" }, // 2599854429
				{ &Z_Construct_UFunction_UKismetInputLibrary_Key_IsGamepadKey, "Key_IsGamepadKey" }, // 4248072762
				{ &Z_Construct_UFunction_UKismetInputLibrary_Key_IsKeyboardKey, "Key_IsKeyboardKey" }, // 3504176886
				{ &Z_Construct_UFunction_UKismetInputLibrary_Key_IsModifierKey, "Key_IsModifierKey" }, // 2396628163
				{ &Z_Construct_UFunction_UKismetInputLibrary_Key_IsMouseButton, "Key_IsMouseButton" }, // 1538873328
				{ &Z_Construct_UFunction_UKismetInputLibrary_Key_IsVectorAxis, "Key_IsVectorAxis" }, // 2664802644
				{ &Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetCursorDelta, "PointerEvent_GetCursorDelta" }, // 1930220864
				{ &Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetEffectingButton, "PointerEvent_GetEffectingButton" }, // 3023539048
				{ &Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureDelta, "PointerEvent_GetGestureDelta" }, // 163741211
				{ &Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureType, "PointerEvent_GetGestureType" }, // 1106384963
				{ &Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetLastScreenSpacePosition, "PointerEvent_GetLastScreenSpacePosition" }, // 3447277616
				{ &Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetPointerIndex, "PointerEvent_GetPointerIndex" }, // 1869787425
				{ &Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetScreenSpacePosition, "PointerEvent_GetScreenSpacePosition" }, // 1092655434
				{ &Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetTouchpadIndex, "PointerEvent_GetTouchpadIndex" }, // 1264864325
				{ &Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetUserIndex, "PointerEvent_GetUserIndex" }, // 865183607
				{ &Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetWheelDelta, "PointerEvent_GetWheelDelta" }, // 1607056150
				{ &Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsMouseButtonDown, "PointerEvent_IsMouseButtonDown" }, // 1548060305
				{ &Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsTouchEvent, "PointerEvent_IsTouchEvent" }, // 76671605
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Kismet/KismetInputLibrary.h" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UKismetInputLibrary>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UKismetInputLibrary::StaticClass,
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
	IMPLEMENT_CLASS(UKismetInputLibrary, 3908730768);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKismetInputLibrary(Z_Construct_UClass_UKismetInputLibrary, &UKismetInputLibrary::StaticClass, TEXT("/Script/Engine"), TEXT("UKismetInputLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKismetInputLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
