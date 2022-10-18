//
// Created by Helianthus Xie on 2022/10/18.
//

#ifndef PATTERN_ABSTRACT_FACTORY_ABSTRACT_BANANA_HPP
#define PATTERN_ABSTRACT_FACTORY_ABSTRACT_BANANA_HPP

class AbstractBanana {
public:
    virtual ~AbstractBanana() = default;

    virtual int getBananaName() = 0;
};

#endif //PATTERN_ABSTRACT_FACTORY_ABSTRACT_BANANA_HPP
