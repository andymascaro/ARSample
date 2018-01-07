// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Particles/SubUV/ParticleModuleSubUVMovie.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleSubUVMovie() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSubUVMovie_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSubUVMovie();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSubUV();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
// End Cross Module References
	void UParticleModuleSubUVMovie::StaticRegisterNativesUParticleModuleSubUVMovie()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleSubUVMovie_NoRegister()
	{
		return UParticleModuleSubUVMovie::StaticClass();
	}
	UClass* Z_Construct_UClass_UParticleModuleSubUVMovie()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UParticleModuleSubUV,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "SubUV Movie" },
				{ "HideCategories", "Object Object Object Object" },
				{ "IncludePath", "Particles/SubUV/ParticleModuleSubUVMovie.h" },
				{ "ModuleRelativePath", "Classes/Particles/SubUV/ParticleModuleSubUVMovie.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartingFrame_MetaData[] = {
				{ "Category", "Flipbook" },
				{ "ModuleRelativePath", "Classes/Particles/SubUV/ParticleModuleSubUVMovie.h" },
				{ "ToolTip", "The starting image index for the SubUV (1 = the first frame).\nAssumes order of Left->Right, Top->Bottom\nIf greater than the last frame, it will clamp to the last one.\nIf 0, then randomly selects a starting frame." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_StartingFrame = { UE4CodeGen_Private::EPropertyClass::Int, "StartingFrame", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleSubUVMovie, StartingFrame), METADATA_PARAMS(NewProp_StartingFrame_MetaData, ARRAY_COUNT(NewProp_StartingFrame_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameRate_MetaData[] = {
				{ "Category", "Flipbook" },
				{ "ModuleRelativePath", "Classes/Particles/SubUV/ParticleModuleSubUVMovie.h" },
				{ "ToolTip", "The frame rate the SubUV images should be 'flipped' thru at." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_FrameRate = { UE4CodeGen_Private::EPropertyClass::Struct, "FrameRate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleSubUVMovie, FrameRate), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(NewProp_FrameRate_MetaData, ARRAY_COUNT(NewProp_FrameRate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseEmitterTime_MetaData[] = {
				{ "Category", "Flipbook" },
				{ "ModuleRelativePath", "Classes/Particles/SubUV/ParticleModuleSubUVMovie.h" },
				{ "ToolTip", "If true, use the emitter time to look up the frame rate.\nIf false (default), use the particle relative time." },
			};
#endif
			auto NewProp_bUseEmitterTime_SetBit = [](void* Obj){ ((UParticleModuleSubUVMovie*)Obj)->bUseEmitterTime = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseEmitterTime = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseEmitterTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleSubUVMovie), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseEmitterTime_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseEmitterTime_MetaData, ARRAY_COUNT(NewProp_bUseEmitterTime_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StartingFrame,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FrameRate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseEmitterTime,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UParticleModuleSubUVMovie>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UParticleModuleSubUVMovie::StaticClass,
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
	IMPLEMENT_CLASS(UParticleModuleSubUVMovie, 3134350788);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleSubUVMovie(Z_Construct_UClass_UParticleModuleSubUVMovie, &UParticleModuleSubUVMovie::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleSubUVMovie"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleSubUVMovie);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
