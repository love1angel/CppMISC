include_directories(${gmock_SOURCE_DIR}/include ${gmock_SOURCE_DIR})
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

include_directories(include)

set(HEADER
        include/IProvider.hpp
        include/IService.hpp
        )

set(SRC
        src/ProviderImpl.hpp
        src/ServiceImpl.hpp
        )

add_executable(ut_bridge
        test_bridge.cc
        ${HEADER}
        ${SRC})

target_link_libraries(ut_bridge gtest gtest_main)

add_test(NAME ut_bridge COMMAND ut_bridge)
