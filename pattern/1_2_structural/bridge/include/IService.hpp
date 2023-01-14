//
// Created by Helianthus Xie on 2023/1/13.
//

#ifndef PATTERN_BRIDGE__ISERVICE_HPP
#define PATTERN_BRIDGE__ISERVICE_HPP

#include <memory>

#include "IProvider.hpp"

class IService {
public:
    IService(std::unique_ptr<IProvider> provider)
            : m_provider(std::move(provider))
    {}

    virtual ~IService() = default;

    virtual void operation() const = 0;

protected:
    std::unique_ptr<IProvider> m_provider;
};

#endif //PATTERN_BRIDGE__ISERVICE_HPP
