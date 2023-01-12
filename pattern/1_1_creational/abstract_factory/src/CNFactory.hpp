//
// Created by Helianthus Xie on 2022/10/18.
//

#ifndef PATTERN_ABSTRACTFACTORY__CNFACTORY_HPP
#define PATTERN_ABSTRACTFACTORY__CNFACTORY_HPP

#include "AbstractFactory.hpp"

class CNFactory : public AbstractFactory {
public:
    ~CNFactory() override = default;

    std::shared_ptr<AbstractApple> createApple() override;

    std::shared_ptr<AbstractBanana> createBanana() override;
};

#endif //PATTERN_ABSTRACTFACTORY__CNFACTORY_HPP
