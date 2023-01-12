//
// Created by Helianthus Xie on 2023/1/12.
//

#ifndef PATTERN_STATE__WAITSTATE_HPP
#define PATTERN_STATE__WAITSTATE_HPP

#include "State.hpp"

class WaitState : public State {
public:

    void handle(std::shared_ptr<Context> context) const override;
};

#endif //PATTERN_STATE__WAITSTATE_HPP
