//
// Created by Helianthus Xie on 2023/1/13.
//

#include "Originator.hpp"

Originator::Memento_t Originator::backup() const
{
    return std::make_tuple(this->m_state);
}

void Originator::restore(Memento_t memento)
{
    this->m_state = std::get<State>(memento.m_tuple);
}