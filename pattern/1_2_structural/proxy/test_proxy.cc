//
// Created by Helianthus Xie on 2023/1/12.
//

#include <gtest/gtest.h>

#include <memory>

#include "Subject.hpp"
#include "Proxy.hpp"

TEST(Singleton, init)
{
    std::unique_ptr<Subject> sub = std::make_unique<Proxy>();

    EXPECT_EQ(10, sub->request());
}
