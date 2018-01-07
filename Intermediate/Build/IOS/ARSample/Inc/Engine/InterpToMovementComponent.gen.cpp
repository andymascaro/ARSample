// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Components/InterpToMovementComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpToMovementComponent() {}
// Cross Module References
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToResetDelegate__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_UInterpToMovementComponent();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToWaitEndDelegate__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToWaitBeginDelegate__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToStopDelegate__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToReverseDelegate__DelegateSignature();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EInterpToBehaviourType();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInterpControlPoint();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UInterpToMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMovementComponent();
	ENGINE_API UFunction* Z_Construct_UFunction_UInterpToMovementComponent_FinaliseControlPoints();
	ENGINE_API UFunction* Z_Construct_UFunction_UInterpToMovementComponent_RestartMovement();
	ENGINE_API UFunction* Z_Construct_UFunction_UInterpToMovementComponent_StopSimulating();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToResetDelegate__DelegateSignature()
	{
		struct InterpToMovementComponent_eventOnInterpToResetDelegate_Parms
		{
			FHitResult ImpactResult;
			float Time;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time = { UE4CodeGen_Private::EPropertyClass::Float, "Time", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(InterpToMovementComponent_eventOnInterpToResetDelegate_Parms, Time), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpactResult_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ImpactResult = { UE4CodeGen_Private::EPropertyClass::Struct, "ImpactResult", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008008000182, 1, nullptr, STRUCT_OFFSET(InterpToMovementComponent_eventOnInterpToResetDelegate_Parms, ImpactResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(NewProp_ImpactResult_MetaData, ARRAY_COUNT(NewProp_ImpactResult_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Time,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ImpactResult,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Components/InterpToMovementComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterpToMovementComponent, "OnInterpToResetDelegate__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00530000, sizeof(InterpToMovementComponent_eventOnInterpToResetDelegate_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToWaitEndDelegate__DelegateSignature()
	{
		struct InterpToMovementComponent_eventOnInterpToWaitEndDelegate_Parms
		{
			FHitResult ImpactResult;
			float Time;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time = { UE4CodeGen_Private::EPropertyClass::Float, "Time", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(InterpToMovementComponent_eventOnInterpToWaitEndDelegate_Parms, Time), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpactResult_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ImpactResult = { UE4CodeGen_Private::EPropertyClass::Struct, "ImpactResult", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008008000182, 1, nullptr, STRUCT_OFFSET(InterpToMovementComponent_eventOnInterpToWaitEndDelegate_Parms, ImpactResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(NewProp_ImpactResult_MetaData, ARRAY_COUNT(NewProp_ImpactResult_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Time,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ImpactResult,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Components/InterpToMovementComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterpToMovementComponent, "OnInterpToWaitEndDelegate__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00530000, sizeof(InterpToMovementComponent_eventOnInterpToWaitEndDelegate_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToWaitBeginDelegate__DelegateSignature()
	{
		struct InterpToMovementComponent_eventOnInterpToWaitBeginDelegate_Parms
		{
			FHitResult ImpactResult;
			float Time;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time = { UE4CodeGen_Private::EPropertyClass::Float, "Time", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(InterpToMovementComponent_eventOnInterpToWaitBeginDelegate_Parms, Time), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpactResult_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ImpactResult = { UE4CodeGen_Private::EPropertyClass::Struct, "ImpactResult", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008008000182, 1, nullptr, STRUCT_OFFSET(InterpToMovementComponent_eventOnInterpToWaitBeginDelegate_Parms, ImpactResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(NewProp_ImpactResult_MetaData, ARRAY_COUNT(NewProp_ImpactResult_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Time,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ImpactResult,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Components/InterpToMovementComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterpToMovementComponent, "OnInterpToWaitBeginDelegate__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00530000, sizeof(InterpToMovementComponent_eventOnInterpToWaitBeginDelegate_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToStopDelegate__DelegateSignature()
	{
		struct InterpToMovementComponent_eventOnInterpToStopDelegate_Parms
		{
			FHitResult ImpactResult;
			float Time;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time = { UE4CodeGen_Private::EPropertyClass::Float, "Time", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(InterpToMovementComponent_eventOnInterpToStopDelegate_Parms, Time), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpactResult_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ImpactResult = { UE4CodeGen_Private::EPropertyClass::Struct, "ImpactResult", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008008000182, 1, nullptr, STRUCT_OFFSET(InterpToMovementComponent_eventOnInterpToStopDelegate_Parms, ImpactResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(NewProp_ImpactResult_MetaData, ARRAY_COUNT(NewProp_ImpactResult_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Time,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ImpactResult,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Components/InterpToMovementComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterpToMovementComponent, "OnInterpToStopDelegate__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00530000, sizeof(InterpToMovementComponent_eventOnInterpToStopDelegate_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToReverseDelegate__DelegateSignature()
	{
		struct InterpToMovementComponent_eventOnInterpToReverseDelegate_Parms
		{
			FHitResult ImpactResult;
			float Time;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time = { UE4CodeGen_Private::EPropertyClass::Float, "Time", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(InterpToMovementComponent_eventOnInterpToReverseDelegate_Parms, Time), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpactResult_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ImpactResult = { UE4CodeGen_Private::EPropertyClass::Struct, "ImpactResult", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008008000182, 1, nullptr, STRUCT_OFFSET(InterpToMovementComponent_eventOnInterpToReverseDelegate_Parms, ImpactResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(NewProp_ImpactResult_MetaData, ARRAY_COUNT(NewProp_ImpactResult_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Time,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ImpactResult,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Components/InterpToMovementComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterpToMovementComponent, "OnInterpToReverseDelegate__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00530000, sizeof(InterpToMovementComponent_eventOnInterpToReverseDelegate_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EInterpToBehaviourType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EInterpToBehaviourType, Z_Construct_UPackage__Script_Engine(), TEXT("EInterpToBehaviourType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EInterpToBehaviourType(EInterpToBehaviourType_StaticEnum, TEXT("/Script/Engine"), TEXT("EInterpToBehaviourType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EInterpToBehaviourType_CRC() { return 1528009802U; }
	UEnum* Z_Construct_UEnum_Engine_EInterpToBehaviourType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EInterpToBehaviourType"), 0, Get_Z_Construct_UEnum_Engine_EInterpToBehaviourType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EInterpToBehaviourType::OneShot", (int64)EInterpToBehaviourType::OneShot },
				{ "EInterpToBehaviourType::OneShot_Reverse", (int64)EInterpToBehaviourType::OneShot_Reverse },
				{ "EInterpToBehaviourType::Loop_Reset", (int64)EInterpToBehaviourType::Loop_Reset },
				{ "EInterpToBehaviourType::PingPong", (int64)EInterpToBehaviourType::PingPong },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Loop_Reset.ToolTip", "Reset back to start when reaching the end" },
				{ "ModuleRelativePath", "Classes/Components/InterpToMovementComponent.h" },
				{ "OneShot.ToolTip", "Move to destination and stop" },
				{ "OneShot_Reverse.ToolTip", "Move to destination, return and stop" },
				{ "PingPong.ToolTip", "Repeatedly lerp from start to end and back" },
				{ "ToolTip", "Controls the movement behaviour" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EInterpToBehaviourType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EInterpToBehaviourType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FInterpControlPoint::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FInterpControlPoint_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInterpControlPoint, Z_Construct_UPackage__Script_Engine(), TEXT("InterpControlPoint"), sizeof(FInterpControlPoint), Get_Z_Construct_UScriptStruct_FInterpControlPoint_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInterpControlPoint(FInterpControlPoint::StaticStruct, TEXT("/Script/Engine"), TEXT("InterpControlPoint"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFInterpControlPoint
{
	FScriptStruct_Engine_StaticRegisterNativesFInterpControlPoint()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InterpControlPoint")),new UScriptStruct::TCppStructOps<FInterpControlPoint>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFInterpControlPoint;
	UScriptStruct* Z_Construct_UScriptStruct_FInterpControlPoint()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInterpControlPoint_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InterpControlPoint"), sizeof(FInterpControlPoint), Get_Z_Construct_UScriptStruct_FInterpControlPoint_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/Components/InterpToMovementComponent.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInterpControlPoint>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPositionIsRelative_MetaData[] = {
				{ "Category", "Location" },
				{ "ModuleRelativePath", "Classes/Components/InterpToMovementComponent.h" },
				{ "ToolTip", "Is the location relative to the root components initial location" },
			};
#endif
			auto NewProp_bPositionIsRelative_SetBit = [](void* Obj){ ((FInterpControlPoint*)Obj)->bPositionIsRelative = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPositionIsRelative = { UE4CodeGen_Private::EPropertyClass::Bool, "bPositionIsRelative", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FInterpControlPoint), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bPositionIsRelative_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bPositionIsRelative_MetaData, ARRAY_COUNT(NewProp_bPositionIsRelative_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PositionControlPoint_MetaData[] = {
				{ "Category", "Location" },
				{ "MakeEditWidget", "TRUE" },
				{ "ModuleRelativePath", "Classes/Components/InterpToMovementComponent.h" },
				{ "ToolTip", "The position of the point" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PositionControlPoint = { UE4CodeGen_Private::EPropertyClass::Struct, "PositionControlPoint", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FInterpControlPoint, PositionControlPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_PositionControlPoint_MetaData, ARRAY_COUNT(NewProp_PositionControlPoint_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bPositionIsRelative,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PositionControlPoint,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"InterpControlPoint",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FInterpControlPoint),
				alignof(FInterpControlPoint),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInterpControlPoint_CRC() { return 2226860688U; }
	void UInterpToMovementComponent::StaticRegisterNativesUInterpToMovementComponent()
	{
		UClass* Class = UInterpToMovementComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FinaliseControlPoints", (Native)&UInterpToMovementComponent::execFinaliseControlPoints },
			{ "RestartMovement", (Native)&UInterpToMovementComponent::execRestartMovement },
			{ "StopSimulating", (Native)&UInterpToMovementComponent::execStopSimulating },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UInterpToMovementComponent_FinaliseControlPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Control" },
				{ "ModuleRelativePath", "Classes/Components/InterpToMovementComponent.h" },
				{ "ToolTip", "Initialise the control points array. Call after adding control points if they are add after begin play ." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterpToMovementComponent, "FinaliseControlPoints", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UInterpToMovementComponent_RestartMovement()
	{
		struct InterpToMovementComponent_eventRestartMovement_Parms
		{
			float InitialDirection;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InitialDirection = { UE4CodeGen_Private::EPropertyClass::Float, "InitialDirection", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(InterpToMovementComponent_eventRestartMovement_Parms, InitialDirection), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InitialDirection,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Control" },
				{ "CPP_Default_InitialDirection", "1.000000" },
				{ "ModuleRelativePath", "Classes/Components/InterpToMovementComponent.h" },
				{ "ToolTip", "Reset to start. Sets time to zero and direction to 1." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterpToMovementComponent, "RestartMovement", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(InterpToMovementComponent_eventRestartMovement_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UInterpToMovementComponent_StopSimulating()
	{
		struct InterpToMovementComponent_eventStopSimulating_Parms
		{
			FHitResult HitResult;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitResult_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitResult = { UE4CodeGen_Private::EPropertyClass::Struct, "HitResult", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008008000182, 1, nullptr, STRUCT_OFFSET(InterpToMovementComponent_eventStopSimulating_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(NewProp_HitResult_MetaData, ARRAY_COUNT(NewProp_HitResult_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HitResult,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Game|Components|InterpToMovement" },
				{ "ModuleRelativePath", "Classes/Components/InterpToMovementComponent.h" },
				{ "ToolTip", "Clears the reference to UpdatedComponent, fires stop event, and stops ticking." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterpToMovementComponent, "StopSimulating", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(InterpToMovementComponent_eventStopSimulating_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInterpToMovementComponent_NoRegister()
	{
		return UInterpToMovementComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UInterpToMovementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UMovementComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UInterpToMovementComponent_FinaliseControlPoints, "FinaliseControlPoints" }, // 2812262759
				{ &Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToResetDelegate__DelegateSignature, "OnInterpToResetDelegate__DelegateSignature" }, // 277429171
				{ &Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToReverseDelegate__DelegateSignature, "OnInterpToReverseDelegate__DelegateSignature" }, // 757151930
				{ &Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToStopDelegate__DelegateSignature, "OnInterpToStopDelegate__DelegateSignature" }, // 639263770
				{ &Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToWaitBeginDelegate__DelegateSignature, "OnInterpToWaitBeginDelegate__DelegateSignature" }, // 3465782884
				{ &Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToWaitEndDelegate__DelegateSignature, "OnInterpToWaitEndDelegate__DelegateSignature" }, // 1899341295
				{ &Z_Construct_UFunction_UInterpToMovementComponent_RestartMovement, "RestartMovement" }, // 3814953376
				{ &Z_Construct_UFunction_UInterpToMovementComponent_StopSimulating, "StopSimulating" }, // 1392271959
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Movement" },
				{ "HideCategories", "Velocity" },
				{ "IncludePath", "Components/InterpToMovementComponent.h" },
				{ "ModuleRelativePath", "Classes/Components/InterpToMovementComponent.h" },
				{ "ToolTip", "Move the root component between a series of points over a given time *\n\n@see UMovementComponent" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControlPoints_MetaData[] = {
				{ "Category", "Control" },
				{ "ModuleRelativePath", "Classes/Components/InterpToMovementComponent.h" },
				{ "ToolTip", "List of control points to visit." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ControlPoints = { UE4CodeGen_Private::EPropertyClass::Array, "ControlPoints", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UInterpToMovementComponent, ControlPoints), METADATA_PARAMS(NewProp_ControlPoints_MetaData, ARRAY_COUNT(NewProp_ControlPoints_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ControlPoints_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ControlPoints", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FInterpControlPoint, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSimulationIterations_MetaData[] = {
				{ "Category", "Simulation" },
				{ "ClampMax", "25" },
				{ "ClampMin", "1" },
				{ "ModuleRelativePath", "Classes/Components/InterpToMovementComponent.h" },
				{ "ToolTip", "Max number of iterations used for each discrete simulation step.\nIncreasing this value can address issues with fast-moving objects or complex collision scenarios, at the cost of performance.\n\nWARNING: if (MaxSimulationTimeStep * MaxSimulationIterations) is too low for the min framerate, the last simulation step may exceed MaxSimulationTimeStep to complete the simulation.\n@see MaxSimulationTimeStep, bForceSubStepping" },
				{ "UIMax", "25" },
				{ "UIMin", "1" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxSimulationIterations = { UE4CodeGen_Private::EPropertyClass::Int, "MaxSimulationIterations", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UInterpToMovementComponent, MaxSimulationIterations), METADATA_PARAMS(NewProp_MaxSimulationIterations_MetaData, ARRAY_COUNT(NewProp_MaxSimulationIterations_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSimulationTimeStep_MetaData[] = {
				{ "Category", "Simulation" },
				{ "ClampMax", "0.50" },
				{ "ClampMin", "0.0166" },
				{ "ModuleRelativePath", "Classes/Components/InterpToMovementComponent.h" },
				{ "ToolTip", "Max time delta for each discrete simulation step.\nLowering this value can address issues with fast-moving objects or complex collision scenarios, at the cost of performance.\n\nWARNING: if (MaxSimulationTimeStep * MaxSimulationIterations) is too low for the min framerate, the last simulation step may exceed MaxSimulationTimeStep to complete the simulation.\n@see MaxSimulationIterations, bForceSubStepping" },
				{ "UIMax", "0.50" },
				{ "UIMin", "0.0166" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxSimulationTimeStep = { UE4CodeGen_Private::EPropertyClass::Float, "MaxSimulationTimeStep", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UInterpToMovementComponent, MaxSimulationTimeStep), METADATA_PARAMS(NewProp_MaxSimulationTimeStep_MetaData, ARRAY_COUNT(NewProp_MaxSimulationTimeStep_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnResetDelegate_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/InterpToMovementComponent.h" },
				{ "ToolTip", "Called when InterpTo reached the end and reset back to start ." },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnResetDelegate = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnResetDelegate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UInterpToMovementComponent, OnResetDelegate), Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToResetDelegate__DelegateSignature, METADATA_PARAMS(NewProp_OnResetDelegate_MetaData, ARRAY_COUNT(NewProp_OnResetDelegate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnWaitEndDelegate_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/InterpToMovementComponent.h" },
				{ "ToolTip", "Called when InterpTo has resumed following a stop." },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWaitEndDelegate = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnWaitEndDelegate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UInterpToMovementComponent, OnWaitEndDelegate), Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToWaitEndDelegate__DelegateSignature, METADATA_PARAMS(NewProp_OnWaitEndDelegate_MetaData, ARRAY_COUNT(NewProp_OnWaitEndDelegate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnWaitBeginDelegate_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/InterpToMovementComponent.h" },
				{ "ToolTip", "Called when InterpTo has come to a stop but will resume when possible." },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWaitBeginDelegate = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnWaitBeginDelegate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UInterpToMovementComponent, OnWaitBeginDelegate), Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToWaitBeginDelegate__DelegateSignature, METADATA_PARAMS(NewProp_OnWaitBeginDelegate_MetaData, ARRAY_COUNT(NewProp_OnWaitBeginDelegate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnInterpToStop_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/InterpToMovementComponent.h" },
				{ "ToolTip", "Called when InterpTo has come to a stop." },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInterpToStop = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnInterpToStop", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UInterpToMovementComponent, OnInterpToStop), Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToStopDelegate__DelegateSignature, METADATA_PARAMS(NewProp_OnInterpToStop_MetaData, ARRAY_COUNT(NewProp_OnInterpToStop_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnInterpToReverse_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/InterpToMovementComponent.h" },
				{ "ToolTip", "Called when InterpTo impacts something and reverse is enabled." },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInterpToReverse = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnInterpToReverse", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UInterpToMovementComponent, OnInterpToReverse), Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToReverseDelegate__DelegateSignature, METADATA_PARAMS(NewProp_OnInterpToReverse_MetaData, ARRAY_COUNT(NewProp_OnInterpToReverse_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForceSubStepping_MetaData[] = {
				{ "Category", "Simulation" },
				{ "ModuleRelativePath", "Classes/Components/InterpToMovementComponent.h" },
				{ "ToolTip", "If true, forces sub-stepping to break up movement into discrete smaller steps to improve accuracy of the trajectory.\nObjects that move in a straight line typically do *not* need to set this, as movement always uses continuous collision detection (sweeps) so collision is not missed.\nSub-stepping is automatically enabled when under the effects of gravity or when homing towards a target.\n@see MaxSimulationTimeStep, MaxSimulationIterations" },
			};
#endif
			auto NewProp_bForceSubStepping_SetBit = [](void* Obj){ ((UInterpToMovementComponent*)Obj)->bForceSubStepping = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceSubStepping = { UE4CodeGen_Private::EPropertyClass::Bool, "bForceSubStepping", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UInterpToMovementComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bForceSubStepping_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bForceSubStepping_MetaData, ARRAY_COUNT(NewProp_bForceSubStepping_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BehaviourType_MetaData[] = {
				{ "Category", "Behaviour" },
				{ "ModuleRelativePath", "Classes/Components/InterpToMovementComponent.h" },
				{ "ToolTip", "Movement behaviour of the component" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BehaviourType = { UE4CodeGen_Private::EPropertyClass::Enum, "BehaviourType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UInterpToMovementComponent, BehaviourType), Z_Construct_UEnum_Engine_EInterpToBehaviourType, METADATA_PARAMS(NewProp_BehaviourType_MetaData, ARRAY_COUNT(NewProp_BehaviourType_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_BehaviourType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPauseOnImpact_MetaData[] = {
				{ "Category", "Behaviour" },
				{ "ModuleRelativePath", "Classes/Components/InterpToMovementComponent.h" },
				{ "ToolTip", "If true, will pause movement on impact. If false it will behave as if the end of the movement range was reached based on the BehaviourType." },
			};
#endif
			auto NewProp_bPauseOnImpact_SetBit = [](void* Obj){ ((UInterpToMovementComponent*)Obj)->bPauseOnImpact = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPauseOnImpact = { UE4CodeGen_Private::EPropertyClass::Bool, "bPauseOnImpact", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UInterpToMovementComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bPauseOnImpact_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bPauseOnImpact_MetaData, ARRAY_COUNT(NewProp_bPauseOnImpact_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[] = {
				{ "Category", "Control" },
				{ "ClampMin", "0.100000" },
				{ "ModuleRelativePath", "Classes/Components/InterpToMovementComponent.h" },
				{ "ToolTip", "How long to take to move from the first point to the last (or vice versa)" },
				{ "UIMin", "0.100000" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration = { UE4CodeGen_Private::EPropertyClass::Float, "Duration", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UInterpToMovementComponent, Duration), METADATA_PARAMS(NewProp_Duration_MetaData, ARRAY_COUNT(NewProp_Duration_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ControlPoints,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ControlPoints_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxSimulationIterations,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxSimulationTimeStep,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnResetDelegate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnWaitEndDelegate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnWaitBeginDelegate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnInterpToStop,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnInterpToReverse,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bForceSubStepping,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BehaviourType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BehaviourType_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bPauseOnImpact,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Duration,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UInterpToMovementComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UInterpToMovementComponent::StaticClass,
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
	IMPLEMENT_CLASS(UInterpToMovementComponent, 4176301052);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpToMovementComponent(Z_Construct_UClass_UInterpToMovementComponent, &UInterpToMovementComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UInterpToMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpToMovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
