include_directories(${gmock_SOURCE_DIR}/include ${gmock_SOURCE_DIR})
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

include_directories(include)

set(HEADER
        include/Context.hpp
        include/State.hpp
        )

set(SRC
        src/Context.cpp
        src/InitState.cpp
        src/InitState.hpp
        src/WaitState.cpp
        src/WaitState.hpp
        test_state.cc
        )

add_executable(ut_state
        ${HEADER}
        ${SRC})

target_link_libraries(ut_state gtest gtest_main)

add_test(NAME ut_state COMMAND ut_state)
