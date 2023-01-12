include_directories(${gmock_SOURCE_DIR}/include ${gmock_SOURCE_DIR})
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

set(HEADER
        IDisplay.hpp
        StrDisplay.hpp)

set(SRC
        test_template.cc)

add_executable(ut_template
        ${HEADER}
        ${SRC})

target_link_libraries(ut_template gtest gtest_main)

add_test(NAME ut_template COMMAND ut_template)
