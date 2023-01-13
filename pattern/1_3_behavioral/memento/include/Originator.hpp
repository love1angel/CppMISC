//
// Created by Helianthus Xie on 2023/1/13.
//

#ifndef PATTERN_MEMENTO__ORIGINTOR_HPP
#define PATTERN_MEMENTO__ORIGINTOR_HPP

#include "../src/Memento.hpp"
#include "../src/CareTaker.hpp"

class Originator {
public:
    using State = int;
    using Memento_t = Memento<State>;
    using CareTaker_t = CareTaker<Originator, Memento_t>;

public:
    Originator(State state)
            : m_state(state)
    {}

    void setState(State state)
    {
        m_state = state;
    }

    State getState() const
    {
        return m_state;
    }

    [[nodiscard]] Memento_t backup() const;

    void restore(Memento_t memento);

private:
    State m_state = 0;
};

#endif //PATTERN_MEMENTO__ORIGINTOR_HPP
