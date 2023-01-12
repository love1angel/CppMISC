//
// Created by Helianthus Xie on 2023/1/4.
//

#ifndef PATTERN_STRATEGY__CONTEXT_HPP
#define PATTERN_STRATEGY__CONTEXT_HPP

#include <memory>

class Strategy;

class Context {
public:
    explicit Context(std::unique_ptr<Strategy> &&strategy);

    [[nodiscard]] int compute(int lhs, int rhs) const;

private:
    std::unique_ptr<Strategy> m_strategy;
};

#endif //PATTERN_STRATEGY__CONTEXT_HPP
