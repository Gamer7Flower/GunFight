// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnLuaTestSuite/Private/Tests/Issue398TestInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIssue398TestInterface() {}
// Cross Module References
	UNLUATESTSUITE_API UClass* Z_Construct_UClass_UInterfaceForIssue398_NoRegister();
	UNLUATESTSUITE_API UClass* Z_Construct_UClass_UInterfaceForIssue398();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_UnLuaTestSuite();
// End Cross Module References
	void UInterfaceForIssue398::StaticRegisterNativesUInterfaceForIssue398()
	{
	}
	UClass* Z_Construct_UClass_UInterfaceForIssue398_NoRegister()
	{
		return UInterfaceForIssue398::StaticClass();
	}
	struct Z_Construct_UClass_UInterfaceForIssue398_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterfaceForIssue398_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_UnLuaTestSuite,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterfaceForIssue398_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/Tests/Issue398TestInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterfaceForIssue398_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInterfaceForIssue398>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInterfaceForIssue398_Statics::ClassParams = {
		&UInterfaceForIssue398::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UInterfaceForIssue398_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterfaceForIssue398_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterfaceForIssue398()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInterfaceForIssue398_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInterfaceForIssue398, 919001285);
	template<> UNLUATESTSUITE_API UClass* StaticClass<UInterfaceForIssue398>()
	{
		return UInterfaceForIssue398::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterfaceForIssue398(Z_Construct_UClass_UInterfaceForIssue398, &UInterfaceForIssue398::StaticClass, TEXT("/Script/UnLuaTestSuite"), TEXT("UInterfaceForIssue398"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterfaceForIssue398);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
