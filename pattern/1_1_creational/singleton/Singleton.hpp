//
// Created by Helianthus Xie on 2022/10/12.
//

#ifndef PATTERN_SINGLETON_HPP
#define PATTERN_SINGLETON_HPP

#include <memory>
#include <mutex>

class Singleton final {
public:
    static std::shared_ptr<Singleton> get()
    {
        std::lock_guard lock(m_getMutex);
        if (!m_instance) {
            m_instance = std::make_shared<Singleton>();
        }
        return m_instance;
    }

private:
    static std::shared_ptr<Singleton> m_instance;
    static std::mutex m_getMutex;
};

std::shared_ptr<Singleton> Singleton::m_instance = nullptr;
std::mutex Singleton::m_getMutex;

#endif //PATTERN_SINGLETON_HPP
