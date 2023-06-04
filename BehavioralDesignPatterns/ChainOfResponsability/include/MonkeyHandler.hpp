#ifndef MONKEYHANDLER_HPP
#define MONKEYHANDLER_HPP

#include "AbstractHandler.hpp"

class MonkeyHandler : public AbstractHandler {
 public:
  std::string Handle(const std::string &request);
};

#endif