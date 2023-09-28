// Fill out your copyright notice in the Description page of Project Settings.


#include "AWSGAActorTest.h"
#include <aws/core/Aws.h>

// Sets default values
AAWSGAActorTest::AAWSGAActorTest()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAWSGAActorTest::BeginPlay()
{
	Super::BeginPlay();
	Aws::SDKOptions options;
	Aws::InitAPI(options);
	// do something with API
	Aws::ShutdownAPI(options);
	
}

// Called every frame
void AAWSGAActorTest::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

