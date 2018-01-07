// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Camera/CameraShake.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraShake() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EInitialOscillatorOffset();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVOscillator();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFOscillator();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FROscillator();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShake_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShake();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UFunction* Z_Construct_UFunction_UCameraShake_BlueprintUpdateCameraShake();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMinimalViewInfo();
	ENGINE_API UFunction* Z_Construct_UFunction_UCameraShake_ReceiveIsFinished();
	ENGINE_API UFunction* Z_Construct_UFunction_UCameraShake_ReceivePlayShake();
	ENGINE_API UFunction* Z_Construct_UFunction_UCameraShake_ReceiveStopShake();
	ENGINE_API UClass* Z_Construct_UClass_UCameraAnimInst_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraAnim_NoRegister();
// End Cross Module References
	static UEnum* EInitialOscillatorOffset_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EInitialOscillatorOffset, Z_Construct_UPackage__Script_Engine(), TEXT("EInitialOscillatorOffset"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EInitialOscillatorOffset(EInitialOscillatorOffset_StaticEnum, TEXT("/Script/Engine"), TEXT("EInitialOscillatorOffset"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EInitialOscillatorOffset_CRC() { return 881572105U; }
	UEnum* Z_Construct_UEnum_Engine_EInitialOscillatorOffset()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EInitialOscillatorOffset"), 0, Get_Z_Construct_UEnum_Engine_EInitialOscillatorOffset_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EOO_OffsetRandom", (int64)EOO_OffsetRandom },
				{ "EOO_OffsetZero", (int64)EOO_OffsetZero },
				{ "EOO_MAX", (int64)EOO_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "EOO_OffsetRandom.ToolTip", "Start with random offset (default)." },
				{ "EOO_OffsetZero.ToolTip", "Start with zero offset." },
				{ "ModuleRelativePath", "Classes/Camera/CameraShake.h" },
				{ "ToolTip", "Shake start offset parameter" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EInitialOscillatorOffset",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EInitialOscillatorOffset",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FVOscillator::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FVOscillator_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVOscillator, Z_Construct_UPackage__Script_Engine(), TEXT("VOscillator"), sizeof(FVOscillator), Get_Z_Construct_UScriptStruct_FVOscillator_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVOscillator(FVOscillator::StaticStruct, TEXT("/Script/Engine"), TEXT("VOscillator"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFVOscillator
{
	FScriptStruct_Engine_StaticRegisterNativesFVOscillator()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VOscillator")),new UScriptStruct::TCppStructOps<FVOscillator>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFVOscillator;
	UScriptStruct* Z_Construct_UScriptStruct_FVOscillator()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVOscillator_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VOscillator"), sizeof(FVOscillator), Get_Z_Construct_UScriptStruct_FVOscillator_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Camera/CameraShake.h" },
				{ "ToolTip", "Defines FVector oscillation." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVOscillator>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Z_MetaData[] = {
				{ "Category", "VOscillator" },
				{ "ModuleRelativePath", "Classes/Camera/CameraShake.h" },
				{ "ToolTip", "Oscillation in the Z axis." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Z = { UE4CodeGen_Private::EPropertyClass::Struct, "Z", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FVOscillator, Z), Z_Construct_UScriptStruct_FFOscillator, METADATA_PARAMS(NewProp_Z_MetaData, ARRAY_COUNT(NewProp_Z_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[] = {
				{ "Category", "VOscillator" },
				{ "ModuleRelativePath", "Classes/Camera/CameraShake.h" },
				{ "ToolTip", "Oscillation in the Y axis." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Y = { UE4CodeGen_Private::EPropertyClass::Struct, "Y", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FVOscillator, Y), Z_Construct_UScriptStruct_FFOscillator, METADATA_PARAMS(NewProp_Y_MetaData, ARRAY_COUNT(NewProp_Y_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[] = {
				{ "Category", "VOscillator" },
				{ "ModuleRelativePath", "Classes/Camera/CameraShake.h" },
				{ "ToolTip", "Oscillation in the X axis." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_X = { UE4CodeGen_Private::EPropertyClass::Struct, "X", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FVOscillator, X), Z_Construct_UScriptStruct_FFOscillator, METADATA_PARAMS(NewProp_X_MetaData, ARRAY_COUNT(NewProp_X_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Z,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Y,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_X,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"VOscillator",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FVOscillator),
				alignof(FVOscillator),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVOscillator_CRC() { return 48047658U; }
class UScriptStruct* FROscillator::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FROscillator_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FROscillator, Z_Construct_UPackage__Script_Engine(), TEXT("ROscillator"), sizeof(FROscillator), Get_Z_Construct_UScriptStruct_FROscillator_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FROscillator(FROscillator::StaticStruct, TEXT("/Script/Engine"), TEXT("ROscillator"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFROscillator
{
	FScriptStruct_Engine_StaticRegisterNativesFROscillator()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ROscillator")),new UScriptStruct::TCppStructOps<FROscillator>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFROscillator;
	UScriptStruct* Z_Construct_UScriptStruct_FROscillator()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FROscillator_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ROscillator"), sizeof(FROscillator), Get_Z_Construct_UScriptStruct_FROscillator_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Camera/CameraShake.h" },
				{ "ToolTip", "Defines FRotator oscillation." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROscillator>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Roll_MetaData[] = {
				{ "Category", "ROscillator" },
				{ "ModuleRelativePath", "Classes/Camera/CameraShake.h" },
				{ "ToolTip", "Roll oscillation." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Roll = { UE4CodeGen_Private::EPropertyClass::Struct, "Roll", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FROscillator, Roll), Z_Construct_UScriptStruct_FFOscillator, METADATA_PARAMS(NewProp_Roll_MetaData, ARRAY_COUNT(NewProp_Roll_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Yaw_MetaData[] = {
				{ "Category", "ROscillator" },
				{ "ModuleRelativePath", "Classes/Camera/CameraShake.h" },
				{ "ToolTip", "Yaw oscillation." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Yaw = { UE4CodeGen_Private::EPropertyClass::Struct, "Yaw", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FROscillator, Yaw), Z_Construct_UScriptStruct_FFOscillator, METADATA_PARAMS(NewProp_Yaw_MetaData, ARRAY_COUNT(NewProp_Yaw_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pitch_MetaData[] = {
				{ "Category", "ROscillator" },
				{ "ModuleRelativePath", "Classes/Camera/CameraShake.h" },
				{ "ToolTip", "Pitch oscillation." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Pitch = { UE4CodeGen_Private::EPropertyClass::Struct, "Pitch", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FROscillator, Pitch), Z_Construct_UScriptStruct_FFOscillator, METADATA_PARAMS(NewProp_Pitch_MetaData, ARRAY_COUNT(NewProp_Pitch_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Roll,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Yaw,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Pitch,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"ROscillator",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FROscillator),
				alignof(FROscillator),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FROscillator_CRC() { return 1667157684U; }
class UScriptStruct* FFOscillator::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FFOscillator_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFOscillator, Z_Construct_UPackage__Script_Engine(), TEXT("FOscillator"), sizeof(FFOscillator), Get_Z_Construct_UScriptStruct_FFOscillator_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFOscillator(FFOscillator::StaticStruct, TEXT("/Script/Engine"), TEXT("FOscillator"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFFOscillator
{
	FScriptStruct_Engine_StaticRegisterNativesFFOscillator()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FOscillator")),new UScriptStruct::TCppStructOps<FFOscillator>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFFOscillator;
	UScriptStruct* Z_Construct_UScriptStruct_FFOscillator()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFOscillator_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FOscillator"), sizeof(FFOscillator), Get_Z_Construct_UScriptStruct_FFOscillator_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Camera/CameraShake.h" },
				{ "ToolTip", "Defines oscillation of a single number." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFOscillator>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialOffset_MetaData[] = {
				{ "Category", "FOscillator" },
				{ "ModuleRelativePath", "Classes/Camera/CameraShake.h" },
				{ "ToolTip", "Defines how to begin (either at zero, or at a randomized value." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_InitialOffset = { UE4CodeGen_Private::EPropertyClass::Byte, "InitialOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FFOscillator, InitialOffset), Z_Construct_UEnum_Engine_EInitialOscillatorOffset, METADATA_PARAMS(NewProp_InitialOffset_MetaData, ARRAY_COUNT(NewProp_InitialOffset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Frequency_MetaData[] = {
				{ "Category", "FOscillator" },
				{ "ModuleRelativePath", "Classes/Camera/CameraShake.h" },
				{ "ToolTip", "Frequency of the sinusoidal oscillation." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Frequency = { UE4CodeGen_Private::EPropertyClass::Float, "Frequency", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FFOscillator, Frequency), METADATA_PARAMS(NewProp_Frequency_MetaData, ARRAY_COUNT(NewProp_Frequency_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Amplitude_MetaData[] = {
				{ "Category", "FOscillator" },
				{ "ModuleRelativePath", "Classes/Camera/CameraShake.h" },
				{ "ToolTip", "Amplitude of the sinusoidal oscillation." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Amplitude = { UE4CodeGen_Private::EPropertyClass::Float, "Amplitude", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FFOscillator, Amplitude), METADATA_PARAMS(NewProp_Amplitude_MetaData, ARRAY_COUNT(NewProp_Amplitude_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InitialOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Frequency,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Amplitude,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"FOscillator",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FFOscillator),
				alignof(FFOscillator),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFOscillator_CRC() { return 1493360069U; }
	static FName NAME_UCameraShake_BlueprintUpdateCameraShake = FName(TEXT("BlueprintUpdateCameraShake"));
	void UCameraShake::BlueprintUpdateCameraShake(float DeltaTime, float Alpha, FMinimalViewInfo const& POV, FMinimalViewInfo& ModifiedPOV)
	{
		CameraShake_eventBlueprintUpdateCameraShake_Parms Parms;
		Parms.DeltaTime=DeltaTime;
		Parms.Alpha=Alpha;
		Parms.POV=POV;
		Parms.ModifiedPOV=ModifiedPOV;
		ProcessEvent(FindFunctionChecked(NAME_UCameraShake_BlueprintUpdateCameraShake),&Parms);
		ModifiedPOV=Parms.ModifiedPOV;
	}
	static FName NAME_UCameraShake_ReceiveIsFinished = FName(TEXT("ReceiveIsFinished"));
	bool UCameraShake::ReceiveIsFinished() const
	{
		CameraShake_eventReceiveIsFinished_Parms Parms;
		const_cast<UCameraShake*>(this)->ProcessEvent(FindFunctionChecked(NAME_UCameraShake_ReceiveIsFinished),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UCameraShake_ReceivePlayShake = FName(TEXT("ReceivePlayShake"));
	void UCameraShake::ReceivePlayShake(float Scale)
	{
		CameraShake_eventReceivePlayShake_Parms Parms;
		Parms.Scale=Scale;
		ProcessEvent(FindFunctionChecked(NAME_UCameraShake_ReceivePlayShake),&Parms);
	}
	static FName NAME_UCameraShake_ReceiveStopShake = FName(TEXT("ReceiveStopShake"));
	void UCameraShake::ReceiveStopShake(bool bImmediately)
	{
		CameraShake_eventReceiveStopShake_Parms Parms;
		Parms.bImmediately=bImmediately ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UCameraShake_ReceiveStopShake),&Parms);
	}
	void UCameraShake::StaticRegisterNativesUCameraShake()
	{
		UClass* Class = UCameraShake::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReceiveIsFinished", (Native)&UCameraShake::execReceiveIsFinished },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UCameraShake_BlueprintUpdateCameraShake()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ModifiedPOV = { UE4CodeGen_Private::EPropertyClass::Struct, "ModifiedPOV", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(CameraShake_eventBlueprintUpdateCameraShake_Parms, ModifiedPOV), Z_Construct_UScriptStruct_FMinimalViewInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_POV_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_POV = { UE4CodeGen_Private::EPropertyClass::Struct, "POV", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(CameraShake_eventBlueprintUpdateCameraShake_Parms, POV), Z_Construct_UScriptStruct_FMinimalViewInfo, METADATA_PARAMS(NewProp_POV_MetaData, ARRAY_COUNT(NewProp_POV_MetaData)) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Alpha = { UE4CodeGen_Private::EPropertyClass::Float, "Alpha", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CameraShake_eventBlueprintUpdateCameraShake_Parms, Alpha), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime = { UE4CodeGen_Private::EPropertyClass::Float, "DeltaTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CameraShake_eventBlueprintUpdateCameraShake_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ModifiedPOV,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_POV,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Alpha,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DeltaTime,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "CameraShake" },
				{ "ModuleRelativePath", "Classes/Camera/CameraShake.h" },
				{ "ToolTip", "Called every tick to let the shake modify the point of view" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraShake, "BlueprintUpdateCameraShake", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08420800, sizeof(CameraShake_eventBlueprintUpdateCameraShake_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCameraShake_ReceiveIsFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((CameraShake_eventReceiveIsFinished_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(CameraShake_eventReceiveIsFinished_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "CameraShake" },
				{ "ModuleRelativePath", "Classes/Camera/CameraShake.h" },
				{ "ToolTip", "Called to allow a shake to decide when it's finished playing." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraShake, "ReceiveIsFinished", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x48020C00, sizeof(CameraShake_eventReceiveIsFinished_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCameraShake_ReceivePlayShake()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scale = { UE4CodeGen_Private::EPropertyClass::Float, "Scale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CameraShake_eventReceivePlayShake_Parms, Scale), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Scale,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "CameraShake" },
				{ "ModuleRelativePath", "Classes/Camera/CameraShake.h" },
				{ "ToolTip", "Called when the shake starts playing" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraShake, "ReceivePlayShake", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, sizeof(CameraShake_eventReceivePlayShake_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCameraShake_ReceiveStopShake()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bImmediately_SetBit = [](void* Obj){ ((CameraShake_eventReceiveStopShake_Parms*)Obj)->bImmediately = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bImmediately = { UE4CodeGen_Private::EPropertyClass::Bool, "bImmediately", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(CameraShake_eventReceiveStopShake_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bImmediately_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bImmediately,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "CameraShake" },
				{ "ModuleRelativePath", "Classes/Camera/CameraShake.h" },
				{ "ToolTip", "Called when the shake is explicitly stopped.\n@param bImmediatly           If true, shake stops right away regardless of blend out settings. If false, shake may blend out according to its settings." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraShake, "ReceiveStopShake", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, sizeof(CameraShake_eventReceiveStopShake_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCameraShake_NoRegister()
	{
		return UCameraShake::StaticClass();
	}
	UClass* Z_Construct_UClass_UCameraShake()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UCameraShake_BlueprintUpdateCameraShake, "BlueprintUpdateCameraShake" }, // 2427961329
				{ &Z_Construct_UFunction_UCameraShake_ReceiveIsFinished, "ReceiveIsFinished" }, // 1666137678
				{ &Z_Construct_UFunction_UCameraShake_ReceivePlayShake, "ReceivePlayShake" }, // 3202067107
				{ &Z_Construct_UFunction_UCameraShake_ReceiveStopShake, "ReceiveStopShake" }, // 2025681944
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "Camera/CameraShake.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Classes/Camera/CameraShake.h" },
				{ "ToolTip", "A CameraShake is an asset that defines how to shake the camera in\na particular way. CameraShakes can be authored as either oscillating shakes,\nanimated shakes, or both.\n\nAn oscillating shake will sinusoidally vibrate various camera parameters over time. Each location\nand rotation axis can be oscillated independently with different parameters to create complex and\nrandom-feeling shakes. These are easier to author and tweak, but can still feel mechanical and are\nlimited to vibration-style shakes, such as earthquakes.\n\nAnimated shakes play keyframed camera animations.  These can take more effort to author, but enable\nmore natural-feeling results and things like directional shakes.  For instance, you can have an explosion\nto the camera's right push it primarily to the left." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimInst_MetaData[] = {
				{ "Category", "CameraShake" },
				{ "ModuleRelativePath", "Classes/Camera/CameraShake.h" },
				{ "ToolTip", "The playing instance of the CameraAnim-based shake, if any." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimInst = { UE4CodeGen_Private::EPropertyClass::Object, "AnimInst", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002014, 1, nullptr, STRUCT_OFFSET(UCameraShake, AnimInst), Z_Construct_UClass_UCameraAnimInst_NoRegister, METADATA_PARAMS(NewProp_AnimInst_MetaData, ARRAY_COUNT(NewProp_AnimInst_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OscillatorTimeRemaining_MetaData[] = {
				{ "Category", "CameraShake" },
				{ "ModuleRelativePath", "Classes/Camera/CameraShake.h" },
				{ "ToolTip", "Time remaining for oscillation shakes. Less than 0.f means shake infinitely." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OscillatorTimeRemaining = { UE4CodeGen_Private::EPropertyClass::Float, "OscillatorTimeRemaining", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002014, 1, nullptr, STRUCT_OFFSET(UCameraShake, OscillatorTimeRemaining), METADATA_PARAMS(NewProp_OscillatorTimeRemaining_MetaData, ARRAY_COUNT(NewProp_OscillatorTimeRemaining_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShakeScale_MetaData[] = {
				{ "Category", "CameraShake" },
				{ "ModuleRelativePath", "Classes/Camera/CameraShake.h" },
				{ "ToolTip", "Overall intensity scale for this shake instance." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShakeScale = { UE4CodeGen_Private::EPropertyClass::Float, "ShakeScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002014, 1, nullptr, STRUCT_OFFSET(UCameraShake, ShakeScale), METADATA_PARAMS(NewProp_ShakeScale_MetaData, ARRAY_COUNT(NewProp_ShakeScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraOwner_MetaData[] = {
				{ "Category", "CameraShake" },
				{ "ModuleRelativePath", "Classes/Camera/CameraShake.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraOwner = { UE4CodeGen_Private::EPropertyClass::Object, "CameraOwner", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000002014, 1, nullptr, STRUCT_OFFSET(UCameraShake, CameraOwner), Z_Construct_UClass_APlayerCameraManager_NoRegister, METADATA_PARAMS(NewProp_CameraOwner_MetaData, ARRAY_COUNT(NewProp_CameraOwner_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRandomAnimSegment_MetaData[] = {
				{ "Category", "AnimShake" },
				{ "ModuleRelativePath", "Classes/Camera/CameraShake.h" },
				{ "ToolTip", "If true, play a random snippet of the animation of length Duration.  Implies bLoop and bRandomStartTime = true for the CameraAnim.\nIf false, play the full anim once, non-looped. Useful for getting variety out of a single looped CameraAnim asset." },
			};
#endif
			auto NewProp_bRandomAnimSegment_SetBit = [](void* Obj){ ((UCameraShake*)Obj)->bRandomAnimSegment = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRandomAnimSegment = { UE4CodeGen_Private::EPropertyClass::Bool, "bRandomAnimSegment", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UCameraShake), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bRandomAnimSegment_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bRandomAnimSegment_MetaData, ARRAY_COUNT(NewProp_bRandomAnimSegment_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Anim_MetaData[] = {
				{ "Category", "AnimShake" },
				{ "ModuleRelativePath", "Classes/Camera/CameraShake.h" },
				{ "ToolTip", "Source camera animation to play. Can be null." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Anim = { UE4CodeGen_Private::EPropertyClass::Object, "Anim", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UCameraShake, Anim), Z_Construct_UClass_UCameraAnim_NoRegister, METADATA_PARAMS(NewProp_Anim_MetaData, ARRAY_COUNT(NewProp_Anim_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomAnimSegmentDuration_MetaData[] = {
				{ "Category", "AnimShake" },
				{ "ClampMin", "0.0" },
				{ "editcondition", "bRandomAnimSegment" },
				{ "ModuleRelativePath", "Classes/Camera/CameraShake.h" },
				{ "ToolTip", "When bRandomAnimSegment is true, this defines how long the anim should play." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RandomAnimSegmentDuration = { UE4CodeGen_Private::EPropertyClass::Float, "RandomAnimSegmentDuration", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UCameraShake, RandomAnimSegmentDuration), METADATA_PARAMS(NewProp_RandomAnimSegmentDuration_MetaData, ARRAY_COUNT(NewProp_RandomAnimSegmentDuration_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimBlendOutTime_MetaData[] = {
				{ "Category", "AnimShake" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Classes/Camera/CameraShake.h" },
				{ "ToolTip", "Linear blend-out time." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AnimBlendOutTime = { UE4CodeGen_Private::EPropertyClass::Float, "AnimBlendOutTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UCameraShake, AnimBlendOutTime), METADATA_PARAMS(NewProp_AnimBlendOutTime_MetaData, ARRAY_COUNT(NewProp_AnimBlendOutTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimBlendInTime_MetaData[] = {
				{ "Category", "AnimShake" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Classes/Camera/CameraShake.h" },
				{ "ToolTip", "Linear blend-in time." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AnimBlendInTime = { UE4CodeGen_Private::EPropertyClass::Float, "AnimBlendInTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UCameraShake, AnimBlendInTime), METADATA_PARAMS(NewProp_AnimBlendInTime_MetaData, ARRAY_COUNT(NewProp_AnimBlendInTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimScale_MetaData[] = {
				{ "Category", "AnimShake" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Classes/Camera/CameraShake.h" },
				{ "ToolTip", "Scalar defining how \"intense\" to play the anim." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AnimScale = { UE4CodeGen_Private::EPropertyClass::Float, "AnimScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UCameraShake, AnimScale), METADATA_PARAMS(NewProp_AnimScale_MetaData, ARRAY_COUNT(NewProp_AnimScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimPlayRate_MetaData[] = {
				{ "Category", "AnimShake" },
				{ "ClampMin", "0.001" },
				{ "ModuleRelativePath", "Classes/Camera/CameraShake.h" },
				{ "ToolTip", "Scalar defining how fast to play the anim." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AnimPlayRate = { UE4CodeGen_Private::EPropertyClass::Float, "AnimPlayRate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UCameraShake, AnimPlayRate), METADATA_PARAMS(NewProp_AnimPlayRate_MetaData, ARRAY_COUNT(NewProp_AnimPlayRate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FOVOscillation_MetaData[] = {
				{ "Category", "Oscillation" },
				{ "ModuleRelativePath", "Classes/Camera/CameraShake.h" },
				{ "ToolTip", "FOV oscillation" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_FOVOscillation = { UE4CodeGen_Private::EPropertyClass::Struct, "FOVOscillation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UCameraShake, FOVOscillation), Z_Construct_UScriptStruct_FFOscillator, METADATA_PARAMS(NewProp_FOVOscillation_MetaData, ARRAY_COUNT(NewProp_FOVOscillation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocOscillation_MetaData[] = {
				{ "Category", "Oscillation" },
				{ "ModuleRelativePath", "Classes/Camera/CameraShake.h" },
				{ "ToolTip", "Positional oscillation" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocOscillation = { UE4CodeGen_Private::EPropertyClass::Struct, "LocOscillation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UCameraShake, LocOscillation), Z_Construct_UScriptStruct_FVOscillator, METADATA_PARAMS(NewProp_LocOscillation_MetaData, ARRAY_COUNT(NewProp_LocOscillation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotOscillation_MetaData[] = {
				{ "Category", "Oscillation" },
				{ "ModuleRelativePath", "Classes/Camera/CameraShake.h" },
				{ "ToolTip", "Rotational oscillation" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotOscillation = { UE4CodeGen_Private::EPropertyClass::Struct, "RotOscillation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UCameraShake, RotOscillation), Z_Construct_UScriptStruct_FROscillator, METADATA_PARAMS(NewProp_RotOscillation_MetaData, ARRAY_COUNT(NewProp_RotOscillation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OscillationBlendOutTime_MetaData[] = {
				{ "Category", "Oscillation" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Classes/Camera/CameraShake.h" },
				{ "ToolTip", "Duration of the blend-out, where the oscillation scales from 1 to 0." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OscillationBlendOutTime = { UE4CodeGen_Private::EPropertyClass::Float, "OscillationBlendOutTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UCameraShake, OscillationBlendOutTime), METADATA_PARAMS(NewProp_OscillationBlendOutTime_MetaData, ARRAY_COUNT(NewProp_OscillationBlendOutTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OscillationBlendInTime_MetaData[] = {
				{ "Category", "Oscillation" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Classes/Camera/CameraShake.h" },
				{ "ToolTip", "Duration of the blend-in, where the oscillation scales from 0 to 1." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OscillationBlendInTime = { UE4CodeGen_Private::EPropertyClass::Float, "OscillationBlendInTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UCameraShake, OscillationBlendInTime), METADATA_PARAMS(NewProp_OscillationBlendInTime_MetaData, ARRAY_COUNT(NewProp_OscillationBlendInTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OscillationDuration_MetaData[] = {
				{ "Category", "Oscillation" },
				{ "ModuleRelativePath", "Classes/Camera/CameraShake.h" },
				{ "ToolTip", "Duration in seconds of current screen shake. Less than 0 means indefinite, 0 means no oscillation." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OscillationDuration = { UE4CodeGen_Private::EPropertyClass::Float, "OscillationDuration", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UCameraShake, OscillationDuration), METADATA_PARAMS(NewProp_OscillationDuration_MetaData, ARRAY_COUNT(NewProp_OscillationDuration_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSingleInstance_MetaData[] = {
				{ "Category", "CameraShake" },
				{ "ModuleRelativePath", "Classes/Camera/CameraShake.h" },
				{ "ToolTip", "If true to only allow a single instance of this shake class to play at any given time.\nSubsequent attempts to play this shake will simply restart the timer." },
			};
#endif
			auto NewProp_bSingleInstance_SetBit = [](void* Obj){ ((UCameraShake*)Obj)->bSingleInstance = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSingleInstance = { UE4CodeGen_Private::EPropertyClass::Bool, "bSingleInstance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UCameraShake), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSingleInstance_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSingleInstance_MetaData, ARRAY_COUNT(NewProp_bSingleInstance_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AnimInst,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OscillatorTimeRemaining,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ShakeScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CameraOwner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bRandomAnimSegment,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Anim,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RandomAnimSegmentDuration,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AnimBlendOutTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AnimBlendInTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AnimScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AnimPlayRate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FOVOscillation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LocOscillation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RotOscillation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OscillationBlendOutTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OscillationBlendInTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OscillationDuration,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSingleInstance,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UCameraShake>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UCameraShake::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00101080u,
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
	IMPLEMENT_CLASS(UCameraShake, 1248482082);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCameraShake(Z_Construct_UClass_UCameraShake, &UCameraShake::StaticClass, TEXT("/Script/Engine"), TEXT("UCameraShake"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCameraShake);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
