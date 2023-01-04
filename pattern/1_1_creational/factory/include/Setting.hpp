//
// Created by Helianthus Xie on 2022/10/17.
//

#ifndef PATTERN_FACTORY_SETTING_HPP
#define PATTERN_FACTORY_SETTING_HPP

class Setting {
public:
    virtual ~Setting() = default;

    [[nodiscard]] virtual int getSth() const = 0;
};

#endif //PATTERN_FACTORY_SETTING_HPP
