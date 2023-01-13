//
// Created by Helianthus Xie on 2023/1/13.
//

#ifndef PATTERN_MEMENTO__MEMENTO_HPP
#define PATTERN_MEMENTO__MEMENTO_HPP

#include <tuple>

template<typename... Args>
struct Memento {
    Memento(std::tuple<Args...> tuple)
            : m_tuple(tuple)
    {
    }

    std::tuple<Args...> m_tuple;
};

#endif //PATTERN_MEMENTO__MEMENTO_HPP
