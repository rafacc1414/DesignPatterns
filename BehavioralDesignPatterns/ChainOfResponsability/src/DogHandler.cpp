#include "DogHandler.hpp"

std::string DogHandler::Handle(const std::string &request) {
  if (request == "MeatBall") {
    return "Dog: I'll eat the " + request + ".\n";
  } else {
    return AbstractHandler::Handle(request);
  }
}