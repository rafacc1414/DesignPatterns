#ifndef CONCRETEPRODUCTA_HPP
#define CONCRETEPRODUCTA_HPP

#include "IProduct.hpp"

class ConcreteProductA : public IProduct {

public:
    void DoStuff() override;
};
#endif