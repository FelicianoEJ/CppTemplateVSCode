#include <print>
#include <filesystem>

int main(int argc, char const *argv[])
{
    std::filesystem::path cwd = std::filesystem::current_path();
    std::println("Current working directory: {}", cwd.string());
    return 0;
}
