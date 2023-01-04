include_directories(${gmock_SOURCE_DIR}/include ${gmock_SOURCE_DIR})
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

include_directories(include)

set(HEADER
        include/Context.hpp
        include/Strategy.hpp
        )

set(SRC
        src/Context.cpp
        src/AddStrategy.hpp
        src/SubStrategy.hpp
        test_strategy.cc
        )

add_executable(ut_strategy
        ${HEADER}
        ${SRC})

target_link_libraries(ut_strategy gtest gtest_main)

add_test(NAME ut_strategy COMMAND ut_strategy)
