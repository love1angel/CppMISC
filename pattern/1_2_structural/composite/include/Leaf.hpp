//
// Created by Helianthus Xie on 2023/1/13.
//

#ifndef PATTERN_COMPOSITE__LEAF_HPP
#define UNTITLED2_LEAF_HPP

#include "Component.hpp"

class Leaf : public Component {
public:

    void add(std::shared_ptr<Component>) override
    {
    }

    void remove(std::shared_ptr<Component>) override
    {
    }
};

#endif //UNTITLED2_LEAF_HPP
