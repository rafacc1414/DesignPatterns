#include "ConcreteCreatorA.hpp"
#include "ConcreteProductA.hpp"
#include <memory>

std::unique_ptr<IProduct> ConcreteCreatorA::CreateProduct() {
    std::unique_ptr<IProduct> product_a(new ConcreteProductA);
    return product_a;
}