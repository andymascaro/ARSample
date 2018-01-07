// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Matinee/InterpTrackInstSlomo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackInstSlomo() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstSlomo_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstSlomo();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInst();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UInterpTrackInstSlomo::StaticRegisterNativesUInterpTrackInstSlomo()
	{
	}
	UClass* Z_Construct_UClass_UInterpTrackInstSlomo_NoRegister()
	{
		return UInterpTrackInstSlomo::StaticClass();
	}
	UClass* Z_Construct_UClass_UInterpTrackInstSlomo()
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
				{ "IncludePath", "Matinee/InterpTrackInstSlomo.h" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstSlomo.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldTimeDilation_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstSlomo.h" },
				{ "ToolTip", "Backup of initial LevelInfo MatineeTimeDilation setting when interpolation started." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OldTimeDilation = { UE4CodeGen_Private::EPropertyClass::Float, "OldTimeDilation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UInterpTrackInstSlomo, OldTimeDilation), METADATA_PARAMS(NewProp_OldTimeDilation_MetaData, ARRAY_COUNT(NewProp_OldTimeDilation_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OldTimeDilation,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UInterpTrackInstSlomo>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UInterpTrackInstSlomo::StaticClass,
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
	IMPLEMENT_CLASS(UInterpTrackInstSlomo, 1050818536);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpTrackInstSlomo(Z_Construct_UClass_UInterpTrackInstSlomo, &UInterpTrackInstSlomo::StaticClass, TEXT("/Script/Engine"), TEXT("UInterpTrackInstSlomo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackInstSlomo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
