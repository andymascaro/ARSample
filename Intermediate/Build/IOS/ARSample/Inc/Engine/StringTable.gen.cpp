// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Internationalization/StringTable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStringTable() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UStringTable_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStringTable();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UStringTable::StaticRegisterNativesUStringTable()
	{
	}
	UClass* Z_Construct_UClass_UStringTable_NoRegister()
	{
		return UStringTable::StaticClass();
	}
	UClass* Z_Construct_UClass_UStringTable()
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
				{ "IncludePath", "Internationalization/StringTable.h" },
				{ "ModuleRelativePath", "Public/Internationalization/StringTable.h" },
				{ "ToolTip", "String table wrapper asset" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UStringTable>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UStringTable::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
				nullptr, 0,
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
	IMPLEMENT_CLASS(UStringTable, 768374842);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStringTable(Z_Construct_UClass_UStringTable, &UStringTable::StaticClass, TEXT("/Script/Engine"), TEXT("UStringTable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStringTable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
