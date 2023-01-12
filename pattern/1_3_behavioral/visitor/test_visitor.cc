//
// Created by Helianthus Xie on 2023/1/12.
//

#include <gtest/gtest.h>

#include <variant>
#include <string>

struct Visitor {
    int operator()(int s)
    {
        std::cout << "int" << s << std::endl;
        return 1;
    }

    int operator()(std::string s)
    {
        std::cout << "string" << s << std::endl;
        return 2;
    }

    int operator()(double s)
    {
        std::cout << "double" << s << std::endl;
        return 3;
    };
};

TEST(Visitor, init)
{
    std::variant<int, std::string, double> variant = 10;

    EXPECT_EQ(1, std::visit(Visitor(), variant));

    variant = "hello";
    EXPECT_EQ(2, std::visit(Visitor(), variant));

    variant = 10.5;
    EXPECT_EQ(3, std::visit(Visitor(), variant));
}
