//
// Created by Helianthus Xie on 2023/1/13.
//

#ifndef PATTERN_MEMENTO__CARETAKER_HPP
#define PATTERN_MEMENTO__CARETAKER_HPP

#include <queue>
#include <memory>

template<typename Master, typename Memento>
class CareTaker {
public:
    CareTaker(std::weak_ptr<Master> master)
            : m_master(master)
    {}

    void backup()
    {
        if (auto instance = m_master.lock()) {
            m_backups.push(instance->backup());
        }
    }

    void redo()
    {
        if (auto instance = m_master.lock()) {
            instance->restore(m_backups.front());
            m_backups.pop();
        }
    }

private:
    std::weak_ptr<Master> m_master;
    std::queue<Memento> m_backups;
};

#endif //PATTERN_MEMENTO__CARETAKER_HPP
