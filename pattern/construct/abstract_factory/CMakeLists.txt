include_directories(${gmock_SOURCE_DIR}/include ${gmock_SOURCE_DIR})
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

include_directories(include)

set(HEADER
        include/AbstractApple.hpp
        include/AbstractBanana.hpp
        include/AbstractFactory.hpp
        )

set(SRC
        src/CNApple.hpp
        src/CNBanana.hpp
        src/CNFactory.hpp
        src/CNFactory.cpp
        DomainFactory.hpp
        DomainFactory.cpp
        src/USAApple.hpp
        src/USABanana.hpp
        src/USAFactory.hpp
        src/USAFactory.cpp
        test_abstract_factory.cc)

add_executable(ut_abstract_factory
        ${HEADER}
        ${SRC})

target_link_libraries(ut_abstract_factory gtest gtest_main)

add_test(NAME ut_abstract_factory COMMAND ut_abstract_factory)
