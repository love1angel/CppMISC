//
// Created by Helianthus Xie on 2022/10/18.
//

#ifndef PATTERN_ABSTRACT_FACTORY_ABSTRACT_APPLE_HPP
#define PATTERN_ABSTRACT_FACTORY_ABSTRACT_APPLE_HPP

class AbstractApple {
public:
    virtual ~AbstractApple() = default;

    virtual int getAppleName() = 0;
};

#endif //PATTERN_ABSTRACT_FACTORY_ABSTRACT_APPLE_HPP
