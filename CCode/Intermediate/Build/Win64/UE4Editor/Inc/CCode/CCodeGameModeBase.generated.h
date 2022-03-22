// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CCODE_CCodeGameModeBase_generated_h
#error "CCodeGameModeBase.generated.h already included, missing '#pragma once' in CCodeGameModeBase.h"
#endif
#define CCODE_CCodeGameModeBase_generated_h

#define CCode_Source_CCode_CCodeGameModeBase_h_15_SPARSE_DATA
#define CCode_Source_CCode_CCodeGameModeBase_h_15_RPC_WRAPPERS
#define CCode_Source_CCode_CCodeGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define CCode_Source_CCode_CCodeGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACCodeGameModeBase(); \
	friend struct Z_Construct_UClass_ACCodeGameModeBase_Statics; \
public: \
	DECLARE_CLASS(ACCodeGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/CCode"), NO_API) \
	DECLARE_SERIALIZER(ACCodeGameModeBase)


#define CCode_Source_CCode_CCodeGameModeBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesACCodeGameModeBase(); \
	friend struct Z_Construct_UClass_ACCodeGameModeBase_Statics; \
public: \
	DECLARE_CLASS(ACCodeGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/CCode"), NO_API) \
	DECLARE_SERIALIZER(ACCodeGameModeBase)


#define CCode_Source_CCode_CCodeGameModeBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACCodeGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACCodeGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACCodeGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACCodeGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACCodeGameModeBase(ACCodeGameModeBase&&); \
	NO_API ACCodeGameModeBase(const ACCodeGameModeBase&); \
public:


#define CCode_Source_CCode_CCodeGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACCodeGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACCodeGameModeBase(ACCodeGameModeBase&&); \
	NO_API ACCodeGameModeBase(const ACCodeGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACCodeGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACCodeGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACCodeGameModeBase)


#define CCode_Source_CCode_CCodeGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET
#define CCode_Source_CCode_CCodeGameModeBase_h_12_PROLOG
#define CCode_Source_CCode_CCodeGameModeBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CCode_Source_CCode_CCodeGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	CCode_Source_CCode_CCodeGameModeBase_h_15_SPARSE_DATA \
	CCode_Source_CCode_CCodeGameModeBase_h_15_RPC_WRAPPERS \
	CCode_Source_CCode_CCodeGameModeBase_h_15_INCLASS \
	CCode_Source_CCode_CCodeGameModeBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CCode_Source_CCode_CCodeGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CCode_Source_CCode_CCodeGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	CCode_Source_CCode_CCodeGameModeBase_h_15_SPARSE_DATA \
	CCode_Source_CCode_CCodeGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	CCode_Source_CCode_CCodeGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	CCode_Source_CCode_CCodeGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CCODE_API UClass* StaticClass<class ACCodeGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CCode_Source_CCode_CCodeGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
