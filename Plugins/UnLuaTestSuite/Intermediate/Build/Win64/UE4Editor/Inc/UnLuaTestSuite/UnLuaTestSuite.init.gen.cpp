// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnLuaTestSuite_init() {}
	UNLUATESTSUITE_API UFunction* Z_Construct_UDelegateFunction_UnLuaTestSuite_UnLuaTestSimpleEvent__DelegateSignature();
	UNLUATESTSUITE_API UFunction* Z_Construct_UDelegateFunction_UnLuaTestSuite_UnLuaTestSimpleHandler__DelegateSignature();
	UNLUATESTSUITE_API UFunction* Z_Construct_UDelegateFunction_UnLuaTestSuite_UnLuaTestComplexHandler__DelegateSignature();
	UNLUATESTSUITE_API UFunction* Z_Construct_UDelegateFunction_UnLuaTestSuite_Issue304Event__DelegateSignature();
	UNLUATESTSUITE_API UFunction* Z_Construct_UDelegateFunction_UnLuaTestSuite_Issue362Delegate__DelegateSignature();
	UNLUATESTSUITE_API UFunction* Z_Construct_UDelegateFunction_UnLuaTestSuite_Issule294Event__DelegateSignature();
	UNLUATESTSUITE_API UFunction* Z_Construct_UDelegateFunction_UnLuaTestSuite_Issue561Event__DelegateSignature();
	UNLUATESTSUITE_API UFunction* Z_Construct_UDelegateFunction_UnLuaTestSuite_Issue566Delegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_UnLuaTestSuite()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_UnLuaTestSuite_UnLuaTestSimpleEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UnLuaTestSuite_UnLuaTestSimpleHandler__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UnLuaTestSuite_UnLuaTestComplexHandler__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UnLuaTestSuite_Issue304Event__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UnLuaTestSuite_Issue362Delegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UnLuaTestSuite_Issule294Event__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UnLuaTestSuite_Issue561Event__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UnLuaTestSuite_Issue566Delegate__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/UnLuaTestSuite",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x38A4778E,
				0x81394E3D,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
