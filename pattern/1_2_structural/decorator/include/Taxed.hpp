//
// Created by Helianthus Xie on 2023/1/4.
//

#ifndef PATTERN_DECORATOR__TAXED_HPP
#define PATTERN_DECORATOR__TAXED_HPP

#include "DecoratedItem.hpp"

class Taxed : public DecoratedItem {
public:
    Taxed(double tax, std::unique_ptr<Item> item)
            : DecoratedItem(std::move(item)), factor_(1.0 + tax)
    {}

    Money price() const override
    {
        return item().price() * factor_;
    }

private:
    double factor_;
};

#endif //PATTERN_DECORATOR__TAXED_HPP
