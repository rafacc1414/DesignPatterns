#include "RoundPeg.hpp"
#include "RoundHole.hpp"
#include "SquarePeg.hpp"
#include "SquarePegRoundPegAdapter.hpp"

#include <iostream>
#include <memory>

int main() {

    std::printf("The square adapter program to fits in round holes\n");

    std::printf("Create a round hole of radius: 10\n");
    RoundHole round_hole = RoundHole(10);

    std::printf("Create a square of width: 50\n");
    auto square_peg = std::unique_ptr<SquarePeg>(new SquarePeg(50));
    auto square_round_adapter = std::unique_ptr<SquarePegRoundPegAdapter>(new SquarePegRoundPegAdapter(*square_peg));
    
    bool result = round_hole.fits(*square_round_adapter);
    std::printf("The square fits in the hole? : %s\n", result ? "true" : "false");

    std::printf("Create a square of width: 5\n");
    auto square_peg2 = std::unique_ptr<SquarePeg>(new SquarePeg(5));
    auto square_round_adapter2 = std::unique_ptr<SquarePegRoundPegAdapter>(new SquarePegRoundPegAdapter(*square_peg2));
    
    bool result2 = round_hole.fits(*square_round_adapter2);
    std::printf("The square fits in the hole? : %s\n", result2 ? "true" : "false");

    return 0;
}