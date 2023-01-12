//
// Created by Helianthus Xie on 2023/1/12.
//

#ifndef PATTERN_PROXY__SUBJECTIMPL_HPP
#define PATTERN_PROXY__SUBJECTIMPL_HPP

#include "Subject.hpp"

class SubjectImpl : public Subject {
public:
    int request() const override;
};

#endif //PATTERN_PROXY__SUBJECTIMPL_HPP
