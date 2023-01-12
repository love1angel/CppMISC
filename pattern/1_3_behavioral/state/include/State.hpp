//
// Created by Helianthus Xie on 2023/1/12.
//

#ifndef PATTERN_STATE__STATE_HPP
#define PATTERN_STATE__STATE_HPP

#include <memory>

class Context;

class State {
public:
    virtual ~State() = default;

    virtual void handle(std::shared_ptr<Context> context) const = 0;
};

#endif //PATTERN_STATE__STATE_HPP
