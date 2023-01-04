//
// Created by Helianthus Xie on 2023/1/4.
//

#ifndef PATTERN_STRATEGY_SUBSTRATEGY_HPP
#define PATTERN_STRATEGY_SUBSTRATEGY_HPP

#include "Strategy.hpp"

class SubStrategy : public Strategy {
public:

    int compute(int lhs, int rhs) const override
    {
        return lhs - rhs;
    }
};

#endif //PATTERN_STRATEGY_SUBSTRATEGY_HPP
