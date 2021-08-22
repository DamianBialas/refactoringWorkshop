#pragma once

#include <cstdint>
#include "Cell.hpp"

namespace Snake
{
enum Direction
{
    Direction_UP    = 0b00,
    Direction_DOWN  = 0b10,
    Direction_LEFT  = 0b01,
    Direction_RIGHT = 0b11
};

struct DirectionInd
{
    static constexpr std::uint32_t MESSAGE_ID = 0x10;

    Direction direction;
};
struct DisplayInd
{
    static constexpr std::uint32_t MESSAGE_ID = 0x30;

    int x;
    int y;
    Cell value;
};
}