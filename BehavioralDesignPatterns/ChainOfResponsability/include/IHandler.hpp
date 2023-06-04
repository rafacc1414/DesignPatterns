#ifndef IHANDLER_HPP
#define IHANDLER_HPP

#include <string>
#include <memory>

class IHandler {
 public:
  virtual std::shared_ptr<IHandler> SetNext(std::shared_ptr<IHandler> handler) = 0;
  virtual std::string Handle(const std::string &request) = 0;
};

#endif