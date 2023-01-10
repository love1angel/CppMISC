//
// Created by Helianthus Xie on 2022/10/17.
//

#ifndef PATTERN_FACTORY__SETTINGINTERFACE_HPP
#define PATTERN_FACTORY__SETTINGINTERFACE_HPP

class SettingInterface {
public:
    virtual ~SettingInterface() = default;

    [[nodiscard]] virtual int getSth() const = 0;
};

#endif //PATTERN_FACTORY__SETTINGINTERFACE_HPP
