//
// Created by Helianthus Xie on 2022/9/6.
//


#include "Singleton.hh"


class Monitor : public Singleton<Monitor> {
public:
    int getNum()
    {
        return m_num;
    }

private:
    int m_num;
};

TEST()
{
    int ret = Monitor::getInstance().getNum();
}
