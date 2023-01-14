//
// Created by Helianthus Xie on 2023/1/14.
//

#include <gtest/gtest.h>

#include "src/ProviderImpl.hpp"
#include "src/ServiceImpl.hpp"

TEST(Bridge, init)
{
    std::shared_ptr<IService> service = std::make_shared<ServiceImpl>(std::make_unique<ProviderImpl>());
    service->operation();
}
