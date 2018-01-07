// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Particles/SubUV/ParticleModuleSubUV.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleSubUV() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSubUV_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSubUV();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSubUVBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
	ENGINE_API UClass* Z_Construct_UClass_USubUVAnimation_NoRegister();
// End Cross Module References
	void UParticleModuleSubUV::StaticRegisterNativesUParticleModuleSubUV()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleSubUV_NoRegister()
	{
		return UParticleModuleSubUV::StaticClass();
	}
	UClass* Z_Construct_UClass_UParticleModuleSubUV()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UParticleModuleSubUVBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "SubImage Index" },
				{ "HideCategories", "Object Object Object" },
				{ "IncludePath", "Particles/SubUV/ParticleModuleSubUV.h" },
				{ "ModuleRelativePath", "Classes/Particles/SubUV/ParticleModuleSubUV.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseRealTime_MetaData[] = {
				{ "Category", "Realtime" },
				{ "ModuleRelativePath", "Classes/Particles/SubUV/ParticleModuleSubUV.h" },
				{ "ToolTip", "If true, use *real* time when updating the image index.\nThe movie will update regardless of the slomo settings of the game." },
			};
#endif
			auto NewProp_bUseRealTime_SetBit = [](void* Obj){ ((UParticleModuleSubUV*)Obj)->bUseRealTime = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseRealTime = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseRealTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleSubUV), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseRealTime_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseRealTime_MetaData, ARRAY_COUNT(NewProp_bUseRealTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubImageIndex_MetaData[] = {
				{ "Category", "SubUV" },
				{ "ModuleRelativePath", "Classes/Particles/SubUV/ParticleModuleSubUV.h" },
				{ "ToolTip", "The index of the sub-image that should be used for the particle.\nThe value is retrieved using the RelativeTime of the particles." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SubImageIndex = { UE4CodeGen_Private::EPropertyClass::Struct, "SubImageIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleSubUV, SubImageIndex), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(NewProp_SubImageIndex_MetaData, ARRAY_COUNT(NewProp_SubImageIndex_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Animation_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/SubUV/ParticleModuleSubUV.h" },
				{ "ToolTip", "SubUV animation asset to use.\nWhen specified, optimal bounding geometry for each SubUV frame will be used when rendering the sprites for this emitter instead of full quads.\nThis reduction in overdraw can reduce the GPU cost of rendering the emitter by 2x or 3x, depending on how much unused space was in the texture.\nThe bounding geometry is generated off of the texture alpha setup in the SubUV Animation asset, so that has to match what the material is using for opacity, or clipping will occur.\nWhen specified, SubImages_Horizontal and SubImages_Vertical will come from the asset instead of the Required Module." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Animation = { UE4CodeGen_Private::EPropertyClass::Object, "Animation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UParticleModuleSubUV, Animation), Z_Construct_UClass_USubUVAnimation_NoRegister, METADATA_PARAMS(NewProp_Animation_MetaData, ARRAY_COUNT(NewProp_Animation_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseRealTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SubImageIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Animation,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UParticleModuleSubUV>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UParticleModuleSubUV::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00881080u,
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
	IMPLEMENT_CLASS(UParticleModuleSubUV, 4088263585);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleSubUV(Z_Construct_UClass_UParticleModuleSubUV, &UParticleModuleSubUV::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleSubUV"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleSubUV);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
