// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Blueprint/DragDropOperation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDragDropOperation() {}
// Cross Module References
	UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_OnDragDropMulticast__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UClass* Z_Construct_UClass_UDragDropOperation_NoRegister();
	UMG_API UEnum* Z_Construct_UEnum_UMG_EDragPivot();
	UMG_API UClass* Z_Construct_UClass_UDragDropOperation();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UMG_API UFunction* Z_Construct_UFunction_UDragDropOperation_DragCancelled();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FPointerEvent();
	UMG_API UFunction* Z_Construct_UFunction_UDragDropOperation_Dragged();
	UMG_API UFunction* Z_Construct_UFunction_UDragDropOperation_Drop();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_UMG_OnDragDropMulticast__DelegateSignature()
	{
		struct _Script_UMG_eventOnDragDropMulticast_Parms
		{
			UDragDropOperation* Operation;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Operation = { UE4CodeGen_Private::EPropertyClass::Object, "Operation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_UMG_eventOnDragDropMulticast_Parms, Operation), Z_Construct_UClass_UDragDropOperation_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Operation,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Blueprint/DragDropOperation.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UMG, "OnDragDropMulticast__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_UMG_eventOnDragDropMulticast_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EDragPivot_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UMG_EDragPivot, Z_Construct_UPackage__Script_UMG(), TEXT("EDragPivot"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDragPivot(EDragPivot_StaticEnum, TEXT("/Script/UMG"), TEXT("EDragPivot"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UMG_EDragPivot_CRC() { return 645154229U; }
	UEnum* Z_Construct_UEnum_UMG_EDragPivot()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UMG();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDragPivot"), 0, Get_Z_Construct_UEnum_UMG_EDragPivot_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDragPivot::MouseDown", (int64)EDragPivot::MouseDown },
				{ "EDragPivot::TopLeft", (int64)EDragPivot::TopLeft },
				{ "EDragPivot::TopCenter", (int64)EDragPivot::TopCenter },
				{ "EDragPivot::TopRight", (int64)EDragPivot::TopRight },
				{ "EDragPivot::CenterLeft", (int64)EDragPivot::CenterLeft },
				{ "EDragPivot::CenterCenter", (int64)EDragPivot::CenterCenter },
				{ "EDragPivot::CenterRight", (int64)EDragPivot::CenterRight },
				{ "EDragPivot::BottomLeft", (int64)EDragPivot::BottomLeft },
				{ "EDragPivot::BottomCenter", (int64)EDragPivot::BottomCenter },
				{ "EDragPivot::BottomRight", (int64)EDragPivot::BottomRight },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Blueprint/DragDropOperation.h" },
				{ "ToolTip", "Controls where the drag widget visual will appear when dragged relative to the pointer performing\nthe drag operation." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UMG,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EDragPivot",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EDragPivot",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static FName NAME_UDragDropOperation_DragCancelled = FName(TEXT("DragCancelled"));
	void UDragDropOperation::DragCancelled(FPointerEvent const& PointerEvent)
	{
		DragDropOperation_eventDragCancelled_Parms Parms;
		Parms.PointerEvent=PointerEvent;
		ProcessEvent(FindFunctionChecked(NAME_UDragDropOperation_DragCancelled),&Parms);
	}
	static FName NAME_UDragDropOperation_Dragged = FName(TEXT("Dragged"));
	void UDragDropOperation::Dragged(FPointerEvent const& PointerEvent)
	{
		DragDropOperation_eventDragged_Parms Parms;
		Parms.PointerEvent=PointerEvent;
		ProcessEvent(FindFunctionChecked(NAME_UDragDropOperation_Dragged),&Parms);
	}
	static FName NAME_UDragDropOperation_Drop = FName(TEXT("Drop"));
	void UDragDropOperation::Drop(FPointerEvent const& PointerEvent)
	{
		DragDropOperation_eventDrop_Parms Parms;
		Parms.PointerEvent=PointerEvent;
		ProcessEvent(FindFunctionChecked(NAME_UDragDropOperation_Drop),&Parms);
	}
	void UDragDropOperation::StaticRegisterNativesUDragDropOperation()
	{
		UClass* Class = UDragDropOperation::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DragCancelled", (Native)&UDragDropOperation::execDragCancelled },
			{ "Dragged", (Native)&UDragDropOperation::execDragged },
			{ "Drop", (Native)&UDragDropOperation::execDrop },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UDragDropOperation_DragCancelled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointerEvent_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PointerEvent = { UE4CodeGen_Private::EPropertyClass::Struct, "PointerEvent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(DragDropOperation_eventDragCancelled_Parms, PointerEvent), Z_Construct_UScriptStruct_FPointerEvent, METADATA_PARAMS(NewProp_PointerEvent_MetaData, ARRAY_COUNT(NewProp_PointerEvent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PointerEvent,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Drag and Drop" },
				{ "ModuleRelativePath", "Public/Blueprint/DragDropOperation.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UDragDropOperation, "DragCancelled", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08420C00, sizeof(DragDropOperation_eventDragCancelled_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UDragDropOperation_Dragged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointerEvent_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PointerEvent = { UE4CodeGen_Private::EPropertyClass::Struct, "PointerEvent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(DragDropOperation_eventDragged_Parms, PointerEvent), Z_Construct_UScriptStruct_FPointerEvent, METADATA_PARAMS(NewProp_PointerEvent_MetaData, ARRAY_COUNT(NewProp_PointerEvent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PointerEvent,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Drag and Drop" },
				{ "ModuleRelativePath", "Public/Blueprint/DragDropOperation.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UDragDropOperation, "Dragged", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08420C00, sizeof(DragDropOperation_eventDragged_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UDragDropOperation_Drop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointerEvent_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PointerEvent = { UE4CodeGen_Private::EPropertyClass::Struct, "PointerEvent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(DragDropOperation_eventDrop_Parms, PointerEvent), Z_Construct_UScriptStruct_FPointerEvent, METADATA_PARAMS(NewProp_PointerEvent_MetaData, ARRAY_COUNT(NewProp_PointerEvent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PointerEvent,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Drag and Drop" },
				{ "ModuleRelativePath", "Public/Blueprint/DragDropOperation.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UDragDropOperation, "Drop", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08420C00, sizeof(DragDropOperation_eventDrop_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDragDropOperation_NoRegister()
	{
		return UDragDropOperation::StaticClass();
	}
	UClass* Z_Construct_UClass_UDragDropOperation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_UMG,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UDragDropOperation_DragCancelled, "DragCancelled" }, // 3469059149
				{ &Z_Construct_UFunction_UDragDropOperation_Dragged, "Dragged" }, // 1734247280
				{ &Z_Construct_UFunction_UDragDropOperation_Drop, "Drop" }, // 2879767292
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "DontUseGenericSpawnObject", "True" },
				{ "IncludePath", "Blueprint/DragDropOperation.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/Blueprint/DragDropOperation.h" },
				{ "ToolTip", "This class is the base drag drop operation for UMG, extend it to add additional data and add new functionality." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnDragged_MetaData[] = {
				{ "ModuleRelativePath", "Public/Blueprint/DragDropOperation.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDragged = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnDragged", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UDragDropOperation, OnDragged), Z_Construct_UDelegateFunction_UMG_OnDragDropMulticast__DelegateSignature, METADATA_PARAMS(NewProp_OnDragged_MetaData, ARRAY_COUNT(NewProp_OnDragged_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnDragCancelled_MetaData[] = {
				{ "ModuleRelativePath", "Public/Blueprint/DragDropOperation.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDragCancelled = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnDragCancelled", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UDragDropOperation, OnDragCancelled), Z_Construct_UDelegateFunction_UMG_OnDragDropMulticast__DelegateSignature, METADATA_PARAMS(NewProp_OnDragCancelled_MetaData, ARRAY_COUNT(NewProp_OnDragCancelled_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnDrop_MetaData[] = {
				{ "ModuleRelativePath", "Public/Blueprint/DragDropOperation.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDrop = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnDrop", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UDragDropOperation, OnDrop), Z_Construct_UDelegateFunction_UMG_OnDragDropMulticast__DelegateSignature, METADATA_PARAMS(NewProp_OnDrop_MetaData, ARRAY_COUNT(NewProp_OnDrop_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[] = {
				{ "Category", "Drag and Drop" },
				{ "ExposeOnSpawn", "true" },
				{ "ModuleRelativePath", "Public/Blueprint/DragDropOperation.h" },
				{ "ToolTip", "A percentage offset (-1..+1) from the Pivot location, the percentage is of the desired size of the dragged visual." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Offset = { UE4CodeGen_Private::EPropertyClass::Struct, "Offset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0011040000000005, 1, nullptr, STRUCT_OFFSET(UDragDropOperation, Offset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(NewProp_Offset_MetaData, ARRAY_COUNT(NewProp_Offset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pivot_MetaData[] = {
				{ "Category", "Drag and Drop" },
				{ "ExposeOnSpawn", "true" },
				{ "ModuleRelativePath", "Public/Blueprint/DragDropOperation.h" },
				{ "ToolTip", "Controls where the drag widget visual will appear when dragged relative to the pointer performing\nthe drag operation." },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Pivot = { UE4CodeGen_Private::EPropertyClass::Enum, "Pivot", RF_Public|RF_Transient|RF_MarkAsNative, 0x0011000000000005, 1, nullptr, STRUCT_OFFSET(UDragDropOperation, Pivot), Z_Construct_UEnum_UMG_EDragPivot, METADATA_PARAMS(NewProp_Pivot_MetaData, ARRAY_COUNT(NewProp_Pivot_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Pivot_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultDragVisual_MetaData[] = {
				{ "Category", "Drag and Drop" },
				{ "DisplayName", "Drag Visual" },
				{ "EditInline", "true" },
				{ "ExposeOnSpawn", "true" },
				{ "ModuleRelativePath", "Public/Blueprint/DragDropOperation.h" },
				{ "ToolTip", "The Drag Visual is the widget to display when dragging the item.  Normally people create a new widget to represent the\ntemporary drag." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultDragVisual = { UE4CodeGen_Private::EPropertyClass::Object, "DefaultDragVisual", RF_Public|RF_Transient|RF_MarkAsNative, 0x001100000008001d, 1, nullptr, STRUCT_OFFSET(UDragDropOperation, DefaultDragVisual), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(NewProp_DefaultDragVisual_MetaData, ARRAY_COUNT(NewProp_DefaultDragVisual_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Payload_MetaData[] = {
				{ "Category", "Drag and Drop" },
				{ "ExposeOnSpawn", "true" },
				{ "ModuleRelativePath", "Public/Blueprint/DragDropOperation.h" },
				{ "ToolTip", "The payload of the drag operation.  This can be any UObject that you want to pass along as dragged data.  If you\nwere building an inventory screen this would be the UObject representing the item being moved to another slot." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Payload = { UE4CodeGen_Private::EPropertyClass::Object, "Payload", RF_Public|RF_Transient|RF_MarkAsNative, 0x0011000000000005, 1, nullptr, STRUCT_OFFSET(UDragDropOperation, Payload), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(NewProp_Payload_MetaData, ARRAY_COUNT(NewProp_Payload_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[] = {
				{ "Category", "Drag and Drop" },
				{ "ExposeOnSpawn", "true" },
				{ "ModuleRelativePath", "Public/Blueprint/DragDropOperation.h" },
				{ "ToolTip", "A simple string tag you can optionally use to provide extra metadata about the operation." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Tag = { UE4CodeGen_Private::EPropertyClass::Str, "Tag", RF_Public|RF_Transient|RF_MarkAsNative, 0x0011000000000005, 1, nullptr, STRUCT_OFFSET(UDragDropOperation, Tag), METADATA_PARAMS(NewProp_Tag_MetaData, ARRAY_COUNT(NewProp_Tag_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnDragged,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnDragCancelled,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnDrop,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Offset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Pivot,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Pivot_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultDragVisual,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Payload,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Tag,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UDragDropOperation>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UDragDropOperation::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
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
	IMPLEMENT_CLASS(UDragDropOperation, 1032841043);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDragDropOperation(Z_Construct_UClass_UDragDropOperation, &UDragDropOperation::StaticClass, TEXT("/Script/UMG"), TEXT("UDragDropOperation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDragDropOperation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
