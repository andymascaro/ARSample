// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialParameterCollection_generated_h
#error "MaterialParameterCollection.generated.h already included, missing '#pragma once' in MaterialParameterCollection.h"
#endif
#define ENGINE_MaterialParameterCollection_generated_h

#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialParameterCollection_h_59_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FCollectionVectorParameter(); \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FCollectionParameterBase Super;


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialParameterCollection_h_44_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FCollectionScalarParameter(); \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FCollectionParameterBase Super;


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialParameterCollection_h_24_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FCollectionParameterBase(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialParameterCollection_h_77_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialParameterCollection_h_77_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialParameterCollection_h_77_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialParameterCollection(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UMaterialParameterCollection(); \
public: \
	DECLARE_CLASS(UMaterialParameterCollection, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialParameterCollection) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialParameterCollection_h_77_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialParameterCollection(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UMaterialParameterCollection(); \
public: \
	DECLARE_CLASS(UMaterialParameterCollection, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialParameterCollection) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialParameterCollection_h_77_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialParameterCollection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialParameterCollection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialParameterCollection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialParameterCollection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UMaterialParameterCollection(UMaterialParameterCollection&&); \
	ENGINE_API UMaterialParameterCollection(const UMaterialParameterCollection&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialParameterCollection_h_77_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialParameterCollection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UMaterialParameterCollection(UMaterialParameterCollection&&); \
	ENGINE_API UMaterialParameterCollection(const UMaterialParameterCollection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialParameterCollection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialParameterCollection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialParameterCollection)


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialParameterCollection_h_77_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialParameterCollection_h_74_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialParameterCollection_h_77_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialParameterCollection_h_77_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialParameterCollection_h_77_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialParameterCollection_h_77_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialParameterCollection_h_77_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialParameterCollection_h_77_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialParameterCollection_h_77_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialParameterCollection_h_77_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialParameterCollection_h_77_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialParameterCollection_h_77_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MaterialParameterCollection."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Materials_MaterialParameterCollection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
