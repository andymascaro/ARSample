// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Components/SplineMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSplineMeshComponent() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESplineMeshAxis();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSplineMeshParams();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USplineMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineMeshComponent();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineMeshComponent_GetBoundaryMax();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineMeshComponent_GetBoundaryMin();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineMeshComponent_GetEndOffset();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineMeshComponent_GetEndPosition();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineMeshComponent_GetEndRoll();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineMeshComponent_GetEndScale();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineMeshComponent_GetEndTangent();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineMeshComponent_GetForwardAxis();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineMeshComponent_GetSplineUpDir();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineMeshComponent_GetStartOffset();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineMeshComponent_GetStartPosition();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineMeshComponent_GetStartRoll();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineMeshComponent_GetStartScale();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineMeshComponent_GetStartTangent();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineMeshComponent_SetBoundaryMax();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineMeshComponent_SetBoundaryMin();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineMeshComponent_SetEndOffset();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineMeshComponent_SetEndPosition();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineMeshComponent_SetEndRoll();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineMeshComponent_SetEndScale();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineMeshComponent_SetEndTangent();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineMeshComponent_SetForwardAxis();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineMeshComponent_SetSplineUpDir();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineMeshComponent_SetStartAndEnd();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineMeshComponent_SetStartOffset();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineMeshComponent_SetStartPosition();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineMeshComponent_SetStartRoll();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineMeshComponent_SetStartScale();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineMeshComponent_SetStartTangent();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineMeshComponent_UpdateMesh();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_UBodySetup_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterface_CollisionDataProvider_NoRegister();
// End Cross Module References
	static UEnum* ESplineMeshAxis_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ESplineMeshAxis, Z_Construct_UPackage__Script_Engine(), TEXT("ESplineMeshAxis"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESplineMeshAxis(ESplineMeshAxis_StaticEnum, TEXT("/Script/Engine"), TEXT("ESplineMeshAxis"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ESplineMeshAxis_CRC() { return 2605203750U; }
	UEnum* Z_Construct_UEnum_Engine_ESplineMeshAxis()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESplineMeshAxis"), 0, Get_Z_Construct_UEnum_Engine_ESplineMeshAxis_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESplineMeshAxis::X", (int64)ESplineMeshAxis::X },
				{ "ESplineMeshAxis::Y", (int64)ESplineMeshAxis::Y },
				{ "ESplineMeshAxis::Z", (int64)ESplineMeshAxis::Z },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ESplineMeshAxis",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"ESplineMeshAxis::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FSplineMeshParams::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FSplineMeshParams_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSplineMeshParams, Z_Construct_UPackage__Script_Engine(), TEXT("SplineMeshParams"), sizeof(FSplineMeshParams), Get_Z_Construct_UScriptStruct_FSplineMeshParams_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSplineMeshParams(FSplineMeshParams::StaticStruct, TEXT("/Script/Engine"), TEXT("SplineMeshParams"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFSplineMeshParams
{
	FScriptStruct_Engine_StaticRegisterNativesFSplineMeshParams()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SplineMeshParams")),new UScriptStruct::TCppStructOps<FSplineMeshParams>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFSplineMeshParams;
	UScriptStruct* Z_Construct_UScriptStruct_FSplineMeshParams()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSplineMeshParams_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SplineMeshParams"), sizeof(FSplineMeshParams), Get_Z_Construct_UScriptStruct_FSplineMeshParams_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
				{ "ToolTip", "Structure that holds info about spline, passed to renderer to deform UStaticMesh.\nAlso used by Lightmass, so be sure to update Lightmass::FSplineMeshParams and the static lighting code if this changes!" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSplineMeshParams>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndOffset_MetaData[] = {
				{ "Category", "SplineMesh" },
				{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
				{ "ToolTip", "Ending offset of the mesh from the spline, in component space." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "EndOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, STRUCT_OFFSET(FSplineMeshParams, EndOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(NewProp_EndOffset_MetaData, ARRAY_COUNT(NewProp_EndOffset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndRoll_MetaData[] = {
				{ "Category", "SplineMesh" },
				{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
				{ "ToolTip", "Roll around spline applied at end." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EndRoll = { UE4CodeGen_Private::EPropertyClass::Float, "EndRoll", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, STRUCT_OFFSET(FSplineMeshParams, EndRoll), METADATA_PARAMS(NewProp_EndRoll_MetaData, ARRAY_COUNT(NewProp_EndRoll_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndScale_MetaData[] = {
				{ "Category", "SplineMesh" },
				{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
				{ "ToolTip", "X and Y scale applied to mesh at end of spline." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndScale = { UE4CodeGen_Private::EPropertyClass::Struct, "EndScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, STRUCT_OFFSET(FSplineMeshParams, EndScale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(NewProp_EndScale_MetaData, ARRAY_COUNT(NewProp_EndScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndTangent_MetaData[] = {
				{ "Category", "SplineMesh" },
				{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
				{ "ToolTip", "End tangent of spline, in component space." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndTangent = { UE4CodeGen_Private::EPropertyClass::Struct, "EndTangent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FSplineMeshParams, EndTangent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_EndTangent_MetaData, ARRAY_COUNT(NewProp_EndTangent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndPos_MetaData[] = {
				{ "Category", "SplineMesh" },
				{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
				{ "ToolTip", "End location of spline, in component space." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndPos = { UE4CodeGen_Private::EPropertyClass::Struct, "EndPos", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FSplineMeshParams, EndPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_EndPos_MetaData, ARRAY_COUNT(NewProp_EndPos_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartOffset_MetaData[] = {
				{ "Category", "SplineMesh" },
				{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
				{ "ToolTip", "Starting offset of the mesh from the spline, in component space." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "StartOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, STRUCT_OFFSET(FSplineMeshParams, StartOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(NewProp_StartOffset_MetaData, ARRAY_COUNT(NewProp_StartOffset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartRoll_MetaData[] = {
				{ "Category", "SplineMesh" },
				{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
				{ "ToolTip", "Roll around spline applied at start" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartRoll = { UE4CodeGen_Private::EPropertyClass::Float, "StartRoll", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, STRUCT_OFFSET(FSplineMeshParams, StartRoll), METADATA_PARAMS(NewProp_StartRoll_MetaData, ARRAY_COUNT(NewProp_StartRoll_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartScale_MetaData[] = {
				{ "Category", "SplineMesh" },
				{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
				{ "ToolTip", "X and Y scale applied to mesh at start of spline." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartScale = { UE4CodeGen_Private::EPropertyClass::Struct, "StartScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, STRUCT_OFFSET(FSplineMeshParams, StartScale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(NewProp_StartScale_MetaData, ARRAY_COUNT(NewProp_StartScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartTangent_MetaData[] = {
				{ "Category", "SplineMesh" },
				{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
				{ "ToolTip", "Start tangent of spline, in component space." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartTangent = { UE4CodeGen_Private::EPropertyClass::Struct, "StartTangent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FSplineMeshParams, StartTangent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_StartTangent_MetaData, ARRAY_COUNT(NewProp_StartTangent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartPos_MetaData[] = {
				{ "Category", "SplineMesh" },
				{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
				{ "ToolTip", "Start location of spline, in component space." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartPos = { UE4CodeGen_Private::EPropertyClass::Struct, "StartPos", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FSplineMeshParams, StartPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_StartPos_MetaData, ARRAY_COUNT(NewProp_StartPos_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EndOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EndRoll,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EndScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EndTangent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EndPos,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StartOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StartRoll,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StartScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StartTangent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StartPos,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"SplineMeshParams",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FSplineMeshParams),
				alignof(FSplineMeshParams),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSplineMeshParams_CRC() { return 1416718459U; }
	void USplineMeshComponent::StaticRegisterNativesUSplineMeshComponent()
	{
		UClass* Class = USplineMeshComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBoundaryMax", (Native)&USplineMeshComponent::execGetBoundaryMax },
			{ "GetBoundaryMin", (Native)&USplineMeshComponent::execGetBoundaryMin },
			{ "GetEndOffset", (Native)&USplineMeshComponent::execGetEndOffset },
			{ "GetEndPosition", (Native)&USplineMeshComponent::execGetEndPosition },
			{ "GetEndRoll", (Native)&USplineMeshComponent::execGetEndRoll },
			{ "GetEndScale", (Native)&USplineMeshComponent::execGetEndScale },
			{ "GetEndTangent", (Native)&USplineMeshComponent::execGetEndTangent },
			{ "GetForwardAxis", (Native)&USplineMeshComponent::execGetForwardAxis },
			{ "GetSplineUpDir", (Native)&USplineMeshComponent::execGetSplineUpDir },
			{ "GetStartOffset", (Native)&USplineMeshComponent::execGetStartOffset },
			{ "GetStartPosition", (Native)&USplineMeshComponent::execGetStartPosition },
			{ "GetStartRoll", (Native)&USplineMeshComponent::execGetStartRoll },
			{ "GetStartScale", (Native)&USplineMeshComponent::execGetStartScale },
			{ "GetStartTangent", (Native)&USplineMeshComponent::execGetStartTangent },
			{ "SetBoundaryMax", (Native)&USplineMeshComponent::execSetBoundaryMax },
			{ "SetBoundaryMin", (Native)&USplineMeshComponent::execSetBoundaryMin },
			{ "SetEndOffset", (Native)&USplineMeshComponent::execSetEndOffset },
			{ "SetEndPosition", (Native)&USplineMeshComponent::execSetEndPosition },
			{ "SetEndRoll", (Native)&USplineMeshComponent::execSetEndRoll },
			{ "SetEndScale", (Native)&USplineMeshComponent::execSetEndScale },
			{ "SetEndTangent", (Native)&USplineMeshComponent::execSetEndTangent },
			{ "SetForwardAxis", (Native)&USplineMeshComponent::execSetForwardAxis },
			{ "SetSplineUpDir", (Native)&USplineMeshComponent::execSetSplineUpDir },
			{ "SetStartAndEnd", (Native)&USplineMeshComponent::execSetStartAndEnd },
			{ "SetStartOffset", (Native)&USplineMeshComponent::execSetStartOffset },
			{ "SetStartPosition", (Native)&USplineMeshComponent::execSetStartPosition },
			{ "SetStartRoll", (Native)&USplineMeshComponent::execSetStartRoll },
			{ "SetStartScale", (Native)&USplineMeshComponent::execSetStartScale },
			{ "SetStartTangent", (Native)&USplineMeshComponent::execSetStartTangent },
			{ "UpdateMesh", (Native)&USplineMeshComponent::execUpdateMesh },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_USplineMeshComponent_GetBoundaryMax()
	{
		struct SplineMeshComponent_eventGetBoundaryMax_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SplineMeshComponent_eventGetBoundaryMax_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "SplineMesh" },
				{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
				{ "ToolTip", "Get the boundary max" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineMeshComponent, "GetBoundaryMax", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(SplineMeshComponent_eventGetBoundaryMax_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USplineMeshComponent_GetBoundaryMin()
	{
		struct SplineMeshComponent_eventGetBoundaryMin_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SplineMeshComponent_eventGetBoundaryMin_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "SplineMesh" },
				{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
				{ "ToolTip", "Get the boundary min" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineMeshComponent, "GetBoundaryMin", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(SplineMeshComponent_eventGetBoundaryMin_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USplineMeshComponent_GetEndOffset()
	{
		struct SplineMeshComponent_eventGetEndOffset_Parms
		{
			FVector2D ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SplineMeshComponent_eventGetEndOffset_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "SplineMesh" },
				{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
				{ "ToolTip", "Get the end offset" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineMeshComponent, "GetEndOffset", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820401, sizeof(SplineMeshComponent_eventGetEndOffset_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USplineMeshComponent_GetEndPosition()
	{
		struct SplineMeshComponent_eventGetEndPosition_Parms
		{
			FVector ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SplineMeshComponent_eventGetEndPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "SplineMesh" },
				{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
				{ "ToolTip", "Get the end position of spline in local space" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineMeshComponent, "GetEndPosition", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820401, sizeof(SplineMeshComponent_eventGetEndPosition_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USplineMeshComponent_GetEndRoll()
	{
		struct SplineMeshComponent_eventGetEndRoll_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SplineMeshComponent_eventGetEndRoll_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "SplineMesh" },
				{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
				{ "ToolTip", "Get the end roll" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineMeshComponent, "GetEndRoll", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(SplineMeshComponent_eventGetEndRoll_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USplineMeshComponent_GetEndScale()
	{
		struct SplineMeshComponent_eventGetEndScale_Parms
		{
			FVector2D ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SplineMeshComponent_eventGetEndScale_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "SplineMesh" },
				{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
				{ "ToolTip", "Get the end scaling" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineMeshComponent, "GetEndScale", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820401, sizeof(SplineMeshComponent_eventGetEndScale_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USplineMeshComponent_GetEndTangent()
	{
		struct SplineMeshComponent_eventGetEndTangent_Parms
		{
			FVector ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SplineMeshComponent_eventGetEndTangent_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "SplineMesh" },
				{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
				{ "ToolTip", "Get the end tangent vector of spline in local space" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineMeshComponent, "GetEndTangent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820401, sizeof(SplineMeshComponent_eventGetEndTangent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USplineMeshComponent_GetForwardAxis()
	{
		struct SplineMeshComponent_eventGetForwardAxis_Parms
		{
			TEnumAsByte<ESplineMeshAxis::Type> ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Byte, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SplineMeshComponent_eventGetForwardAxis_Parms, ReturnValue), Z_Construct_UEnum_Engine_ESplineMeshAxis, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "SplineMesh" },
				{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
				{ "ToolTip", "Get the forward axis" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineMeshComponent, "GetForwardAxis", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(SplineMeshComponent_eventGetForwardAxis_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USplineMeshComponent_GetSplineUpDir()
	{
		struct SplineMeshComponent_eventGetSplineUpDir_Parms
		{
			FVector ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SplineMeshComponent_eventGetSplineUpDir_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "SplineMesh" },
				{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
				{ "ToolTip", "Get the spline up direction" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineMeshComponent, "GetSplineUpDir", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820401, sizeof(SplineMeshComponent_eventGetSplineUpDir_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USplineMeshComponent_GetStartOffset()
	{
		struct SplineMeshComponent_eventGetStartOffset_Parms
		{
			FVector2D ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SplineMeshComponent_eventGetStartOffset_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "SplineMesh" },
				{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
				{ "ToolTip", "Get the start offset" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineMeshComponent, "GetStartOffset", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820401, sizeof(SplineMeshComponent_eventGetStartOffset_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USplineMeshComponent_GetStartPosition()
	{
		struct SplineMeshComponent_eventGetStartPosition_Parms
		{
			FVector ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SplineMeshComponent_eventGetStartPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "SplineMesh" },
				{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
				{ "ToolTip", "Get the start position of spline in local space" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineMeshComponent, "GetStartPosition", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820401, sizeof(SplineMeshComponent_eventGetStartPosition_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USplineMeshComponent_GetStartRoll()
	{
		struct SplineMeshComponent_eventGetStartRoll_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SplineMeshComponent_eventGetStartRoll_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "SplineMesh" },
				{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
				{ "ToolTip", "Get the start roll" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineMeshComponent, "GetStartRoll", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(SplineMeshComponent_eventGetStartRoll_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USplineMeshComponent_GetStartScale()
	{
		struct SplineMeshComponent_eventGetStartScale_Parms
		{
			FVector2D ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SplineMeshComponent_eventGetStartScale_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "SplineMesh" },
				{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
				{ "ToolTip", "Get the start scaling" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineMeshComponent, "GetStartScale", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820401, sizeof(SplineMeshComponent_eventGetStartScale_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USplineMeshComponent_GetStartTangent()
	{
		struct SplineMeshComponent_eventGetStartTangent_Parms
		{
			FVector ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SplineMeshComponent_eventGetStartTangent_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "SplineMesh" },
				{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
				{ "ToolTip", "Get the start tangent vector of spline in local space" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineMeshComponent, "GetStartTangent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820401, sizeof(SplineMeshComponent_eventGetStartTangent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USplineMeshComponent_SetBoundaryMax()
	{
		struct SplineMeshComponent_eventSetBoundaryMax_Parms
		{
			float InBoundaryMax;
			bool bUpdateMesh;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bUpdateMesh_SetBit = [](void* Obj){ ((SplineMeshComponent_eventSetBoundaryMax_Parms*)Obj)->bUpdateMesh = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateMesh = { UE4CodeGen_Private::EPropertyClass::Bool, "bUpdateMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SplineMeshComponent_eventSetBoundaryMax_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUpdateMesh_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InBoundaryMax = { UE4CodeGen_Private::EPropertyClass::Float, "InBoundaryMax", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SplineMeshComponent_eventSetBoundaryMax_Parms, InBoundaryMax), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUpdateMesh,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InBoundaryMax,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "SplineMesh" },
				{ "CPP_Default_bUpdateMesh", "true" },
				{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
				{ "ToolTip", "Set the boundary max" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineMeshComponent, "SetBoundaryMax", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SplineMeshComponent_eventSetBoundaryMax_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USplineMeshComponent_SetBoundaryMin()
	{
		struct SplineMeshComponent_eventSetBoundaryMin_Parms
		{
			float InBoundaryMin;
			bool bUpdateMesh;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bUpdateMesh_SetBit = [](void* Obj){ ((SplineMeshComponent_eventSetBoundaryMin_Parms*)Obj)->bUpdateMesh = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateMesh = { UE4CodeGen_Private::EPropertyClass::Bool, "bUpdateMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SplineMeshComponent_eventSetBoundaryMin_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUpdateMesh_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InBoundaryMin = { UE4CodeGen_Private::EPropertyClass::Float, "InBoundaryMin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SplineMeshComponent_eventSetBoundaryMin_Parms, InBoundaryMin), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUpdateMesh,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InBoundaryMin,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "SplineMesh" },
				{ "CPP_Default_bUpdateMesh", "true" },
				{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
				{ "ToolTip", "Set the boundary min" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineMeshComponent, "SetBoundaryMin", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SplineMeshComponent_eventSetBoundaryMin_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USplineMeshComponent_SetEndOffset()
	{
		struct SplineMeshComponent_eventSetEndOffset_Parms
		{
			FVector2D EndOffset;
			bool bUpdateMesh;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bUpdateMesh_SetBit = [](void* Obj){ ((SplineMeshComponent_eventSetEndOffset_Parms*)Obj)->bUpdateMesh = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateMesh = { UE4CodeGen_Private::EPropertyClass::Bool, "bUpdateMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SplineMeshComponent_eventSetEndOffset_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUpdateMesh_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "EndOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SplineMeshComponent_eventSetEndOffset_Parms, EndOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUpdateMesh,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EndOffset,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "SplineMesh" },
				{ "CPP_Default_bUpdateMesh", "true" },
				{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
				{ "ToolTip", "Set the end offset" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineMeshComponent, "SetEndOffset", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(SplineMeshComponent_eventSetEndOffset_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USplineMeshComponent_SetEndPosition()
	{
		struct SplineMeshComponent_eventSetEndPosition_Parms
		{
			FVector EndPos;
			bool bUpdateMesh;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bUpdateMesh_SetBit = [](void* Obj){ ((SplineMeshComponent_eventSetEndPosition_Parms*)Obj)->bUpdateMesh = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateMesh = { UE4CodeGen_Private::EPropertyClass::Bool, "bUpdateMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SplineMeshComponent_eventSetEndPosition_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUpdateMesh_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndPos = { UE4CodeGen_Private::EPropertyClass::Struct, "EndPos", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SplineMeshComponent_eventSetEndPosition_Parms, EndPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUpdateMesh,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EndPos,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "SplineMesh" },
				{ "CPP_Default_bUpdateMesh", "true" },
				{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
				{ "ToolTip", "Set the end position of spline in local space" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineMeshComponent, "SetEndPosition", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(SplineMeshComponent_eventSetEndPosition_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USplineMeshComponent_SetEndRoll()
	{
		struct SplineMeshComponent_eventSetEndRoll_Parms
		{
			float EndRoll;
			bool bUpdateMesh;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bUpdateMesh_SetBit = [](void* Obj){ ((SplineMeshComponent_eventSetEndRoll_Parms*)Obj)->bUpdateMesh = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateMesh = { UE4CodeGen_Private::EPropertyClass::Bool, "bUpdateMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SplineMeshComponent_eventSetEndRoll_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUpdateMesh_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EndRoll = { UE4CodeGen_Private::EPropertyClass::Float, "EndRoll", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SplineMeshComponent_eventSetEndRoll_Parms, EndRoll), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUpdateMesh,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EndRoll,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "SplineMesh" },
				{ "CPP_Default_bUpdateMesh", "true" },
				{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
				{ "ToolTip", "Set the end roll" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineMeshComponent, "SetEndRoll", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SplineMeshComponent_eventSetEndRoll_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USplineMeshComponent_SetEndScale()
	{
		struct SplineMeshComponent_eventSetEndScale_Parms
		{
			FVector2D EndScale;
			bool bUpdateMesh;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bUpdateMesh_SetBit = [](void* Obj){ ((SplineMeshComponent_eventSetEndScale_Parms*)Obj)->bUpdateMesh = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateMesh = { UE4CodeGen_Private::EPropertyClass::Bool, "bUpdateMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SplineMeshComponent_eventSetEndScale_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUpdateMesh_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndScale = { UE4CodeGen_Private::EPropertyClass::Struct, "EndScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SplineMeshComponent_eventSetEndScale_Parms, EndScale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUpdateMesh,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EndScale,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "SplineMesh" },
				{ "CPP_Default_bUpdateMesh", "true" },
				{ "CPP_Default_EndScale", "(X=1.000,Y=1.000)" },
				{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
				{ "ToolTip", "Set the end scaling" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineMeshComponent, "SetEndScale", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(SplineMeshComponent_eventSetEndScale_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USplineMeshComponent_SetEndTangent()
	{
		struct SplineMeshComponent_eventSetEndTangent_Parms
		{
			FVector EndTangent;
			bool bUpdateMesh;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bUpdateMesh_SetBit = [](void* Obj){ ((SplineMeshComponent_eventSetEndTangent_Parms*)Obj)->bUpdateMesh = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateMesh = { UE4CodeGen_Private::EPropertyClass::Bool, "bUpdateMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SplineMeshComponent_eventSetEndTangent_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUpdateMesh_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndTangent = { UE4CodeGen_Private::EPropertyClass::Struct, "EndTangent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SplineMeshComponent_eventSetEndTangent_Parms, EndTangent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUpdateMesh,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EndTangent,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "SplineMesh" },
				{ "CPP_Default_bUpdateMesh", "true" },
				{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
				{ "ToolTip", "Set the end tangent vector of spline in local space" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineMeshComponent, "SetEndTangent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(SplineMeshComponent_eventSetEndTangent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USplineMeshComponent_SetForwardAxis()
	{
		struct SplineMeshComponent_eventSetForwardAxis_Parms
		{
			TEnumAsByte<ESplineMeshAxis::Type> InForwardAxis;
			bool bUpdateMesh;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bUpdateMesh_SetBit = [](void* Obj){ ((SplineMeshComponent_eventSetForwardAxis_Parms*)Obj)->bUpdateMesh = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateMesh = { UE4CodeGen_Private::EPropertyClass::Bool, "bUpdateMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SplineMeshComponent_eventSetForwardAxis_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUpdateMesh_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_InForwardAxis = { UE4CodeGen_Private::EPropertyClass::Byte, "InForwardAxis", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SplineMeshComponent_eventSetForwardAxis_Parms, InForwardAxis), Z_Construct_UEnum_Engine_ESplineMeshAxis, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUpdateMesh,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InForwardAxis,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "SplineMesh" },
				{ "CPP_Default_bUpdateMesh", "true" },
				{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
				{ "ToolTip", "Set the forward axis" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineMeshComponent, "SetForwardAxis", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SplineMeshComponent_eventSetForwardAxis_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USplineMeshComponent_SetSplineUpDir()
	{
		struct SplineMeshComponent_eventSetSplineUpDir_Parms
		{
			FVector InSplineUpDir;
			bool bUpdateMesh;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bUpdateMesh_SetBit = [](void* Obj){ ((SplineMeshComponent_eventSetSplineUpDir_Parms*)Obj)->bUpdateMesh = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateMesh = { UE4CodeGen_Private::EPropertyClass::Bool, "bUpdateMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SplineMeshComponent_eventSetSplineUpDir_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUpdateMesh_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InSplineUpDir_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InSplineUpDir = { UE4CodeGen_Private::EPropertyClass::Struct, "InSplineUpDir", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(SplineMeshComponent_eventSetSplineUpDir_Parms, InSplineUpDir), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_InSplineUpDir_MetaData, ARRAY_COUNT(NewProp_InSplineUpDir_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUpdateMesh,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InSplineUpDir,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "SplineMesh" },
				{ "CPP_Default_bUpdateMesh", "true" },
				{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
				{ "ToolTip", "Set the spline up direction" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineMeshComponent, "SetSplineUpDir", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C20401, sizeof(SplineMeshComponent_eventSetSplineUpDir_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USplineMeshComponent_SetStartAndEnd()
	{
		struct SplineMeshComponent_eventSetStartAndEnd_Parms
		{
			FVector StartPos;
			FVector StartTangent;
			FVector EndPos;
			FVector EndTangent;
			bool bUpdateMesh;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bUpdateMesh_SetBit = [](void* Obj){ ((SplineMeshComponent_eventSetStartAndEnd_Parms*)Obj)->bUpdateMesh = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateMesh = { UE4CodeGen_Private::EPropertyClass::Bool, "bUpdateMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SplineMeshComponent_eventSetStartAndEnd_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUpdateMesh_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndTangent = { UE4CodeGen_Private::EPropertyClass::Struct, "EndTangent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SplineMeshComponent_eventSetStartAndEnd_Parms, EndTangent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndPos = { UE4CodeGen_Private::EPropertyClass::Struct, "EndPos", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SplineMeshComponent_eventSetStartAndEnd_Parms, EndPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartTangent = { UE4CodeGen_Private::EPropertyClass::Struct, "StartTangent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SplineMeshComponent_eventSetStartAndEnd_Parms, StartTangent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartPos = { UE4CodeGen_Private::EPropertyClass::Struct, "StartPos", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SplineMeshComponent_eventSetStartAndEnd_Parms, StartPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUpdateMesh,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EndTangent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EndPos,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StartTangent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StartPos,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "SplineMesh" },
				{ "CPP_Default_bUpdateMesh", "true" },
				{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
				{ "ToolTip", "Set the start and end, position and tangent, all in local space" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineMeshComponent, "SetStartAndEnd", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(SplineMeshComponent_eventSetStartAndEnd_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USplineMeshComponent_SetStartOffset()
	{
		struct SplineMeshComponent_eventSetStartOffset_Parms
		{
			FVector2D StartOffset;
			bool bUpdateMesh;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bUpdateMesh_SetBit = [](void* Obj){ ((SplineMeshComponent_eventSetStartOffset_Parms*)Obj)->bUpdateMesh = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateMesh = { UE4CodeGen_Private::EPropertyClass::Bool, "bUpdateMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SplineMeshComponent_eventSetStartOffset_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUpdateMesh_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "StartOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SplineMeshComponent_eventSetStartOffset_Parms, StartOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUpdateMesh,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StartOffset,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "SplineMesh" },
				{ "CPP_Default_bUpdateMesh", "true" },
				{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
				{ "ToolTip", "Set the start offset" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineMeshComponent, "SetStartOffset", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(SplineMeshComponent_eventSetStartOffset_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USplineMeshComponent_SetStartPosition()
	{
		struct SplineMeshComponent_eventSetStartPosition_Parms
		{
			FVector StartPos;
			bool bUpdateMesh;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bUpdateMesh_SetBit = [](void* Obj){ ((SplineMeshComponent_eventSetStartPosition_Parms*)Obj)->bUpdateMesh = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateMesh = { UE4CodeGen_Private::EPropertyClass::Bool, "bUpdateMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SplineMeshComponent_eventSetStartPosition_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUpdateMesh_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartPos = { UE4CodeGen_Private::EPropertyClass::Struct, "StartPos", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SplineMeshComponent_eventSetStartPosition_Parms, StartPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUpdateMesh,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StartPos,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "SplineMesh" },
				{ "CPP_Default_bUpdateMesh", "true" },
				{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
				{ "ToolTip", "Set the start position of spline in local space" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineMeshComponent, "SetStartPosition", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(SplineMeshComponent_eventSetStartPosition_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USplineMeshComponent_SetStartRoll()
	{
		struct SplineMeshComponent_eventSetStartRoll_Parms
		{
			float StartRoll;
			bool bUpdateMesh;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bUpdateMesh_SetBit = [](void* Obj){ ((SplineMeshComponent_eventSetStartRoll_Parms*)Obj)->bUpdateMesh = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateMesh = { UE4CodeGen_Private::EPropertyClass::Bool, "bUpdateMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SplineMeshComponent_eventSetStartRoll_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUpdateMesh_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartRoll = { UE4CodeGen_Private::EPropertyClass::Float, "StartRoll", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SplineMeshComponent_eventSetStartRoll_Parms, StartRoll), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUpdateMesh,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StartRoll,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "SplineMesh" },
				{ "CPP_Default_bUpdateMesh", "true" },
				{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
				{ "ToolTip", "Set the start roll" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineMeshComponent, "SetStartRoll", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SplineMeshComponent_eventSetStartRoll_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USplineMeshComponent_SetStartScale()
	{
		struct SplineMeshComponent_eventSetStartScale_Parms
		{
			FVector2D StartScale;
			bool bUpdateMesh;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bUpdateMesh_SetBit = [](void* Obj){ ((SplineMeshComponent_eventSetStartScale_Parms*)Obj)->bUpdateMesh = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateMesh = { UE4CodeGen_Private::EPropertyClass::Bool, "bUpdateMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SplineMeshComponent_eventSetStartScale_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUpdateMesh_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartScale = { UE4CodeGen_Private::EPropertyClass::Struct, "StartScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SplineMeshComponent_eventSetStartScale_Parms, StartScale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUpdateMesh,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StartScale,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "SplineMesh" },
				{ "CPP_Default_bUpdateMesh", "true" },
				{ "CPP_Default_StartScale", "(X=1.000,Y=1.000)" },
				{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
				{ "ToolTip", "Set the start scaling" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineMeshComponent, "SetStartScale", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(SplineMeshComponent_eventSetStartScale_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USplineMeshComponent_SetStartTangent()
	{
		struct SplineMeshComponent_eventSetStartTangent_Parms
		{
			FVector StartTangent;
			bool bUpdateMesh;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bUpdateMesh_SetBit = [](void* Obj){ ((SplineMeshComponent_eventSetStartTangent_Parms*)Obj)->bUpdateMesh = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateMesh = { UE4CodeGen_Private::EPropertyClass::Bool, "bUpdateMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SplineMeshComponent_eventSetStartTangent_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUpdateMesh_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartTangent = { UE4CodeGen_Private::EPropertyClass::Struct, "StartTangent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SplineMeshComponent_eventSetStartTangent_Parms, StartTangent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUpdateMesh,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StartTangent,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "SplineMesh" },
				{ "CPP_Default_bUpdateMesh", "true" },
				{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
				{ "ToolTip", "Set the start tangent vector of spline in local space" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineMeshComponent, "SetStartTangent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(SplineMeshComponent_eventSetStartTangent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USplineMeshComponent_UpdateMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "SplineMesh" },
				{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
				{ "ToolTip", "Update the collision and render state on the spline mesh following changes to its geometry" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineMeshComponent, "UpdateMesh", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USplineMeshComponent_NoRegister()
	{
		return USplineMeshComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_USplineMeshComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UStaticMeshComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_USplineMeshComponent_GetBoundaryMax, "GetBoundaryMax" }, // 4176473789
				{ &Z_Construct_UFunction_USplineMeshComponent_GetBoundaryMin, "GetBoundaryMin" }, // 1917192257
				{ &Z_Construct_UFunction_USplineMeshComponent_GetEndOffset, "GetEndOffset" }, // 1390430205
				{ &Z_Construct_UFunction_USplineMeshComponent_GetEndPosition, "GetEndPosition" }, // 3650738155
				{ &Z_Construct_UFunction_USplineMeshComponent_GetEndRoll, "GetEndRoll" }, // 2588090907
				{ &Z_Construct_UFunction_USplineMeshComponent_GetEndScale, "GetEndScale" }, // 4290707592
				{ &Z_Construct_UFunction_USplineMeshComponent_GetEndTangent, "GetEndTangent" }, // 1073425947
				{ &Z_Construct_UFunction_USplineMeshComponent_GetForwardAxis, "GetForwardAxis" }, // 3453771583
				{ &Z_Construct_UFunction_USplineMeshComponent_GetSplineUpDir, "GetSplineUpDir" }, // 2053273678
				{ &Z_Construct_UFunction_USplineMeshComponent_GetStartOffset, "GetStartOffset" }, // 62828346
				{ &Z_Construct_UFunction_USplineMeshComponent_GetStartPosition, "GetStartPosition" }, // 291862486
				{ &Z_Construct_UFunction_USplineMeshComponent_GetStartRoll, "GetStartRoll" }, // 333560977
				{ &Z_Construct_UFunction_USplineMeshComponent_GetStartScale, "GetStartScale" }, // 282886795
				{ &Z_Construct_UFunction_USplineMeshComponent_GetStartTangent, "GetStartTangent" }, // 2219076244
				{ &Z_Construct_UFunction_USplineMeshComponent_SetBoundaryMax, "SetBoundaryMax" }, // 2252915332
				{ &Z_Construct_UFunction_USplineMeshComponent_SetBoundaryMin, "SetBoundaryMin" }, // 3407356867
				{ &Z_Construct_UFunction_USplineMeshComponent_SetEndOffset, "SetEndOffset" }, // 4256370070
				{ &Z_Construct_UFunction_USplineMeshComponent_SetEndPosition, "SetEndPosition" }, // 1617216810
				{ &Z_Construct_UFunction_USplineMeshComponent_SetEndRoll, "SetEndRoll" }, // 36718269
				{ &Z_Construct_UFunction_USplineMeshComponent_SetEndScale, "SetEndScale" }, // 1303462153
				{ &Z_Construct_UFunction_USplineMeshComponent_SetEndTangent, "SetEndTangent" }, // 3258452711
				{ &Z_Construct_UFunction_USplineMeshComponent_SetForwardAxis, "SetForwardAxis" }, // 56323905
				{ &Z_Construct_UFunction_USplineMeshComponent_SetSplineUpDir, "SetSplineUpDir" }, // 3158880624
				{ &Z_Construct_UFunction_USplineMeshComponent_SetStartAndEnd, "SetStartAndEnd" }, // 3149388902
				{ &Z_Construct_UFunction_USplineMeshComponent_SetStartOffset, "SetStartOffset" }, // 2701187967
				{ &Z_Construct_UFunction_USplineMeshComponent_SetStartPosition, "SetStartPosition" }, // 732948848
				{ &Z_Construct_UFunction_USplineMeshComponent_SetStartRoll, "SetStartRoll" }, // 2521174284
				{ &Z_Construct_UFunction_USplineMeshComponent_SetStartScale, "SetStartScale" }, // 451583918
				{ &Z_Construct_UFunction_USplineMeshComponent_SetStartTangent, "SetStartTangent" }, // 1989625345
				{ &Z_Construct_UFunction_USplineMeshComponent_UpdateMesh, "UpdateMesh" }, // 3629724965
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Rendering" },
				{ "HideCategories", "Physics Object Activation Components|Activation Trigger" },
				{ "IncludePath", "Components/SplineMeshComponent.h" },
				{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
				{ "ToolTip", "A Spline Mesh Component is a derivation of a Static Mesh Component which can be deformed using a spline. Only a start and end position (and tangent) can be specified.\n@see https://docs.unrealengine.com/latest/INT/Resources/ContentExamples/Blueprint_Splines" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMeshDirty_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
				{ "ToolTip", "Indicates that the mesh needs updating" },
			};
#endif
			auto NewProp_bMeshDirty_SetBit = [](void* Obj){ ((USplineMeshComponent*)Obj)->bMeshDirty = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMeshDirty = { UE4CodeGen_Private::EPropertyClass::Bool, "bMeshDirty", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(USplineMeshComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bMeshDirty_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bMeshDirty_MetaData, ARRAY_COUNT(NewProp_bMeshDirty_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSelected_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
			};
#endif
			auto NewProp_bSelected_SetBit = [](void* Obj){ ((USplineMeshComponent*)Obj)->bSelected = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSelected = { UE4CodeGen_Private::EPropertyClass::Bool, "bSelected", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800002000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(USplineMeshComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSelected_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSelected_MetaData, ARRAY_COUNT(NewProp_bSelected_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedMeshBodySetupGuid_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
				{ "ToolTip", "Used to automatically trigger rebuild of collision data" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CachedMeshBodySetupGuid = { UE4CodeGen_Private::EPropertyClass::Struct, "CachedMeshBodySetupGuid", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(USplineMeshComponent, CachedMeshBodySetupGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_CachedMeshBodySetupGuid_MetaData, ARRAY_COUNT(NewProp_CachedMeshBodySetupGuid_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodySetup_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
				{ "ToolTip", "Physics data." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BodySetup = { UE4CodeGen_Private::EPropertyClass::Object, "BodySetup", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(USplineMeshComponent, BodySetup), Z_Construct_UClass_UBodySetup_NoRegister, METADATA_PARAMS(NewProp_BodySetup_MetaData, ARRAY_COUNT(NewProp_BodySetup_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineBoundaryMax_MetaData[] = {
				{ "Category", "SplineMesh" },
				{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
				{ "ToolTip", "Maximum coordinate along the spline forward axis which corresponds to end of spline. If set to 0.0, will use bounding box to determine bounds" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SplineBoundaryMax = { UE4CodeGen_Private::EPropertyClass::Float, "SplineBoundaryMax", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, STRUCT_OFFSET(USplineMeshComponent, SplineBoundaryMax), METADATA_PARAMS(NewProp_SplineBoundaryMax_MetaData, ARRAY_COUNT(NewProp_SplineBoundaryMax_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineBoundaryMin_MetaData[] = {
				{ "Category", "SplineMesh" },
				{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
				{ "ToolTip", "Minimum coordinate along the spline forward axis which corresponds to start of spline. If set to 0.0, will use bounding box to determine bounds" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SplineBoundaryMin = { UE4CodeGen_Private::EPropertyClass::Float, "SplineBoundaryMin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, STRUCT_OFFSET(USplineMeshComponent, SplineBoundaryMin), METADATA_PARAMS(NewProp_SplineBoundaryMin_MetaData, ARRAY_COUNT(NewProp_SplineBoundaryMin_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForwardAxis_MetaData[] = {
				{ "Category", "SplineMesh" },
				{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
				{ "ToolTip", "Chooses the forward axis for the spline mesh orientation" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ForwardAxis = { UE4CodeGen_Private::EPropertyClass::Byte, "ForwardAxis", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(USplineMeshComponent, ForwardAxis), Z_Construct_UEnum_Engine_ESplineMeshAxis, METADATA_PARAMS(NewProp_ForwardAxis_MetaData, ARRAY_COUNT(NewProp_ForwardAxis_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSmoothInterpRollScale_MetaData[] = {
				{ "Category", "SplineMesh" },
				{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
				{ "ToolTip", "If true, will use smooth interpolation (ease in/out) for Scale, Roll, and Offset along this section of spline. If false, uses linear" },
			};
#endif
			auto NewProp_bSmoothInterpRollScale_SetBit = [](void* Obj){ ((USplineMeshComponent*)Obj)->bSmoothInterpRollScale = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSmoothInterpRollScale = { UE4CodeGen_Private::EPropertyClass::Bool, "bSmoothInterpRollScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(USplineMeshComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSmoothInterpRollScale_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSmoothInterpRollScale_MetaData, ARRAY_COUNT(NewProp_bSmoothInterpRollScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowSplineEditingPerInstance_MetaData[] = {
				{ "Category", "Spline" },
				{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
				{ "ToolTip", "If true, spline keys may be edited per instance in the level viewport. Otherwise, the spline should be initialized in the construction script." },
			};
#endif
			auto NewProp_bAllowSplineEditingPerInstance_SetBit = [](void* Obj){ ((USplineMeshComponent*)Obj)->bAllowSplineEditingPerInstance = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowSplineEditingPerInstance = { UE4CodeGen_Private::EPropertyClass::Bool, "bAllowSplineEditingPerInstance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(USplineMeshComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAllowSplineEditingPerInstance_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAllowSplineEditingPerInstance_MetaData, ARRAY_COUNT(NewProp_bAllowSplineEditingPerInstance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineUpDir_MetaData[] = {
				{ "Category", "SplineMesh" },
				{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
				{ "ToolTip", "Axis (in component space) that is used to determine X axis for co-ordinates along spline" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SplineUpDir = { UE4CodeGen_Private::EPropertyClass::Struct, "SplineUpDir", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(USplineMeshComponent, SplineUpDir), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_SplineUpDir_MetaData, ARRAY_COUNT(NewProp_SplineUpDir_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineParams_MetaData[] = {
				{ "Category", "SplineMesh" },
				{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
				{ "ShowOnlyInnerProperties", "" },
				{ "ToolTip", "Spline that is used to deform mesh" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SplineParams = { UE4CodeGen_Private::EPropertyClass::Struct, "SplineParams", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(USplineMeshComponent, SplineParams), Z_Construct_UScriptStruct_FSplineMeshParams, METADATA_PARAMS(NewProp_SplineParams_MetaData, ARRAY_COUNT(NewProp_SplineParams_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bMeshDirty,
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSelected,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CachedMeshBodySetupGuid,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BodySetup,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SplineBoundaryMax,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SplineBoundaryMin,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ForwardAxis,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSmoothInterpRollScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAllowSplineEditingPerInstance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SplineUpDir,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SplineParams,
			};
			static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[] = {
				{ Z_Construct_UClass_UInterface_CollisionDataProvider_NoRegister, (int32)VTABLE_OFFSET(USplineMeshComponent, IInterface_CollisionDataProvider), false },
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USplineMeshComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USplineMeshComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B01080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				InterfaceParams, ARRAY_COUNT(InterfaceParams),
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USplineMeshComponent, 4150077891);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USplineMeshComponent(Z_Construct_UClass_USplineMeshComponent, &USplineMeshComponent::StaticClass, TEXT("/Script/Engine"), TEXT("USplineMeshComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USplineMeshComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
