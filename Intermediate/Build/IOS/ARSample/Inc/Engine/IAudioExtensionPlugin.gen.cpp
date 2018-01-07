// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/IAudioExtensionPlugin.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIAudioExtensionPlugin() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USpatializationPluginSourceSettingsBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpatializationPluginSourceSettingsBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UOcclusionPluginSourceSettingsBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UOcclusionPluginSourceSettingsBase();
	ENGINE_API UClass* Z_Construct_UClass_UReverbPluginSourceSettingsBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UReverbPluginSourceSettingsBase();
// End Cross Module References
	void USpatializationPluginSourceSettingsBase::StaticRegisterNativesUSpatializationPluginSourceSettingsBase()
	{
	}
	UClass* Z_Construct_UClass_USpatializationPluginSourceSettingsBase_NoRegister()
	{
		return USpatializationPluginSourceSettingsBase::StaticClass();
	}
	UClass* Z_Construct_UClass_USpatializationPluginSourceSettingsBase()
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
				{ "BlueprintType", "true" },
				{ "IncludePath", "IAudioExtensionPlugin.h" },
				{ "ModuleRelativePath", "Public/IAudioExtensionPlugin.h" },
				{ "ToolTip", "This is a class which should be overridden to provide users with settings to use for individual sounds" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USpatializationPluginSourceSettingsBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USpatializationPluginSourceSettingsBase::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00101081u,
				nullptr, 0,
				nullptr, 0,
				"Engine",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USpatializationPluginSourceSettingsBase, 365369325);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USpatializationPluginSourceSettingsBase(Z_Construct_UClass_USpatializationPluginSourceSettingsBase, &USpatializationPluginSourceSettingsBase::StaticClass, TEXT("/Script/Engine"), TEXT("USpatializationPluginSourceSettingsBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpatializationPluginSourceSettingsBase);
	void UOcclusionPluginSourceSettingsBase::StaticRegisterNativesUOcclusionPluginSourceSettingsBase()
	{
	}
	UClass* Z_Construct_UClass_UOcclusionPluginSourceSettingsBase_NoRegister()
	{
		return UOcclusionPluginSourceSettingsBase::StaticClass();
	}
	UClass* Z_Construct_UClass_UOcclusionPluginSourceSettingsBase()
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
				{ "BlueprintType", "true" },
				{ "IncludePath", "IAudioExtensionPlugin.h" },
				{ "ModuleRelativePath", "Public/IAudioExtensionPlugin.h" },
				{ "ToolTip", "This is a class which should be overridden to provide users with settings to use for individual sounds" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UOcclusionPluginSourceSettingsBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UOcclusionPluginSourceSettingsBase::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00101081u,
				nullptr, 0,
				nullptr, 0,
				"Engine",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOcclusionPluginSourceSettingsBase, 802301967);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOcclusionPluginSourceSettingsBase(Z_Construct_UClass_UOcclusionPluginSourceSettingsBase, &UOcclusionPluginSourceSettingsBase::StaticClass, TEXT("/Script/Engine"), TEXT("UOcclusionPluginSourceSettingsBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOcclusionPluginSourceSettingsBase);
	void UReverbPluginSourceSettingsBase::StaticRegisterNativesUReverbPluginSourceSettingsBase()
	{
	}
	UClass* Z_Construct_UClass_UReverbPluginSourceSettingsBase_NoRegister()
	{
		return UReverbPluginSourceSettingsBase::StaticClass();
	}
	UClass* Z_Construct_UClass_UReverbPluginSourceSettingsBase()
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
				{ "BlueprintType", "true" },
				{ "IncludePath", "IAudioExtensionPlugin.h" },
				{ "ModuleRelativePath", "Public/IAudioExtensionPlugin.h" },
				{ "ToolTip", "This is a class which should be overridden to provide users with settings to use for individual sounds" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UReverbPluginSourceSettingsBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UReverbPluginSourceSettingsBase::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00101081u,
				nullptr, 0,
				nullptr, 0,
				"Engine",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UReverbPluginSourceSettingsBase, 2880359342);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UReverbPluginSourceSettingsBase(Z_Construct_UClass_UReverbPluginSourceSettingsBase, &UReverbPluginSourceSettingsBase::StaticClass, TEXT("/Script/Engine"), TEXT("UReverbPluginSourceSettingsBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReverbPluginSourceSettingsBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
