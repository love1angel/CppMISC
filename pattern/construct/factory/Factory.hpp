//
// Created by Helianthus Xie on 2022/10/11.
//

#ifndef PATTERN_FACTORY_HPP
#define PATTERN_FACTORY_HPP

#include <memory>

class Product {
public:
    virtual ~Product()
    {}

    virtual bool doSth() = 0;
};

class Factory {
public:
    virtual ~Factory()
    {}

    virtual std::shared_ptr<Product> createProduct() = 0;
};

class ConcreteProduct : public Product {
public:
    ConcreteProduct() = default;

    virtual ~ConcreteProduct() override = default;

    virtual bool doSth() override
    {
        std::cout << "do sth..." << std::endl;
        return true;
    }
};

class ConcreteFactory : public Factory {
public:
    ConcreteFactory() = default;

    virtual ~ConcreteFactory() override = default;

    virtual std::shared_ptr<Product> createProduct() override
    {
        return std::make_shared<ConcreteProduct>();
    }
};

#endif //PATTERN_FACTORY_HPP
