#ifndef SQUAREPEGROUNDPEGADAPTER_HPP
#define SQUAREPEGROUNDPEGADAPTER_HPP

#include "RoundPeg.hpp"
#include "SquarePeg.hpp"

#include "memory"

class SquarePegRoundPegAdapter : public RoundPeg {
private:
    SquarePeg m_peg;

public:
    SquarePegRoundPegAdapter(SquarePeg &peg) : m_peg(peg), RoundPeg(0) {}
    int GetRadius() const override;
};
#endif