// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Components/WindDirectionalSourceComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWindDirectionalSourceComponent() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EWindSourceType();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UWindDirectionalSourceComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWindDirectionalSourceComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	ENGINE_API UFunction* Z_Construct_UFunction_UWindDirectionalSourceComponent_SetMaximumGustAmount();
	ENGINE_API UFunction* Z_Construct_UFunction_UWindDirectionalSourceComponent_SetMinimumGustAmount();
	ENGINE_API UFunction* Z_Construct_UFunction_UWindDirectionalSourceComponent_SetRadius();
	ENGINE_API UFunction* Z_Construct_UFunction_UWindDirectionalSourceComponent_SetSpeed();
	ENGINE_API UFunction* Z_Construct_UFunction_UWindDirectionalSourceComponent_SetStrength();
	ENGINE_API UFunction* Z_Construct_UFunction_UWindDirectionalSourceComponent_SetWindType();
// End Cross Module References
	static UEnum* EWindSourceType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EWindSourceType, Z_Construct_UPackage__Script_Engine(), TEXT("EWindSourceType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EWindSourceType(EWindSourceType_StaticEnum, TEXT("/Script/Engine"), TEXT("EWindSourceType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EWindSourceType_CRC() { return 1527455670U; }
	UEnum* Z_Construct_UEnum_Engine_EWindSourceType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EWindSourceType"), 0, Get_Z_Construct_UEnum_Engine_EWindSourceType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EWindSourceType::Directional", (int64)EWindSourceType::Directional },
				{ "EWindSourceType::Point", (int64)EWindSourceType::Point },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Components/WindDirectionalSourceComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EWindSourceType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EWindSourceType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UWindDirectionalSourceComponent::StaticRegisterNativesUWindDirectionalSourceComponent()
	{
		UClass* Class = UWindDirectionalSourceComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetMaximumGustAmount", (Native)&UWindDirectionalSourceComponent::execSetMaximumGustAmount },
			{ "SetMinimumGustAmount", (Native)&UWindDirectionalSourceComponent::execSetMinimumGustAmount },
			{ "SetRadius", (Native)&UWindDirectionalSourceComponent::execSetRadius },
			{ "SetSpeed", (Native)&UWindDirectionalSourceComponent::execSetSpeed },
			{ "SetStrength", (Native)&UWindDirectionalSourceComponent::execSetStrength },
			{ "SetWindType", (Native)&UWindDirectionalSourceComponent::execSetWindType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UWindDirectionalSourceComponent_SetMaximumGustAmount()
	{
		struct WindDirectionalSourceComponent_eventSetMaximumGustAmount_Parms
		{
			float InNewMaxGust;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InNewMaxGust = { UE4CodeGen_Private::EPropertyClass::Float, "InNewMaxGust", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(WindDirectionalSourceComponent_eventSetMaximumGustAmount_Parms, InNewMaxGust), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InNewMaxGust,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Wind" },
				{ "ModuleRelativePath", "Classes/Components/WindDirectionalSourceComponent.h" },
				{ "ToolTip", "Set maximum deviation for wind gusts" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UWindDirectionalSourceComponent, "SetMaximumGustAmount", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(WindDirectionalSourceComponent_eventSetMaximumGustAmount_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UWindDirectionalSourceComponent_SetMinimumGustAmount()
	{
		struct WindDirectionalSourceComponent_eventSetMinimumGustAmount_Parms
		{
			float InNewMinGust;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InNewMinGust = { UE4CodeGen_Private::EPropertyClass::Float, "InNewMinGust", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(WindDirectionalSourceComponent_eventSetMinimumGustAmount_Parms, InNewMinGust), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InNewMinGust,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Wind" },
				{ "ModuleRelativePath", "Classes/Components/WindDirectionalSourceComponent.h" },
				{ "ToolTip", "Set minimum deviation for wind gusts" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UWindDirectionalSourceComponent, "SetMinimumGustAmount", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(WindDirectionalSourceComponent_eventSetMinimumGustAmount_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UWindDirectionalSourceComponent_SetRadius()
	{
		struct WindDirectionalSourceComponent_eventSetRadius_Parms
		{
			float InNewRadius;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InNewRadius = { UE4CodeGen_Private::EPropertyClass::Float, "InNewRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(WindDirectionalSourceComponent_eventSetRadius_Parms, InNewRadius), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InNewRadius,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Wind" },
				{ "ModuleRelativePath", "Classes/Components/WindDirectionalSourceComponent.h" },
				{ "ToolTip", "Set the effect radius for point wind" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UWindDirectionalSourceComponent, "SetRadius", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(WindDirectionalSourceComponent_eventSetRadius_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UWindDirectionalSourceComponent_SetSpeed()
	{
		struct WindDirectionalSourceComponent_eventSetSpeed_Parms
		{
			float InNewSpeed;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InNewSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "InNewSpeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(WindDirectionalSourceComponent_eventSetSpeed_Parms, InNewSpeed), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InNewSpeed,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Wind" },
				{ "ModuleRelativePath", "Classes/Components/WindDirectionalSourceComponent.h" },
				{ "ToolTip", "Sets the windspeed of the generated wind" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UWindDirectionalSourceComponent, "SetSpeed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(WindDirectionalSourceComponent_eventSetSpeed_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UWindDirectionalSourceComponent_SetStrength()
	{
		struct WindDirectionalSourceComponent_eventSetStrength_Parms
		{
			float InNewStrength;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InNewStrength = { UE4CodeGen_Private::EPropertyClass::Float, "InNewStrength", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(WindDirectionalSourceComponent_eventSetStrength_Parms, InNewStrength), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InNewStrength,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Wind" },
				{ "ModuleRelativePath", "Classes/Components/WindDirectionalSourceComponent.h" },
				{ "ToolTip", "Sets the strength of the generated wind" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UWindDirectionalSourceComponent, "SetStrength", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(WindDirectionalSourceComponent_eventSetStrength_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UWindDirectionalSourceComponent_SetWindType()
	{
		struct WindDirectionalSourceComponent_eventSetWindType_Parms
		{
			EWindSourceType InNewType;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InNewType = { UE4CodeGen_Private::EPropertyClass::Enum, "InNewType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(WindDirectionalSourceComponent_eventSetWindType_Parms, InNewType), Z_Construct_UEnum_Engine_EWindSourceType, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_InNewType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InNewType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InNewType_Underlying,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Wind" },
				{ "ModuleRelativePath", "Classes/Components/WindDirectionalSourceComponent.h" },
				{ "ToolTip", "Set the type of wind generator to use" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UWindDirectionalSourceComponent, "SetWindType", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(WindDirectionalSourceComponent_eventSetWindType_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWindDirectionalSourceComponent_NoRegister()
	{
		return UWindDirectionalSourceComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UWindDirectionalSourceComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_USceneComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UWindDirectionalSourceComponent_SetMaximumGustAmount, "SetMaximumGustAmount" }, // 1680638722
				{ &Z_Construct_UFunction_UWindDirectionalSourceComponent_SetMinimumGustAmount, "SetMinimumGustAmount" }, // 729414436
				{ &Z_Construct_UFunction_UWindDirectionalSourceComponent_SetRadius, "SetRadius" }, // 2607623008
				{ &Z_Construct_UFunction_UWindDirectionalSourceComponent_SetSpeed, "SetSpeed" }, // 3763410991
				{ &Z_Construct_UFunction_UWindDirectionalSourceComponent_SetStrength, "SetStrength" }, // 189226347
				{ &Z_Construct_UFunction_UWindDirectionalSourceComponent_SetWindType, "SetWindType" }, // 145202891
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Object Mobility Trigger PhysicsVolume" },
				{ "IncludePath", "Components/WindDirectionalSourceComponent.h" },
				{ "ModuleRelativePath", "Classes/Components/WindDirectionalSourceComponent.h" },
				{ "ToolTip", "Component that provides a directional wind source. Only affects SpeedTree assets." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPointWind_MetaData[] = {
				{ "Category", "WindDirectionalSourceComponent" },
				{ "ModuleRelativePath", "Classes/Components/WindDirectionalSourceComponent.h" },
			};
#endif
			auto NewProp_bPointWind_SetBit = [](void* Obj){ ((UWindDirectionalSourceComponent*)Obj)->bPointWind = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPointWind = { UE4CodeGen_Private::EPropertyClass::Bool, "bPointWind", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UWindDirectionalSourceComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bPointWind_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bPointWind_MetaData, ARRAY_COUNT(NewProp_bPointWind_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
				{ "Category", "WindDirectionalSourceComponent" },
				{ "ClampMin", "0.1" },
				{ "editcondition", "bSimulatePhysics" },
				{ "ModuleRelativePath", "Classes/Components/WindDirectionalSourceComponent.h" },
				{ "UIMin", "0.1" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius = { UE4CodeGen_Private::EPropertyClass::Float, "Radius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000200000005, 1, nullptr, STRUCT_OFFSET(UWindDirectionalSourceComponent, Radius), METADATA_PARAMS(NewProp_Radius_MetaData, ARRAY_COUNT(NewProp_Radius_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxGustAmount_MetaData[] = {
				{ "Category", "WindDirectionalSourceComponent" },
				{ "ModuleRelativePath", "Classes/Components/WindDirectionalSourceComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxGustAmount = { UE4CodeGen_Private::EPropertyClass::Float, "MaxGustAmount", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000200000015, 1, nullptr, STRUCT_OFFSET(UWindDirectionalSourceComponent, MaxGustAmount), METADATA_PARAMS(NewProp_MaxGustAmount_MetaData, ARRAY_COUNT(NewProp_MaxGustAmount_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinGustAmount_MetaData[] = {
				{ "Category", "WindDirectionalSourceComponent" },
				{ "ModuleRelativePath", "Classes/Components/WindDirectionalSourceComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinGustAmount = { UE4CodeGen_Private::EPropertyClass::Float, "MinGustAmount", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000200000015, 1, nullptr, STRUCT_OFFSET(UWindDirectionalSourceComponent, MinGustAmount), METADATA_PARAMS(NewProp_MinGustAmount_MetaData, ARRAY_COUNT(NewProp_MinGustAmount_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[] = {
				{ "Category", "WindDirectionalSourceComponent" },
				{ "ModuleRelativePath", "Classes/Components/WindDirectionalSourceComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Speed = { UE4CodeGen_Private::EPropertyClass::Float, "Speed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000200000005, 1, nullptr, STRUCT_OFFSET(UWindDirectionalSourceComponent, Speed), METADATA_PARAMS(NewProp_Speed_MetaData, ARRAY_COUNT(NewProp_Speed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[] = {
				{ "Category", "WindDirectionalSourceComponent" },
				{ "ModuleRelativePath", "Classes/Components/WindDirectionalSourceComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Strength = { UE4CodeGen_Private::EPropertyClass::Float, "Strength", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000200000005, 1, nullptr, STRUCT_OFFSET(UWindDirectionalSourceComponent, Strength), METADATA_PARAMS(NewProp_Strength_MetaData, ARRAY_COUNT(NewProp_Strength_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bPointWind,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Radius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxGustAmount,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MinGustAmount,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Speed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Strength,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UWindDirectionalSourceComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UWindDirectionalSourceComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00A03080u,
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
	IMPLEMENT_CLASS(UWindDirectionalSourceComponent, 2411745260);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWindDirectionalSourceComponent(Z_Construct_UClass_UWindDirectionalSourceComponent, &UWindDirectionalSourceComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UWindDirectionalSourceComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWindDirectionalSourceComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
