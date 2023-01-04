//
// Created by Helianthus Xie on 2022/10/27.
//

#ifndef STL_STATE_H
#define STL_STATE_H

class State {
public:
    virtual ~State() = default;

    virtual void deductMoney() = 0;

    virtual bool raffle() = 0;

    virtual void dispatchGift() = 0;
};

#endif //STL_STATE_H
