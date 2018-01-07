// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/DeviceProfiles/DeviceProfileManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDeviceProfileManager() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDeviceProfileManager_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDeviceProfileManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	void UDeviceProfileManager::StaticRegisterNativesUDeviceProfileManager()
	{
	}
	UClass* Z_Construct_UClass_UDeviceProfileManager_NoRegister()
	{
		return UDeviceProfileManager::StaticClass();
	}
	UClass* Z_Construct_UClass_UDeviceProfileManager()
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
				{ "IncludePath", "DeviceProfiles/DeviceProfileManager.h" },
				{ "ModuleRelativePath", "Classes/DeviceProfiles/DeviceProfileManager.h" },
				{ "ToolTip", "Implements a helper class that manages all profiles in the Device" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Profiles_MetaData[] = {
				{ "Category", "Properties" },
				{ "ModuleRelativePath", "Classes/DeviceProfiles/DeviceProfileManager.h" },
				{ "ToolTip", "Holds the collection of managed profiles." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Profiles = { UE4CodeGen_Private::EPropertyClass::Array, "Profiles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UDeviceProfileManager, Profiles), METADATA_PARAMS(NewProp_Profiles_MetaData, ARRAY_COUNT(NewProp_Profiles_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Profiles_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Profiles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Profiles,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Profiles_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UDeviceProfileManager>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UDeviceProfileManager::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100088u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				"DeviceProfiles",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDeviceProfileManager, 295705879);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDeviceProfileManager(Z_Construct_UClass_UDeviceProfileManager, &UDeviceProfileManager::StaticClass, TEXT("/Script/Engine"), TEXT("UDeviceProfileManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDeviceProfileManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
