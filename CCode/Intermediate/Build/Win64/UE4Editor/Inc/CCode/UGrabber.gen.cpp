// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CCode/UGrabber.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUGrabber() {}
// Cross Module References
	CCODE_API UClass* Z_Construct_UClass_AUGrabber_NoRegister();
	CCODE_API UClass* Z_Construct_UClass_AUGrabber();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_CCode();
// End Cross Module References
	void AUGrabber::StaticRegisterNativesAUGrabber()
	{
	}
	UClass* Z_Construct_UClass_AUGrabber_NoRegister()
	{
		return AUGrabber::StaticClass();
	}
	struct Z_Construct_UClass_AUGrabber_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUGrabber_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_CCode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUGrabber_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "UGrabber.h" },
		{ "ModuleRelativePath", "UGrabber.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUGrabber_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUGrabber>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUGrabber_Statics::ClassParams = {
		&AUGrabber::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AUGrabber_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUGrabber_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUGrabber()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUGrabber_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUGrabber, 3761454467);
	template<> CCODE_API UClass* StaticClass<AUGrabber>()
	{
		return AUGrabber::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUGrabber(Z_Construct_UClass_AUGrabber, &AUGrabber::StaticClass, TEXT("/Script/CCode"), TEXT("AUGrabber"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUGrabber);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
