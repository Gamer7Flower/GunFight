// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnLuaTestSuite/Private/Tests/Issue398Test.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIssue398Test() {}
// Cross Module References
	UNLUATESTSUITE_API UClass* Z_Construct_UClass_ACharacterForIssue398_NoRegister();
	UNLUATESTSUITE_API UClass* Z_Construct_UClass_ACharacterForIssue398();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_UnLuaTestSuite();
	UNLUATESTSUITE_API UClass* Z_Construct_UClass_UInterfaceForIssue398_NoRegister();
// End Cross Module References
	void ACharacterForIssue398::StaticRegisterNativesACharacterForIssue398()
	{
	}
	UClass* Z_Construct_UClass_ACharacterForIssue398_NoRegister()
	{
		return ACharacterForIssue398::StaticClass();
	}
	struct Z_Construct_UClass_ACharacterForIssue398_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACharacterForIssue398_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_UnLuaTestSuite,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterForIssue398_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Tests/Issue398Test.h" },
		{ "ModuleRelativePath", "Private/Tests/Issue398Test.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ACharacterForIssue398_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInterfaceForIssue398_NoRegister, (int32)VTABLE_OFFSET(ACharacterForIssue398, IInterfaceForIssue398), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACharacterForIssue398_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACharacterForIssue398>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACharacterForIssue398_Statics::ClassParams = {
		&ACharacterForIssue398::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACharacterForIssue398_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterForIssue398_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACharacterForIssue398()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACharacterForIssue398_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACharacterForIssue398, 334846887);
	template<> UNLUATESTSUITE_API UClass* StaticClass<ACharacterForIssue398>()
	{
		return ACharacterForIssue398::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACharacterForIssue398(Z_Construct_UClass_ACharacterForIssue398, &ACharacterForIssue398::StaticClass, TEXT("/Script/UnLuaTestSuite"), TEXT("ACharacterForIssue398"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACharacterForIssue398);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
