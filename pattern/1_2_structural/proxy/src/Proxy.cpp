//
// Created by Helianthus Xie on 2023/1/12.
//

#include "Proxy.hpp"

#include "SubjectImpl.hpp"

Proxy::Proxy()
{
    this->m_obj = std::make_unique<SubjectImpl>();
}

int Proxy::request() const
{
    if (0) {
    }
    return this->m_obj->request();
}
