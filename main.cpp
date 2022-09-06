#include <iostream>
#include <vector>
#include "include/type_traits.hh"

enum int2 : int {
};
std::vector<int> vec{1, 2, 3};

template<typename T, typename T2 = typename xp::enable_if<xp::is_same<T, typeof(vec)>::value>::type>
typename T::size_type len(const T &t)
{
    return t.size();
}

#include "design_pattern/behavior/abstract_method/StrDisplay.hh"


int main()
{
    std::cout << len(vec) << std::endl;
    std::cout << typeid(xp::enable_if<true>::type).name() << std::endl;
    std::cout << xp::is_same<xp::enable_if<true>::type, int>::value << std::endl;

    StrDisplay display;
    display.display();
    return 0;
}
