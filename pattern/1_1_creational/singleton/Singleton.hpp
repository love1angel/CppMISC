//
// Created by Helianthus Xie on 2022/10/12.
//

#ifndef PATTERN_SINGLETON__SINGLETON_HPP
#define PATTERN_SINGLETON__SINGLETON_HPP

#include <memory>
#include <mutex>

class Singleton final {
    Singleton() = default;

public:
    static std::shared_ptr<Singleton> get()
    {
        std::lock_guard lock(m_getMutex);
        if (!m_instance) {
            m_instance.reset(new Singleton());
        }
        return m_instance;
    }

private:
    static std::shared_ptr<Singleton> m_instance;
    static std::mutex m_getMutex;
};

#endif //PATTERN_SINGLETON__SINGLETON_HPP
