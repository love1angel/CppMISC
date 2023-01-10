//
// Created by Helianthus Xie on 2022/10/17.
//

#ifndef PATTERN_FACTORY__SETTING_FACTORY_HPP
#define PATTERN_FACTORY__SETTING_FACTORY_HPP

#include <memory>

class SettingInterface;

std::shared_ptr<SettingInterface> createSetting();

#endif //PATTERN_FACTORY__SETTING_FACTORY_HPP
