//
// Created by Helianthus Xie on 2022/10/19.
//

#include "ConcreteObject.hpp"

// should be deep copy rather than shallow copy
ConcreteObject::ConcreteObject(const ConcreteObject &obj)
        : m_i(obj.m_i)
{
}

std::shared_ptr<ProtoType> ConcreteObject::clone() const
{
    return std::make_shared<ConcreteObject>(*this);
}
