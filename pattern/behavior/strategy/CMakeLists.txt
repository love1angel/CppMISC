include_directories(${gmock_SOURCE_DIR}/include ${gmock_SOURCE_DIR})
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

set(HEADER
        Context.hpp
        Strategy.hpp
        SubStrategy.hpp
        AddStrategy.hpp)

set(SRC
        test_strategy.cc)

add_executable(ut_strategy
        ${HEADER}
        ${SRC})

target_link_libraries(ut_strategy gtest gtest_main)

add_test(NAME ut_strategy COMMAND ut_strategy)
