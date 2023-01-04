//
// Created by Helianthus Xie on 2023/1/4.
//

#ifndef PATTERN_CONFERENCETICKET_HPP
#define PATTERN_CONFERENCETICKET_HPP

#include "Item.hpp"

class ConferenceTicket : public Item {
public:
    ConferenceTicket(std::string name, Money price)
            : m_title(std::move(name)), m_price(price)
    {

    }

    std::string title() const
    { return m_title; }

    Money price() const override
    {
        return m_price;
    }

private:
    std::string m_title;
    Money m_price{};
};

#endif //PATTERN_CONFERENCETICKET_HPP
