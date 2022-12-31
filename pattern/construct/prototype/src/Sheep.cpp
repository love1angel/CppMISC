//
// Created by Helianthus Xie on 2022/12/31.
//

#include "Sheep.hpp"
#include <iostream>

void Sheep::makeSound() const
{
    std::cout << "baa" << std::endl;
}

std::unique_ptr<Animal> Sheep::clone() const
{
    return std::make_unique<Sheep>(*this);
}
