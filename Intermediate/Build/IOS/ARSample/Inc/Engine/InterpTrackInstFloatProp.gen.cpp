// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Matinee/InterpTrackInstFloatProp.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackInstFloatProp() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstFloatProp_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstFloatProp();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstProperty();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UInterpTrackInstFloatProp::StaticRegisterNativesUInterpTrackInstFloatProp()
	{
	}
	UClass* Z_Construct_UClass_UInterpTrackInstFloatProp_NoRegister()
	{
		return UInterpTrackInstFloatProp::StaticClass();
	}
	UClass* Z_Construct_UClass_UInterpTrackInstFloatProp()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UInterpTrackInstProperty,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Matinee/InterpTrackInstFloatProp.h" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstFloatProp.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResetFloat_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstFloatProp.h" },
				{ "ToolTip", "Saved value for restoring state when exiting Matinee." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ResetFloat = { UE4CodeGen_Private::EPropertyClass::Float, "ResetFloat", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UInterpTrackInstFloatProp, ResetFloat), METADATA_PARAMS(NewProp_ResetFloat_MetaData, ARRAY_COUNT(NewProp_ResetFloat_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ResetFloat,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UInterpTrackInstFloatProp>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UInterpTrackInstFloatProp::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00080080u,
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
	IMPLEMENT_CLASS(UInterpTrackInstFloatProp, 2599672492);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpTrackInstFloatProp(Z_Construct_UClass_UInterpTrackInstFloatProp, &UInterpTrackInstFloatProp::StaticClass, TEXT("/Script/Engine"), TEXT("UInterpTrackInstFloatProp"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackInstFloatProp);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
