//
// Created by Helianthus Xie on 2022/10/19.
//

#ifndef PATTERN_PROTOTYPE_ANIMAL_HPP
#define PATTERN_PROTOTYPE_ANIMAL_HPP

#include <memory>

class Animal {
public:
    virtual ~Animal() = default;

    virtual void makeSound() const = 0;

    virtual std::unique_ptr<Animal> clone() const = 0;
};

#endif //PATTERN_PROTOTYPE_ANIMAL_HPP
