//
// Created by Helianthus Xie on 2022/10/18.
//

#include "USAFactory.hpp"

#include "USAApple.hpp"
#include "USABanana.hpp"

std::shared_ptr<AbstractApple> USAFactory::createApple()
{
    return std::make_shared<USAApple>();
}

std::shared_ptr<AbstractBanana> USAFactory::createBanana()
{
    return std::make_shared<USABanana>();
}
