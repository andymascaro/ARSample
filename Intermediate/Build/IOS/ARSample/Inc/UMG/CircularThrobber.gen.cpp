// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Components/CircularThrobber.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCircularThrobber() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UCircularThrobber_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UCircularThrobber();
	UMG_API UClass* Z_Construct_UClass_UWidget();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UFunction* Z_Construct_UFunction_UCircularThrobber_SetNumberOfPieces();
	UMG_API UFunction* Z_Construct_UFunction_UCircularThrobber_SetPeriod();
	UMG_API UFunction* Z_Construct_UFunction_UCircularThrobber_SetRadius();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	ENGINE_API UClass* Z_Construct_UClass_USlateBrushAsset_NoRegister();
// End Cross Module References
	void UCircularThrobber::StaticRegisterNativesUCircularThrobber()
	{
		UClass* Class = UCircularThrobber::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetNumberOfPieces", (Native)&UCircularThrobber::execSetNumberOfPieces },
			{ "SetPeriod", (Native)&UCircularThrobber::execSetPeriod },
			{ "SetRadius", (Native)&UCircularThrobber::execSetRadius },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UCircularThrobber_SetNumberOfPieces()
	{
		struct CircularThrobber_eventSetNumberOfPieces_Parms
		{
			int32 InNumberOfPieces;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_InNumberOfPieces = { UE4CodeGen_Private::EPropertyClass::Int, "InNumberOfPieces", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CircularThrobber_eventSetNumberOfPieces_Parms, InNumberOfPieces), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InNumberOfPieces,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Components/CircularThrobber.h" },
				{ "ToolTip", "Sets how many pieces there are." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCircularThrobber, "SetNumberOfPieces", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CircularThrobber_eventSetNumberOfPieces_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCircularThrobber_SetPeriod()
	{
		struct CircularThrobber_eventSetPeriod_Parms
		{
			float InPeriod;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InPeriod = { UE4CodeGen_Private::EPropertyClass::Float, "InPeriod", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CircularThrobber_eventSetPeriod_Parms, InPeriod), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InPeriod,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Components/CircularThrobber.h" },
				{ "ToolTip", "Sets the amount of time for a full circle (in seconds)." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCircularThrobber, "SetPeriod", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CircularThrobber_eventSetPeriod_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCircularThrobber_SetRadius()
	{
		struct CircularThrobber_eventSetRadius_Parms
		{
			float InRadius;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InRadius = { UE4CodeGen_Private::EPropertyClass::Float, "InRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CircularThrobber_eventSetRadius_Parms, InRadius), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InRadius,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Components/CircularThrobber.h" },
				{ "ToolTip", "Sets the radius of the circle." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCircularThrobber, "SetRadius", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CircularThrobber_eventSetRadius_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCircularThrobber_NoRegister()
	{
		return UCircularThrobber::StaticClass();
	}
	UClass* Z_Construct_UClass_UCircularThrobber()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UWidget,
				(UObject* (*)())Z_Construct_UPackage__Script_UMG,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UCircularThrobber_SetNumberOfPieces, "SetNumberOfPieces" }, // 964391486
				{ &Z_Construct_UFunction_UCircularThrobber_SetPeriod, "SetPeriod" }, // 464202209
				{ &Z_Construct_UFunction_UCircularThrobber_SetRadius, "SetRadius" }, // 2933554101
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Components/CircularThrobber.h" },
				{ "ModuleRelativePath", "Public/Components/CircularThrobber.h" },
				{ "ToolTip", "A throbber widget that orients images in a spinning circle.\n\n* No Children\n* Spinner Progress" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableRadius_MetaData[] = {
				{ "Category", "Appearance" },
				{ "InlineEditConditionToggle", "" },
				{ "ModuleRelativePath", "Public/Components/CircularThrobber.h" },
			};
#endif
			auto NewProp_bEnableRadius_SetBit = [](void* Obj){ ((UCircularThrobber*)Obj)->bEnableRadius = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableRadius = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000002001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UCircularThrobber), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnableRadius_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnableRadius_MetaData, ARRAY_COUNT(NewProp_bEnableRadius_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Image_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Components/CircularThrobber.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Image = { UE4CodeGen_Private::EPropertyClass::Struct, "Image", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UCircularThrobber, Image), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_Image_MetaData, ARRAY_COUNT(NewProp_Image_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PieceImage_MetaData[] = {
				{ "ModuleRelativePath", "Public/Components/CircularThrobber.h" },
				{ "ToolTip", "Image to use for each segment of the throbber" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PieceImage = { UE4CodeGen_Private::EPropertyClass::Object, "PieceImage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(UCircularThrobber, PieceImage_DEPRECATED), Z_Construct_UClass_USlateBrushAsset_NoRegister, METADATA_PARAMS(NewProp_PieceImage_MetaData, ARRAY_COUNT(NewProp_PieceImage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
				{ "Category", "Appearance" },
				{ "EditCondition", "bEnableRadius" },
				{ "ModuleRelativePath", "Public/Components/CircularThrobber.h" },
				{ "ToolTip", "The radius of the circle. If the throbber is a child of Canvas Panel, the 'Size to Content' option must be enabled in order to set Radius." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius = { UE4CodeGen_Private::EPropertyClass::Float, "Radius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UCircularThrobber, Radius), METADATA_PARAMS(NewProp_Radius_MetaData, ARRAY_COUNT(NewProp_Radius_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Period_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ClampMin", "0" },
				{ "ModuleRelativePath", "Public/Components/CircularThrobber.h" },
				{ "ToolTip", "The amount of time for a full circle (in seconds)" },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Period = { UE4CodeGen_Private::EPropertyClass::Float, "Period", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UCircularThrobber, Period), METADATA_PARAMS(NewProp_Period_MetaData, ARRAY_COUNT(NewProp_Period_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfPieces_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ClampMax", "25" },
				{ "ClampMin", "1" },
				{ "ModuleRelativePath", "Public/Components/CircularThrobber.h" },
				{ "ToolTip", "How many pieces there are" },
				{ "UIMax", "25" },
				{ "UIMin", "1" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberOfPieces = { UE4CodeGen_Private::EPropertyClass::Int, "NumberOfPieces", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UCircularThrobber, NumberOfPieces), METADATA_PARAMS(NewProp_NumberOfPieces_MetaData, ARRAY_COUNT(NewProp_NumberOfPieces_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnableRadius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Image,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PieceImage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Radius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Period,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NumberOfPieces,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UCircularThrobber>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UCircularThrobber::StaticClass,
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
	IMPLEMENT_CLASS(UCircularThrobber, 1252061218);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCircularThrobber(Z_Construct_UClass_UCircularThrobber, &UCircularThrobber::StaticClass, TEXT("/Script/UMG"), TEXT("UCircularThrobber"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCircularThrobber);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
