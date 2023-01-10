//
// Created by Helianthus Xie on 2022/10/12.
//

#include <gtest/gtest.h>

#include "SettingInterface.hpp"
#include "SettingFactory.hpp"

TEST(Factory, init)
{
    auto instance1 = createSetting();
    auto instance2 = createSetting();

    EXPECT_EQ(instance1.get(), instance2.get());
    EXPECT_EQ(2, instance1.use_count());
    EXPECT_EQ(2, instance2.use_count());

    EXPECT_EQ(1, instance1->getSth());
    EXPECT_EQ(1, instance2->getSth());
}
