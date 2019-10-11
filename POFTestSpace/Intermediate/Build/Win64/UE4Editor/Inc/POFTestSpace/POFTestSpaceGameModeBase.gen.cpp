// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "POFTestSpace/POFTestSpaceGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePOFTestSpaceGameModeBase() {}
// Cross Module References
	POFTESTSPACE_API UClass* Z_Construct_UClass_APOFTestSpaceGameModeBase_NoRegister();
	POFTESTSPACE_API UClass* Z_Construct_UClass_APOFTestSpaceGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_POFTestSpace();
// End Cross Module References
	void APOFTestSpaceGameModeBase::StaticRegisterNativesAPOFTestSpaceGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_APOFTestSpaceGameModeBase_NoRegister()
	{
		return APOFTestSpaceGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_APOFTestSpaceGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APOFTestSpaceGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_POFTestSpace,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APOFTestSpaceGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "POFTestSpaceGameModeBase.h" },
		{ "ModuleRelativePath", "POFTestSpaceGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APOFTestSpaceGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APOFTestSpaceGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APOFTestSpaceGameModeBase_Statics::ClassParams = {
		&APOFTestSpaceGameModeBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A8u,
		METADATA_PARAMS(Z_Construct_UClass_APOFTestSpaceGameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APOFTestSpaceGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APOFTestSpaceGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APOFTestSpaceGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APOFTestSpaceGameModeBase, 1093010333);
	template<> POFTESTSPACE_API UClass* StaticClass<APOFTestSpaceGameModeBase>()
	{
		return APOFTestSpaceGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APOFTestSpaceGameModeBase(Z_Construct_UClass_APOFTestSpaceGameModeBase, &APOFTestSpaceGameModeBase::StaticClass, TEXT("/Script/POFTestSpace"), TEXT("APOFTestSpaceGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APOFTestSpaceGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
