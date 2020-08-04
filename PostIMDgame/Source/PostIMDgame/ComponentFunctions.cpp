// Fill out your copyright notice in the Description page of Project Settings.


#include "ComponentFunctions.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"
#include "Misc/LocalTimestampDirectoryVisitor.h"

USceneComponent* UComponentFunctions::AddComponentToObject(UClass * componentClass, AActor * parent) {

	if (componentClass == NULL || parent == NULL) {
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("Either the componentClass or parent is NULL. Returning NULL."));
		return NULL;
	}
	USceneComponent* newComponent = NewObject<USceneComponent>(parent, componentClass);
	if (!newComponent) {
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("New Object is null. Returning NULL."));
		return NULL;
	}
	newComponent->RegisterComponent();
	newComponent->AttachToComponent(parent->GetRootComponent(), FAttachmentTransformRules::SnapToTargetNotIncludingScale);
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("Component " + newComponent->GetName() + " has been added to " + parent->GetName()));
	return newComponent;
}

//https://sb1985.com/other-2/editor/how-to-create-a-read-write-system-for-txt-files-c-tutorial/
bool UComponentFunctions::memeload(FString FileName, FString& FinalText) {
	return FFileHelper::LoadFileToString(FinalText, *(FPaths::ProjectDir() + FileName));
}

bool UComponentFunctions::memesave(FString FileText, FString Filename) {
	return FFileHelper::SaveStringToFile(FileText, *(FPaths::ProjectDir() + Filename));
}

//AS 8/3/2020
//https://forums.unrealengine.com/development-discussion/c-gameplay-programming/50366-find-files-by-extension-ifilemanager-findfilesrecursive
void UComponentFunctions::test(const FString fileName, FString& outName) {

	//get NPC path
	FString fp = FPaths::ConvertRelativePathToFull(FPaths::ProjectContentDir()) + "NPC/";

	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, *fp);

	//get the file manager
	IFileManager & fm = IFileManager::Get();

	TArray<FString> files;

	//csv extension type
	TCHAR* csvExt = _T(".csv");

	//recursively looks at every single file and folder, looking for this file
	//fm.FindFiles(files, *fp, csvExt);
	//literally dont understand why tf this doesnt do anything??????
	fm.FindFilesRecursive(files, *fp, csvExt, true, true, false);

	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::FromInt(files.Num()));

	//go thru each item and do something with it

	for (int8 i = 0; i < files.Num(); i++) {

		if (files.IsValidIndex(i)) {
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, files[i]);
		}
	}

}