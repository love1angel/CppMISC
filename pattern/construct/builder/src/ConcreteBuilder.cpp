//
// Created by Helianthus Xie on 2022/10/19.
//

#include "ConcreteBuilder.hpp"
#include "Product.hpp"
#include <memory>

std::shared_ptr<Builder> ConcreteBuilder::init()
{
    m_product = std::make_shared<Product>();
    return this->shared_from_this();
}

std::shared_ptr<Builder> ConcreteBuilder::waitUntilAvailable()
{
    m_product->setAvailable(true);
    return this->shared_from_this();
}

std::shared_ptr<Product> ConcreteBuilder::getProduct() const
{
    return m_product;
}
