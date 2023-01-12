//
// Created by Helianthus Xie on 2023/1/12.
//

#include "Context.hpp"
#include "InitState.hpp"

Context::Context()
{
    m_state = std::make_unique<InitState>();
}

void Context::setState(std::unique_ptr<State> state)
{
    m_state = std::move(state);
}

void Context::request()
{
    m_state->handle(this->shared_from_this());
}
