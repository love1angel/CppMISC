//
// Created by Helianthus Xie on 2022/10/18.
//

#ifndef PATTERN_ABSTRACTFACTORY__USAFACTORY_HPP
#define PATTERN_ABSTRACTFACTORY__USAFACTORY_HPP

#include "AbstractFactory.hpp"

class USAFactory : public AbstractFactory {
public:
    ~USAFactory() override = default;

    std::shared_ptr<AbstractApple> createApple() override;

    std::shared_ptr<AbstractBanana> createBanana() override;
};

#endif //PATTERN_ABSTRACTFACTORY__USAFACTORY_HPP
