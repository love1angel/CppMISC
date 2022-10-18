//
// Created by Helianthus Xie on 2022/10/18.
//

#ifndef PATTERN_ABSTRACT_FACTORY_CN_BANANA_HPP
#define PATTERN_ABSTRACT_FACTORY_CN_BANANA_HPP

#include "AbstractBanana.hpp"

class CNBanana : public AbstractBanana {
public:
    ~CNBanana() override = default;

    int getBananaName() override
    {
        return 1;
    }
};

#endif //PATTERN_ABSTRACT_FACTORY_CN_BANANA_HPP
