//
// Created by Helianthus Xie on 2022/10/19.
//

#ifndef PATTERN_PROTOTYPE_CONCRETE_OBJECT_HPP
#define PATTERN_PROTOTYPE_CONCRETE_OBJECT_HPP

#include "ProtoType.hpp"

class ConcreteObject : public ProtoType {
public:
    ConcreteObject() = default;

    ConcreteObject(const ConcreteObject &obj);

    ~ConcreteObject() override = default;

    [[nodiscard]] std::shared_ptr<ProtoType> clone() const override;

    int getI() const
    { return m_i; }

private:
    int m_i = 0;
};


#endif //PATTERN_PROTOTYPE_CONCRETE_OBJECT_HPP
