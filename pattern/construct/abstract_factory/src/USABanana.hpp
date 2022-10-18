//
// Created by Helianthus Xie on 2022/10/18.
//

#ifndef PATTERN_ABSTRACT_FACTORY_USA_BANANA_HPP
#define PATTERN_ABSTRACT_FACTORY_USA_BANANA_HPP

#include "AbstractBanana.hpp"

class USABanana : public AbstractBanana {
public:
    ~USABanana() override = default;

    int getBananaName() override
    {
        return 4;
    }
};

#endif //PATTERN_ABSTRACT_FACTORY_USA_BANANA_HPP
