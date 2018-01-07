// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Animation/AnimNotifies/AnimNotifyState_TimedParticleEffect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotifyState_TimedParticleEffect() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState_TimedParticleEffect_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState_TimedParticleEffect();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void UAnimNotifyState_TimedParticleEffect::StaticRegisterNativesUAnimNotifyState_TimedParticleEffect()
	{
	}
	UClass* Z_Construct_UClass_UAnimNotifyState_TimedParticleEffect_NoRegister()
	{
		return UAnimNotifyState_TimedParticleEffect::StaticClass();
	}
	UClass* Z_Construct_UClass_UAnimNotifyState_TimedParticleEffect()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "DisplayName", "Timed Particle Effect" },
				{ "HideCategories", "Object" },
				{ "IncludePath", "Animation/AnimNotifies/AnimNotifyState_TimedParticleEffect.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotifyState_TimedParticleEffect.h" },
				{ "ToolTip", "Timed Particle Effect Notify\nAllows a looping particle effect to be played in an animation that will activate\nat the beginning of the notify and deactivate at the end." },
			};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousSocketNames_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotifyState_TimedParticleEffect.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PreviousSocketNames = { UE4CodeGen_Private::EPropertyClass::Array, "PreviousSocketNames", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800002010, 1, nullptr, STRUCT_OFFSET(UAnimNotifyState_TimedParticleEffect, PreviousSocketNames), METADATA_PARAMS(NewProp_PreviousSocketNames_MetaData, ARRAY_COUNT(NewProp_PreviousSocketNames_MetaData)) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_PreviousSocketNames_Inner = { UE4CodeGen_Private::EPropertyClass::Name, "PreviousSocketNames", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000800000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousPSTemplates_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotifyState_TimedParticleEffect.h" },
				{ "ToolTip", "The following arrays are used to handle property changes during a state. Because we can't\nstore any stateful data here we can't know which emitter is ours. The best metric we have\nis an emitter on our Mesh Component with the same template and socket name we have defined.\nBecause these can change at any time we need to track previous versions when we are in an\neditor build. Refactor when stateful data is possible, tracking our component instead." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PreviousPSTemplates = { UE4CodeGen_Private::EPropertyClass::Array, "PreviousPSTemplates", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800002010, 1, nullptr, STRUCT_OFFSET(UAnimNotifyState_TimedParticleEffect, PreviousPSTemplates), METADATA_PARAMS(NewProp_PreviousPSTemplates_MetaData, ARRAY_COUNT(NewProp_PreviousPSTemplates_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviousPSTemplates_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "PreviousPSTemplates", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000800000000, 1, nullptr, 0, Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDestroyAtEnd_MetaData[] = {
				{ "Category", "ParticleSystem" },
				{ "DisplayName", "Destroy Immediately" },
				{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotifyState_TimedParticleEffect.h" },
				{ "ToolTip", "Whether the particle system should be immediately destroyed at the end of the notify state or be allowed to finish" },
			};
#endif
			auto NewProp_bDestroyAtEnd_SetBit = [](void* Obj){ ((UAnimNotifyState_TimedParticleEffect*)Obj)->bDestroyAtEnd = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDestroyAtEnd = { UE4CodeGen_Private::EPropertyClass::Bool, "bDestroyAtEnd", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000011, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAnimNotifyState_TimedParticleEffect), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDestroyAtEnd_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDestroyAtEnd_MetaData, ARRAY_COUNT(NewProp_bDestroyAtEnd_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationOffset_MetaData[] = {
				{ "Category", "ParticleSystem" },
				{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotifyState_TimedParticleEffect.h" },
				{ "ToolTip", "Rotation offset from the socket or bone for the particle system" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotationOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "RotationOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000011, 1, nullptr, STRUCT_OFFSET(UAnimNotifyState_TimedParticleEffect, RotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(NewProp_RotationOffset_MetaData, ARRAY_COUNT(NewProp_RotationOffset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocationOffset_MetaData[] = {
				{ "Category", "ParticleSystem" },
				{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotifyState_TimedParticleEffect.h" },
				{ "ToolTip", "Offset from the socket or bone to place the particle system" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocationOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "LocationOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000011, 1, nullptr, STRUCT_OFFSET(UAnimNotifyState_TimedParticleEffect, LocationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_LocationOffset_MetaData, ARRAY_COUNT(NewProp_LocationOffset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SocketName_MetaData[] = {
				{ "Category", "ParticleSystem" },
				{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotifyState_TimedParticleEffect.h" },
				{ "ToolTip", "The socket or bone to attach the system to" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_SocketName = { UE4CodeGen_Private::EPropertyClass::Name, "SocketName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000011, 1, nullptr, STRUCT_OFFSET(UAnimNotifyState_TimedParticleEffect, SocketName), METADATA_PARAMS(NewProp_SocketName_MetaData, ARRAY_COUNT(NewProp_SocketName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PSTemplate_MetaData[] = {
				{ "Category", "ParticleSystem" },
				{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotifyState_TimedParticleEffect.h" },
				{ "ToolTip", "The particle system to spawn for the notify state" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PSTemplate = { UE4CodeGen_Private::EPropertyClass::Object, "PSTemplate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000011, 1, nullptr, STRUCT_OFFSET(UAnimNotifyState_TimedParticleEffect, PSTemplate), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(NewProp_PSTemplate_MetaData, ARRAY_COUNT(NewProp_PSTemplate_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PreviousSocketNames,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PreviousSocketNames_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PreviousPSTemplates,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PreviousPSTemplates_Inner,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDestroyAtEnd,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RotationOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LocationOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SocketName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PSTemplate,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAnimNotifyState_TimedParticleEffect>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAnimNotifyState_TimedParticleEffect::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00093080u,
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
	IMPLEMENT_CLASS(UAnimNotifyState_TimedParticleEffect, 3185863373);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimNotifyState_TimedParticleEffect(Z_Construct_UClass_UAnimNotifyState_TimedParticleEffect, &UAnimNotifyState_TimedParticleEffect::StaticClass, TEXT("/Script/Engine"), TEXT("UAnimNotifyState_TimedParticleEffect"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotifyState_TimedParticleEffect);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
