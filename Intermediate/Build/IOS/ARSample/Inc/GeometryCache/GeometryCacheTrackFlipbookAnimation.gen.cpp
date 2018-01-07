// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/GeometryCacheTrackFlipbookAnimation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCacheTrackFlipbookAnimation() {}
// Cross Module References
	GEOMETRYCACHE_API UClass* Z_Construct_UClass_UGeometryCacheTrack_FlipbookAnimation_NoRegister();
	GEOMETRYCACHE_API UClass* Z_Construct_UClass_UGeometryCacheTrack_FlipbookAnimation();
	GEOMETRYCACHE_API UClass* Z_Construct_UClass_UGeometryCacheTrack();
	UPackage* Z_Construct_UPackage__Script_GeometryCache();
	GEOMETRYCACHE_API UFunction* Z_Construct_UFunction_UGeometryCacheTrack_FlipbookAnimation_AddMeshSample();
	GEOMETRYCACHE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryCacheMeshData();
// End Cross Module References
	void UGeometryCacheTrack_FlipbookAnimation::StaticRegisterNativesUGeometryCacheTrack_FlipbookAnimation()
	{
		UClass* Class = UGeometryCacheTrack_FlipbookAnimation::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddMeshSample", (Native)&UGeometryCacheTrack_FlipbookAnimation::execAddMeshSample },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UGeometryCacheTrack_FlipbookAnimation_AddMeshSample()
	{
		struct GeometryCacheTrack_FlipbookAnimation_eventAddMeshSample_Parms
		{
			FGeometryCacheMeshData MeshData;
			float SampleTime;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SampleTime_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SampleTime = { UE4CodeGen_Private::EPropertyClass::Float, "SampleTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(GeometryCacheTrack_FlipbookAnimation_eventAddMeshSample_Parms, SampleTime), METADATA_PARAMS(NewProp_SampleTime_MetaData, ARRAY_COUNT(NewProp_SampleTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshData_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_MeshData = { UE4CodeGen_Private::EPropertyClass::Struct, "MeshData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(GeometryCacheTrack_FlipbookAnimation_eventAddMeshSample_Parms, MeshData), Z_Construct_UScriptStruct_FGeometryCacheMeshData, METADATA_PARAMS(NewProp_MeshData_MetaData, ARRAY_COUNT(NewProp_MeshData_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SampleTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MeshData,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GeometryCacheTrackFlipbookAnimation.h" },
				{ "ToolTip", "Add a GeometryCacheMeshData sample to the Track\n\n@param MeshData - Holds the mesh data for the specific sample\n@param SampleTime - SampleTime for the specific sample being added\n@return void" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCacheTrack_FlipbookAnimation, "AddMeshSample", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00420401, sizeof(GeometryCacheTrack_FlipbookAnimation_eventAddMeshSample_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGeometryCacheTrack_FlipbookAnimation_NoRegister()
	{
		return UGeometryCacheTrack_FlipbookAnimation::StaticClass();
	}
	UClass* Z_Construct_UClass_UGeometryCacheTrack_FlipbookAnimation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UGeometryCacheTrack,
				(UObject* (*)())Z_Construct_UPackage__Script_GeometryCache,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UGeometryCacheTrack_FlipbookAnimation_AddMeshSample, "AddMeshSample" }, // 2598708064
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HideCategories", "Object Object" },
				{ "IncludePath", "GeometryCacheTrackFlipbookAnimation.h" },
				{ "ModuleRelativePath", "Classes/GeometryCacheTrackFlipbookAnimation.h" },
				{ "ToolTip", "Derived GeometryCacheTrack class, used for Transform animation." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumMeshSamples_MetaData[] = {
				{ "Category", "GeometryCache" },
				{ "ModuleRelativePath", "Classes/GeometryCacheTrackFlipbookAnimation.h" },
				{ "ToolTip", "Number of Mesh Sample within this track" },
			};
#endif
			static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_NumMeshSamples = { UE4CodeGen_Private::EPropertyClass::UInt32, "NumMeshSamples", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000020001, 1, nullptr, STRUCT_OFFSET(UGeometryCacheTrack_FlipbookAnimation, NumMeshSamples), METADATA_PARAMS(NewProp_NumMeshSamples_MetaData, ARRAY_COUNT(NewProp_NumMeshSamples_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NumMeshSamples,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UGeometryCacheTrack_FlipbookAnimation>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UGeometryCacheTrack_FlipbookAnimation::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00102080u,
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
	IMPLEMENT_CLASS(UGeometryCacheTrack_FlipbookAnimation, 1008242741);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGeometryCacheTrack_FlipbookAnimation(Z_Construct_UClass_UGeometryCacheTrack_FlipbookAnimation, &UGeometryCacheTrack_FlipbookAnimation::StaticClass, TEXT("/Script/GeometryCache"), TEXT("UGeometryCacheTrack_FlipbookAnimation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeometryCacheTrack_FlipbookAnimation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
