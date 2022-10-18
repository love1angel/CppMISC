//
// Created by Helianthus Xie on 2022/10/18.
//

#include "CNFactory.hpp"

#include "CNApple.hpp"
#include "CNBanana.hpp"

std::shared_ptr<AbstractApple> CNFactory::createApple()
{
    return std::make_shared<CNApple>();
}

std::shared_ptr<AbstractBanana> CNFactory::createBanana()
{
    return std::make_shared<CNBanana>();
}
