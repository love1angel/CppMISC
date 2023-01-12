//
// Created by Helianthus Xie on 2023/1/12.
//

#ifndef PATTERN_PROXY__SUBJECT_HPP
#define PATTERN_PROXY__SUBJECT_HPP

class Subject {
public:
    virtual ~Subject() = default;

    virtual int request() const = 0;
};

#endif //PATTERN_PROXY__SUBJECT_HPP
