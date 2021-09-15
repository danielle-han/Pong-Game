// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pong/Ball.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBall() {}
// Cross Module References
	PONG_API UClass* Z_Construct_UClass_ABall_NoRegister();
	PONG_API UClass* Z_Construct_UClass_ABall();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Pong();
	PONG_API UClass* Z_Construct_UClass_APaddle_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperSpriteComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
// End Cross Module References
	static FName NAME_ABall_HitBoundary = FName(TEXT("HitBoundary"));
	void ABall::HitBoundary()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABall_HitBoundary),NULL);
	}
	static FName NAME_ABall_HitPaddle = FName(TEXT("HitPaddle"));
	void ABall::HitPaddle(APaddle* Paddle)
	{
		Ball_eventHitPaddle_Parms Parms;
		Parms.Paddle=Paddle;
		ProcessEvent(FindFunctionChecked(NAME_ABall_HitPaddle),&Parms);
	}
	void ABall::StaticRegisterNativesABall()
	{
	}
	struct Z_Construct_UFunction_ABall_HitBoundary_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABall_HitBoundary_Statics::Function_MetaDataParams[] = {
		{ "BlueprintProtected", "" },
		{ "Category", "Hit Response" },
		{ "ModuleRelativePath", "Ball.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABall_HitBoundary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABall, nullptr, "HitBoundary", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABall_HitBoundary_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABall_HitBoundary_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABall_HitBoundary()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABall_HitBoundary_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABall_HitPaddle_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Paddle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABall_HitPaddle_Statics::NewProp_Paddle = { "Paddle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Ball_eventHitPaddle_Parms, Paddle), Z_Construct_UClass_APaddle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABall_HitPaddle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABall_HitPaddle_Statics::NewProp_Paddle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABall_HitPaddle_Statics::Function_MetaDataParams[] = {
		{ "BlueprintProtected", "" },
		{ "Category", "Hit Response" },
		{ "ModuleRelativePath", "Ball.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABall_HitPaddle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABall, nullptr, "HitPaddle", nullptr, nullptr, sizeof(Ball_eventHitPaddle_Parms), Z_Construct_UFunction_ABall_HitPaddle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABall_HitPaddle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABall_HitPaddle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABall_HitPaddle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABall_HitPaddle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABall_HitPaddle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABall_NoRegister()
	{
		return ABall::StaticClass();
	}
	struct Z_Construct_UClass_ABall_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sprite_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sprite;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sphere_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sphere;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABall_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Pong,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABall_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABall_HitBoundary, "HitBoundary" }, // 2245619954
		{ &Z_Construct_UFunction_ABall_HitPaddle, "HitPaddle" }, // 2852382268
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABall_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Ball.h" },
		{ "ModuleRelativePath", "Ball.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABall_Statics::NewProp_Sprite_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Sprite" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Ball.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABall_Statics::NewProp_Sprite = { "Sprite", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABall, Sprite), Z_Construct_UClass_UPaperSpriteComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABall_Statics::NewProp_Sprite_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABall_Statics::NewProp_Sprite_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABall_Statics::NewProp_Sphere_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Collision" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Ball.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABall_Statics::NewProp_Sphere = { "Sphere", nullptr, (EPropertyFlags)0x00400000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABall, Sphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABall_Statics::NewProp_Sphere_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABall_Statics::NewProp_Sphere_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABall_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABall_Statics::NewProp_Sprite,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABall_Statics::NewProp_Sphere,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABall_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABall>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABall_Statics::ClassParams = {
		&ABall::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABall_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABall_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABall_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABall_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABall()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABall_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABall, 2292814490);
	template<> PONG_API UClass* StaticClass<ABall>()
	{
		return ABall::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABall(Z_Construct_UClass_ABall, &ABall::StaticClass, TEXT("/Script/Pong"), TEXT("ABall"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABall);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
