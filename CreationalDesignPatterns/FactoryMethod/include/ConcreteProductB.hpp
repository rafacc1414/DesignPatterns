#ifndef CONCRETEPRODUCTB_HPP
#define CONCRETEPRODUCTB_HPP

#include "IProduct.hpp"

class ConcreteProductB : public IProduct {

public:
    void DoStuff() override;
};
#endif