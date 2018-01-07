// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Animation/UMGSequencePlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGSequencePlayer() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UUMGSequencePlayer_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUMGSequencePlayer();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UClass* Z_Construct_UClass_UWidgetAnimation_NoRegister();
// End Cross Module References
	void UUMGSequencePlayer::StaticRegisterNativesUUMGSequencePlayer()
	{
	}
	UClass* Z_Construct_UClass_UUMGSequencePlayer_NoRegister()
	{
		return UUMGSequencePlayer::StaticClass();
	}
	UClass* Z_Construct_UClass_UUMGSequencePlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_UMG,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Animation/UMGSequencePlayer.h" },
				{ "ModuleRelativePath", "Public/Animation/UMGSequencePlayer.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Animation_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/Animation/UMGSequencePlayer.h" },
				{ "ToolTip", "Animation being played" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Animation = { UE4CodeGen_Private::EPropertyClass::Object, "Animation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000080008, 1, nullptr, STRUCT_OFFSET(UUMGSequencePlayer, Animation), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(NewProp_Animation_MetaData, ARRAY_COUNT(NewProp_Animation_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Animation,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UUMGSequencePlayer>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UUMGSequencePlayer::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900088u,
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
	IMPLEMENT_CLASS(UUMGSequencePlayer, 555620977);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGSequencePlayer(Z_Construct_UClass_UUMGSequencePlayer, &UUMGSequencePlayer::StaticClass, TEXT("/Script/UMG"), TEXT("UUMGSequencePlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGSequencePlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
