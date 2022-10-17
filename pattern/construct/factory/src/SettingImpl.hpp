//
// Created by Helianthus Xie on 2022/10/17.
//

#ifndef LIB_PRODUCTIMPL_HPP
#define LIB_PRODUCTIMPL_HPP

#include "Setting.hpp"

class SettingImpl : public Setting {
public:
    SettingImpl() = default;

    virtual ~SettingImpl() = default;

    int getSth() const override;
};

#endif //LIB_PRODUCTIMPL_HPP
