//
// Created by Helianthus Xie on 2023/1/4.
//

#ifndef PATTERN_STRATEGY_STRATEGY_HPP
#define PATTERN_STRATEGY_STRATEGY_HPP

class Strategy {
public:
    virtual ~Strategy() = default;

    virtual int compute(int lhs, int rhs) const = 0;
};

#endif //PATTERN_STRATEGY_STRATEGY_HPP
