//
// Created by Helianthus Xie on 2023/1/12.
//

#include "InitState.hpp"
#include <iostream>

#include "Context.hpp"
#include "WaitState.hpp"

void InitState::handle(std::shared_ptr<Context> context) const
{
    std::cout << "init state -> wait state" << std::endl;
    context->setState(std::make_unique<WaitState>());
}
