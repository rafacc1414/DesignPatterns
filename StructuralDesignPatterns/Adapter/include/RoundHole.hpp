#ifndef ROUNDHOLE_HPP
#define ROUNDHOLE_HPP

#include "RoundPeg.hpp"

class RoundHole {
private:
    int m_radius;

public:
    RoundHole(int radius) : m_radius{radius} {}
    int GetRadius() const;
    bool fits(RoundPeg &peg) const;
};
#endif