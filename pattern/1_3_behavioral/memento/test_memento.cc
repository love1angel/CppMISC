//
// Created by Helianthus Xie on 2023/1/13.
//

#include <gtest/gtest.h>

#include "Originator.hpp"

TEST(Memento, init)
{
    std::shared_ptr<Originator> originator = std::make_shared<Originator>(0);
    EXPECT_EQ(0, originator->getState());

    Originator::CareTaker_t careTaker(originator);
    careTaker.backup();
    originator->setState(1);
    EXPECT_EQ(1, originator->getState());

    careTaker.redo();
    EXPECT_EQ(0, originator->getState());
}
