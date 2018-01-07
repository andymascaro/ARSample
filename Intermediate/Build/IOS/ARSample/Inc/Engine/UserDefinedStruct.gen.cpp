// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/UserDefinedStruct.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUserDefinedStruct() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EUserDefinedStructureStatus();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UUserDefinedStruct_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UUserDefinedStruct();
	COREUOBJECT_API UClass* Z_Construct_UClass_UScriptStruct();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	static UEnum* EUserDefinedStructureStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EUserDefinedStructureStatus, Z_Construct_UPackage__Script_Engine(), TEXT("EUserDefinedStructureStatus"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EUserDefinedStructureStatus(EUserDefinedStructureStatus_StaticEnum, TEXT("/Script/Engine"), TEXT("EUserDefinedStructureStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EUserDefinedStructureStatus_CRC() { return 1671363016U; }
	UEnum* Z_Construct_UEnum_Engine_EUserDefinedStructureStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EUserDefinedStructureStatus"), 0, Get_Z_Construct_UEnum_Engine_EUserDefinedStructureStatus_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "UDSS_UpToDate", (int64)UDSS_UpToDate },
				{ "UDSS_Dirty", (int64)UDSS_Dirty },
				{ "UDSS_Error", (int64)UDSS_Error },
				{ "UDSS_Duplicate", (int64)UDSS_Duplicate },
				{ "UDSS_MAX", (int64)UDSS_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/UserDefinedStruct.h" },
				{ "UDSS_Dirty.ToolTip", "Struct has been modified but not recompiled." },
				{ "UDSS_Duplicate.ToolTip", "Struct is a duplicate, the original one was changed." },
				{ "UDSS_Error.ToolTip", "Struct tried but failed to be compiled." },
				{ "UDSS_UpToDate.ToolTip", "Struct is in an unknown state." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EUserDefinedStructureStatus",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EUserDefinedStructureStatus",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UUserDefinedStruct::StaticRegisterNativesUUserDefinedStruct()
	{
	}
	UClass* Z_Construct_UClass_UUserDefinedStruct_NoRegister()
	{
		return UUserDefinedStruct::StaticClass();
	}
	UClass* Z_Construct_UClass_UUserDefinedStruct()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UScriptStruct,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Engine/UserDefinedStruct.h" },
				{ "ModuleRelativePath", "Classes/Engine/UserDefinedStruct.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/UserDefinedStruct.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Guid = { UE4CodeGen_Private::EPropertyClass::Struct, "Guid", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UUserDefinedStruct, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_Guid_MetaData, ARRAY_COUNT(NewProp_Guid_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditorData_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/UserDefinedStruct.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EditorData = { UE4CodeGen_Private::EPropertyClass::Object, "EditorData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(UUserDefinedStruct, EditorData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(NewProp_EditorData_MetaData, ARRAY_COUNT(NewProp_EditorData_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/UserDefinedStruct.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMessage = { UE4CodeGen_Private::EPropertyClass::Str, "ErrorMessage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(UUserDefinedStruct, ErrorMessage), METADATA_PARAMS(NewProp_ErrorMessage_MetaData, ARRAY_COUNT(NewProp_ErrorMessage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimaryStruct_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/UserDefinedStruct.h" },
				{ "ToolTip", "the original struct, when current struct isn't a temporary duplicate, the field should be null" },
			};
#endif
			static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_PrimaryStruct = { UE4CodeGen_Private::EPropertyClass::WeakObject, "PrimaryStruct", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000800002000, 1, nullptr, STRUCT_OFFSET(UUserDefinedStruct, PrimaryStruct), Z_Construct_UClass_UUserDefinedStruct_NoRegister, METADATA_PARAMS(NewProp_PrimaryStruct_MetaData, ARRAY_COUNT(NewProp_PrimaryStruct_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/UserDefinedStruct.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Status = { UE4CodeGen_Private::EPropertyClass::Byte, "Status", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(UUserDefinedStruct, Status), Z_Construct_UEnum_Engine_EUserDefinedStructureStatus, METADATA_PARAMS(NewProp_Status_MetaData, ARRAY_COUNT(NewProp_Status_MetaData)) };
#endif // WITH_EDITORONLY_DATA
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Guid,
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EditorData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ErrorMessage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PrimaryStruct,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Status,
#endif // WITH_EDITORONLY_DATA
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UUserDefinedStruct>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UUserDefinedStruct::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
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
	IMPLEMENT_CLASS(UUserDefinedStruct, 3383186244);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUserDefinedStruct(Z_Construct_UClass_UUserDefinedStruct, &UUserDefinedStruct::StaticClass, TEXT("/Script/Engine"), TEXT("UUserDefinedStruct"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUserDefinedStruct);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
