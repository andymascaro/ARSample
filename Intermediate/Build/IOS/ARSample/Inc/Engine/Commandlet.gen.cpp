// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Commandlets/Commandlet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommandlet() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCommandlet_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UCommandlet::StaticRegisterNativesUCommandlet()
	{
	}
	UClass* Z_Construct_UClass_UCommandlet_NoRegister()
	{
		return UCommandlet::StaticClass();
	}
	UClass* Z_Construct_UClass_UCommandlet()
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
				{ "IncludePath", "Commandlets/Commandlet.h" },
				{ "ModuleRelativePath", "Classes/Commandlets/Commandlet.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowErrorCount_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Commandlets/Commandlet.h" },
				{ "ToolTip", "Whether to show standard error and warning count on exit" },
			};
#endif
			auto NewProp_ShowErrorCount_SetBit = [](void* Obj){ ((UCommandlet*)Obj)->ShowErrorCount = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShowErrorCount = { UE4CodeGen_Private::EPropertyClass::Bool, "ShowErrorCount", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UCommandlet), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ShowErrorCount_SetBit)>::SetBit, METADATA_PARAMS(NewProp_ShowErrorCount_MetaData, ARRAY_COUNT(NewProp_ShowErrorCount_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LogToConsole_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Commandlets/Commandlet.h" },
				{ "ToolTip", "Whether to redirect standard log to the console" },
			};
#endif
			auto NewProp_LogToConsole_SetBit = [](void* Obj){ ((UCommandlet*)Obj)->LogToConsole = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_LogToConsole = { UE4CodeGen_Private::EPropertyClass::Bool, "LogToConsole", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UCommandlet), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_LogToConsole_SetBit)>::SetBit, METADATA_PARAMS(NewProp_LogToConsole_MetaData, ARRAY_COUNT(NewProp_LogToConsole_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsEditor_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Commandlets/Commandlet.h" },
			};
#endif
			auto NewProp_IsEditor_SetBit = [](void* Obj){ ((UCommandlet*)Obj)->IsEditor = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsEditor = { UE4CodeGen_Private::EPropertyClass::Bool, "IsEditor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UCommandlet), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_IsEditor_SetBit)>::SetBit, METADATA_PARAMS(NewProp_IsEditor_MetaData, ARRAY_COUNT(NewProp_IsEditor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsClient_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Commandlets/Commandlet.h" },
			};
#endif
			auto NewProp_IsClient_SetBit = [](void* Obj){ ((UCommandlet*)Obj)->IsClient = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsClient = { UE4CodeGen_Private::EPropertyClass::Bool, "IsClient", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UCommandlet), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_IsClient_SetBit)>::SetBit, METADATA_PARAMS(NewProp_IsClient_MetaData, ARRAY_COUNT(NewProp_IsClient_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsServer_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Commandlets/Commandlet.h" },
				{ "ToolTip", "Whether to load objects required in server, client, and editor context.  If IsEditor is set to false, then a\nUGameEngine (or whatever the value of /Script/Engine.Engine.GameEngine is) will be created for the commandlet instead\nof a UEditorEngine (or /Script/Engine.Engine.EditorEngine), unless the commandlet overrides the CreateCustomEngine method." },
			};
#endif
			auto NewProp_IsServer_SetBit = [](void* Obj){ ((UCommandlet*)Obj)->IsServer = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsServer = { UE4CodeGen_Private::EPropertyClass::Bool, "IsServer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UCommandlet), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_IsServer_SetBit)>::SetBit, METADATA_PARAMS(NewProp_IsServer_MetaData, ARRAY_COUNT(NewProp_IsServer_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HelpParamDescriptions_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Commandlets/Commandlet.h" },
				{ "ToolTip", "The description of the parameter" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HelpParamDescriptions = { UE4CodeGen_Private::EPropertyClass::Array, "HelpParamDescriptions", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UCommandlet, HelpParamDescriptions), METADATA_PARAMS(NewProp_HelpParamDescriptions_MetaData, ARRAY_COUNT(NewProp_HelpParamDescriptions_MetaData)) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_HelpParamDescriptions_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "HelpParamDescriptions", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HelpParamNames_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Commandlets/Commandlet.h" },
				{ "ToolTip", "The name of the parameter the commandlet takes" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HelpParamNames = { UE4CodeGen_Private::EPropertyClass::Array, "HelpParamNames", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UCommandlet, HelpParamNames), METADATA_PARAMS(NewProp_HelpParamNames_MetaData, ARRAY_COUNT(NewProp_HelpParamNames_MetaData)) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_HelpParamNames_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "HelpParamNames", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HelpWebLink_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Commandlets/Commandlet.h" },
				{ "ToolTip", "Hyperlink for more info" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_HelpWebLink = { UE4CodeGen_Private::EPropertyClass::Str, "HelpWebLink", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UCommandlet, HelpWebLink), METADATA_PARAMS(NewProp_HelpWebLink_MetaData, ARRAY_COUNT(NewProp_HelpWebLink_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HelpUsage_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Commandlets/Commandlet.h" },
				{ "ToolTip", "Usage template to show for \"ucc help\"" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_HelpUsage = { UE4CodeGen_Private::EPropertyClass::Str, "HelpUsage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UCommandlet, HelpUsage), METADATA_PARAMS(NewProp_HelpUsage_MetaData, ARRAY_COUNT(NewProp_HelpUsage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HelpDescription_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Commandlets/Commandlet.h" },
				{ "ToolTip", "Description of the commandlet's purpose" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_HelpDescription = { UE4CodeGen_Private::EPropertyClass::Str, "HelpDescription", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UCommandlet, HelpDescription), METADATA_PARAMS(NewProp_HelpDescription_MetaData, ARRAY_COUNT(NewProp_HelpDescription_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ShowErrorCount,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LogToConsole,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IsEditor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IsClient,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IsServer,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HelpParamDescriptions,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HelpParamDescriptions_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HelpParamNames,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HelpParamNames_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HelpWebLink,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HelpUsage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HelpDescription,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UCommandlet>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UCommandlet::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00080089u,
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
	IMPLEMENT_CLASS(UCommandlet, 4069713660);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCommandlet(Z_Construct_UClass_UCommandlet, &UCommandlet::StaticClass, TEXT("/Script/Engine"), TEXT("UCommandlet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommandlet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
