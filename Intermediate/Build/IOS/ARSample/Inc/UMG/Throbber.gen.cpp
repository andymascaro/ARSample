// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Components/Throbber.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThrobber() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UThrobber_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UThrobber();
	UMG_API UClass* Z_Construct_UClass_UWidget();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UFunction* Z_Construct_UFunction_UThrobber_SetAnimateHorizontally();
	UMG_API UFunction* Z_Construct_UFunction_UThrobber_SetAnimateOpacity();
	UMG_API UFunction* Z_Construct_UFunction_UThrobber_SetAnimateVertically();
	UMG_API UFunction* Z_Construct_UFunction_UThrobber_SetNumberOfPieces();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	ENGINE_API UClass* Z_Construct_UClass_USlateBrushAsset_NoRegister();
// End Cross Module References
	void UThrobber::StaticRegisterNativesUThrobber()
	{
		UClass* Class = UThrobber::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetAnimateHorizontally", (Native)&UThrobber::execSetAnimateHorizontally },
			{ "SetAnimateOpacity", (Native)&UThrobber::execSetAnimateOpacity },
			{ "SetAnimateVertically", (Native)&UThrobber::execSetAnimateVertically },
			{ "SetNumberOfPieces", (Native)&UThrobber::execSetNumberOfPieces },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UThrobber_SetAnimateHorizontally()
	{
		struct Throbber_eventSetAnimateHorizontally_Parms
		{
			bool bInAnimateHorizontally;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bInAnimateHorizontally_SetBit = [](void* Obj){ ((Throbber_eventSetAnimateHorizontally_Parms*)Obj)->bInAnimateHorizontally = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInAnimateHorizontally = { UE4CodeGen_Private::EPropertyClass::Bool, "bInAnimateHorizontally", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Throbber_eventSetAnimateHorizontally_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bInAnimateHorizontally_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bInAnimateHorizontally,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Components/Throbber.h" },
				{ "ToolTip", "Sets whether the pieces animate horizontally." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UThrobber, "SetAnimateHorizontally", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Throbber_eventSetAnimateHorizontally_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UThrobber_SetAnimateOpacity()
	{
		struct Throbber_eventSetAnimateOpacity_Parms
		{
			bool bInAnimateOpacity;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bInAnimateOpacity_SetBit = [](void* Obj){ ((Throbber_eventSetAnimateOpacity_Parms*)Obj)->bInAnimateOpacity = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInAnimateOpacity = { UE4CodeGen_Private::EPropertyClass::Bool, "bInAnimateOpacity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Throbber_eventSetAnimateOpacity_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bInAnimateOpacity_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bInAnimateOpacity,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Components/Throbber.h" },
				{ "ToolTip", "Sets whether the pieces animate their opacity." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UThrobber, "SetAnimateOpacity", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Throbber_eventSetAnimateOpacity_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UThrobber_SetAnimateVertically()
	{
		struct Throbber_eventSetAnimateVertically_Parms
		{
			bool bInAnimateVertically;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bInAnimateVertically_SetBit = [](void* Obj){ ((Throbber_eventSetAnimateVertically_Parms*)Obj)->bInAnimateVertically = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInAnimateVertically = { UE4CodeGen_Private::EPropertyClass::Bool, "bInAnimateVertically", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Throbber_eventSetAnimateVertically_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bInAnimateVertically_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bInAnimateVertically,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Components/Throbber.h" },
				{ "ToolTip", "Sets whether the pieces animate vertically." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UThrobber, "SetAnimateVertically", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Throbber_eventSetAnimateVertically_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UThrobber_SetNumberOfPieces()
	{
		struct Throbber_eventSetNumberOfPieces_Parms
		{
			int32 InNumberOfPieces;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_InNumberOfPieces = { UE4CodeGen_Private::EPropertyClass::Int, "InNumberOfPieces", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Throbber_eventSetNumberOfPieces_Parms, InNumberOfPieces), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InNumberOfPieces,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Components/Throbber.h" },
				{ "ToolTip", "Sets how many pieces there are" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UThrobber, "SetNumberOfPieces", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Throbber_eventSetNumberOfPieces_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UThrobber_NoRegister()
	{
		return UThrobber::StaticClass();
	}
	UClass* Z_Construct_UClass_UThrobber()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UWidget,
				(UObject* (*)())Z_Construct_UPackage__Script_UMG,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UThrobber_SetAnimateHorizontally, "SetAnimateHorizontally" }, // 1519225429
				{ &Z_Construct_UFunction_UThrobber_SetAnimateOpacity, "SetAnimateOpacity" }, // 2073487115
				{ &Z_Construct_UFunction_UThrobber_SetAnimateVertically, "SetAnimateVertically" }, // 1713001048
				{ &Z_Construct_UFunction_UThrobber_SetNumberOfPieces, "SetNumberOfPieces" }, // 2272795565
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Components/Throbber.h" },
				{ "ModuleRelativePath", "Public/Components/Throbber.h" },
				{ "ToolTip", "A Throbber widget that shows several zooming circles in a row." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Image_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Components/Throbber.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Image = { UE4CodeGen_Private::EPropertyClass::Struct, "Image", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UThrobber, Image), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_Image_MetaData, ARRAY_COUNT(NewProp_Image_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PieceImage_MetaData[] = {
				{ "ModuleRelativePath", "Public/Components/Throbber.h" },
				{ "ToolTip", "Image to use for each segment of the throbber" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PieceImage = { UE4CodeGen_Private::EPropertyClass::Object, "PieceImage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(UThrobber, PieceImage_DEPRECATED), Z_Construct_UClass_USlateBrushAsset_NoRegister, METADATA_PARAMS(NewProp_PieceImage_MetaData, ARRAY_COUNT(NewProp_PieceImage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAnimateOpacity_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Components/Throbber.h" },
				{ "ToolTip", "Should the pieces animate their opacity?" },
			};
#endif
			auto NewProp_bAnimateOpacity_SetBit = [](void* Obj){ ((UThrobber*)Obj)->bAnimateOpacity = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAnimateOpacity = { UE4CodeGen_Private::EPropertyClass::Bool, "bAnimateOpacity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UThrobber), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAnimateOpacity_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAnimateOpacity_MetaData, ARRAY_COUNT(NewProp_bAnimateOpacity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAnimateVertically_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Components/Throbber.h" },
				{ "ToolTip", "Should the pieces animate vertically?" },
			};
#endif
			auto NewProp_bAnimateVertically_SetBit = [](void* Obj){ ((UThrobber*)Obj)->bAnimateVertically = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAnimateVertically = { UE4CodeGen_Private::EPropertyClass::Bool, "bAnimateVertically", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UThrobber), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAnimateVertically_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAnimateVertically_MetaData, ARRAY_COUNT(NewProp_bAnimateVertically_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAnimateHorizontally_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Components/Throbber.h" },
				{ "ToolTip", "Should the pieces animate horizontally?" },
			};
#endif
			auto NewProp_bAnimateHorizontally_SetBit = [](void* Obj){ ((UThrobber*)Obj)->bAnimateHorizontally = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAnimateHorizontally = { UE4CodeGen_Private::EPropertyClass::Bool, "bAnimateHorizontally", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UThrobber), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAnimateHorizontally_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAnimateHorizontally_MetaData, ARRAY_COUNT(NewProp_bAnimateHorizontally_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfPieces_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ClampMax", "25" },
				{ "ClampMin", "1" },
				{ "ModuleRelativePath", "Public/Components/Throbber.h" },
				{ "ToolTip", "How many pieces there are" },
				{ "UIMax", "25" },
				{ "UIMin", "1" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberOfPieces = { UE4CodeGen_Private::EPropertyClass::Int, "NumberOfPieces", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UThrobber, NumberOfPieces), METADATA_PARAMS(NewProp_NumberOfPieces_MetaData, ARRAY_COUNT(NewProp_NumberOfPieces_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Image,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PieceImage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAnimateOpacity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAnimateVertically,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAnimateHorizontally,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NumberOfPieces,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UThrobber>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UThrobber::StaticClass,
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
	IMPLEMENT_CLASS(UThrobber, 2740887984);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UThrobber(Z_Construct_UClass_UThrobber, &UThrobber::StaticClass, TEXT("/Script/UMG"), TEXT("UThrobber"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UThrobber);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
