//
// Created by Helianthus Xie on 2023/1/12.
//

#include <gtest/gtest.h>

#include "Context.hpp"

TEST(State, init)
{
    std::shared_ptr<Context> context = std::make_shared<Context>();
    context->request();
    context->request();
    context->request();
    context->request();
}
