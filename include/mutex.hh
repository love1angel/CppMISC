//
// Created by Helianthus Xie on 2022/9/6.
//

#ifndef STL_MUTEX_HH
#define STL_MUTEX_HH

#include <mutex>

namespace {
    template<>
    class lock_guard {
    public:
        lock_guard(std::mutex &mutex)
                : m_mutex(mutex)
        {
            m_mutex.lock()
        }

        ~lock_guard()
        {
            m_mutex.unlock();
        }

    private:
        std::mutex m_mutex;
    };
}

#endif //STL_MUTEX_HH
