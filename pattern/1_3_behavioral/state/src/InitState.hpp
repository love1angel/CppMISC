//
// Created by Helianthus Xie on 2023/1/12.
//

#ifndef PATTERN_STATE__INITSTATE_HPP
#define PATTERN_STATE__INITSTATE_HPP

#include "State.hpp"

class InitState : public State {
public:
    void handle(std::shared_ptr<Context> context) const override;

private:
};

#endif //PATTERN_STATE__INITSTATE_HPP
