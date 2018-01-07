// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Components/LineBatchComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLineBatchComponent() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBatchedPoint();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBatchedLine();
	ENGINE_API UClass* Z_Construct_UClass_ULineBatchComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULineBatchComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
// End Cross Module References
class UScriptStruct* FBatchedPoint::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FBatchedPoint_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBatchedPoint, Z_Construct_UPackage__Script_Engine(), TEXT("BatchedPoint"), sizeof(FBatchedPoint), Get_Z_Construct_UScriptStruct_FBatchedPoint_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBatchedPoint(FBatchedPoint::StaticStruct, TEXT("/Script/Engine"), TEXT("BatchedPoint"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFBatchedPoint
{
	FScriptStruct_Engine_StaticRegisterNativesFBatchedPoint()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BatchedPoint")),new UScriptStruct::TCppStructOps<FBatchedPoint>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFBatchedPoint;
	UScriptStruct* Z_Construct_UScriptStruct_FBatchedPoint()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBatchedPoint_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BatchedPoint"), sizeof(FBatchedPoint), Get_Z_Construct_UScriptStruct_FBatchedPoint_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Components/LineBatchComponent.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBatchedPoint>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DepthPriority_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/LineBatchComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_DepthPriority = { UE4CodeGen_Private::EPropertyClass::Byte, "DepthPriority", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FBatchedPoint, DepthPriority), nullptr, METADATA_PARAMS(NewProp_DepthPriority_MetaData, ARRAY_COUNT(NewProp_DepthPriority_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemainingLifeTime_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/LineBatchComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RemainingLifeTime = { UE4CodeGen_Private::EPropertyClass::Float, "RemainingLifeTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FBatchedPoint, RemainingLifeTime), METADATA_PARAMS(NewProp_RemainingLifeTime_MetaData, ARRAY_COUNT(NewProp_RemainingLifeTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointSize_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/LineBatchComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PointSize = { UE4CodeGen_Private::EPropertyClass::Float, "PointSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FBatchedPoint, PointSize), METADATA_PARAMS(NewProp_PointSize_MetaData, ARRAY_COUNT(NewProp_PointSize_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/LineBatchComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color = { UE4CodeGen_Private::EPropertyClass::Struct, "Color", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FBatchedPoint, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(NewProp_Color_MetaData, ARRAY_COUNT(NewProp_Color_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/LineBatchComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position = { UE4CodeGen_Private::EPropertyClass::Struct, "Position", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FBatchedPoint, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_Position_MetaData, ARRAY_COUNT(NewProp_Position_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DepthPriority,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RemainingLifeTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PointSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Color,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Position,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"BatchedPoint",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FBatchedPoint),
				alignof(FBatchedPoint),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBatchedPoint_CRC() { return 3094383047U; }
class UScriptStruct* FBatchedLine::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FBatchedLine_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBatchedLine, Z_Construct_UPackage__Script_Engine(), TEXT("BatchedLine"), sizeof(FBatchedLine), Get_Z_Construct_UScriptStruct_FBatchedLine_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBatchedLine(FBatchedLine::StaticStruct, TEXT("/Script/Engine"), TEXT("BatchedLine"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFBatchedLine
{
	FScriptStruct_Engine_StaticRegisterNativesFBatchedLine()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BatchedLine")),new UScriptStruct::TCppStructOps<FBatchedLine>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFBatchedLine;
	UScriptStruct* Z_Construct_UScriptStruct_FBatchedLine()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBatchedLine_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BatchedLine"), sizeof(FBatchedLine), Get_Z_Construct_UScriptStruct_FBatchedLine_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Components/LineBatchComponent.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBatchedLine>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DepthPriority_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/LineBatchComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_DepthPriority = { UE4CodeGen_Private::EPropertyClass::Byte, "DepthPriority", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FBatchedLine, DepthPriority), nullptr, METADATA_PARAMS(NewProp_DepthPriority_MetaData, ARRAY_COUNT(NewProp_DepthPriority_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemainingLifeTime_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/LineBatchComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RemainingLifeTime = { UE4CodeGen_Private::EPropertyClass::Float, "RemainingLifeTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FBatchedLine, RemainingLifeTime), METADATA_PARAMS(NewProp_RemainingLifeTime_MetaData, ARRAY_COUNT(NewProp_RemainingLifeTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Thickness_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/LineBatchComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Thickness = { UE4CodeGen_Private::EPropertyClass::Float, "Thickness", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FBatchedLine, Thickness), METADATA_PARAMS(NewProp_Thickness_MetaData, ARRAY_COUNT(NewProp_Thickness_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/LineBatchComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color = { UE4CodeGen_Private::EPropertyClass::Struct, "Color", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FBatchedLine, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(NewProp_Color_MetaData, ARRAY_COUNT(NewProp_Color_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_End_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/LineBatchComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_End = { UE4CodeGen_Private::EPropertyClass::Struct, "End", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FBatchedLine, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_End_MetaData, ARRAY_COUNT(NewProp_End_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/LineBatchComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Start = { UE4CodeGen_Private::EPropertyClass::Struct, "Start", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FBatchedLine, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_Start_MetaData, ARRAY_COUNT(NewProp_Start_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DepthPriority,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RemainingLifeTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Thickness,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Color,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_End,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Start,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"BatchedLine",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FBatchedLine),
				alignof(FBatchedLine),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBatchedLine_CRC() { return 3073067647U; }
	void ULineBatchComponent::StaticRegisterNativesULineBatchComponent()
	{
	}
	UClass* Z_Construct_UClass_ULineBatchComponent_NoRegister()
	{
		return ULineBatchComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_ULineBatchComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Mobility Trigger" },
				{ "IncludePath", "Components/LineBatchComponent.h" },
				{ "ModuleRelativePath", "Classes/Components/LineBatchComponent.h" },
				{ "ToolTip", "The line batch component buffers and draws lines (and some other line-based shapes) in a scene.\n    This can be useful for debug drawing, but is not very performant for runtime use." },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ULineBatchComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ULineBatchComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00A80080u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULineBatchComponent, 3856530024);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULineBatchComponent(Z_Construct_UClass_ULineBatchComponent, &ULineBatchComponent::StaticClass, TEXT("/Script/Engine"), TEXT("ULineBatchComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULineBatchComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
