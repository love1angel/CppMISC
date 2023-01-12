//
// Created by Helianthus Xie on 2023/1/12.
//

#include <gtest/gtest.h>

#include "Subject.hpp"

TEST(Observer, init)
{
    Subject<int> subject;
    int notify_val = 10;

    auto ret = subject.attach([&, notify_val](int i) {
        EXPECT_EQ(notify_val, i);
    });
    subject.test(notify_val);
}
