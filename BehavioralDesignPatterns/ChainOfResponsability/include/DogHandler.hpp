#ifndef DOGHANDLER_HPP
#define DOGHANDLER_HPP

#include "AbstractHandler.hpp"

class DogHandler : public AbstractHandler {
 public:
  std::string Handle(const std::string &request);
};

#endif