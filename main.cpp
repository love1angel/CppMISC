#include <iostream>
#include <vector>
#include "include/type_traits.hh"
#include <future>

enum int2 : int {
};
std::vector<int> vec{1, 2, 3};

template<typename T, typename T2 = typename xp::enable_if<xp::is_same<T, typeof(vec)>::value>::type>
typename T::size_type len(const T &t)
{
    return t.size();
}


volatile int i = 0;

void test()
{
    for (int j = 0; j < 10; ++j) {
        i = i + 1;
    }
}

void test_()
{
    for (int j = 0; j < 10; ++j) {
        i = i - 1;
    }
}

int main()
{
//    std::cout << len(vec) << std::endl;
//    std::cout << typeid(xp::enable_if<true>::type).name() << std::endl;
//    std::cout << xp::is_same<xp::enable_if<true>::type, int>::value << std::endl;
//
//    StrDisplay display;
//    display.display();

    std::thread t1(test);
    std::thread t2(test);
    std::thread t3(test_);
    std::thread t4(test_);

    t1.join();
    t2.join();
    t3.join();
    t4.join();

    std::cout << i << std::endl;
    return 0;
}
