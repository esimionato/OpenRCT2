#pragma region Copyright (c) 2014-2017 OpenRCT2 Developers
/*****************************************************************************
 * OpenRCT2, an open source clone of Roller Coaster Tycoon 2.
 *
 * OpenRCT2 is the work of many authors, a full list can be found in contributors.md
 * For more information, visit https://github.com/OpenRCT2/OpenRCT2
 *
 * OpenRCT2 is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * A full copy of the GNU General Public License can be found in licence.txt
 *****************************************************************************/
#pragma endregion

#pragma once

#include <string>
#include <string_view>
#include <vector>
#include "../common.h"

namespace File
{
    bool Exists(const std::string &path);
    bool Copy(const std::string &srcPath, const std::string &dstPath, bool overwrite);
    bool Delete(const std::string &path);
    bool Move(const std::string &srcPath, const std::string &dstPath);
    std::vector<uint8> ReadAllBytes(const std::string_view& path);
    void WriteAllBytes(const std::string &path, const void * buffer, size_t length);
    std::vector<std::string> ReadAllLines(const std::string &path);
    uint64 GetLastModified(const std::string &path);
} // namespace File
