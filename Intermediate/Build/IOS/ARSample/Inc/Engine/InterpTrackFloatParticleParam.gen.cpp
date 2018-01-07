// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Matinee/InterpTrackFloatParticleParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackFloatParticleParam() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackFloatParticleParam_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackFloatParticleParam();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackFloatBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UInterpTrackFloatParticleParam::StaticRegisterNativesUInterpTrackFloatParticleParam()
	{
	}
	UClass* Z_Construct_UClass_UInterpTrackFloatParticleParam_NoRegister()
	{
		return UInterpTrackFloatParticleParam::StaticClass();
	}
	UClass* Z_Construct_UClass_UInterpTrackFloatParticleParam()
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
				{ "DisplayName", "Float Particle Param Track" },
				{ "HideCategories", "Object" },
				{ "IncludePath", "Matinee/InterpTrackFloatParticleParam.h" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackFloatParticleParam.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParamName_MetaData[] = {
				{ "Category", "InterpTrackFloatParticleParam" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackFloatParticleParam.h" },
				{ "ToolTip", "Name of property in the Emitter which this track mill modify over time." },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParamName = { UE4CodeGen_Private::EPropertyClass::Name, "ParamName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UInterpTrackFloatParticleParam, ParamName), METADATA_PARAMS(NewProp_ParamName_MetaData, ARRAY_COUNT(NewProp_ParamName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParamName,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UInterpTrackFloatParticleParam>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UInterpTrackFloatParticleParam::StaticClass,
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
	IMPLEMENT_CLASS(UInterpTrackFloatParticleParam, 3366471898);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpTrackFloatParticleParam(Z_Construct_UClass_UInterpTrackFloatParticleParam, &UInterpTrackFloatParticleParam::StaticClass, TEXT("/Script/Engine"), TEXT("UInterpTrackFloatParticleParam"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackFloatParticleParam);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
