//
// Created by Helianthus Xie on 2022/9/6.
//

#ifndef PATTERN_TEMPLATEMETHOD__IDISPLAY_HH
#define PATTERN_TEMPLATEMETHOD__IDISPLAY_HH

class IDisplay {
public:
    virtual ~IDisplay() = default;

    virtual void open() = 0;

    virtual void print() = 0;

    virtual void close() = 0;
};

#endif //PATTERN_TEMPLATEMETHOD__IDISPLAY_HH
