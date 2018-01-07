// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Sound/SoundNodeLooping.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundNodeLooping() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeLooping_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeLooping();
	ENGINE_API UClass* Z_Construct_UClass_USoundNode();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void USoundNodeLooping::StaticRegisterNativesUSoundNodeLooping()
	{
	}
	UClass* Z_Construct_UClass_USoundNodeLooping_NoRegister()
	{
		return USoundNodeLooping::StaticClass();
	}
	UClass* Z_Construct_UClass_USoundNodeLooping()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_USoundNode,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "Looping" },
				{ "HideCategories", "Object Object" },
				{ "IncludePath", "Sound/SoundNodeLooping.h" },
				{ "ModuleRelativePath", "Classes/Sound/SoundNodeLooping.h" },
				{ "ToolTip", "Defines how a sound loops; either indefinitely, or for a set number of times.\nNote: The Looping node should only be used for logical or procedural looping such as introducing a delay.\nThese sounds will not be played seamlessly. If you want a sound to loop seamlessly and indefinitely,\nuse the Looping flag on the Wave Player node for that sound." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLoopIndefinitely_MetaData[] = {
				{ "Category", "Looping" },
				{ "ModuleRelativePath", "Classes/Sound/SoundNodeLooping.h" },
				{ "ToolTip", "If enabled, the node will continue to loop indefinitely regardless of the Loop Count value." },
			};
#endif
			auto NewProp_bLoopIndefinitely_SetBit = [](void* Obj){ ((USoundNodeLooping*)Obj)->bLoopIndefinitely = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLoopIndefinitely = { UE4CodeGen_Private::EPropertyClass::Bool, "bLoopIndefinitely", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(USoundNodeLooping), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bLoopIndefinitely_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bLoopIndefinitely_MetaData, ARRAY_COUNT(NewProp_bLoopIndefinitely_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoopCount_MetaData[] = {
				{ "Category", "Looping" },
				{ "ClampMin", "1" },
				{ "EditCondition", "!bLoopIndefinitely" },
				{ "ModuleRelativePath", "Classes/Sound/SoundNodeLooping.h" },
				{ "ToolTip", "The amount of times to loop" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_LoopCount = { UE4CodeGen_Private::EPropertyClass::Int, "LoopCount", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(USoundNodeLooping, LoopCount), METADATA_PARAMS(NewProp_LoopCount_MetaData, ARRAY_COUNT(NewProp_LoopCount_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bLoopIndefinitely,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LoopCount,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USoundNodeLooping>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USoundNodeLooping::StaticClass,
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
	IMPLEMENT_CLASS(USoundNodeLooping, 4272744311);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundNodeLooping(Z_Construct_UClass_USoundNodeLooping, &USoundNodeLooping::StaticClass, TEXT("/Script/Engine"), TEXT("USoundNodeLooping"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundNodeLooping);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
