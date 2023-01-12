include_directories(${gmock_SOURCE_DIR}/include ${gmock_SOURCE_DIR})
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(ut_visitor
        test_visitor.cc
        )

target_link_libraries(ut_visitor gtest gtest_main)

add_test(NAME ut_visitor COMMAND ut_visitor)
