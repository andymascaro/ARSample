// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Debug/ReporterBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReporterBase() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EReporterLineStyle();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UReporterBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UReporterBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* EReporterLineStyle_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EReporterLineStyle, Z_Construct_UPackage__Script_Engine(), TEXT("EReporterLineStyle"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EReporterLineStyle(EReporterLineStyle_StaticEnum, TEXT("/Script/Engine"), TEXT("EReporterLineStyle"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EReporterLineStyle_CRC() { return 4265814368U; }
	UEnum* Z_Construct_UEnum_Engine_EReporterLineStyle()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EReporterLineStyle"), 0, Get_Z_Construct_UEnum_Engine_EReporterLineStyle_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EReporterLineStyle::Line", (int64)EReporterLineStyle::Line },
				{ "EReporterLineStyle::Dash", (int64)EReporterLineStyle::Dash },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Debug/ReporterBase.h" },
				{ "ToolTip", "Draw styles for lines." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EReporterLineStyle",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EReporterLineStyle::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UReporterBase::StaticRegisterNativesUReporterBase()
	{
	}
	UClass* Z_Construct_UClass_UReporterBase_NoRegister()
	{
		return UReporterBase::StaticClass();
	}
	UClass* Z_Construct_UClass_UReporterBase()
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
				{ "IncludePath", "Debug/ReporterBase.h" },
				{ "ModuleRelativePath", "Classes/Debug/ReporterBase.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UReporterBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UReporterBase::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00000081u,
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
	IMPLEMENT_CLASS(UReporterBase, 4134817887);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UReporterBase(Z_Construct_UClass_UReporterBase, &UReporterBase::StaticClass, TEXT("/Script/Engine"), TEXT("UReporterBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReporterBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
