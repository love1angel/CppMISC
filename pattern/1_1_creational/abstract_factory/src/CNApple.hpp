//
// Created by Helianthus Xie on 2022/10/18.
//

#ifndef PATTERN_ABSTRACT_FACTORY_CN_APPLE_HPP
#define PATTERN_ABSTRACT_FACTORY_CN_APPLE_HPP

#include "AbstractApple.hpp"

class CNApple : public AbstractApple {
public:
    ~CNApple() override = default;

    int getAppleName() override
    {
        return 0;
    }
};

#endif //PATTERN_ABSTRACT_FACTORY_CN_APPLE_HPP
