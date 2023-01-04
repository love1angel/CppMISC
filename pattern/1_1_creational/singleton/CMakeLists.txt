include_directories(${gmock_SOURCE_DIR}/include ${gmock_SOURCE_DIR})
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

set(HEADER
        Singleton.hpp)

set(SRC
        test_singleton.cc)

add_executable(ut_singleton
        ${HEADER}
        ${SRC})

target_link_libraries(ut_singleton gtest gtest_main)

add_test(NAME ut_singleton COMMAND ut_singleton)
