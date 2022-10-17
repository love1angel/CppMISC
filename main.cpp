#include <iostream>
//#include <vector>
//#include "include/type_traits.hh"
//#include <future>
//#include <atomic>
//
//enum int2 : int {
//};
//std::vector<int> vec{1, 2, 3};
//
//template<typename T, typename T2 = typename xp::enable_if<xp::is_same<T, typeof(vec)>::value>::type>
//typename T::size_type len(const T &t)
//{
//    return t.size();
//}
//
//
//volatile int i = 0;
//
//void test()
//{
//    for (int j = 0; j < 10; ++j) {
//        i = i + 1;
//    }
//}
//
//void test_()
//{
//    for (int j = 0; j < 10; ++j) {
//        i = i - 1;
//    }
//}
//
//#include <shared_mutex>
//#include <unordered_map>
//#include <atomic>
//
//std::shared_mutex mutex;

extern "C" {
extern int add(int, int) asm("add");
}

#include <string>
#include <vector>
#include <unordered_map>
#include <unordered_set>

using std::vector;
using std::string;

class Solution {
public:
    long long countSubarrays(vector<int> &nums, int minK, int maxK)
    {
        return 0LL;
    }
};

int main()
{
//    std::cout << len(vec) << std::endl;
//    std::cout << typeid(xp::enable_if<true>::type).name() << std::endl;
//    std::cout << xp::is_same<xp::enable_if<true>::type, int>::value << std::endl;
//
//    StrDisplay display;
//    display.display();

    Solution solution;
    std::vector<int> test{1, 3, 5, 2, 7, 5};
    std::cout << solution.countSubarrays(test, 1, 5) << std::endl;

//    int &&r1 = 3;
//    int &&r3 = static_cast<int &&>(r1);
//
//    r3 = 10;
//    std::cout << r1 << std::endl;
//    std::cout << r3 << std::endl;
//
//    std::unordered_map<int, int> map;
//    map[1] = 10;
//    map[2] = 10;
//
//    std::atomic<bool> flag = true;
//
//    bool curFlag = false;
//    std::cout << flag.compare_exchange_strong(curFlag, false, std::memory_order_acquire) << std::endl;
//
//    std::cout << flag.load(std::memory_order_relaxed) << std::endl;
//
//    std::thread t1(test);
//    std::thread t2(test);
//    std::thread t3(test_);
//    std::thread t4(test_);
//
//    t1.join();
//    t2.join();
//    t3.join();
//    t4.join();
//
//    std::cout << i << std::endl;
    return 0;
}
