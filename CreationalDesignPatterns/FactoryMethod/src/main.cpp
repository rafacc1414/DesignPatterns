#include "ConcreteCreatorA.hpp"
#include "ConcreteCreatorB.hpp"
#include <iostream>

int main()
{
    {
        std::printf("App: Launched with the ConcreteCreatorA.\n");
        std::unique_ptr<ConcreteCreatorA> a_creators(new ConcreteCreatorA());

        /* Business logic which is common to all creators */
        a_creators->SomeOperation();

        /* We can also create A products */
        auto product_a = a_creators->CreateProduct();
        product_a->DoStuff();
    }

    {
        std::printf("App: Launched with the ConcreteCreatorB.\n");
        std::unique_ptr<ConcreteCreatorB> b_creators(new ConcreteCreatorB());

        /* Business logic which is common to all creators */
        b_creators->SomeOperation();

        /* We can also create A products */
        auto product_b = b_creators->CreateProduct();
        product_b->DoStuff();
    }


    return 0;
}