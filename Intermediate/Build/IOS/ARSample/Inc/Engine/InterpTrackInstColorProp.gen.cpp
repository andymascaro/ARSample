// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Matinee/InterpTrackInstColorProp.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackInstColorProp() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstColorProp_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstColorProp();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstProperty();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
// End Cross Module References
	void UInterpTrackInstColorProp::StaticRegisterNativesUInterpTrackInstColorProp()
	{
	}
	UClass* Z_Construct_UClass_UInterpTrackInstColorProp_NoRegister()
	{
		return UInterpTrackInstColorProp::StaticClass();
	}
	UClass* Z_Construct_UClass_UInterpTrackInstColorProp()
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
				{ "IncludePath", "Matinee/InterpTrackInstColorProp.h" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstColorProp.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResetColor_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstColorProp.h" },
				{ "ToolTip", "Saved value for restoring state when exiting Matinee." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResetColor = { UE4CodeGen_Private::EPropertyClass::Struct, "ResetColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UInterpTrackInstColorProp, ResetColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(NewProp_ResetColor_MetaData, ARRAY_COUNT(NewProp_ResetColor_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ResetColor,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UInterpTrackInstColorProp>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UInterpTrackInstColorProp::StaticClass,
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
	IMPLEMENT_CLASS(UInterpTrackInstColorProp, 4259013857);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpTrackInstColorProp(Z_Construct_UClass_UInterpTrackInstColorProp, &UInterpTrackInstColorProp::StaticClass, TEXT("/Script/Engine"), TEXT("UInterpTrackInstColorProp"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackInstColorProp);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
