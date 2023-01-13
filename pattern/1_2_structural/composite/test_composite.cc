//
// Created by Helianthus Xie on 2023/1/13.
//

#include <gtest/gtest.h>

#include "Component.hpp"
#include "Leaf.hpp"
#include "Composite.hpp"

TEST(Memento, init)
{
    std::shared_ptr<Component> root = std::make_shared<Composite>();

    std::shared_ptr<Component> leaf1 = std::make_shared<Leaf>();
    std::shared_ptr<Component> leaf2 = std::make_shared<Leaf>();

    leaf1->setParent(root);
    leaf2->setParent(root);

    EXPECT_EQ(true, leaf1->getParent() == leaf2->getParent());
}
