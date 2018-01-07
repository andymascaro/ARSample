// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/AI/Navigation/AvoidanceManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAvoidanceManager() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNavAvoidanceData();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UAvoidanceManager_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAvoidanceManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UFunction* Z_Construct_UFunction_UAvoidanceManager_GetAvoidanceVelocityForComponent();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UMovementComponent_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_UAvoidanceManager_GetNewAvoidanceUID();
	ENGINE_API UFunction* Z_Construct_UFunction_UAvoidanceManager_GetObjectCount();
	ENGINE_API UFunction* Z_Construct_UFunction_UAvoidanceManager_RegisterMovementComponent();
// End Cross Module References
class UScriptStruct* FNavAvoidanceData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FNavAvoidanceData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNavAvoidanceData, Z_Construct_UPackage__Script_Engine(), TEXT("NavAvoidanceData"), sizeof(FNavAvoidanceData), Get_Z_Construct_UScriptStruct_FNavAvoidanceData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNavAvoidanceData(FNavAvoidanceData::StaticStruct, TEXT("/Script/Engine"), TEXT("NavAvoidanceData"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFNavAvoidanceData
{
	FScriptStruct_Engine_StaticRegisterNativesFNavAvoidanceData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NavAvoidanceData")),new UScriptStruct::TCppStructOps<FNavAvoidanceData>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFNavAvoidanceData;
	UScriptStruct* Z_Construct_UScriptStruct_FNavAvoidanceData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNavAvoidanceData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NavAvoidanceData"), sizeof(FNavAvoidanceData), Get_Z_Construct_UScriptStruct_FNavAvoidanceData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/AI/Navigation/AvoidanceManager.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNavAvoidanceData>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"NavAvoidanceData",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FNavAvoidanceData),
				alignof(FNavAvoidanceData),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNavAvoidanceData_CRC() { return 884109860U; }
	void UAvoidanceManager::StaticRegisterNativesUAvoidanceManager()
	{
		UClass* Class = UAvoidanceManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAvoidanceVelocityForComponent", (Native)&UAvoidanceManager::execGetAvoidanceVelocityForComponent },
			{ "GetNewAvoidanceUID", (Native)&UAvoidanceManager::execGetNewAvoidanceUID },
			{ "GetObjectCount", (Native)&UAvoidanceManager::execGetObjectCount },
			{ "RegisterMovementComponent", (Native)&UAvoidanceManager::execRegisterMovementComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UAvoidanceManager_GetAvoidanceVelocityForComponent()
	{
		struct AvoidanceManager_eventGetAvoidanceVelocityForComponent_Parms
		{
			UMovementComponent* MovementComp;
			FVector ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AvoidanceManager_eventGetAvoidanceVelocityForComponent_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementComp_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MovementComp = { UE4CodeGen_Private::EPropertyClass::Object, "MovementComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(AvoidanceManager_eventGetAvoidanceVelocityForComponent_Parms, MovementComp), Z_Construct_UClass_UMovementComponent_NoRegister, METADATA_PARAMS(NewProp_MovementComp_MetaData, ARRAY_COUNT(NewProp_MovementComp_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MovementComp,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/AvoidanceManager.h" },
				{ "ToolTip", "Calculate avoidance velocity for component (avoids collisions with the supplied component)" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAvoidanceManager, "GetAvoidanceVelocityForComponent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(AvoidanceManager_eventGetAvoidanceVelocityForComponent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAvoidanceManager_GetNewAvoidanceUID()
	{
		struct AvoidanceManager_eventGetNewAvoidanceUID_Parms
		{
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AvoidanceManager_eventGetNewAvoidanceUID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/AvoidanceManager.h" },
				{ "ToolTip", "Get appropriate UID for use when reporting to this function or requesting RVO assistance." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAvoidanceManager, "GetNewAvoidanceUID", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(AvoidanceManager_eventGetNewAvoidanceUID_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAvoidanceManager_GetObjectCount()
	{
		struct AvoidanceManager_eventGetObjectCount_Parms
		{
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AvoidanceManager_eventGetObjectCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/AvoidanceManager.h" },
				{ "ToolTip", "Get the number of avoidance objects currently in the manager." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAvoidanceManager, "GetObjectCount", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(AvoidanceManager_eventGetObjectCount_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAvoidanceManager_RegisterMovementComponent()
	{
		struct AvoidanceManager_eventRegisterMovementComponent_Parms
		{
			UMovementComponent* MovementComp;
			float AvoidanceWeight;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((AvoidanceManager_eventRegisterMovementComponent_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AvoidanceManager_eventRegisterMovementComponent_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AvoidanceWeight = { UE4CodeGen_Private::EPropertyClass::Float, "AvoidanceWeight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AvoidanceManager_eventRegisterMovementComponent_Parms, AvoidanceWeight), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementComp_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MovementComp = { UE4CodeGen_Private::EPropertyClass::Object, "MovementComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(AvoidanceManager_eventRegisterMovementComponent_Parms, MovementComp), Z_Construct_UClass_UMovementComponent_NoRegister, METADATA_PARAMS(NewProp_MovementComp_MetaData, ARRAY_COUNT(NewProp_MovementComp_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AvoidanceWeight,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MovementComp,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI" },
				{ "CPP_Default_AvoidanceWeight", "0.500000" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/AvoidanceManager.h" },
				{ "ToolTip", "Register with the given avoidance manager.\n@param AvoidanceWeight      When avoiding each other, actors divert course in proportion to their relative weights. Range is 0.0 to 1.0. Special: at 1.0, actor will not divert course at all." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAvoidanceManager, "RegisterMovementComponent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(AvoidanceManager_eventRegisterMovementComponent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAvoidanceManager_NoRegister()
	{
		return UAvoidanceManager::StaticClass();
	}
	UClass* Z_Construct_UClass_UAvoidanceManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UAvoidanceManager_GetAvoidanceVelocityForComponent, "GetAvoidanceVelocityForComponent" }, // 3442657783
				{ &Z_Construct_UFunction_UAvoidanceManager_GetNewAvoidanceUID, "GetNewAvoidanceUID" }, // 1102283976
				{ &Z_Construct_UFunction_UAvoidanceManager_GetObjectCount, "GetObjectCount" }, // 90235490
				{ &Z_Construct_UFunction_UAvoidanceManager_RegisterMovementComponent, "RegisterMovementComponent" }, // 1631311583
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "AI/Navigation/AvoidanceManager.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/AvoidanceManager.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeightCheckMargin_MetaData[] = {
				{ "Category", "Avoidance" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/AvoidanceManager.h" },
				{ "ToolTip", "Allowable height margin between obstacles and agents. This is over and above the difference in agent heights." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HeightCheckMargin = { UE4CodeGen_Private::EPropertyClass::Float, "HeightCheckMargin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UAvoidanceManager, HeightCheckMargin), METADATA_PARAMS(NewProp_HeightCheckMargin_MetaData, ARRAY_COUNT(NewProp_HeightCheckMargin_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TestHeightDifference_MetaData[] = {
				{ "ModuleRelativePath", "Classes/AI/Navigation/AvoidanceManager.h" },
				{ "ToolTip", "Deprecated - use HeightCheckMargin, generally a much smaller value." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TestHeightDifference = { UE4CodeGen_Private::EPropertyClass::Float, "TestHeightDifference", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(UAvoidanceManager, TestHeightDifference_DEPRECATED), METADATA_PARAMS(NewProp_TestHeightDifference_MetaData, ARRAY_COUNT(NewProp_TestHeightDifference_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArtificialRadiusExpansion_MetaData[] = {
				{ "Category", "Avoidance" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/AvoidanceManager.h" },
				{ "ToolTip", "Multiply the radius of all STORED avoidance objects by this value to allow a little extra room for avoidance maneuvers." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ArtificialRadiusExpansion = { UE4CodeGen_Private::EPropertyClass::Float, "ArtificialRadiusExpansion", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UAvoidanceManager, ArtificialRadiusExpansion), METADATA_PARAMS(NewProp_ArtificialRadiusExpansion_MetaData, ARRAY_COUNT(NewProp_ArtificialRadiusExpansion_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeltaTimeToPredict_MetaData[] = {
				{ "Category", "Avoidance" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/AvoidanceManager.h" },
				{ "ToolTip", "This is how far forward in time (seconds) we extend our velocity cones and thus our prediction" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTimeToPredict = { UE4CodeGen_Private::EPropertyClass::Float, "DeltaTimeToPredict", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UAvoidanceManager, DeltaTimeToPredict), METADATA_PARAMS(NewProp_DeltaTimeToPredict_MetaData, ARRAY_COUNT(NewProp_DeltaTimeToPredict_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LockTimeAfterClean_MetaData[] = {
				{ "Category", "Avoidance" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/AvoidanceManager.h" },
				{ "ToolTip", "How long to stay on course (barring collision) after making an unobstructed move (should be > 0.0, but can be less than a full frame)" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LockTimeAfterClean = { UE4CodeGen_Private::EPropertyClass::Float, "LockTimeAfterClean", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UAvoidanceManager, LockTimeAfterClean), METADATA_PARAMS(NewProp_LockTimeAfterClean_MetaData, ARRAY_COUNT(NewProp_LockTimeAfterClean_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LockTimeAfterAvoid_MetaData[] = {
				{ "Category", "Avoidance" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/AvoidanceManager.h" },
				{ "ToolTip", "How long to stay on course (barring collision) after making an avoidance move" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LockTimeAfterAvoid = { UE4CodeGen_Private::EPropertyClass::Float, "LockTimeAfterAvoid", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UAvoidanceManager, LockTimeAfterAvoid), METADATA_PARAMS(NewProp_LockTimeAfterAvoid_MetaData, ARRAY_COUNT(NewProp_LockTimeAfterAvoid_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultTimeToLive_MetaData[] = {
				{ "Category", "Avoidance" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/AvoidanceManager.h" },
				{ "ToolTip", "How long an avoidance UID must not be updated before the system will put it back in the pool. Actual delay is up to 150% of this value." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultTimeToLive = { UE4CodeGen_Private::EPropertyClass::Float, "DefaultTimeToLive", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UAvoidanceManager, DefaultTimeToLive), METADATA_PARAMS(NewProp_DefaultTimeToLive_MetaData, ARRAY_COUNT(NewProp_DefaultTimeToLive_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HeightCheckMargin,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TestHeightDifference,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ArtificialRadiusExpansion,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DeltaTimeToPredict,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LockTimeAfterClean,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LockTimeAfterAvoid,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultTimeToLive,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAvoidanceManager>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAvoidanceManager::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100084u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				"Engine",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAvoidanceManager, 1532619850);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAvoidanceManager(Z_Construct_UClass_UAvoidanceManager, &UAvoidanceManager::StaticClass, TEXT("/Script/Engine"), TEXT("UAvoidanceManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAvoidanceManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
