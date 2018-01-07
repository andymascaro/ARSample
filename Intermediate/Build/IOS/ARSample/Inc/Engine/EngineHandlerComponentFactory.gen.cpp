// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/PacketHandlers/EngineHandlerComponentFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEngineHandlerComponentFactory() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UEngineHandlerComponentFactory_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEngineHandlerComponentFactory();
	PACKETHANDLER_API UClass* Z_Construct_UClass_UHandlerComponentFactory();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UEngineHandlerComponentFactory::StaticRegisterNativesUEngineHandlerComponentFactory()
	{
	}
	UClass* Z_Construct_UClass_UEngineHandlerComponentFactory_NoRegister()
	{
		return UEngineHandlerComponentFactory::StaticClass();
	}
	UClass* Z_Construct_UClass_UEngineHandlerComponentFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UHandlerComponentFactory,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "PacketHandlers/EngineHandlerComponentFactory.h" },
				{ "ModuleRelativePath", "Classes/PacketHandlers/EngineHandlerComponentFactory.h" },
				{ "ToolTip", "Factory class for loading HandlerComponent's contained within Engine" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UEngineHandlerComponentFactory>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UEngineHandlerComponentFactory::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00000080u,
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
	IMPLEMENT_CLASS(UEngineHandlerComponentFactory, 2183298673);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEngineHandlerComponentFactory(Z_Construct_UClass_UEngineHandlerComponentFactory, &UEngineHandlerComponentFactory::StaticClass, TEXT("/Script/Engine"), TEXT("UEngineHandlerComponentFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEngineHandlerComponentFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
