//
// Created by Helianthus Xie on 2022/10/26.
//

#include <gtest/gtest.h>

#include "Context.hpp"

TEST(Strategy, init)
{
    Context context_plus("+");
    EXPECT_EQ(context_plus.compute(1, 2), 3);
    Context context_minus("-");
    EXPECT_EQ(context_minus.compute(3, 2), 1);
}
