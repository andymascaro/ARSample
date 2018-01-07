// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Particles/Orientation/ParticleModuleOrientationAxisLock.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleOrientationAxisLock() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EParticleAxisLock();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleOrientationAxisLock_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleOrientationAxisLock();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleOrientationBase();
// End Cross Module References
	static UEnum* EParticleAxisLock_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EParticleAxisLock, Z_Construct_UPackage__Script_Engine(), TEXT("EParticleAxisLock"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EParticleAxisLock(EParticleAxisLock_StaticEnum, TEXT("/Script/Engine"), TEXT("EParticleAxisLock"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EParticleAxisLock_CRC() { return 3806082048U; }
	UEnum* Z_Construct_UEnum_Engine_EParticleAxisLock()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EParticleAxisLock"), 0, Get_Z_Construct_UEnum_Engine_EParticleAxisLock_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPAL_NONE", (int64)EPAL_NONE },
				{ "EPAL_X", (int64)EPAL_X },
				{ "EPAL_Y", (int64)EPAL_Y },
				{ "EPAL_Z", (int64)EPAL_Z },
				{ "EPAL_NEGATIVE_X", (int64)EPAL_NEGATIVE_X },
				{ "EPAL_NEGATIVE_Y", (int64)EPAL_NEGATIVE_Y },
				{ "EPAL_NEGATIVE_Z", (int64)EPAL_NEGATIVE_Z },
				{ "EPAL_ROTATE_X", (int64)EPAL_ROTATE_X },
				{ "EPAL_ROTATE_Y", (int64)EPAL_ROTATE_Y },
				{ "EPAL_ROTATE_Z", (int64)EPAL_ROTATE_Z },
				{ "EPAL_MAX", (int64)EPAL_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "EPAL_NEGATIVE_X.DisplayName", "-X" },
				{ "EPAL_NEGATIVE_X.ToolTip", "Lock the sprite facing towards the negative X-axis" },
				{ "EPAL_NEGATIVE_Y.DisplayName", "-Y" },
				{ "EPAL_NEGATIVE_Y.ToolTip", "Lock the sprite facing towards the negative Y-axis" },
				{ "EPAL_NEGATIVE_Z.DisplayName", "-Z" },
				{ "EPAL_NEGATIVE_Z.ToolTip", "Lock the sprite facing towards the negative Z-axis" },
				{ "EPAL_NONE.DisplayName", "None" },
				{ "EPAL_NONE.ToolTip", "No locking to an axis..." },
				{ "EPAL_ROTATE_X.DisplayName", "Rotate X" },
				{ "EPAL_ROTATE_X.ToolTip", "Lock the sprite rotation on the X-axis" },
				{ "EPAL_ROTATE_Y.DisplayName", "Rotate Y" },
				{ "EPAL_ROTATE_Y.ToolTip", "Lock the sprite rotation on the Y-axis" },
				{ "EPAL_ROTATE_Z.DisplayName", "Rotate Z" },
				{ "EPAL_ROTATE_Z.ToolTip", "Lock the sprite rotation on the Z-axis" },
				{ "EPAL_X.DisplayName", "X" },
				{ "EPAL_X.ToolTip", "Lock the sprite facing towards the positive X-axis" },
				{ "EPAL_Y.DisplayName", "Y" },
				{ "EPAL_Y.ToolTip", "Lock the sprite facing towards the positive Y-axis" },
				{ "EPAL_Z.DisplayName", "Z" },
				{ "EPAL_Z.ToolTip", "Lock the sprite facing towards the positive Z-axis" },
				{ "ModuleRelativePath", "Classes/Particles/Orientation/ParticleModuleOrientationAxisLock.h" },
				{ "ToolTip", "Flags indicating lock" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EParticleAxisLock",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EParticleAxisLock",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UParticleModuleOrientationAxisLock::StaticRegisterNativesUParticleModuleOrientationAxisLock()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleOrientationAxisLock_NoRegister()
	{
		return UParticleModuleOrientationAxisLock::StaticClass();
	}
	UClass* Z_Construct_UClass_UParticleModuleOrientationAxisLock()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UParticleModuleOrientationBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "Lock Axis" },
				{ "HideCategories", "Object Object Object" },
				{ "IncludePath", "Particles/Orientation/ParticleModuleOrientationAxisLock.h" },
				{ "ModuleRelativePath", "Classes/Particles/Orientation/ParticleModuleOrientationAxisLock.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LockAxisFlags_MetaData[] = {
				{ "Category", "Orientation" },
				{ "ModuleRelativePath", "Classes/Particles/Orientation/ParticleModuleOrientationAxisLock.h" },
				{ "ToolTip", "The lock axis flag setting.\nCan be one of the following:\n        EPAL_NONE                       No locking to an axis.\n        EPAL_X                          Lock the sprite facing towards +X.\n        EPAL_Y                          Lock the sprite facing towards +Y.\n        EPAL_Z                          Lock the sprite facing towards +Z.\n        EPAL_NEGATIVE_X         Lock the sprite facing towards -X.\n        EPAL_NEGATIVE_Y         Lock the sprite facing towards -Y.\n        EPAL_NEGATIVE_Z         Lock the sprite facing towards -Z.\n        EPAL_ROTATE_X           Lock the sprite rotation on the X-axis.\n        EPAL_ROTATE_Y           Lock the sprite rotation on the Y-axis.\n        EPAL_ROTATE_Z           Lock the sprite rotation on the Z-axis." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_LockAxisFlags = { UE4CodeGen_Private::EPropertyClass::Byte, "LockAxisFlags", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleOrientationAxisLock, LockAxisFlags), Z_Construct_UEnum_Engine_EParticleAxisLock, METADATA_PARAMS(NewProp_LockAxisFlags_MetaData, ARRAY_COUNT(NewProp_LockAxisFlags_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LockAxisFlags,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UParticleModuleOrientationAxisLock>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UParticleModuleOrientationAxisLock::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00081080u,
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
	IMPLEMENT_CLASS(UParticleModuleOrientationAxisLock, 2077938673);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleOrientationAxisLock(Z_Construct_UClass_UParticleModuleOrientationAxisLock, &UParticleModuleOrientationAxisLock::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleOrientationAxisLock"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleOrientationAxisLock);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
