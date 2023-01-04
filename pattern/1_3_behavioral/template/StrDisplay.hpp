//
// Created by Helianthus Xie on 2022/9/6.
//

#ifndef PATTERN_STRDISPLAY_HPP
#define PATTERN_STRDISPLAY_HPP

#include <iostream>
#include "IDisplay.hpp"

class StrDisplay : public IDisplay {
public:

    StrDisplay() = default;

    void open() override
    {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
    }

    void print() override
    {
        std::cout << __PRETTY_FUNCTION__ << std::endl;

    }

    void close() override
    {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
    }
};


#endif //PATTERN_STRDISPLAY_HH
