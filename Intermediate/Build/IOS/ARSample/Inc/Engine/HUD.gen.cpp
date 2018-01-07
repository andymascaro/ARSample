// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/GameFramework/HUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHUD() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AHUD_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_AHUD_AddDebugText();
	ENGINE_API UClass* Z_Construct_UClass_UFont_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_AHUD_AddHitBox();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UFunction* Z_Construct_UFunction_AHUD_Deproject();
	ENGINE_API UFunction* Z_Construct_UFunction_AHUD_DrawLine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UFunction* Z_Construct_UFunction_AHUD_DrawMaterial();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_AHUD_DrawMaterialSimple();
	ENGINE_API UFunction* Z_Construct_UFunction_AHUD_DrawMaterialTriangle();
	ENGINE_API UFunction* Z_Construct_UFunction_AHUD_DrawRect();
	ENGINE_API UFunction* Z_Construct_UFunction_AHUD_DrawText();
	ENGINE_API UFunction* Z_Construct_UFunction_AHUD_DrawTexture();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBlendMode();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_AHUD_DrawTextureSimple();
	ENGINE_API UFunction* Z_Construct_UFunction_AHUD_GetActorsInSelectionRectangle();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UFunction* Z_Construct_UFunction_AHUD_GetOwningPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_AHUD_GetOwningPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_AHUD_GetTextSize();
	ENGINE_API UFunction* Z_Construct_UFunction_AHUD_Project();
	ENGINE_API UFunction* Z_Construct_UFunction_AHUD_ReceiveDrawHUD();
	ENGINE_API UFunction* Z_Construct_UFunction_AHUD_ReceiveHitBoxBeginCursorOver();
	ENGINE_API UFunction* Z_Construct_UFunction_AHUD_ReceiveHitBoxClick();
	ENGINE_API UFunction* Z_Construct_UFunction_AHUD_ReceiveHitBoxEndCursorOver();
	ENGINE_API UFunction* Z_Construct_UFunction_AHUD_ReceiveHitBoxRelease();
	ENGINE_API UFunction* Z_Construct_UFunction_AHUD_RemoveAllDebugStrings();
	ENGINE_API UFunction* Z_Construct_UFunction_AHUD_RemoveDebugText();
	ENGINE_API UFunction* Z_Construct_UFunction_AHUD_ShowDebug();
	ENGINE_API UFunction* Z_Construct_UFunction_AHUD_ShowDebugForReticleTargetToggle();
	ENGINE_API UFunction* Z_Construct_UFunction_AHUD_ShowDebugToggleSubCategory();
	ENGINE_API UFunction* Z_Construct_UFunction_AHUD_ShowHUD();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDebugTextInfo();
	ENGINE_API UClass* Z_Construct_UClass_UCanvas_NoRegister();
// End Cross Module References
	static FName NAME_AHUD_AddDebugText = FName(TEXT("AddDebugText"));
	void AHUD::AddDebugText(const FString& DebugText, AActor* SrcActor, float Duration, FVector Offset, FVector DesiredOffset, FColor TextColor, bool bSkipOverwriteCheck, bool bAbsoluteLocation, bool bKeepAttachedToActor, UFont* InFont, float FontScale, bool bDrawShadow)
	{
		HUD_eventAddDebugText_Parms Parms;
		Parms.DebugText=DebugText;
		Parms.SrcActor=SrcActor;
		Parms.Duration=Duration;
		Parms.Offset=Offset;
		Parms.DesiredOffset=DesiredOffset;
		Parms.TextColor=TextColor;
		Parms.bSkipOverwriteCheck=bSkipOverwriteCheck ? true : false;
		Parms.bAbsoluteLocation=bAbsoluteLocation ? true : false;
		Parms.bKeepAttachedToActor=bKeepAttachedToActor ? true : false;
		Parms.InFont=InFont;
		Parms.FontScale=FontScale;
		Parms.bDrawShadow=bDrawShadow ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AHUD_AddDebugText),&Parms);
	}
	static FName NAME_AHUD_ReceiveDrawHUD = FName(TEXT("ReceiveDrawHUD"));
	void AHUD::ReceiveDrawHUD(int32 SizeX, int32 SizeY)
	{
		HUD_eventReceiveDrawHUD_Parms Parms;
		Parms.SizeX=SizeX;
		Parms.SizeY=SizeY;
		ProcessEvent(FindFunctionChecked(NAME_AHUD_ReceiveDrawHUD),&Parms);
	}
	static FName NAME_AHUD_ReceiveHitBoxBeginCursorOver = FName(TEXT("ReceiveHitBoxBeginCursorOver"));
	void AHUD::ReceiveHitBoxBeginCursorOver(const FName BoxName)
	{
		HUD_eventReceiveHitBoxBeginCursorOver_Parms Parms;
		Parms.BoxName=BoxName;
		ProcessEvent(FindFunctionChecked(NAME_AHUD_ReceiveHitBoxBeginCursorOver),&Parms);
	}
	static FName NAME_AHUD_ReceiveHitBoxClick = FName(TEXT("ReceiveHitBoxClick"));
	void AHUD::ReceiveHitBoxClick(const FName BoxName)
	{
		HUD_eventReceiveHitBoxClick_Parms Parms;
		Parms.BoxName=BoxName;
		ProcessEvent(FindFunctionChecked(NAME_AHUD_ReceiveHitBoxClick),&Parms);
	}
	static FName NAME_AHUD_ReceiveHitBoxEndCursorOver = FName(TEXT("ReceiveHitBoxEndCursorOver"));
	void AHUD::ReceiveHitBoxEndCursorOver(const FName BoxName)
	{
		HUD_eventReceiveHitBoxEndCursorOver_Parms Parms;
		Parms.BoxName=BoxName;
		ProcessEvent(FindFunctionChecked(NAME_AHUD_ReceiveHitBoxEndCursorOver),&Parms);
	}
	static FName NAME_AHUD_ReceiveHitBoxRelease = FName(TEXT("ReceiveHitBoxRelease"));
	void AHUD::ReceiveHitBoxRelease(const FName BoxName)
	{
		HUD_eventReceiveHitBoxRelease_Parms Parms;
		Parms.BoxName=BoxName;
		ProcessEvent(FindFunctionChecked(NAME_AHUD_ReceiveHitBoxRelease),&Parms);
	}
	static FName NAME_AHUD_RemoveAllDebugStrings = FName(TEXT("RemoveAllDebugStrings"));
	void AHUD::RemoveAllDebugStrings()
	{
		ProcessEvent(FindFunctionChecked(NAME_AHUD_RemoveAllDebugStrings),NULL);
	}
	static FName NAME_AHUD_RemoveDebugText = FName(TEXT("RemoveDebugText"));
	void AHUD::RemoveDebugText(AActor* SrcActor, bool bLeaveDurationText)
	{
		HUD_eventRemoveDebugText_Parms Parms;
		Parms.SrcActor=SrcActor;
		Parms.bLeaveDurationText=bLeaveDurationText ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AHUD_RemoveDebugText),&Parms);
	}
	void AHUD::StaticRegisterNativesAHUD()
	{
		UClass* Class = AHUD::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddDebugText", (Native)&AHUD::execAddDebugText },
			{ "AddHitBox", (Native)&AHUD::execAddHitBox },
			{ "Deproject", (Native)&AHUD::execDeproject },
			{ "DrawLine", (Native)&AHUD::execDrawLine },
			{ "DrawMaterial", (Native)&AHUD::execDrawMaterial },
			{ "DrawMaterialSimple", (Native)&AHUD::execDrawMaterialSimple },
			{ "DrawMaterialTriangle", (Native)&AHUD::execDrawMaterialTriangle },
			{ "DrawRect", (Native)&AHUD::execDrawRect },
			{ "DrawText", (Native)&AHUD::execDrawText },
			{ "DrawTexture", (Native)&AHUD::execDrawTexture },
			{ "DrawTextureSimple", (Native)&AHUD::execDrawTextureSimple },
			{ "GetActorsInSelectionRectangle", (Native)&AHUD::execGetActorsInSelectionRectangle },
			{ "GetOwningPawn", (Native)&AHUD::execGetOwningPawn },
			{ "GetOwningPlayerController", (Native)&AHUD::execGetOwningPlayerController },
			{ "GetTextSize", (Native)&AHUD::execGetTextSize },
			{ "Project", (Native)&AHUD::execProject },
			{ "RemoveAllDebugStrings", (Native)&AHUD::execRemoveAllDebugStrings },
			{ "RemoveDebugText", (Native)&AHUD::execRemoveDebugText },
			{ "ShowDebug", (Native)&AHUD::execShowDebug },
			{ "ShowDebugForReticleTargetToggle", (Native)&AHUD::execShowDebugForReticleTargetToggle },
			{ "ShowDebugToggleSubCategory", (Native)&AHUD::execShowDebugToggleSubCategory },
			{ "ShowHUD", (Native)&AHUD::execShowHUD },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AHUD_AddDebugText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bDrawShadow_SetBit = [](void* Obj){ ((HUD_eventAddDebugText_Parms*)Obj)->bDrawShadow = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawShadow = { UE4CodeGen_Private::EPropertyClass::Bool, "bDrawShadow", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(HUD_eventAddDebugText_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDrawShadow_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FontScale = { UE4CodeGen_Private::EPropertyClass::Float, "FontScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HUD_eventAddDebugText_Parms, FontScale), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InFont = { UE4CodeGen_Private::EPropertyClass::Object, "InFont", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HUD_eventAddDebugText_Parms, InFont), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bKeepAttachedToActor_SetBit = [](void* Obj){ ((HUD_eventAddDebugText_Parms*)Obj)->bKeepAttachedToActor = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bKeepAttachedToActor = { UE4CodeGen_Private::EPropertyClass::Bool, "bKeepAttachedToActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(HUD_eventAddDebugText_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bKeepAttachedToActor_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bAbsoluteLocation_SetBit = [](void* Obj){ ((HUD_eventAddDebugText_Parms*)Obj)->bAbsoluteLocation = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAbsoluteLocation = { UE4CodeGen_Private::EPropertyClass::Bool, "bAbsoluteLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(HUD_eventAddDebugText_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAbsoluteLocation_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bSkipOverwriteCheck_SetBit = [](void* Obj){ ((HUD_eventAddDebugText_Parms*)Obj)->bSkipOverwriteCheck = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSkipOverwriteCheck = { UE4CodeGen_Private::EPropertyClass::Bool, "bSkipOverwriteCheck", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(HUD_eventAddDebugText_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSkipOverwriteCheck_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextColor = { UE4CodeGen_Private::EPropertyClass::Struct, "TextColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HUD_eventAddDebugText_Parms, TextColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_DesiredOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "DesiredOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HUD_eventAddDebugText_Parms, DesiredOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Offset = { UE4CodeGen_Private::EPropertyClass::Struct, "Offset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HUD_eventAddDebugText_Parms, Offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration = { UE4CodeGen_Private::EPropertyClass::Float, "Duration", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HUD_eventAddDebugText_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SrcActor = { UE4CodeGen_Private::EPropertyClass::Object, "SrcActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HUD_eventAddDebugText_Parms, SrcActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugText_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_DebugText = { UE4CodeGen_Private::EPropertyClass::Str, "DebugText", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HUD_eventAddDebugText_Parms, DebugText), METADATA_PARAMS(NewProp_DebugText_MetaData, ARRAY_COUNT(NewProp_DebugText_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDrawShadow,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FontScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InFont,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bKeepAttachedToActor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAbsoluteLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSkipOverwriteCheck,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TextColor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DesiredOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Offset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Duration,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SrcActor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DebugText,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/HUD.h" },
				{ "ToolTip", "Add debug text for a specific actor to be displayed via DrawDebugTextList().  If the debug text is invalid then it will\nattempt to remove any previous entries via RemoveDebugText().\n\n@param DebugText                             Text to draw\n@param SrcActor                              Actor to which this relates\n@param Duration                              Duration to display the string\n@param Offset                                Initial offset to render text\n@param DesiredOffset                 Desired offset to render text - the text will move to this location over the given duration\n@param TextColor                     Color of text to render\n@param bSkipOverwriteCheck   skips the check to see if there is already debug text for the given actor\n@param bAbsoluteLocation     use an absolute world location\n@param bKeepAttachedToActor  if this is true the text will follow the actor, otherwise it will be drawn at the location when the call was made\n@param InFont                                font to use\n@param FontScale                     scale\n@param bDrawShadow                   Draw shadow on this string" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AHUD, "AddDebugText", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x01820CC1, sizeof(HUD_eventAddDebugText_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AHUD_AddHitBox()
	{
		struct HUD_eventAddHitBox_Parms
		{
			FVector2D Position;
			FVector2D Size;
			FName InName;
			bool bConsumesInput;
			int32 Priority;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Priority = { UE4CodeGen_Private::EPropertyClass::Int, "Priority", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HUD_eventAddHitBox_Parms, Priority), METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bConsumesInput_SetBit = [](void* Obj){ ((HUD_eventAddHitBox_Parms*)Obj)->bConsumesInput = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConsumesInput = { UE4CodeGen_Private::EPropertyClass::Bool, "bConsumesInput", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(HUD_eventAddHitBox_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bConsumesInput_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_InName = { UE4CodeGen_Private::EPropertyClass::Name, "InName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HUD_eventAddHitBox_Parms, InName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Size = { UE4CodeGen_Private::EPropertyClass::Struct, "Size", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HUD_eventAddHitBox_Parms, Size), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position = { UE4CodeGen_Private::EPropertyClass::Struct, "Position", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HUD_eventAddHitBox_Parms, Position), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Priority,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bConsumesInput,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Size,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Position,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "HUD" },
				{ "CPP_Default_Priority", "0" },
				{ "ModuleRelativePath", "Classes/GameFramework/HUD.h" },
				{ "ToolTip", "Add a hitbox to the hud\n@param Position                      Coordinates of the top left of the hit box.\n@param Size                          Size of the hit box.\n@param Name                          Name of the hit box.\n@param bConsumesInput        Whether click processing should continue if this hit box is clicked.\n@param Priority                      The priority of the box used for layering. Larger values are considered first.  Equal values are considered in the order they were added." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AHUD, "AddHitBox", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(HUD_eventAddHitBox_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AHUD_Deproject()
	{
		struct HUD_eventDeproject_Parms
		{
			float ScreenX;
			float ScreenY;
			FVector WorldPosition;
			FVector WorldDirection;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldDirection = { UE4CodeGen_Private::EPropertyClass::Struct, "WorldDirection", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(HUD_eventDeproject_Parms, WorldDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldPosition = { UE4CodeGen_Private::EPropertyClass::Struct, "WorldPosition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(HUD_eventDeproject_Parms, WorldPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScreenY = { UE4CodeGen_Private::EPropertyClass::Float, "ScreenY", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HUD_eventDeproject_Parms, ScreenY), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScreenX = { UE4CodeGen_Private::EPropertyClass::Float, "ScreenX", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HUD_eventDeproject_Parms, ScreenX), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldDirection,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldPosition,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScreenY,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScreenX,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "HUD" },
				{ "ModuleRelativePath", "Classes/GameFramework/HUD.h" },
				{ "ToolTip", "Transforms a 2D screen location into a 3D location and direction" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AHUD, "Deproject", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54C20401, sizeof(HUD_eventDeproject_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AHUD_DrawLine()
	{
		struct HUD_eventDrawLine_Parms
		{
			float StartScreenX;
			float StartScreenY;
			float EndScreenX;
			float EndScreenY;
			FLinearColor LineColor;
			float LineThickness;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LineThickness = { UE4CodeGen_Private::EPropertyClass::Float, "LineThickness", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HUD_eventDrawLine_Parms, LineThickness), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LineColor = { UE4CodeGen_Private::EPropertyClass::Struct, "LineColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HUD_eventDrawLine_Parms, LineColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EndScreenY = { UE4CodeGen_Private::EPropertyClass::Float, "EndScreenY", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HUD_eventDrawLine_Parms, EndScreenY), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EndScreenX = { UE4CodeGen_Private::EPropertyClass::Float, "EndScreenX", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HUD_eventDrawLine_Parms, EndScreenX), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartScreenY = { UE4CodeGen_Private::EPropertyClass::Float, "StartScreenY", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HUD_eventDrawLine_Parms, StartScreenY), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartScreenX = { UE4CodeGen_Private::EPropertyClass::Float, "StartScreenX", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HUD_eventDrawLine_Parms, StartScreenX), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LineThickness,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LineColor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EndScreenY,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EndScreenX,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StartScreenY,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StartScreenX,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "HUD" },
				{ "CPP_Default_LineThickness", "0.000000" },
				{ "LineColor", "(R=0,G=0,B=0,A=1)" },
				{ "ModuleRelativePath", "Classes/GameFramework/HUD.h" },
				{ "ToolTip", "Draws a 2D line on the HUD.\n@param StartScreenX          Screen-space X coordinate of start of the line.\n@param StartScreenY          Screen-space Y coordinate of start of the line.\n@param EndScreenX            Screen-space X coordinate of end of the line.\n@param EndScreenY            Screen-space Y coordinate of end of the line.\n@param LineColor                     Color to draw line\n@param LineThickness         Thickness of the line to draw" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AHUD, "DrawLine", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(HUD_eventDrawLine_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AHUD_DrawMaterial()
	{
		struct HUD_eventDrawMaterial_Parms
		{
			UMaterialInterface* Material;
			float ScreenX;
			float ScreenY;
			float ScreenW;
			float ScreenH;
			float MaterialU;
			float MaterialV;
			float MaterialUWidth;
			float MaterialVHeight;
			float Scale;
			bool bScalePosition;
			float Rotation;
			FVector2D RotPivot;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotPivot = { UE4CodeGen_Private::EPropertyClass::Struct, "RotPivot", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000080, 1, nullptr, STRUCT_OFFSET(HUD_eventDrawMaterial_Parms, RotPivot), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Rotation = { UE4CodeGen_Private::EPropertyClass::Float, "Rotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000080, 1, nullptr, STRUCT_OFFSET(HUD_eventDrawMaterial_Parms, Rotation), METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bScalePosition_SetBit = [](void* Obj){ ((HUD_eventDrawMaterial_Parms*)Obj)->bScalePosition = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bScalePosition = { UE4CodeGen_Private::EPropertyClass::Bool, "bScalePosition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(HUD_eventDrawMaterial_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bScalePosition_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scale = { UE4CodeGen_Private::EPropertyClass::Float, "Scale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000080, 1, nullptr, STRUCT_OFFSET(HUD_eventDrawMaterial_Parms, Scale), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaterialVHeight = { UE4CodeGen_Private::EPropertyClass::Float, "MaterialVHeight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HUD_eventDrawMaterial_Parms, MaterialVHeight), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaterialUWidth = { UE4CodeGen_Private::EPropertyClass::Float, "MaterialUWidth", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HUD_eventDrawMaterial_Parms, MaterialUWidth), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaterialV = { UE4CodeGen_Private::EPropertyClass::Float, "MaterialV", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HUD_eventDrawMaterial_Parms, MaterialV), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaterialU = { UE4CodeGen_Private::EPropertyClass::Float, "MaterialU", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HUD_eventDrawMaterial_Parms, MaterialU), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScreenH = { UE4CodeGen_Private::EPropertyClass::Float, "ScreenH", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HUD_eventDrawMaterial_Parms, ScreenH), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScreenW = { UE4CodeGen_Private::EPropertyClass::Float, "ScreenW", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HUD_eventDrawMaterial_Parms, ScreenW), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScreenY = { UE4CodeGen_Private::EPropertyClass::Float, "ScreenY", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HUD_eventDrawMaterial_Parms, ScreenY), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScreenX = { UE4CodeGen_Private::EPropertyClass::Float, "ScreenX", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HUD_eventDrawMaterial_Parms, ScreenX), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material = { UE4CodeGen_Private::EPropertyClass::Object, "Material", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HUD_eventDrawMaterial_Parms, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RotPivot,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Rotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bScalePosition,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Scale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaterialVHeight,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaterialUWidth,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaterialV,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaterialU,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScreenH,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScreenW,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScreenY,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScreenX,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Material,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "AdvancedDisplay", "9" },
				{ "Category", "HUD" },
				{ "CPP_Default_bScalePosition", "false" },
				{ "CPP_Default_Rotation", "0.000000" },
				{ "CPP_Default_Scale", "1.000000" },
				{ "ModuleRelativePath", "Classes/GameFramework/HUD.h" },
				{ "ToolTip", "Draws a material-textured quad on the HUD.\n@param Material                      Material to use\n@param ScreenX                       Screen-space X coordinate of upper left corner of the quad.\n@param ScreenY                       Screen-space Y coordinate of upper left corner of the quad.\n@param ScreenW                       Screen-space width of the quad (in pixels).\n@param ScreenH                       Screen-space height of the quad (in pixels).\n@param MaterialU                     Texture-space U coordinate of upper left corner of the quad\n@param MaterialV                     Texture-space V coordinate of upper left corner of the quad.\n@param MaterialUWidth        Texture-space width of the quad (in normalized UV distance).\n@param MaterialVHeight       Texture-space height of the quad (in normalized UV distance).\n@param Scale                         Amount to scale the entire texture (horizontally and vertically)\n@param bScalePosition        Whether the \"Scale\" parameter should also scale the position of this draw call.\n@param Rotation                      Amount to rotate this quad\n@param RotPivot                      Location (as proportion of quad, 0-1) to rotate about" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AHUD, "DrawMaterial", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(HUD_eventDrawMaterial_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AHUD_DrawMaterialSimple()
	{
		struct HUD_eventDrawMaterialSimple_Parms
		{
			UMaterialInterface* Material;
			float ScreenX;
			float ScreenY;
			float ScreenW;
			float ScreenH;
			float Scale;
			bool bScalePosition;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bScalePosition_SetBit = [](void* Obj){ ((HUD_eventDrawMaterialSimple_Parms*)Obj)->bScalePosition = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bScalePosition = { UE4CodeGen_Private::EPropertyClass::Bool, "bScalePosition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(HUD_eventDrawMaterialSimple_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bScalePosition_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scale = { UE4CodeGen_Private::EPropertyClass::Float, "Scale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HUD_eventDrawMaterialSimple_Parms, Scale), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScreenH = { UE4CodeGen_Private::EPropertyClass::Float, "ScreenH", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HUD_eventDrawMaterialSimple_Parms, ScreenH), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScreenW = { UE4CodeGen_Private::EPropertyClass::Float, "ScreenW", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HUD_eventDrawMaterialSimple_Parms, ScreenW), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScreenY = { UE4CodeGen_Private::EPropertyClass::Float, "ScreenY", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HUD_eventDrawMaterialSimple_Parms, ScreenY), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScreenX = { UE4CodeGen_Private::EPropertyClass::Float, "ScreenX", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HUD_eventDrawMaterialSimple_Parms, ScreenX), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material = { UE4CodeGen_Private::EPropertyClass::Object, "Material", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HUD_eventDrawMaterialSimple_Parms, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bScalePosition,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Scale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScreenH,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScreenW,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScreenY,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScreenX,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Material,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "HUD" },
				{ "CPP_Default_bScalePosition", "false" },
				{ "CPP_Default_Scale", "1.000000" },
				{ "ModuleRelativePath", "Classes/GameFramework/HUD.h" },
				{ "ToolTip", "Draws a material-textured quad on the HUD.  Assumes UVs such that the entire material is shown.\n@param Material                      Material to use\n@param ScreenX                       Screen-space X coordinate of upper left corner of the quad.\n@param ScreenY                       Screen-space Y coordinate of upper left corner of the quad.\n@param ScreenW                       Screen-space width of the quad (in pixels).\n@param ScreenH                       Screen-space height of the quad (in pixels).\n@param Scale                         Amount to scale the entire texture (horizontally and vertically)\n@param bScalePosition        Whether the \"Scale\" parameter should also scale the position of this draw call." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AHUD, "DrawMaterialSimple", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(HUD_eventDrawMaterialSimple_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AHUD_DrawMaterialTriangle()
	{
		struct HUD_eventDrawMaterialTriangle_Parms
		{
			UMaterialInterface* Material;
			FVector2D V0_Pos;
			FVector2D V1_Pos;
			FVector2D V2_Pos;
			FVector2D V0_UV;
			FVector2D V1_UV;
			FVector2D V2_UV;
			FLinearColor V0_Color;
			FLinearColor V1_Color;
			FLinearColor V2_Color;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_V2_Color = { UE4CodeGen_Private::EPropertyClass::Struct, "V2_Color", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HUD_eventDrawMaterialTriangle_Parms, V2_Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_V1_Color = { UE4CodeGen_Private::EPropertyClass::Struct, "V1_Color", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HUD_eventDrawMaterialTriangle_Parms, V1_Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_V0_Color = { UE4CodeGen_Private::EPropertyClass::Struct, "V0_Color", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HUD_eventDrawMaterialTriangle_Parms, V0_Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_V2_UV = { UE4CodeGen_Private::EPropertyClass::Struct, "V2_UV", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HUD_eventDrawMaterialTriangle_Parms, V2_UV), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_V1_UV = { UE4CodeGen_Private::EPropertyClass::Struct, "V1_UV", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HUD_eventDrawMaterialTriangle_Parms, V1_UV), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_V0_UV = { UE4CodeGen_Private::EPropertyClass::Struct, "V0_UV", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HUD_eventDrawMaterialTriangle_Parms, V0_UV), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_V2_Pos = { UE4CodeGen_Private::EPropertyClass::Struct, "V2_Pos", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HUD_eventDrawMaterialTriangle_Parms, V2_Pos), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_V1_Pos = { UE4CodeGen_Private::EPropertyClass::Struct, "V1_Pos", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HUD_eventDrawMaterialTriangle_Parms, V1_Pos), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_V0_Pos = { UE4CodeGen_Private::EPropertyClass::Struct, "V0_Pos", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HUD_eventDrawMaterialTriangle_Parms, V0_Pos), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material = { UE4CodeGen_Private::EPropertyClass::Object, "Material", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HUD_eventDrawMaterialTriangle_Parms, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_V2_Color,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_V1_Color,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_V0_Color,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_V2_UV,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_V1_UV,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_V0_UV,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_V2_Pos,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_V1_Pos,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_V0_Pos,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Material,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "HUD" },
				{ "CPP_Default_V0_Color", "(R=1.000000,G=1.000000,B=1.000000,A=1.000000)" },
				{ "CPP_Default_V1_Color", "(R=1.000000,G=1.000000,B=1.000000,A=1.000000)" },
				{ "CPP_Default_V2_Color", "(R=1.000000,G=1.000000,B=1.000000,A=1.000000)" },
				{ "ModuleRelativePath", "Classes/GameFramework/HUD.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AHUD, "DrawMaterialTriangle", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(HUD_eventDrawMaterialTriangle_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AHUD_DrawRect()
	{
		struct HUD_eventDrawRect_Parms
		{
			FLinearColor RectColor;
			float ScreenX;
			float ScreenY;
			float ScreenW;
			float ScreenH;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScreenH = { UE4CodeGen_Private::EPropertyClass::Float, "ScreenH", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HUD_eventDrawRect_Parms, ScreenH), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScreenW = { UE4CodeGen_Private::EPropertyClass::Float, "ScreenW", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HUD_eventDrawRect_Parms, ScreenW), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScreenY = { UE4CodeGen_Private::EPropertyClass::Float, "ScreenY", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HUD_eventDrawRect_Parms, ScreenY), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScreenX = { UE4CodeGen_Private::EPropertyClass::Float, "ScreenX", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HUD_eventDrawRect_Parms, ScreenX), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_RectColor = { UE4CodeGen_Private::EPropertyClass::Struct, "RectColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HUD_eventDrawRect_Parms, RectColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScreenH,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScreenW,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScreenY,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScreenX,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RectColor,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "HUD" },
				{ "ModuleRelativePath", "Classes/GameFramework/HUD.h" },
				{ "RectColor", "(R=0,G=0,B=0,A=1)" },
				{ "ToolTip", "Draws a colored untextured quad on the HUD.\n@param RectColor                     Color of the rect. Can be translucent.\n@param ScreenX                       Screen-space X coordinate of upper left corner of the quad.\n@param ScreenY                       Screen-space Y coordinate of upper left corner of the quad.\n@param ScreenW                       Screen-space width of the quad (in pixels).\n@param ScreenH                       Screen-space height of the quad (in pixels)." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AHUD, "DrawRect", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(HUD_eventDrawRect_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AHUD_DrawText()
	{
		struct HUD_eventDrawText_Parms
		{
			FString Text;
			FLinearColor TextColor;
			float ScreenX;
			float ScreenY;
			UFont* Font;
			float Scale;
			bool bScalePosition;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bScalePosition_SetBit = [](void* Obj){ ((HUD_eventDrawText_Parms*)Obj)->bScalePosition = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bScalePosition = { UE4CodeGen_Private::EPropertyClass::Bool, "bScalePosition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(HUD_eventDrawText_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bScalePosition_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scale = { UE4CodeGen_Private::EPropertyClass::Float, "Scale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HUD_eventDrawText_Parms, Scale), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Font = { UE4CodeGen_Private::EPropertyClass::Object, "Font", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HUD_eventDrawText_Parms, Font), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScreenY = { UE4CodeGen_Private::EPropertyClass::Float, "ScreenY", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HUD_eventDrawText_Parms, ScreenY), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScreenX = { UE4CodeGen_Private::EPropertyClass::Float, "ScreenX", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HUD_eventDrawText_Parms, ScreenX), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextColor = { UE4CodeGen_Private::EPropertyClass::Struct, "TextColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HUD_eventDrawText_Parms, TextColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Text = { UE4CodeGen_Private::EPropertyClass::Str, "Text", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HUD_eventDrawText_Parms, Text), METADATA_PARAMS(NewProp_Text_MetaData, ARRAY_COUNT(NewProp_Text_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bScalePosition,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Scale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Font,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScreenY,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScreenX,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TextColor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Text,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "HUD" },
				{ "CPP_Default_bScalePosition", "false" },
				{ "CPP_Default_Scale", "1.000000" },
				{ "ModuleRelativePath", "Classes/GameFramework/HUD.h" },
				{ "TextColor", "(R=0,G=0,B=0,A=1)" },
				{ "ToolTip", "Draws a string on the HUD.\n@param Text                          String to draw\n@param TextColor                     Color to draw string\n@param ScreenX                       Screen-space X coordinate of upper left corner of the string.\n@param ScreenY                       Screen-space Y coordinate of upper left corner of the string.\n@param Font                          Font to draw text.  If NULL, default font is chosen.\n@param Scale                         Scale multiplier to control size of the text.\n@param bScalePosition        Whether the \"Scale\" parameter should also scale the position of this draw call." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AHUD, "DrawText", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(HUD_eventDrawText_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AHUD_DrawTexture()
	{
		struct HUD_eventDrawTexture_Parms
		{
			UTexture* Texture;
			float ScreenX;
			float ScreenY;
			float ScreenW;
			float ScreenH;
			float TextureU;
			float TextureV;
			float TextureUWidth;
			float TextureVHeight;
			FLinearColor TintColor;
			TEnumAsByte<EBlendMode> BlendMode;
			float Scale;
			bool bScalePosition;
			float Rotation;
			FVector2D RotPivot;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotPivot = { UE4CodeGen_Private::EPropertyClass::Struct, "RotPivot", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000080, 1, nullptr, STRUCT_OFFSET(HUD_eventDrawTexture_Parms, RotPivot), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Rotation = { UE4CodeGen_Private::EPropertyClass::Float, "Rotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000080, 1, nullptr, STRUCT_OFFSET(HUD_eventDrawTexture_Parms, Rotation), METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bScalePosition_SetBit = [](void* Obj){ ((HUD_eventDrawTexture_Parms*)Obj)->bScalePosition = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bScalePosition = { UE4CodeGen_Private::EPropertyClass::Bool, "bScalePosition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(HUD_eventDrawTexture_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bScalePosition_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scale = { UE4CodeGen_Private::EPropertyClass::Float, "Scale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000080, 1, nullptr, STRUCT_OFFSET(HUD_eventDrawTexture_Parms, Scale), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_BlendMode = { UE4CodeGen_Private::EPropertyClass::Byte, "BlendMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000080, 1, nullptr, STRUCT_OFFSET(HUD_eventDrawTexture_Parms, BlendMode), Z_Construct_UEnum_Engine_EBlendMode, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TintColor = { UE4CodeGen_Private::EPropertyClass::Struct, "TintColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000080, 1, nullptr, STRUCT_OFFSET(HUD_eventDrawTexture_Parms, TintColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TextureVHeight = { UE4CodeGen_Private::EPropertyClass::Float, "TextureVHeight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HUD_eventDrawTexture_Parms, TextureVHeight), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TextureUWidth = { UE4CodeGen_Private::EPropertyClass::Float, "TextureUWidth", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HUD_eventDrawTexture_Parms, TextureUWidth), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TextureV = { UE4CodeGen_Private::EPropertyClass::Float, "TextureV", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HUD_eventDrawTexture_Parms, TextureV), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TextureU = { UE4CodeGen_Private::EPropertyClass::Float, "TextureU", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HUD_eventDrawTexture_Parms, TextureU), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScreenH = { UE4CodeGen_Private::EPropertyClass::Float, "ScreenH", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HUD_eventDrawTexture_Parms, ScreenH), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScreenW = { UE4CodeGen_Private::EPropertyClass::Float, "ScreenW", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HUD_eventDrawTexture_Parms, ScreenW), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScreenY = { UE4CodeGen_Private::EPropertyClass::Float, "ScreenY", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HUD_eventDrawTexture_Parms, ScreenY), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScreenX = { UE4CodeGen_Private::EPropertyClass::Float, "ScreenX", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HUD_eventDrawTexture_Parms, ScreenX), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texture = { UE4CodeGen_Private::EPropertyClass::Object, "Texture", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HUD_eventDrawTexture_Parms, Texture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RotPivot,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Rotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bScalePosition,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Scale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlendMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TintColor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TextureVHeight,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TextureUWidth,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TextureV,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TextureU,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScreenH,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScreenW,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScreenY,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScreenX,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Texture,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "AdvancedDisplay", "9" },
				{ "Category", "HUD" },
				{ "CPP_Default_BlendMode", "BLEND_Translucent" },
				{ "CPP_Default_bScalePosition", "false" },
				{ "CPP_Default_Rotation", "0.000000" },
				{ "CPP_Default_Scale", "1.000000" },
				{ "CPP_Default_TintColor", "(R=1.000000,G=1.000000,B=1.000000,A=1.000000)" },
				{ "ModuleRelativePath", "Classes/GameFramework/HUD.h" },
				{ "ToolTip", "Draws a textured quad on the HUD.\n@param Texture                       Texture to draw.\n@param ScreenX                       Screen-space X coordinate of upper left corner of the quad.\n@param ScreenY                       Screen-space Y coordinate of upper left corner of the quad.\n@param ScreenW                       Screen-space width of the quad (in pixels).\n@param ScreenH                       Screen-space height of the quad (in pixels).\n@param TextureU                      Texture-space U coordinate of upper left corner of the quad\n@param TextureV                      Texture-space V coordinate of upper left corner of the quad.\n@param TextureUWidth         Texture-space width of the quad (in normalized UV distance).\n@param TextureVHeight        Texture-space height of the quad (in normalized UV distance).\n@param TintColor                     Vertex color for the quad.\n@param BlendMode                     Controls how to blend this quad with the scene. Translucent by default.\n@param Scale                         Amount to scale the entire texture (horizontally and vertically)\n@param bScalePosition        Whether the \"Scale\" parameter should also scale the position of this draw call.\n@param Rotation                      Amount to rotate this quad\n@param RotPivot                      Location (as proportion of quad, 0-1) to rotate about" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AHUD, "DrawTexture", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(HUD_eventDrawTexture_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AHUD_DrawTextureSimple()
	{
		struct HUD_eventDrawTextureSimple_Parms
		{
			UTexture* Texture;
			float ScreenX;
			float ScreenY;
			float Scale;
			bool bScalePosition;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bScalePosition_SetBit = [](void* Obj){ ((HUD_eventDrawTextureSimple_Parms*)Obj)->bScalePosition = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bScalePosition = { UE4CodeGen_Private::EPropertyClass::Bool, "bScalePosition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(HUD_eventDrawTextureSimple_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bScalePosition_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scale = { UE4CodeGen_Private::EPropertyClass::Float, "Scale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HUD_eventDrawTextureSimple_Parms, Scale), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScreenY = { UE4CodeGen_Private::EPropertyClass::Float, "ScreenY", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HUD_eventDrawTextureSimple_Parms, ScreenY), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScreenX = { UE4CodeGen_Private::EPropertyClass::Float, "ScreenX", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HUD_eventDrawTextureSimple_Parms, ScreenX), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texture = { UE4CodeGen_Private::EPropertyClass::Object, "Texture", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HUD_eventDrawTextureSimple_Parms, Texture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bScalePosition,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Scale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScreenY,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScreenX,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Texture,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "HUD" },
				{ "CPP_Default_bScalePosition", "false" },
				{ "CPP_Default_Scale", "1.000000" },
				{ "ModuleRelativePath", "Classes/GameFramework/HUD.h" },
				{ "ToolTip", "Draws a textured quad on the HUD. Assumes 1:1 texel density.\n@param Texture                       Texture to draw.\n@param ScreenX                       Screen-space X coordinate of upper left corner of the quad.\n@param ScreenY                       Screen-space Y coordinate of upper left corner of the quad.\n@param Scale                         Scale multiplier to control size of the text.\n@param bScalePosition        Whether the \"Scale\" parameter should also scale the position of this draw call." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AHUD, "DrawTextureSimple", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(HUD_eventDrawTextureSimple_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AHUD_GetActorsInSelectionRectangle()
	{
		struct HUD_eventGetActorsInSelectionRectangle_Parms
		{
			TSubclassOf<AActor>  ClassFilter;
			FVector2D FirstPoint;
			FVector2D SecondPoint;
			TArray<AActor*> OutActors;
			bool bIncludeNonCollidingComponents;
			bool bActorMustBeFullyEnclosed;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bActorMustBeFullyEnclosed_SetBit = [](void* Obj){ ((HUD_eventGetActorsInSelectionRectangle_Parms*)Obj)->bActorMustBeFullyEnclosed = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bActorMustBeFullyEnclosed = { UE4CodeGen_Private::EPropertyClass::Bool, "bActorMustBeFullyEnclosed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(HUD_eventGetActorsInSelectionRectangle_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bActorMustBeFullyEnclosed_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bIncludeNonCollidingComponents_SetBit = [](void* Obj){ ((HUD_eventGetActorsInSelectionRectangle_Parms*)Obj)->bIncludeNonCollidingComponents = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeNonCollidingComponents = { UE4CodeGen_Private::EPropertyClass::Bool, "bIncludeNonCollidingComponents", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(HUD_eventGetActorsInSelectionRectangle_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIncludeNonCollidingComponents_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutActors = { UE4CodeGen_Private::EPropertyClass::Array, "OutActors", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(HUD_eventGetActorsInSelectionRectangle_Parms, OutActors), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutActors_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "OutActors", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondPoint_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SecondPoint = { UE4CodeGen_Private::EPropertyClass::Struct, "SecondPoint", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(HUD_eventGetActorsInSelectionRectangle_Parms, SecondPoint), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(NewProp_SecondPoint_MetaData, ARRAY_COUNT(NewProp_SecondPoint_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstPoint_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_FirstPoint = { UE4CodeGen_Private::EPropertyClass::Struct, "FirstPoint", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(HUD_eventGetActorsInSelectionRectangle_Parms, FirstPoint), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(NewProp_FirstPoint_MetaData, ARRAY_COUNT(NewProp_FirstPoint_MetaData)) };
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_ClassFilter = { UE4CodeGen_Private::EPropertyClass::Class, "ClassFilter", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000080, 1, nullptr, STRUCT_OFFSET(HUD_eventGetActorsInSelectionRectangle_Parms, ClassFilter), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bActorMustBeFullyEnclosed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIncludeNonCollidingComponents,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutActors,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutActors_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SecondPoint,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FirstPoint,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClassFilter,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "HUD" },
				{ "CPP_Default_bActorMustBeFullyEnclosed", "false" },
				{ "CPP_Default_bIncludeNonCollidingComponents", "true" },
				{ "ModuleRelativePath", "Classes/GameFramework/HUD.h" },
				{ "ToolTip", "Returns the array of actors inside a selection rectangle, with a class filter.\n\nSample usage:\n\n      TArray<AStaticMeshActor*> ActorsInSelectionRect;\n             Canvas->GetActorsInSelectionRectangle<AStaticMeshActor>(FirstPoint,SecondPoint,ActorsInSelectionRect);\n\n\n@param FirstPoint                                    The first point, or anchor of the marquee box. Where the dragging of the marquee started in screen space.\n@param SecondPoint                                   The second point, where the mouse cursor currently is / the other point of the box selection, in screen space.\n@return OutActors                                    The actors that are within the selection box according to selection rule\n@param bIncludeNonCollidingComponents        Whether to include even non-colliding components of the actor when determining its bounds\n@param bActorMustBeFullyEnclosed     The Selection rule: whether the selection box can partially intersect Actor, or must fully enclose the Actor." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AHUD, "GetActorsInSelectionRectangle", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C20401, sizeof(HUD_eventGetActorsInSelectionRectangle_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AHUD_GetOwningPawn()
	{
		struct HUD_eventGetOwningPawn_Parms
		{
			APawn* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(HUD_eventGetOwningPawn_Parms, ReturnValue), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "HUD" },
				{ "ModuleRelativePath", "Classes/GameFramework/HUD.h" },
				{ "ToolTip", "Returns the Pawn for this HUD's player." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AHUD, "GetOwningPawn", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(HUD_eventGetOwningPawn_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AHUD_GetOwningPlayerController()
	{
		struct HUD_eventGetOwningPlayerController_Parms
		{
			APlayerController* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(HUD_eventGetOwningPlayerController_Parms, ReturnValue), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "HUD" },
				{ "ModuleRelativePath", "Classes/GameFramework/HUD.h" },
				{ "ToolTip", "Returns the PlayerController for this HUD's player." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AHUD, "GetOwningPlayerController", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(HUD_eventGetOwningPlayerController_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AHUD_GetTextSize()
	{
		struct HUD_eventGetTextSize_Parms
		{
			FString Text;
			float OutWidth;
			float OutHeight;
			UFont* Font;
			float Scale;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scale = { UE4CodeGen_Private::EPropertyClass::Float, "Scale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HUD_eventGetTextSize_Parms, Scale), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Font = { UE4CodeGen_Private::EPropertyClass::Object, "Font", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HUD_eventGetTextSize_Parms, Font), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutHeight = { UE4CodeGen_Private::EPropertyClass::Float, "OutHeight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(HUD_eventGetTextSize_Parms, OutHeight), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutWidth = { UE4CodeGen_Private::EPropertyClass::Float, "OutWidth", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(HUD_eventGetTextSize_Parms, OutWidth), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Text = { UE4CodeGen_Private::EPropertyClass::Str, "Text", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HUD_eventGetTextSize_Parms, Text), METADATA_PARAMS(NewProp_Text_MetaData, ARRAY_COUNT(NewProp_Text_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Scale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Font,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutHeight,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutWidth,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Text,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "HUD" },
				{ "CPP_Default_Scale", "1.000000" },
				{ "ModuleRelativePath", "Classes/GameFramework/HUD.h" },
				{ "ToolTip", "Returns the width and height of a string.\n@param Text                          String to draw\n@param OutWidth                      Returns the width in pixels of the string.\n@param OutHeight                     Returns the height in pixels of the string.\n@param Font                          Font to draw text.  If NULL, default font is chosen.\n@param Scale                         Scale multiplier to control size of the text." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AHUD, "GetTextSize", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54420401, sizeof(HUD_eventGetTextSize_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AHUD_Project()
	{
		struct HUD_eventProject_Parms
		{
			FVector Location;
			FVector ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(HUD_eventProject_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location = { UE4CodeGen_Private::EPropertyClass::Struct, "Location", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HUD_eventProject_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Location,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "HUD" },
				{ "ModuleRelativePath", "Classes/GameFramework/HUD.h" },
				{ "ToolTip", "Transforms a 3D world-space vector into 2D screen coordinates" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AHUD, "Project", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820401, sizeof(HUD_eventProject_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AHUD_ReceiveDrawHUD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_SizeY = { UE4CodeGen_Private::EPropertyClass::Int, "SizeY", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HUD_eventReceiveDrawHUD_Parms, SizeY), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_SizeX = { UE4CodeGen_Private::EPropertyClass::Int, "SizeX", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HUD_eventReceiveDrawHUD_Parms, SizeX), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SizeY,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SizeX,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/HUD.h" },
				{ "ToolTip", "Hook to allow blueprints to do custom HUD drawing. @see bSuppressNativeHUD to control HUD drawing in base class.\nNote:  the canvas resource used for drawing is only valid during this event, it will not be valid if drawing functions are called later (e.g. after a Delay node)." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AHUD, "ReceiveDrawHUD", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020808, sizeof(HUD_eventReceiveDrawHUD_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AHUD_ReceiveHitBoxBeginCursorOver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxName_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoxName = { UE4CodeGen_Private::EPropertyClass::Name, "BoxName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(HUD_eventReceiveHitBoxBeginCursorOver_Parms, BoxName), METADATA_PARAMS(NewProp_BoxName_MetaData, ARRAY_COUNT(NewProp_BoxName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoxName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "DisplayName", "HitBoxBeginCursorOver" },
				{ "ModuleRelativePath", "Classes/GameFramework/HUD.h" },
				{ "ToolTip", "Called when a hit box is moused over." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AHUD, "ReceiveHitBoxBeginCursorOver", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020808, sizeof(HUD_eventReceiveHitBoxBeginCursorOver_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AHUD_ReceiveHitBoxClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxName_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoxName = { UE4CodeGen_Private::EPropertyClass::Name, "BoxName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(HUD_eventReceiveHitBoxClick_Parms, BoxName), METADATA_PARAMS(NewProp_BoxName_MetaData, ARRAY_COUNT(NewProp_BoxName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoxName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "DisplayName", "HitBoxClicked" },
				{ "ModuleRelativePath", "Classes/GameFramework/HUD.h" },
				{ "ToolTip", "Called when a hit box is clicked on. Provides the name associated with that box." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AHUD, "ReceiveHitBoxClick", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020808, sizeof(HUD_eventReceiveHitBoxClick_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AHUD_ReceiveHitBoxEndCursorOver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxName_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoxName = { UE4CodeGen_Private::EPropertyClass::Name, "BoxName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(HUD_eventReceiveHitBoxEndCursorOver_Parms, BoxName), METADATA_PARAMS(NewProp_BoxName_MetaData, ARRAY_COUNT(NewProp_BoxName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoxName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "DisplayName", "HitBoxEndCursorOver" },
				{ "ModuleRelativePath", "Classes/GameFramework/HUD.h" },
				{ "ToolTip", "Called when a hit box no longer has the mouse over it." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AHUD, "ReceiveHitBoxEndCursorOver", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020808, sizeof(HUD_eventReceiveHitBoxEndCursorOver_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AHUD_ReceiveHitBoxRelease()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxName_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoxName = { UE4CodeGen_Private::EPropertyClass::Name, "BoxName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(HUD_eventReceiveHitBoxRelease_Parms, BoxName), METADATA_PARAMS(NewProp_BoxName_MetaData, ARRAY_COUNT(NewProp_BoxName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoxName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "DisplayName", "HitBoxReleased" },
				{ "ModuleRelativePath", "Classes/GameFramework/HUD.h" },
				{ "ToolTip", "Called when a hit box is unclicked. Provides the name associated with that box." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AHUD, "ReceiveHitBoxRelease", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020808, sizeof(HUD_eventReceiveHitBoxRelease_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AHUD_RemoveAllDebugStrings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/HUD.h" },
				{ "ToolTip", "Remove all debug strings added via AddDebugText" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AHUD, "RemoveAllDebugStrings", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x01020CC1, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AHUD_RemoveDebugText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bLeaveDurationText_SetBit = [](void* Obj){ ((HUD_eventRemoveDebugText_Parms*)Obj)->bLeaveDurationText = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLeaveDurationText = { UE4CodeGen_Private::EPropertyClass::Bool, "bLeaveDurationText", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(HUD_eventRemoveDebugText_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bLeaveDurationText_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SrcActor = { UE4CodeGen_Private::EPropertyClass::Object, "SrcActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HUD_eventRemoveDebugText_Parms, SrcActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bLeaveDurationText,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SrcActor,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/HUD.h" },
				{ "ToolTip", "Remove debug strings for the given actor\n\n@param       SrcActor                        Actor whose string you wish to remove\n@param       bLeaveDurationText      when true text that has a finite duration will be removed, otherwise all will be removed for given actor" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AHUD, "RemoveDebugText", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x01020CC1, sizeof(HUD_eventRemoveDebugText_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AHUD_ShowDebug()
	{
		struct HUD_eventShowDebug_Parms
		{
			FName DebugType;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_DebugType = { UE4CodeGen_Private::EPropertyClass::Name, "DebugType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HUD_eventShowDebug_Parms, DebugType), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DebugType,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "CPP_Default_DebugType", "None" },
				{ "ModuleRelativePath", "Classes/GameFramework/HUD.h" },
				{ "ToolTip", "Toggles displaying properties of player's current ViewTarget\nDebugType input values supported by base engine include \"AI\", \"physics\", \"net\", \"camera\", and \"collision\"" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AHUD, "ShowDebug", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020600, sizeof(HUD_eventShowDebug_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AHUD_ShowDebugForReticleTargetToggle()
	{
		struct HUD_eventShowDebugForReticleTargetToggle_Parms
		{
			TSubclassOf<AActor>  DesiredClass;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_DesiredClass = { UE4CodeGen_Private::EPropertyClass::Class, "DesiredClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000080, 1, nullptr, STRUCT_OFFSET(HUD_eventShowDebugForReticleTargetToggle_Parms, DesiredClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DesiredClass,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/HUD.h" },
				{ "ToolTip", "Toggles 'ShowDebug' from showing debug info between reticle target actor (of subclass <DesiredClass>) and camera view target" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AHUD, "ShowDebugForReticleTargetToggle", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020601, sizeof(HUD_eventShowDebugForReticleTargetToggle_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AHUD_ShowDebugToggleSubCategory()
	{
		struct HUD_eventShowDebugToggleSubCategory_Parms
		{
			FName Category;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_Category = { UE4CodeGen_Private::EPropertyClass::Name, "Category", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HUD_eventShowDebugToggleSubCategory_Parms, Category), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Category,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/HUD.h" },
				{ "ToolTip", "Toggles sub categories of show debug to customize display" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AHUD, "ShowDebugToggleSubCategory", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020601, sizeof(HUD_eventShowDebugToggleSubCategory_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AHUD_ShowHUD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/HUD.h" },
				{ "ToolTip", "hides or shows HUD" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AHUD, "ShowHUD", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020600, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AHUD_NoRegister()
	{
		return AHUD::StaticClass();
	}
	UClass* Z_Construct_UClass_AHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AHUD_AddDebugText, "AddDebugText" }, // 4292834076
				{ &Z_Construct_UFunction_AHUD_AddHitBox, "AddHitBox" }, // 368793595
				{ &Z_Construct_UFunction_AHUD_Deproject, "Deproject" }, // 2868236071
				{ &Z_Construct_UFunction_AHUD_DrawLine, "DrawLine" }, // 1467705379
				{ &Z_Construct_UFunction_AHUD_DrawMaterial, "DrawMaterial" }, // 3357102627
				{ &Z_Construct_UFunction_AHUD_DrawMaterialSimple, "DrawMaterialSimple" }, // 1669395951
				{ &Z_Construct_UFunction_AHUD_DrawMaterialTriangle, "DrawMaterialTriangle" }, // 2359104148
				{ &Z_Construct_UFunction_AHUD_DrawRect, "DrawRect" }, // 1587165325
				{ &Z_Construct_UFunction_AHUD_DrawText, "DrawText" }, // 2044134539
				{ &Z_Construct_UFunction_AHUD_DrawTexture, "DrawTexture" }, // 840403216
				{ &Z_Construct_UFunction_AHUD_DrawTextureSimple, "DrawTextureSimple" }, // 2103518406
				{ &Z_Construct_UFunction_AHUD_GetActorsInSelectionRectangle, "GetActorsInSelectionRectangle" }, // 565949128
				{ &Z_Construct_UFunction_AHUD_GetOwningPawn, "GetOwningPawn" }, // 2189941434
				{ &Z_Construct_UFunction_AHUD_GetOwningPlayerController, "GetOwningPlayerController" }, // 454037898
				{ &Z_Construct_UFunction_AHUD_GetTextSize, "GetTextSize" }, // 3156774182
				{ &Z_Construct_UFunction_AHUD_Project, "Project" }, // 926871047
				{ &Z_Construct_UFunction_AHUD_ReceiveDrawHUD, "ReceiveDrawHUD" }, // 1378575370
				{ &Z_Construct_UFunction_AHUD_ReceiveHitBoxBeginCursorOver, "ReceiveHitBoxBeginCursorOver" }, // 1006234260
				{ &Z_Construct_UFunction_AHUD_ReceiveHitBoxClick, "ReceiveHitBoxClick" }, // 2892951356
				{ &Z_Construct_UFunction_AHUD_ReceiveHitBoxEndCursorOver, "ReceiveHitBoxEndCursorOver" }, // 3808238678
				{ &Z_Construct_UFunction_AHUD_ReceiveHitBoxRelease, "ReceiveHitBoxRelease" }, // 45220575
				{ &Z_Construct_UFunction_AHUD_RemoveAllDebugStrings, "RemoveAllDebugStrings" }, // 2625026243
				{ &Z_Construct_UFunction_AHUD_RemoveDebugText, "RemoveDebugText" }, // 1763421194
				{ &Z_Construct_UFunction_AHUD_ShowDebug, "ShowDebug" }, // 3717507001
				{ &Z_Construct_UFunction_AHUD_ShowDebugForReticleTargetToggle, "ShowDebugForReticleTargetToggle" }, // 3799478028
				{ &Z_Construct_UFunction_AHUD_ShowDebugToggleSubCategory, "ShowDebugToggleSubCategory" }, // 3109189859
				{ &Z_Construct_UFunction_AHUD_ShowHUD, "ShowHUD" }, // 2675032585
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HideCategories", "Rendering Actor Input Replication" },
				{ "IncludePath", "GameFramework/HUD.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Classes/GameFramework/HUD.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
				{ "ToolTip", "Base class of the heads-up display. This has a canvas and a debug canvas on which primitives can be drawn.\nIt also contains a list of simple hit boxes that can be used for simple item click detection.\nA method of rendering debug text is also included.\nProvides some simple methods for rendering text, textures, rectangles and materials which can also be accessed from blueprints.\n@see UCanvas\n@see FHUDHitBox\n@see FDebugTextInfo" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowDebugTargetActor_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/HUD.h" },
				{ "ToolTip", "Show Debug Actor used if 'bShowDebugForReticleTarget' is true, only updated if trace from reticle hit a new Actor of class 'ShowDebugTargetDesiredClass'" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShowDebugTargetActor = { UE4CodeGen_Private::EPropertyClass::Object, "ShowDebugTargetActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(AHUD, ShowDebugTargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(NewProp_ShowDebugTargetActor_MetaData, ARRAY_COUNT(NewProp_ShowDebugTargetActor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowDebugTargetDesiredClass_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/HUD.h" },
				{ "ToolTip", "Class filter for selecting 'ShowDebugTargetActor' when 'bShowDebugForReticleTarget' is true." },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_ShowDebugTargetDesiredClass = { UE4CodeGen_Private::EPropertyClass::Class, "ShowDebugTargetDesiredClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0044000000000000, 1, nullptr, STRUCT_OFFSET(AHUD, ShowDebugTargetDesiredClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_ShowDebugTargetDesiredClass_MetaData, ARRAY_COUNT(NewProp_ShowDebugTargetDesiredClass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugTextList_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/HUD.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DebugTextList = { UE4CodeGen_Private::EPropertyClass::Array, "DebugTextList", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(AHUD, DebugTextList), METADATA_PARAMS(NewProp_DebugTextList_MetaData, ARRAY_COUNT(NewProp_DebugTextList_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_DebugTextList_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "DebugTextList", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FDebugTextInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugCanvas_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/HUD.h" },
				{ "ToolTip", "'Foreground' debug canvas, will draw in front of Slate UI." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DebugCanvas = { UE4CodeGen_Private::EPropertyClass::Object, "DebugCanvas", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(AHUD, DebugCanvas), Z_Construct_UClass_UCanvas_NoRegister, METADATA_PARAMS(NewProp_DebugCanvas_MetaData, ARRAY_COUNT(NewProp_DebugCanvas_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Canvas_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/HUD.h" },
				{ "ToolTip", "Canvas to Draw HUD on.  Only valid during PostRender() event." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Canvas = { UE4CodeGen_Private::EPropertyClass::Object, "Canvas", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(AHUD, Canvas), Z_Construct_UClass_UCanvas_NoRegister, METADATA_PARAMS(NewProp_Canvas_MetaData, ARRAY_COUNT(NewProp_Canvas_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToggledDebugCategories_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/HUD.h" },
				{ "ToolTip", "Array of names specifying what subsets of debug info to display for viewtarget actor." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ToggledDebugCategories = { UE4CodeGen_Private::EPropertyClass::Array, "ToggledDebugCategories", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044000, 1, nullptr, STRUCT_OFFSET(AHUD, ToggledDebugCategories), METADATA_PARAMS(NewProp_ToggledDebugCategories_MetaData, ARRAY_COUNT(NewProp_ToggledDebugCategories_MetaData)) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ToggledDebugCategories_Inner = { UE4CodeGen_Private::EPropertyClass::Name, "ToggledDebugCategories", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000004000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugDisplay_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/HUD.h" },
				{ "ToolTip", "Array of names specifying what debug info to display for viewtarget actor." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DebugDisplay = { UE4CodeGen_Private::EPropertyClass::Array, "DebugDisplay", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044000, 1, nullptr, STRUCT_OFFSET(AHUD, DebugDisplay), METADATA_PARAMS(NewProp_DebugDisplay_MetaData, ARRAY_COUNT(NewProp_DebugDisplay_MetaData)) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_DebugDisplay_Inner = { UE4CodeGen_Private::EPropertyClass::Name, "DebugDisplay", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000004000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostRenderedActors_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/HUD.h" },
				{ "ToolTip", "Holds a list of Actors that need PostRender() calls." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PostRenderedActors = { UE4CodeGen_Private::EPropertyClass::Array, "PostRenderedActors", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(AHUD, PostRenderedActors), METADATA_PARAMS(NewProp_PostRenderedActors_MetaData, ARRAY_COUNT(NewProp_PostRenderedActors_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PostRenderedActors_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "PostRenderedActors", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableDebugTextShadow_MetaData[] = {
				{ "Category", "HUD" },
				{ "ModuleRelativePath", "Classes/GameFramework/HUD.h" },
				{ "ToolTip", "Put shadow on debug strings" },
			};
#endif
			auto NewProp_bEnableDebugTextShadow_SetBit = [](void* Obj){ ((AHUD*)Obj)->bEnableDebugTextShadow = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableDebugTextShadow = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableDebugTextShadow", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(AHUD), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnableDebugTextShadow_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnableDebugTextShadow_MetaData, ARRAY_COUNT(NewProp_bEnableDebugTextShadow_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowOverlays_MetaData[] = {
				{ "Category", "HUD" },
				{ "ModuleRelativePath", "Classes/GameFramework/HUD.h" },
				{ "ToolTip", "If true, render actor overlays." },
			};
#endif
			auto NewProp_bShowOverlays_SetBit = [](void* Obj){ ((AHUD*)Obj)->bShowOverlays = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowOverlays = { UE4CodeGen_Private::EPropertyClass::Bool, "bShowOverlays", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000004, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(AHUD), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bShowOverlays_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bShowOverlays_MetaData, ARRAY_COUNT(NewProp_bShowOverlays_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowHitBoxDebugInfo_MetaData[] = {
				{ "Category", "HUD" },
				{ "ModuleRelativePath", "Classes/GameFramework/HUD.h" },
				{ "ToolTip", "If true, show hitbox debugging info." },
			};
#endif
			auto NewProp_bShowHitBoxDebugInfo_SetBit = [](void* Obj){ ((AHUD*)Obj)->bShowHitBoxDebugInfo = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowHitBoxDebugInfo = { UE4CodeGen_Private::EPropertyClass::Bool, "bShowHitBoxDebugInfo", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000004, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(AHUD), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bShowHitBoxDebugInfo_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bShowHitBoxDebugInfo_MetaData, ARRAY_COUNT(NewProp_bShowHitBoxDebugInfo_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowDebugInfo_MetaData[] = {
				{ "Category", "HUD" },
				{ "ModuleRelativePath", "Classes/GameFramework/HUD.h" },
				{ "ToolTip", "If true, current ViewTarget shows debug information using its DisplayDebug()." },
			};
#endif
			auto NewProp_bShowDebugInfo_SetBit = [](void* Obj){ ((AHUD*)Obj)->bShowDebugInfo = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowDebugInfo = { UE4CodeGen_Private::EPropertyClass::Bool, "bShowDebugInfo", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000004, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(AHUD), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bShowDebugInfo_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bShowDebugInfo_MetaData, ARRAY_COUNT(NewProp_bShowDebugInfo_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowHUD_MetaData[] = {
				{ "Category", "HUD" },
				{ "ModuleRelativePath", "Classes/GameFramework/HUD.h" },
				{ "ToolTip", "Whether or not the HUD should be drawn." },
			};
#endif
			auto NewProp_bShowHUD_SetBit = [](void* Obj){ ((AHUD*)Obj)->bShowHUD = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowHUD = { UE4CodeGen_Private::EPropertyClass::Bool, "bShowHUD", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(AHUD), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bShowHUD_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bShowHUD_MetaData, ARRAY_COUNT(NewProp_bShowHUD_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLostFocusPaused_MetaData[] = {
				{ "Category", "HUD" },
				{ "ModuleRelativePath", "Classes/GameFramework/HUD.h" },
				{ "ToolTip", "Tells whether the game was paused due to lost focus" },
			};
#endif
			auto NewProp_bLostFocusPaused_SetBit = [](void* Obj){ ((AHUD*)Obj)->bLostFocusPaused = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLostFocusPaused = { UE4CodeGen_Private::EPropertyClass::Bool, "bLostFocusPaused", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(AHUD), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bLostFocusPaused_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bLostFocusPaused_MetaData, ARRAY_COUNT(NewProp_bLostFocusPaused_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerOwner_MetaData[] = {
				{ "Category", "HUD" },
				{ "ModuleRelativePath", "Classes/GameFramework/HUD.h" },
				{ "ToolTip", "PlayerController which owns this HUD." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerOwner = { UE4CodeGen_Private::EPropertyClass::Object, "PlayerOwner", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(AHUD, PlayerOwner), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(NewProp_PlayerOwner_MetaData, ARRAY_COUNT(NewProp_PlayerOwner_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ShowDebugTargetActor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ShowDebugTargetDesiredClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DebugTextList,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DebugTextList_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DebugCanvas,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Canvas,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ToggledDebugCategories,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ToggledDebugCategories_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DebugDisplay,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DebugDisplay_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PostRenderedActors,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PostRenderedActors_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnableDebugTextShadow,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bShowOverlays,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bShowHitBoxDebugInfo,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bShowDebugInfo,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bShowHUD,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bLostFocusPaused,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlayerOwner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AHUD>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AHUD::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x0090028Cu,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHUD, 2073805367);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHUD(Z_Construct_UClass_AHUD, &AHUD::StaticClass, TEXT("/Script/Engine"), TEXT("AHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
