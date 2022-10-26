//
// Created by Helianthus Xie on 2022/10/26.
//

#include <gtest/gtest.h>

#include "Strategy.hpp"
#include "Context.hpp"
#include "AddStrategy.hpp"
#include "SubStrategy.hpp"

TEST(Strategy, init)
{
    Context addContext(std::make_shared<AddStrategy>());
    EXPECT_EQ(10, addContext.doIt(3, 7));
    Context subContext(std::make_shared<SubStrategy>());
    EXPECT_EQ(10, subContext.doIt(15, 5));
}
