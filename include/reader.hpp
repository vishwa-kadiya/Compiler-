#pragma once
#include <string>
#include <vector>
#include <optional>
#include <filesystem>

namespace Reader
{
     std::optional<std::vector<std::string>> Read(const std::filesystem::path& FilePath);
}
