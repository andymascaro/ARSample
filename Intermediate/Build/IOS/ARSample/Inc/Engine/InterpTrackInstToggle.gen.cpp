// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Matinee/InterpTrackInstToggle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackInstToggle() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstToggle_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstToggle();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInst();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETrackToggleAction();
// End Cross Module References
	void UInterpTrackInstToggle::StaticRegisterNativesUInterpTrackInstToggle()
	{
	}
	UClass* Z_Construct_UClass_UInterpTrackInstToggle_NoRegister()
	{
		return UInterpTrackInstToggle::StaticClass();
	}
	UClass* Z_Construct_UClass_UInterpTrackInstToggle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UInterpTrackInst,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Matinee/InterpTrackInstToggle.h" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstToggle.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSavedActiveState_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstToggle.h" },
				{ "ToolTip", "Cached 'active' state for the toggleable actor before we possessed it; restored when Matinee exits" },
			};
#endif
			auto NewProp_bSavedActiveState_SetBit = [](void* Obj){ ((UInterpTrackInstToggle*)Obj)->bSavedActiveState = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSavedActiveState = { UE4CodeGen_Private::EPropertyClass::Bool, "bSavedActiveState", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UInterpTrackInstToggle), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSavedActiveState_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSavedActiveState_MetaData, ARRAY_COUNT(NewProp_bSavedActiveState_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastUpdatePosition_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstToggle.h" },
				{ "ToolTip", "Position we were in last time we evaluated.\nDuring UpdateTrack, toggles between this time and the current time will be processed." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LastUpdatePosition = { UE4CodeGen_Private::EPropertyClass::Float, "LastUpdatePosition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UInterpTrackInstToggle, LastUpdatePosition), METADATA_PARAMS(NewProp_LastUpdatePosition_MetaData, ARRAY_COUNT(NewProp_LastUpdatePosition_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[] = {
				{ "Category", "InterpTrackInstToggle" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstToggle.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Action = { UE4CodeGen_Private::EPropertyClass::Byte, "Action", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UInterpTrackInstToggle, Action), Z_Construct_UEnum_Engine_ETrackToggleAction, METADATA_PARAMS(NewProp_Action_MetaData, ARRAY_COUNT(NewProp_Action_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSavedActiveState,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LastUpdatePosition,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Action,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UInterpTrackInstToggle>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UInterpTrackInstToggle::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00000080u,
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
	IMPLEMENT_CLASS(UInterpTrackInstToggle, 2772803187);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpTrackInstToggle(Z_Construct_UClass_UInterpTrackInstToggle, &UInterpTrackInstToggle::StaticClass, TEXT("/Script/Engine"), TEXT("UInterpTrackInstToggle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackInstToggle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
