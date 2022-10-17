//
// Created by Helianthus Xie on 2022/10/12.
//

#include <gtest/gtest.h>

#include "Setting.hpp"
#include "SettingFactory.hpp"

TEST(Factory, init)
{
    auto instance = createSetting();
    auto instance2 = createSetting();

    EXPECT_EQ(instance.get(), instance2.get());
    EXPECT_EQ(3, instance.use_count());
    EXPECT_EQ(3, instance2.use_count());

    EXPECT_EQ(1, instance->getSth());
}
