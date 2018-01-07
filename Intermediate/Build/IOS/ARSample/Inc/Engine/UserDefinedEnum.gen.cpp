// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/UserDefinedEnum.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUserDefinedEnum() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UUserDefinedEnum_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UUserDefinedEnum();
	COREUOBJECT_API UClass* Z_Construct_UClass_UEnum();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UUserDefinedEnum::StaticRegisterNativesUUserDefinedEnum()
	{
	}
	UClass* Z_Construct_UClass_UUserDefinedEnum_NoRegister()
	{
		return UUserDefinedEnum::StaticClass();
	}
	UClass* Z_Construct_UClass_UUserDefinedEnum()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UEnum,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Engine/UserDefinedEnum.h" },
				{ "ModuleRelativePath", "Classes/Engine/UserDefinedEnum.h" },
				{ "ToolTip", "An Enumeration is a list of named values." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayNameMap_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/UserDefinedEnum.h" },
				{ "ToolTip", "De-facto display names for enum entries mapped against their raw enum name (UEnum::GetNameByIndex).\nTo sync DisplayNameMap use FEnumEditorUtils::EnsureAllDisplayNamesExist." },
			};
#endif
			static const UE4CodeGen_Private::FMapPropertyParams NewProp_DisplayNameMap = { UE4CodeGen_Private::EPropertyClass::Map, "DisplayNameMap", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UUserDefinedEnum, DisplayNameMap), METADATA_PARAMS(NewProp_DisplayNameMap_MetaData, ARRAY_COUNT(NewProp_DisplayNameMap_MetaData)) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_DisplayNameMap_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Name, "DisplayNameMap_Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_DisplayNameMap_ValueProp = { UE4CodeGen_Private::EPropertyClass::Text, "DisplayNameMap", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnumDescription_MetaData[] = {
				{ "Category", "Description" },
				{ "ModuleRelativePath", "Classes/Engine/UserDefinedEnum.h" },
				{ "MultiLine", "TRUE" },
				{ "ToolTip", "Shows up in the content browser when the enum asset is hovered" },
			};
#endif
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_EnumDescription = { UE4CodeGen_Private::EPropertyClass::Text, "EnumDescription", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000001, 1, nullptr, STRUCT_OFFSET(UUserDefinedEnum, EnumDescription), METADATA_PARAMS(NewProp_EnumDescription_MetaData, ARRAY_COUNT(NewProp_EnumDescription_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UniqueNameIndex_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/UserDefinedEnum.h" },
			};
#endif
			static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_UniqueNameIndex = { UE4CodeGen_Private::EPropertyClass::UInt32, "UniqueNameIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(UUserDefinedEnum, UniqueNameIndex), METADATA_PARAMS(NewProp_UniqueNameIndex_MetaData, ARRAY_COUNT(NewProp_UniqueNameIndex_MetaData)) };
#endif // WITH_EDITORONLY_DATA
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DisplayNameMap,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DisplayNameMap_Key_KeyProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DisplayNameMap_ValueProp,
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EnumDescription,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UniqueNameIndex,
#endif // WITH_EDITORONLY_DATA
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UUserDefinedEnum>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UUserDefinedEnum::StaticClass,
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
	IMPLEMENT_CLASS(UUserDefinedEnum, 2293855603);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUserDefinedEnum(Z_Construct_UClass_UUserDefinedEnum, &UUserDefinedEnum::StaticClass, TEXT("/Script/Engine"), TEXT("UUserDefinedEnum"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUserDefinedEnum);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
