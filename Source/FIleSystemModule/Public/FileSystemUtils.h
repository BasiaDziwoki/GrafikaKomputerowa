#ifndef FILESYSTEMUTILS_H
#define FILESYSTEMUTILS_H

#include "CoreMinimal.h"
#include <filesystem>
#include <ranges>

class FILESYSTEMMODULE_API FFileSystemUtils
{
public:
    static TArray<FString> GetFilesInDirectory(const FString& DirectoryPath);
};
#endif // !FILESYSTEMUTILS_H