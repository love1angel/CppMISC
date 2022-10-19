//
// Created by Helianthus Xie on 2022/10/19.
//

// this file is factory, made for provider factory to client(UT)

#ifndef PATTERN_PROTOTYPE_OBJ_FACTORY_HPP
#define PATTERN_PROTOTYPE_OBJ_FACTORY_HPP

#include <memory>

class ProtoType;

std::shared_ptr<ProtoType> createPrototype();

#endif //PATTERN_PROTOTYPE_OBJ_FACTORY_HPP
