//
// Created by Helianthus Xie on 2022/12/30.
//

#ifndef PATTERN_PROTOTYPE_SHEEP_HPP
#define PATTERN_PROTOTYPE_SHEEP_HPP

#include "Animal.hpp"
#include <string>

class Sheep : public Animal {
public:
    explicit Sheep(std::string name) : m_name(std::move(name))
    {}

    void makeSound() const override;

    [[nodiscard]] std::unique_ptr<Animal> clone() const override;

private:
    std::string m_name;
};

#endif //PATTERN_PROTOTYPE_SHEEP_HPP
