#include "utility.h"

void Utility::PrintCurrentWorkingDirectory()
{
    std::filesystem::path cwd = std::filesystem::current_path();
    std::println("Current working directory: {}", cwd.string());
}