// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Kismet/KismetTextLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKismetTextLibrary() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EFormatArgumentType();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextGender();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERoundingMode();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFormatArgumentData();
	ENGINE_API UClass* Z_Construct_UClass_UKismetTextLibrary_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UKismetTextLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Float();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Integer();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetTextLibrary_AsCurrencyBase();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetTextLibrary_AsDate_DateTime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetTextLibrary_AsDateTime_DateTime();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetTextLibrary_AsPercent_Float();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetTextLibrary_AsTime_DateTime();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetTextLibrary_AsTimespan_Timespan();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTimespan();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneDate_DateTime();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneDateTime_DateTime();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneTime_DateTime();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetTextLibrary_Conv_BoolToText();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetTextLibrary_Conv_ByteToText();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetTextLibrary_Conv_ColorToText();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetTextLibrary_Conv_FloatToText();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetTextLibrary_Conv_IntToText();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetTextLibrary_Conv_NameToText();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetTextLibrary_Conv_ObjectToText();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetTextLibrary_Conv_RotatorToText();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetTextLibrary_Conv_StringToText();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetTextLibrary_Conv_TextToString();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetTextLibrary_Conv_TransformToText();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetTextLibrary_Conv_Vector2dToText();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetTextLibrary_Conv_VectorToText();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_IgnoreCase_TextText();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_TextText();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetTextLibrary_FindTextInLocalizationTable();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetTextLibrary_Format();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetTextLibrary_GetEmptyText();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetTextLibrary_NotEqual_IgnoreCase_TextText();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetTextLibrary_NotEqual_TextText();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetTextLibrary_StringTableIdAndKeyFromText();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetTextLibrary_TextFromStringTable();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetTextLibrary_TextIsCultureInvariant();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetTextLibrary_TextIsEmpty();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetTextLibrary_TextIsFromStringTable();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetTextLibrary_TextIsTransient();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetTextLibrary_TextToLower();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetTextLibrary_TextToUpper();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetTextLibrary_TextTrimPreceding();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetTextLibrary_TextTrimPrecedingAndTrailing();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetTextLibrary_TextTrimTrailing();
// End Cross Module References
	static UEnum* EFormatArgumentType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EFormatArgumentType, Z_Construct_UPackage__Script_Engine(), TEXT("EFormatArgumentType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFormatArgumentType(EFormatArgumentType_StaticEnum, TEXT("/Script/Engine"), TEXT("EFormatArgumentType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EFormatArgumentType_CRC() { return 3399706728U; }
	UEnum* Z_Construct_UEnum_Engine_EFormatArgumentType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFormatArgumentType"), 0, Get_Z_Construct_UEnum_Engine_EFormatArgumentType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFormatArgumentType::Int", (int64)EFormatArgumentType::Int },
				{ "EFormatArgumentType::UInt", (int64)EFormatArgumentType::UInt },
				{ "EFormatArgumentType::Float", (int64)EFormatArgumentType::Float },
				{ "EFormatArgumentType::Double", (int64)EFormatArgumentType::Double },
				{ "EFormatArgumentType::Text", (int64)EFormatArgumentType::Text },
				{ "EFormatArgumentType::Gender", (int64)EFormatArgumentType::Gender },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EFormatArgumentType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EFormatArgumentType::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ETextGender_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETextGender, Z_Construct_UPackage__Script_Engine(), TEXT("ETextGender"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETextGender(ETextGender_StaticEnum, TEXT("/Script/Engine"), TEXT("ETextGender"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ETextGender_CRC() { return 1471035804U; }
	UEnum* Z_Construct_UEnum_Engine_ETextGender()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETextGender"), 0, Get_Z_Construct_UEnum_Engine_ETextGender_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETextGender::Masculine", (int64)ETextGender::Masculine },
				{ "ETextGender::Feminine", (int64)ETextGender::Feminine },
				{ "ETextGender::Neuter", (int64)ETextGender::Neuter },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ETextGender",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ETextGender",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ERoundingMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ERoundingMode, Z_Construct_UPackage__Script_Engine(), TEXT("ERoundingMode"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERoundingMode(ERoundingMode_StaticEnum, TEXT("/Script/Engine"), TEXT("ERoundingMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ERoundingMode_CRC() { return 1332788410U; }
	UEnum* Z_Construct_UEnum_Engine_ERoundingMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERoundingMode"), 0, Get_Z_Construct_UEnum_Engine_ERoundingMode_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "HalfToEven", (int64)HalfToEven },
				{ "HalfFromZero", (int64)HalfFromZero },
				{ "HalfToZero", (int64)HalfToZero },
				{ "FromZero", (int64)FromZero },
				{ "ToZero", (int64)ToZero },
				{ "ToNegativeInfinity", (int64)ToNegativeInfinity },
				{ "ToPositiveInfinity", (int64)ToPositiveInfinity },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "FromZero.ToolTip", "Rounds to the value which is further from zero, \"larger\" in absolute value: 0.1 becomes 1, -0.1 becomes -1" },
				{ "HalfFromZero.ToolTip", "Rounds to nearest place, equidistant ties go to the value which is further from zero: -0.5 becomes -1.0, 0.5 becomes 1.0" },
				{ "HalfToEven.ToolTip", "Rounds to the nearest place, equidistant ties go to the value which is closest to an even value: 1.5 becomes 2, 0.5 becomes 0" },
				{ "HalfToZero.ToolTip", "Rounds to nearest place, equidistant ties go to the value which is closer to zero: -0.5 becomes 0, 0.5 becomes 0." },
				{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
				{ "ToNegativeInfinity.ToolTip", "Rounds to the value which is more negative: 0.1 becomes 0, -0.1 becomes -1" },
				{ "ToolTip", "Provides rounding modes for converting numbers into localized text" },
				{ "ToPositiveInfinity.ToolTip", "Rounds to the value which is more positive: 0.1 becomes 1, -0.1 becomes 0" },
				{ "ToZero.ToolTip", "Rounds to the value which is closer to zero, \"smaller\" in absolute value: 0.1 becomes 0, -0.1 becomes 0" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ERoundingMode",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"ERoundingMode",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	UScriptStruct* Z_Construct_UScriptStruct_FFormatArgumentData()
	{
		struct FFormatArgumentData
		{
			FString ArgumentName;
			TEnumAsByte<EFormatArgumentType::Type> ArgumentValueType;
			FText ArgumentValue;
			int32 ArgumentValueInt;
			float ArgumentValueFloat;
			ETextGender ArgumentValueGender;
		};

#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFormatArgumentData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FormatArgumentData"), sizeof(FFormatArgumentData), Get_Z_Construct_UScriptStruct_FFormatArgumentData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintInternalUseOnly", "true" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
				{ "ToolTip", "Used to pass argument/value pairs into FText::Format.\nThe full C++ struct is located here: Engine\\Source\\Runtime\\Core\\Public\\Internationalization\\Text.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArgumentValueGender_MetaData[] = {
				{ "Category", "ArgumentValue" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ArgumentValueGender = { UE4CodeGen_Private::EPropertyClass::Enum, "ArgumentValueGender", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000805, 1, nullptr, STRUCT_OFFSET(FFormatArgumentData, ArgumentValueGender), Z_Construct_UEnum_Engine_ETextGender, METADATA_PARAMS(NewProp_ArgumentValueGender_MetaData, ARRAY_COUNT(NewProp_ArgumentValueGender_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ArgumentValueGender_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArgumentValueFloat_MetaData[] = {
				{ "Category", "ArgumentValue" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ArgumentValueFloat = { UE4CodeGen_Private::EPropertyClass::Float, "ArgumentValueFloat", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000805, 1, nullptr, STRUCT_OFFSET(FFormatArgumentData, ArgumentValueFloat), METADATA_PARAMS(NewProp_ArgumentValueFloat_MetaData, ARRAY_COUNT(NewProp_ArgumentValueFloat_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArgumentValueInt_MetaData[] = {
				{ "Category", "ArgumentValue" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ArgumentValueInt = { UE4CodeGen_Private::EPropertyClass::Int, "ArgumentValueInt", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000805, 1, nullptr, STRUCT_OFFSET(FFormatArgumentData, ArgumentValueInt), METADATA_PARAMS(NewProp_ArgumentValueInt_MetaData, ARRAY_COUNT(NewProp_ArgumentValueInt_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArgumentValue_MetaData[] = {
				{ "Category", "ArgumentValue" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_ArgumentValue = { UE4CodeGen_Private::EPropertyClass::Text, "ArgumentValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000805, 1, nullptr, STRUCT_OFFSET(FFormatArgumentData, ArgumentValue), METADATA_PARAMS(NewProp_ArgumentValue_MetaData, ARRAY_COUNT(NewProp_ArgumentValue_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArgumentValueType_MetaData[] = {
				{ "Category", "ArgumentValue" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ArgumentValueType = { UE4CodeGen_Private::EPropertyClass::Byte, "ArgumentValueType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000805, 1, nullptr, STRUCT_OFFSET(FFormatArgumentData, ArgumentValueType), Z_Construct_UEnum_Engine_EFormatArgumentType, METADATA_PARAMS(NewProp_ArgumentValueType_MetaData, ARRAY_COUNT(NewProp_ArgumentValueType_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArgumentName_MetaData[] = {
				{ "Category", "ArgumentName" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ArgumentName = { UE4CodeGen_Private::EPropertyClass::Str, "ArgumentName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000805, 1, nullptr, STRUCT_OFFSET(FFormatArgumentData, ArgumentName), METADATA_PARAMS(NewProp_ArgumentName_MetaData, ARRAY_COUNT(NewProp_ArgumentName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ArgumentValueGender,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ArgumentValueGender_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ArgumentValueFloat,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ArgumentValueInt,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ArgumentValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ArgumentValueType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ArgumentName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				nullptr,
				"FormatArgumentData",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000008),
				sizeof(FFormatArgumentData),
				alignof(FFormatArgumentData),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFormatArgumentData_CRC() { return 520387295U; }
	void UKismetTextLibrary::StaticRegisterNativesUKismetTextLibrary()
	{
		UClass* Class = UKismetTextLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AsCurrency_Float", (Native)&UKismetTextLibrary::execAsCurrency_Float },
			{ "AsCurrency_Integer", (Native)&UKismetTextLibrary::execAsCurrency_Integer },
			{ "AsCurrencyBase", (Native)&UKismetTextLibrary::execAsCurrencyBase },
			{ "AsDate_DateTime", (Native)&UKismetTextLibrary::execAsDate_DateTime },
			{ "AsDateTime_DateTime", (Native)&UKismetTextLibrary::execAsDateTime_DateTime },
			{ "AsPercent_Float", (Native)&UKismetTextLibrary::execAsPercent_Float },
			{ "AsTime_DateTime", (Native)&UKismetTextLibrary::execAsTime_DateTime },
			{ "AsTimespan_Timespan", (Native)&UKismetTextLibrary::execAsTimespan_Timespan },
			{ "AsTimeZoneDate_DateTime", (Native)&UKismetTextLibrary::execAsTimeZoneDate_DateTime },
			{ "AsTimeZoneDateTime_DateTime", (Native)&UKismetTextLibrary::execAsTimeZoneDateTime_DateTime },
			{ "AsTimeZoneTime_DateTime", (Native)&UKismetTextLibrary::execAsTimeZoneTime_DateTime },
			{ "Conv_BoolToText", (Native)&UKismetTextLibrary::execConv_BoolToText },
			{ "Conv_ByteToText", (Native)&UKismetTextLibrary::execConv_ByteToText },
			{ "Conv_ColorToText", (Native)&UKismetTextLibrary::execConv_ColorToText },
			{ "Conv_FloatToText", (Native)&UKismetTextLibrary::execConv_FloatToText },
			{ "Conv_IntToText", (Native)&UKismetTextLibrary::execConv_IntToText },
			{ "Conv_NameToText", (Native)&UKismetTextLibrary::execConv_NameToText },
			{ "Conv_ObjectToText", (Native)&UKismetTextLibrary::execConv_ObjectToText },
			{ "Conv_RotatorToText", (Native)&UKismetTextLibrary::execConv_RotatorToText },
			{ "Conv_StringToText", (Native)&UKismetTextLibrary::execConv_StringToText },
			{ "Conv_TextToString", (Native)&UKismetTextLibrary::execConv_TextToString },
			{ "Conv_TransformToText", (Native)&UKismetTextLibrary::execConv_TransformToText },
			{ "Conv_Vector2dToText", (Native)&UKismetTextLibrary::execConv_Vector2dToText },
			{ "Conv_VectorToText", (Native)&UKismetTextLibrary::execConv_VectorToText },
			{ "EqualEqual_IgnoreCase_TextText", (Native)&UKismetTextLibrary::execEqualEqual_IgnoreCase_TextText },
			{ "EqualEqual_TextText", (Native)&UKismetTextLibrary::execEqualEqual_TextText },
			{ "FindTextInLocalizationTable", (Native)&UKismetTextLibrary::execFindTextInLocalizationTable },
			{ "Format", (Native)&UKismetTextLibrary::execFormat },
			{ "GetEmptyText", (Native)&UKismetTextLibrary::execGetEmptyText },
			{ "NotEqual_IgnoreCase_TextText", (Native)&UKismetTextLibrary::execNotEqual_IgnoreCase_TextText },
			{ "NotEqual_TextText", (Native)&UKismetTextLibrary::execNotEqual_TextText },
			{ "StringTableIdAndKeyFromText", (Native)&UKismetTextLibrary::execStringTableIdAndKeyFromText },
			{ "TextFromStringTable", (Native)&UKismetTextLibrary::execTextFromStringTable },
			{ "TextIsCultureInvariant", (Native)&UKismetTextLibrary::execTextIsCultureInvariant },
			{ "TextIsEmpty", (Native)&UKismetTextLibrary::execTextIsEmpty },
			{ "TextIsFromStringTable", (Native)&UKismetTextLibrary::execTextIsFromStringTable },
			{ "TextIsTransient", (Native)&UKismetTextLibrary::execTextIsTransient },
			{ "TextToLower", (Native)&UKismetTextLibrary::execTextToLower },
			{ "TextToUpper", (Native)&UKismetTextLibrary::execTextToUpper },
			{ "TextTrimPreceding", (Native)&UKismetTextLibrary::execTextTrimPreceding },
			{ "TextTrimPrecedingAndTrailing", (Native)&UKismetTextLibrary::execTextTrimPrecedingAndTrailing },
			{ "TextTrimTrailing", (Native)&UKismetTextLibrary::execTextTrimTrailing },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Float()
	{
		struct KismetTextLibrary_eventAsCurrency_Float_Parms
		{
			float Value;
			TEnumAsByte<ERoundingMode> RoundingMode;
			bool bUseGrouping;
			int32 MinimumIntegralDigits;
			int32 MaximumIntegralDigits;
			int32 MinimumFractionalDigits;
			int32 MaximumFractionalDigits;
			FString CurrencyCode;
			FText ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Text, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsCurrency_Float_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrencyCode_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_CurrencyCode = { UE4CodeGen_Private::EPropertyClass::Str, "CurrencyCode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsCurrency_Float_Parms, CurrencyCode), METADATA_PARAMS(NewProp_CurrencyCode_MetaData, ARRAY_COUNT(NewProp_CurrencyCode_MetaData)) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaximumFractionalDigits = { UE4CodeGen_Private::EPropertyClass::Int, "MaximumFractionalDigits", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsCurrency_Float_Parms, MaximumFractionalDigits), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinimumFractionalDigits = { UE4CodeGen_Private::EPropertyClass::Int, "MinimumFractionalDigits", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsCurrency_Float_Parms, MinimumFractionalDigits), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaximumIntegralDigits = { UE4CodeGen_Private::EPropertyClass::Int, "MaximumIntegralDigits", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsCurrency_Float_Parms, MaximumIntegralDigits), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinimumIntegralDigits = { UE4CodeGen_Private::EPropertyClass::Int, "MinimumIntegralDigits", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsCurrency_Float_Parms, MinimumIntegralDigits), METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bUseGrouping_SetBit = [](void* Obj){ ((KismetTextLibrary_eventAsCurrency_Float_Parms*)Obj)->bUseGrouping = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseGrouping = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseGrouping", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KismetTextLibrary_eventAsCurrency_Float_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseGrouping_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_RoundingMode = { UE4CodeGen_Private::EPropertyClass::Byte, "RoundingMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsCurrency_Float_Parms, RoundingMode), Z_Construct_UEnum_Engine_ERoundingMode, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Float, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsCurrency_Float_Parms, Value), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurrencyCode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaximumFractionalDigits,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MinimumFractionalDigits,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaximumIntegralDigits,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MinimumIntegralDigits,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseGrouping,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RoundingMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Utilities|Text" },
				{ "CPP_Default_bUseGrouping", "true" },
				{ "CPP_Default_MaximumFractionalDigits", "3" },
				{ "CPP_Default_MaximumIntegralDigits", "324" },
				{ "CPP_Default_MinimumFractionalDigits", "0" },
				{ "CPP_Default_MinimumIntegralDigits", "1" },
				{ "DisplayName", "AsCurrency (float) - DEPRECATED (use AsCurrency)" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
				{ "ToolTip", "Converts a passed in float to a text formatted as a currency" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, "AsCurrency_Float", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(KismetTextLibrary_eventAsCurrency_Float_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Integer()
	{
		struct KismetTextLibrary_eventAsCurrency_Integer_Parms
		{
			int32 Value;
			TEnumAsByte<ERoundingMode> RoundingMode;
			bool bUseGrouping;
			int32 MinimumIntegralDigits;
			int32 MaximumIntegralDigits;
			int32 MinimumFractionalDigits;
			int32 MaximumFractionalDigits;
			FString CurrencyCode;
			FText ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Text, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsCurrency_Integer_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrencyCode_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_CurrencyCode = { UE4CodeGen_Private::EPropertyClass::Str, "CurrencyCode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsCurrency_Integer_Parms, CurrencyCode), METADATA_PARAMS(NewProp_CurrencyCode_MetaData, ARRAY_COUNT(NewProp_CurrencyCode_MetaData)) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaximumFractionalDigits = { UE4CodeGen_Private::EPropertyClass::Int, "MaximumFractionalDigits", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsCurrency_Integer_Parms, MaximumFractionalDigits), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinimumFractionalDigits = { UE4CodeGen_Private::EPropertyClass::Int, "MinimumFractionalDigits", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsCurrency_Integer_Parms, MinimumFractionalDigits), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaximumIntegralDigits = { UE4CodeGen_Private::EPropertyClass::Int, "MaximumIntegralDigits", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsCurrency_Integer_Parms, MaximumIntegralDigits), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinimumIntegralDigits = { UE4CodeGen_Private::EPropertyClass::Int, "MinimumIntegralDigits", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsCurrency_Integer_Parms, MinimumIntegralDigits), METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bUseGrouping_SetBit = [](void* Obj){ ((KismetTextLibrary_eventAsCurrency_Integer_Parms*)Obj)->bUseGrouping = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseGrouping = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseGrouping", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KismetTextLibrary_eventAsCurrency_Integer_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseGrouping_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_RoundingMode = { UE4CodeGen_Private::EPropertyClass::Byte, "RoundingMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsCurrency_Integer_Parms, RoundingMode), Z_Construct_UEnum_Engine_ERoundingMode, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Int, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsCurrency_Integer_Parms, Value), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurrencyCode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaximumFractionalDigits,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MinimumFractionalDigits,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaximumIntegralDigits,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MinimumIntegralDigits,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseGrouping,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RoundingMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Utilities|Text" },
				{ "CPP_Default_bUseGrouping", "true" },
				{ "CPP_Default_MaximumFractionalDigits", "3" },
				{ "CPP_Default_MaximumIntegralDigits", "324" },
				{ "CPP_Default_MinimumFractionalDigits", "0" },
				{ "CPP_Default_MinimumIntegralDigits", "1" },
				{ "DisplayName", "AsCurrency (int) - DEPRECATED (use AsCurrency)" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
				{ "ToolTip", "Converts a passed in integer to a text formatted as a currency" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, "AsCurrency_Integer", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(KismetTextLibrary_eventAsCurrency_Integer_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_AsCurrencyBase()
	{
		struct KismetTextLibrary_eventAsCurrencyBase_Parms
		{
			int32 BaseValue;
			FString CurrencyCode;
			FText ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Text, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsCurrencyBase_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrencyCode_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_CurrencyCode = { UE4CodeGen_Private::EPropertyClass::Str, "CurrencyCode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsCurrencyBase_Parms, CurrencyCode), METADATA_PARAMS(NewProp_CurrencyCode_MetaData, ARRAY_COUNT(NewProp_CurrencyCode_MetaData)) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_BaseValue = { UE4CodeGen_Private::EPropertyClass::Int, "BaseValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsCurrencyBase_Parms, BaseValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurrencyCode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BaseValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Utilities|Text" },
				{ "DisplayName", "AsCurrency" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
				{ "ToolTip", "Generate an FText that represents the passed number as currency in the current culture.\nBaseVal is specified in the smallest fractional value of the currency and will be converted for formatting according to the selected culture.\nKeep in mind the CurrencyCode is completely independent of the culture it's displayed in (and they do not imply one another).\nFor example: FText::AsCurrencyBase(650, TEXT(\"EUR\")); would return an FText of \"<EUR>6.50\" in most English cultures (en_US/en_UK) and \"6,50<EUR>\" in Spanish (es_ES) (where <EUR> is U+20AC)" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, "AsCurrencyBase", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(KismetTextLibrary_eventAsCurrencyBase_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_AsDate_DateTime()
	{
		struct KismetTextLibrary_eventAsDate_DateTime_Parms
		{
			FDateTime InDateTime;
			FText ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Text, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsDate_DateTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InDateTime_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InDateTime = { UE4CodeGen_Private::EPropertyClass::Struct, "InDateTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsDate_DateTime_Parms, InDateTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(NewProp_InDateTime_MetaData, ARRAY_COUNT(NewProp_InDateTime_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InDateTime,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "AdvancedDisplay", "1" },
				{ "Category", "Utilities|Text" },
				{ "DisplayName", "AsDate" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
				{ "ToolTip", "Converts a passed in date & time to a text, formatted as a date using an invariant timezone. This will use the given date & time as-is, so it's assumed to already be in the correct timezone." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, "AsDate_DateTime", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C22401, sizeof(KismetTextLibrary_eventAsDate_DateTime_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_AsDateTime_DateTime()
	{
		struct KismetTextLibrary_eventAsDateTime_DateTime_Parms
		{
			FDateTime In;
			FText ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Text, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsDateTime_DateTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_In_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_In = { UE4CodeGen_Private::EPropertyClass::Struct, "In", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsDateTime_DateTime_Parms, In), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(NewProp_In_MetaData, ARRAY_COUNT(NewProp_In_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_In,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "AdvancedDisplay", "1" },
				{ "Category", "Utilities|Text" },
				{ "DisplayName", "AsDateTime" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
				{ "ToolTip", "Converts a passed in date & time to a text, formatted as a date & time using an invariant timezone. This will use the given date & time as-is, so it's assumed to already be in the correct timezone." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, "AsDateTime_DateTime", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C22401, sizeof(KismetTextLibrary_eventAsDateTime_DateTime_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_AsPercent_Float()
	{
		struct KismetTextLibrary_eventAsPercent_Float_Parms
		{
			float Value;
			TEnumAsByte<ERoundingMode> RoundingMode;
			bool bUseGrouping;
			int32 MinimumIntegralDigits;
			int32 MaximumIntegralDigits;
			int32 MinimumFractionalDigits;
			int32 MaximumFractionalDigits;
			FText ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Text, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsPercent_Float_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaximumFractionalDigits = { UE4CodeGen_Private::EPropertyClass::Int, "MaximumFractionalDigits", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000080, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsPercent_Float_Parms, MaximumFractionalDigits), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinimumFractionalDigits = { UE4CodeGen_Private::EPropertyClass::Int, "MinimumFractionalDigits", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000080, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsPercent_Float_Parms, MinimumFractionalDigits), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaximumIntegralDigits = { UE4CodeGen_Private::EPropertyClass::Int, "MaximumIntegralDigits", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000080, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsPercent_Float_Parms, MaximumIntegralDigits), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinimumIntegralDigits = { UE4CodeGen_Private::EPropertyClass::Int, "MinimumIntegralDigits", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000080, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsPercent_Float_Parms, MinimumIntegralDigits), METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bUseGrouping_SetBit = [](void* Obj){ ((KismetTextLibrary_eventAsPercent_Float_Parms*)Obj)->bUseGrouping = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseGrouping = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseGrouping", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KismetTextLibrary_eventAsPercent_Float_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseGrouping_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_RoundingMode = { UE4CodeGen_Private::EPropertyClass::Byte, "RoundingMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000080, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsPercent_Float_Parms, RoundingMode), Z_Construct_UEnum_Engine_ERoundingMode, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Float, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsPercent_Float_Parms, Value), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaximumFractionalDigits,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MinimumFractionalDigits,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaximumIntegralDigits,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MinimumIntegralDigits,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseGrouping,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RoundingMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "AdvancedDisplay", "1" },
				{ "Category", "Utilities|Text" },
				{ "CPP_Default_bUseGrouping", "true" },
				{ "CPP_Default_MaximumFractionalDigits", "3" },
				{ "CPP_Default_MaximumIntegralDigits", "324" },
				{ "CPP_Default_MinimumFractionalDigits", "0" },
				{ "CPP_Default_MinimumIntegralDigits", "1" },
				{ "DisplayName", "AsPercent" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
				{ "ToolTip", "Converts a passed in float to a text, formatted as a percent" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, "AsPercent_Float", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(KismetTextLibrary_eventAsPercent_Float_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_AsTime_DateTime()
	{
		struct KismetTextLibrary_eventAsTime_DateTime_Parms
		{
			FDateTime In;
			FText ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Text, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsTime_DateTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_In_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_In = { UE4CodeGen_Private::EPropertyClass::Struct, "In", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsTime_DateTime_Parms, In), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(NewProp_In_MetaData, ARRAY_COUNT(NewProp_In_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_In,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "AdvancedDisplay", "1" },
				{ "Category", "Utilities|Text" },
				{ "DisplayName", "AsTime" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
				{ "ToolTip", "Converts a passed in date & time to a text, formatted as a time using an invariant timezone. This will use the given date & time as-is, so it's assumed to already be in the correct timezone." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, "AsTime_DateTime", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C22401, sizeof(KismetTextLibrary_eventAsTime_DateTime_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_AsTimespan_Timespan()
	{
		struct KismetTextLibrary_eventAsTimespan_Timespan_Parms
		{
			FTimespan InTimespan;
			FText ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Text, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsTimespan_Timespan_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InTimespan_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InTimespan = { UE4CodeGen_Private::EPropertyClass::Struct, "InTimespan", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsTimespan_Timespan_Parms, InTimespan), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(NewProp_InTimespan_MetaData, ARRAY_COUNT(NewProp_InTimespan_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InTimespan,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "AdvancedDisplay", "1" },
				{ "Category", "Utilities|Text" },
				{ "DisplayName", "AsTimespan" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
				{ "ToolTip", "Converts a passed in time span to a text, formatted as a time span" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, "AsTimespan_Timespan", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C22401, sizeof(KismetTextLibrary_eventAsTimespan_Timespan_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneDate_DateTime()
	{
		struct KismetTextLibrary_eventAsTimeZoneDate_DateTime_Parms
		{
			FDateTime InDateTime;
			FString InTimeZone;
			FText ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Text, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsTimeZoneDate_DateTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InTimeZone_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_InTimeZone = { UE4CodeGen_Private::EPropertyClass::Str, "InTimeZone", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000080, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsTimeZoneDate_DateTime_Parms, InTimeZone), METADATA_PARAMS(NewProp_InTimeZone_MetaData, ARRAY_COUNT(NewProp_InTimeZone_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InDateTime_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InDateTime = { UE4CodeGen_Private::EPropertyClass::Struct, "InDateTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsTimeZoneDate_DateTime_Parms, InDateTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(NewProp_InDateTime_MetaData, ARRAY_COUNT(NewProp_InDateTime_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InTimeZone,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InDateTime,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "AdvancedDisplay", "1" },
				{ "Category", "Utilities|Text" },
				{ "DisplayName", "AsDate (from UTC)" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
				{ "ToolTip", "Converts a passed in date & time to a text, formatted as a date using the given timezone (default is the local timezone). This will convert the given date & time from UTC to the given timezone (taking into account DST)." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, "AsTimeZoneDate_DateTime", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C22401, sizeof(KismetTextLibrary_eventAsTimeZoneDate_DateTime_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneDateTime_DateTime()
	{
		struct KismetTextLibrary_eventAsTimeZoneDateTime_DateTime_Parms
		{
			FDateTime InDateTime;
			FString InTimeZone;
			FText ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Text, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsTimeZoneDateTime_DateTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InTimeZone_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_InTimeZone = { UE4CodeGen_Private::EPropertyClass::Str, "InTimeZone", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000080, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsTimeZoneDateTime_DateTime_Parms, InTimeZone), METADATA_PARAMS(NewProp_InTimeZone_MetaData, ARRAY_COUNT(NewProp_InTimeZone_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InDateTime_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InDateTime = { UE4CodeGen_Private::EPropertyClass::Struct, "InDateTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsTimeZoneDateTime_DateTime_Parms, InDateTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(NewProp_InDateTime_MetaData, ARRAY_COUNT(NewProp_InDateTime_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InTimeZone,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InDateTime,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "AdvancedDisplay", "1" },
				{ "Category", "Utilities|Text" },
				{ "DisplayName", "AsDateTime (from UTC)" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
				{ "ToolTip", "Converts a passed in date & time to a text, formatted as a date & time using the given timezone (default is the local timezone). This will convert the given date & time from UTC to the given timezone (taking into account DST)." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, "AsTimeZoneDateTime_DateTime", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C22401, sizeof(KismetTextLibrary_eventAsTimeZoneDateTime_DateTime_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneTime_DateTime()
	{
		struct KismetTextLibrary_eventAsTimeZoneTime_DateTime_Parms
		{
			FDateTime InDateTime;
			FString InTimeZone;
			FText ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Text, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsTimeZoneTime_DateTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InTimeZone_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_InTimeZone = { UE4CodeGen_Private::EPropertyClass::Str, "InTimeZone", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000080, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsTimeZoneTime_DateTime_Parms, InTimeZone), METADATA_PARAMS(NewProp_InTimeZone_MetaData, ARRAY_COUNT(NewProp_InTimeZone_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InDateTime_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InDateTime = { UE4CodeGen_Private::EPropertyClass::Struct, "InDateTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsTimeZoneTime_DateTime_Parms, InDateTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(NewProp_InDateTime_MetaData, ARRAY_COUNT(NewProp_InDateTime_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InTimeZone,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InDateTime,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "AdvancedDisplay", "1" },
				{ "Category", "Utilities|Text" },
				{ "DisplayName", "AsTime (from UTC)" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
				{ "ToolTip", "Converts a passed in date & time to a text, formatted as a time using the given timezone (default is the local timezone). This will convert the given date & time from UTC to the given timezone (taking into account DST)." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, "AsTimeZoneTime_DateTime", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C22401, sizeof(KismetTextLibrary_eventAsTimeZoneTime_DateTime_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_Conv_BoolToText()
	{
		struct KismetTextLibrary_eventConv_BoolToText_Parms
		{
			bool InBool;
			FText ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Text, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventConv_BoolToText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			auto NewProp_InBool_SetBit = [](void* Obj){ ((KismetTextLibrary_eventConv_BoolToText_Parms*)Obj)->InBool = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InBool = { UE4CodeGen_Private::EPropertyClass::Bool, "InBool", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KismetTextLibrary_eventConv_BoolToText_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_InBool_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InBool,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "BlueprintAutocast", "" },
				{ "Category", "Utilities|Text" },
				{ "CompactNodeTitle", "->" },
				{ "DisplayName", "ToText (boolean)" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
				{ "ToolTip", "Converts a boolean value to formatted text, either 'true' or 'false'" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, "Conv_BoolToText", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(KismetTextLibrary_eventConv_BoolToText_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_Conv_ByteToText()
	{
		struct KismetTextLibrary_eventConv_ByteToText_Parms
		{
			uint8 Value;
			FText ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Text, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventConv_ByteToText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Byte, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventConv_ByteToText_Parms, Value), nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "BlueprintAutocast", "" },
				{ "Category", "Utilities|Text" },
				{ "CompactNodeTitle", "->" },
				{ "DisplayName", "ToText (byte)" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
				{ "ToolTip", "Converts a byte value to formatted text" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, "Conv_ByteToText", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(KismetTextLibrary_eventConv_ByteToText_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_Conv_ColorToText()
	{
		struct KismetTextLibrary_eventConv_ColorToText_Parms
		{
			FLinearColor InColor;
			FText ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Text, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventConv_ColorToText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InColor = { UE4CodeGen_Private::EPropertyClass::Struct, "InColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventConv_ColorToText_Parms, InColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InColor,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "BlueprintAutocast", "" },
				{ "Category", "Utilities|Text" },
				{ "CompactNodeTitle", "->" },
				{ "DisplayName", "ToText (linear color)" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
				{ "ToolTip", "Converts a linear color value to localized formatted text, in the form '(R=,G=,B=,A=)'" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, "Conv_ColorToText", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14822401, sizeof(KismetTextLibrary_eventConv_ColorToText_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_Conv_FloatToText()
	{
		struct KismetTextLibrary_eventConv_FloatToText_Parms
		{
			float Value;
			TEnumAsByte<ERoundingMode> RoundingMode;
			bool bUseGrouping;
			int32 MinimumIntegralDigits;
			int32 MaximumIntegralDigits;
			int32 MinimumFractionalDigits;
			int32 MaximumFractionalDigits;
			FText ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Text, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventConv_FloatToText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaximumFractionalDigits = { UE4CodeGen_Private::EPropertyClass::Int, "MaximumFractionalDigits", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000080, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventConv_FloatToText_Parms, MaximumFractionalDigits), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinimumFractionalDigits = { UE4CodeGen_Private::EPropertyClass::Int, "MinimumFractionalDigits", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000080, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventConv_FloatToText_Parms, MinimumFractionalDigits), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaximumIntegralDigits = { UE4CodeGen_Private::EPropertyClass::Int, "MaximumIntegralDigits", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000080, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventConv_FloatToText_Parms, MaximumIntegralDigits), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinimumIntegralDigits = { UE4CodeGen_Private::EPropertyClass::Int, "MinimumIntegralDigits", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000080, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventConv_FloatToText_Parms, MinimumIntegralDigits), METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bUseGrouping_SetBit = [](void* Obj){ ((KismetTextLibrary_eventConv_FloatToText_Parms*)Obj)->bUseGrouping = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseGrouping = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseGrouping", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KismetTextLibrary_eventConv_FloatToText_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseGrouping_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_RoundingMode = { UE4CodeGen_Private::EPropertyClass::Byte, "RoundingMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000080, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventConv_FloatToText_Parms, RoundingMode), Z_Construct_UEnum_Engine_ERoundingMode, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Float, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventConv_FloatToText_Parms, Value), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaximumFractionalDigits,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MinimumFractionalDigits,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaximumIntegralDigits,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MinimumIntegralDigits,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseGrouping,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RoundingMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "AdvancedDisplay", "1" },
				{ "BlueprintAutocast", "" },
				{ "Category", "Utilities|Text" },
				{ "CPP_Default_bUseGrouping", "true" },
				{ "CPP_Default_MaximumFractionalDigits", "3" },
				{ "CPP_Default_MaximumIntegralDigits", "324" },
				{ "CPP_Default_MinimumFractionalDigits", "0" },
				{ "CPP_Default_MinimumIntegralDigits", "1" },
				{ "DisplayName", "ToText (float)" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
				{ "ToolTip", "Converts a passed in float to text based on formatting options" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, "Conv_FloatToText", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(KismetTextLibrary_eventConv_FloatToText_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_Conv_IntToText()
	{
		struct KismetTextLibrary_eventConv_IntToText_Parms
		{
			int32 Value;
			bool bUseGrouping;
			int32 MinimumIntegralDigits;
			int32 MaximumIntegralDigits;
			FText ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Text, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventConv_IntToText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaximumIntegralDigits = { UE4CodeGen_Private::EPropertyClass::Int, "MaximumIntegralDigits", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000080, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventConv_IntToText_Parms, MaximumIntegralDigits), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinimumIntegralDigits = { UE4CodeGen_Private::EPropertyClass::Int, "MinimumIntegralDigits", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000080, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventConv_IntToText_Parms, MinimumIntegralDigits), METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bUseGrouping_SetBit = [](void* Obj){ ((KismetTextLibrary_eventConv_IntToText_Parms*)Obj)->bUseGrouping = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseGrouping = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseGrouping", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KismetTextLibrary_eventConv_IntToText_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseGrouping_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Int, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventConv_IntToText_Parms, Value), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaximumIntegralDigits,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MinimumIntegralDigits,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseGrouping,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "AdvancedDisplay", "1" },
				{ "BlueprintAutocast", "" },
				{ "Category", "Utilities|Text" },
				{ "CPP_Default_bUseGrouping", "true" },
				{ "CPP_Default_MaximumIntegralDigits", "324" },
				{ "CPP_Default_MinimumIntegralDigits", "1" },
				{ "DisplayName", "ToText (int)" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
				{ "ToolTip", "Converts a passed in integer to text based on formatting options" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, "Conv_IntToText", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(KismetTextLibrary_eventConv_IntToText_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_Conv_NameToText()
	{
		struct KismetTextLibrary_eventConv_NameToText_Parms
		{
			FName InName;
			FText ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Text, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventConv_NameToText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_InName = { UE4CodeGen_Private::EPropertyClass::Name, "InName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventConv_NameToText_Parms, InName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "BlueprintAutocast", "" },
				{ "Category", "Utilities|Text" },
				{ "DisplayName", "ToText (name)" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
				{ "ToolTip", "Converts Name to culture invariant text" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, "Conv_NameToText", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(KismetTextLibrary_eventConv_NameToText_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_Conv_ObjectToText()
	{
		struct KismetTextLibrary_eventConv_ObjectToText_Parms
		{
			UObject* InObj;
			FText ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Text, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventConv_ObjectToText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InObj = { UE4CodeGen_Private::EPropertyClass::Object, "InObj", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventConv_ObjectToText_Parms, InObj), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InObj,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "BlueprintAutocast", "" },
				{ "Category", "Utilities|Text" },
				{ "DisplayName", "ToText (object)" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
				{ "ToolTip", "Converts a UObject value to culture invariant text by calling the object's GetName method" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, "Conv_ObjectToText", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(KismetTextLibrary_eventConv_ObjectToText_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_Conv_RotatorToText()
	{
		struct KismetTextLibrary_eventConv_RotatorToText_Parms
		{
			FRotator InRot;
			FText ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Text, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventConv_RotatorToText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InRot = { UE4CodeGen_Private::EPropertyClass::Struct, "InRot", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventConv_RotatorToText_Parms, InRot), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InRot,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "BlueprintAutocast", "" },
				{ "Category", "Utilities|Text" },
				{ "CompactNodeTitle", "->" },
				{ "DisplayName", "ToText (rotator)" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
				{ "ToolTip", "Converts a rotator value to localized formatted text, in the form 'P= Y= R='" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, "Conv_RotatorToText", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14822401, sizeof(KismetTextLibrary_eventConv_RotatorToText_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_Conv_StringToText()
	{
		struct KismetTextLibrary_eventConv_StringToText_Parms
		{
			FString InString;
			FText ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Text, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventConv_StringToText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InString_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_InString = { UE4CodeGen_Private::EPropertyClass::Str, "InString", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventConv_StringToText_Parms, InString), METADATA_PARAMS(NewProp_InString_MetaData, ARRAY_COUNT(NewProp_InString_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InString,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "BlueprintAutocast", "" },
				{ "Category", "Utilities|Text" },
				{ "DisplayName", "ToText (string)" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
				{ "ToolTip", "Converts string to culture invariant text. Use Format or Make Literal Text to create localizable text" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, "Conv_StringToText", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(KismetTextLibrary_eventConv_StringToText_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_Conv_TextToString()
	{
		struct KismetTextLibrary_eventConv_TextToString_Parms
		{
			FText InText;
			FString ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventConv_TextToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InText_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_InText = { UE4CodeGen_Private::EPropertyClass::Text, "InText", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventConv_TextToString_Parms, InText), METADATA_PARAMS(NewProp_InText_MetaData, ARRAY_COUNT(NewProp_InText_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InText,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "BlueprintAutocast", "" },
				{ "Category", "Utilities|String" },
				{ "CompactNodeTitle", "->" },
				{ "DisplayName", "ToString (text)" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
				{ "ToolTip", "Converts localizable text to the string" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, "Conv_TextToString", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(KismetTextLibrary_eventConv_TextToString_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_Conv_TransformToText()
	{
		struct KismetTextLibrary_eventConv_TransformToText_Parms
		{
			FTransform InTrans;
			FText ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Text, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventConv_TransformToText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InTrans_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InTrans = { UE4CodeGen_Private::EPropertyClass::Struct, "InTrans", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventConv_TransformToText_Parms, InTrans), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(NewProp_InTrans_MetaData, ARRAY_COUNT(NewProp_InTrans_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InTrans,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "BlueprintAutocast", "" },
				{ "Category", "Utilities|Text" },
				{ "CompactNodeTitle", "->" },
				{ "DisplayName", "ToText (transform)" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
				{ "ToolTip", "Converts a transform value to localized formatted text, in the form 'Translation: X= Y= Z= Rotation: P= Y= R= Scale: X= Y= Z='" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, "Conv_TransformToText", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C22401, sizeof(KismetTextLibrary_eventConv_TransformToText_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_Conv_Vector2dToText()
	{
		struct KismetTextLibrary_eventConv_Vector2dToText_Parms
		{
			FVector2D InVec;
			FText ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Text, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventConv_Vector2dToText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InVec = { UE4CodeGen_Private::EPropertyClass::Struct, "InVec", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventConv_Vector2dToText_Parms, InVec), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InVec,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "BlueprintAutocast", "" },
				{ "Category", "Utilities|Text" },
				{ "CompactNodeTitle", "->" },
				{ "DisplayName", "ToText (vector2d)" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
				{ "ToolTip", "Converts a vector2d value to localized formatted text, in the form 'X= Y='" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, "Conv_Vector2dToText", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14822401, sizeof(KismetTextLibrary_eventConv_Vector2dToText_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_Conv_VectorToText()
	{
		struct KismetTextLibrary_eventConv_VectorToText_Parms
		{
			FVector InVec;
			FText ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Text, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventConv_VectorToText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InVec = { UE4CodeGen_Private::EPropertyClass::Struct, "InVec", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventConv_VectorToText_Parms, InVec), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InVec,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "BlueprintAutocast", "" },
				{ "Category", "Utilities|Text" },
				{ "CompactNodeTitle", "->" },
				{ "DisplayName", "ToText (Vector)" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
				{ "ToolTip", "Converts a vector value to localized formatted text, in the form 'X= Y= Z='" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, "Conv_VectorToText", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14822401, sizeof(KismetTextLibrary_eventConv_VectorToText_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_IgnoreCase_TextText()
	{
		struct KismetTextLibrary_eventEqualEqual_IgnoreCase_TextText_Parms
		{
			FText A;
			FText B;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((KismetTextLibrary_eventEqualEqual_IgnoreCase_TextText_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KismetTextLibrary_eventEqualEqual_IgnoreCase_TextText_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_B = { UE4CodeGen_Private::EPropertyClass::Text, "B", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventEqualEqual_IgnoreCase_TextText_Parms, B), METADATA_PARAMS(NewProp_B_MetaData, ARRAY_COUNT(NewProp_B_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_A = { UE4CodeGen_Private::EPropertyClass::Text, "A", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventEqualEqual_IgnoreCase_TextText_Parms, A), METADATA_PARAMS(NewProp_A_MetaData, ARRAY_COUNT(NewProp_A_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_B,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_A,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Utilities|Text" },
				{ "CompactNodeTitle", "==" },
				{ "DisplayName", "Equal, Case Insensitive (text)" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
				{ "ToolTip", "Returns true if A and B are linguistically equal (A == B), ignoring case." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, "EqualEqual_IgnoreCase_TextText", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(KismetTextLibrary_eventEqualEqual_IgnoreCase_TextText_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_TextText()
	{
		struct KismetTextLibrary_eventEqualEqual_TextText_Parms
		{
			FText A;
			FText B;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((KismetTextLibrary_eventEqualEqual_TextText_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KismetTextLibrary_eventEqualEqual_TextText_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_B = { UE4CodeGen_Private::EPropertyClass::Text, "B", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventEqualEqual_TextText_Parms, B), METADATA_PARAMS(NewProp_B_MetaData, ARRAY_COUNT(NewProp_B_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_A = { UE4CodeGen_Private::EPropertyClass::Text, "A", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventEqualEqual_TextText_Parms, A), METADATA_PARAMS(NewProp_A_MetaData, ARRAY_COUNT(NewProp_A_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_B,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_A,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Utilities|Text" },
				{ "CompactNodeTitle", "==" },
				{ "DisplayName", "Equal (text)" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
				{ "ToolTip", "Returns true if A and B are linguistically equal (A == B)." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, "EqualEqual_TextText", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(KismetTextLibrary_eventEqualEqual_TextText_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_FindTextInLocalizationTable()
	{
		struct KismetTextLibrary_eventFindTextInLocalizationTable_Parms
		{
			FString Namespace;
			FString Key;
			FText OutText;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((KismetTextLibrary_eventFindTextInLocalizationTable_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KismetTextLibrary_eventFindTextInLocalizationTable_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_OutText = { UE4CodeGen_Private::EPropertyClass::Text, "OutText", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventFindTextInLocalizationTable_Parms, OutText), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Str, "Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventFindTextInLocalizationTable_Parms, Key), METADATA_PARAMS(NewProp_Key_MetaData, ARRAY_COUNT(NewProp_Key_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Namespace_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Namespace = { UE4CodeGen_Private::EPropertyClass::Str, "Namespace", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventFindTextInLocalizationTable_Parms, Namespace), METADATA_PARAMS(NewProp_Namespace_MetaData, ARRAY_COUNT(NewProp_Namespace_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutText,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Key,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Namespace,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Utilities|Text" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
				{ "ToolTip", "Attempts to find existing Text using the representation found in the loc tables for the specified namespace and key." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, "FindTextInLocalizationTable", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(KismetTextLibrary_eventFindTextInLocalizationTable_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_Format()
	{
		struct FFormatArgumentData
		{
			FString ArgumentName;
			TEnumAsByte<EFormatArgumentType::Type> ArgumentValueType;
			FText ArgumentValue;
			int32 ArgumentValueInt;
			float ArgumentValueFloat;
			ETextGender ArgumentValueGender;
		};

		struct KismetTextLibrary_eventFormat_Parms
		{
			FText InPattern;
			TArray<FFormatArgumentData> InArgs;
			FText ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Text, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventFormat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InArgs = { UE4CodeGen_Private::EPropertyClass::Array, "InArgs", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventFormat_Parms, InArgs), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InArgs_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "InArgs", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FFormatArgumentData, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_InPattern = { UE4CodeGen_Private::EPropertyClass::Text, "InPattern", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventFormat_Parms, InPattern), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InArgs,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InArgs_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InPattern,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "BlueprintInternalUseOnly", "true" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
				{ "ToolTip", "Used for formatting text using the FText::Format function and utilized by the UK2Node_FormatText" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, "Format", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(KismetTextLibrary_eventFormat_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_GetEmptyText()
	{
		struct KismetTextLibrary_eventGetEmptyText_Parms
		{
			FText ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Text, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventGetEmptyText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Utilities|Text" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
				{ "ToolTip", "Returns an empty piece of text." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, "GetEmptyText", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(KismetTextLibrary_eventGetEmptyText_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_NotEqual_IgnoreCase_TextText()
	{
		struct KismetTextLibrary_eventNotEqual_IgnoreCase_TextText_Parms
		{
			FText A;
			FText B;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((KismetTextLibrary_eventNotEqual_IgnoreCase_TextText_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KismetTextLibrary_eventNotEqual_IgnoreCase_TextText_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_B = { UE4CodeGen_Private::EPropertyClass::Text, "B", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventNotEqual_IgnoreCase_TextText_Parms, B), METADATA_PARAMS(NewProp_B_MetaData, ARRAY_COUNT(NewProp_B_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_A = { UE4CodeGen_Private::EPropertyClass::Text, "A", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventNotEqual_IgnoreCase_TextText_Parms, A), METADATA_PARAMS(NewProp_A_MetaData, ARRAY_COUNT(NewProp_A_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_B,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_A,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Utilities|Text" },
				{ "CompactNodeTitle", "!=" },
				{ "DisplayName", "NotEqual, Case Insensitive (text)" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
				{ "ToolTip", "Returns true if A and B are linguistically not equal (A != B), ignoring case." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, "NotEqual_IgnoreCase_TextText", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(KismetTextLibrary_eventNotEqual_IgnoreCase_TextText_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_NotEqual_TextText()
	{
		struct KismetTextLibrary_eventNotEqual_TextText_Parms
		{
			FText A;
			FText B;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((KismetTextLibrary_eventNotEqual_TextText_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KismetTextLibrary_eventNotEqual_TextText_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_B = { UE4CodeGen_Private::EPropertyClass::Text, "B", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventNotEqual_TextText_Parms, B), METADATA_PARAMS(NewProp_B_MetaData, ARRAY_COUNT(NewProp_B_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_A = { UE4CodeGen_Private::EPropertyClass::Text, "A", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventNotEqual_TextText_Parms, A), METADATA_PARAMS(NewProp_A_MetaData, ARRAY_COUNT(NewProp_A_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_B,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_A,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Utilities|Text" },
				{ "CompactNodeTitle", "!=" },
				{ "DisplayName", "NotEqual (text)" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
				{ "ToolTip", "Returns true if A and B are linguistically not equal (A != B)." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, "NotEqual_TextText", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(KismetTextLibrary_eventNotEqual_TextText_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_StringTableIdAndKeyFromText()
	{
		struct KismetTextLibrary_eventStringTableIdAndKeyFromText_Parms
		{
			FText Text;
			FName OutTableId;
			FString OutKey;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((KismetTextLibrary_eventStringTableIdAndKeyFromText_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KismetTextLibrary_eventStringTableIdAndKeyFromText_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutKey = { UE4CodeGen_Private::EPropertyClass::Str, "OutKey", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventStringTableIdAndKeyFromText_Parms, OutKey), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_OutTableId = { UE4CodeGen_Private::EPropertyClass::Name, "OutTableId", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventStringTableIdAndKeyFromText_Parms, OutTableId), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_Text = { UE4CodeGen_Private::EPropertyClass::Text, "Text", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventStringTableIdAndKeyFromText_Parms, Text), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutKey,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutTableId,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Text,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Utilities|Text" },
				{ "DisplayName", "Find String Table ID and Key from Text" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
				{ "ToolTip", "Attempts to find the String Table ID and key used by the given text.\n@return True if the String Table ID and key were found, false otherwise." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, "StringTableIdAndKeyFromText", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(KismetTextLibrary_eventStringTableIdAndKeyFromText_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_TextFromStringTable()
	{
		struct KismetTextLibrary_eventTextFromStringTable_Parms
		{
			FName TableId;
			FString Key;
			FText ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Text, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventTextFromStringTable_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Str, "Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventTextFromStringTable_Parms, Key), METADATA_PARAMS(NewProp_Key_MetaData, ARRAY_COUNT(NewProp_Key_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TableId_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_TableId = { UE4CodeGen_Private::EPropertyClass::Name, "TableId", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventTextFromStringTable_Parms, TableId), METADATA_PARAMS(NewProp_TableId_MetaData, ARRAY_COUNT(NewProp_TableId_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Key,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TableId,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Utilities|Text" },
				{ "DisplayName", "Make Text from String Table (Advanced)" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
				{ "ToolTip", "Attempts to create a text instance from a string table ID and key.\n@note This exists to allow programmatic \xe2\x80\x8elook-up of a string table entry from dynamic content - you should favor setting your string table reference on a text property or pin wherever possible as it is significantly more robust (see \"Make Literal Text\").\n@return The found text, or a dummy text if the entry could not be found." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, "TextFromStringTable", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(KismetTextLibrary_eventTextFromStringTable_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_TextIsCultureInvariant()
	{
		struct KismetTextLibrary_eventTextIsCultureInvariant_Parms
		{
			FText InText;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((KismetTextLibrary_eventTextIsCultureInvariant_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KismetTextLibrary_eventTextIsCultureInvariant_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InText_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_InText = { UE4CodeGen_Private::EPropertyClass::Text, "InText", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventTextIsCultureInvariant_Parms, InText), METADATA_PARAMS(NewProp_InText_MetaData, ARRAY_COUNT(NewProp_InText_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InText,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Utilities|Text" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
				{ "ToolTip", "Returns true if text is culture invariant." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, "TextIsCultureInvariant", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(KismetTextLibrary_eventTextIsCultureInvariant_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_TextIsEmpty()
	{
		struct KismetTextLibrary_eventTextIsEmpty_Parms
		{
			FText InText;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((KismetTextLibrary_eventTextIsEmpty_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KismetTextLibrary_eventTextIsEmpty_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InText_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_InText = { UE4CodeGen_Private::EPropertyClass::Text, "InText", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventTextIsEmpty_Parms, InText), METADATA_PARAMS(NewProp_InText_MetaData, ARRAY_COUNT(NewProp_InText_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InText,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Utilities|Text" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
				{ "ToolTip", "Returns true if text is empty." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, "TextIsEmpty", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(KismetTextLibrary_eventTextIsEmpty_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_TextIsFromStringTable()
	{
		struct KismetTextLibrary_eventTextIsFromStringTable_Parms
		{
			FText Text;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((KismetTextLibrary_eventTextIsFromStringTable_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KismetTextLibrary_eventTextIsFromStringTable_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_Text = { UE4CodeGen_Private::EPropertyClass::Text, "Text", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventTextIsFromStringTable_Parms, Text), METADATA_PARAMS(NewProp_Text_MetaData, ARRAY_COUNT(NewProp_Text_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Text,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Utilities|Text" },
				{ "DisplayName", "Is Text from String Table" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
				{ "ToolTip", "Returns true if the given text is referencing a string table." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, "TextIsFromStringTable", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(KismetTextLibrary_eventTextIsFromStringTable_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_TextIsTransient()
	{
		struct KismetTextLibrary_eventTextIsTransient_Parms
		{
			FText InText;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((KismetTextLibrary_eventTextIsTransient_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KismetTextLibrary_eventTextIsTransient_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InText_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_InText = { UE4CodeGen_Private::EPropertyClass::Text, "InText", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventTextIsTransient_Parms, InText), METADATA_PARAMS(NewProp_InText_MetaData, ARRAY_COUNT(NewProp_InText_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InText,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Utilities|Text" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
				{ "ToolTip", "Returns true if text is transient." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, "TextIsTransient", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(KismetTextLibrary_eventTextIsTransient_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_TextToLower()
	{
		struct KismetTextLibrary_eventTextToLower_Parms
		{
			FText InText;
			FText ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Text, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventTextToLower_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InText_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_InText = { UE4CodeGen_Private::EPropertyClass::Text, "InText", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventTextToLower_Parms, InText), METADATA_PARAMS(NewProp_InText_MetaData, ARRAY_COUNT(NewProp_InText_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InText,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Utilities|Text" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
				{ "ToolTip", "Transforms the text to lowercase in a culture correct way.\n@note The returned instance is linked to the original and will be rebuilt if the active culture is changed." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, "TextToLower", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(KismetTextLibrary_eventTextToLower_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_TextToUpper()
	{
		struct KismetTextLibrary_eventTextToUpper_Parms
		{
			FText InText;
			FText ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Text, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventTextToUpper_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InText_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_InText = { UE4CodeGen_Private::EPropertyClass::Text, "InText", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventTextToUpper_Parms, InText), METADATA_PARAMS(NewProp_InText_MetaData, ARRAY_COUNT(NewProp_InText_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InText,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Utilities|Text" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
				{ "ToolTip", "Transforms the text to uppercase in a culture correct way.\n@note The returned instance is linked to the original and will be rebuilt if the active culture is changed." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, "TextToUpper", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(KismetTextLibrary_eventTextToUpper_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_TextTrimPreceding()
	{
		struct KismetTextLibrary_eventTextTrimPreceding_Parms
		{
			FText InText;
			FText ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Text, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventTextTrimPreceding_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InText_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_InText = { UE4CodeGen_Private::EPropertyClass::Text, "InText", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventTextTrimPreceding_Parms, InText), METADATA_PARAMS(NewProp_InText_MetaData, ARRAY_COUNT(NewProp_InText_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InText,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Utilities|Text" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
				{ "ToolTip", "Removes whitespace characters from the front of the text." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, "TextTrimPreceding", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(KismetTextLibrary_eventTextTrimPreceding_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_TextTrimPrecedingAndTrailing()
	{
		struct KismetTextLibrary_eventTextTrimPrecedingAndTrailing_Parms
		{
			FText InText;
			FText ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Text, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventTextTrimPrecedingAndTrailing_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InText_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_InText = { UE4CodeGen_Private::EPropertyClass::Text, "InText", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventTextTrimPrecedingAndTrailing_Parms, InText), METADATA_PARAMS(NewProp_InText_MetaData, ARRAY_COUNT(NewProp_InText_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InText,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Utilities|Text" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
				{ "ToolTip", "Removes whitespace characters from the front and end of the text." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, "TextTrimPrecedingAndTrailing", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(KismetTextLibrary_eventTextTrimPrecedingAndTrailing_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_TextTrimTrailing()
	{
		struct KismetTextLibrary_eventTextTrimTrailing_Parms
		{
			FText InText;
			FText ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Text, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventTextTrimTrailing_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InText_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_InText = { UE4CodeGen_Private::EPropertyClass::Text, "InText", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventTextTrimTrailing_Parms, InText), METADATA_PARAMS(NewProp_InText_MetaData, ARRAY_COUNT(NewProp_InText_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InText,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Utilities|Text" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
				{ "ToolTip", "Removes trailing whitespace characters." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, "TextTrimTrailing", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(KismetTextLibrary_eventTextTrimTrailing_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UKismetTextLibrary_NoRegister()
	{
		return UKismetTextLibrary::StaticClass();
	}
	UClass* Z_Construct_UClass_UKismetTextLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Float, "AsCurrency_Float" }, // 4100772534
				{ &Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Integer, "AsCurrency_Integer" }, // 3470259267
				{ &Z_Construct_UFunction_UKismetTextLibrary_AsCurrencyBase, "AsCurrencyBase" }, // 2813489690
				{ &Z_Construct_UFunction_UKismetTextLibrary_AsDate_DateTime, "AsDate_DateTime" }, // 3233184786
				{ &Z_Construct_UFunction_UKismetTextLibrary_AsDateTime_DateTime, "AsDateTime_DateTime" }, // 1944489418
				{ &Z_Construct_UFunction_UKismetTextLibrary_AsPercent_Float, "AsPercent_Float" }, // 1662996613
				{ &Z_Construct_UFunction_UKismetTextLibrary_AsTime_DateTime, "AsTime_DateTime" }, // 2055961373
				{ &Z_Construct_UFunction_UKismetTextLibrary_AsTimespan_Timespan, "AsTimespan_Timespan" }, // 1048257591
				{ &Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneDate_DateTime, "AsTimeZoneDate_DateTime" }, // 2869833309
				{ &Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneDateTime_DateTime, "AsTimeZoneDateTime_DateTime" }, // 3402746387
				{ &Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneTime_DateTime, "AsTimeZoneTime_DateTime" }, // 1699764710
				{ &Z_Construct_UFunction_UKismetTextLibrary_Conv_BoolToText, "Conv_BoolToText" }, // 1088827864
				{ &Z_Construct_UFunction_UKismetTextLibrary_Conv_ByteToText, "Conv_ByteToText" }, // 2487165330
				{ &Z_Construct_UFunction_UKismetTextLibrary_Conv_ColorToText, "Conv_ColorToText" }, // 3570671773
				{ &Z_Construct_UFunction_UKismetTextLibrary_Conv_FloatToText, "Conv_FloatToText" }, // 3302095134
				{ &Z_Construct_UFunction_UKismetTextLibrary_Conv_IntToText, "Conv_IntToText" }, // 290718431
				{ &Z_Construct_UFunction_UKismetTextLibrary_Conv_NameToText, "Conv_NameToText" }, // 4016863614
				{ &Z_Construct_UFunction_UKismetTextLibrary_Conv_ObjectToText, "Conv_ObjectToText" }, // 1821037669
				{ &Z_Construct_UFunction_UKismetTextLibrary_Conv_RotatorToText, "Conv_RotatorToText" }, // 385132197
				{ &Z_Construct_UFunction_UKismetTextLibrary_Conv_StringToText, "Conv_StringToText" }, // 2063482078
				{ &Z_Construct_UFunction_UKismetTextLibrary_Conv_TextToString, "Conv_TextToString" }, // 4095502188
				{ &Z_Construct_UFunction_UKismetTextLibrary_Conv_TransformToText, "Conv_TransformToText" }, // 3894520745
				{ &Z_Construct_UFunction_UKismetTextLibrary_Conv_Vector2dToText, "Conv_Vector2dToText" }, // 2612228924
				{ &Z_Construct_UFunction_UKismetTextLibrary_Conv_VectorToText, "Conv_VectorToText" }, // 924420147
				{ &Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_IgnoreCase_TextText, "EqualEqual_IgnoreCase_TextText" }, // 2308864503
				{ &Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_TextText, "EqualEqual_TextText" }, // 2233556391
				{ &Z_Construct_UFunction_UKismetTextLibrary_FindTextInLocalizationTable, "FindTextInLocalizationTable" }, // 3764317056
				{ &Z_Construct_UFunction_UKismetTextLibrary_Format, "Format" }, // 2344320740
				{ &Z_Construct_UFunction_UKismetTextLibrary_GetEmptyText, "GetEmptyText" }, // 236517305
				{ &Z_Construct_UFunction_UKismetTextLibrary_NotEqual_IgnoreCase_TextText, "NotEqual_IgnoreCase_TextText" }, // 115518139
				{ &Z_Construct_UFunction_UKismetTextLibrary_NotEqual_TextText, "NotEqual_TextText" }, // 739496230
				{ &Z_Construct_UFunction_UKismetTextLibrary_StringTableIdAndKeyFromText, "StringTableIdAndKeyFromText" }, // 1823418673
				{ &Z_Construct_UFunction_UKismetTextLibrary_TextFromStringTable, "TextFromStringTable" }, // 4186138869
				{ &Z_Construct_UFunction_UKismetTextLibrary_TextIsCultureInvariant, "TextIsCultureInvariant" }, // 3262330834
				{ &Z_Construct_UFunction_UKismetTextLibrary_TextIsEmpty, "TextIsEmpty" }, // 3546793638
				{ &Z_Construct_UFunction_UKismetTextLibrary_TextIsFromStringTable, "TextIsFromStringTable" }, // 2924635104
				{ &Z_Construct_UFunction_UKismetTextLibrary_TextIsTransient, "TextIsTransient" }, // 2864812690
				{ &Z_Construct_UFunction_UKismetTextLibrary_TextToLower, "TextToLower" }, // 2442197924
				{ &Z_Construct_UFunction_UKismetTextLibrary_TextToUpper, "TextToUpper" }, // 990360318
				{ &Z_Construct_UFunction_UKismetTextLibrary_TextTrimPreceding, "TextTrimPreceding" }, // 2228780058
				{ &Z_Construct_UFunction_UKismetTextLibrary_TextTrimPrecedingAndTrailing, "TextTrimPrecedingAndTrailing" }, // 2078838606
				{ &Z_Construct_UFunction_UKismetTextLibrary_TextTrimTrailing, "TextTrimTrailing" }, // 4143094286
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintThreadSafe", "" },
				{ "IncludePath", "Kismet/KismetTextLibrary.h" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UKismetTextLibrary>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UKismetTextLibrary::StaticClass,
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
	IMPLEMENT_CLASS(UKismetTextLibrary, 3845210090);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKismetTextLibrary(Z_Construct_UClass_UKismetTextLibrary, &UKismetTextLibrary::StaticClass, TEXT("/Script/Engine"), TEXT("UKismetTextLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKismetTextLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
