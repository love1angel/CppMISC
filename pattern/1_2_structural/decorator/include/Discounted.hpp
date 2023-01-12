//
// Created by Helianthus Xie on 2023/1/4.
//

#ifndef PATTERN_DECORATOR__DISCOUNTED_HPP
#define PATTERN_DECORATOR__DISCOUNTED_HPP

#include "DecoratedItem.hpp"

class Discounted : public DecoratedItem {
public:
    Discounted(double discount, std::unique_ptr<Item> item)
            : DecoratedItem(std::move(item)), factor_(1.0 - discount)
    {}

    Money price() const override
    {
        return item().price() * factor_;
    }

private:
    double factor_;
};

#endif //PATTERN_DECORATOR__DISCOUNTED_HPP
