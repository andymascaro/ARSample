// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/EndUserSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEndUserSettings() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UEndUserSettings_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEndUserSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UImportantToggleSettingInterface_NoRegister();
// End Cross Module References
	void UEndUserSettings::StaticRegisterNativesUEndUserSettings()
	{
	}
	UClass* Z_Construct_UClass_UEndUserSettings_NoRegister()
	{
		return UEndUserSettings::StaticClass();
	}
	UClass* Z_Construct_UClass_UEndUserSettings()
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
				{ "HideCategories", "Object" },
				{ "IncludePath", "Engine/EndUserSettings.h" },
				{ "ModuleRelativePath", "Classes/Engine/EndUserSettings.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowUserIdInUsageData_MetaData[] = {
				{ "Category", "PrivacyDetails" },
				{ "ModuleRelativePath", "Classes/Engine/EndUserSettings.h" },
				{ "ToolTip", "If enabled, adds user identifying data to the otherwise anonymous reports sent to Epic Games." },
			};
#endif
			auto NewProp_bAllowUserIdInUsageData_SetBit = [](void* Obj){ ((UEndUserSettings*)Obj)->bAllowUserIdInUsageData = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowUserIdInUsageData = { UE4CodeGen_Private::EPropertyClass::Bool, "bAllowUserIdInUsageData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UEndUserSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAllowUserIdInUsageData_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAllowUserIdInUsageData_MetaData, ARRAY_COUNT(NewProp_bAllowUserIdInUsageData_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSendMeanTimeBetweenFailureDataToEpic_MetaData[] = {
				{ "Category", "PrivacyDetails" },
				{ "ModuleRelativePath", "Classes/Engine/EndUserSettings.h" },
				{ "ToolTip", "Determines whether the engine sends anonymous crash/abnormal-shutdown data about game sessions to Epic Games in order to improve Unreal Engine. Information will never be shared with 3rd parties." },
			};
#endif
			auto NewProp_bSendMeanTimeBetweenFailureDataToEpic_SetBit = [](void* Obj){ ((UEndUserSettings*)Obj)->bSendMeanTimeBetweenFailureDataToEpic = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSendMeanTimeBetweenFailureDataToEpic = { UE4CodeGen_Private::EPropertyClass::Bool, "bSendMeanTimeBetweenFailureDataToEpic", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UEndUserSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSendMeanTimeBetweenFailureDataToEpic_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSendMeanTimeBetweenFailureDataToEpic_MetaData, ARRAY_COUNT(NewProp_bSendMeanTimeBetweenFailureDataToEpic_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSendAnonymousUsageDataToEpic_MetaData[] = {
				{ "Category", "Privacy" },
				{ "ModuleRelativePath", "Classes/Engine/EndUserSettings.h" },
				{ "ToolTip", "Determines whether the engine sends anonymous usage information about game sessions to Epic Games in order to improve Unreal Engine. Information will never be shared with 3rd parties." },
			};
#endif
			auto NewProp_bSendAnonymousUsageDataToEpic_SetBit = [](void* Obj){ ((UEndUserSettings*)Obj)->bSendAnonymousUsageDataToEpic = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSendAnonymousUsageDataToEpic = { UE4CodeGen_Private::EPropertyClass::Bool, "bSendAnonymousUsageDataToEpic", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UEndUserSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSendAnonymousUsageDataToEpic_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSendAnonymousUsageDataToEpic_MetaData, ARRAY_COUNT(NewProp_bSendAnonymousUsageDataToEpic_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAllowUserIdInUsageData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSendMeanTimeBetweenFailureDataToEpic,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSendAnonymousUsageDataToEpic,
			};
			static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[] = {
				{ Z_Construct_UClass_UImportantToggleSettingInterface_NoRegister, (int32)VTABLE_OFFSET(UEndUserSettings, IImportantToggleSettingInterface), false },
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UEndUserSettings>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UEndUserSettings::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00080086u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				"Engine",
				&StaticCppClassTypeInfo,
				InterfaceParams, ARRAY_COUNT(InterfaceParams),
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEndUserSettings, 2251051921);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEndUserSettings(Z_Construct_UClass_UEndUserSettings, &UEndUserSettings::StaticClass, TEXT("/Script/Engine"), TEXT("UEndUserSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEndUserSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
