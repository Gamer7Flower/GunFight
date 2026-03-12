// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnLuaTestSuite/Private/Tests/Issue494IFOperationTip.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIssue494IFOperationTip() {}
// Cross Module References
	UNLUATESTSUITE_API UClass* Z_Construct_UClass_UIssue494IFOperationTip_NoRegister();
	UNLUATESTSUITE_API UClass* Z_Construct_UClass_UIssue494IFOperationTip();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_UnLuaTestSuite();
// End Cross Module References
	FString IIssue494IFOperationTip::GetTipText()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetTipText instead.");
		Issue494IFOperationTip_eventGetTipText_Parms Parms;
		return Parms.ReturnValue;
	}
	void UIssue494IFOperationTip::StaticRegisterNativesUIssue494IFOperationTip()
	{
	}
	struct Z_Construct_UFunction_UIssue494IFOperationTip_GetTipText_Statics
	{
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UIssue494IFOperationTip_GetTipText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Issue494IFOperationTip_eventGetTipText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIssue494IFOperationTip_GetTipText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIssue494IFOperationTip_GetTipText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIssue494IFOperationTip_GetTipText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/Issue494IFOperationTip.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIssue494IFOperationTip_GetTipText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIssue494IFOperationTip, nullptr, "GetTipText", nullptr, nullptr, sizeof(Issue494IFOperationTip_eventGetTipText_Parms), Z_Construct_UFunction_UIssue494IFOperationTip_GetTipText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIssue494IFOperationTip_GetTipText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIssue494IFOperationTip_GetTipText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIssue494IFOperationTip_GetTipText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIssue494IFOperationTip_GetTipText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIssue494IFOperationTip_GetTipText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UIssue494IFOperationTip_NoRegister()
	{
		return UIssue494IFOperationTip::StaticClass();
	}
	struct Z_Construct_UClass_UIssue494IFOperationTip_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIssue494IFOperationTip_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_UnLuaTestSuite,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UIssue494IFOperationTip_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UIssue494IFOperationTip_GetTipText, "GetTipText" }, // 1082616675
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIssue494IFOperationTip_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/Tests/Issue494IFOperationTip.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIssue494IFOperationTip_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIssue494IFOperationTip>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIssue494IFOperationTip_Statics::ClassParams = {
		&UIssue494IFOperationTip::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UIssue494IFOperationTip_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIssue494IFOperationTip_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIssue494IFOperationTip()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIssue494IFOperationTip_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIssue494IFOperationTip, 3809462116);
	template<> UNLUATESTSUITE_API UClass* StaticClass<UIssue494IFOperationTip>()
	{
		return UIssue494IFOperationTip::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIssue494IFOperationTip(Z_Construct_UClass_UIssue494IFOperationTip, &UIssue494IFOperationTip::StaticClass, TEXT("/Script/UnLuaTestSuite"), TEXT("UIssue494IFOperationTip"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIssue494IFOperationTip);
	static FName NAME_UIssue494IFOperationTip_GetTipText = FName(TEXT("GetTipText"));
	FString IIssue494IFOperationTip::Execute_GetTipText(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UIssue494IFOperationTip::StaticClass()));
		Issue494IFOperationTip_eventGetTipText_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UIssue494IFOperationTip_GetTipText);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		return Parms.ReturnValue;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
