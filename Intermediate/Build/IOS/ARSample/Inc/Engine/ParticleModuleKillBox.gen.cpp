// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Particles/Kill/ParticleModuleKillBox.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleKillBox() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleKillBox_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleKillBox();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleKillBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
// End Cross Module References
	void UParticleModuleKillBox::StaticRegisterNativesUParticleModuleKillBox()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleKillBox_NoRegister()
	{
		return UParticleModuleKillBox::StaticClass();
	}
	UClass* Z_Construct_UClass_UParticleModuleKillBox()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UParticleModuleKillBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "Kill Box" },
				{ "HideCategories", "Object Object Object" },
				{ "IncludePath", "Particles/Kill/ParticleModuleKillBox.h" },
				{ "ModuleRelativePath", "Classes/Particles/Kill/ParticleModuleKillBox.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAxisAlignedAndFixedSize_MetaData[] = {
				{ "Category", "Kill" },
				{ "ModuleRelativePath", "Classes/Particles/Kill/ParticleModuleKillBox.h" },
				{ "ToolTip", "If true, the box will always be axis aligned and non-scalable." },
			};
#endif
			auto NewProp_bAxisAlignedAndFixedSize_SetBit = [](void* Obj){ ((UParticleModuleKillBox*)Obj)->bAxisAlignedAndFixedSize = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAxisAlignedAndFixedSize = { UE4CodeGen_Private::EPropertyClass::Bool, "bAxisAlignedAndFixedSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleKillBox), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAxisAlignedAndFixedSize_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAxisAlignedAndFixedSize_MetaData, ARRAY_COUNT(NewProp_bAxisAlignedAndFixedSize_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bKillInside_MetaData[] = {
				{ "Category", "Kill" },
				{ "ModuleRelativePath", "Classes/Particles/Kill/ParticleModuleKillBox.h" },
				{ "ToolTip", "If true, particles INSIDE the box will be killed.\nIf false (the default), particles OUTSIDE the box will be killed." },
			};
#endif
			auto NewProp_bKillInside_SetBit = [](void* Obj){ ((UParticleModuleKillBox*)Obj)->bKillInside = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bKillInside = { UE4CodeGen_Private::EPropertyClass::Bool, "bKillInside", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleKillBox), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bKillInside_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bKillInside_MetaData, ARRAY_COUNT(NewProp_bKillInside_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAbsolute_MetaData[] = {
				{ "Category", "Kill" },
				{ "ModuleRelativePath", "Classes/Particles/Kill/ParticleModuleKillBox.h" },
				{ "ToolTip", "If true, the box coordinates are in world space./" },
			};
#endif
			auto NewProp_bAbsolute_SetBit = [](void* Obj){ ((UParticleModuleKillBox*)Obj)->bAbsolute = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAbsolute = { UE4CodeGen_Private::EPropertyClass::Bool, "bAbsolute", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleKillBox), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAbsolute_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAbsolute_MetaData, ARRAY_COUNT(NewProp_bAbsolute_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpperRightCorner_MetaData[] = {
				{ "Category", "Kill" },
				{ "ModuleRelativePath", "Classes/Particles/Kill/ParticleModuleKillBox.h" },
				{ "ToolTip", "The upper right corner of the box." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_UpperRightCorner = { UE4CodeGen_Private::EPropertyClass::Struct, "UpperRightCorner", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleKillBox, UpperRightCorner), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(NewProp_UpperRightCorner_MetaData, ARRAY_COUNT(NewProp_UpperRightCorner_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LowerLeftCorner_MetaData[] = {
				{ "Category", "Kill" },
				{ "ModuleRelativePath", "Classes/Particles/Kill/ParticleModuleKillBox.h" },
				{ "ToolTip", "The lower left corner of the box." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LowerLeftCorner = { UE4CodeGen_Private::EPropertyClass::Struct, "LowerLeftCorner", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleKillBox, LowerLeftCorner), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(NewProp_LowerLeftCorner_MetaData, ARRAY_COUNT(NewProp_LowerLeftCorner_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAxisAlignedAndFixedSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bKillInside,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAbsolute,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UpperRightCorner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LowerLeftCorner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UParticleModuleKillBox>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UParticleModuleKillBox::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00801080u,
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
	IMPLEMENT_CLASS(UParticleModuleKillBox, 4185257111);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleKillBox(Z_Construct_UClass_UParticleModuleKillBox, &UParticleModuleKillBox::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleKillBox"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleKillBox);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
