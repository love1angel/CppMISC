//
// Created by Helianthus Xie on 2022/9/6.
//

#ifndef STL_STRDISPLAY_HH
#define STL_STRDISPLAY_HH

#include "IDisplay.hh"

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


#endif //STL_STRDISPLAY_HH
