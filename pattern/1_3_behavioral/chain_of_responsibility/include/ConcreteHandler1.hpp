//
// Created by Helianthus Xie on 2023/1/14.
//

#ifndef PATTERN_CHAINOFRESPONSIBILITY__CONCRETEHANDLER1_HPP
#define PATTERN_CHAINOFRESPONSIBILITY__CONCRETEHANDLER1_HPP

#include "Handler.hpp"

class ConcreteHandler1 : public Handler {
public:
    int handleRequest(int request) const override
    {
        if (request == 1) {
            return 1;
        }
        if (auto ptr = m_handler.lock()) {
            return ptr->handleRequest(request);
        }
        return 1;
    }
};

#endif //PATTERN_CHAINOFRESPONSIBILITY__CONCRETEHANDLER1_HPP
