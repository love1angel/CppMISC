//
// Created by Helianthus Xie on 2022/10/12.
//

#include <gtest/gtest.h>

#include "Singleton.hpp"
#include <future>

TEST(Singleton, init)
{
    auto future1 = std::async(Singleton::get);
    auto future2 = std::async(Singleton::get);

    auto ptr1 = future1.get();
    auto ptr2 = future2.get();

    EXPECT_EQ(ptr1.get(), ptr2.get());
    EXPECT_EQ(3, ptr1.use_count());
    EXPECT_EQ(3, ptr2.use_count());
}
