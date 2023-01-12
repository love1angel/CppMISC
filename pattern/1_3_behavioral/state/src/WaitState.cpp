//
// Created by Helianthus Xie on 2023/1/12.
//

#include "WaitState.hpp"
#include <iostream>

#include "Context.hpp"
#include "InitState.hpp"

void WaitState::handle(std::shared_ptr<Context> context) const
{
    std::cout << "wait state -> init state" << std::endl;
    context->setState(std::make_unique<InitState>());
}
