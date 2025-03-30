module;

#include "CoreMinimal.h"

module FileSystem;

namespace FileSystemUtils
{
    std::vector<std::string> GetFilesInDirectory(const std::string& DirectoryPath)
    {
        std::vector<std::string> FileList;
        std::filesystem::path DirPath = DirectoryPath;

        if (std::filesystem::exists(DirPath) && std::filesystem::is_directory(DirPath))
        {
            auto dir_entries = std::filesystem::directory_iterator(DirPath);

            auto filtered_entries = dir_entries
                | std::views::filter([](const auto& entry) { return entry.is_regular_file(); })
                | std::views::transform([](const auto& entry) { return entry.path().string(); });

            for (const auto& entry : filtered_entries)
            {
                FileList.push_back(entry);
            }
        }

        return FileList;
    }
}
