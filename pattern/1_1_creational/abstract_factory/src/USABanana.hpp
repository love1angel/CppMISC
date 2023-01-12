//
// Created by Helianthus Xie on 2022/10/18.
//

#ifndef PATTERN_ABSTRACTFACTORY__USABANANA_HPP
#define PATTERN_ABSTRACTFACTORY__USABANANA_HPP

#include "AbstractBanana.hpp"

class USABanana : public AbstractBanana {
public:
    ~USABanana() override = default;

    int getBananaName() override
    {
        return 4;
    }
};

#endif //PATTERN_ABSTRACTFACTORY__USABANANA_HPP
