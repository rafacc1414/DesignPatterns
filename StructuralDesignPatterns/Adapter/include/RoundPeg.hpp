#ifndef ROUNDPEG_HPP
#define ROUNDPEG_HPP

class RoundPeg {   
private:
    int m_radius;

public:
    RoundPeg(int radius) : m_radius{radius} {}
    virtual int GetRadius() const;
};
#endif