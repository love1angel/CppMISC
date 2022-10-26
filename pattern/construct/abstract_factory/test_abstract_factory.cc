//
// Created by Helianthus Xie on 2022/10/18.
//

#include "gtest/gtest.h"

#include "AbstractFactory.hpp"
#include "AbstractApple.hpp"
#include "AbstractBanana.hpp"
#include "DomainFactory.hpp"

TEST(AbstractFactory, init)
{
    std::shared_ptr<AbstractFactory> abstract_factory;
    std::shared_ptr<AbstractApple> abstract_apple;
    std::shared_ptr<AbstractBanana> abstract_banana;

    // for CN product
    // createCNFactory() should be given from others, we should just receive class AbstractFactory
    // rather than create by us/client
    abstract_factory = createCNFactory();
    abstract_apple = abstract_factory->createApple();
    abstract_banana = abstract_factory->createBanana();
    EXPECT_EQ(0, abstract_apple->getAppleName());
    EXPECT_EQ(1, abstract_banana->getBananaName());

    // for USA product
    abstract_factory = createUSAFactory();
    abstract_apple = abstract_factory->createApple();
    abstract_banana = abstract_factory->createBanana();
    EXPECT_EQ(3, abstract_apple->getAppleName());
    EXPECT_EQ(4, abstract_banana->getBananaName());
}
