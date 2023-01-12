include_directories(${gmock_SOURCE_DIR}/include ${gmock_SOURCE_DIR})
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

include_directories(include)

set(HEADER
        include/Proxy.hpp
        include/Subject.hpp
        )

set(SRC
        src/Proxy.cpp
        src/SubjectImpl.cpp
        src/SubjectImpl.hpp
        )

add_executable(ut_proxy
        test_proxy.cc
        ${HEADER}
        ${SRC})

target_link_libraries(ut_proxy gtest gtest_main)

add_test(NAME ut_proxy COMMAND ut_proxy)
