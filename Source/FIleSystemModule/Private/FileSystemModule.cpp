#include "CoreMinimal.h"


#define LOCTEXT_NAMESPACE "FFileSystemModule"

void StartupModule()
{
    // Kod uruchamiany podczas startu modu³u
    UE_LOG(LogTemp, Warning, TEXT("FileSystemModule: Module Started"));
}

void ShutdownModule()
{
    // Kod uruchamiany podczas zamykania modu³u
    UE_LOG(LogTemp, Warning, TEXT("FileSystemModule: Module Shutdown"));
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FFileSystemModule, FileSystemModule)
