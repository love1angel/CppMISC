//
// Created by Helianthus Xie on 2022/10/19.
//

#include "DomainFactory.hpp"

#include "src/CNFactory.hpp"
#include "src/USAFactory.hpp"

std::shared_ptr<AbstractFactory> createCNFactory()
{
    return std::make_shared<CNFactory>();
}

std::shared_ptr<AbstractFactory> createUSAFactory()
{
    return std::make_shared<USAFactory>();
}
