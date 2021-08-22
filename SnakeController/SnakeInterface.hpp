#pragma once

#include <cstdint>

namespace Snake
{
struct TimeoutInd
{
    static constexpr std::uint32_t MESSAGE_ID = 0x20;
};

struct ScoreInd
{
    static constexpr std::uint32_t MESSAGE_ID = 0x70;
};

struct LooseInd
{
    static constexpr std::uint32_t MESSAGE_ID = 0x71;
};

} // namespace Snake
