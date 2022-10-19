//
// Created by Helianthus Xie on 2022/10/19.
//

#ifndef PATTERN_BUILDER_BUILDER_HPP
#define PATTERN_BUILDER_BUILDER_HPP

#include <memory>

class Product;

class Builder {
public:
    virtual ~Builder() = default;

    virtual std::shared_ptr<Builder> init() = 0;

    virtual std::shared_ptr<Builder> waitUntilAvailable() = 0;

    virtual std::shared_ptr<Product> getProduct() const = 0;
};

#endif //PATTERN_BUILDER_BUILDER_HPP
