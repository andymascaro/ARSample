// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Components/SafeZone.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSafeZone() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_USafeZone_NoRegister();
	UMG_API UClass* Z_Construct_UClass_USafeZone();
	UMG_API UClass* Z_Construct_UClass_UContentWidget();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UFunction* Z_Construct_UFunction_USafeZone_SetSidesToPad();
// End Cross Module References
	void USafeZone::StaticRegisterNativesUSafeZone()
	{
		UClass* Class = USafeZone::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetSidesToPad", (Native)&USafeZone::execSetSidesToPad },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_USafeZone_SetSidesToPad()
	{
		struct SafeZone_eventSetSidesToPad_Parms
		{
			bool InPadLeft;
			bool InPadRight;
			bool InPadTop;
			bool InPadBottom;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_InPadBottom_SetBit = [](void* Obj){ ((SafeZone_eventSetSidesToPad_Parms*)Obj)->InPadBottom = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InPadBottom = { UE4CodeGen_Private::EPropertyClass::Bool, "InPadBottom", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SafeZone_eventSetSidesToPad_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_InPadBottom_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_InPadTop_SetBit = [](void* Obj){ ((SafeZone_eventSetSidesToPad_Parms*)Obj)->InPadTop = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InPadTop = { UE4CodeGen_Private::EPropertyClass::Bool, "InPadTop", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SafeZone_eventSetSidesToPad_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_InPadTop_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_InPadRight_SetBit = [](void* Obj){ ((SafeZone_eventSetSidesToPad_Parms*)Obj)->InPadRight = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InPadRight = { UE4CodeGen_Private::EPropertyClass::Bool, "InPadRight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SafeZone_eventSetSidesToPad_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_InPadRight_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_InPadLeft_SetBit = [](void* Obj){ ((SafeZone_eventSetSidesToPad_Parms*)Obj)->InPadLeft = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InPadLeft = { UE4CodeGen_Private::EPropertyClass::Bool, "InPadLeft", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SafeZone_eventSetSidesToPad_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_InPadLeft_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InPadBottom,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InPadTop,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InPadRight,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InPadLeft,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "SafeZone" },
				{ "ModuleRelativePath", "Public/Components/SafeZone.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USafeZone, "SetSidesToPad", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SafeZone_eventSetSidesToPad_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USafeZone_NoRegister()
	{
		return USafeZone::StaticClass();
	}
	UClass* Z_Construct_UClass_USafeZone()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UContentWidget,
				(UObject* (*)())Z_Construct_UPackage__Script_UMG,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_USafeZone_SetSidesToPad, "SetSidesToPad" }, // 1093130894
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Components/SafeZone.h" },
				{ "ModuleRelativePath", "Public/Components/SafeZone.h" },
				{ "ToolTip", "The Safe-Zone widget is an essential part of developing a game UI that can run on lots of different non-PC platforms.\nWhile a modern flat panel computer monitor may not have over scan issues, this is a common occurrence for Consoles.\nIt's common for TVs to have extra pixels under the bezel, in addition to projectors and projection TVs having potentially\nseveral vertical and horizontal columns of pixels hidden behind or against a black border of the projection screen.\n\nUseful testing console commands to help, simulate the safe zone on PC,\n  r.DebugSafeZone.TitleRatio 0.96\n  r.DebugActionZone.ActionRatio 0.96\n\nTo enable a red band to visualize the safe zone, use this console command,\nr.DebugSafeZone.Mode controls the debug visualization overlay (0..2, default 0).\n  0: Do not display the safe zone overlay.\n  1: Display the overlay for the title safe zone.\n  2: Display the overlay for the action safe zone." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PadBottom_MetaData[] = {
				{ "Category", "SafeZone" },
				{ "ModuleRelativePath", "Public/Components/SafeZone.h" },
				{ "ToolTip", "If this safe zone should pad for the bottom side of the screen's safe zone" },
			};
#endif
			auto NewProp_PadBottom_SetBit = [](void* Obj){ ((USafeZone*)Obj)->PadBottom = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_PadBottom = { UE4CodeGen_Private::EPropertyClass::Bool, "PadBottom", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(USafeZone), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_PadBottom_SetBit)>::SetBit, METADATA_PARAMS(NewProp_PadBottom_MetaData, ARRAY_COUNT(NewProp_PadBottom_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PadTop_MetaData[] = {
				{ "Category", "SafeZone" },
				{ "ModuleRelativePath", "Public/Components/SafeZone.h" },
				{ "ToolTip", "If this safe zone should pad for the top side of the screen's safe zone" },
			};
#endif
			auto NewProp_PadTop_SetBit = [](void* Obj){ ((USafeZone*)Obj)->PadTop = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_PadTop = { UE4CodeGen_Private::EPropertyClass::Bool, "PadTop", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(USafeZone), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_PadTop_SetBit)>::SetBit, METADATA_PARAMS(NewProp_PadTop_MetaData, ARRAY_COUNT(NewProp_PadTop_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PadRight_MetaData[] = {
				{ "Category", "SafeZone" },
				{ "ModuleRelativePath", "Public/Components/SafeZone.h" },
				{ "ToolTip", "If this safe zone should pad for the right side of the screen's safe zone" },
			};
#endif
			auto NewProp_PadRight_SetBit = [](void* Obj){ ((USafeZone*)Obj)->PadRight = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_PadRight = { UE4CodeGen_Private::EPropertyClass::Bool, "PadRight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(USafeZone), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_PadRight_SetBit)>::SetBit, METADATA_PARAMS(NewProp_PadRight_MetaData, ARRAY_COUNT(NewProp_PadRight_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PadLeft_MetaData[] = {
				{ "Category", "SafeZone" },
				{ "ModuleRelativePath", "Public/Components/SafeZone.h" },
				{ "ToolTip", "If this safe zone should pad for the left side of the screen's safe zone" },
			};
#endif
			auto NewProp_PadLeft_SetBit = [](void* Obj){ ((USafeZone*)Obj)->PadLeft = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_PadLeft = { UE4CodeGen_Private::EPropertyClass::Bool, "PadLeft", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(USafeZone), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_PadLeft_SetBit)>::SetBit, METADATA_PARAMS(NewProp_PadLeft_MetaData, ARRAY_COUNT(NewProp_PadLeft_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PadBottom,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PadTop,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PadRight,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PadLeft,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USafeZone>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USafeZone::StaticClass,
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
	IMPLEMENT_CLASS(USafeZone, 1001531254);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USafeZone(Z_Construct_UClass_USafeZone, &USafeZone::StaticClass, TEXT("/Script/UMG"), TEXT("USafeZone"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USafeZone);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
