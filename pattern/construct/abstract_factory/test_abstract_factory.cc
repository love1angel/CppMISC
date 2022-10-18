//
// Created by Helianthus Xie on 2022/10/18.
//

#include "gtest/gtest.h"

#include "AbstractFactory.hpp"
#include "AbstractApple.hpp"
#include "AbstractBanana.hpp"
#include "CNFactory.hpp"
#include "USAFactory.hpp"

TEST(AbstractFactory, init)
{
    AbstractFactory *abstract_factory = new CNFactory();
    auto cn_apple = abstract_factory->createApple();
    auto cn_banana = abstract_factory->createBanana();
    EXPECT_EQ(0, cn_apple->getAppleName());
    EXPECT_EQ(1, cn_banana->getBananaName());
    delete abstract_factory;

    abstract_factory = new USAFactory();
    auto usa_apple = abstract_factory->createApple();
    auto usa_banana = abstract_factory->createBanana();
    EXPECT_EQ(3, usa_apple->getAppleName());
    EXPECT_EQ(4, usa_banana->getBananaName());
    delete abstract_factory;
}

