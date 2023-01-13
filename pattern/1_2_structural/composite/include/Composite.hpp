//
// Created by Helianthus Xie on 2023/1/13.
//

#ifndef PATTERN_COMPOSITE__COMPOSITE_HPP
#define PATTERN_COMPOSITE__COMPOSITE_HPP

#include <list>

#include "Component.hpp"

class Composite : public Component {
public:
    void add(std::shared_ptr<Component> component) override
    {
        this->m_children.push_back(component);
        component->setParent(shared_from_this());
    }

    void remove(std::shared_ptr<Component> component) override
    {
        m_children.remove(component);
        component->setParent(nullptr);
    }

    bool isComposite() const override
    {
        return true;
    }

protected:
    std::list<std::shared_ptr<Component>> m_children;
};

#endif //PATTERN_COMPOSITE__COMPOSITE_HPP
