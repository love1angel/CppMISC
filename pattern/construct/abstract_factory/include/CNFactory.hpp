//
// Created by Helianthus Xie on 2022/10/18.
//

#ifndef PATTERN_ABSTRACT_FACTORY_CN_FACTORY_HPP
#define PATTERN_ABSTRACT_FACTORY_CN_FACTORY_HPP

#include "AbstractFactory.hpp"

class CNFactory : public AbstractFactory {
public:
    ~CNFactory() override = default;

    std::shared_ptr<AbstractApple> createApple() override;

    std::shared_ptr<AbstractBanana> createBanana() override;
};

#endif //PATTERN_ABSTRACT_FACTORY_CN_FACTORY_HPP
