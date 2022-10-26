//
// Created by Helianthus Xie on 2022/10/24.
//

#ifndef PATTERN_CONTEXT_HPP
#define PATTERN_CONTEXT_HPP

#include <memory>
#include "SubStrategy.hpp"

class Context {
public:
    Context(std::shared_ptr<Strategy> strategy)
            : m_strategy(strategy)
    {}

    int doIt(int a, int b)
    {
        return m_strategy->doSth(a, b);
    }

private:
    std::shared_ptr<Strategy> m_strategy;
};

#endif //PATTERN_CONTEXT_HPP
