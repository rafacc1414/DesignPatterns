#include "SquarePegRoundPegAdapter.hpp"
#include <cmath>

int SquarePegRoundPegAdapter::GetRadius() const {
    int radius = m_peg.GetWidth() * (sqrt(2) / 2);
    return radius;
}
