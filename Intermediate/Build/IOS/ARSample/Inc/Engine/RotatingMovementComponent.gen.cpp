// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/GameFramework/RotatingMovementComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRotatingMovementComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_URotatingMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_URotatingMovementComponent();
	ENGINE_API UClass* Z_Construct_UClass_UMovementComponent();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	void URotatingMovementComponent::StaticRegisterNativesURotatingMovementComponent()
	{
	}
	UClass* Z_Construct_UClass_URotatingMovementComponent_NoRegister()
	{
		return URotatingMovementComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_URotatingMovementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UMovementComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Movement" },
				{ "HideCategories", "Velocity" },
				{ "IncludePath", "GameFramework/RotatingMovementComponent.h" },
				{ "ModuleRelativePath", "Classes/GameFramework/RotatingMovementComponent.h" },
				{ "ToolTip", "Performs continuous rotation of a component at a specific rotation rate.\nRotation can optionally be offset around a pivot point.\nCollision testing is not performed during movement." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRotationInLocalSpace_MetaData[] = {
				{ "Category", "RotatingComponent" },
				{ "ModuleRelativePath", "Classes/GameFramework/RotatingMovementComponent.h" },
				{ "ToolTip", "Whether rotation is applied in local or world space." },
			};
#endif
			auto NewProp_bRotationInLocalSpace_SetBit = [](void* Obj){ ((URotatingMovementComponent*)Obj)->bRotationInLocalSpace = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRotationInLocalSpace = { UE4CodeGen_Private::EPropertyClass::Bool, "bRotationInLocalSpace", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(URotatingMovementComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bRotationInLocalSpace_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bRotationInLocalSpace_MetaData, ARRAY_COUNT(NewProp_bRotationInLocalSpace_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PivotTranslation_MetaData[] = {
				{ "Category", "RotatingComponent" },
				{ "ModuleRelativePath", "Classes/GameFramework/RotatingMovementComponent.h" },
				{ "ToolTip", "Translation of pivot point around which we rotate, relative to current rotation.\nFor instance, with PivotTranslation set to (X=+100, Y=0, Z=0), rotation will occur\naround the point +100 units along the local X axis from the center of the object,\nrather than around the object's origin (the default)." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PivotTranslation = { UE4CodeGen_Private::EPropertyClass::Struct, "PivotTranslation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(URotatingMovementComponent, PivotTranslation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_PivotTranslation_MetaData, ARRAY_COUNT(NewProp_PivotTranslation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationRate_MetaData[] = {
				{ "Category", "RotatingComponent" },
				{ "ModuleRelativePath", "Classes/GameFramework/RotatingMovementComponent.h" },
				{ "ToolTip", "How fast to update roll/pitch/yaw of the component we update." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotationRate = { UE4CodeGen_Private::EPropertyClass::Struct, "RotationRate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(URotatingMovementComponent, RotationRate), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(NewProp_RotationRate_MetaData, ARRAY_COUNT(NewProp_RotationRate_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bRotationInLocalSpace,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PivotTranslation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RotationRate,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<URotatingMovementComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&URotatingMovementComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
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
	IMPLEMENT_CLASS(URotatingMovementComponent, 1865255132);
	static FCompiledInDefer Z_CompiledInDefer_UClass_URotatingMovementComponent(Z_Construct_UClass_URotatingMovementComponent, &URotatingMovementComponent::StaticClass, TEXT("/Script/Engine"), TEXT("URotatingMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URotatingMovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
