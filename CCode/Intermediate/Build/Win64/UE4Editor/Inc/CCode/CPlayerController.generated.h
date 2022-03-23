// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CCODE_CPlayerController_generated_h
#error "CPlayerController.generated.h already included, missing '#pragma once' in CPlayerController.h"
#endif
#define CCODE_CPlayerController_generated_h

#define CCode_Source_CCode_CPlayerController_h_18_SPARSE_DATA
#define CCode_Source_CCode_CPlayerController_h_18_RPC_WRAPPERS
#define CCode_Source_CCode_CPlayerController_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define CCode_Source_CCode_CPlayerController_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACPlayerController(); \
	friend struct Z_Construct_UClass_ACPlayerController_Statics; \
public: \
	DECLARE_CLASS(ACPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CCode"), NO_API) \
	DECLARE_SERIALIZER(ACPlayerController)


#define CCode_Source_CCode_CPlayerController_h_18_INCLASS \
private: \
	static void StaticRegisterNativesACPlayerController(); \
	friend struct Z_Construct_UClass_ACPlayerController_Statics; \
public: \
	DECLARE_CLASS(ACPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CCode"), NO_API) \
	DECLARE_SERIALIZER(ACPlayerController)


#define CCode_Source_CCode_CPlayerController_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACPlayerController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACPlayerController(ACPlayerController&&); \
	NO_API ACPlayerController(const ACPlayerController&); \
public:


#define CCode_Source_CCode_CPlayerController_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACPlayerController(ACPlayerController&&); \
	NO_API ACPlayerController(const ACPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACPlayerController)


#define CCode_Source_CCode_CPlayerController_h_18_PRIVATE_PROPERTY_OFFSET
#define CCode_Source_CCode_CPlayerController_h_15_PROLOG
#define CCode_Source_CCode_CPlayerController_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CCode_Source_CCode_CPlayerController_h_18_PRIVATE_PROPERTY_OFFSET \
	CCode_Source_CCode_CPlayerController_h_18_SPARSE_DATA \
	CCode_Source_CCode_CPlayerController_h_18_RPC_WRAPPERS \
	CCode_Source_CCode_CPlayerController_h_18_INCLASS \
	CCode_Source_CCode_CPlayerController_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CCode_Source_CCode_CPlayerController_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CCode_Source_CCode_CPlayerController_h_18_PRIVATE_PROPERTY_OFFSET \
	CCode_Source_CCode_CPlayerController_h_18_SPARSE_DATA \
	CCode_Source_CCode_CPlayerController_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	CCode_Source_CCode_CPlayerController_h_18_INCLASS_NO_PURE_DECLS \
	CCode_Source_CCode_CPlayerController_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CCODE_API UClass* StaticClass<class ACPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CCode_Source_CCode_CPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
