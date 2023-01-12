//
// Created by Helianthus Xie on 2023/1/4.
//

#include <gtest/gtest.h>

#include <memory>
#include "ConferenceTicket.hpp"
#include "CppBook.hpp"
#include "Discounted.hpp"
#include "Taxed.hpp"

TEST(Decorator, init)
{
    std::unique_ptr<Item> item1(
            std::make_unique<Taxed>(0.07,
                                    std::make_unique<CppBook>("C++", 19.0)));
    std::unique_ptr<Item> item2(
            std::make_unique<Taxed>(0.19, std::make_unique<Discounted>(0.5,
                                                                       std::make_unique<ConferenceTicket>("Cpp Con",
                                                                                                          100.0))));

    EXPECT_DOUBLE_EQ(item1->price(), 20.33);
    EXPECT_DOUBLE_EQ(item2->price(), 59.5);
}
