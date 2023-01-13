include_directories(${gmock_SOURCE_DIR}/include ${gmock_SOURCE_DIR})
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

include_directories(include)

set(HEADER
        include/Component.hpp
        include/Composite.hpp
        include/Leaf.hpp
        )

set(SRC
        )

add_executable(ut_composite
        test_composite.cc
        ${HEADER}
        ${SRC})

target_link_libraries(ut_composite gtest gtest_main)

add_test(NAME ut_composite COMMAND ut_composite)
