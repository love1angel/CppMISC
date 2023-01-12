//
// Created by Helianthus Xie on 2022/10/19.
//

// this file is factory, made for provider factory to client(UT)

#ifndef PATTERN_ABSTRACTFACTORY__DOMAINFACTORY_HPP
#define PATTERN_ABSTRACTFACTORY__DOMAINFACTORY_HPP

#include <memory>

class AbstractFactory;

std::shared_ptr<AbstractFactory> createCNFactory();

std::shared_ptr<AbstractFactory> createUSAFactory();

#endif //PATTERN_ABSTRACTFACTORY__DOMAINFACTORY_HPP
