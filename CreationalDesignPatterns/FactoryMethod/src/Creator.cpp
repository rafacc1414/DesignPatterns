#include "Creator.hpp"

std::string Creator::SomeOperation() {
    /* Create the product */
    std::unique_ptr<IProduct> product = this->CreateProduct();

    /* Now we use the product */
    product->DoStuff();

    return "Operation Completed!";
}