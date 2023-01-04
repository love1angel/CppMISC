//
// Created by Helianthus Xie on 2023/1/4.
//

#ifndef PATTERN_CPPBOOK_HPP
#define PATTERN_CPPBOOK_HPP

#include "Item.hpp"

class CppBook : public Item {
public:
    CppBook(std::string title, Money price)
            : m_title(std::move(title)), m_price(price)
    {

    }

    std::string const &title() const
    { return m_title; }

    Money price() const
    { return m_price; }

private:
    std::string m_title{};
    Money m_price{};
};

#endif //PATTERN_CPPBOOK_HPP
