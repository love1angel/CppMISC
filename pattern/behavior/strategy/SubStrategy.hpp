//
// Created by Helianthus Xie on 2022/10/24.
//

#ifndef PATTERN_SUB_STRATEGY_HPP
#define PATTERN_SUB_STRATEGY_HPP

#include "Strategy.hpp"

class SubStrategy : public Strategy {
public:
    ~SubStrategy() override = default;

    int doSth(int a, int b) override
    {
        return a - b;
    }

};

#endif //PATTERN_SUB_STRATEGY_HPP
