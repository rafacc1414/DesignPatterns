#include "ConcreteCreatorB.hpp"
#include "ConcreteProductB.hpp"
#include <memory>

std::unique_ptr<IProduct> ConcreteCreatorB::CreateProduct() {
    std::unique_ptr<IProduct> product_b(new ConcreteProductB);
    return product_b;
}