include_directories(${gmock_SOURCE_DIR}/include ${gmock_SOURCE_DIR})
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

include_directories(include)

set(HEADER
        include/Handler.hpp
        include/ConcreteHandler0.hpp
        include/ConcreteHandler1.hpp
        )

set(SRC
        )

add_executable(ut_chain_of_responsibility
        test_chain_of_responsibility.cc
        ${HEADER}
        ${SRC})

target_link_libraries(ut_chain_of_responsibility gtest gtest_main)

add_test(NAME ut_chain_of_responsibility COMMAND ut_chain_of_responsibility)
