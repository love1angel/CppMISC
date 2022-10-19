//
// Created by Helianthus Xie on 2022/10/19.
//

// this file is factory, made for provider factory to client(UT)

#ifndef PATTERN_ABSTRACT_FACTORY_DOMAIN_FACTORY_HPP
#define PATTERN_ABSTRACT_FACTORY_DOMAIN_FACTORY_HPP

#include <memory>

class AbstractFactory;

std::shared_ptr<AbstractFactory> createCNFactory();

std::shared_ptr<AbstractFactory> createUSAFactory();

#endif //PATTERN_ABSTRACT_FACTORY_DOMAIN_FACTORY_HPP
