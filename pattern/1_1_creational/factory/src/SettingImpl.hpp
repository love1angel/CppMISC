//
// Created by Helianthus Xie on 2022/10/17.
//

#ifndef PATTERN_FACTORY__SETTINGIMPL_HPP
#define PATTERN_FACTORY__SETTINGIMPL_HPP

#include "SettingInterface.hpp"

class SettingImpl : public SettingInterface {
public:
    SettingImpl() = default;

    ~SettingImpl() override = default;

    [[nodiscard]] int getSth() const override;
};

#endif //PATTERN_FACTORY__SETTINGIMPL_HPP
