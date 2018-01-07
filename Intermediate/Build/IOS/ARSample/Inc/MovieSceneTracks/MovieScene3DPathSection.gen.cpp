// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Sections/MovieScene3DPathSection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieScene3DPathSection() {}
// Cross Module References
	MOVIESCENETRACKS_API UEnum* Z_Construct_UEnum_MovieSceneTracks_MovieScene3DPathSection_Axis();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScene3DPathSection_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScene3DPathSection();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScene3DConstraintSection();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRichCurve();
// End Cross Module References
	static UEnum* MovieScene3DPathSection_Axis_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MovieSceneTracks_MovieScene3DPathSection_Axis, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieScene3DPathSection_Axis"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_MovieScene3DPathSection_Axis(MovieScene3DPathSection_Axis_StaticEnum, TEXT("/Script/MovieSceneTracks"), TEXT("MovieScene3DPathSection_Axis"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MovieSceneTracks_MovieScene3DPathSection_Axis_CRC() { return 4238716512U; }
	UEnum* Z_Construct_UEnum_MovieSceneTracks_MovieScene3DPathSection_Axis()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("MovieScene3DPathSection_Axis"), 0, Get_Z_Construct_UEnum_MovieSceneTracks_MovieScene3DPathSection_Axis_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "MovieScene3DPathSection_Axis::X", (int64)MovieScene3DPathSection_Axis::X },
				{ "MovieScene3DPathSection_Axis::Y", (int64)MovieScene3DPathSection_Axis::Y },
				{ "MovieScene3DPathSection_Axis::Z", (int64)MovieScene3DPathSection_Axis::Z },
				{ "MovieScene3DPathSection_Axis::NEG_X", (int64)MovieScene3DPathSection_Axis::NEG_X },
				{ "MovieScene3DPathSection_Axis::NEG_Y", (int64)MovieScene3DPathSection_Axis::NEG_Y },
				{ "MovieScene3DPathSection_Axis::NEG_Z", (int64)MovieScene3DPathSection_Axis::NEG_Z },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Sections/MovieScene3DPathSection.h" },
				{ "NEG_X.DisplayName", "-X" },
				{ "NEG_Y.DisplayName", "-Y" },
				{ "NEG_Z.DisplayName", "-Z" },
				{ "X.DisplayName", "X" },
				{ "Y.DisplayName", "Y" },
				{ "Z.DisplayName", "Z" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MovieSceneTracks,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"MovieScene3DPathSection_Axis",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"MovieScene3DPathSection_Axis",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UMovieScene3DPathSection::StaticRegisterNativesUMovieScene3DPathSection()
	{
	}
	UClass* Z_Construct_UClass_UMovieScene3DPathSection_NoRegister()
	{
		return UMovieScene3DPathSection::StaticClass();
	}
	UClass* Z_Construct_UClass_UMovieScene3DPathSection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UMovieScene3DConstraintSection,
				(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Sections/MovieScene3DPathSection.h" },
				{ "ModuleRelativePath", "Public/Sections/MovieScene3DPathSection.h" },
				{ "ToolTip", "A 3D Path section" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForceUpright_MetaData[] = {
				{ "Category", "Path" },
				{ "ModuleRelativePath", "Public/Sections/MovieScene3DPathSection.h" },
				{ "ToolTip", "Force Upright" },
			};
#endif
			auto NewProp_bForceUpright_SetBit = [](void* Obj){ ((UMovieScene3DPathSection*)Obj)->bForceUpright = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceUpright = { UE4CodeGen_Private::EPropertyClass::Bool, "bForceUpright", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMovieScene3DPathSection), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bForceUpright_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bForceUpright_MetaData, ARRAY_COUNT(NewProp_bForceUpright_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReverse_MetaData[] = {
				{ "Category", "Path" },
				{ "ModuleRelativePath", "Public/Sections/MovieScene3DPathSection.h" },
				{ "ToolTip", "Reverse Timing" },
			};
#endif
			auto NewProp_bReverse_SetBit = [](void* Obj){ ((UMovieScene3DPathSection*)Obj)->bReverse = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReverse = { UE4CodeGen_Private::EPropertyClass::Bool, "bReverse", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMovieScene3DPathSection), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bReverse_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bReverse_MetaData, ARRAY_COUNT(NewProp_bReverse_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFollow_MetaData[] = {
				{ "Category", "Path" },
				{ "ModuleRelativePath", "Public/Sections/MovieScene3DPathSection.h" },
				{ "ToolTip", "Follow Curve" },
			};
#endif
			auto NewProp_bFollow_SetBit = [](void* Obj){ ((UMovieScene3DPathSection*)Obj)->bFollow = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFollow = { UE4CodeGen_Private::EPropertyClass::Bool, "bFollow", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMovieScene3DPathSection), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bFollow_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bFollow_MetaData, ARRAY_COUNT(NewProp_bFollow_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpAxisEnum_MetaData[] = {
				{ "Category", "Path" },
				{ "ModuleRelativePath", "Public/Sections/MovieScene3DPathSection.h" },
				{ "ToolTip", "Up Axis" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_UpAxisEnum = { UE4CodeGen_Private::EPropertyClass::Enum, "UpAxisEnum", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(UMovieScene3DPathSection, UpAxisEnum), Z_Construct_UEnum_MovieSceneTracks_MovieScene3DPathSection_Axis, METADATA_PARAMS(NewProp_UpAxisEnum_MetaData, ARRAY_COUNT(NewProp_UpAxisEnum_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_UpAxisEnum_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrontAxisEnum_MetaData[] = {
				{ "Category", "Path" },
				{ "ModuleRelativePath", "Public/Sections/MovieScene3DPathSection.h" },
				{ "ToolTip", "Front Axis" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FrontAxisEnum = { UE4CodeGen_Private::EPropertyClass::Enum, "FrontAxisEnum", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(UMovieScene3DPathSection, FrontAxisEnum), Z_Construct_UEnum_MovieSceneTracks_MovieScene3DPathSection_Axis, METADATA_PARAMS(NewProp_FrontAxisEnum_MetaData, ARRAY_COUNT(NewProp_FrontAxisEnum_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_FrontAxisEnum_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimingCurve_MetaData[] = {
				{ "Category", "Path" },
				{ "ModuleRelativePath", "Public/Sections/MovieScene3DPathSection.h" },
				{ "ToolTip", "Timing Curve" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TimingCurve = { UE4CodeGen_Private::EPropertyClass::Struct, "TimingCurve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(UMovieScene3DPathSection, TimingCurve), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(NewProp_TimingCurve_MetaData, ARRAY_COUNT(NewProp_TimingCurve_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bForceUpright,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bReverse,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bFollow,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UpAxisEnum,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UpAxisEnum_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FrontAxisEnum,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FrontAxisEnum_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TimingCurve,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMovieScene3DPathSection>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMovieScene3DPathSection::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00280080u,
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
	IMPLEMENT_CLASS(UMovieScene3DPathSection, 3673983836);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieScene3DPathSection(Z_Construct_UClass_UMovieScene3DPathSection, &UMovieScene3DPathSection::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieScene3DPathSection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieScene3DPathSection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
