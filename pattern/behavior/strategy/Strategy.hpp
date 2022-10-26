//
// Created by Helianthus Xie on 2022/10/24.
//

#ifndef PATTERN_STRATEGY_HPP
#define PATTERN_STRATEGY_HPP

class Strategy {
public:
    virtual ~Strategy() = default;

    virtual int doSth(int a, int b) = 0;
};

#endif //PATTERN_STRATEGY_HPP
