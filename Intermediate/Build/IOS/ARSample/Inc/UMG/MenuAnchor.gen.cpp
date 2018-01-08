// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Components/MenuAnchor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMenuAnchor() {}
// Cross Module References
	UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_OnMenuOpenChangedEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UClass* Z_Construct_UClass_UMenuAnchor_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UMenuAnchor();
	UMG_API UClass* Z_Construct_UClass_UContentWidget();
	UMG_API UFunction* Z_Construct_UFunction_UMenuAnchor_Close();
	UMG_API UFunction* Z_Construct_UFunction_UMenuAnchor_GetMenuPosition();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	UMG_API UFunction* Z_Construct_UFunction_UMenuAnchor_HasOpenSubMenus();
	UMG_API UFunction* Z_Construct_UFunction_UMenuAnchor_IsOpen();
	UMG_API UFunction* Z_Construct_UFunction_UMenuAnchor_Open();
	UMG_API UFunction* Z_Construct_UFunction_UMenuAnchor_ShouldOpenDueToClick();
	UMG_API UFunction* Z_Construct_UFunction_UMenuAnchor_ToggleOpen();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EMenuPlacement();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UWidget_GetWidget__DelegateSignature();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_UMG_OnMenuOpenChangedEvent__DelegateSignature()
	{
		struct _Script_UMG_eventOnMenuOpenChangedEvent_Parms
		{
			bool bIsOpen;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bIsOpen_SetBit = [](void* Obj){ ((_Script_UMG_eventOnMenuOpenChangedEvent_Parms*)Obj)->bIsOpen = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsOpen = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsOpen", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(_Script_UMG_eventOnMenuOpenChangedEvent_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsOpen_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsOpen,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Components/MenuAnchor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UMG, "OnMenuOpenChangedEvent__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_UMG_eventOnMenuOpenChangedEvent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	void UMenuAnchor::StaticRegisterNativesUMenuAnchor()
	{
		UClass* Class = UMenuAnchor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Close", (Native)&UMenuAnchor::execClose },
			{ "GetMenuPosition", (Native)&UMenuAnchor::execGetMenuPosition },
			{ "HasOpenSubMenus", (Native)&UMenuAnchor::execHasOpenSubMenus },
			{ "IsOpen", (Native)&UMenuAnchor::execIsOpen },
			{ "Open", (Native)&UMenuAnchor::execOpen },
			{ "ShouldOpenDueToClick", (Native)&UMenuAnchor::execShouldOpenDueToClick },
			{ "ToggleOpen", (Native)&UMenuAnchor::execToggleOpen },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UMenuAnchor_Close()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Menu Anchor" },
				{ "ModuleRelativePath", "Public/Components/MenuAnchor.h" },
				{ "ToolTip", "Closes the menu if it is currently open." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMenuAnchor, "Close", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMenuAnchor_GetMenuPosition()
	{
		struct MenuAnchor_eventGetMenuPosition_Parms
		{
			FVector2D ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MenuAnchor_eventGetMenuPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Menu Anchor" },
				{ "ModuleRelativePath", "Public/Components/MenuAnchor.h" },
				{ "ToolTip", "@return The current menu position" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMenuAnchor, "GetMenuPosition", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820401, sizeof(MenuAnchor_eventGetMenuPosition_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMenuAnchor_HasOpenSubMenus()
	{
		struct MenuAnchor_eventHasOpenSubMenus_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((MenuAnchor_eventHasOpenSubMenus_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MenuAnchor_eventHasOpenSubMenus_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Menu Anchor" },
				{ "ModuleRelativePath", "Public/Components/MenuAnchor.h" },
				{ "ToolTip", "@return Whether this menu has open submenus" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMenuAnchor, "HasOpenSubMenus", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(MenuAnchor_eventHasOpenSubMenus_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMenuAnchor_IsOpen()
	{
		struct MenuAnchor_eventIsOpen_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((MenuAnchor_eventIsOpen_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MenuAnchor_eventIsOpen_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Menu Anchor" },
				{ "ModuleRelativePath", "Public/Components/MenuAnchor.h" },
				{ "ToolTip", "@return true if the popup is open; false otherwise." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMenuAnchor, "IsOpen", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(MenuAnchor_eventIsOpen_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMenuAnchor_Open()
	{
		struct MenuAnchor_eventOpen_Parms
		{
			bool bFocusMenu;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bFocusMenu_SetBit = [](void* Obj){ ((MenuAnchor_eventOpen_Parms*)Obj)->bFocusMenu = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFocusMenu = { UE4CodeGen_Private::EPropertyClass::Bool, "bFocusMenu", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MenuAnchor_eventOpen_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bFocusMenu_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bFocusMenu,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Menu Anchor" },
				{ "ModuleRelativePath", "Public/Components/MenuAnchor.h" },
				{ "ToolTip", "Opens the menu if it is not already open" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMenuAnchor, "Open", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MenuAnchor_eventOpen_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMenuAnchor_ShouldOpenDueToClick()
	{
		struct MenuAnchor_eventShouldOpenDueToClick_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((MenuAnchor_eventShouldOpenDueToClick_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MenuAnchor_eventShouldOpenDueToClick_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Menu Anchor" },
				{ "ModuleRelativePath", "Public/Components/MenuAnchor.h" },
				{ "ToolTip", "@return true if we should open the menu due to a click. Sometimes we should not, if\nthe same MouseDownEvent that just closed the menu is about to re-open it because it\nhappens to land on the button." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMenuAnchor, "ShouldOpenDueToClick", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(MenuAnchor_eventShouldOpenDueToClick_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMenuAnchor_ToggleOpen()
	{
		struct MenuAnchor_eventToggleOpen_Parms
		{
			bool bFocusOnOpen;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bFocusOnOpen_SetBit = [](void* Obj){ ((MenuAnchor_eventToggleOpen_Parms*)Obj)->bFocusOnOpen = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFocusOnOpen = { UE4CodeGen_Private::EPropertyClass::Bool, "bFocusOnOpen", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MenuAnchor_eventToggleOpen_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bFocusOnOpen_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bFocusOnOpen,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Menu Anchor" },
				{ "ModuleRelativePath", "Public/Components/MenuAnchor.h" },
				{ "ToolTip", "Toggles the menus open state.\n\n@param bFocusOnOpen  Should we focus the popup as soon as it opens?" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMenuAnchor, "ToggleOpen", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MenuAnchor_eventToggleOpen_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMenuAnchor_NoRegister()
	{
		return UMenuAnchor::StaticClass();
	}
	UClass* Z_Construct_UClass_UMenuAnchor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UContentWidget,
				(UObject* (*)())Z_Construct_UPackage__Script_UMG,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UMenuAnchor_Close, "Close" }, // 3955941059
				{ &Z_Construct_UFunction_UMenuAnchor_GetMenuPosition, "GetMenuPosition" }, // 2693520199
				{ &Z_Construct_UFunction_UMenuAnchor_HasOpenSubMenus, "HasOpenSubMenus" }, // 1152924262
				{ &Z_Construct_UFunction_UMenuAnchor_IsOpen, "IsOpen" }, // 3032735584
				{ &Z_Construct_UFunction_UMenuAnchor_Open, "Open" }, // 1668983603
				{ &Z_Construct_UFunction_UMenuAnchor_ShouldOpenDueToClick, "ShouldOpenDueToClick" }, // 1066301610
				{ &Z_Construct_UFunction_UMenuAnchor_ToggleOpen, "ToggleOpen" }, // 3648958596
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Components/MenuAnchor.h" },
				{ "ModuleRelativePath", "Public/Components/MenuAnchor.h" },
				{ "ToolTip", "The Menu Anchor allows you to specify an location that a popup menu should be anchored to,\nand should be summoned from.\n* Single Child\n* Popup" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnMenuOpenChanged_MetaData[] = {
				{ "Category", "Menu Anchor|Event" },
				{ "ModuleRelativePath", "Public/Components/MenuAnchor.h" },
				{ "ToolTip", "Called when the opened state of the menu changes" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMenuOpenChanged = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnMenuOpenChanged", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UMenuAnchor, OnMenuOpenChanged), Z_Construct_UDelegateFunction_UMG_OnMenuOpenChangedEvent__DelegateSignature, METADATA_PARAMS(NewProp_OnMenuOpenChanged_MetaData, ARRAY_COUNT(NewProp_OnMenuOpenChanged_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseApplicationMenuStack_MetaData[] = {
				{ "Category", "Menu Anchor" },
				{ "ModuleRelativePath", "Public/Components/MenuAnchor.h" },
				{ "ToolTip", "Does this menu behave like a normal stacked menu? Set it to false to control the menu's lifetime yourself." },
			};
#endif
			auto NewProp_UseApplicationMenuStack_SetBit = [](void* Obj){ ((UMenuAnchor*)Obj)->UseApplicationMenuStack = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseApplicationMenuStack = { UE4CodeGen_Private::EPropertyClass::Bool, "UseApplicationMenuStack", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMenuAnchor), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_UseApplicationMenuStack_SetBit)>::SetBit, METADATA_PARAMS(NewProp_UseApplicationMenuStack_MetaData, ARRAY_COUNT(NewProp_UseApplicationMenuStack_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShouldDeferPaintingAfterWindowContent_MetaData[] = {
				{ "Category", "Menu Anchor" },
				{ "ModuleRelativePath", "Public/Components/MenuAnchor.h" },
			};
#endif
			auto NewProp_ShouldDeferPaintingAfterWindowContent_SetBit = [](void* Obj){ ((UMenuAnchor*)Obj)->ShouldDeferPaintingAfterWindowContent = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShouldDeferPaintingAfterWindowContent = { UE4CodeGen_Private::EPropertyClass::Bool, "ShouldDeferPaintingAfterWindowContent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMenuAnchor), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ShouldDeferPaintingAfterWindowContent_SetBit)>::SetBit, METADATA_PARAMS(NewProp_ShouldDeferPaintingAfterWindowContent_MetaData, ARRAY_COUNT(NewProp_ShouldDeferPaintingAfterWindowContent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Placement_MetaData[] = {
				{ "Category", "Menu Anchor" },
				{ "ModuleRelativePath", "Public/Components/MenuAnchor.h" },
				{ "ToolTip", "The placement location of the summoned widget." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Placement = { UE4CodeGen_Private::EPropertyClass::Byte, "Placement", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UMenuAnchor, Placement), Z_Construct_UEnum_SlateCore_EMenuPlacement, METADATA_PARAMS(NewProp_Placement_MetaData, ARRAY_COUNT(NewProp_Placement_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnGetMenuContentEvent_MetaData[] = {
				{ "Category", "Events" },
				{ "ModuleRelativePath", "Public/Components/MenuAnchor.h" },
				{ "ToolTip", "Called when the menu content is requested to allow a more customized handling over what to display" },
			};
#endif
			static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnGetMenuContentEvent = { UE4CodeGen_Private::EPropertyClass::Delegate, "OnGetMenuContentEvent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080001, 1, nullptr, STRUCT_OFFSET(UMenuAnchor, OnGetMenuContentEvent), Z_Construct_UDelegateFunction_UWidget_GetWidget__DelegateSignature, METADATA_PARAMS(NewProp_OnGetMenuContentEvent_MetaData, ARRAY_COUNT(NewProp_OnGetMenuContentEvent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MenuClass_MetaData[] = {
				{ "Category", "Menu Anchor" },
				{ "ModuleRelativePath", "Public/Components/MenuAnchor.h" },
				{ "ToolTip", "The widget class to spawn when the menu is required.  Creates the widget freshly each time.\nIf you want to customize the creation of the popup, you should bind a function to OnGetMenuContentEvent\ninstead." },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_MenuClass = { UE4CodeGen_Private::EPropertyClass::Class, "MenuClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000015, 1, nullptr, STRUCT_OFFSET(UMenuAnchor, MenuClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_MenuClass_MetaData, ARRAY_COUNT(NewProp_MenuClass_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnMenuOpenChanged,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UseApplicationMenuStack,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ShouldDeferPaintingAfterWindowContent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Placement,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnGetMenuContentEvent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MenuClass,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMenuAnchor>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMenuAnchor::StaticClass,
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
	IMPLEMENT_CLASS(UMenuAnchor, 521244933);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMenuAnchor(Z_Construct_UClass_UMenuAnchor, &UMenuAnchor::StaticClass, TEXT("/Script/UMG"), TEXT("UMenuAnchor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMenuAnchor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
