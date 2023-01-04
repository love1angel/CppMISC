//
// Created by Helianthus Xie on 2023/1/4.
//

#ifndef PATTERN_DECORATEDITEM_HPP
#define PATTERN_DECORATEDITEM_HPP

#include "Item.hpp"

#include <memory>
#include <stdexcept>
#include <utility>

class DecoratedItem : public Item {
public:
    explicit DecoratedItem(std::unique_ptr<Item> item)
            : m_item(std::move(item))
    {
        if (!m_item) {
            throw std::invalid_argument("invalid argument");
        }
    }

protected:
    Item &item()
    { return *m_item; }

    Item const &item() const
    { return *m_item; }

private:
    std::unique_ptr<Item> m_item;
};

#endif //PATTERN_DECORATEDITEM_HPP
