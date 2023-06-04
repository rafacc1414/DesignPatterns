#ifndef SQUIRRELHANDLER_HPP
#define SQUIRRELHANDLER_HPP

#include "AbstractHandler.hpp"

class SquirrelHandler : public AbstractHandler {
 public:
  std::string Handle(const std::string &request);
};

#endif