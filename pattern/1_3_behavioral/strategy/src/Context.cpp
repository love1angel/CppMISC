//
// Created by Helianthus Xie on 2023/1/4.
//

#include "Context.hpp"

#include "Strategy.hpp"

Context::Context(std::unique_ptr<Strategy> &&strategy)
        : m_strategy(std::move(strategy))
{
}

int Context::compute(int lhs, int rhs) const
{
    return m_strategy->compute(lhs, rhs);
}
