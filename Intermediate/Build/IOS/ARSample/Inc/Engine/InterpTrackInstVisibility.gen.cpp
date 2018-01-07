// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Matinee/InterpTrackInstVisibility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackInstVisibility() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstVisibility_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstVisibility();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInst();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EVisibilityTrackAction();
// End Cross Module References
	void UInterpTrackInstVisibility::StaticRegisterNativesUInterpTrackInstVisibility()
	{
	}
	UClass* Z_Construct_UClass_UInterpTrackInstVisibility_NoRegister()
	{
		return UInterpTrackInstVisibility::StaticClass();
	}
	UClass* Z_Construct_UClass_UInterpTrackInstVisibility()
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
				{ "IncludePath", "Matinee/InterpTrackInstVisibility.h" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstVisibility.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastUpdatePosition_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstVisibility.h" },
				{ "ToolTip", "Position we were in last time we evaluated.\nDuring UpdateTrack, events between this time and the current time will be processed." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LastUpdatePosition = { UE4CodeGen_Private::EPropertyClass::Float, "LastUpdatePosition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UInterpTrackInstVisibility, LastUpdatePosition), METADATA_PARAMS(NewProp_LastUpdatePosition_MetaData, ARRAY_COUNT(NewProp_LastUpdatePosition_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[] = {
				{ "Category", "InterpTrackInstVisibility" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstVisibility.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Action = { UE4CodeGen_Private::EPropertyClass::Byte, "Action", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UInterpTrackInstVisibility, Action), Z_Construct_UEnum_Engine_EVisibilityTrackAction, METADATA_PARAMS(NewProp_Action_MetaData, ARRAY_COUNT(NewProp_Action_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LastUpdatePosition,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Action,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UInterpTrackInstVisibility>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UInterpTrackInstVisibility::StaticClass,
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
	IMPLEMENT_CLASS(UInterpTrackInstVisibility, 1648418793);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpTrackInstVisibility(Z_Construct_UClass_UInterpTrackInstVisibility, &UInterpTrackInstVisibility::StaticClass, TEXT("/Script/Engine"), TEXT("UInterpTrackInstVisibility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackInstVisibility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
