// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/PhysicsEngine/RadialForceComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRadialForceComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_URadialForceComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_URadialForceComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_URadialForceComponent_AddObjectTypeToAffect();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
	ENGINE_API UFunction* Z_Construct_UFunction_URadialForceComponent_FireImpulse();
	ENGINE_API UFunction* Z_Construct_UFunction_URadialForceComponent_RemoveObjectTypeToAffect();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERadialImpulseFalloff();
// End Cross Module References
	void URadialForceComponent::StaticRegisterNativesURadialForceComponent()
	{
		UClass* Class = URadialForceComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddObjectTypeToAffect", (Native)&URadialForceComponent::execAddObjectTypeToAffect },
			{ "FireImpulse", (Native)&URadialForceComponent::execFireImpulse },
			{ "RemoveObjectTypeToAffect", (Native)&URadialForceComponent::execRemoveObjectTypeToAffect },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_URadialForceComponent_AddObjectTypeToAffect()
	{
		struct RadialForceComponent_eventAddObjectTypeToAffect_Parms
		{
			TEnumAsByte<EObjectTypeQuery> ObjectType;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ObjectType = { UE4CodeGen_Private::EPropertyClass::Byte, "ObjectType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(RadialForceComponent_eventAddObjectTypeToAffect_Parms, ObjectType), Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ObjectType,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Physics|Components|RadialForce" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/RadialForceComponent.h" },
				{ "ToolTip", "Add an object type for this radial force to affect" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_URadialForceComponent, "AddObjectTypeToAffect", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(RadialForceComponent_eventAddObjectTypeToAffect_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_URadialForceComponent_FireImpulse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Physics|Components|RadialForce" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/RadialForceComponent.h" },
				{ "ToolTip", "Fire a single impulse" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_URadialForceComponent, "FireImpulse", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_URadialForceComponent_RemoveObjectTypeToAffect()
	{
		struct RadialForceComponent_eventRemoveObjectTypeToAffect_Parms
		{
			TEnumAsByte<EObjectTypeQuery> ObjectType;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ObjectType = { UE4CodeGen_Private::EPropertyClass::Byte, "ObjectType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(RadialForceComponent_eventRemoveObjectTypeToAffect_Parms, ObjectType), Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ObjectType,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Physics|Components|RadialForce" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/RadialForceComponent.h" },
				{ "ToolTip", "Remove an object type that is affected by this radial force" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_URadialForceComponent, "RemoveObjectTypeToAffect", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(RadialForceComponent_eventRemoveObjectTypeToAffect_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URadialForceComponent_NoRegister()
	{
		return URadialForceComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_URadialForceComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_USceneComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_URadialForceComponent_AddObjectTypeToAffect, "AddObjectTypeToAffect" }, // 3695922833
				{ &Z_Construct_UFunction_URadialForceComponent_FireImpulse, "FireImpulse" }, // 299349427
				{ &Z_Construct_UFunction_URadialForceComponent_RemoveObjectTypeToAffect, "RemoveObjectTypeToAffect" }, // 543536316
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Physics" },
				{ "HideCategories", "Object Mobility LOD Physics PhysicsVolume" },
				{ "IncludePath", "PhysicsEngine/RadialForceComponent.h" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/RadialForceComponent.h" },
				{ "ToolTip", "Used to emit a radial force or impulse that can affect physics objects and or destructible objects." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectTypesToAffect_MetaData[] = {
				{ "Category", "RadialForceComponent" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/RadialForceComponent.h" },
				{ "ToolTip", "The object types that are affected by this radial force" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ObjectTypesToAffect = { UE4CodeGen_Private::EPropertyClass::Array, "ObjectTypesToAffect", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, STRUCT_OFFSET(URadialForceComponent, ObjectTypesToAffect), METADATA_PARAMS(NewProp_ObjectTypesToAffect_MetaData, ARRAY_COUNT(NewProp_ObjectTypesToAffect_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ObjectTypesToAffect_Inner = { UE4CodeGen_Private::EPropertyClass::Byte, "ObjectTypesToAffect", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestructibleDamage_MetaData[] = {
				{ "Category", "Destructible" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/RadialForceComponent.h" },
				{ "ToolTip", "If > 0.f, will cause damage to destructible meshes as well" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DestructibleDamage = { UE4CodeGen_Private::EPropertyClass::Float, "DestructibleDamage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(URadialForceComponent, DestructibleDamage), METADATA_PARAMS(NewProp_DestructibleDamage_MetaData, ARRAY_COUNT(NewProp_DestructibleDamage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForceStrength_MetaData[] = {
				{ "Category", "Force" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/RadialForceComponent.h" },
				{ "ToolTip", "How strong the force should be" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ForceStrength = { UE4CodeGen_Private::EPropertyClass::Float, "ForceStrength", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(URadialForceComponent, ForceStrength), METADATA_PARAMS(NewProp_ForceStrength_MetaData, ARRAY_COUNT(NewProp_ForceStrength_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnoreOwningActor_MetaData[] = {
				{ "Category", "Impulse" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/RadialForceComponent.h" },
				{ "ToolTip", "If true, do not apply force/impulse to any physics objects that are part of the Actor that owns this component." },
			};
#endif
			auto NewProp_bIgnoreOwningActor_SetBit = [](void* Obj){ ((URadialForceComponent*)Obj)->bIgnoreOwningActor = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreOwningActor = { UE4CodeGen_Private::EPropertyClass::Bool, "bIgnoreOwningActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(URadialForceComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIgnoreOwningActor_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIgnoreOwningActor_MetaData, ARRAY_COUNT(NewProp_bIgnoreOwningActor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bImpulseVelChange_MetaData[] = {
				{ "Category", "Impulse" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/RadialForceComponent.h" },
				{ "ToolTip", "If true, the impulse will ignore mass of objects and will always result in a fixed velocity change" },
			};
#endif
			auto NewProp_bImpulseVelChange_SetBit = [](void* Obj){ ((URadialForceComponent*)Obj)->bImpulseVelChange = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bImpulseVelChange = { UE4CodeGen_Private::EPropertyClass::Bool, "bImpulseVelChange", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(URadialForceComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bImpulseVelChange_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bImpulseVelChange_MetaData, ARRAY_COUNT(NewProp_bImpulseVelChange_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpulseStrength_MetaData[] = {
				{ "Category", "Impulse" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/RadialForceComponent.h" },
				{ "ToolTip", "How strong the impulse should be" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ImpulseStrength = { UE4CodeGen_Private::EPropertyClass::Float, "ImpulseStrength", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(URadialForceComponent, ImpulseStrength), METADATA_PARAMS(NewProp_ImpulseStrength_MetaData, ARRAY_COUNT(NewProp_ImpulseStrength_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Falloff_MetaData[] = {
				{ "Category", "RadialForceComponent" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/RadialForceComponent.h" },
				{ "ToolTip", "How the force or impulse should fall off as object are further away from the center" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Falloff = { UE4CodeGen_Private::EPropertyClass::Byte, "Falloff", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(URadialForceComponent, Falloff), Z_Construct_UEnum_Engine_ERadialImpulseFalloff, METADATA_PARAMS(NewProp_Falloff_MetaData, ARRAY_COUNT(NewProp_Falloff_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
				{ "Category", "RadialForceComponent" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/RadialForceComponent.h" },
				{ "ToolTip", "The radius to apply the force or impulse in" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius = { UE4CodeGen_Private::EPropertyClass::Float, "Radius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000200000005, 1, nullptr, STRUCT_OFFSET(URadialForceComponent, Radius), METADATA_PARAMS(NewProp_Radius_MetaData, ARRAY_COUNT(NewProp_Radius_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ObjectTypesToAffect,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ObjectTypesToAffect_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DestructibleDamage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ForceStrength,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIgnoreOwningActor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bImpulseVelChange,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ImpulseStrength,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Falloff,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Radius,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<URadialForceComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&URadialForceComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(URadialForceComponent, 2077697396);
	static FCompiledInDefer Z_CompiledInDefer_UClass_URadialForceComponent(Z_Construct_UClass_URadialForceComponent, &URadialForceComponent::StaticClass, TEXT("/Script/Engine"), TEXT("URadialForceComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URadialForceComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
