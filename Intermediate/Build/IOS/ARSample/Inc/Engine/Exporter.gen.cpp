// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Exporters/Exporter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExporter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UExporter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UExporter();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	void UExporter::StaticRegisterNativesUExporter()
	{
	}
	UClass* Z_Construct_UClass_UExporter_NoRegister()
	{
		return UExporter::StaticClass();
	}
	UClass* Z_Construct_UClass_UExporter()
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
				{ "IncludePath", "Exporters/Exporter.h" },
				{ "ModuleRelativePath", "Classes/Exporters/Exporter.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForceFileOperations_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Exporters/Exporter.h" },
				{ "ToolTip", "If true, this will force the exporter code to create a file-based Ar (this can keep large output files from taking too much memory)" },
			};
#endif
			auto NewProp_bForceFileOperations_SetBit = [](void* Obj){ ((UExporter*)Obj)->bForceFileOperations = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceFileOperations = { UE4CodeGen_Private::EPropertyClass::Bool, "bForceFileOperations", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UExporter), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bForceFileOperations_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bForceFileOperations_MetaData, ARRAY_COUNT(NewProp_bForceFileOperations_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSelectedOnly_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Exporters/Exporter.h" },
				{ "ToolTip", "If true, this will export only the selected objects" },
			};
#endif
			auto NewProp_bSelectedOnly_SetBit = [](void* Obj){ ((UExporter*)Obj)->bSelectedOnly = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSelectedOnly = { UE4CodeGen_Private::EPropertyClass::Bool, "bSelectedOnly", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UExporter), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSelectedOnly_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSelectedOnly_MetaData, ARRAY_COUNT(NewProp_bSelectedOnly_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bText_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Exporters/Exporter.h" },
				{ "ToolTip", "If true, this will export the data as text" },
			};
#endif
			auto NewProp_bText_SetBit = [](void* Obj){ ((UExporter*)Obj)->bText = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bText = { UE4CodeGen_Private::EPropertyClass::Bool, "bText", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UExporter), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bText_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bText_MetaData, ARRAY_COUNT(NewProp_bText_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextIndent_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Exporters/Exporter.h" },
				{ "ToolTip", "Current indentation of spaces of the exported text" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_TextIndent = { UE4CodeGen_Private::EPropertyClass::Int, "TextIndent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UExporter, TextIndent), METADATA_PARAMS(NewProp_TextIndent_MetaData, ARRAY_COUNT(NewProp_TextIndent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreferredFormatIndex_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Exporters/Exporter.h" },
				{ "ToolTip", "Index into FormatExtension/FormatDescription of the preferred export format." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_PreferredFormatIndex = { UE4CodeGen_Private::EPropertyClass::Int, "PreferredFormatIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UExporter, PreferredFormatIndex), METADATA_PARAMS(NewProp_PreferredFormatIndex_MetaData, ARRAY_COUNT(NewProp_PreferredFormatIndex_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FormatDescription_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Exporters/Exporter.h" },
				{ "ToolTip", "Descriptiong of the export format" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FormatDescription = { UE4CodeGen_Private::EPropertyClass::Array, "FormatDescription", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UExporter, FormatDescription), METADATA_PARAMS(NewProp_FormatDescription_MetaData, ARRAY_COUNT(NewProp_FormatDescription_MetaData)) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_FormatDescription_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "FormatDescription", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FormatExtension_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Exporters/Exporter.h" },
				{ "ToolTip", "File extension to use for this exporter" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FormatExtension = { UE4CodeGen_Private::EPropertyClass::Array, "FormatExtension", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UExporter, FormatExtension), METADATA_PARAMS(NewProp_FormatExtension_MetaData, ARRAY_COUNT(NewProp_FormatExtension_MetaData)) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_FormatExtension_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "FormatExtension", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExportRootScope_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Exporters/Exporter.h" },
				{ "ToolTip", "The root scope of objects to be exported, only used if PPF_ExportsNotFullyQualfied is set\nObjects being exported that are contained within ExportRootScope will use just their name instead of a full path" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExportRootScope = { UE4CodeGen_Private::EPropertyClass::Object, "ExportRootScope", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, STRUCT_OFFSET(UExporter, ExportRootScope), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(NewProp_ExportRootScope_MetaData, ARRAY_COUNT(NewProp_ExportRootScope_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SupportedClass_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Exporters/Exporter.h" },
				{ "ToolTip", "Supported class of this exporter" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_SupportedClass = { UE4CodeGen_Private::EPropertyClass::Class, "SupportedClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000000, 1, nullptr, STRUCT_OFFSET(UExporter, SupportedClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_SupportedClass_MetaData, ARRAY_COUNT(NewProp_SupportedClass_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bForceFileOperations,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSelectedOnly,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bText,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TextIndent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PreferredFormatIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FormatDescription,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FormatDescription_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FormatExtension,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FormatExtension_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ExportRootScope,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SupportedClass,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UExporter>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UExporter::StaticClass,
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
	IMPLEMENT_CLASS(UExporter, 51380675);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UExporter(Z_Construct_UClass_UExporter, &UExporter::StaticClass, TEXT("/Script/Engine"), TEXT("UExporter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UExporter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
