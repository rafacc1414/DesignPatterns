#include "AbstractHandler.hpp"

std::shared_ptr<IHandler>
AbstractHandler::SetNext(std::shared_ptr<IHandler> handler)
{
    m_next_handler = handler;
    return handler;
}

std::string
AbstractHandler::Handle(const std::string &request)
{
    if (m_next_handler) {
        return m_next_handler->Handle(request);
    }

    return {};
}