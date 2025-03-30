export module FileSystem;

import <filesystem>;
import <vector>;
import <string>;
import <ranges>;

export namespace FileSystemUtils
{
    std::vector<std::string> GetFilesInDirectory(const std::string& DirectoryPath);
}
