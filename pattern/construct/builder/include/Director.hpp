//
// Created by Helianthus Xie on 2022/10/19.
//

#ifndef PATTERN_BUILDER_DIRECTOR_HPP
#define PATTERN_BUILDER_DIRECTOR_HPP

#include <memory>

class Product;

class Builder;

class Director {
public:
    ~Director() = default;

    std::shared_ptr<Product> buildProduct(std::shared_ptr<Builder> builder);
};

#endif //PATTERN_BUILDER_DIRECTOR_HPP
