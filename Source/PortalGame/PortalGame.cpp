// Fill out your copyright notice in the Description page of Project Settings.

#include "PortalGame.h"
#include "Modules/ModuleManager.h"
#include "PlayerCharacter.h"
import FileSystem;


IMPLEMENT_PRIMARY_GAME_MODULE( FDefaultGameModuleImpl, PortalGame, "PortalGame" );

// Przyk³ad u¿ycia
void SomeFunction()
{
    std::string DirectoryPath = "/path/to/directory";
    std::vector<std::string> Files = FileSystemUtils::GetFilesInDirectory(DirectoryPath);

    for (const std::string& File : Files)
    {
        UE_LOG(LogTemp, Log, TEXT("Found file: %s"), *FString(File.c_str()));
    }
}