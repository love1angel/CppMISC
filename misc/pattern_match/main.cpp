#include <variant>
#include <string>
#include <iostream>

template<typename... Callable>
struct Overloaded : Callable... {
    using Callable::operator()...;
};

template<typename... Callable>
Overloaded(Callable...) -> Overloaded<Callable...>;

using vars = std::variant<std::pair<int, int>, std::string, int, std::monostate>; 
void test(vars& v)
{
    std::visit( Overloaded {
		    [](std::pair<int, int> pair) { std::cout << pair.first << " " << pair.second << std::endl; },
		    [](int i) { std::cout << i << std::endl; },
		    [](std::string s) { std::cout << s << std::endl; },
		    [](std::monostate null) { std::cout << "there are no value" << std::endl; }
		}
		, v
		    );
}

int main()
{
    vars pair = std::make_pair<int, int>(1, 2);
    test(pair);

    vars i = 10;
    test(i);

    vars str = "hello, world";
    test(str);

    vars null = std::monostate();
    test(null);
    return 0;
}

