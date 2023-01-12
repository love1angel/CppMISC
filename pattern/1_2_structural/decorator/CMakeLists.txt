include_directories(${gmock_SOURCE_DIR}/include ${gmock_SOURCE_DIR})
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

include_directories(include)

set(HEADER
        include/ConferenceTicket.hpp
        include/CppBook.hpp
        include/DecoratedItem.hpp
        include/Discounted.hpp
        include/Item.hpp
        include/Taxed.hpp
        )

set(SRC
        test_decorator.cc
        )

add_executable(ut_decorator
        ${HEADER}
        ${SRC})

target_link_libraries(ut_decorator gtest gtest_main)

add_test(NAME ut_decorator COMMAND ut_decorator)
