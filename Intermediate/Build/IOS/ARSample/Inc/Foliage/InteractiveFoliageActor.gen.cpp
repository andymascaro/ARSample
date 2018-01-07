// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/InteractiveFoliageActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractiveFoliageActor() {}
// Cross Module References
	FOLIAGE_API UClass* Z_Construct_UClass_AInteractiveFoliageActor_NoRegister();
	FOLIAGE_API UClass* Z_Construct_UClass_AInteractiveFoliageActor();
	ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor();
	UPackage* Z_Construct_UPackage__Script_Foliage();
	FOLIAGE_API UFunction* Z_Construct_UFunction_AInteractiveFoliageActor_CapsuleTouched();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
// End Cross Module References
	void AInteractiveFoliageActor::StaticRegisterNativesAInteractiveFoliageActor()
	{
		UClass* Class = AInteractiveFoliageActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CapsuleTouched", (Native)&AInteractiveFoliageActor::execCapsuleTouched },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AInteractiveFoliageActor_CapsuleTouched()
	{
		struct InteractiveFoliageActor_eventCapsuleTouched_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* Other;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult OverlapInfo;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlapInfo_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OverlapInfo = { UE4CodeGen_Private::EPropertyClass::Struct, "OverlapInfo", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008008000182, 1, nullptr, STRUCT_OFFSET(InteractiveFoliageActor_eventCapsuleTouched_Parms, OverlapInfo), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(NewProp_OverlapInfo_MetaData, ARRAY_COUNT(NewProp_OverlapInfo_MetaData)) };
			auto NewProp_bFromSweep_SetBit = [](void* Obj){ ((InteractiveFoliageActor_eventCapsuleTouched_Parms*)Obj)->bFromSweep = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep = { UE4CodeGen_Private::EPropertyClass::Bool, "bFromSweep", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(InteractiveFoliageActor_eventCapsuleTouched_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bFromSweep_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex = { UE4CodeGen_Private::EPropertyClass::Int, "OtherBodyIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(InteractiveFoliageActor_eventCapsuleTouched_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp = { UE4CodeGen_Private::EPropertyClass::Object, "OtherComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(InteractiveFoliageActor_eventCapsuleTouched_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_OtherComp_MetaData, ARRAY_COUNT(NewProp_OtherComp_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Other = { UE4CodeGen_Private::EPropertyClass::Object, "Other", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(InteractiveFoliageActor_eventCapsuleTouched_Parms, Other), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp = { UE4CodeGen_Private::EPropertyClass::Object, "OverlappedComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(InteractiveFoliageActor_eventCapsuleTouched_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_OverlappedComp_MetaData, ARRAY_COUNT(NewProp_OverlappedComp_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OverlapInfo,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bFromSweep,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OtherBodyIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OtherComp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Other,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OverlappedComp,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/InteractiveFoliageActor.h" },
				{ "ToolTip", "Called when capsule is touched" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractiveFoliageActor, "CapsuleTouched", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00480401, sizeof(InteractiveFoliageActor_eventCapsuleTouched_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AInteractiveFoliageActor_NoRegister()
	{
		return AInteractiveFoliageActor::StaticClass();
	}
	UClass* Z_Construct_UClass_AInteractiveFoliageActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AStaticMeshActor,
				(UObject* (*)())Z_Construct_UPackage__Script_Foliage,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AInteractiveFoliageActor_CapsuleTouched, "CapsuleTouched" }, // 794404202
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Input" },
				{ "IncludePath", "InteractiveFoliageActor.h" },
				{ "ModuleRelativePath", "Public/InteractiveFoliageActor.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mass_MetaData[] = {
				{ "ModuleRelativePath", "Public/InteractiveFoliageActor.h" },
				{ "ToolTip", "@todo - hook this up     @todo document" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Mass = { UE4CodeGen_Private::EPropertyClass::Float, "Mass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(AInteractiveFoliageActor, Mass), METADATA_PARAMS(NewProp_Mass_MetaData, ARRAY_COUNT(NewProp_Mass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxForce_MetaData[] = {
				{ "Category", "FoliagePhysics" },
				{ "ModuleRelativePath", "Public/InteractiveFoliageActor.h" },
				{ "ToolTip", "Clamps the magnitude of combined forces applied each update." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxForce = { UE4CodeGen_Private::EPropertyClass::Float, "MaxForce", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AInteractiveFoliageActor, MaxForce), METADATA_PARAMS(NewProp_MaxForce_MetaData, ARRAY_COUNT(NewProp_MaxForce_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxTouchImpulse_MetaData[] = {
				{ "Category", "FoliagePhysics" },
				{ "ModuleRelativePath", "Public/InteractiveFoliageActor.h" },
				{ "ToolTip", "Clamps the magnitude of each touch force applied." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxTouchImpulse = { UE4CodeGen_Private::EPropertyClass::Float, "MaxTouchImpulse", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AInteractiveFoliageActor, MaxTouchImpulse), METADATA_PARAMS(NewProp_MaxTouchImpulse_MetaData, ARRAY_COUNT(NewProp_MaxTouchImpulse_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDamageImpulse_MetaData[] = {
				{ "Category", "FoliagePhysics" },
				{ "ModuleRelativePath", "Public/InteractiveFoliageActor.h" },
				{ "ToolTip", "Clamps the magnitude of each damage force applied." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDamageImpulse = { UE4CodeGen_Private::EPropertyClass::Float, "MaxDamageImpulse", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AInteractiveFoliageActor, MaxDamageImpulse), METADATA_PARAMS(NewProp_MaxDamageImpulse_MetaData, ARRAY_COUNT(NewProp_MaxDamageImpulse_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FoliageDamping_MetaData[] = {
				{ "Category", "FoliagePhysics" },
				{ "ModuleRelativePath", "Public/InteractiveFoliageActor.h" },
				{ "ToolTip", "Determines the amount of energy lost by the spring as it oscillates.\nThis force is similar to air friction." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FoliageDamping = { UE4CodeGen_Private::EPropertyClass::Float, "FoliageDamping", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AInteractiveFoliageActor, FoliageDamping), METADATA_PARAMS(NewProp_FoliageDamping_MetaData, ARRAY_COUNT(NewProp_FoliageDamping_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FoliageStiffnessQuadratic_MetaData[] = {
				{ "Category", "FoliagePhysics" },
				{ "ModuleRelativePath", "Public/InteractiveFoliageActor.h" },
				{ "ToolTip", "Same as FoliageStiffness, but the strength of this force increases with the square of the distance to the spring's center.\nThis force is used to prevent the spring from extending past a certain point due to touch and damage forces." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FoliageStiffnessQuadratic = { UE4CodeGen_Private::EPropertyClass::Float, "FoliageStiffnessQuadratic", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AInteractiveFoliageActor, FoliageStiffnessQuadratic), METADATA_PARAMS(NewProp_FoliageStiffnessQuadratic_MetaData, ARRAY_COUNT(NewProp_FoliageStiffnessQuadratic_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FoliageStiffness_MetaData[] = {
				{ "Category", "FoliagePhysics" },
				{ "ModuleRelativePath", "Public/InteractiveFoliageActor.h" },
				{ "ToolTip", "Determines how strong the force that pushes toward the spring's center will be." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FoliageStiffness = { UE4CodeGen_Private::EPropertyClass::Float, "FoliageStiffness", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AInteractiveFoliageActor, FoliageStiffness), METADATA_PARAMS(NewProp_FoliageStiffness_MetaData, ARRAY_COUNT(NewProp_FoliageStiffness_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FoliageTouchImpulseScale_MetaData[] = {
				{ "Category", "FoliagePhysics" },
				{ "ModuleRelativePath", "Public/InteractiveFoliageActor.h" },
				{ "ToolTip", "Scales forces applied from touch events." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FoliageTouchImpulseScale = { UE4CodeGen_Private::EPropertyClass::Float, "FoliageTouchImpulseScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AInteractiveFoliageActor, FoliageTouchImpulseScale), METADATA_PARAMS(NewProp_FoliageTouchImpulseScale_MetaData, ARRAY_COUNT(NewProp_FoliageTouchImpulseScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FoliageDamageImpulseScale_MetaData[] = {
				{ "Category", "FoliagePhysics" },
				{ "ModuleRelativePath", "Public/InteractiveFoliageActor.h" },
				{ "ToolTip", "Scales forces applied from damage events." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FoliageDamageImpulseScale = { UE4CodeGen_Private::EPropertyClass::Float, "FoliageDamageImpulseScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AInteractiveFoliageActor, FoliageDamageImpulseScale), METADATA_PARAMS(NewProp_FoliageDamageImpulseScale_MetaData, ARRAY_COUNT(NewProp_FoliageDamageImpulseScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FoliagePosition_MetaData[] = {
				{ "ModuleRelativePath", "Public/InteractiveFoliageActor.h" },
				{ "ToolTip", "@todo document" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_FoliagePosition = { UE4CodeGen_Private::EPropertyClass::Struct, "FoliagePosition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000002000, 1, nullptr, STRUCT_OFFSET(AInteractiveFoliageActor, FoliagePosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_FoliagePosition_MetaData, ARRAY_COUNT(NewProp_FoliagePosition_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FoliageForce_MetaData[] = {
				{ "ModuleRelativePath", "Public/InteractiveFoliageActor.h" },
				{ "ToolTip", "@todo document" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_FoliageForce = { UE4CodeGen_Private::EPropertyClass::Struct, "FoliageForce", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000002000, 1, nullptr, STRUCT_OFFSET(AInteractiveFoliageActor, FoliageForce), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_FoliageForce_MetaData, ARRAY_COUNT(NewProp_FoliageForce_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FoliageVelocity_MetaData[] = {
				{ "ModuleRelativePath", "Public/InteractiveFoliageActor.h" },
				{ "ToolTip", "Simulated physics state" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_FoliageVelocity = { UE4CodeGen_Private::EPropertyClass::Struct, "FoliageVelocity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000002000, 1, nullptr, STRUCT_OFFSET(AInteractiveFoliageActor, FoliageVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_FoliageVelocity_MetaData, ARRAY_COUNT(NewProp_FoliageVelocity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TouchingActorEntryPosition_MetaData[] = {
				{ "ModuleRelativePath", "Public/InteractiveFoliageActor.h" },
				{ "ToolTip", "Position of the last actor to enter the collision cylinder.\nThis currently does not handle multiple actors affecting the foliage simultaneously." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TouchingActorEntryPosition = { UE4CodeGen_Private::EPropertyClass::Struct, "TouchingActorEntryPosition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000002000, 1, nullptr, STRUCT_OFFSET(AInteractiveFoliageActor, TouchingActorEntryPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_TouchingActorEntryPosition_MetaData, ARRAY_COUNT(NewProp_TouchingActorEntryPosition_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CapsuleComponent_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/InteractiveFoliageActor.h" },
				{ "ToolTip", "Collision cylinder" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CapsuleComponent = { UE4CodeGen_Private::EPropertyClass::Object, "CapsuleComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000080008, 1, nullptr, STRUCT_OFFSET(AInteractiveFoliageActor, CapsuleComponent), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(NewProp_CapsuleComponent_MetaData, ARRAY_COUNT(NewProp_CapsuleComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Mass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxForce,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxTouchImpulse,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxDamageImpulse,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FoliageDamping,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FoliageStiffnessQuadratic,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FoliageStiffness,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FoliageTouchImpulseScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FoliageDamageImpulseScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FoliagePosition,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FoliageForce,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FoliageVelocity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TouchingActorEntryPosition,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CapsuleComponent,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AInteractiveFoliageActor>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AInteractiveFoliageActor::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880080u,
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
	IMPLEMENT_CLASS(AInteractiveFoliageActor, 2989119468);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AInteractiveFoliageActor(Z_Construct_UClass_AInteractiveFoliageActor, &AInteractiveFoliageActor::StaticClass, TEXT("/Script/Foliage"), TEXT("AInteractiveFoliageActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInteractiveFoliageActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
