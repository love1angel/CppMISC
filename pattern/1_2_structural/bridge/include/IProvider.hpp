//
// Created by Helianthus Xie on 2023/1/13.
//

#ifndef PATTERN_BRIDGE__IPROVIDER_HPP
#define PATTERN_BRIDGE__IPROVIDER_HPP

#include <memory>

class IProvider : public std::enable_shared_from_this<IProvider> {
public:
    virtual ~IProvider() = default;

    virtual void operation() const = 0;
};

#endif //PATTERN_BRIDGE__IPROVIDER_HPP
