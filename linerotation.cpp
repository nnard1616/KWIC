#include "linerotation.hpp"

bool compare(const lineRotation& x, const lineRotation& y)
{
    string xLower = *(x.secondHalf.begin());
    string yLower = *(y.secondHalf.begin());

    to_lower(xLower);
    to_lower(yLower);
    return xLower < yLower;
}
