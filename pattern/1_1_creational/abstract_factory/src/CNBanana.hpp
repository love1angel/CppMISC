//
// Created by Helianthus Xie on 2022/10/18.
//

#ifndef PATTERN_ABSTRACTFACTORY__CNBANANA_HPP
#define PATTERN_ABSTRACTFACTORY__CNBANANA_HPP

#include "AbstractBanana.hpp"

class CNBanana : public AbstractBanana {
public:
    ~CNBanana() override = default;

    int getBananaName() override
    {
        return 1;
    }
};

#endif //PATTERN_ABSTRACTFACTORY__CNBANANA_HPP
