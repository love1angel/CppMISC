//
// Created by Helianthus Xie on 2022/10/17.
//

#ifndef PATTERN_FACTORY_SETTING_IMPL_HPP
#define PATTERN_FACTORY_SETTING_IMPL_HPP

#include "Setting.hpp"

class SettingImpl : public Setting {
public:
    SettingImpl() = default;

    virtual ~SettingImpl() = default;

    int getSth() const override;
};

#endif //PATTERN_FACTORY_SETTING_IMPL_HPP
