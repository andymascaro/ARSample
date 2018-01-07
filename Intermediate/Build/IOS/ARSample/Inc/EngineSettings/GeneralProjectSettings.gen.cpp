// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/GeneralProjectSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeneralProjectSettings() {}
// Cross Module References
	ENGINESETTINGS_API UClass* Z_Construct_UClass_UGeneralProjectSettings_NoRegister();
	ENGINESETTINGS_API UClass* Z_Construct_UClass_UGeneralProjectSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_EngineSettings();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
	void UGeneralProjectSettings::StaticRegisterNativesUGeneralProjectSettings()
	{
	}
	UClass* Z_Construct_UClass_UGeneralProjectSettings_NoRegister()
	{
		return UGeneralProjectSettings::StaticClass();
	}
	UClass* Z_Construct_UClass_UGeneralProjectSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_EngineSettings,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "GeneralProjectSettings.h" },
				{ "ModuleRelativePath", "Classes/GeneralProjectSettings.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowMinimize_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Classes/GeneralProjectSettings.h" },
			};
#endif
			auto NewProp_bAllowMinimize_SetBit = [](void* Obj){ ((UGeneralProjectSettings*)Obj)->bAllowMinimize = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowMinimize = { UE4CodeGen_Private::EPropertyClass::Bool, "bAllowMinimize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UGeneralProjectSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAllowMinimize_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAllowMinimize_MetaData, ARRAY_COUNT(NewProp_bAllowMinimize_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowMaximize_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Classes/GeneralProjectSettings.h" },
			};
#endif
			auto NewProp_bAllowMaximize_SetBit = [](void* Obj){ ((UGeneralProjectSettings*)Obj)->bAllowMaximize = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowMaximize = { UE4CodeGen_Private::EPropertyClass::Bool, "bAllowMaximize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UGeneralProjectSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAllowMaximize_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAllowMaximize_MetaData, ARRAY_COUNT(NewProp_bAllowMaximize_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowClose_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Classes/GeneralProjectSettings.h" },
			};
#endif
			auto NewProp_bAllowClose_SetBit = [](void* Obj){ ((UGeneralProjectSettings*)Obj)->bAllowClose = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowClose = { UE4CodeGen_Private::EPropertyClass::Bool, "bAllowClose", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UGeneralProjectSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAllowClose_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAllowClose_MetaData, ARRAY_COUNT(NewProp_bAllowClose_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowWindowResize_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Classes/GeneralProjectSettings.h" },
			};
#endif
			auto NewProp_bAllowWindowResize_SetBit = [](void* Obj){ ((UGeneralProjectSettings*)Obj)->bAllowWindowResize = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowWindowResize = { UE4CodeGen_Private::EPropertyClass::Bool, "bAllowWindowResize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UGeneralProjectSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAllowWindowResize_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAllowWindowResize_MetaData, ARRAY_COUNT(NewProp_bAllowWindowResize_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStartInAR_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Classes/GeneralProjectSettings.h" },
				{ "ToolTip", "Should the game start in AR" },
			};
#endif
			auto NewProp_bStartInAR_SetBit = [](void* Obj){ ((UGeneralProjectSettings*)Obj)->bStartInAR = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStartInAR = { UE4CodeGen_Private::EPropertyClass::Bool, "bStartInAR", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UGeneralProjectSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bStartInAR_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bStartInAR_MetaData, ARRAY_COUNT(NewProp_bStartInAR_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStartInVR_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Classes/GeneralProjectSettings.h" },
				{ "ToolTip", "Should the game attempt to start in VR, regardless of whether -vr was set on the commandline" },
			};
#endif
			auto NewProp_bStartInVR_SetBit = [](void* Obj){ ((UGeneralProjectSettings*)Obj)->bStartInVR = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStartInVR = { UE4CodeGen_Private::EPropertyClass::Bool, "bStartInVR", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UGeneralProjectSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bStartInVR_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bStartInVR_MetaData, ARRAY_COUNT(NewProp_bStartInVR_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseBorderlessWindow_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Classes/GeneralProjectSettings.h" },
				{ "ToolTip", "Should the game use a borderless Slate window instead of a window with system title bar and border" },
			};
#endif
			auto NewProp_bUseBorderlessWindow_SetBit = [](void* Obj){ ((UGeneralProjectSettings*)Obj)->bUseBorderlessWindow = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseBorderlessWindow = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseBorderlessWindow", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UGeneralProjectSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseBorderlessWindow_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseBorderlessWindow_MetaData, ARRAY_COUNT(NewProp_bUseBorderlessWindow_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldWindowPreserveAspectRatio_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Classes/GeneralProjectSettings.h" },
				{ "ToolTip", "Should the game's window preserve its aspect ratio when resized by user." },
			};
#endif
			auto NewProp_bShouldWindowPreserveAspectRatio_SetBit = [](void* Obj){ ((UGeneralProjectSettings*)Obj)->bShouldWindowPreserveAspectRatio = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldWindowPreserveAspectRatio = { UE4CodeGen_Private::EPropertyClass::Bool, "bShouldWindowPreserveAspectRatio", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UGeneralProjectSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bShouldWindowPreserveAspectRatio_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bShouldWindowPreserveAspectRatio_MetaData, ARRAY_COUNT(NewProp_bShouldWindowPreserveAspectRatio_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectDebugTitleInfo_MetaData[] = {
				{ "Category", "Displayed" },
				{ "ModuleRelativePath", "Classes/GeneralProjectSettings.h" },
				{ "ToolTip", "Additional data to be displayed on the window title bar in non-shipping configurations (can include the tokens {GameName}, {PlatformArchitecture}, or {RHIName}, which will be replaced with the specified text)" },
			};
#endif
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_ProjectDebugTitleInfo = { UE4CodeGen_Private::EPropertyClass::Text, "ProjectDebugTitleInfo", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UGeneralProjectSettings, ProjectDebugTitleInfo), METADATA_PARAMS(NewProp_ProjectDebugTitleInfo_MetaData, ARRAY_COUNT(NewProp_ProjectDebugTitleInfo_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectDisplayedTitle_MetaData[] = {
				{ "Category", "Displayed" },
				{ "ModuleRelativePath", "Classes/GeneralProjectSettings.h" },
				{ "ToolTip", "The project's title as displayed on the window title bar (can include the tokens {GameName}, {PlatformArchitecture}, or {RHIName}, which will be replaced with the specified text)" },
			};
#endif
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_ProjectDisplayedTitle = { UE4CodeGen_Private::EPropertyClass::Text, "ProjectDisplayedTitle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UGeneralProjectSettings, ProjectDisplayedTitle), METADATA_PARAMS(NewProp_ProjectDisplayedTitle_MetaData, ARRAY_COUNT(NewProp_ProjectDisplayedTitle_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SupportContact_MetaData[] = {
				{ "Category", "Publisher" },
				{ "ModuleRelativePath", "Classes/GeneralProjectSettings.h" },
				{ "ToolTip", "The project's support contact information." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_SupportContact = { UE4CodeGen_Private::EPropertyClass::Str, "SupportContact", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UGeneralProjectSettings, SupportContact), METADATA_PARAMS(NewProp_SupportContact_MetaData, ARRAY_COUNT(NewProp_SupportContact_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectVersion_MetaData[] = {
				{ "Category", "About" },
				{ "ModuleRelativePath", "Classes/GeneralProjectSettings.h" },
				{ "ToolTip", "The project's version number." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProjectVersion = { UE4CodeGen_Private::EPropertyClass::Str, "ProjectVersion", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UGeneralProjectSettings, ProjectVersion), METADATA_PARAMS(NewProp_ProjectVersion_MetaData, ARRAY_COUNT(NewProp_ProjectVersion_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectName_MetaData[] = {
				{ "Category", "About" },
				{ "ModuleRelativePath", "Classes/GeneralProjectSettings.h" },
				{ "ToolTip", "The project's name." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProjectName = { UE4CodeGen_Private::EPropertyClass::Str, "ProjectName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UGeneralProjectSettings, ProjectName), METADATA_PARAMS(NewProp_ProjectName_MetaData, ARRAY_COUNT(NewProp_ProjectName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectID_MetaData[] = {
				{ "Category", "About" },
				{ "ModuleRelativePath", "Classes/GeneralProjectSettings.h" },
				{ "ToolTip", "The project's unique identifier." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProjectID = { UE4CodeGen_Private::EPropertyClass::Struct, "ProjectID", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UGeneralProjectSettings, ProjectID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_ProjectID_MetaData, ARRAY_COUNT(NewProp_ProjectID_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrivacyPolicy_MetaData[] = {
				{ "Category", "Legal" },
				{ "ModuleRelativePath", "Classes/GeneralProjectSettings.h" },
				{ "ToolTip", "The project's privacy policy." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_PrivacyPolicy = { UE4CodeGen_Private::EPropertyClass::Str, "PrivacyPolicy", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UGeneralProjectSettings, PrivacyPolicy), METADATA_PARAMS(NewProp_PrivacyPolicy_MetaData, ARRAY_COUNT(NewProp_PrivacyPolicy_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LicensingTerms_MetaData[] = {
				{ "Category", "Legal" },
				{ "ModuleRelativePath", "Classes/GeneralProjectSettings.h" },
				{ "ToolTip", "The project's licensing terms." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_LicensingTerms = { UE4CodeGen_Private::EPropertyClass::Str, "LicensingTerms", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UGeneralProjectSettings, LicensingTerms), METADATA_PARAMS(NewProp_LicensingTerms_MetaData, ARRAY_COUNT(NewProp_LicensingTerms_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Homepage_MetaData[] = {
				{ "Category", "Publisher" },
				{ "ModuleRelativePath", "Classes/GeneralProjectSettings.h" },
				{ "ToolTip", "The project's homepage URL." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Homepage = { UE4CodeGen_Private::EPropertyClass::Str, "Homepage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UGeneralProjectSettings, Homepage), METADATA_PARAMS(NewProp_Homepage_MetaData, ARRAY_COUNT(NewProp_Homepage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
				{ "Category", "About" },
				{ "ModuleRelativePath", "Classes/GeneralProjectSettings.h" },
				{ "ToolTip", "The project's description text." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Description = { UE4CodeGen_Private::EPropertyClass::Str, "Description", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UGeneralProjectSettings, Description), METADATA_PARAMS(NewProp_Description_MetaData, ARRAY_COUNT(NewProp_Description_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CopyrightNotice_MetaData[] = {
				{ "Category", "Legal" },
				{ "ModuleRelativePath", "Classes/GeneralProjectSettings.h" },
				{ "ToolTip", "The project's copyright and/or trademark notices." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_CopyrightNotice = { UE4CodeGen_Private::EPropertyClass::Str, "CopyrightNotice", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UGeneralProjectSettings, CopyrightNotice), METADATA_PARAMS(NewProp_CopyrightNotice_MetaData, ARRAY_COUNT(NewProp_CopyrightNotice_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompanyDistinguishedName_MetaData[] = {
				{ "Category", "Publisher" },
				{ "ModuleRelativePath", "Classes/GeneralProjectSettings.h" },
				{ "ToolTip", "The distinguished name of the company (author, provider) that created the project." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_CompanyDistinguishedName = { UE4CodeGen_Private::EPropertyClass::Str, "CompanyDistinguishedName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UGeneralProjectSettings, CompanyDistinguishedName), METADATA_PARAMS(NewProp_CompanyDistinguishedName_MetaData, ARRAY_COUNT(NewProp_CompanyDistinguishedName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompanyName_MetaData[] = {
				{ "Category", "Publisher" },
				{ "ModuleRelativePath", "Classes/GeneralProjectSettings.h" },
				{ "ToolTip", "The name of the company (author, provider) that created the project." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_CompanyName = { UE4CodeGen_Private::EPropertyClass::Str, "CompanyName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UGeneralProjectSettings, CompanyName), METADATA_PARAMS(NewProp_CompanyName_MetaData, ARRAY_COUNT(NewProp_CompanyName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAllowMinimize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAllowMaximize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAllowClose,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAllowWindowResize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bStartInAR,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bStartInVR,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseBorderlessWindow,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bShouldWindowPreserveAspectRatio,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ProjectDebugTitleInfo,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ProjectDisplayedTitle,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SupportContact,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ProjectVersion,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ProjectName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ProjectID,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PrivacyPolicy,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LicensingTerms,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Homepage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Description,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CopyrightNotice,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CompanyDistinguishedName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CompanyName,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UGeneralProjectSettings>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UGeneralProjectSettings::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100086u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGeneralProjectSettings, 96442606);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGeneralProjectSettings(Z_Construct_UClass_UGeneralProjectSettings, &UGeneralProjectSettings::StaticClass, TEXT("/Script/EngineSettings"), TEXT("UGeneralProjectSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeneralProjectSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
