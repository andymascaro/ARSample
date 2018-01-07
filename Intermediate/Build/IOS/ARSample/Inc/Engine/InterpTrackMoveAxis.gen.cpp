// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Matinee/InterpTrackMoveAxis.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackMoveAxis() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EInterpMoveAxis();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackMoveAxis_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackMoveAxis();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackFloatBase();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInterpLookupTrack();
// End Cross Module References
	static UEnum* EInterpMoveAxis_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EInterpMoveAxis, Z_Construct_UPackage__Script_Engine(), TEXT("EInterpMoveAxis"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EInterpMoveAxis(EInterpMoveAxis_StaticEnum, TEXT("/Script/Engine"), TEXT("EInterpMoveAxis"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EInterpMoveAxis_CRC() { return 2559686484U; }
	UEnum* Z_Construct_UEnum_Engine_EInterpMoveAxis()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EInterpMoveAxis"), 0, Get_Z_Construct_UEnum_Engine_EInterpMoveAxis_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "AXIS_TranslationX", (int64)AXIS_TranslationX },
				{ "AXIS_TranslationY", (int64)AXIS_TranslationY },
				{ "AXIS_TranslationZ", (int64)AXIS_TranslationZ },
				{ "AXIS_RotationX", (int64)AXIS_RotationX },
				{ "AXIS_RotationY", (int64)AXIS_RotationY },
				{ "AXIS_RotationZ", (int64)AXIS_RotationZ },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackMoveAxis.h" },
				{ "ToolTip", "List of axies this track can use" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EInterpMoveAxis",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EInterpMoveAxis",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UInterpTrackMoveAxis::StaticRegisterNativesUInterpTrackMoveAxis()
	{
	}
	UClass* Z_Construct_UClass_UInterpTrackMoveAxis_NoRegister()
	{
		return UInterpTrackMoveAxis::StaticClass();
	}
	UClass* Z_Construct_UClass_UInterpTrackMoveAxis()
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
				{ "DisplayName", "Move Axis Track" },
				{ "HideCategories", "Object" },
				{ "IncludePath", "Matinee/InterpTrackMoveAxis.h" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackMoveAxis.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LookupTrack_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackMoveAxis.h" },
				{ "ToolTip", "Lookup track to use when looking at different groups for transform information" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LookupTrack = { UE4CodeGen_Private::EPropertyClass::Struct, "LookupTrack", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UInterpTrackMoveAxis, LookupTrack), Z_Construct_UScriptStruct_FInterpLookupTrack, METADATA_PARAMS(NewProp_LookupTrack_MetaData, ARRAY_COUNT(NewProp_LookupTrack_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveAxis_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackMoveAxis.h" },
				{ "ToolTip", "The axis which this track will use when transforming an actor" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_MoveAxis = { UE4CodeGen_Private::EPropertyClass::Byte, "MoveAxis", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UInterpTrackMoveAxis, MoveAxis), Z_Construct_UEnum_Engine_EInterpMoveAxis, METADATA_PARAMS(NewProp_MoveAxis_MetaData, ARRAY_COUNT(NewProp_MoveAxis_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LookupTrack,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MoveAxis,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UInterpTrackMoveAxis>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UInterpTrackMoveAxis::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00082080u,
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
	IMPLEMENT_CLASS(UInterpTrackMoveAxis, 1693316944);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpTrackMoveAxis(Z_Construct_UClass_UInterpTrackMoveAxis, &UInterpTrackMoveAxis::StaticClass, TEXT("/Script/Engine"), TEXT("UInterpTrackMoveAxis"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackMoveAxis);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
