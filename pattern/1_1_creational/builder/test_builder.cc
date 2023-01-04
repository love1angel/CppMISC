//
// Created by Helianthus Xie on 2022/10/19.
//

#include <gtest/gtest.h>

#include "Builder.hpp"
#include "Director.hpp"
#include "Product.hpp"

#include "src/ConcreteBuilder.hpp"

TEST(Builder, init)
{
    std::shared_ptr<Builder> builder = std::make_shared<ConcreteBuilder>();

    auto directer = std::make_shared<Director>();

    auto ret = directer->buildProduct(builder);

    EXPECT_EQ(true, ret->getAvailable());
}
