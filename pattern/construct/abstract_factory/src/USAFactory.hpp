//
// Created by Helianthus Xie on 2022/10/18.
//

#ifndef PATTERN_ABSTRACT_FACTORY_USA_FACTORY_HPP
#define PATTERN_ABSTRACT_FACTORY_USA_FACTORY_HPP

#include "AbstractFactory.hpp"

class USAFactory : public AbstractFactory {
public:
    ~USAFactory() override = default;

    std::shared_ptr<AbstractApple> createApple() override;

    std::shared_ptr<AbstractBanana> createBanana() override;
};

#endif //PATTERN_ABSTRACT_FACTORY_USA_FACTORY_HPP
