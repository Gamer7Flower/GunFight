// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnLuaTestSuite/Private/Tests/IssueOverridesTest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIssueOverridesTest() {}
// Cross Module References
	UNLUATESTSUITE_API UClass* Z_Construct_UClass_AIssueOverridesActor_NoRegister();
	UNLUATESTSUITE_API UClass* Z_Construct_UClass_AIssueOverridesActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UnLuaTestSuite();
	UNLUATESTSUITE_API UClass* Z_Construct_UClass_UIssueOverridesObject_NoRegister();
	UNLUATESTSUITE_API UClass* Z_Construct_UClass_UIssueOverridesObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UNLUA_API UClass* Z_Construct_UClass_UUnLuaInterface_NoRegister();
// End Cross Module References
	void AIssueOverridesActor::StaticRegisterNativesAIssueOverridesActor()
	{
	}
	UClass* Z_Construct_UClass_AIssueOverridesActor_NoRegister()
	{
		return AIssueOverridesActor::StaticClass();
	}
	struct Z_Construct_UClass_AIssueOverridesActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AIssueOverridesActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UnLuaTestSuite,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIssueOverridesActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Tests/IssueOverridesTest.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/Tests/IssueOverridesTest.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AIssueOverridesActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIssueOverridesActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AIssueOverridesActor_Statics::ClassParams = {
		&AIssueOverridesActor::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AIssueOverridesActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AIssueOverridesActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AIssueOverridesActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AIssueOverridesActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AIssueOverridesActor, 1105515517);
	template<> UNLUATESTSUITE_API UClass* StaticClass<AIssueOverridesActor>()
	{
		return AIssueOverridesActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AIssueOverridesActor(Z_Construct_UClass_AIssueOverridesActor, &AIssueOverridesActor::StaticClass, TEXT("/Script/UnLuaTestSuite"), TEXT("AIssueOverridesActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AIssueOverridesActor);
	DEFINE_FUNCTION(UIssueOverridesObject::execCollectInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->CollectInfo_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIssueOverridesObject::execGetConfig)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetConfig();
		P_NATIVE_END;
	}
	static FName NAME_UIssueOverridesObject_CollectInfo = FName(TEXT("CollectInfo"));
	int32 UIssueOverridesObject::CollectInfo() const
	{
		IssueOverridesObject_eventCollectInfo_Parms Parms;
		const_cast<UIssueOverridesObject*>(this)->ProcessEvent(FindFunctionChecked(NAME_UIssueOverridesObject_CollectInfo),&Parms);
		return Parms.ReturnValue;
	}
	void UIssueOverridesObject::StaticRegisterNativesUIssueOverridesObject()
	{
		UClass* Class = UIssueOverridesObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CollectInfo", &UIssueOverridesObject::execCollectInfo },
			{ "GetConfig", &UIssueOverridesObject::execGetConfig },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UIssueOverridesObject_CollectInfo_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIssueOverridesObject_CollectInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IssueOverridesObject_eventCollectInfo_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIssueOverridesObject_CollectInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIssueOverridesObject_CollectInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIssueOverridesObject_CollectInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/IssueOverridesTest.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIssueOverridesObject_CollectInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIssueOverridesObject, nullptr, "CollectInfo", nullptr, nullptr, sizeof(IssueOverridesObject_eventCollectInfo_Parms), Z_Construct_UFunction_UIssueOverridesObject_CollectInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIssueOverridesObject_CollectInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIssueOverridesObject_CollectInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIssueOverridesObject_CollectInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIssueOverridesObject_CollectInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIssueOverridesObject_CollectInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIssueOverridesObject_GetConfig_Statics
	{
		struct IssueOverridesObject_eventGetConfig_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIssueOverridesObject_GetConfig_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IssueOverridesObject_eventGetConfig_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIssueOverridesObject_GetConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIssueOverridesObject_GetConfig_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIssueOverridesObject_GetConfig_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/IssueOverridesTest.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIssueOverridesObject_GetConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIssueOverridesObject, nullptr, "GetConfig", nullptr, nullptr, sizeof(IssueOverridesObject_eventGetConfig_Parms), Z_Construct_UFunction_UIssueOverridesObject_GetConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIssueOverridesObject_GetConfig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIssueOverridesObject_GetConfig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIssueOverridesObject_GetConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIssueOverridesObject_GetConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIssueOverridesObject_GetConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UIssueOverridesObject_NoRegister()
	{
		return UIssueOverridesObject::StaticClass();
	}
	struct Z_Construct_UClass_UIssueOverridesObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIssueOverridesObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnLuaTestSuite,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UIssueOverridesObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UIssueOverridesObject_CollectInfo, "CollectInfo" }, // 325431523
		{ &Z_Construct_UFunction_UIssueOverridesObject_GetConfig, "GetConfig" }, // 466682952
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIssueOverridesObject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/IssueOverridesTest.h" },
		{ "ModuleRelativePath", "Private/Tests/IssueOverridesTest.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UIssueOverridesObject_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UUnLuaInterface_NoRegister, (int32)VTABLE_OFFSET(UIssueOverridesObject, IUnLuaInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIssueOverridesObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIssueOverridesObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIssueOverridesObject_Statics::ClassParams = {
		&UIssueOverridesObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIssueOverridesObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIssueOverridesObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIssueOverridesObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIssueOverridesObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIssueOverridesObject, 3928638408);
	template<> UNLUATESTSUITE_API UClass* StaticClass<UIssueOverridesObject>()
	{
		return UIssueOverridesObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIssueOverridesObject(Z_Construct_UClass_UIssueOverridesObject, &UIssueOverridesObject::StaticClass, TEXT("/Script/UnLuaTestSuite"), TEXT("UIssueOverridesObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIssueOverridesObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
