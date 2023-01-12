include_directories(${gmock_SOURCE_DIR}/include ${gmock_SOURCE_DIR})
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

include_directories(include)

set(HEADER
        include/Subject.hpp
        )

set(SRC
        )

add_executable(ut_observer test_observer.cc
        ${HEADER}
        ${SRC})

target_link_libraries(ut_observer gtest gtest_main)

add_test(NAME ut_observer COMMAND ut_observer)
