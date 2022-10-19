//
// Created by Helianthus Xie on 2022/10/19.
//

#include "ObjFactory.hpp"

#include "src/ConcreteObject.hpp"

std::shared_ptr<ProtoType> createPrototype()
{
    return std::make_shared<ConcreteObject>();
}
