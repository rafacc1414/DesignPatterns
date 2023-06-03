#ifndef CONCRETECREATORB_HPP
#define CONCRETECREATORB_HPP

#include "Creator.hpp"

class ConcreteCreatorB : public Creator {

public:
    std::unique_ptr<IProduct> CreateProduct() override;
};
#endif