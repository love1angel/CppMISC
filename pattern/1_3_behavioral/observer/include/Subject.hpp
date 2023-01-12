//
// Created by Helianthus Xie on 2023/1/12.
//

#ifndef PATTERN_OBSERVER__SUBJECT_HPP
#define PATTERN_OBSERVER__SUBJECT_HPP

#include <map>
#include <functional>

template<typename... Args>
class Subject {
    using Subscription = uint32_t;
    using Listener = std::function<void(Args const &...)>;
    using ListenerMap = std::map<Subscription, Listener>;
public:
    Subject() = default;

    virtual ~Subject() = default;

    [[nodiscard]] Subscription attach(Listener obj);

    void detach(Subscription subscription);

    // just for test
    void test(Args const &...args)
    {
        this->update(args...);
    }

protected:
    void update(Args const &...args) const;

private:
    Subscription m_nextSubscription = 0;
    ListenerMap m_listeners;
};

template<typename... Args>
typename Subject<Args...>::Subscription Subject<Args...>::attach(Listener obj)
{
    this->m_listeners[m_nextSubscription] = obj;
    return m_nextSubscription++;
}

template<typename... Args>
void Subject<Args...>::detach(Subscription subscription)
{
    m_listeners.erase(m_listeners.find(subscription));
}

template<typename... Args>
void Subject<Args...>::update(Args const &...args) const
{
    for (const auto &pair: m_listeners) {
        pair.second(args...);
    }
}

#endif //PATTERN_OBSERVER__SUBJECT_HPP
