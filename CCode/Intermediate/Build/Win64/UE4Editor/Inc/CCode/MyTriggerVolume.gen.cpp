// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CCode/MyTriggerVolume.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyTriggerVolume() {}
// Cross Module References
	CCODE_API UClass* Z_Construct_UClass_AMyTriggerVolume_NoRegister();
	CCODE_API UClass* Z_Construct_UClass_AMyTriggerVolume();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerVolume();
	UPackage* Z_Construct_UPackage__Script_CCode();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMyTriggerVolume::execOnOverlapEnd)
	{
		P_GET_OBJECT(AActor,Z_Param_overlappedActor);
		P_GET_OBJECT(AActor,Z_Param_otherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapEnd(Z_Param_overlappedActor,Z_Param_otherActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyTriggerVolume::execOnOverlapBegin)
	{
		P_GET_OBJECT(AActor,Z_Param_overlappedActor);
		P_GET_OBJECT(AActor,Z_Param_otherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapBegin(Z_Param_overlappedActor,Z_Param_otherActor);
		P_NATIVE_END;
	}
	void AMyTriggerVolume::StaticRegisterNativesAMyTriggerVolume()
	{
		UClass* Class = AMyTriggerVolume::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnOverlapBegin", &AMyTriggerVolume::execOnOverlapBegin },
			{ "OnOverlapEnd", &AMyTriggerVolume::execOnOverlapEnd },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyTriggerVolume_OnOverlapBegin_Statics
	{
		struct MyTriggerVolume_eventOnOverlapBegin_Parms
		{
			AActor* overlappedActor;
			AActor* otherActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_overlappedActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_otherActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyTriggerVolume_OnOverlapBegin_Statics::NewProp_overlappedActor = { "overlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyTriggerVolume_eventOnOverlapBegin_Parms, overlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyTriggerVolume_OnOverlapBegin_Statics::NewProp_otherActor = { "otherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyTriggerVolume_eventOnOverlapBegin_Parms, otherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyTriggerVolume_OnOverlapBegin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyTriggerVolume_OnOverlapBegin_Statics::NewProp_overlappedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyTriggerVolume_OnOverlapBegin_Statics::NewProp_otherActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyTriggerVolume_OnOverlapBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyTriggerVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyTriggerVolume_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyTriggerVolume, nullptr, "OnOverlapBegin", nullptr, nullptr, sizeof(MyTriggerVolume_eventOnOverlapBegin_Parms), Z_Construct_UFunction_AMyTriggerVolume_OnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyTriggerVolume_OnOverlapBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyTriggerVolume_OnOverlapBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyTriggerVolume_OnOverlapBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyTriggerVolume_OnOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyTriggerVolume_OnOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyTriggerVolume_OnOverlapEnd_Statics
	{
		struct MyTriggerVolume_eventOnOverlapEnd_Parms
		{
			AActor* overlappedActor;
			AActor* otherActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_overlappedActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_otherActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyTriggerVolume_OnOverlapEnd_Statics::NewProp_overlappedActor = { "overlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyTriggerVolume_eventOnOverlapEnd_Parms, overlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyTriggerVolume_OnOverlapEnd_Statics::NewProp_otherActor = { "otherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyTriggerVolume_eventOnOverlapEnd_Parms, otherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyTriggerVolume_OnOverlapEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyTriggerVolume_OnOverlapEnd_Statics::NewProp_overlappedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyTriggerVolume_OnOverlapEnd_Statics::NewProp_otherActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyTriggerVolume_OnOverlapEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyTriggerVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyTriggerVolume_OnOverlapEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyTriggerVolume, nullptr, "OnOverlapEnd", nullptr, nullptr, sizeof(MyTriggerVolume_eventOnOverlapEnd_Parms), Z_Construct_UFunction_AMyTriggerVolume_OnOverlapEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyTriggerVolume_OnOverlapEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyTriggerVolume_OnOverlapEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyTriggerVolume_OnOverlapEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyTriggerVolume_OnOverlapEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyTriggerVolume_OnOverlapEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMyTriggerVolume_NoRegister()
	{
		return AMyTriggerVolume::StaticClass();
	}
	struct Z_Construct_UClass_AMyTriggerVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_matchActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_matchActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_door_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_door;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyTriggerVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATriggerVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_CCode,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyTriggerVolume_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyTriggerVolume_OnOverlapBegin, "OnOverlapBegin" }, // 3871436055
		{ &Z_Construct_UFunction_AMyTriggerVolume_OnOverlapEnd, "OnOverlapEnd" }, // 1693647687
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyTriggerVolume_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "MyTriggerVolume.h" },
		{ "ModuleRelativePath", "MyTriggerVolume.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyTriggerVolume_Statics::NewProp_matchActor_MetaData[] = {
		{ "Category", "MyTriggerVolume" },
		{ "Comment", "//Variable stockant l'acteur devant ?tre associ? au trigger pour l'activer\n" },
		{ "ModuleRelativePath", "MyTriggerVolume.h" },
		{ "ToolTip", "Variable stockant l'acteur devant ?tre associ? au trigger pour l'activer" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyTriggerVolume_Statics::NewProp_matchActor = { "matchActor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyTriggerVolume, matchActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyTriggerVolume_Statics::NewProp_matchActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyTriggerVolume_Statics::NewProp_matchActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyTriggerVolume_Statics::NewProp_door_MetaData[] = {
		{ "Category", "MyTriggerVolume" },
		{ "Comment", "//Variable de la porte devant s'ouvrir gr?ce ? l'activation du trigger\n" },
		{ "ModuleRelativePath", "MyTriggerVolume.h" },
		{ "ToolTip", "Variable de la porte devant s'ouvrir gr?ce ? l'activation du trigger" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyTriggerVolume_Statics::NewProp_door = { "door", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyTriggerVolume, door), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyTriggerVolume_Statics::NewProp_door_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyTriggerVolume_Statics::NewProp_door_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyTriggerVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyTriggerVolume_Statics::NewProp_matchActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyTriggerVolume_Statics::NewProp_door,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyTriggerVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyTriggerVolume>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyTriggerVolume_Statics::ClassParams = {
		&AMyTriggerVolume::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMyTriggerVolume_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyTriggerVolume_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMyTriggerVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyTriggerVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyTriggerVolume()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyTriggerVolume_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyTriggerVolume, 3547728540);
	template<> CCODE_API UClass* StaticClass<AMyTriggerVolume>()
	{
		return AMyTriggerVolume::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyTriggerVolume(Z_Construct_UClass_AMyTriggerVolume, &AMyTriggerVolume::StaticClass, TEXT("/Script/CCode"), TEXT("AMyTriggerVolume"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyTriggerVolume);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
