//
// Created by Helianthus Xie on 2023/1/14.
//

#ifndef PATTERN_CHAINOFRESPONSIBILITY__CONCRETEHANDLER0_HPP
#define PATTERN_CHAINOFRESPONSIBILITY__CONCRETEHANDLER0_HPP

#include "Handler.hpp"

class ConcreteHandler0 : public Handler {
public:
    int handleRequest(int request) const override
    {
        if (request == 0) {
            return 0;
        }
        if (auto ptr = m_handler.lock()) {
            return ptr->handleRequest(request);
        }
        return 0;
    }
};

#endif //PATTERN_CHAINOFRESPONSIBILITY__CONCRETEHANDLER0_HPP
