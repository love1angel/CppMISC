//
// Created by Helianthus Xie on 2022/10/18.
//

#ifndef PATTERN_ABSTRACTFACTORY__USAAPPLE_HPP
#define PATTERN_ABSTRACTFACTORY__USAAPPLE_HPP

#include "AbstractApple.hpp"

class USAApple : public AbstractApple {
public:
    ~USAApple() override = default;

    int getAppleName() override
    {
        return 3;
    }
};

#endif //PATTERN_ABSTRACTFACTORY__USAAPPLE_HPP
