//
// Created by Helianthus Xie on 2022/10/19.
//

#ifndef PATTERN_BUILDER__CONCRETEBUILDER_HPP
#define PATTERN_BUILDER__CONCRETEBUILDER_HPP

#include "Builder.hpp"

class Product;

class ConcreteBuilder : public Builder,
                        public std::enable_shared_from_this<ConcreteBuilder> {
public:
    ~ConcreteBuilder() override = default;

    std::shared_ptr<Builder> init() override;

    std::shared_ptr<Builder> waitUntilAvailable() override;

    std::shared_ptr<Product> getProduct() const override;

private:
    std::shared_ptr<Product> m_product;
};

#endif //PATTERN_BUILDER__CONCRETEBUILDER_HPP
