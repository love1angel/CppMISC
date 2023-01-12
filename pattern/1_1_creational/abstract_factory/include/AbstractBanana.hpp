//
// Created by Helianthus Xie on 2022/10/18.
//

#ifndef PATTERN_ABSTRACTFACTORY__ABSTRACTBANANA_HPP
#define PATTERN_ABSTRACTFACTORY__ABSTRACTBANANA_HPP

class AbstractBanana {
public:
    virtual ~AbstractBanana() = default;

    virtual int getBananaName() = 0;
};

#endif //PATTERN_ABSTRACTFACTORY__ABSTRACTBANANA_HPP
