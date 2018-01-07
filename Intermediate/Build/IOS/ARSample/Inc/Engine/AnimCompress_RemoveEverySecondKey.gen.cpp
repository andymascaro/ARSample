// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Animation/AnimCompress_RemoveEverySecondKey.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimCompress_RemoveEverySecondKey() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimCompress_RemoveEverySecondKey_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimCompress_RemoveEverySecondKey();
	ENGINE_API UClass* Z_Construct_UClass_UAnimCompress();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UAnimCompress_RemoveEverySecondKey::StaticRegisterNativesUAnimCompress_RemoveEverySecondKey()
	{
	}
	UClass* Z_Construct_UClass_UAnimCompress_RemoveEverySecondKey_NoRegister()
	{
		return UAnimCompress_RemoveEverySecondKey::StaticClass();
	}
	UClass* Z_Construct_UClass_UAnimCompress_RemoveEverySecondKey()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UAnimCompress,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Object" },
				{ "IncludePath", "Animation/AnimCompress_RemoveEverySecondKey.h" },
				{ "ModuleRelativePath", "Classes/Animation/AnimCompress_RemoveEverySecondKey.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStartAtSecondKey_MetaData[] = {
				{ "Category", "AnimationCompressionAlgorithm_RemoveEverySecondKey" },
				{ "ModuleRelativePath", "Classes/Animation/AnimCompress_RemoveEverySecondKey.h" },
				{ "ToolTip", "If bStartAtSecondKey is true, remove keys 1,3,5,etc.\nIf bStartAtSecondKey is false, remove keys 0,2,4,etc." },
			};
#endif
			auto NewProp_bStartAtSecondKey_SetBit = [](void* Obj){ ((UAnimCompress_RemoveEverySecondKey*)Obj)->bStartAtSecondKey = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStartAtSecondKey = { UE4CodeGen_Private::EPropertyClass::Bool, "bStartAtSecondKey", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UAnimCompress_RemoveEverySecondKey), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bStartAtSecondKey_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bStartAtSecondKey_MetaData, ARRAY_COUNT(NewProp_bStartAtSecondKey_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinKeys_MetaData[] = {
				{ "Category", "AnimationCompressionAlgorithm_RemoveEverySecondKey" },
				{ "ModuleRelativePath", "Classes/Animation/AnimCompress_RemoveEverySecondKey.h" },
				{ "ToolTip", "Animations with fewer than MinKeys will not lose any keys." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinKeys = { UE4CodeGen_Private::EPropertyClass::Int, "MinKeys", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UAnimCompress_RemoveEverySecondKey, MinKeys), METADATA_PARAMS(NewProp_MinKeys_MetaData, ARRAY_COUNT(NewProp_MinKeys_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bStartAtSecondKey,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MinKeys,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAnimCompress_RemoveEverySecondKey>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAnimCompress_RemoveEverySecondKey::StaticClass,
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
	IMPLEMENT_CLASS(UAnimCompress_RemoveEverySecondKey, 3245342130);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimCompress_RemoveEverySecondKey(Z_Construct_UClass_UAnimCompress_RemoveEverySecondKey, &UAnimCompress_RemoveEverySecondKey::StaticClass, TEXT("/Script/Engine"), TEXT("UAnimCompress_RemoveEverySecondKey"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimCompress_RemoveEverySecondKey);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
