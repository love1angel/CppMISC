//
// Created by Helianthus Xie on 2023/1/16.
//

#include "Singleton.hpp"

std::shared_ptr<Singleton> Singleton::m_instance = nullptr;
std::mutex Singleton::m_getMutex;
