// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SandboxGeometry/Public/GeometryHubActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryHubActor() {}
// Cross Module References
	SANDBOXGEOMETRY_API UClass* Z_Construct_UClass_AGeometryHubActor_NoRegister();
	SANDBOXGEOMETRY_API UClass* Z_Construct_UClass_AGeometryHubActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SandboxGeometry();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SANDBOXGEOMETRY_API UClass* Z_Construct_UClass_ABaseGeometryActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	void AGeometryHubActor::StaticRegisterNativesAGeometryHubActor()
	{
	}
	UClass* Z_Construct_UClass_AGeometryHubActor_NoRegister()
	{
		return AGeometryHubActor::StaticClass();
	}
	struct Z_Construct_UClass_AGeometryHubActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_baseGeometryActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_baseGeometryActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_simpleClassGeometry_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_simpleClassGeometry;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_baseGeometryObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_baseGeometryObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGeometryHubActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SandboxGeometry,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryHubActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GeometryHubActor.h" },
		{ "ModuleRelativePath", "Public/GeometryHubActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryHubActor_Statics::NewProp_baseGeometryActor_MetaData[] = {
		{ "Category", "GeometryHubActor" },
		{ "ModuleRelativePath", "Public/GeometryHubActor.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGeometryHubActor_Statics::NewProp_baseGeometryActor = { "baseGeometryActor", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGeometryHubActor, baseGeometryActor), Z_Construct_UClass_ABaseGeometryActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AGeometryHubActor_Statics::NewProp_baseGeometryActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryHubActor_Statics::NewProp_baseGeometryActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryHubActor_Statics::NewProp_simpleClassGeometry_MetaData[] = {
		{ "Category", "GeometryHubActor" },
		{ "ModuleRelativePath", "Public/GeometryHubActor.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGeometryHubActor_Statics::NewProp_simpleClassGeometry = { "simpleClassGeometry", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGeometryHubActor, simpleClassGeometry), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AGeometryHubActor_Statics::NewProp_simpleClassGeometry_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryHubActor_Statics::NewProp_simpleClassGeometry_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryHubActor_Statics::NewProp_baseGeometryObject_MetaData[] = {
		{ "Category", "GeometryHubActor" },
		{ "ModuleRelativePath", "Public/GeometryHubActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGeometryHubActor_Statics::NewProp_baseGeometryObject = { "baseGeometryObject", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGeometryHubActor, baseGeometryObject), Z_Construct_UClass_ABaseGeometryActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGeometryHubActor_Statics::NewProp_baseGeometryObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryHubActor_Statics::NewProp_baseGeometryObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGeometryHubActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryHubActor_Statics::NewProp_baseGeometryActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryHubActor_Statics::NewProp_simpleClassGeometry,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryHubActor_Statics::NewProp_baseGeometryObject,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGeometryHubActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGeometryHubActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGeometryHubActor_Statics::ClassParams = {
		&AGeometryHubActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGeometryHubActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryHubActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGeometryHubActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryHubActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGeometryHubActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGeometryHubActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGeometryHubActor, 484700436);
	template<> SANDBOXGEOMETRY_API UClass* StaticClass<AGeometryHubActor>()
	{
		return AGeometryHubActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGeometryHubActor(Z_Construct_UClass_AGeometryHubActor, &AGeometryHubActor::StaticClass, TEXT("/Script/SandboxGeometry"), TEXT("AGeometryHubActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGeometryHubActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
