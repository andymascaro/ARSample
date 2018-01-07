// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Matinee/InterpTrackFade.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackFade() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackFade_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackFade();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackFloatBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
	void UInterpTrackFade::StaticRegisterNativesUInterpTrackFade()
	{
	}
	UClass* Z_Construct_UClass_UInterpTrackFade_NoRegister()
	{
		return UInterpTrackFade::StaticClass();
	}
	UClass* Z_Construct_UClass_UInterpTrackFade()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UInterpTrackFloatBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "Fade Track" },
				{ "HideCategories", "Object" },
				{ "IncludePath", "Matinee/InterpTrackFade.h" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackFade.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FadeColor_MetaData[] = {
				{ "Category", "InterpTrackFade" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackFade.h" },
				{ "ToolTip", "Color to fade to." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_FadeColor = { UE4CodeGen_Private::EPropertyClass::Struct, "FadeColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UInterpTrackFade, FadeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(NewProp_FadeColor_MetaData, ARRAY_COUNT(NewProp_FadeColor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFadeAudio_MetaData[] = {
				{ "Category", "InterpTrackFade" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackFade.h" },
				{ "ToolTip", "True to set master audio volume along with the visual fade." },
			};
#endif
			auto NewProp_bFadeAudio_SetBit = [](void* Obj){ ((UInterpTrackFade*)Obj)->bFadeAudio = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFadeAudio = { UE4CodeGen_Private::EPropertyClass::Bool, "bFadeAudio", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UInterpTrackFade), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bFadeAudio_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bFadeAudio_MetaData, ARRAY_COUNT(NewProp_bFadeAudio_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPersistFade_MetaData[] = {
				{ "Category", "InterpTrackFade" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackFade.h" },
				{ "ToolTip", "InterpTrackFade\n\nSpecial float property track that controls camera fading over time.\nShould live in a Director group." },
			};
#endif
			auto NewProp_bPersistFade_SetBit = [](void* Obj){ ((UInterpTrackFade*)Obj)->bPersistFade = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPersistFade = { UE4CodeGen_Private::EPropertyClass::Bool, "bPersistFade", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UInterpTrackFade), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bPersistFade_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bPersistFade_MetaData, ARRAY_COUNT(NewProp_bPersistFade_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FadeColor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bFadeAudio,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bPersistFade,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UInterpTrackFade>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UInterpTrackFade::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00002080u,
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
	IMPLEMENT_CLASS(UInterpTrackFade, 3883501243);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpTrackFade(Z_Construct_UClass_UInterpTrackFade, &UInterpTrackFade::StaticClass, TEXT("/Script/Engine"), TEXT("UInterpTrackFade"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackFade);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
