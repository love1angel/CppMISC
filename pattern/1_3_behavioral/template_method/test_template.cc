//
// Created by Helianthus Xie on 2022/9/6.
//

#include <gtest/gtest.h>

#include "StrDisplay.hpp"

void test(IDisplay &obj)
{
    obj.open();
    obj.print();
    obj.close();
}

TEST(Template_method, init)
{
    StrDisplay display;

    test(display);
}
