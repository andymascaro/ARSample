// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/BlendableInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlendableInterface() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBlendableLocation();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UBlendableInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlendableInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
// End Cross Module References
	static UEnum* EBlendableLocation_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EBlendableLocation, Z_Construct_UPackage__Script_Engine(), TEXT("EBlendableLocation"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBlendableLocation(EBlendableLocation_StaticEnum, TEXT("/Script/Engine"), TEXT("EBlendableLocation"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EBlendableLocation_CRC() { return 1952010795U; }
	UEnum* Z_Construct_UEnum_Engine_EBlendableLocation()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBlendableLocation"), 0, Get_Z_Construct_UEnum_Engine_EBlendableLocation_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "BL_AfterTonemapping", (int64)BL_AfterTonemapping },
				{ "BL_BeforeTonemapping", (int64)BL_BeforeTonemapping },
				{ "BL_BeforeTranslucency", (int64)BL_BeforeTranslucency },
				{ "BL_ReplacingTonemapper", (int64)BL_ReplacingTonemapper },
				{ "BL_MAX", (int64)BL_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BL_AfterTonemapping.DisplayName", "After Tonemapping" },
				{ "BL_AfterTonemapping.ToolTip", "Input0:former pass color, Input1:SeparateTranslucency." },
				{ "BL_BeforeTonemapping.DisplayName", "Before Tonemapping" },
				{ "BL_BeforeTonemapping.ToolTip", "Input0:former pass color, Input1:SeparateTranslucency." },
				{ "BL_BeforeTranslucency.DisplayName", "Before Translucency" },
				{ "BL_BeforeTranslucency.ToolTip", "Input0:former pass color, Input1:SeparateTranslucency." },
				{ "BL_MAX.ToolTip", "BL_AfterOpaque,\nBL_AfterFog,\nBL_AfterTranslucency,\nBL_AfterPostProcessAA," },
				{ "BL_ReplacingTonemapper.DisplayName", "Replacing the Tonemapper" },
				{ "BL_ReplacingTonemapper.ToolTip", "Input0:former pass color, Input1:SeparateTranslucency, Input2: BloomOutput\nvector parameters: Engine.FilmWhitePoint\nscalar parameters: Engine.FilmSaturation, Engine.FilmContrast" },
				{ "ModuleRelativePath", "Classes/Engine/BlendableInterface.h" },
				{ "ToolTip", "Where to place a material node in the post processing graph." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EBlendableLocation",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EBlendableLocation",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UBlendableInterface::StaticRegisterNativesUBlendableInterface()
	{
	}
	UClass* Z_Construct_UClass_UBlendableInterface_NoRegister()
	{
		return UBlendableInterface::StaticClass();
	}
	UClass* Z_Construct_UClass_UBlendableInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UInterface,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/BlendableInterface.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<IBlendableInterface>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UBlendableInterface::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00104081u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBlendableInterface, 477610228);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlendableInterface(Z_Construct_UClass_UBlendableInterface, &UBlendableInterface::StaticClass, TEXT("/Script/Engine"), TEXT("UBlendableInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlendableInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
