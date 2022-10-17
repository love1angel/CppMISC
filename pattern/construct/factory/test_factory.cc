//
// Created by Helianthus Xie on 2022/10/12.
//

#include <gtest/gtest.h>

#include "Setting.hpp"
#include "SettingFactory.hpp"

TEST(Factory, init)
{
    auto instance = createSetting();

    EXPECT_EQ(1, instance->getSth());
}
