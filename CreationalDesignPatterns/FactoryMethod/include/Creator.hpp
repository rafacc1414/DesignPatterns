#ifndef CREATOR_HPP
#define CREATOR_HPP

#include "IProduct.hpp"
#include <memory>
#include <string>

class Creator {

public:
    /* This is the factory method */
    virtual std::unique_ptr<IProduct> CreateProduct() = 0; 

    /* Core bussiness logic */
    std::string SomeOperation(); 
};
#endif