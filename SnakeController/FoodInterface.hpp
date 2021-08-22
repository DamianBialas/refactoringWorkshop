#pragma once

#include <cstdint>

struct FoodInd
{
    static constexpr std::uint32_t MESSAGE_ID = 0x40;

    int x;
    int y;
};

struct FoodReq
{
    static constexpr std::uint32_t MESSAGE_ID = 0x41;
};

struct FoodResp
{
    static constexpr std::uint32_t MESSAGE_ID = 0x42;

    int x;
    int y;
};