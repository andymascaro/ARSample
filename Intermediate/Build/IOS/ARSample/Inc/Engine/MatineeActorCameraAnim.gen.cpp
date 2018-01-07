// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Matinee/MatineeActorCameraAnim.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMatineeActorCameraAnim() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AMatineeActorCameraAnim_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AMatineeActorCameraAnim();
	ENGINE_API UClass* Z_Construct_UClass_AMatineeActor();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UCameraAnim_NoRegister();
// End Cross Module References
	void AMatineeActorCameraAnim::StaticRegisterNativesAMatineeActorCameraAnim()
	{
	}
	UClass* Z_Construct_UClass_AMatineeActorCameraAnim_NoRegister()
	{
		return AMatineeActorCameraAnim::StaticClass();
	}
	UClass* Z_Construct_UClass_AMatineeActorCameraAnim()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AMatineeActor,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Collision Game Input" },
				{ "IncludePath", "Matinee/MatineeActorCameraAnim.h" },
				{ "IsBlueprintBase", "false" },
				{ "ModuleRelativePath", "Classes/Matinee/MatineeActorCameraAnim.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput Game|Damage" },
				{ "ToolTip", "Actor used to control temporary matinees for camera anims that only exist in the editor" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraAnim_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/MatineeActorCameraAnim.h" },
				{ "ToolTip", "The camera anim we are editing" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraAnim = { UE4CodeGen_Private::EPropertyClass::Object, "CameraAnim", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, STRUCT_OFFSET(AMatineeActorCameraAnim, CameraAnim), Z_Construct_UClass_UCameraAnim_NoRegister, METADATA_PARAMS(NewProp_CameraAnim_MetaData, ARRAY_COUNT(NewProp_CameraAnim_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CameraAnim,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AMatineeActorCameraAnim>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AMatineeActorCameraAnim::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880280u,
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
	IMPLEMENT_CLASS(AMatineeActorCameraAnim, 1671940695);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMatineeActorCameraAnim(Z_Construct_UClass_AMatineeActorCameraAnim, &AMatineeActorCameraAnim::StaticClass, TEXT("/Script/Engine"), TEXT("AMatineeActorCameraAnim"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMatineeActorCameraAnim);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
