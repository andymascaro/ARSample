// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/PhysicsEngine/PhysicalAnimationComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicalAnimationComponent() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPhysicalAnimationData();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicalAnimationComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicalAnimationComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicalAnimationComponent_ApplyPhysicalAnimationProfileBelow();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicalAnimationComponent_ApplyPhysicalAnimationSettings();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicalAnimationComponent_ApplyPhysicalAnimationSettingsBelow();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicalAnimationComponent_GetBodyTargetTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicalAnimationComponent_SetSkeletalMeshComponent();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicalAnimationComponent_SetStrengthMultiplyer();
// End Cross Module References
class UScriptStruct* FPhysicalAnimationData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FPhysicalAnimationData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPhysicalAnimationData, Z_Construct_UPackage__Script_Engine(), TEXT("PhysicalAnimationData"), sizeof(FPhysicalAnimationData), Get_Z_Construct_UScriptStruct_FPhysicalAnimationData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPhysicalAnimationData(FPhysicalAnimationData::StaticStruct, TEXT("/Script/Engine"), TEXT("PhysicalAnimationData"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFPhysicalAnimationData
{
	FScriptStruct_Engine_StaticRegisterNativesFPhysicalAnimationData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PhysicalAnimationData")),new UScriptStruct::TCppStructOps<FPhysicalAnimationData>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFPhysicalAnimationData;
	UScriptStruct* Z_Construct_UScriptStruct_FPhysicalAnimationData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPhysicalAnimationData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PhysicalAnimationData"), sizeof(FPhysicalAnimationData), Get_Z_Construct_UScriptStruct_FPhysicalAnimationData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicalAnimationComponent.h" },
				{ "ToolTip", "Stores info on the type of motor that will be used for a given bone" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPhysicalAnimationData>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAngularForce_MetaData[] = {
				{ "Category", "PhysicalAnimation" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicalAnimationComponent.h" },
				{ "ToolTip", "The max force used to correct angular errors" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxAngularForce = { UE4CodeGen_Private::EPropertyClass::Float, "MaxAngularForce", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FPhysicalAnimationData, MaxAngularForce), METADATA_PARAMS(NewProp_MaxAngularForce_MetaData, ARRAY_COUNT(NewProp_MaxAngularForce_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxLinearForce_MetaData[] = {
				{ "Category", "PhysicalAnimation" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicalAnimationComponent.h" },
				{ "ToolTip", "The max force used to correct linear errors" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxLinearForce = { UE4CodeGen_Private::EPropertyClass::Float, "MaxLinearForce", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FPhysicalAnimationData, MaxLinearForce), METADATA_PARAMS(NewProp_MaxLinearForce_MetaData, ARRAY_COUNT(NewProp_MaxLinearForce_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VelocityStrength_MetaData[] = {
				{ "Category", "PhysicalAnimation" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicalAnimationComponent.h" },
				{ "ToolTip", "The strength used to correct linear velocity error. Only used for non-local simulation" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VelocityStrength = { UE4CodeGen_Private::EPropertyClass::Float, "VelocityStrength", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FPhysicalAnimationData, VelocityStrength), METADATA_PARAMS(NewProp_VelocityStrength_MetaData, ARRAY_COUNT(NewProp_VelocityStrength_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PositionStrength_MetaData[] = {
				{ "Category", "PhysicalAnimation" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicalAnimationComponent.h" },
				{ "ToolTip", "The strength used to correct linear position error. Only used for non-local simulation" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PositionStrength = { UE4CodeGen_Private::EPropertyClass::Float, "PositionStrength", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FPhysicalAnimationData, PositionStrength), METADATA_PARAMS(NewProp_PositionStrength_MetaData, ARRAY_COUNT(NewProp_PositionStrength_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngularVelocityStrength_MetaData[] = {
				{ "Category", "PhysicalAnimation" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicalAnimationComponent.h" },
				{ "ToolTip", "The strength used to correct angular velocity error" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AngularVelocityStrength = { UE4CodeGen_Private::EPropertyClass::Float, "AngularVelocityStrength", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FPhysicalAnimationData, AngularVelocityStrength), METADATA_PARAMS(NewProp_AngularVelocityStrength_MetaData, ARRAY_COUNT(NewProp_AngularVelocityStrength_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrientationStrength_MetaData[] = {
				{ "Category", "PhysicalAnimation" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicalAnimationComponent.h" },
				{ "ToolTip", "The strength used to correct orientation error" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OrientationStrength = { UE4CodeGen_Private::EPropertyClass::Float, "OrientationStrength", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FPhysicalAnimationData, OrientationStrength), METADATA_PARAMS(NewProp_OrientationStrength_MetaData, ARRAY_COUNT(NewProp_OrientationStrength_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsLocalSimulation_MetaData[] = {
				{ "Category", "PhysicalAnimation" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicalAnimationComponent.h" },
				{ "ToolTip", "Whether the drive targets are in world space or local" },
			};
#endif
			auto NewProp_bIsLocalSimulation_SetBit = [](void* Obj){ ((FPhysicalAnimationData*)Obj)->bIsLocalSimulation = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLocalSimulation = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsLocalSimulation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPhysicalAnimationData), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsLocalSimulation_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsLocalSimulation_MetaData, ARRAY_COUNT(NewProp_bIsLocalSimulation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyName_MetaData[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicalAnimationComponent.h" },
				{ "ToolTip", "The body we will be driving. We specifically hide this from users since they provide the body name and bodies below in the component API." },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_BodyName = { UE4CodeGen_Private::EPropertyClass::Name, "BodyName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FPhysicalAnimationData, BodyName), METADATA_PARAMS(NewProp_BodyName_MetaData, ARRAY_COUNT(NewProp_BodyName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxAngularForce,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxLinearForce,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VelocityStrength,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PositionStrength,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AngularVelocityStrength,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OrientationStrength,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsLocalSimulation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BodyName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"PhysicalAnimationData",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FPhysicalAnimationData),
				alignof(FPhysicalAnimationData),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPhysicalAnimationData_CRC() { return 488849472U; }
	void UPhysicalAnimationComponent::StaticRegisterNativesUPhysicalAnimationComponent()
	{
		UClass* Class = UPhysicalAnimationComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyPhysicalAnimationProfileBelow", (Native)&UPhysicalAnimationComponent::execApplyPhysicalAnimationProfileBelow },
			{ "ApplyPhysicalAnimationSettings", (Native)&UPhysicalAnimationComponent::execApplyPhysicalAnimationSettings },
			{ "ApplyPhysicalAnimationSettingsBelow", (Native)&UPhysicalAnimationComponent::execApplyPhysicalAnimationSettingsBelow },
			{ "GetBodyTargetTransform", (Native)&UPhysicalAnimationComponent::execGetBodyTargetTransform },
			{ "SetSkeletalMeshComponent", (Native)&UPhysicalAnimationComponent::execSetSkeletalMeshComponent },
			{ "SetStrengthMultiplyer", (Native)&UPhysicalAnimationComponent::execSetStrengthMultiplyer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UPhysicalAnimationComponent_ApplyPhysicalAnimationProfileBelow()
	{
		struct PhysicalAnimationComponent_eventApplyPhysicalAnimationProfileBelow_Parms
		{
			FName BodyName;
			FName ProfileName;
			bool bIncludeSelf;
			bool bClearNotFound;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bClearNotFound_SetBit = [](void* Obj){ ((PhysicalAnimationComponent_eventApplyPhysicalAnimationProfileBelow_Parms*)Obj)->bClearNotFound = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bClearNotFound = { UE4CodeGen_Private::EPropertyClass::Bool, "bClearNotFound", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(PhysicalAnimationComponent_eventApplyPhysicalAnimationProfileBelow_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bClearNotFound_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bIncludeSelf_SetBit = [](void* Obj){ ((PhysicalAnimationComponent_eventApplyPhysicalAnimationProfileBelow_Parms*)Obj)->bIncludeSelf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeSelf = { UE4CodeGen_Private::EPropertyClass::Bool, "bIncludeSelf", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(PhysicalAnimationComponent_eventApplyPhysicalAnimationProfileBelow_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIncludeSelf_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ProfileName = { UE4CodeGen_Private::EPropertyClass::Name, "ProfileName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PhysicalAnimationComponent_eventApplyPhysicalAnimationProfileBelow_Parms, ProfileName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_BodyName = { UE4CodeGen_Private::EPropertyClass::Name, "BodyName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PhysicalAnimationComponent_eventApplyPhysicalAnimationProfileBelow_Parms, BodyName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bClearNotFound,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIncludeSelf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ProfileName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BodyName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "PhysicalAnimation" },
				{ "CPP_Default_bClearNotFound", "false" },
				{ "CPP_Default_bIncludeSelf", "true" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicalAnimationComponent.h" },
				{ "ToolTip", "Applies the physical animation profile to the body given and all bodies below.\n@param  BodyName                     The body from which we'd like to start applying the physical animation profile. Finds all bodies below in the skeleton hierarchy. None implies all bodies\n@param  ProfileName          The physical animation profile we'd like to apply. For each body in the physics asset we search for physical animation settings with this name.\n@param  bIncludeSelf         Whether to include the provided body name in the list of bodies we act on (useful to ignore for cases where a root has multiple children)\n@param  bClearNotFound       If true, bodies without the given profile name will have any existing physical animation settings cleared. If false, bodies without the given profile name are left untouched." },
				{ "UnsafeDuringActorConstruction", "" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicalAnimationComponent, "ApplyPhysicalAnimationProfileBelow", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PhysicalAnimationComponent_eventApplyPhysicalAnimationProfileBelow_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPhysicalAnimationComponent_ApplyPhysicalAnimationSettings()
	{
		struct PhysicalAnimationComponent_eventApplyPhysicalAnimationSettings_Parms
		{
			FName BodyName;
			FPhysicalAnimationData PhysicalAnimationData;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicalAnimationData_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PhysicalAnimationData = { UE4CodeGen_Private::EPropertyClass::Struct, "PhysicalAnimationData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(PhysicalAnimationComponent_eventApplyPhysicalAnimationSettings_Parms, PhysicalAnimationData), Z_Construct_UScriptStruct_FPhysicalAnimationData, METADATA_PARAMS(NewProp_PhysicalAnimationData_MetaData, ARRAY_COUNT(NewProp_PhysicalAnimationData_MetaData)) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_BodyName = { UE4CodeGen_Private::EPropertyClass::Name, "BodyName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PhysicalAnimationComponent_eventApplyPhysicalAnimationSettings_Parms, BodyName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PhysicalAnimationData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BodyName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "PhysicalAnimation" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicalAnimationComponent.h" },
				{ "ToolTip", "Applies the physical animation settings to the body given." },
				{ "UnsafeDuringActorConstruction", "" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicalAnimationComponent, "ApplyPhysicalAnimationSettings", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(PhysicalAnimationComponent_eventApplyPhysicalAnimationSettings_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPhysicalAnimationComponent_ApplyPhysicalAnimationSettingsBelow()
	{
		struct PhysicalAnimationComponent_eventApplyPhysicalAnimationSettingsBelow_Parms
		{
			FName BodyName;
			FPhysicalAnimationData PhysicalAnimationData;
			bool bIncludeSelf;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bIncludeSelf_SetBit = [](void* Obj){ ((PhysicalAnimationComponent_eventApplyPhysicalAnimationSettingsBelow_Parms*)Obj)->bIncludeSelf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeSelf = { UE4CodeGen_Private::EPropertyClass::Bool, "bIncludeSelf", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(PhysicalAnimationComponent_eventApplyPhysicalAnimationSettingsBelow_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIncludeSelf_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicalAnimationData_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PhysicalAnimationData = { UE4CodeGen_Private::EPropertyClass::Struct, "PhysicalAnimationData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(PhysicalAnimationComponent_eventApplyPhysicalAnimationSettingsBelow_Parms, PhysicalAnimationData), Z_Construct_UScriptStruct_FPhysicalAnimationData, METADATA_PARAMS(NewProp_PhysicalAnimationData_MetaData, ARRAY_COUNT(NewProp_PhysicalAnimationData_MetaData)) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_BodyName = { UE4CodeGen_Private::EPropertyClass::Name, "BodyName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PhysicalAnimationComponent_eventApplyPhysicalAnimationSettingsBelow_Parms, BodyName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIncludeSelf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PhysicalAnimationData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BodyName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "PhysicalAnimation" },
				{ "CPP_Default_bIncludeSelf", "true" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicalAnimationComponent.h" },
				{ "ToolTip", "Applies the physical animation settings to the body given and all bodies below." },
				{ "UnsafeDuringActorConstruction", "" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicalAnimationComponent, "ApplyPhysicalAnimationSettingsBelow", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(PhysicalAnimationComponent_eventApplyPhysicalAnimationSettingsBelow_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPhysicalAnimationComponent_GetBodyTargetTransform()
	{
		struct PhysicalAnimationComponent_eventGetBodyTargetTransform_Parms
		{
			FName BodyName;
			FTransform ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(PhysicalAnimationComponent_eventGetBodyTargetTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_BodyName = { UE4CodeGen_Private::EPropertyClass::Name, "BodyName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PhysicalAnimationComponent_eventGetBodyTargetTransform_Parms, BodyName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BodyName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "PhysicalAnimation" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicalAnimationComponent.h" },
				{ "ToolTip", "Returns the target transform for the given body. If physical animation component is not controlling this body, returns its current transform." },
				{ "UnsafeDuringActorConstruction", "" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicalAnimationComponent, "GetBodyTargetTransform", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820401, sizeof(PhysicalAnimationComponent_eventGetBodyTargetTransform_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPhysicalAnimationComponent_SetSkeletalMeshComponent()
	{
		struct PhysicalAnimationComponent_eventSetSkeletalMeshComponent_Parms
		{
			USkeletalMeshComponent* InSkeletalMeshComponent;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InSkeletalMeshComponent_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InSkeletalMeshComponent = { UE4CodeGen_Private::EPropertyClass::Object, "InSkeletalMeshComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(PhysicalAnimationComponent_eventSetSkeletalMeshComponent_Parms, InSkeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(NewProp_InSkeletalMeshComponent_MetaData, ARRAY_COUNT(NewProp_InSkeletalMeshComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InSkeletalMeshComponent,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "PhysicalAnimation" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicalAnimationComponent.h" },
				{ "ToolTip", "Sets the skeletal mesh we are driving through physical animation. Will erase any existing physical animation data." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicalAnimationComponent, "SetSkeletalMeshComponent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PhysicalAnimationComponent_eventSetSkeletalMeshComponent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPhysicalAnimationComponent_SetStrengthMultiplyer()
	{
		struct PhysicalAnimationComponent_eventSetStrengthMultiplyer_Parms
		{
			float InStrengthMultiplyer;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InStrengthMultiplyer = { UE4CodeGen_Private::EPropertyClass::Float, "InStrengthMultiplyer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PhysicalAnimationComponent_eventSetStrengthMultiplyer_Parms, InStrengthMultiplyer), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InStrengthMultiplyer,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "PhysicalAnimation" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicalAnimationComponent.h" },
				{ "ToolTip", "Updates strength multiplyer and any active motors" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicalAnimationComponent, "SetStrengthMultiplyer", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PhysicalAnimationComponent_eventSetStrengthMultiplyer_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPhysicalAnimationComponent_NoRegister()
	{
		return UPhysicalAnimationComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UPhysicalAnimationComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UActorComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UPhysicalAnimationComponent_ApplyPhysicalAnimationProfileBelow, "ApplyPhysicalAnimationProfileBelow" }, // 1493680380
				{ &Z_Construct_UFunction_UPhysicalAnimationComponent_ApplyPhysicalAnimationSettings, "ApplyPhysicalAnimationSettings" }, // 577564477
				{ &Z_Construct_UFunction_UPhysicalAnimationComponent_ApplyPhysicalAnimationSettingsBelow, "ApplyPhysicalAnimationSettingsBelow" }, // 4176389499
				{ &Z_Construct_UFunction_UPhysicalAnimationComponent_GetBodyTargetTransform, "GetBodyTargetTransform" }, // 377262420
				{ &Z_Construct_UFunction_UPhysicalAnimationComponent_SetSkeletalMeshComponent, "SetSkeletalMeshComponent" }, // 1883080839
				{ &Z_Construct_UFunction_UPhysicalAnimationComponent_SetStrengthMultiplyer, "SetStrengthMultiplyer" }, // 547566270
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "DevelopmentStatus", "Experimental" },
				{ "IncludePath", "PhysicsEngine/PhysicalAnimationComponent.h" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicalAnimationComponent.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshComponent_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicalAnimationComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshComponent = { UE4CodeGen_Private::EPropertyClass::Object, "SkeletalMeshComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000080008, 1, nullptr, STRUCT_OFFSET(UPhysicalAnimationComponent, SkeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(NewProp_SkeletalMeshComponent_MetaData, ARRAY_COUNT(NewProp_SkeletalMeshComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StrengthMultiplyer_MetaData[] = {
				{ "Category", "PhysicalAnimation" },
				{ "ClampMin", "0" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicalAnimationComponent.h" },
				{ "ToolTip", "Multiplies the strength of any active motors. (can blend from 0-1 for example)" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StrengthMultiplyer = { UE4CodeGen_Private::EPropertyClass::Float, "StrengthMultiplyer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UPhysicalAnimationComponent, StrengthMultiplyer), METADATA_PARAMS(NewProp_StrengthMultiplyer_MetaData, ARRAY_COUNT(NewProp_StrengthMultiplyer_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SkeletalMeshComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StrengthMultiplyer,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UPhysicalAnimationComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UPhysicalAnimationComponent::StaticClass,
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
	IMPLEMENT_CLASS(UPhysicalAnimationComponent, 111706189);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPhysicalAnimationComponent(Z_Construct_UClass_UPhysicalAnimationComponent, &UPhysicalAnimationComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UPhysicalAnimationComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPhysicalAnimationComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
