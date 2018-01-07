// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Matinee/InterpTrackInstVectorProp.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackInstVectorProp() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstVectorProp_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstVectorProp();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstProperty();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void UInterpTrackInstVectorProp::StaticRegisterNativesUInterpTrackInstVectorProp()
	{
	}
	UClass* Z_Construct_UClass_UInterpTrackInstVectorProp_NoRegister()
	{
		return UInterpTrackInstVectorProp::StaticClass();
	}
	UClass* Z_Construct_UClass_UInterpTrackInstVectorProp()
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
				{ "IncludePath", "Matinee/InterpTrackInstVectorProp.h" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstVectorProp.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResetVector_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstVectorProp.h" },
				{ "ToolTip", "Saved value for restoring state when exiting Matinee." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResetVector = { UE4CodeGen_Private::EPropertyClass::Struct, "ResetVector", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UInterpTrackInstVectorProp, ResetVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_ResetVector_MetaData, ARRAY_COUNT(NewProp_ResetVector_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ResetVector,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UInterpTrackInstVectorProp>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UInterpTrackInstVectorProp::StaticClass,
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
	IMPLEMENT_CLASS(UInterpTrackInstVectorProp, 996165341);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpTrackInstVectorProp(Z_Construct_UClass_UInterpTrackInstVectorProp, &UInterpTrackInstVectorProp::StaticClass, TEXT("/Script/Engine"), TEXT("UInterpTrackInstVectorProp"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackInstVectorProp);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
