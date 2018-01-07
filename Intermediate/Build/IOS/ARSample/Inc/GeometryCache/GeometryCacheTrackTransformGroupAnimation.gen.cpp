// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/GeometryCacheTrackTransformGroupAnimation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCacheTrackTransformGroupAnimation() {}
// Cross Module References
	GEOMETRYCACHE_API UClass* Z_Construct_UClass_UGeometryCacheTrack_TransformGroupAnimation_NoRegister();
	GEOMETRYCACHE_API UClass* Z_Construct_UClass_UGeometryCacheTrack_TransformGroupAnimation();
	GEOMETRYCACHE_API UClass* Z_Construct_UClass_UGeometryCacheTrack();
	UPackage* Z_Construct_UPackage__Script_GeometryCache();
	GEOMETRYCACHE_API UFunction* Z_Construct_UFunction_UGeometryCacheTrack_TransformGroupAnimation_SetMesh();
	GEOMETRYCACHE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryCacheMeshData();
// End Cross Module References
	void UGeometryCacheTrack_TransformGroupAnimation::StaticRegisterNativesUGeometryCacheTrack_TransformGroupAnimation()
	{
		UClass* Class = UGeometryCacheTrack_TransformGroupAnimation::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetMesh", (Native)&UGeometryCacheTrack_TransformGroupAnimation::execSetMesh },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UGeometryCacheTrack_TransformGroupAnimation_SetMesh()
	{
		struct GeometryCacheTrack_TransformGroupAnimation_eventSetMesh_Parms
		{
			FGeometryCacheMeshData NewMeshData;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewMeshData_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewMeshData = { UE4CodeGen_Private::EPropertyClass::Struct, "NewMeshData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(GeometryCacheTrack_TransformGroupAnimation_eventSetMesh_Parms, NewMeshData), Z_Construct_UScriptStruct_FGeometryCacheMeshData, METADATA_PARAMS(NewProp_NewMeshData_MetaData, ARRAY_COUNT(NewProp_NewMeshData_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewMeshData,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GeometryCacheTrackTransformGroupAnimation.h" },
				{ "ToolTip", "Sets/updates the MeshData for this track\n\n@param NewMeshData - GeometryCacheMeshData instance later used as the rendered mesh" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCacheTrack_TransformGroupAnimation, "SetMesh", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00420401, sizeof(GeometryCacheTrack_TransformGroupAnimation_eventSetMesh_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGeometryCacheTrack_TransformGroupAnimation_NoRegister()
	{
		return UGeometryCacheTrack_TransformGroupAnimation::StaticClass();
	}
	UClass* Z_Construct_UClass_UGeometryCacheTrack_TransformGroupAnimation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UGeometryCacheTrack,
				(UObject* (*)())Z_Construct_UPackage__Script_GeometryCache,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UGeometryCacheTrack_TransformGroupAnimation_SetMesh, "SetMesh" }, // 2716687156
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HideCategories", "Object Object" },
				{ "IncludePath", "GeometryCacheTrackTransformGroupAnimation.h" },
				{ "ModuleRelativePath", "Classes/GeometryCacheTrackTransformGroupAnimation.h" },
				{ "ToolTip", "Derived GeometryCacheTrack class, used for Transform animation." },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UGeometryCacheTrack_TransformGroupAnimation>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UGeometryCacheTrack_TransformGroupAnimation::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00102080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				nullptr, 0,
				"Engine",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGeometryCacheTrack_TransformGroupAnimation, 522758740);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGeometryCacheTrack_TransformGroupAnimation(Z_Construct_UClass_UGeometryCacheTrack_TransformGroupAnimation, &UGeometryCacheTrack_TransformGroupAnimation::StaticClass, TEXT("/Script/GeometryCache"), TEXT("UGeometryCacheTrack_TransformGroupAnimation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeometryCacheTrack_TransformGroupAnimation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
