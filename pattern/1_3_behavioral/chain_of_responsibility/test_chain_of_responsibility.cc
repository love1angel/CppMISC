//
// Created by Helianthus Xie on 2023/1/14.
//

#include <gtest/gtest.h>
#include "Handler.hpp"
#include "include/ConcreteHandler0.hpp"
#include "include/ConcreteHandler1.hpp"

TEST(ChainofResponsibility, init)
{
    std::shared_ptr<Handler> handler0 = std::make_shared<ConcreteHandler0>();
    std::shared_ptr<Handler> handler1 = std::make_shared<ConcreteHandler1>();

    handler0->setHandler(handler1);
    handler1->setHandler(handler0);

    EXPECT_EQ(0, handler0->handleRequest(0));
    EXPECT_EQ(1, handler0->handleRequest(1));
    EXPECT_EQ(0, handler1->handleRequest(0));
    EXPECT_EQ(1, handler1->handleRequest(1));
}
