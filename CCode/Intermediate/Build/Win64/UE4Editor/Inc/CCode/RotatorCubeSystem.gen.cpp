// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CCode/RotatorCubeSystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRotatorCubeSystem() {}
// Cross Module References
	CCODE_API UClass* Z_Construct_UClass_URotatorCubeSystem_NoRegister();
	CCODE_API UClass* Z_Construct_UClass_URotatorCubeSystem();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_CCode();
// End Cross Module References
	void URotatorCubeSystem::StaticRegisterNativesURotatorCubeSystem()
	{
	}
	UClass* Z_Construct_UClass_URotatorCubeSystem_NoRegister()
	{
		return URotatorCubeSystem::StaticClass();
	}
	struct Z_Construct_UClass_URotatorCubeSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URotatorCubeSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CCode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URotatorCubeSystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "RotatorCubeSystem.h" },
		{ "ModuleRelativePath", "RotatorCubeSystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URotatorCubeSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URotatorCubeSystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URotatorCubeSystem_Statics::ClassParams = {
		&URotatorCubeSystem::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_URotatorCubeSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URotatorCubeSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URotatorCubeSystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URotatorCubeSystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URotatorCubeSystem, 3650423735);
	template<> CCODE_API UClass* StaticClass<URotatorCubeSystem>()
	{
		return URotatorCubeSystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URotatorCubeSystem(Z_Construct_UClass_URotatorCubeSystem, &URotatorCubeSystem::StaticClass, TEXT("/Script/CCode"), TEXT("URotatorCubeSystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URotatorCubeSystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
