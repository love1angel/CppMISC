//
// Created by Helianthus Xie on 2022/10/19.
//

#ifndef STL_PRODUCT_HPP
#define STL_PRODUCT_HPP

class Product {
public:
    Product() = default;

    virtual ~Product() = default;

    bool getAvailable() const
    {
        return m_available;
    }

    void setAvailable(bool available)
    {
        m_available = available;
    }

private:
    bool m_available;
};

#endif //STL_PRODUCT_HPP
