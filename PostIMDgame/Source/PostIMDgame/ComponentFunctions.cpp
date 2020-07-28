// Fill out your copyright notice in the Description page of Project Settings.


#include "ComponentFunctions.h"

USceneComponent* UComponentFunctions::AddComponentToObject(UClass * componentClass, AActor * parent){

	if(componentClass==NULL||parent==NULL){
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("Either the componentClass or parent is NULL. Returning NULL."));
		return NULL;
	}
	USceneComponent* newComponent = NewObject<USceneComponent>(parent, componentClass);
	if(!newComponent){
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("New Object is null. Returning NULL."));
		return NULL;
	}
	newComponent->RegisterComponent();
	newComponent-> AttachToComponent(parent->GetRootComponent(), FAttachmentTransformRules::SnapToTargetNotIncludingScale);
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("Component "+newComponent->GetName()+" has been added to "+parent->GetName()));
	return newComponent;
}
