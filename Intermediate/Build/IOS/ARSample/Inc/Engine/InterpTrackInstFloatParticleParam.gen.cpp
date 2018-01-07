// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Matinee/InterpTrackInstFloatParticleParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackInstFloatParticleParam() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstFloatParticleParam_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstFloatParticleParam();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInst();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UInterpTrackInstFloatParticleParam::StaticRegisterNativesUInterpTrackInstFloatParticleParam()
	{
	}
	UClass* Z_Construct_UClass_UInterpTrackInstFloatParticleParam_NoRegister()
	{
		return UInterpTrackInstFloatParticleParam::StaticClass();
	}
	UClass* Z_Construct_UClass_UInterpTrackInstFloatParticleParam()
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
				{ "IncludePath", "Matinee/InterpTrackInstFloatParticleParam.h" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstFloatParticleParam.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResetFloat_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstFloatParticleParam.h" },
				{ "ToolTip", "Saved value for restoring state when exiting Matinee." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ResetFloat = { UE4CodeGen_Private::EPropertyClass::Float, "ResetFloat", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UInterpTrackInstFloatParticleParam, ResetFloat), METADATA_PARAMS(NewProp_ResetFloat_MetaData, ARRAY_COUNT(NewProp_ResetFloat_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ResetFloat,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UInterpTrackInstFloatParticleParam>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UInterpTrackInstFloatParticleParam::StaticClass,
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
	IMPLEMENT_CLASS(UInterpTrackInstFloatParticleParam, 1441605803);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpTrackInstFloatParticleParam(Z_Construct_UClass_UInterpTrackInstFloatParticleParam, &UInterpTrackInstFloatParticleParam::StaticClass, TEXT("/Script/Engine"), TEXT("UInterpTrackInstFloatParticleParam"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackInstFloatParticleParam);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
