// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Sound/DialogueVoice.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueVoice() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDialogueVoice_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDialogueVoice();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EGrammaticalNumber();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EGrammaticalGender();
// End Cross Module References
	void UDialogueVoice::StaticRegisterNativesUDialogueVoice()
	{
	}
	UClass* Z_Construct_UClass_UDialogueVoice_NoRegister()
	{
		return UDialogueVoice::StaticClass();
	}
	UClass* Z_Construct_UClass_UDialogueVoice()
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
				{ "HideCategories", "Object" },
				{ "IncludePath", "Sound/DialogueVoice.h" },
				{ "ModuleRelativePath", "Classes/Sound/DialogueVoice.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalizationGUID_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Sound/DialogueVoice.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalizationGUID = { UE4CodeGen_Private::EPropertyClass::Struct, "LocalizationGUID", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UDialogueVoice, LocalizationGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_LocalizationGUID_MetaData, ARRAY_COUNT(NewProp_LocalizationGUID_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Plurality_MetaData[] = {
				{ "Category", "DialogueVoice" },
				{ "ModuleRelativePath", "Classes/Sound/DialogueVoice.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Plurality = { UE4CodeGen_Private::EPropertyClass::Byte, "Plurality", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010010000000001, 1, nullptr, STRUCT_OFFSET(UDialogueVoice, Plurality), Z_Construct_UEnum_Engine_EGrammaticalNumber, METADATA_PARAMS(NewProp_Plurality_MetaData, ARRAY_COUNT(NewProp_Plurality_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Gender_MetaData[] = {
				{ "Category", "DialogueVoice" },
				{ "ModuleRelativePath", "Classes/Sound/DialogueVoice.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Gender = { UE4CodeGen_Private::EPropertyClass::Byte, "Gender", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010010000000001, 1, nullptr, STRUCT_OFFSET(UDialogueVoice, Gender), Z_Construct_UEnum_Engine_EGrammaticalGender, METADATA_PARAMS(NewProp_Gender_MetaData, ARRAY_COUNT(NewProp_Gender_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LocalizationGUID,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Plurality,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Gender,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UDialogueVoice>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UDialogueVoice::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00081080u,
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
	IMPLEMENT_CLASS(UDialogueVoice, 359885015);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDialogueVoice(Z_Construct_UClass_UDialogueVoice, &UDialogueVoice::StaticClass, TEXT("/Script/Engine"), TEXT("UDialogueVoice"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueVoice);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
