// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnLuaTestSuite/Private/Tests/Issue595Test.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIssue595Test() {}
// Cross Module References
	UNLUATESTSUITE_API UClass* Z_Construct_UClass_UIssue595Object_NoRegister();
	UNLUATESTSUITE_API UClass* Z_Construct_UClass_UIssue595Object();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_UnLuaTestSuite();
	UNLUATESTSUITE_API UClass* Z_Construct_UClass_UIssue595Interface_NoRegister();
	UNLUA_API UClass* Z_Construct_UClass_UUnLuaInterface_NoRegister();
// End Cross Module References
	void UIssue595Object::StaticRegisterNativesUIssue595Object()
	{
	}
	UClass* Z_Construct_UClass_UIssue595Object_NoRegister()
	{
		return UIssue595Object::StaticClass();
	}
	struct Z_Construct_UClass_UIssue595Object_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIssue595Object_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnLuaTestSuite,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIssue595Object_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/Issue595Test.h" },
		{ "ModuleRelativePath", "Private/Tests/Issue595Test.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UIssue595Object_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIssue595Interface_NoRegister, (int32)VTABLE_OFFSET(UIssue595Object, IIssue595Interface), false },
			{ Z_Construct_UClass_UUnLuaInterface_NoRegister, (int32)VTABLE_OFFSET(UIssue595Object, IUnLuaInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIssue595Object_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIssue595Object>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIssue595Object_Statics::ClassParams = {
		&UIssue595Object::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIssue595Object_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIssue595Object_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIssue595Object()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIssue595Object_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIssue595Object, 413148936);
	template<> UNLUATESTSUITE_API UClass* StaticClass<UIssue595Object>()
	{
		return UIssue595Object::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIssue595Object(Z_Construct_UClass_UIssue595Object, &UIssue595Object::StaticClass, TEXT("/Script/UnLuaTestSuite"), TEXT("UIssue595Object"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIssue595Object);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
