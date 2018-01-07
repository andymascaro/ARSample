// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/HandlerComponentFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHandlerComponentFactory() {}
// Cross Module References
	PACKETHANDLER_API UClass* Z_Construct_UClass_UHandlerComponentFactory_NoRegister();
	PACKETHANDLER_API UClass* Z_Construct_UClass_UHandlerComponentFactory();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_PacketHandler();
// End Cross Module References
	void UHandlerComponentFactory::StaticRegisterNativesUHandlerComponentFactory()
	{
	}
	UClass* Z_Construct_UClass_UHandlerComponentFactory_NoRegister()
	{
		return UHandlerComponentFactory::StaticClass();
	}
	UClass* Z_Construct_UClass_UHandlerComponentFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_PacketHandler,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "HandlerComponentFactory.h" },
				{ "ModuleRelativePath", "Classes/HandlerComponentFactory.h" },
				{ "ToolTip", "A UObject alternative for loading HandlerComponents without strict module dependency" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UHandlerComponentFactory>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UHandlerComponentFactory::StaticClass,
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
	IMPLEMENT_CLASS(UHandlerComponentFactory, 3655147067);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHandlerComponentFactory(Z_Construct_UClass_UHandlerComponentFactory, &UHandlerComponentFactory::StaticClass, TEXT("/Script/PacketHandler"), TEXT("UHandlerComponentFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHandlerComponentFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
