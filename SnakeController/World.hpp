#include <functional>

class World
{
public:
    World(/* args */);
    ~World();
    bool isPositionOutsideMap(int x, int y) const;
private:
    std::pair<int, int> m_mapDimension;
    std::pair<int, int> m_foodPosition;
};

