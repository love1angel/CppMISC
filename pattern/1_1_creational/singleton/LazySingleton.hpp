//
// Created by Helianthus Xie on 2023/2/28.
//

#ifndef PATTERN_SINGLETON__LAZYSINGLETON_HPP
#define PATTERN_SINGLETON__LAZYSINGLETON_HPP

#include <memory>
#include <mutex>

class LazySingleton {
public:
    std::shared_ptr<LazySingleton> get()
    {
        std::call_once(m_init_flag, &LazySingleton::init, this);
        return m_ptr;
    }

private:
    void init()
    {
        m_ptr.reset(new int(10));
    }

private:
    std::once_flag m_init_flag;
    std::shared_ptr<int> m_ptr;
};

#endif // PATTERN_SINGLETON__LAZYSINGLETON_HPP
