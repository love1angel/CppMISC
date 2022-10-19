//
// Created by Helianthus Xie on 2022/10/19.
//

#ifndef PATTERN_PROTOTYPE_PROTOTYPE_HPP
#define PATTERN_PROTOTYPE_PROTOTYPE_HPP

#include <memory>

class ProtoType {
public:
    virtual ~ProtoType() = default;

    virtual std::shared_ptr<ProtoType> clone() const = 0;
};

#endif //PATTERN_PROTOTYPE_PROTOTYPE_HPP
