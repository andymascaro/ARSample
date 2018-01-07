// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/BehaviorTree/Tasks/BTTask_PlayAnimation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_PlayAnimation() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_PlayAnimation_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_PlayAnimation();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimationAsset_NoRegister();
// End Cross Module References
	void UBTTask_PlayAnimation::StaticRegisterNativesUBTTask_PlayAnimation()
	{
	}
	UClass* Z_Construct_UClass_UBTTask_PlayAnimation_NoRegister()
	{
		return UBTTask_PlayAnimation::StaticClass();
	}
	UClass* Z_Construct_UClass_UBTTask_PlayAnimation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "BehaviorTree/Tasks/BTTask_PlayAnimation.h" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_PlayAnimation.h" },
				{ "ToolTip", "Play indicated AnimationAsset on Pawn controlled by BT\nNote that this node is generic and is handing multiple special cases,\nIf you want a more efficient solution you'll need to implement it yourself (or wait for our BTTask_PlayCharacterAnimation)" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedSkelMesh_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_PlayAnimation.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CachedSkelMesh = { UE4CodeGen_Private::EPropertyClass::Object, "CachedSkelMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080008, 1, nullptr, STRUCT_OFFSET(UBTTask_PlayAnimation, CachedSkelMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(NewProp_CachedSkelMesh_MetaData, ARRAY_COUNT(NewProp_CachedSkelMesh_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyOwnerComp_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_PlayAnimation.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyOwnerComp = { UE4CodeGen_Private::EPropertyClass::Object, "MyOwnerComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080008, 1, nullptr, STRUCT_OFFSET(UBTTask_PlayAnimation, MyOwnerComp), Z_Construct_UClass_UBehaviorTreeComponent_NoRegister, METADATA_PARAMS(NewProp_MyOwnerComp_MetaData, ARRAY_COUNT(NewProp_MyOwnerComp_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNonBlocking_MetaData[] = {
				{ "Category", "Node" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_PlayAnimation.h" },
				{ "ToolTip", "if true the task will just trigger the animation and instantly finish. Fire and Forget." },
			};
#endif
			auto NewProp_bNonBlocking_SetBit = [](void* Obj){ ((UBTTask_PlayAnimation*)Obj)->bNonBlocking = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNonBlocking = { UE4CodeGen_Private::EPropertyClass::Bool, "bNonBlocking", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UBTTask_PlayAnimation), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bNonBlocking_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bNonBlocking_MetaData, ARRAY_COUNT(NewProp_bNonBlocking_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLooping_MetaData[] = {
				{ "Category", "Node" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_PlayAnimation.h" },
			};
#endif
			auto NewProp_bLooping_SetBit = [](void* Obj){ ((UBTTask_PlayAnimation*)Obj)->bLooping = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLooping = { UE4CodeGen_Private::EPropertyClass::Bool, "bLooping", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UBTTask_PlayAnimation), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bLooping_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bLooping_MetaData, ARRAY_COUNT(NewProp_bLooping_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationToPlay_MetaData[] = {
				{ "Category", "Node" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_PlayAnimation.h" },
				{ "ToolTip", "Animation asset to play. Note that it needs to match the skeleton of pawn this BT is controlling" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimationToPlay = { UE4CodeGen_Private::EPropertyClass::Object, "AnimationToPlay", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UBTTask_PlayAnimation, AnimationToPlay), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(NewProp_AnimationToPlay_MetaData, ARRAY_COUNT(NewProp_AnimationToPlay_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CachedSkelMesh,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MyOwnerComp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bNonBlocking,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bLooping,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AnimationToPlay,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UBTTask_PlayAnimation>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UBTTask_PlayAnimation::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
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
	IMPLEMENT_CLASS(UBTTask_PlayAnimation, 241171517);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTTask_PlayAnimation(Z_Construct_UClass_UBTTask_PlayAnimation, &UBTTask_PlayAnimation::StaticClass, TEXT("/Script/AIModule"), TEXT("UBTTask_PlayAnimation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_PlayAnimation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
