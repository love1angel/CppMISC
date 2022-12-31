//
// Created by Helianthus Xie on 2022/10/19.
//

#include <gtest/gtest.h>

#include "Animal.hpp"
#include "Sheep.hpp"

TEST(ProtoType, init)
{
    std::unique_ptr<Animal> dolly = std::make_unique<Sheep>("Dolly");
    std::unique_ptr<Animal> dolly_clone = dolly->clone();

    dolly->makeSound();
    dolly_clone->makeSound();
}
