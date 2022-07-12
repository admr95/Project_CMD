// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../CMDGameInstance.h" // 2022.07.07 kdh ��� ĳ���Ͱ� ���� �ν��Ͻ��� ���ٰ����ϰ� �Ѵ�
#include "GameFramework/Character.h"
#include "CMDCharacterBase.generated.h"

UCLASS(Abstract) // 2022.07.07 kdh Ŭ���� �߻�ȭ
class PROJECT_CMD_API ACMDCharacterBase : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ACMDCharacterBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
