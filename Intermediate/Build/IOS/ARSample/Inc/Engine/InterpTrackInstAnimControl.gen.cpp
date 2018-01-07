// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Matinee/InterpTrackInstAnimControl.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackInstAnimControl() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstAnimControl_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstAnimControl();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInst();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void UInterpTrackInstAnimControl::StaticRegisterNativesUInterpTrackInstAnimControl()
	{
	}
	UClass* Z_Construct_UClass_UInterpTrackInstAnimControl_NoRegister()
	{
		return UInterpTrackInstAnimControl::StaticClass();
	}
	UClass* Z_Construct_UClass_UInterpTrackInstAnimControl()
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
				{ "IncludePath", "Matinee/InterpTrackInstAnimControl.h" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstAnimControl.h" },
			};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitRotation_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstAnimControl.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InitRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "InitRotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800002000, 1, nullptr, STRUCT_OFFSET(UInterpTrackInstAnimControl, InitRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(NewProp_InitRotation_MetaData, ARRAY_COUNT(NewProp_InitRotation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitPosition_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstAnimControl.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InitPosition = { UE4CodeGen_Private::EPropertyClass::Struct, "InitPosition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800002000, 1, nullptr, STRUCT_OFFSET(UInterpTrackInstAnimControl, InitPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_InitPosition_MetaData, ARRAY_COUNT(NewProp_InitPosition_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastUpdatePosition_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstAnimControl.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LastUpdatePosition = { UE4CodeGen_Private::EPropertyClass::Float, "LastUpdatePosition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, STRUCT_OFFSET(UInterpTrackInstAnimControl, LastUpdatePosition), METADATA_PARAMS(NewProp_LastUpdatePosition_MetaData, ARRAY_COUNT(NewProp_LastUpdatePosition_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InitRotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InitPosition,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LastUpdatePosition,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UInterpTrackInstAnimControl>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UInterpTrackInstAnimControl::StaticClass,
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
	IMPLEMENT_CLASS(UInterpTrackInstAnimControl, 1819090571);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpTrackInstAnimControl(Z_Construct_UClass_UInterpTrackInstAnimControl, &UInterpTrackInstAnimControl::StaticClass, TEXT("/Script/Engine"), TEXT("UInterpTrackInstAnimControl"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackInstAnimControl);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
