// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
enum class EARTrackingQuality : uint8;
#ifdef AUGMENTEDREALITY_ARBlueprintFunctionLibrary_generated_h
#error "ARBlueprintFunctionLibrary.generated.h already included, missing '#pragma once' in ARBlueprintFunctionLibrary.h"
#endif
#define AUGMENTEDREALITY_ARBlueprintFunctionLibrary_generated_h

#define Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintFunctionLibrary_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetTrackingQuality) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EARTrackingQuality*)Z_Param__Result=UARBlueprintFunctionLibrary::GetTrackingQuality(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintFunctionLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetTrackingQuality) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EARTrackingQuality*)Z_Param__Result=UARBlueprintFunctionLibrary::GetTrackingQuality(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintFunctionLibrary_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARBlueprintFunctionLibrary(); \
	friend AUGMENTEDREALITY_API class UClass* Z_Construct_UClass_UARBlueprintFunctionLibrary(); \
public: \
	DECLARE_CLASS(UARBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARBlueprintFunctionLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintFunctionLibrary_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUARBlueprintFunctionLibrary(); \
	friend AUGMENTEDREALITY_API class UClass* Z_Construct_UClass_UARBlueprintFunctionLibrary(); \
public: \
	DECLARE_CLASS(UARBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARBlueprintFunctionLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintFunctionLibrary_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARBlueprintFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARBlueprintFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARBlueprintFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARBlueprintFunctionLibrary(UARBlueprintFunctionLibrary&&); \
	NO_API UARBlueprintFunctionLibrary(const UARBlueprintFunctionLibrary&); \
public:


#define Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintFunctionLibrary_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARBlueprintFunctionLibrary(UARBlueprintFunctionLibrary&&); \
	NO_API UARBlueprintFunctionLibrary(const UARBlueprintFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARBlueprintFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARBlueprintFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARBlueprintFunctionLibrary)


#define Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintFunctionLibrary_h_15_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintFunctionLibrary_h_12_PROLOG
#define Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintFunctionLibrary_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintFunctionLibrary_h_15_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintFunctionLibrary_h_15_RPC_WRAPPERS \
	Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintFunctionLibrary_h_15_INCLASS \
	Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintFunctionLibrary_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintFunctionLibrary_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintFunctionLibrary_h_15_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintFunctionLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintFunctionLibrary_h_15_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintFunctionLibrary_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
