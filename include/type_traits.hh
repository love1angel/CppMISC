//
// Created by Helianthus Xie on 2022/8/25.
//

#ifndef STL_TYPE_TRAITS_HH
#define STL_TYPE_TRAITS_HH

namespace xp {
    template<bool, typename T2 = void>
    struct enable_if {
    };
    template<class T2>
    struct enable_if<true, T2> {
        using type = T2;
    };

    template<typename T1, typename T2>
    struct is_same {
        static constexpr bool value = false;
    };
    template<typename T>
    struct is_same<T, T> {
        static constexpr bool value = true;
    };
}

#endif //STL_TYPE_TRAITS_HH
