//
// Created by Helianthus Xie on 2022/10/27.
//

#ifndef PATTERN_CONTEXT_HPP
#define PATTERN_CONTEXT_HPP

#include <memory>

class State;

class Context : public std::enable_shared_from_this<Context> {
public:

    void setState()

    State getState()
    {
        return m_state;
    }

private:
    State m_state;
};

#endif //PATTERN_CONTEXT_HPP
