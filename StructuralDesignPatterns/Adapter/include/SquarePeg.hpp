#ifndef SQUAREPEG_HPP
#define SQUAREPEG_HPP

class SquarePeg {
    
private:
    int m_width;

public:
    SquarePeg(int width) : m_width{width} {}
    int GetWidth() const;
};
#endif