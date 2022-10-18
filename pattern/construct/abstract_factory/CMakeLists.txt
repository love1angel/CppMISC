include_directories(${gmock_SOURCE_DIR}/include ${gmock_SOURCE_DIR})
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

include_directories(include)

set(HEADER
        include/AbstractApple.hpp
        include/AbstractBanana.hpp
        include/AbstractFactory.hpp
        src/CNApple.hpp
        src/CNBanana.hpp
        include/CNFactory.hpp
        src/USAApple.hpp
        src/USABanana.hpp
        include/USAFactory.hpp
        )

set(SRC
        src/CNFactory.cpp
        src/USAFactory.cpp
        test_abstract_factory.cc)

add_executable(ut_abstract_factory
        ${HEADER}
        ${SRC})

target_link_libraries(ut_abstract_factory gtest gtest_main)

add_test(NAME ut_abstract_factory COMMAND ut_singleton)
