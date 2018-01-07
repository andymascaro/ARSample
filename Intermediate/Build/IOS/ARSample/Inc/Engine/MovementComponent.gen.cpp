// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/GameFramework/MovementComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovementComponent() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EPlaneConstraintAxisSetting();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMovementComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UFunction* Z_Construct_UFunction_UMovementComponent_ConstrainDirectionToPlane();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UFunction* Z_Construct_UFunction_UMovementComponent_ConstrainLocationToPlane();
	ENGINE_API UFunction* Z_Construct_UFunction_UMovementComponent_ConstrainNormalToPlane();
	ENGINE_API UFunction* Z_Construct_UFunction_UMovementComponent_GetGravityZ();
	ENGINE_API UFunction* Z_Construct_UFunction_UMovementComponent_GetMaxSpeed();
	ENGINE_API UFunction* Z_Construct_UFunction_UMovementComponent_GetPhysicsVolume();
	ENGINE_API UClass* Z_Construct_UClass_APhysicsVolume_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_UMovementComponent_GetPlaneConstraintAxisSetting();
	ENGINE_API UFunction* Z_Construct_UFunction_UMovementComponent_GetPlaneConstraintNormal();
	ENGINE_API UFunction* Z_Construct_UFunction_UMovementComponent_GetPlaneConstraintOrigin();
	ENGINE_API UFunction* Z_Construct_UFunction_UMovementComponent_IsExceedingMaxSpeed();
	ENGINE_API UFunction* Z_Construct_UFunction_UMovementComponent_K2_GetMaxSpeedModifier();
	ENGINE_API UFunction* Z_Construct_UFunction_UMovementComponent_K2_GetModifiedMaxSpeed();
	ENGINE_API UFunction* Z_Construct_UFunction_UMovementComponent_K2_MoveUpdatedComponent();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UFunction* Z_Construct_UFunction_UMovementComponent_PhysicsVolumeChanged();
	ENGINE_API UFunction* Z_Construct_UFunction_UMovementComponent_SetPlaneConstraintAxisSetting();
	ENGINE_API UFunction* Z_Construct_UFunction_UMovementComponent_SetPlaneConstraintEnabled();
	ENGINE_API UFunction* Z_Construct_UFunction_UMovementComponent_SetPlaneConstraintFromVectors();
	ENGINE_API UFunction* Z_Construct_UFunction_UMovementComponent_SetPlaneConstraintNormal();
	ENGINE_API UFunction* Z_Construct_UFunction_UMovementComponent_SetPlaneConstraintOrigin();
	ENGINE_API UFunction* Z_Construct_UFunction_UMovementComponent_SetUpdatedComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_UMovementComponent_SnapUpdatedComponentToPlane();
	ENGINE_API UFunction* Z_Construct_UFunction_UMovementComponent_StopMovementImmediately();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
// End Cross Module References
	static UEnum* EPlaneConstraintAxisSetting_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EPlaneConstraintAxisSetting, Z_Construct_UPackage__Script_Engine(), TEXT("EPlaneConstraintAxisSetting"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPlaneConstraintAxisSetting(EPlaneConstraintAxisSetting_StaticEnum, TEXT("/Script/Engine"), TEXT("EPlaneConstraintAxisSetting"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EPlaneConstraintAxisSetting_CRC() { return 371151451U; }
	UEnum* Z_Construct_UEnum_Engine_EPlaneConstraintAxisSetting()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPlaneConstraintAxisSetting"), 0, Get_Z_Construct_UEnum_Engine_EPlaneConstraintAxisSetting_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPlaneConstraintAxisSetting::Custom", (int64)EPlaneConstraintAxisSetting::Custom },
				{ "EPlaneConstraintAxisSetting::X", (int64)EPlaneConstraintAxisSetting::X },
				{ "EPlaneConstraintAxisSetting::Y", (int64)EPlaneConstraintAxisSetting::Y },
				{ "EPlaneConstraintAxisSetting::Z", (int64)EPlaneConstraintAxisSetting::Z },
				{ "EPlaneConstraintAxisSetting::UseGlobalPhysicsSetting", (int64)EPlaneConstraintAxisSetting::UseGlobalPhysicsSetting },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Custom.ToolTip", "Lock movement to a user-defined axis." },
				{ "ModuleRelativePath", "Classes/GameFramework/MovementComponent.h" },
				{ "ToolTip", "Setting that controls behavior when movement is restricted to a 2D plane defined by a specific axis/normal,\nso that movement along the locked axis is not be possible." },
				{ "UseGlobalPhysicsSetting.ToolTip", "Use the global physics project setting." },
				{ "X.ToolTip", "Lock movement in the X axis." },
				{ "Y.ToolTip", "Lock movement in the Y axis." },
				{ "Z.ToolTip", "Lock movement in the Z axis." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EPlaneConstraintAxisSetting",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EPlaneConstraintAxisSetting",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UMovementComponent::StaticRegisterNativesUMovementComponent()
	{
		UClass* Class = UMovementComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConstrainDirectionToPlane", (Native)&UMovementComponent::execConstrainDirectionToPlane },
			{ "ConstrainLocationToPlane", (Native)&UMovementComponent::execConstrainLocationToPlane },
			{ "ConstrainNormalToPlane", (Native)&UMovementComponent::execConstrainNormalToPlane },
			{ "GetGravityZ", (Native)&UMovementComponent::execGetGravityZ },
			{ "GetMaxSpeed", (Native)&UMovementComponent::execGetMaxSpeed },
			{ "GetPhysicsVolume", (Native)&UMovementComponent::execGetPhysicsVolume },
			{ "GetPlaneConstraintAxisSetting", (Native)&UMovementComponent::execGetPlaneConstraintAxisSetting },
			{ "GetPlaneConstraintNormal", (Native)&UMovementComponent::execGetPlaneConstraintNormal },
			{ "GetPlaneConstraintOrigin", (Native)&UMovementComponent::execGetPlaneConstraintOrigin },
			{ "IsExceedingMaxSpeed", (Native)&UMovementComponent::execIsExceedingMaxSpeed },
			{ "K2_GetMaxSpeedModifier", (Native)&UMovementComponent::execK2_GetMaxSpeedModifier },
			{ "K2_GetModifiedMaxSpeed", (Native)&UMovementComponent::execK2_GetModifiedMaxSpeed },
			{ "K2_MoveUpdatedComponent", (Native)&UMovementComponent::execK2_MoveUpdatedComponent },
			{ "PhysicsVolumeChanged", (Native)&UMovementComponent::execPhysicsVolumeChanged },
			{ "SetPlaneConstraintAxisSetting", (Native)&UMovementComponent::execSetPlaneConstraintAxisSetting },
			{ "SetPlaneConstraintEnabled", (Native)&UMovementComponent::execSetPlaneConstraintEnabled },
			{ "SetPlaneConstraintFromVectors", (Native)&UMovementComponent::execSetPlaneConstraintFromVectors },
			{ "SetPlaneConstraintNormal", (Native)&UMovementComponent::execSetPlaneConstraintNormal },
			{ "SetPlaneConstraintOrigin", (Native)&UMovementComponent::execSetPlaneConstraintOrigin },
			{ "SetUpdatedComponent", (Native)&UMovementComponent::execSetUpdatedComponent },
			{ "SnapUpdatedComponentToPlane", (Native)&UMovementComponent::execSnapUpdatedComponentToPlane },
			{ "StopMovementImmediately", (Native)&UMovementComponent::execStopMovementImmediately },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UMovementComponent_ConstrainDirectionToPlane()
	{
		struct MovementComponent_eventConstrainDirectionToPlane_Parms
		{
			FVector Direction;
			FVector ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MovementComponent_eventConstrainDirectionToPlane_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Direction = { UE4CodeGen_Private::EPropertyClass::Struct, "Direction", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MovementComponent_eventConstrainDirectionToPlane_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Direction,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|Movement|Planar" },
				{ "ModuleRelativePath", "Classes/GameFramework/MovementComponent.h" },
				{ "ToolTip", "Constrain a direction vector to the plane constraint, if enabled.\n@see SetPlaneConstraint" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovementComponent, "ConstrainDirectionToPlane", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820400, sizeof(MovementComponent_eventConstrainDirectionToPlane_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMovementComponent_ConstrainLocationToPlane()
	{
		struct MovementComponent_eventConstrainLocationToPlane_Parms
		{
			FVector Location;
			FVector ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MovementComponent_eventConstrainLocationToPlane_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location = { UE4CodeGen_Private::EPropertyClass::Struct, "Location", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MovementComponent_eventConstrainLocationToPlane_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Location,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|Movement|Planar" },
				{ "ModuleRelativePath", "Classes/GameFramework/MovementComponent.h" },
				{ "ToolTip", "Constrain a position vector to the plane constraint, if enabled." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovementComponent, "ConstrainLocationToPlane", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820400, sizeof(MovementComponent_eventConstrainLocationToPlane_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMovementComponent_ConstrainNormalToPlane()
	{
		struct MovementComponent_eventConstrainNormalToPlane_Parms
		{
			FVector Normal;
			FVector ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MovementComponent_eventConstrainNormalToPlane_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Normal = { UE4CodeGen_Private::EPropertyClass::Struct, "Normal", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MovementComponent_eventConstrainNormalToPlane_Parms, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Normal,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|Movement|Planar" },
				{ "ModuleRelativePath", "Classes/GameFramework/MovementComponent.h" },
				{ "ToolTip", "Constrain a normal vector (of unit length) to the plane constraint, if enabled." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovementComponent, "ConstrainNormalToPlane", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820400, sizeof(MovementComponent_eventConstrainNormalToPlane_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMovementComponent_GetGravityZ()
	{
		struct MovementComponent_eventGetGravityZ_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MovementComponent_eventGetGravityZ_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|Movement" },
				{ "ModuleRelativePath", "Classes/GameFramework/MovementComponent.h" },
				{ "ToolTip", "@return gravity that affects this component" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovementComponent, "GetGravityZ", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020400, sizeof(MovementComponent_eventGetGravityZ_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMovementComponent_GetMaxSpeed()
	{
		struct MovementComponent_eventGetMaxSpeed_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MovementComponent_eventGetMaxSpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|Movement" },
				{ "ModuleRelativePath", "Classes/GameFramework/MovementComponent.h" },
				{ "ToolTip", "@return Maximum speed of component in current movement mode." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovementComponent, "GetMaxSpeed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020400, sizeof(MovementComponent_eventGetMaxSpeed_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMovementComponent_GetPhysicsVolume()
	{
		struct MovementComponent_eventGetPhysicsVolume_Parms
		{
			APhysicsVolume* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MovementComponent_eventGetPhysicsVolume_Parms, ReturnValue), Z_Construct_UClass_APhysicsVolume_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|Movement" },
				{ "ModuleRelativePath", "Classes/GameFramework/MovementComponent.h" },
				{ "ToolTip", "@return PhysicsVolume this MovementComponent is using, or the world's default physics volume if none. *" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovementComponent, "GetPhysicsVolume", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020400, sizeof(MovementComponent_eventGetPhysicsVolume_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMovementComponent_GetPlaneConstraintAxisSetting()
	{
		struct MovementComponent_eventGetPlaneConstraintAxisSetting_Parms
		{
			EPlaneConstraintAxisSetting ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Enum, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MovementComponent_eventGetPlaneConstraintAxisSetting_Parms, ReturnValue), Z_Construct_UEnum_Engine_EPlaneConstraintAxisSetting, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Underlying,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|Movement|Planar" },
				{ "ModuleRelativePath", "Classes/GameFramework/MovementComponent.h" },
				{ "ToolTip", "Get the plane constraint axis setting." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovementComponent, "GetPlaneConstraintAxisSetting", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(MovementComponent_eventGetPlaneConstraintAxisSetting_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMovementComponent_GetPlaneConstraintNormal()
	{
		struct MovementComponent_eventGetPlaneConstraintNormal_Parms
		{
			FVector ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000582, 1, nullptr, STRUCT_OFFSET(MovementComponent_eventGetPlaneConstraintNormal_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_ReturnValue_MetaData, ARRAY_COUNT(NewProp_ReturnValue_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|Movement|Planar" },
				{ "ModuleRelativePath", "Classes/GameFramework/MovementComponent.h" },
				{ "ToolTip", "@return The normal of the plane that constrains movement, enforced if the plane constraint is enabled." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovementComponent, "GetPlaneConstraintNormal", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820401, sizeof(MovementComponent_eventGetPlaneConstraintNormal_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMovementComponent_GetPlaneConstraintOrigin()
	{
		struct MovementComponent_eventGetPlaneConstraintOrigin_Parms
		{
			FVector ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000582, 1, nullptr, STRUCT_OFFSET(MovementComponent_eventGetPlaneConstraintOrigin_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_ReturnValue_MetaData, ARRAY_COUNT(NewProp_ReturnValue_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|Movement|Planar" },
				{ "ModuleRelativePath", "Classes/GameFramework/MovementComponent.h" },
				{ "ToolTip", "Get the plane constraint origin. This defines the behavior of snapping a position to the plane, such as by SnapUpdatedComponentToPlane().\n@return The origin of the plane that constrains movement, if the plane constraint is enabled." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovementComponent, "GetPlaneConstraintOrigin", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820401, sizeof(MovementComponent_eventGetPlaneConstraintOrigin_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMovementComponent_IsExceedingMaxSpeed()
	{
		struct MovementComponent_eventIsExceedingMaxSpeed_Parms
		{
			float MaxSpeed;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((MovementComponent_eventIsExceedingMaxSpeed_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MovementComponent_eventIsExceedingMaxSpeed_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "MaxSpeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MovementComponent_eventIsExceedingMaxSpeed_Parms, MaxSpeed), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxSpeed,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|Movement" },
				{ "ModuleRelativePath", "Classes/GameFramework/MovementComponent.h" },
				{ "ToolTip", "Returns true if the current velocity is exceeding the given max speed (usually the result of GetMaxSpeed()), within a small error tolerance.\nNote that under normal circumstances updates cause by acceleration will not cause this to be true, however external forces or changes in the max speed limit\ncan cause the max speed to be violated." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovementComponent, "IsExceedingMaxSpeed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020400, sizeof(MovementComponent_eventIsExceedingMaxSpeed_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMovementComponent_K2_GetMaxSpeedModifier()
	{
		struct MovementComponent_eventK2_GetMaxSpeedModifier_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MovementComponent_eventK2_GetMaxSpeedModifier_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|Movement" },
				{ "DeprecatedFunction", "" },
				{ "DeprecationMessage", "GetMaxSpeedModifier() is deprecated, apply your own modifiers to GetMaxSpeed() if desired." },
				{ "DisplayName", "GetMaxSpeedModifier" },
				{ "ModuleRelativePath", "Classes/GameFramework/MovementComponent.h" },
				{ "ToolTip", "@return a scalar applied to the maximum velocity that the component can currently move." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovementComponent, "K2_GetMaxSpeedModifier", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020400, sizeof(MovementComponent_eventK2_GetMaxSpeedModifier_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMovementComponent_K2_GetModifiedMaxSpeed()
	{
		struct MovementComponent_eventK2_GetModifiedMaxSpeed_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MovementComponent_eventK2_GetModifiedMaxSpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|Movement" },
				{ "DeprecationMessage", "GetModifiedMaxSpeed() is deprecated, apply your own modifiers to GetMaxSpeed() if desired." },
				{ "DisplayName", "GetModifiedMaxSpeed" },
				{ "ModuleRelativePath", "Classes/GameFramework/MovementComponent.h" },
				{ "ToolTip", "@return the result of GetMaxSpeed() * GetMaxSpeedModifier()." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovementComponent, "K2_GetModifiedMaxSpeed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020400, sizeof(MovementComponent_eventK2_GetModifiedMaxSpeed_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMovementComponent_K2_MoveUpdatedComponent()
	{
		struct MovementComponent_eventK2_MoveUpdatedComponent_Parms
		{
			FVector Delta;
			FRotator NewRotation;
			FHitResult OutHit;
			bool bSweep;
			bool bTeleport;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((MovementComponent_eventK2_MoveUpdatedComponent_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MovementComponent_eventK2_MoveUpdatedComponent_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bTeleport_SetBit = [](void* Obj){ ((MovementComponent_eventK2_MoveUpdatedComponent_Parms*)Obj)->bTeleport = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTeleport = { UE4CodeGen_Private::EPropertyClass::Bool, "bTeleport", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MovementComponent_eventK2_MoveUpdatedComponent_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bTeleport_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bSweep_SetBit = [](void* Obj){ ((MovementComponent_eventK2_MoveUpdatedComponent_Parms*)Obj)->bSweep = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSweep = { UE4CodeGen_Private::EPropertyClass::Bool, "bSweep", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MovementComponent_eventK2_MoveUpdatedComponent_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSweep_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutHit = { UE4CodeGen_Private::EPropertyClass::Struct, "OutHit", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000180, 1, nullptr, STRUCT_OFFSET(MovementComponent_eventK2_MoveUpdatedComponent_Parms, OutHit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "NewRotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MovementComponent_eventK2_MoveUpdatedComponent_Parms, NewRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Delta = { UE4CodeGen_Private::EPropertyClass::Struct, "Delta", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MovementComponent_eventK2_MoveUpdatedComponent_Parms, Delta), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bTeleport,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSweep,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutHit,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewRotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Delta,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "AdvancedDisplay", "bTeleport" },
				{ "Category", "Components|Movement" },
				{ "CPP_Default_bSweep", "true" },
				{ "CPP_Default_bTeleport", "false" },
				{ "DisplayName", "MoveUpdatedComponent" },
				{ "ModuleRelativePath", "Classes/GameFramework/MovementComponent.h" },
				{ "ToolTip", "Moves our UpdatedComponent by the given Delta, and sets rotation to NewRotation.\nRespects the plane constraint, if enabled.\n@return True if some movement occurred, false if no movement occurred. Result of any impact will be stored in OutHit." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovementComponent, "K2_MoveUpdatedComponent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C20401, sizeof(MovementComponent_eventK2_MoveUpdatedComponent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMovementComponent_PhysicsVolumeChanged()
	{
		struct MovementComponent_eventPhysicsVolumeChanged_Parms
		{
			APhysicsVolume* NewVolume;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewVolume = { UE4CodeGen_Private::EPropertyClass::Object, "NewVolume", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MovementComponent_eventPhysicsVolumeChanged_Parms, NewVolume), Z_Construct_UClass_APhysicsVolume_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewVolume,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/MovementComponent.h" },
				{ "ToolTip", "Delegate when PhysicsVolume of UpdatedComponent has been changed *" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovementComponent, "PhysicsVolumeChanged", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020400, sizeof(MovementComponent_eventPhysicsVolumeChanged_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMovementComponent_SetPlaneConstraintAxisSetting()
	{
		struct MovementComponent_eventSetPlaneConstraintAxisSetting_Parms
		{
			EPlaneConstraintAxisSetting NewAxisSetting;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewAxisSetting = { UE4CodeGen_Private::EPropertyClass::Enum, "NewAxisSetting", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MovementComponent_eventSetPlaneConstraintAxisSetting_Parms, NewAxisSetting), Z_Construct_UEnum_Engine_EPlaneConstraintAxisSetting, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewAxisSetting_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewAxisSetting,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewAxisSetting_Underlying,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|Movement|Planar" },
				{ "ModuleRelativePath", "Classes/GameFramework/MovementComponent.h" },
				{ "ToolTip", "Set the plane constraint axis setting.\nChanging this setting will modify the current value of PlaneConstraintNormal.\n\n@param  NewAxisSetting New plane constraint axis setting." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovementComponent, "SetPlaneConstraintAxisSetting", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(MovementComponent_eventSetPlaneConstraintAxisSetting_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMovementComponent_SetPlaneConstraintEnabled()
	{
		struct MovementComponent_eventSetPlaneConstraintEnabled_Parms
		{
			bool bEnabled;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bEnabled_SetBit = [](void* Obj){ ((MovementComponent_eventSetPlaneConstraintEnabled_Parms*)Obj)->bEnabled = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnabled", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MovementComponent_eventSetPlaneConstraintEnabled_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnabled_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnabled,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|Movement|Planar" },
				{ "ModuleRelativePath", "Classes/GameFramework/MovementComponent.h" },
				{ "ToolTip", "Sets whether or not the plane constraint is enabled." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovementComponent, "SetPlaneConstraintEnabled", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(MovementComponent_eventSetPlaneConstraintEnabled_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMovementComponent_SetPlaneConstraintFromVectors()
	{
		struct MovementComponent_eventSetPlaneConstraintFromVectors_Parms
		{
			FVector Forward;
			FVector Up;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Up = { UE4CodeGen_Private::EPropertyClass::Struct, "Up", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MovementComponent_eventSetPlaneConstraintFromVectors_Parms, Up), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Forward = { UE4CodeGen_Private::EPropertyClass::Struct, "Forward", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MovementComponent_eventSetPlaneConstraintFromVectors_Parms, Forward), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Up,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Forward,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|Movement|Planar" },
				{ "ModuleRelativePath", "Classes/GameFramework/MovementComponent.h" },
				{ "ToolTip", "Uses the Forward and Up vectors to compute the plane that constrains movement, enforced if the plane constraint is enabled." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovementComponent, "SetPlaneConstraintFromVectors", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820400, sizeof(MovementComponent_eventSetPlaneConstraintFromVectors_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMovementComponent_SetPlaneConstraintNormal()
	{
		struct MovementComponent_eventSetPlaneConstraintNormal_Parms
		{
			FVector PlaneNormal;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlaneNormal = { UE4CodeGen_Private::EPropertyClass::Struct, "PlaneNormal", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MovementComponent_eventSetPlaneConstraintNormal_Parms, PlaneNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlaneNormal,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|Movement|Planar" },
				{ "ModuleRelativePath", "Classes/GameFramework/MovementComponent.h" },
				{ "ToolTip", "Sets the normal of the plane that constrains movement, enforced if the plane constraint is enabled.\nChanging the normal automatically sets PlaneConstraintAxisSetting to \"Custom\".\n\n@param PlaneNormal   The normal of the plane. If non-zero in length, it will be normalized." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovementComponent, "SetPlaneConstraintNormal", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820400, sizeof(MovementComponent_eventSetPlaneConstraintNormal_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMovementComponent_SetPlaneConstraintOrigin()
	{
		struct MovementComponent_eventSetPlaneConstraintOrigin_Parms
		{
			FVector PlaneOrigin;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlaneOrigin = { UE4CodeGen_Private::EPropertyClass::Struct, "PlaneOrigin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MovementComponent_eventSetPlaneConstraintOrigin_Parms, PlaneOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlaneOrigin,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|Movement|Planar" },
				{ "ModuleRelativePath", "Classes/GameFramework/MovementComponent.h" },
				{ "ToolTip", "Sets the origin of the plane that constrains movement, enforced if the plane constraint is enabled." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovementComponent, "SetPlaneConstraintOrigin", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820400, sizeof(MovementComponent_eventSetPlaneConstraintOrigin_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMovementComponent_SetUpdatedComponent()
	{
		struct MovementComponent_eventSetUpdatedComponent_Parms
		{
			USceneComponent* NewUpdatedComponent;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewUpdatedComponent_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewUpdatedComponent = { UE4CodeGen_Private::EPropertyClass::Object, "NewUpdatedComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(MovementComponent_eventSetUpdatedComponent_Parms, NewUpdatedComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_NewUpdatedComponent_MetaData, ARRAY_COUNT(NewProp_NewUpdatedComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewUpdatedComponent,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|Movement" },
				{ "ModuleRelativePath", "Classes/GameFramework/MovementComponent.h" },
				{ "ToolTip", "Assign the component we move and update." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovementComponent, "SetUpdatedComponent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(MovementComponent_eventSetUpdatedComponent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMovementComponent_SnapUpdatedComponentToPlane()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|Movement|Planar" },
				{ "ModuleRelativePath", "Classes/GameFramework/MovementComponent.h" },
				{ "ToolTip", "Snap the updated component to the plane constraint, if enabled." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovementComponent, "SnapUpdatedComponentToPlane", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMovementComponent_StopMovementImmediately()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|Movement" },
				{ "ModuleRelativePath", "Classes/GameFramework/MovementComponent.h" },
				{ "ToolTip", "Stops movement immediately (zeroes velocity, usually zeros acceleration for components with acceleration)." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovementComponent, "StopMovementImmediately", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMovementComponent_NoRegister()
	{
		return UMovementComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UMovementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UActorComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UMovementComponent_ConstrainDirectionToPlane, "ConstrainDirectionToPlane" }, // 1612368959
				{ &Z_Construct_UFunction_UMovementComponent_ConstrainLocationToPlane, "ConstrainLocationToPlane" }, // 461030157
				{ &Z_Construct_UFunction_UMovementComponent_ConstrainNormalToPlane, "ConstrainNormalToPlane" }, // 926397529
				{ &Z_Construct_UFunction_UMovementComponent_GetGravityZ, "GetGravityZ" }, // 3408398749
				{ &Z_Construct_UFunction_UMovementComponent_GetMaxSpeed, "GetMaxSpeed" }, // 3211964819
				{ &Z_Construct_UFunction_UMovementComponent_GetPhysicsVolume, "GetPhysicsVolume" }, // 3564517675
				{ &Z_Construct_UFunction_UMovementComponent_GetPlaneConstraintAxisSetting, "GetPlaneConstraintAxisSetting" }, // 1016968510
				{ &Z_Construct_UFunction_UMovementComponent_GetPlaneConstraintNormal, "GetPlaneConstraintNormal" }, // 3301883229
				{ &Z_Construct_UFunction_UMovementComponent_GetPlaneConstraintOrigin, "GetPlaneConstraintOrigin" }, // 2616059341
				{ &Z_Construct_UFunction_UMovementComponent_IsExceedingMaxSpeed, "IsExceedingMaxSpeed" }, // 1670197187
				{ &Z_Construct_UFunction_UMovementComponent_K2_GetMaxSpeedModifier, "K2_GetMaxSpeedModifier" }, // 900922425
				{ &Z_Construct_UFunction_UMovementComponent_K2_GetModifiedMaxSpeed, "K2_GetModifiedMaxSpeed" }, // 3083159187
				{ &Z_Construct_UFunction_UMovementComponent_K2_MoveUpdatedComponent, "K2_MoveUpdatedComponent" }, // 779436532
				{ &Z_Construct_UFunction_UMovementComponent_PhysicsVolumeChanged, "PhysicsVolumeChanged" }, // 3598192363
				{ &Z_Construct_UFunction_UMovementComponent_SetPlaneConstraintAxisSetting, "SetPlaneConstraintAxisSetting" }, // 2545389345
				{ &Z_Construct_UFunction_UMovementComponent_SetPlaneConstraintEnabled, "SetPlaneConstraintEnabled" }, // 107830943
				{ &Z_Construct_UFunction_UMovementComponent_SetPlaneConstraintFromVectors, "SetPlaneConstraintFromVectors" }, // 1804262635
				{ &Z_Construct_UFunction_UMovementComponent_SetPlaneConstraintNormal, "SetPlaneConstraintNormal" }, // 3510462336
				{ &Z_Construct_UFunction_UMovementComponent_SetPlaneConstraintOrigin, "SetPlaneConstraintOrigin" }, // 3665769075
				{ &Z_Construct_UFunction_UMovementComponent_SetUpdatedComponent, "SetUpdatedComponent" }, // 754611531
				{ &Z_Construct_UFunction_UMovementComponent_SnapUpdatedComponentToPlane, "SnapUpdatedComponentToPlane" }, // 3562626450
				{ &Z_Construct_UFunction_UMovementComponent_StopMovementImmediately, "StopMovementImmediately" }, // 2711614786
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ClassGroupNames", "Movement" },
				{ "IncludePath", "GameFramework/MovementComponent.h" },
				{ "ModuleRelativePath", "Classes/GameFramework/MovementComponent.h" },
				{ "ToolTip", "MovementComponent is an abstract component class that defines functionality for moving a PrimitiveComponent (our UpdatedComponent) each tick.\nBase functionality includes:\n   - Restricting movement to a plane or axis.\n   - Utility functions for special handling of collision results (SlideAlongSurface(), ComputeSlideVector(), TwoWallAdjust()).\n   - Utility functions for moving when there may be initial penetration (SafeMoveUpdatedComponent(), ResolvePenetration()).\n   - Automatically registering the component tick and finding a component to move on the owning Actor.\nNormally the root component of the owning actor is moved, however another component may be selected (see SetUpdatedComponent()).\nDuring swept (non-teleporting) movement only collision of UpdatedComponent is considered, attached components will teleport to the end location ignoring collision." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoRegisterUpdatedComponent_MetaData[] = {
				{ "Category", "MovementComponent" },
				{ "ModuleRelativePath", "Classes/GameFramework/MovementComponent.h" },
				{ "ToolTip", "If true, registers the owner's Root component as the UpdatedComponent if there is not one currently assigned." },
			};
#endif
			auto NewProp_bAutoRegisterUpdatedComponent_SetBit = [](void* Obj){ ((UMovementComponent*)Obj)->bAutoRegisterUpdatedComponent = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoRegisterUpdatedComponent = { UE4CodeGen_Private::EPropertyClass::Bool, "bAutoRegisterUpdatedComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMovementComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAutoRegisterUpdatedComponent_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAutoRegisterUpdatedComponent_MetaData, ARRAY_COUNT(NewProp_bAutoRegisterUpdatedComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTickBeforeOwner_MetaData[] = {
				{ "Category", "MovementComponent" },
				{ "ModuleRelativePath", "Classes/GameFramework/MovementComponent.h" },
				{ "ToolTip", "If true, after registration we will add a tick dependency to tick before our owner (if we can both tick).\nThis is important when our tick causes an update in the owner's position, so that when the owner ticks it uses the most recent position without lag.\nDisabling this can improve performance if both objects tick but the order of ticks doesn't matter." },
			};
#endif
			auto NewProp_bTickBeforeOwner_SetBit = [](void* Obj){ ((UMovementComponent*)Obj)->bTickBeforeOwner = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTickBeforeOwner = { UE4CodeGen_Private::EPropertyClass::Bool, "bTickBeforeOwner", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMovementComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bTickBeforeOwner_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bTickBeforeOwner_MetaData, ARRAY_COUNT(NewProp_bTickBeforeOwner_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoUpdateTickRegistration_MetaData[] = {
				{ "Category", "MovementComponent" },
				{ "ModuleRelativePath", "Classes/GameFramework/MovementComponent.h" },
				{ "ToolTip", "If true, whenever the updated component is changed, this component will enable or disable its tick dependent on whether it has something to update.\nThis will NOT enable tick at startup if bAutoActivate is false, because presumably you have a good reason for not wanting it to start ticking initially." },
			};
#endif
			auto NewProp_bAutoUpdateTickRegistration_SetBit = [](void* Obj){ ((UMovementComponent*)Obj)->bAutoUpdateTickRegistration = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoUpdateTickRegistration = { UE4CodeGen_Private::EPropertyClass::Bool, "bAutoUpdateTickRegistration", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMovementComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAutoUpdateTickRegistration_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAutoUpdateTickRegistration_MetaData, ARRAY_COUNT(NewProp_bAutoUpdateTickRegistration_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUpdateOnlyIfRendered_MetaData[] = {
				{ "Category", "MovementComponent" },
				{ "ModuleRelativePath", "Classes/GameFramework/MovementComponent.h" },
				{ "ToolTip", "If true, skips TickComponent() if UpdatedComponent was not recently rendered." },
			};
#endif
			auto NewProp_bUpdateOnlyIfRendered_SetBit = [](void* Obj){ ((UMovementComponent*)Obj)->bUpdateOnlyIfRendered = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateOnlyIfRendered = { UE4CodeGen_Private::EPropertyClass::Bool, "bUpdateOnlyIfRendered", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMovementComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUpdateOnlyIfRendered_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUpdateOnlyIfRendered_MetaData, ARRAY_COUNT(NewProp_bUpdateOnlyIfRendered_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlaneConstraintOrigin_MetaData[] = {
				{ "Category", "PlanarMovement" },
				{ "editcondition", "bConstrainToPlane" },
				{ "ModuleRelativePath", "Classes/GameFramework/MovementComponent.h" },
				{ "ToolTip", "The origin of the plane that constrains movement, if plane constraint is enabled.\nThis defines the behavior of snapping a position to the plane, such as by SnapUpdatedComponentToPlane().\n@see bConstrainToPlane, SetPlaneConstraintOrigin()." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlaneConstraintOrigin = { UE4CodeGen_Private::EPropertyClass::Struct, "PlaneConstraintOrigin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000015, 1, nullptr, STRUCT_OFFSET(UMovementComponent, PlaneConstraintOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_PlaneConstraintOrigin_MetaData, ARRAY_COUNT(NewProp_PlaneConstraintOrigin_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlaneConstraintNormal_MetaData[] = {
				{ "Category", "PlanarMovement" },
				{ "editcondition", "bConstrainToPlane" },
				{ "ModuleRelativePath", "Classes/GameFramework/MovementComponent.h" },
				{ "ToolTip", "The normal or axis of the plane that constrains movement, if bConstrainToPlane is enabled.\nIf for example you wanted to constrain movement to the X-Z plane (so that Y cannot change), the normal would be set to X=0 Y=1 Z=0.\nThis is recalculated whenever PlaneConstraintAxisSetting changes. It is normalized once the component is registered with the game world.\n@see bConstrainToPlane, SetPlaneConstraintNormal(), SetPlaneConstraintFromVectors()" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlaneConstraintNormal = { UE4CodeGen_Private::EPropertyClass::Struct, "PlaneConstraintNormal", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000015, 1, nullptr, STRUCT_OFFSET(UMovementComponent, PlaneConstraintNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_PlaneConstraintNormal_MetaData, ARRAY_COUNT(NewProp_PlaneConstraintNormal_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlaneConstraintAxisSetting_MetaData[] = {
				{ "Category", "PlanarMovement" },
				{ "editcondition", "bConstrainToPlane" },
				{ "ModuleRelativePath", "Classes/GameFramework/MovementComponent.h" },
				{ "ToolTip", "Setting that controls behavior when movement is restricted to a 2D plane defined by a specific axis/normal,\nso that movement along the locked axis is not be possible.\n@see SetPlaneConstraintAxisSetting" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlaneConstraintAxisSetting = { UE4CodeGen_Private::EPropertyClass::Enum, "PlaneConstraintAxisSetting", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(UMovementComponent, PlaneConstraintAxisSetting), Z_Construct_UEnum_Engine_EPlaneConstraintAxisSetting, METADATA_PARAMS(NewProp_PlaneConstraintAxisSetting_MetaData, ARRAY_COUNT(NewProp_PlaneConstraintAxisSetting_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlaneConstraintAxisSetting_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSnapToPlaneAtStart_MetaData[] = {
				{ "Category", "PlanarMovement" },
				{ "editcondition", "bConstrainToPlane" },
				{ "ModuleRelativePath", "Classes/GameFramework/MovementComponent.h" },
				{ "ToolTip", "If true and plane constraints are enabled, then the updated component will be snapped to the plane when first attached." },
			};
#endif
			auto NewProp_bSnapToPlaneAtStart_SetBit = [](void* Obj){ ((UMovementComponent*)Obj)->bSnapToPlaneAtStart = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSnapToPlaneAtStart = { UE4CodeGen_Private::EPropertyClass::Bool, "bSnapToPlaneAtStart", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMovementComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSnapToPlaneAtStart_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSnapToPlaneAtStart_MetaData, ARRAY_COUNT(NewProp_bSnapToPlaneAtStart_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bConstrainToPlane_MetaData[] = {
				{ "Category", "PlanarMovement" },
				{ "ModuleRelativePath", "Classes/GameFramework/MovementComponent.h" },
				{ "ToolTip", "If true, movement will be constrained to a plane.\n@see PlaneConstraintNormal, PlaneConstraintOrigin, PlaneConstraintAxisSetting" },
			};
#endif
			auto NewProp_bConstrainToPlane_SetBit = [](void* Obj){ ((UMovementComponent*)Obj)->bConstrainToPlane = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConstrainToPlane = { UE4CodeGen_Private::EPropertyClass::Bool, "bConstrainToPlane", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMovementComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bConstrainToPlane_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bConstrainToPlane_MetaData, ARRAY_COUNT(NewProp_bConstrainToPlane_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[] = {
				{ "Category", "Velocity" },
				{ "ModuleRelativePath", "Classes/GameFramework/MovementComponent.h" },
				{ "ToolTip", "Current velocity of updated component." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Velocity = { UE4CodeGen_Private::EPropertyClass::Struct, "Velocity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMovementComponent, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_Velocity_MetaData, ARRAY_COUNT(NewProp_Velocity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdatedPrimitive_MetaData[] = {
				{ "Category", "MovementComponent" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/GameFramework/MovementComponent.h" },
				{ "ToolTip", "UpdatedComponent, cast as a UPrimitiveComponent. May be invalid if UpdatedComponent was null or not a UPrimitiveComponent." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UpdatedPrimitive = { UE4CodeGen_Private::EPropertyClass::Object, "UpdatedPrimitive", RF_Public|RF_Transient|RF_MarkAsNative, 0x001000000028201c, 1, nullptr, STRUCT_OFFSET(UMovementComponent, UpdatedPrimitive), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_UpdatedPrimitive_MetaData, ARRAY_COUNT(NewProp_UpdatedPrimitive_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdatedComponent_MetaData[] = {
				{ "Category", "MovementComponent" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/GameFramework/MovementComponent.h" },
				{ "ToolTip", "The component we move and update.\nIf this is null at startup and bAutoRegisterUpdatedComponent is true, the owning Actor's root component will automatically be set as our UpdatedComponent at startup.\n@see bAutoRegisterUpdatedComponent, SetUpdatedComponent(), UpdatedPrimitive" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UpdatedComponent = { UE4CodeGen_Private::EPropertyClass::Object, "UpdatedComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x001000000028201c, 1, nullptr, STRUCT_OFFSET(UMovementComponent, UpdatedComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_UpdatedComponent_MetaData, ARRAY_COUNT(NewProp_UpdatedComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAutoRegisterUpdatedComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bTickBeforeOwner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAutoUpdateTickRegistration,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUpdateOnlyIfRendered,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlaneConstraintOrigin,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlaneConstraintNormal,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlaneConstraintAxisSetting,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlaneConstraintAxisSetting_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSnapToPlaneAtStart,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bConstrainToPlane,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Velocity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UpdatedPrimitive,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UpdatedComponent,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMovementComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMovementComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00081u,
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
	IMPLEMENT_CLASS(UMovementComponent, 3548646112);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovementComponent(Z_Construct_UClass_UMovementComponent, &UMovementComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
