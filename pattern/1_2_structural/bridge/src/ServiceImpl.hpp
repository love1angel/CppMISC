//
// Created by Helianthus Xie on 2023/1/14.
//

#ifndef UNTITLED2_SERVICEIMPL_HPP
#define UNTITLED2_SERVICEIMPL_HPP

#include "IService.hpp"

class ServiceImpl : public IService {
public:
    ServiceImpl(std::unique_ptr<IProvider> provider)
            : IService(std::move(provider))
    {}

    void operation() const override
    {
        m_provider->operation();
    }
};

#endif //UNTITLED2_SERVICEIMPL_HPP
