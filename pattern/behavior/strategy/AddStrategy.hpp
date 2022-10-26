//
// Created by Helianthus Xie on 2022/10/24.
//

#ifndef PATTERN_ADDSTRATEGY_HPP
#define PATTERN_ADDSTRATEGY_HPP

#include "Strategy.hpp"

class AddStrategy : public Strategy {
public:
    ~AddStrategy() override = default;

    int doSth(int a, int b) override
    {
        return a + b;
    }
};

#endif //PATTERN_ADDSTRATEGY_HPP
