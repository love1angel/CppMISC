include_directories(${gmock_SOURCE_DIR}/include ${gmock_SOURCE_DIR})
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

include_directories(include)

set(HEADER
        include/Originator.hpp
        )

set(SRC
        src/CareTaker.hpp
        src/Memento.hpp
        src/Originator.cpp
        )

add_executable(ut_memento
        test_memento.cc
        ${HEADER}
        ${SRC})

target_link_libraries(ut_memento gtest gtest_main)

add_test(NAME ut_memento COMMAND ut_memento)
