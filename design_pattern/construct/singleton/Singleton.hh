//
// Created by Helianthus Xie on 2022/9/6.
//

#ifndef STL_SINGLETON_HH
#define STL_SINGLETON_HH

template<class Tp>
class Singleton {

public:

    static Tp &getInstance()
    {
        static Tp instance;
        return instance;
    }

    virtual ~Singleton() = default;

    Singleton(const Singleton &) = delete;

    Singleton &operator=(const Singleton &) = delete;

protected:
    Singleton() = default;
};

#endif //STL_SINGLETON_HH
