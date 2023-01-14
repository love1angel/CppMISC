//
// Created by Helianthus Xie on 2023/1/14.
//

#ifndef PATTERN_CHAINOFRESPONSIBILITY__HANDLER_HPP
#define PATTERN_CHAINOFRESPONSIBILITY__HANDLER_HPP

#include <memory>

class Handler {
public:
    virtual ~Handler() = default;

    void setHandler(std::weak_ptr<Handler> handler)
    {
        m_handler = handler;
    }

    virtual int handleRequest(int request) const = 0;

protected:
    std::weak_ptr<Handler> m_handler;
};

#endif //PATTERN_CHAINOFRESPONSIBILITY__HANDLER_HPP
