//
// Created by Helianthus Xie on 2022/10/12.
//

#ifndef PATTERN_ABSTRACTFACTORY_HPP
#define PATTERN_ABSTRACTFACTORY_HPP

#include <memory>
#include <>

class AbstractProduct {
public:
    virtual ~AbstractProduct()
    {
    }

    virtual bool doSth() = 0;
};

class AbstractApple : public AbstractProduct {
public:
    std::string doSth() override {
        return "APPLE";
    }
};


class AbstractFactory {
public:
    virtual ~AbstractFactory()
    {
    }

    virtual std::shared_ptr<AbstractFactory> getFactory() = 0;
};


#endif //PATTERN_ABSTRACTFACTORY_HPP
