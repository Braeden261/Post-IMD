// Fill out your copyright notice in the Description page of Project Settings.


#include "ComponentFunctions.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"

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

//AS 8/3/2020
//https://forums.unrealengine.com/development-discussion/c-gameplay-programming/50366-find-files-by-extension-ifilemanager-findfilesrecursive
//@starting Path is relative to the project's base folder
void UComponentFunctions::findFilePathFromName(const FString startingPath, const FString fileName, FString& outName) {

	//get NPC path
	FString fp = FPaths::ConvertRelativePathToFull(FPaths::ProjectContentDir()) / startingPath / "";

	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, *fp);

	//get the file manager
	IFileManager & fm = IFileManager::Get();

	//the output list of files it finds
	TArray<FString> files;

	//recursively looks at every single file and folder, looking for this file

	//not sure why * is needed on these strings...
	fm.FindFilesRecursive(files, *fp, *fileName, true, false, false);

	//log the num of files found
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::FromInt(files.Num()));

	//go thru each item and do something with it

	for (int8 i = 0; i < files.Num(); i++) {

		if (files.IsValidIndex(i)) {
			//output first one
			outName = files[i];

			//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, files[i]);
			break;
		}
	}

}

void UComponentFunctions::OpenFilepathAndOutputDialogueStruct(const FString filepath, FNewDialogueStructure& output, const int row) {

	//UE4 c++ makes no sense to me. why cant i create a filehelper object?
	//FFileHelper fh = new FFileHelper();

	//if anything is empty then leave early
	

	FString fileOutput;

	FFileHelper::LoadFileToString(fileOutput, *filepath);

	//parse fileoutput
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, fileOutput);

	output = processCSVToDialogueStruct(fileOutput, row);
}

FNewDialogueStructure UComponentFunctions::processCSVToDialogueStruct(const FString fstream, const int row) {
	
	FNewDialogueStructure tempStruct;

	//process the text manually lmao

	TArray<FString> headerList;
	
	bool header = true;
	int rowCount = 1;

	//go through each element in the array
	for (int charIndex = 0; charIndex <= fstream.Len(); charIndex++) {
		
		//if its the first row
		if (header) {
			
			FString tempVal = "";

			//peek ahead until it finds a comma, while constructing the current val
			while (fstream[charIndex] != *"," || fstream[charIndex] != *LINE_TERMINATOR) {
				
				tempVal.AppendChar(fstream[charIndex]);
				GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, *tempVal);
				//augment our base iteration
				charIndex++;
			}

			headerList.Add(tempVal);
		}

		//found the row! now parse then store contents
		else if (rowCount == row) {
			
			FString tempVal = "";

			//peek ahead until it finds a comma, while constructing the current val
			while(fstream[charIndex] != *"," || fstream[charIndex] != *LINE_TERMINATOR) {
				tempVal.AppendChar(fstream[charIndex]);
				charIndex++;
			}
			
			//first arg is the member of the struct, second is the value, third is the struct to change
			addToStruct(headerList[row], tempVal, tempStruct);

		}

		//count adds when it finds a break line
		if (fstream[charIndex] == *LINE_TERMINATOR) {
			rowCount++;

			//ternary operator lmao
			//if header is true, then switch it to false
			header == true ? header = false : false;
		}
	}

	return tempStruct;
}

//CRINGE I KNOW BUT I WANTED TO 'DNAMICALLY' REFERENCE A STRUCT VARIABLE BASED ON STRING NAME
void UComponentFunctions::addToStruct(const FString name, const FString value, FNewDialogueStructure& output) {
	if (name == "ROW_ID")
		output.ROW_ID = FCString::Atof(*value);
	else if (name == "SELECTION_ID")
		output.SELECTION_ID = FCString::Atof(*value);
	else if (name == "PROGRESSION_ID")
		output.PROGRESSION_ID = FCString::Atof(*value);
	else if (name == "LINE_ID")
		output.LINE_ID = FCString::Atof(*value);
	else if (name == "Text")
		output.Text = FText::FromString(value);
	else if (name == "GOTO_PROGRESSION")
		output.GOTO_PROGRESSION = FCString::Atof(*value);
	else if (name == "GOTO_SELECTION")
		output.GOTO_SELECTION = FCString::Atof(*value);
	else if (name == "GOTO_LINE")
		output.GOTO_LINE = FCString::Atof(*value);
	else if (name == "Exit")
		output.Exit = value.ToBool();
	else if (name == "Time")
		output.Time = FCString::Atof(*value);
	else if (name == "Audio")
		output.Audio = value;
}