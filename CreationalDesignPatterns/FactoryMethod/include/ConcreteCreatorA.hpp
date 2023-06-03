#ifndef CONCRETECREATORA_HPP
#define CONCRETECREATORA_HPP

#include "Creator.hpp"

class ConcreteCreatorA : public Creator {

public:
    std::unique_ptr<IProduct> CreateProduct() override;
};
#endif