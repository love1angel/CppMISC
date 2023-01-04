//
// Created by Helianthus Xie on 2023/1/4.
//

#include "Context.hpp"
#include "AddStrategy.hpp"
#include "SubStrategy.hpp"

Context::Context(std::string context)
{
    if ("+" == context) {
        m_strategy = std::make_unique<AddStrategy>();
    } else if ("-" == context){
        m_strategy = std::make_unique<SubStrategy>();
    }
}

int Context::compute(int lhs, int rhs) const
{
    return m_strategy->compute(lhs, rhs);
}
