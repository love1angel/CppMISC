//
// Created by Helianthus Xie on 2022/10/18.
//

#ifndef PATTERN_ABSTRACTFACTORY__ABSTRACTAPPLE_HPP
#define PATTERN_ABSTRACTFACTORY__ABSTRACTAPPLE_HPP

class AbstractApple {
public:
    virtual ~AbstractApple() = default;

    virtual int getAppleName() = 0;
};

#endif //PATTERN_ABSTRACTFACTORY__ABSTRACTAPPLE_HPP
