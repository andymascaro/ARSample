// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/MeshVertexPainter/MeshVertexPainterKismetLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshVertexPainterKismetLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMeshVertexPainterKismetLibrary_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMeshVertexPainterKismetLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesLerpAlongAxis();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EVertexPaintAxis();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesSingleColor();
	ENGINE_API UFunction* Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_RemovePaintedVertices();
// End Cross Module References
	void UMeshVertexPainterKismetLibrary::StaticRegisterNativesUMeshVertexPainterKismetLibrary()
	{
		UClass* Class = UMeshVertexPainterKismetLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PaintVerticesLerpAlongAxis", (Native)&UMeshVertexPainterKismetLibrary::execPaintVerticesLerpAlongAxis },
			{ "PaintVerticesSingleColor", (Native)&UMeshVertexPainterKismetLibrary::execPaintVerticesSingleColor },
			{ "RemovePaintedVertices", (Native)&UMeshVertexPainterKismetLibrary::execRemovePaintedVertices },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesLerpAlongAxis()
	{
		struct MeshVertexPainterKismetLibrary_eventPaintVerticesLerpAlongAxis_Parms
		{
			UStaticMeshComponent* StaticMeshComponent;
			FLinearColor StartColor;
			FLinearColor EndColor;
			EVertexPaintAxis Axis;
			bool bConvertToSRGB;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bConvertToSRGB_SetBit = [](void* Obj){ ((MeshVertexPainterKismetLibrary_eventPaintVerticesLerpAlongAxis_Parms*)Obj)->bConvertToSRGB = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConvertToSRGB = { UE4CodeGen_Private::EPropertyClass::Bool, "bConvertToSRGB", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MeshVertexPainterKismetLibrary_eventPaintVerticesLerpAlongAxis_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bConvertToSRGB_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Axis = { UE4CodeGen_Private::EPropertyClass::Enum, "Axis", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MeshVertexPainterKismetLibrary_eventPaintVerticesLerpAlongAxis_Parms, Axis), Z_Construct_UEnum_Engine_EVertexPaintAxis, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Axis_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndColor_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndColor = { UE4CodeGen_Private::EPropertyClass::Struct, "EndColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(MeshVertexPainterKismetLibrary_eventPaintVerticesLerpAlongAxis_Parms, EndColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(NewProp_EndColor_MetaData, ARRAY_COUNT(NewProp_EndColor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartColor_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartColor = { UE4CodeGen_Private::EPropertyClass::Struct, "StartColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(MeshVertexPainterKismetLibrary_eventPaintVerticesLerpAlongAxis_Parms, StartColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(NewProp_StartColor_MetaData, ARRAY_COUNT(NewProp_StartColor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponent = { UE4CodeGen_Private::EPropertyClass::Object, "StaticMeshComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(MeshVertexPainterKismetLibrary_eventPaintVerticesLerpAlongAxis_Parms, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_StaticMeshComponent_MetaData, ARRAY_COUNT(NewProp_StaticMeshComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bConvertToSRGB,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Axis,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Axis_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EndColor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StartColor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StaticMeshComponent,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VertexPaint" },
				{ "CPP_Default_bConvertToSRGB", "true" },
				{ "ModuleRelativePath", "Classes/MeshVertexPainter/MeshVertexPainterKismetLibrary.h" },
				{ "ToolTip", "Paints vertex colors on a mesh component lerping from the start to the end color along the specified axis." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshVertexPainterKismetLibrary, "PaintVerticesLerpAlongAxis", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C22401, sizeof(MeshVertexPainterKismetLibrary_eventPaintVerticesLerpAlongAxis_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesSingleColor()
	{
		struct MeshVertexPainterKismetLibrary_eventPaintVerticesSingleColor_Parms
		{
			UStaticMeshComponent* StaticMeshComponent;
			FLinearColor FillColor;
			bool bConvertToSRGB;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bConvertToSRGB_SetBit = [](void* Obj){ ((MeshVertexPainterKismetLibrary_eventPaintVerticesSingleColor_Parms*)Obj)->bConvertToSRGB = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConvertToSRGB = { UE4CodeGen_Private::EPropertyClass::Bool, "bConvertToSRGB", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MeshVertexPainterKismetLibrary_eventPaintVerticesSingleColor_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bConvertToSRGB_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FillColor_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_FillColor = { UE4CodeGen_Private::EPropertyClass::Struct, "FillColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(MeshVertexPainterKismetLibrary_eventPaintVerticesSingleColor_Parms, FillColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(NewProp_FillColor_MetaData, ARRAY_COUNT(NewProp_FillColor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponent = { UE4CodeGen_Private::EPropertyClass::Object, "StaticMeshComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(MeshVertexPainterKismetLibrary_eventPaintVerticesSingleColor_Parms, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_StaticMeshComponent_MetaData, ARRAY_COUNT(NewProp_StaticMeshComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bConvertToSRGB,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FillColor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StaticMeshComponent,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VertexPaint" },
				{ "CPP_Default_bConvertToSRGB", "true" },
				{ "ModuleRelativePath", "Classes/MeshVertexPainter/MeshVertexPainterKismetLibrary.h" },
				{ "ToolTip", "Paints vertex colors on a mesh component in a specified color." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshVertexPainterKismetLibrary, "PaintVerticesSingleColor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C22401, sizeof(MeshVertexPainterKismetLibrary_eventPaintVerticesSingleColor_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_RemovePaintedVertices()
	{
		struct MeshVertexPainterKismetLibrary_eventRemovePaintedVertices_Parms
		{
			UStaticMeshComponent* StaticMeshComponent;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponent = { UE4CodeGen_Private::EPropertyClass::Object, "StaticMeshComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(MeshVertexPainterKismetLibrary_eventRemovePaintedVertices_Parms, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_StaticMeshComponent_MetaData, ARRAY_COUNT(NewProp_StaticMeshComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StaticMeshComponent,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VertexPaint" },
				{ "ModuleRelativePath", "Classes/MeshVertexPainter/MeshVertexPainterKismetLibrary.h" },
				{ "ToolTip", "Removes vertex colors on a mesh component" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshVertexPainterKismetLibrary, "RemovePaintedVertices", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(MeshVertexPainterKismetLibrary_eventRemovePaintedVertices_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMeshVertexPainterKismetLibrary_NoRegister()
	{
		return UMeshVertexPainterKismetLibrary::StaticClass();
	}
	UClass* Z_Construct_UClass_UMeshVertexPainterKismetLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesLerpAlongAxis, "PaintVerticesLerpAlongAxis" }, // 2652073189
				{ &Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesSingleColor, "PaintVerticesSingleColor" }, // 1458802455
				{ &Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_RemovePaintedVertices, "RemovePaintedVertices" }, // 1231366907
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "MeshVertexPainter/MeshVertexPainterKismetLibrary.h" },
				{ "ModuleRelativePath", "Classes/MeshVertexPainter/MeshVertexPainterKismetLibrary.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMeshVertexPainterKismetLibrary>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMeshVertexPainterKismetLibrary::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00080080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(UMeshVertexPainterKismetLibrary, 1212934766);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMeshVertexPainterKismetLibrary(Z_Construct_UClass_UMeshVertexPainterKismetLibrary, &UMeshVertexPainterKismetLibrary::StaticClass, TEXT("/Script/Engine"), TEXT("UMeshVertexPainterKismetLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshVertexPainterKismetLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
