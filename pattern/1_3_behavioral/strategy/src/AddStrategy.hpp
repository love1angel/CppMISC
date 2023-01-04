//
// Created by Helianthus Xie on 2023/1/4.
//

#ifndef PATTERN_STRATEGY_ADDSTRATEGY_HPP
#define PATTERN_STRATEGY_ADDSTRATEGY_HPP

#include "Strategy.hpp"

class AddStrategy : public Strategy {
public:
    [[nodiscard]] int compute(int lhs, int rhs) const override
    {
        return lhs + rhs;
    }
};

#endif //PATTERN_STRATEGY_ADDSTRATEGY_HPP
