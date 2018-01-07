// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Vehicles/TireType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTireType() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UTireType_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTireType();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UTireType::StaticRegisterNativesUTireType()
	{
	}
	UClass* Z_Construct_UClass_UTireType_NoRegister()
	{
		return UTireType::StaticClass();
	}
	UClass* Z_Construct_UClass_UTireType()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UDataAsset,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Vehicles/TireType.h" },
				{ "ModuleRelativePath", "Classes/Vehicles/TireType.h" },
				{ "ToolTip", "DEPRECATED - Only used to allow conversion to new TireConfig in PhysXVehicles plugin" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrictionScale_MetaData[] = {
				{ "Category", "Deprecated" },
				{ "ModuleRelativePath", "Classes/Vehicles/TireType.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FrictionScale = { UE4CodeGen_Private::EPropertyClass::Float, "FrictionScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020001, 1, nullptr, STRUCT_OFFSET(UTireType, FrictionScale), METADATA_PARAMS(NewProp_FrictionScale_MetaData, ARRAY_COUNT(NewProp_FrictionScale_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FrictionScale,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UTireType>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UTireType::StaticClass,
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
	IMPLEMENT_CLASS(UTireType, 1767126238);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTireType(Z_Construct_UClass_UTireType, &UTireType::StaticClass, TEXT("/Script/Engine"), TEXT("UTireType"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTireType);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
