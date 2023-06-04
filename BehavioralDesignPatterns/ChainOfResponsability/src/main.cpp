#include "DogHandler.hpp"
#include "MonkeyHandler.hpp"
#include "SquirrelHandler.hpp"
#include "IHandler.hpp"

#include <memory.h>
#include <string>
#include <vector>
#include <iostream>

void ClientCode(IHandler &handler) {
  std::vector<std::string> food = {"Nut", "Banana", "Cup of coffee"};
  for (const std::string &f : food) {
    std::cout << "Client: Who wants a " << f << "?\n";
    const std::string result = handler.Handle(f);
    if (!result.empty()) {
      std::cout << "  " << result;
    } else {
      std::cout << "  " << f << " was left untouched.\n";
    }
  }
}

int main() {

    
    std::shared_ptr<MonkeyHandler> monkey(new MonkeyHandler);
    std::shared_ptr<SquirrelHandler> squirrel(new SquirrelHandler);
    std::shared_ptr<DogHandler> dog(new DogHandler);
    
    /* Stablish the chain */
    monkey->SetNext(squirrel)->SetNext(dog);

    std::cout << "Chain: Monkey > Squirrel > Dog\n\n";
    ClientCode(*monkey);
    std::cout << "\n";
    std::cout << "Subchain: Squirrel > Dog\n\n";
    ClientCode(*squirrel);

    return 0;
}