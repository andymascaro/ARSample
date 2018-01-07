// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/GeometryCacheTrackTransformAnimation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCacheTrackTransformAnimation() {}
// Cross Module References
	GEOMETRYCACHE_API UClass* Z_Construct_UClass_UGeometryCacheTrack_TransformAnimation_NoRegister();
	GEOMETRYCACHE_API UClass* Z_Construct_UClass_UGeometryCacheTrack_TransformAnimation();
	GEOMETRYCACHE_API UClass* Z_Construct_UClass_UGeometryCacheTrack();
	UPackage* Z_Construct_UPackage__Script_GeometryCache();
	GEOMETRYCACHE_API UFunction* Z_Construct_UFunction_UGeometryCacheTrack_TransformAnimation_SetMesh();
	GEOMETRYCACHE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryCacheMeshData();
// End Cross Module References
	void UGeometryCacheTrack_TransformAnimation::StaticRegisterNativesUGeometryCacheTrack_TransformAnimation()
	{
		UClass* Class = UGeometryCacheTrack_TransformAnimation::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetMesh", (Native)&UGeometryCacheTrack_TransformAnimation::execSetMesh },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UGeometryCacheTrack_TransformAnimation_SetMesh()
	{
		struct GeometryCacheTrack_TransformAnimation_eventSetMesh_Parms
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
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewMeshData = { UE4CodeGen_Private::EPropertyClass::Struct, "NewMeshData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(GeometryCacheTrack_TransformAnimation_eventSetMesh_Parms, NewMeshData), Z_Construct_UScriptStruct_FGeometryCacheMeshData, METADATA_PARAMS(NewProp_NewMeshData_MetaData, ARRAY_COUNT(NewProp_NewMeshData_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewMeshData,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GeometryCacheTrackTransformAnimation.h" },
				{ "ToolTip", "Sets/updates the MeshData for this track\n\n@param NewMeshData - GeometryCacheMeshData instance later used as the rendered mesh" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCacheTrack_TransformAnimation, "SetMesh", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00420401, sizeof(GeometryCacheTrack_TransformAnimation_eventSetMesh_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGeometryCacheTrack_TransformAnimation_NoRegister()
	{
		return UGeometryCacheTrack_TransformAnimation::StaticClass();
	}
	UClass* Z_Construct_UClass_UGeometryCacheTrack_TransformAnimation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UGeometryCacheTrack,
				(UObject* (*)())Z_Construct_UPackage__Script_GeometryCache,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UGeometryCacheTrack_TransformAnimation_SetMesh, "SetMesh" }, // 1880250269
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HideCategories", "Object Object" },
				{ "IncludePath", "GeometryCacheTrackTransformAnimation.h" },
				{ "ModuleRelativePath", "Classes/GeometryCacheTrackTransformAnimation.h" },
				{ "ToolTip", "Derived GeometryCacheTrack class, used for Transform animation." },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UGeometryCacheTrack_TransformAnimation>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UGeometryCacheTrack_TransformAnimation::StaticClass,
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
	IMPLEMENT_CLASS(UGeometryCacheTrack_TransformAnimation, 655704081);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGeometryCacheTrack_TransformAnimation(Z_Construct_UClass_UGeometryCacheTrack_TransformAnimation, &UGeometryCacheTrack_TransformAnimation::StaticClass, TEXT("/Script/GeometryCache"), TEXT("UGeometryCacheTrack_TransformAnimation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeometryCacheTrack_TransformAnimation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
