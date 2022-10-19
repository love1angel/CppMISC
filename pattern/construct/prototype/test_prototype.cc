//
// Created by Helianthus Xie on 2022/10/19.
//

#include <gtest/gtest.h>

#include "ProtoType.hpp"
#include "ObjFactory.hpp"

TEST(ProtoType, init)
{
    // type1 should be given from others, not from createPrototype(), we should just receive class Prototype
    std::shared_ptr<ProtoType> type1 = createPrototype();
    auto type2 = type1->clone();

    EXPECT_EQ(1, type1.use_count());

    EXPECT_EQ(1, type2.use_count());

    EXPECT_NE(type1.get(), type2.get());
}
