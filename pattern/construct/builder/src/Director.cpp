//
// Created by Helianthus Xie on 2022/10/19.
//

#include "Director.hpp"

#include "Builder.hpp"

std::shared_ptr<Product> Director::buildProduct(std::shared_ptr<Builder> builder)
{
    return builder->init()->waitUntilAvailable()->getProduct();
}
