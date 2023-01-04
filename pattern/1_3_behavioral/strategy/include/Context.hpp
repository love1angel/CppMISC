//
// Created by Helianthus Xie on 2023/1/4.
//

#ifndef PATTERN_STRATEGY_CONTEXT_HPP
#define PATTERN_STRATEGY_CONTEXT_HPP

#include <memory>
#include <string>
// unique ptr must know delete func
#include "Strategy.hpp"

class Context {
public:
    explicit Context(std::string context);

    [[nodiscard]] int compute(int lhs, int rhs) const;

private:
    //
    std::unique_ptr<Strategy> m_strategy;
};

#endif //PATTERN_STRATEGY_CONTEXT_HPP
