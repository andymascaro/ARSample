// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/LevelSequenceBurnIn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelSequenceBurnIn() {}
// Cross Module References
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequenceBurnIn_NoRegister();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequenceBurnIn();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_LevelSequence();
	LEVELSEQUENCE_API UFunction* Z_Construct_UFunction_ULevelSequenceBurnIn_GetSettingsClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequenceBurnInInitSettings_NoRegister();
	LEVELSEQUENCE_API UFunction* Z_Construct_UFunction_ULevelSequenceBurnIn_SetSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ALevelSequenceActor_NoRegister();
	LEVELSEQUENCE_API UScriptStruct* Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot();
// End Cross Module References
	static FName NAME_ULevelSequenceBurnIn_GetSettingsClass = FName(TEXT("GetSettingsClass"));
	TSubclassOf<ULevelSequenceBurnInInitSettings>  ULevelSequenceBurnIn::GetSettingsClass() const
	{
		LevelSequenceBurnIn_eventGetSettingsClass_Parms Parms;
		const_cast<ULevelSequenceBurnIn*>(this)->ProcessEvent(FindFunctionChecked(NAME_ULevelSequenceBurnIn_GetSettingsClass),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_ULevelSequenceBurnIn_SetSettings = FName(TEXT("SetSettings"));
	void ULevelSequenceBurnIn::SetSettings(UObject* InSettings)
	{
		LevelSequenceBurnIn_eventSetSettings_Parms Parms;
		Parms.InSettings=InSettings;
		ProcessEvent(FindFunctionChecked(NAME_ULevelSequenceBurnIn_SetSettings),&Parms);
	}
	void ULevelSequenceBurnIn::StaticRegisterNativesULevelSequenceBurnIn()
	{
		UClass* Class = ULevelSequenceBurnIn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSettingsClass", (Native)&ULevelSequenceBurnIn::execGetSettingsClass },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ULevelSequenceBurnIn_GetSettingsClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Class, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000580, 1, nullptr, STRUCT_OFFSET(LevelSequenceBurnIn_eventGetSettingsClass_Parms, ReturnValue), Z_Construct_UClass_ULevelSequenceBurnInInitSettings_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Burn In" },
				{ "ModuleRelativePath", "Public/LevelSequenceBurnIn.h" },
				{ "ToolTip", "Get the settings class to use for this burn in" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceBurnIn, "GetSettingsClass", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x48020C00, sizeof(LevelSequenceBurnIn_eventGetSettingsClass_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ULevelSequenceBurnIn_SetSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InSettings = { UE4CodeGen_Private::EPropertyClass::Object, "InSettings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LevelSequenceBurnIn_eventSetSettings_Parms, InSettings), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InSettings,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Burn In" },
				{ "ModuleRelativePath", "Public/LevelSequenceBurnIn.h" },
				{ "ToolTip", "Called when this burn in is receiving its settings" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceBurnIn, "SetSettings", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, sizeof(LevelSequenceBurnIn_eventSetSettings_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULevelSequenceBurnIn_NoRegister()
	{
		return ULevelSequenceBurnIn::StaticClass();
	}
	UClass* Z_Construct_UClass_ULevelSequenceBurnIn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UUserWidget,
				(UObject* (*)())Z_Construct_UPackage__Script_LevelSequence,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ULevelSequenceBurnIn_GetSettingsClass, "GetSettingsClass" }, // 1852604209
				{ &Z_Construct_UFunction_ULevelSequenceBurnIn_SetSettings, "SetSettings" }, // 509655455
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "LevelSequenceBurnIn.h" },
				{ "ModuleRelativePath", "Public/LevelSequenceBurnIn.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
				{ "ToolTip", "Base class for level sequence burn ins" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelSequenceActor_MetaData[] = {
				{ "Category", "Burn In" },
				{ "ModuleRelativePath", "Public/LevelSequenceBurnIn.h" },
				{ "ToolTip", "The actor to get our burn in frames from" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LevelSequenceActor = { UE4CodeGen_Private::EPropertyClass::Object, "LevelSequenceActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000014, 1, nullptr, STRUCT_OFFSET(ULevelSequenceBurnIn, LevelSequenceActor), Z_Construct_UClass_ALevelSequenceActor_NoRegister, METADATA_PARAMS(NewProp_LevelSequenceActor_MetaData, ARRAY_COUNT(NewProp_LevelSequenceActor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameInformation_MetaData[] = {
				{ "Category", "Burn In" },
				{ "ModuleRelativePath", "Public/LevelSequenceBurnIn.h" },
				{ "ToolTip", "Snapshot of frame information." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_FrameInformation = { UE4CodeGen_Private::EPropertyClass::Struct, "FrameInformation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020088000000014, 1, nullptr, STRUCT_OFFSET(ULevelSequenceBurnIn, FrameInformation), Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot, METADATA_PARAMS(NewProp_FrameInformation_MetaData, ARRAY_COUNT(NewProp_FrameInformation_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LevelSequenceActor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FrameInformation,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ULevelSequenceBurnIn>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ULevelSequenceBurnIn::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B01080u,
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
	IMPLEMENT_CLASS(ULevelSequenceBurnIn, 3024936886);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULevelSequenceBurnIn(Z_Construct_UClass_ULevelSequenceBurnIn, &ULevelSequenceBurnIn::StaticClass, TEXT("/Script/LevelSequence"), TEXT("ULevelSequenceBurnIn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelSequenceBurnIn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
