//
// Created by Helianthus Xie on 2022/10/12.
//

#include <gtest/gtest.h>

#include "Factory.hpp"

TEST(Factory, init)
{
    auto ptr = std::make_shared<ConcreteFactory>();
    auto product = ptr->createProduct();

    EXPECT_TRUE(product->doSth());
}
