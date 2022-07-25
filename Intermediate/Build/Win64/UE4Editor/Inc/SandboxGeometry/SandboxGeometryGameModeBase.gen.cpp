// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SandboxGeometry/SandboxGeometryGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSandboxGeometryGameModeBase() {}
// Cross Module References
	SANDBOXGEOMETRY_API UClass* Z_Construct_UClass_ASandboxGeometryGameModeBase_NoRegister();
	SANDBOXGEOMETRY_API UClass* Z_Construct_UClass_ASandboxGeometryGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_SandboxGeometry();
// End Cross Module References
	void ASandboxGeometryGameModeBase::StaticRegisterNativesASandboxGeometryGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ASandboxGeometryGameModeBase_NoRegister()
	{
		return ASandboxGeometryGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ASandboxGeometryGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASandboxGeometryGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SandboxGeometry,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASandboxGeometryGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SandboxGeometryGameModeBase.h" },
		{ "ModuleRelativePath", "SandboxGeometryGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASandboxGeometryGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASandboxGeometryGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASandboxGeometryGameModeBase_Statics::ClassParams = {
		&ASandboxGeometryGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ASandboxGeometryGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASandboxGeometryGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASandboxGeometryGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASandboxGeometryGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASandboxGeometryGameModeBase, 4218652644);
	template<> SANDBOXGEOMETRY_API UClass* StaticClass<ASandboxGeometryGameModeBase>()
	{
		return ASandboxGeometryGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASandboxGeometryGameModeBase(Z_Construct_UClass_ASandboxGeometryGameModeBase, &ASandboxGeometryGameModeBase::StaticClass, TEXT("/Script/SandboxGeometry"), TEXT("ASandboxGeometryGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASandboxGeometryGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
