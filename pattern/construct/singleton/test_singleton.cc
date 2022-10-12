//
// Created by Helianthus Xie on 2022/10/12.
//

//
// Created by Helianthus Xie on 2022/10/12.
//

#include <gtest/gtest.h>

#include "Singleton.hpp"

TEST(Singleton, init)
{
    auto ptr1 = Singleton::get();
    auto ptr2 = Singleton::get();

    EXPECT_EQ(ptr1.get(), ptr2.get());
    EXPECT_EQ(3, ptr1.use_count());
    EXPECT_EQ(3, ptr2.use_count());
}
