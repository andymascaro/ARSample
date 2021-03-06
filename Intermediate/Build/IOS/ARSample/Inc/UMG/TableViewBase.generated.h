// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWidget;
class UObject;
#ifdef UMG_TableViewBase_generated_h
#error "TableViewBase.generated.h already included, missing '#pragma once' in TableViewBase.h"
#endif
#define UMG_TableViewBase_generated_h

#define Engine_Source_Runtime_UMG_Public_Components_TableViewBase_h_17_DELEGATE \
struct TableViewBase_eventOnGenerateRowUObject_Parms \
{ \
	UObject* Item; \
	UWidget* ReturnValue; \
 \
	/** Constructor, initializes return property only **/ \
	TableViewBase_eventOnGenerateRowUObject_Parms() \
		: ReturnValue(NULL) \
	{ \
	} \
}; \
static inline UWidget* FOnGenerateRowUObject_DelegateWrapper(const FScriptDelegate& OnGenerateRowUObject, UObject* Item) \
{ \
	TableViewBase_eventOnGenerateRowUObject_Parms Parms; \
	Parms.Item=Item; \
	OnGenerateRowUObject.ProcessDelegate<UObject>(&Parms); \
	return Parms.ReturnValue; \
}


#define Engine_Source_Runtime_UMG_Public_Components_TableViewBase_h_14_RPC_WRAPPERS
#define Engine_Source_Runtime_UMG_Public_Components_TableViewBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_UMG_Public_Components_TableViewBase_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTableViewBase(); \
	friend UMG_API class UClass* Z_Construct_UClass_UTableViewBase(); \
public: \
	DECLARE_CLASS(UTableViewBase, UWidget, COMPILED_IN_FLAGS(CLASS_Abstract), 0, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UTableViewBase) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_UMG_Public_Components_TableViewBase_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUTableViewBase(); \
	friend UMG_API class UClass* Z_Construct_UClass_UTableViewBase(); \
public: \
	DECLARE_CLASS(UTableViewBase, UWidget, COMPILED_IN_FLAGS(CLASS_Abstract), 0, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UTableViewBase) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_UMG_Public_Components_TableViewBase_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTableViewBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTableViewBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTableViewBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTableViewBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTableViewBase(UTableViewBase&&); \
	NO_API UTableViewBase(const UTableViewBase&); \
public:


#define Engine_Source_Runtime_UMG_Public_Components_TableViewBase_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTableViewBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTableViewBase(UTableViewBase&&); \
	NO_API UTableViewBase(const UTableViewBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTableViewBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTableViewBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTableViewBase)


#define Engine_Source_Runtime_UMG_Public_Components_TableViewBase_h_14_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_UMG_Public_Components_TableViewBase_h_11_PROLOG
#define Engine_Source_Runtime_UMG_Public_Components_TableViewBase_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_TableViewBase_h_14_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_TableViewBase_h_14_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Components_TableViewBase_h_14_INCLASS \
	Engine_Source_Runtime_UMG_Public_Components_TableViewBase_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Components_TableViewBase_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_TableViewBase_h_14_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_TableViewBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_TableViewBase_h_14_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_TableViewBase_h_14_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TableViewBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Components_TableViewBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
