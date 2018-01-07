// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/Channel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChannel() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UChannel_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UChannel();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UNetConnection_NoRegister();
// End Cross Module References
	void UChannel::StaticRegisterNativesUChannel()
	{
	}
	UClass* Z_Construct_UClass_UChannel_NoRegister()
	{
		return UChannel::StaticClass();
	}
	UClass* Z_Construct_UClass_UChannel()
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
				{ "IncludePath", "Engine/Channel.h" },
				{ "ModuleRelativePath", "Classes/Engine/Channel.h" },
				{ "ToolTip", "Base class of communication channels." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Connection_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Channel.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Connection = { UE4CodeGen_Private::EPropertyClass::Object, "Connection", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UChannel, Connection), Z_Construct_UClass_UNetConnection_NoRegister, METADATA_PARAMS(NewProp_Connection_MetaData, ARRAY_COUNT(NewProp_Connection_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Connection,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UChannel>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UChannel::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100088u,
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
	IMPLEMENT_CLASS(UChannel, 144158009);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UChannel(Z_Construct_UClass_UChannel, &UChannel::StaticClass, TEXT("/Script/Engine"), TEXT("UChannel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChannel);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
