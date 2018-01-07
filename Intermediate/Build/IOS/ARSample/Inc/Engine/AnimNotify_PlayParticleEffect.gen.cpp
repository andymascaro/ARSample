// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Animation/AnimNotifies/AnimNotify_PlayParticleEffect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotify_PlayParticleEffect() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify_PlayParticleEffect_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify_PlayParticleEffect();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
// End Cross Module References
	void UAnimNotify_PlayParticleEffect::StaticRegisterNativesUAnimNotify_PlayParticleEffect()
	{
	}
	UClass* Z_Construct_UClass_UAnimNotify_PlayParticleEffect_NoRegister()
	{
		return UAnimNotify_PlayParticleEffect::StaticClass();
	}
	UClass* Z_Construct_UClass_UAnimNotify_PlayParticleEffect()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UAnimNotify,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "Play Particle Effect" },
				{ "HideCategories", "Object Object" },
				{ "IncludePath", "Animation/AnimNotifies/AnimNotify_PlayParticleEffect.h" },
				{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotify_PlayParticleEffect.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SocketName_MetaData[] = {
				{ "Category", "AnimNotify" },
				{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotify_PlayParticleEffect.h" },
				{ "ToolTip", "SocketName to attach to" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_SocketName = { UE4CodeGen_Private::EPropertyClass::Name, "SocketName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UAnimNotify_PlayParticleEffect, SocketName), METADATA_PARAMS(NewProp_SocketName_MetaData, ARRAY_COUNT(NewProp_SocketName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attached_MetaData[] = {
				{ "Category", "AnimNotify" },
				{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotify_PlayParticleEffect.h" },
				{ "ToolTip", "Should attach to the bone/socket" },
			};
#endif
			auto NewProp_Attached_SetBit = [](void* Obj){ ((UAnimNotify_PlayParticleEffect*)Obj)->Attached = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Attached = { UE4CodeGen_Private::EPropertyClass::Bool, "Attached", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UAnimNotify_PlayParticleEffect), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_Attached_SetBit)>::SetBit, METADATA_PARAMS(NewProp_Attached_MetaData, ARRAY_COUNT(NewProp_Attached_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
				{ "Category", "AnimNotify" },
				{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotify_PlayParticleEffect.h" },
				{ "ToolTip", "Scale to spawn the particle system at" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Scale = { UE4CodeGen_Private::EPropertyClass::Struct, "Scale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000011, 1, nullptr, STRUCT_OFFSET(UAnimNotify_PlayParticleEffect, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_Scale_MetaData, ARRAY_COUNT(NewProp_Scale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationOffset_MetaData[] = {
				{ "Category", "AnimNotify" },
				{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotify_PlayParticleEffect.h" },
				{ "ToolTip", "Rotation offset from socket" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotationOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "RotationOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UAnimNotify_PlayParticleEffect, RotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(NewProp_RotationOffset_MetaData, ARRAY_COUNT(NewProp_RotationOffset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocationOffset_MetaData[] = {
				{ "Category", "AnimNotify" },
				{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotify_PlayParticleEffect.h" },
				{ "ToolTip", "Location offset from the socket" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocationOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "LocationOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UAnimNotify_PlayParticleEffect, LocationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_LocationOffset_MetaData, ARRAY_COUNT(NewProp_LocationOffset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PSTemplate_MetaData[] = {
				{ "Category", "AnimNotify" },
				{ "DisplayName", "Particle System" },
				{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotify_PlayParticleEffect.h" },
				{ "ToolTip", "Particle System to Spawn" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PSTemplate = { UE4CodeGen_Private::EPropertyClass::Object, "PSTemplate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UAnimNotify_PlayParticleEffect, PSTemplate), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(NewProp_PSTemplate_MetaData, ARRAY_COUNT(NewProp_PSTemplate_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SocketName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Attached,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Scale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RotationOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LocationOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PSTemplate,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAnimNotify_PlayParticleEffect>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAnimNotify_PlayParticleEffect::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00112080u,
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
	IMPLEMENT_CLASS(UAnimNotify_PlayParticleEffect, 1270984847);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimNotify_PlayParticleEffect(Z_Construct_UClass_UAnimNotify_PlayParticleEffect, &UAnimNotify_PlayParticleEffect::StaticClass, TEXT("/Script/Engine"), TEXT("UAnimNotify_PlayParticleEffect"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotify_PlayParticleEffect);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
