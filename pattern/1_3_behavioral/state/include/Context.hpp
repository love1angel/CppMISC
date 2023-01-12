//
// Created by Helianthus Xie on 2023/1/12.
//

#ifndef PATTERN_STATE__CONTEXT_HPP
#define PATTERN_STATE__CONTEXT_HPP

#include <memory>

#include "State.hpp"

class Context : public std::enable_shared_from_this<Context> {
public:
    Context();

    void setState(std::unique_ptr<State> state);

    void request();

private:
    std::unique_ptr<State> m_state;
};

#endif //PATTERN_STATE__CONTEXT_HPP
