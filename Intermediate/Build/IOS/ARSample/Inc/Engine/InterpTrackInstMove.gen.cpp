// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Matinee/InterpTrackInstMove.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackInstMove() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstMove_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstMove();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInst();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void UInterpTrackInstMove::StaticRegisterNativesUInterpTrackInstMove()
	{
	}
	UClass* Z_Construct_UClass_UInterpTrackInstMove_NoRegister()
	{
		return UInterpTrackInstMove::StaticClass();
	}
	UClass* Z_Construct_UClass_UInterpTrackInstMove()
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
				{ "IncludePath", "Matinee/InterpTrackInstMove.h" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstMove.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResetRotation_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstMove.h" },
				{ "ToolTip", "Saved rotation. Used in editor for resetting when quitting Matinee." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResetRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "ResetRotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UInterpTrackInstMove, ResetRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(NewProp_ResetRotation_MetaData, ARRAY_COUNT(NewProp_ResetRotation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResetLocation_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstMove.h" },
				{ "ToolTip", "Saved position. Used in editor for resetting when quitting Matinee." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResetLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "ResetLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UInterpTrackInstMove, ResetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_ResetLocation_MetaData, ARRAY_COUNT(NewProp_ResetLocation_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ResetRotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ResetLocation,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UInterpTrackInstMove>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UInterpTrackInstMove::StaticClass,
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
	IMPLEMENT_CLASS(UInterpTrackInstMove, 2627022283);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpTrackInstMove(Z_Construct_UClass_UInterpTrackInstMove, &UInterpTrackInstMove::StaticClass, TEXT("/Script/Engine"), TEXT("UInterpTrackInstMove"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackInstMove);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
