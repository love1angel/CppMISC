//
// Created by Helianthus Xie on 2022/10/12.
//

#ifndef PATTERN_ABSTRACTFACTORY__ABSTRACTFACTORY_HPP
#define PATTERN_ABSTRACTFACTORY__ABSTRACTFACTORY_HPP

#include <memory>

class AbstractApple;

class AbstractBanana;

class AbstractFactory {
public:
    virtual ~AbstractFactory() = default;

    virtual std::shared_ptr<AbstractApple> createApple() = 0;

    virtual std::shared_ptr<AbstractBanana> createBanana() = 0;
};

#endif //PATTERN_ABSTRACTFACTORY__ABSTRACTFACTORY_HPP
