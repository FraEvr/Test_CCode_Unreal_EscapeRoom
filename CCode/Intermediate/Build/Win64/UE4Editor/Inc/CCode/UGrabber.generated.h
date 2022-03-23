// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CCODE_UGrabber_generated_h
#error "UGrabber.generated.h already included, missing '#pragma once' in UGrabber.h"
#endif
#define CCODE_UGrabber_generated_h

#define CCode_Source_CCode_UGrabber_h_12_SPARSE_DATA
#define CCode_Source_CCode_UGrabber_h_12_RPC_WRAPPERS
#define CCode_Source_CCode_UGrabber_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define CCode_Source_CCode_UGrabber_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUGrabber(); \
	friend struct Z_Construct_UClass_AUGrabber_Statics; \
public: \
	DECLARE_CLASS(AUGrabber, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CCode"), NO_API) \
	DECLARE_SERIALIZER(AUGrabber)


#define CCode_Source_CCode_UGrabber_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAUGrabber(); \
	friend struct Z_Construct_UClass_AUGrabber_Statics; \
public: \
	DECLARE_CLASS(AUGrabber, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CCode"), NO_API) \
	DECLARE_SERIALIZER(AUGrabber)


#define CCode_Source_CCode_UGrabber_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUGrabber(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUGrabber) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUGrabber); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUGrabber); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUGrabber(AUGrabber&&); \
	NO_API AUGrabber(const AUGrabber&); \
public:


#define CCode_Source_CCode_UGrabber_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUGrabber(AUGrabber&&); \
	NO_API AUGrabber(const AUGrabber&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUGrabber); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUGrabber); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUGrabber)


#define CCode_Source_CCode_UGrabber_h_12_PRIVATE_PROPERTY_OFFSET
#define CCode_Source_CCode_UGrabber_h_9_PROLOG
#define CCode_Source_CCode_UGrabber_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CCode_Source_CCode_UGrabber_h_12_PRIVATE_PROPERTY_OFFSET \
	CCode_Source_CCode_UGrabber_h_12_SPARSE_DATA \
	CCode_Source_CCode_UGrabber_h_12_RPC_WRAPPERS \
	CCode_Source_CCode_UGrabber_h_12_INCLASS \
	CCode_Source_CCode_UGrabber_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CCode_Source_CCode_UGrabber_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CCode_Source_CCode_UGrabber_h_12_PRIVATE_PROPERTY_OFFSET \
	CCode_Source_CCode_UGrabber_h_12_SPARSE_DATA \
	CCode_Source_CCode_UGrabber_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	CCode_Source_CCode_UGrabber_h_12_INCLASS_NO_PURE_DECLS \
	CCode_Source_CCode_UGrabber_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CCODE_API UClass* StaticClass<class AUGrabber>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CCode_Source_CCode_UGrabber_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
