// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UMG_RichTextBlock_generated_h
#error "RichTextBlock.generated.h already included, missing '#pragma once' in RichTextBlock.h"
#endif
#define UMG_RichTextBlock_generated_h

#define Engine_Source_Runtime_UMG_Public_Components_RichTextBlock_h_25_RPC_WRAPPERS
#define Engine_Source_Runtime_UMG_Public_Components_RichTextBlock_h_25_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_UMG_Public_Components_RichTextBlock_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURichTextBlock(); \
	friend UMG_API class UClass* Z_Construct_UClass_URichTextBlock(); \
public: \
	DECLARE_CLASS(URichTextBlock, UTextLayoutWidget, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(URichTextBlock) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_UMG_Public_Components_RichTextBlock_h_25_INCLASS \
private: \
	static void StaticRegisterNativesURichTextBlock(); \
	friend UMG_API class UClass* Z_Construct_UClass_URichTextBlock(); \
public: \
	DECLARE_CLASS(URichTextBlock, UTextLayoutWidget, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(URichTextBlock) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_UMG_Public_Components_RichTextBlock_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URichTextBlock(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URichTextBlock) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URichTextBlock); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URichTextBlock); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URichTextBlock(URichTextBlock&&); \
	NO_API URichTextBlock(const URichTextBlock&); \
public:


#define Engine_Source_Runtime_UMG_Public_Components_RichTextBlock_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URichTextBlock(URichTextBlock&&); \
	NO_API URichTextBlock(const URichTextBlock&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URichTextBlock); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URichTextBlock); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URichTextBlock)


#define Engine_Source_Runtime_UMG_Public_Components_RichTextBlock_h_25_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Text() { return STRUCT_OFFSET(URichTextBlock, Text); } \
	FORCEINLINE static uint32 __PPO__TextDelegate() { return STRUCT_OFFSET(URichTextBlock, TextDelegate); } \
	FORCEINLINE static uint32 __PPO__Font() { return STRUCT_OFFSET(URichTextBlock, Font); } \
	FORCEINLINE static uint32 __PPO__Color() { return STRUCT_OFFSET(URichTextBlock, Color); } \
	FORCEINLINE static uint32 __PPO__Decorators() { return STRUCT_OFFSET(URichTextBlock, Decorators); }


#define Engine_Source_Runtime_UMG_Public_Components_RichTextBlock_h_22_PROLOG
#define Engine_Source_Runtime_UMG_Public_Components_RichTextBlock_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_RichTextBlock_h_25_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_RichTextBlock_h_25_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Components_RichTextBlock_h_25_INCLASS \
	Engine_Source_Runtime_UMG_Public_Components_RichTextBlock_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Components_RichTextBlock_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_RichTextBlock_h_25_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_RichTextBlock_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_RichTextBlock_h_25_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_RichTextBlock_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Components_RichTextBlock_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
