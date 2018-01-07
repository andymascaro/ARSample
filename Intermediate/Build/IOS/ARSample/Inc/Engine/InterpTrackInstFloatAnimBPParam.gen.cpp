// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Matinee/InterpTrackInstFloatAnimBPParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackInstFloatAnimBPParam() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstFloatAnimBPParam_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstFloatAnimBPParam();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInst();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
// End Cross Module References
	void UInterpTrackInstFloatAnimBPParam::StaticRegisterNativesUInterpTrackInstFloatAnimBPParam()
	{
	}
	UClass* Z_Construct_UClass_UInterpTrackInstFloatAnimBPParam_NoRegister()
	{
		return UInterpTrackInstFloatAnimBPParam::StaticClass();
	}
	UClass* Z_Construct_UClass_UInterpTrackInstFloatAnimBPParam()
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
				{ "IncludePath", "Matinee/InterpTrackInstFloatAnimBPParam.h" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstFloatAnimBPParam.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResetFloat_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstFloatAnimBPParam.h" },
				{ "ToolTip", "Saved values for restoring state when exiting Matinee." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ResetFloat = { UE4CodeGen_Private::EPropertyClass::Float, "ResetFloat", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, STRUCT_OFFSET(UInterpTrackInstFloatAnimBPParam, ResetFloat), METADATA_PARAMS(NewProp_ResetFloat_MetaData, ARRAY_COUNT(NewProp_ResetFloat_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimScriptInstance_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstFloatAnimBPParam.h" },
				{ "ToolTip", "MIDs we're using to set the desired parameter." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimScriptInstance = { UE4CodeGen_Private::EPropertyClass::Object, "AnimScriptInstance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, STRUCT_OFFSET(UInterpTrackInstFloatAnimBPParam, AnimScriptInstance), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(NewProp_AnimScriptInstance_MetaData, ARRAY_COUNT(NewProp_AnimScriptInstance_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ResetFloat,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AnimScriptInstance,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UInterpTrackInstFloatAnimBPParam>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UInterpTrackInstFloatAnimBPParam::StaticClass,
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
	IMPLEMENT_CLASS(UInterpTrackInstFloatAnimBPParam, 4044012882);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpTrackInstFloatAnimBPParam(Z_Construct_UClass_UInterpTrackInstFloatAnimBPParam, &UInterpTrackInstFloatAnimBPParam::StaticClass, TEXT("/Script/Engine"), TEXT("UInterpTrackInstFloatAnimBPParam"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackInstFloatAnimBPParam);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
