#pragma once
#include "Segments.hpp"

bool Segments::isSegmentAtPosition(int x, int y) const
{
    return m_segments.end() !=  std::find_if(m_segments.cbegin(), m_segments.cend(),
        [x, y](auto const& segment){ return segment.x == x and segment.y == y; });
}

std::list<Segment> Segments::getSegments()
{
    return m_segments;
}