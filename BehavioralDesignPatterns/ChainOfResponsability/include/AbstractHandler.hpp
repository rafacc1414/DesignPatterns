#ifndef ABSTRACTHANDLER_HPP
#define ABSTRACTHANDLER_HPP

#include "IHandler.hpp"
#include <memory>

class AbstractHandler : public IHandler {
 private:
  std::shared_ptr<IHandler> m_next_handler;

 public:
  AbstractHandler() : m_next_handler(nullptr) { }

  std::shared_ptr<IHandler> SetNext(std::shared_ptr<IHandler> handler) override;
  
  std::string Handle(const std::string &request) override;
};

#endif