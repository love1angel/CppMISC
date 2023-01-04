//
// Created by Helianthus Xie on 2022/9/6.
//

#ifndef PATTERN_IDISPLAY_HH
#define PATTERN_IDISPLAY_HH

class IDisplay {
public:
    virtual ~IDisplay() = default;

    virtual void open() = 0;

    virtual void print() = 0;

    virtual void close() = 0;

    void display()
    {
        open();
        print();
        close();
    }
};

#endif //STL_IDISPLAY_HH
