//
// Created by Helianthus Xie on 2023/1/13.
//

#ifndef PATTERN_COMPOSITE__COMPONENT_HPP
#define PATTERN_COMPOSITE__COMPONENT_HPP

#include <memory>
#include <optional>

class Component : public std::enable_shared_from_this<Component> {
public:
    virtual ~Component() = default;

    void setParent(std::shared_ptr<Component> parent)
    {
        m_parent = parent;
    }

    std::optional<std::shared_ptr<Component>> getParent() const
    {
        if (auto ret = m_parent.lock())
            return ret;
        else
            return nullptr;
    }

    virtual void add(std::shared_ptr<Component>) = 0;

    virtual void remove(std::shared_ptr<Component>) = 0;

    virtual bool isComposite() const
    {
        return false;
    }

protected:
    std::weak_ptr<Component> m_parent;
};

#endif //PATTERN_COMPOSITE__COMPONENT_HPP
