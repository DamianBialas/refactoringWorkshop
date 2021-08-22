#include <list>
#include <algorithm>
struct Segment
{
     int x;
     int y;
};
class Segments
{
public:
    Segments(/* args */);
    ~Segments();
    bool isSegmentAtPosition(int x, int y) const;
    void updateSegmentsIfSuccessfullMove(Segment const& newHead);
    void addHeadSegment(Segment const& newHead);
    void removeTailSegmentIfNotScored(Segment const& newHead);
    void removeTailSegment();
    std::list<Segment> getSegments();
private:
    std::list<Segment> m_segments;
};

