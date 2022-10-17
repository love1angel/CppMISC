//
// Created by Helianthus Xie on 2022/10/17.
//

#ifndef PATTERN_FACTORY_SETTING_FACTORY_HPP
#define PATTERN_FACTORY_SETTING_FACTORY_HPP

#include <memory>

class Setting;

std::shared_ptr<Setting> createSetting();

#endif //PATTERN_FACTORY_SETTING_FACTORY_HPP
