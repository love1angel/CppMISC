//
// Created by Helianthus Xie on 2023/1/12.
//

#ifndef PATTERN_PROXY__PROXY_HPP
#define PATTERN_PROXY__PROXY_HPP

#include <memory>

#include "Subject.hpp"

class Proxy : public Subject {
public:
    Proxy();

    int request() const override;

private:
    std::unique_ptr<Subject> m_obj;
};

#endif //PATTERN_PROXY__PROXY_HPP
