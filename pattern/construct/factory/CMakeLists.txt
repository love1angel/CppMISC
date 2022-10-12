

include_directories(${gmock_SOURCE_DIR}/include ${gmock_SOURCE_DIR})
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

set(HEADER
        Factory.hpp)

set(SRC
        test_factory.cc)

add_executable(ut_factory
        ${HEADER}
        ${SRC})

target_link_libraries(ut_factory gtest gtest_main)

add_test(ut_factory ut_factory)

