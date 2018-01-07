// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/DeviceProfiles/DeviceProfile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDeviceProfile() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDeviceProfile_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDeviceProfile();
	ENGINE_API UClass* Z_Construct_UClass_UTextureLODSettings();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	void UDeviceProfile::StaticRegisterNativesUDeviceProfile()
	{
	}
	UClass* Z_Construct_UClass_UDeviceProfile_NoRegister()
	{
		return UDeviceProfile::StaticClass();
	}
	UClass* Z_Construct_UClass_UDeviceProfile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UTextureLODSettings,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "DeviceProfiles/DeviceProfile.h" },
				{ "ModuleRelativePath", "Classes/DeviceProfiles/DeviceProfile.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CVars_MetaData[] = {
				{ "Category", "ConsoleVariables" },
				{ "ModuleRelativePath", "Classes/DeviceProfiles/DeviceProfile.h" },
				{ "ToolTip", "The collection of CVars which is set from this profile" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CVars = { UE4CodeGen_Private::EPropertyClass::Array, "CVars", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UDeviceProfile, CVars), METADATA_PARAMS(NewProp_CVars_MetaData, ARRAY_COUNT(NewProp_CVars_MetaData)) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_CVars_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "CVars", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000004000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[] = {
				{ "ModuleRelativePath", "Classes/DeviceProfiles/DeviceProfile.h" },
				{ "ToolTip", "The parent object of this profile, it is the object matching this DeviceType with the BaseProfileName" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Parent = { UE4CodeGen_Private::EPropertyClass::Object, "Parent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UDeviceProfile, Parent), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(NewProp_Parent_MetaData, ARRAY_COUNT(NewProp_Parent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseProfileName_MetaData[] = {
				{ "Category", "DeviceSettings" },
				{ "ModuleRelativePath", "Classes/DeviceProfiles/DeviceProfile.h" },
				{ "ToolTip", "The name of the parent profile of this object" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_BaseProfileName = { UE4CodeGen_Private::EPropertyClass::Str, "BaseProfileName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UDeviceProfile, BaseProfileName), METADATA_PARAMS(NewProp_BaseProfileName_MetaData, ARRAY_COUNT(NewProp_BaseProfileName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceType_MetaData[] = {
				{ "Category", "DeviceSettings" },
				{ "ModuleRelativePath", "Classes/DeviceProfiles/DeviceProfile.h" },
				{ "ToolTip", "The type of this profile, I.e. IOS, Windows, PS4 etc" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_DeviceType = { UE4CodeGen_Private::EPropertyClass::Str, "DeviceType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000024001, 1, nullptr, STRUCT_OFFSET(UDeviceProfile, DeviceType), METADATA_PARAMS(NewProp_DeviceType_MetaData, ARRAY_COUNT(NewProp_DeviceType_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CVars,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CVars_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Parent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BaseProfileName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DeviceType,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UDeviceProfile>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UDeviceProfile::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100484u,
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
	IMPLEMENT_CLASS(UDeviceProfile, 3270409666);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDeviceProfile(Z_Construct_UClass_UDeviceProfile, &UDeviceProfile::StaticClass, TEXT("/Script/Engine"), TEXT("UDeviceProfile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDeviceProfile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
