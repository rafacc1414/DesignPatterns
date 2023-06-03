#include "RoundHole.hpp"
#include "RoundPeg.hpp"

int RoundHole::GetRadius() const {
    return m_radius;
}

bool RoundHole::fits(RoundPeg &peg) const {
    bool result = m_radius >= peg.GetRadius();
    return result;
}