//
// Created by Helianthus Xie on 2022/10/17.
//

#include "SettingFactory.hpp"

#include "SettingImpl.hpp"

std::shared_ptr<Setting> createSetting()
{
    static std::weak_ptr<SettingImpl> instance;
    auto retVal = instance.lock();
    if (!retVal) {
        retVal = std::make_shared<SettingImpl>();
        instance = retVal;
    }
    return retVal;
}
