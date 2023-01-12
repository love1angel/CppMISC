//
// Created by Helianthus Xie on 2022/10/26.
//

#include <gtest/gtest.h>

#include "Context.hpp"
#include "src/AddStrategy.hpp"
#include "src/SubStrategy.hpp"

TEST(Strategy, init)
{
    // this construct should use like factory to create
    Context context1(std::make_unique<AddStrategy>());
    EXPECT_EQ(1, context1.compute(-7, 8));

    Context context2(std::make_unique<SubStrategy>());
    EXPECT_EQ(-15, context2.compute(-7, 8));
}
