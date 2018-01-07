// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/VisualLogger/VisualLoggerKismetLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVisualLoggerKismetLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UVisualLoggerKismetLibrary_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UVisualLoggerKismetLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UFunction* Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogText();
// End Cross Module References
	void UVisualLoggerKismetLibrary::StaticRegisterNativesUVisualLoggerKismetLibrary()
	{
		UClass* Class = UVisualLoggerKismetLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LogBox", (Native)&UVisualLoggerKismetLibrary::execLogBox },
			{ "LogLocation", (Native)&UVisualLoggerKismetLibrary::execLogLocation },
			{ "LogText", (Native)&UVisualLoggerKismetLibrary::execLogText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox()
	{
		struct VisualLoggerKismetLibrary_eventLogBox_Parms
		{
			UObject* WorldContextObject;
			FBox BoxShape;
			FString Text;
			FLinearColor ObjectColor;
			FName LogCategory;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_LogCategory = { UE4CodeGen_Private::EPropertyClass::Name, "LogCategory", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogBox_Parms, LogCategory), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObjectColor = { UE4CodeGen_Private::EPropertyClass::Struct, "ObjectColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogBox_Parms, ObjectColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Text = { UE4CodeGen_Private::EPropertyClass::Str, "Text", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogBox_Parms, Text), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoxShape = { UE4CodeGen_Private::EPropertyClass::Struct, "BoxShape", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogBox_Parms, BoxShape), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogBox_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LogCategory,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ObjectColor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Text,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoxShape,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Debug|VisualLogger" },
				{ "CPP_Default_LogCategory", "Blueprint Log" },
				{ "CPP_Default_ObjectColor", "(R=1.000000,G=1.000000,B=1.000000,A=1.000000)" },
				{ "DefaultToSelf", "WorldContextObject" },
				{ "DisplayName", "Log Box Shape" },
				{ "HidePin", "WorldContextObject" },
				{ "ModuleRelativePath", "Classes/VisualLogger/VisualLoggerKismetLibrary.h" },
				{ "ToolTip", "Logs box shape - recording for Visual Logs has to be enabled to record this data" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVisualLoggerKismetLibrary, "LogBox", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04822401, sizeof(VisualLoggerKismetLibrary_eventLogBox_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation()
	{
		struct VisualLoggerKismetLibrary_eventLogLocation_Parms
		{
			UObject* WorldContextObject;
			FVector Location;
			FString Text;
			FLinearColor ObjectColor;
			float Radius;
			FName LogCategory;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_LogCategory = { UE4CodeGen_Private::EPropertyClass::Name, "LogCategory", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogLocation_Parms, LogCategory), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius = { UE4CodeGen_Private::EPropertyClass::Float, "Radius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogLocation_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObjectColor = { UE4CodeGen_Private::EPropertyClass::Struct, "ObjectColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogLocation_Parms, ObjectColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Text = { UE4CodeGen_Private::EPropertyClass::Str, "Text", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogLocation_Parms, Text), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location = { UE4CodeGen_Private::EPropertyClass::Struct, "Location", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogLocation_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LogCategory,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Radius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ObjectColor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Text,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Location,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Debug|VisualLogger" },
				{ "CPP_Default_LogCategory", "Blueprint Log" },
				{ "CPP_Default_ObjectColor", "(R=1.000000,G=1.000000,B=1.000000,A=1.000000)" },
				{ "CPP_Default_Radius", "10.000000" },
				{ "DefaultToSelf", "WorldContextObject" },
				{ "DisplayName", "LogLocation" },
				{ "HidePin", "WorldContextObject" },
				{ "ModuleRelativePath", "Classes/VisualLogger/VisualLoggerKismetLibrary.h" },
				{ "ToolTip", "Logs location as sphere with given radius - recording for Visual Logs has to be enabled to record this data" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVisualLoggerKismetLibrary, "LogLocation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04822401, sizeof(VisualLoggerKismetLibrary_eventLogLocation_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogText()
	{
		struct VisualLoggerKismetLibrary_eventLogText_Parms
		{
			UObject* WorldContextObject;
			FString Text;
			FName LogCategory;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_LogCategory = { UE4CodeGen_Private::EPropertyClass::Name, "LogCategory", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogText_Parms, LogCategory), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Text = { UE4CodeGen_Private::EPropertyClass::Str, "Text", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogText_Parms, Text), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogText_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LogCategory,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Text,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Debug|VisualLogger" },
				{ "CPP_Default_LogCategory", "Blueprint Log" },
				{ "DefaultToSelf", "WorldContextObject" },
				{ "DisplayName", "LogText" },
				{ "HidePin", "WorldContextObject" },
				{ "ModuleRelativePath", "Classes/VisualLogger/VisualLoggerKismetLibrary.h" },
				{ "ToolTip", "Logs simple text string with Visual Logger - recording for Visual Logs has to be enabled to record this data" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVisualLoggerKismetLibrary, "LogText", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(VisualLoggerKismetLibrary_eventLogText_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVisualLoggerKismetLibrary_NoRegister()
	{
		return UVisualLoggerKismetLibrary::StaticClass();
	}
	UClass* Z_Construct_UClass_UVisualLoggerKismetLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox, "LogBox" }, // 451804323
				{ &Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation, "LogLocation" }, // 2478848063
				{ &Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogText, "LogText" }, // 1413198134
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "VisualLogger/VisualLoggerKismetLibrary.h" },
				{ "ModuleRelativePath", "Classes/VisualLogger/VisualLoggerKismetLibrary.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UVisualLoggerKismetLibrary>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UVisualLoggerKismetLibrary::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00080080u,
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
	IMPLEMENT_CLASS(UVisualLoggerKismetLibrary, 747451434);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVisualLoggerKismetLibrary(Z_Construct_UClass_UVisualLoggerKismetLibrary, &UVisualLoggerKismetLibrary::StaticClass, TEXT("/Script/Engine"), TEXT("UVisualLoggerKismetLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVisualLoggerKismetLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
