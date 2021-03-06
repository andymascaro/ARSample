// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INPUTCORE_InputCoreTypes_generated_h
#error "InputCoreTypes.generated.h already included, missing '#pragma once' in InputCoreTypes.h"
#endif
#define INPUTCORE_InputCoreTypes_generated_h

#define Engine_Source_Runtime_InputCore_Classes_InputCoreTypes_h_41_GENERATED_BODY \
	friend INPUTCORE_API class UScriptStruct* Z_Construct_UScriptStruct_FKey(); \
	static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__KeyName() { return STRUCT_OFFSET(FKey, KeyName); }


#define Engine_Source_Runtime_InputCore_Classes_InputCoreTypes_h_577_RPC_WRAPPERS
#define Engine_Source_Runtime_InputCore_Classes_InputCoreTypes_h_577_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_InputCore_Classes_InputCoreTypes_h_577_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputCoreTypes(); \
	friend INPUTCORE_API class UClass* Z_Construct_UClass_UInputCoreTypes(); \
public: \
	DECLARE_CLASS(UInputCoreTypes, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), 0, TEXT("/Script/InputCore"), NO_API) \
	DECLARE_SERIALIZER(UInputCoreTypes) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_InputCore_Classes_InputCoreTypes_h_577_INCLASS \
private: \
	static void StaticRegisterNativesUInputCoreTypes(); \
	friend INPUTCORE_API class UClass* Z_Construct_UClass_UInputCoreTypes(); \
public: \
	DECLARE_CLASS(UInputCoreTypes, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), 0, TEXT("/Script/InputCore"), NO_API) \
	DECLARE_SERIALIZER(UInputCoreTypes) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_InputCore_Classes_InputCoreTypes_h_577_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInputCoreTypes(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputCoreTypes) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputCoreTypes); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputCoreTypes); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInputCoreTypes(UInputCoreTypes&&); \
	NO_API UInputCoreTypes(const UInputCoreTypes&); \
public:


#define Engine_Source_Runtime_InputCore_Classes_InputCoreTypes_h_577_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInputCoreTypes(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInputCoreTypes(UInputCoreTypes&&); \
	NO_API UInputCoreTypes(const UInputCoreTypes&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputCoreTypes); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputCoreTypes); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputCoreTypes)


#define Engine_Source_Runtime_InputCore_Classes_InputCoreTypes_h_577_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_InputCore_Classes_InputCoreTypes_h_574_PROLOG
#define Engine_Source_Runtime_InputCore_Classes_InputCoreTypes_h_577_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_InputCore_Classes_InputCoreTypes_h_577_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_InputCore_Classes_InputCoreTypes_h_577_RPC_WRAPPERS \
	Engine_Source_Runtime_InputCore_Classes_InputCoreTypes_h_577_INCLASS \
	Engine_Source_Runtime_InputCore_Classes_InputCoreTypes_h_577_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_InputCore_Classes_InputCoreTypes_h_577_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_InputCore_Classes_InputCoreTypes_h_577_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_InputCore_Classes_InputCoreTypes_h_577_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_InputCore_Classes_InputCoreTypes_h_577_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_InputCore_Classes_InputCoreTypes_h_577_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_InputCore_Classes_InputCoreTypes_h


#define FOREACH_ENUM_ETOUCHTYPE(op) \
	op(ETouchType::Began) \
	op(ETouchType::Moved) \
	op(ETouchType::Stationary) \
	op(ETouchType::Ended) 
#define FOREACH_ENUM_ECONSOLEFORGAMEPADLABELS(op) \
	op(EConsoleForGamepadLabels::None) \
	op(EConsoleForGamepadLabels::XBoxOne) 
#define FOREACH_ENUM_ETOUCHINDEX(op) \
	op(ETouchIndex::Touch1) \
	op(ETouchIndex::Touch2) \
	op(ETouchIndex::Touch3) \
	op(ETouchIndex::Touch4) \
	op(ETouchIndex::Touch5) \
	op(ETouchIndex::Touch6) \
	op(ETouchIndex::Touch7) \
	op(ETouchIndex::Touch8) \
	op(ETouchIndex::Touch9) \
	op(ETouchIndex::Touch10) \
	op(ETouchIndex::CursorPointerIndex) 
#define FOREACH_ENUM_ECONTROLLERHAND(op) \
	op(EControllerHand::Left) \
	op(EControllerHand::Right) \
	op(EControllerHand::AnyHand) \
	op(EControllerHand::Pad) \
	op(EControllerHand::ExternalCamera) \
	op(EControllerHand::Gun) \
	op(EControllerHand::Special_1) \
	op(EControllerHand::Special_2) \
	op(EControllerHand::Special_3) \
	op(EControllerHand::Special_4) \
	op(EControllerHand::Special_5) \
	op(EControllerHand::Special_6) \
	op(EControllerHand::Special_7) \
	op(EControllerHand::Special_8) \
	op(EControllerHand::Special_9) \
	op(EControllerHand::Special_10) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
