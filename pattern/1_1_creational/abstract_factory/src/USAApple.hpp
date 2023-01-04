//
// Created by Helianthus Xie on 2022/10/18.
//

#ifndef PATTERN_ABSTRACT_FACTORY_USA_APPLE_HPP
#define PATTERN_ABSTRACT_FACTORY_USA_APPLE_HPP

#include "AbstractApple.hpp"

class USAApple : public AbstractApple {
public:
    ~USAApple() override = default;

    int getAppleName() override
    {
        return 3;
    }
};

#endif //PATTERN_ABSTRACT_FACTORY_USA_APPLE_HPP
